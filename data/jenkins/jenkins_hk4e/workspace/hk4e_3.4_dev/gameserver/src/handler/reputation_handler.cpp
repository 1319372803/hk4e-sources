// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/reputation_handler.cpp

// Line 24: range 0000000015C8645E-0000000015C86B9B
int32_t __cdecl ReputationHandler::addPacketFuncToMap(
        ReputationHandler *const this,
        PacketFuncMap *process_packet_func_map)
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

  __x = 2872;
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
      "./src/handler/reputation_handler.cpp",
      "addPacketFuncToMap",
      25);
    common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2872LL);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2872;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2812;
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
        "./src/handler/reputation_handler.cpp",
        "addPacketFuncToMap",
        26);
      common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2812LL);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 2812;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 2821;
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
          "./src/handler/reputation_handler.cpp",
          "addPacketFuncToMap",
          27);
        common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2821LL);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 2821;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 2890;
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
            "./src/handler/reputation_handler.cpp",
            "addPacketFuncToMap",
            28);
          common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2890LL);
          common::milog::MiLogStream::~MiLogStream(&v13);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 2890;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 2899;
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
              "./src/handler/reputation_handler.cpp",
              "addPacketFuncToMap",
              29);
            common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2899LL);
            common::milog::MiLogStream::~MiLogStream(&v13);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 2899;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 2875;
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
                "./src/handler/reputation_handler.cpp",
                "addPacketFuncToMap",
                30);
              common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2875LL);
              common::milog::MiLogStream::~MiLogStream(&v13);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 2875;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 2897;
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
                  "./src/handler/reputation_handler.cpp",
                  "addPacketFuncToMap",
                  31);
                common::milog::MiLogStream::operator()(&v13, off_259BE5C0, 2897LL);
                common::milog::MiLogStream::~MiLogStream(&v13);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 2897;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                return 0;
              }
            }
          }
        }
      }
    }
  }
};

// Line 25: range 0000000015C84E8C-0000000015C851A8
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::GetCityReputationInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetCityReputationInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetCityReputationInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetCityReputationInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetCityReputationInfoReq const>(
         (const std::shared_ptr<const proto::GetCityReputationInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetCityReputationInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityReputationInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetCityReputationInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetCityReputationInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetCityReputationInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetCityReputationInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetCityReputationInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityReputationInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onGetCityReputationInfoReq(this, v8, rsp_0);
    proto::GetCityReputationInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetCityReputationInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetCityReputationInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetCityReputationInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetCityReputationInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetCityReputationInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetCityReputationInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetCityReputationInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetCityReputationInfoReq> *const)(v2 + 32));
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

// Line 26: range 0000000015C851AA-0000000015C854C6
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeCityReputationLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeCityReputationLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeCityReputationLevelRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeCityReputationLevelRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeCityReputationLevelRewardReq const>(
         (const std::shared_ptr<const proto::TakeCityReputationLevelRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeCityReputationLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeCityReputationLevelRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeCityReputationLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeCityReputationLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeCityReputationLevelRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeCityReputationLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onTakeCityReputationLevelRewardReq(this, v8, rsp_0);
    proto::TakeCityReputationLevelRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeCityReputationLevelRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeCityReputationLevelRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeCityReputationLevelRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeCityReputationLevelRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeCityReputationLevelRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeCityReputationLevelRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeCityReputationLevelRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeCityReputationLevelRewardReq> *const)(v2 + 32));
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

// Line 27: range 0000000015C854C8-0000000015C857E4
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeCityReputationParentQuestReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeCityReputationParentQuestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeCityReputationParentQuestRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeCityReputationParentQuestReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeCityReputationParentQuestReq const>(
         (const std::shared_ptr<const proto::TakeCityReputationParentQuestReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      27);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeCityReputationParentQuestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationParentQuestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeCityReputationParentQuestRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeCityReputationParentQuestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeCityReputationParentQuestRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeCityReputationParentQuestRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeCityReputationParentQuestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationParentQuestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onTakeCityReputationParentQuestReq(this, v8, rsp_0);
    proto::TakeCityReputationParentQuestRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeCityReputationParentQuestRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeCityReputationParentQuestRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeCityReputationParentQuestRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeCityReputationParentQuestRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeCityReputationParentQuestRsp>::~shared_ptr((std::shared_ptr<proto::TakeCityReputationParentQuestRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeCityReputationParentQuestReq const>::~shared_ptr((std::shared_ptr<const proto::TakeCityReputationParentQuestReq> *const)(v2 + 32));
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

// Line 28: range 0000000015C857E6-0000000015C85B02
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::AcceptCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AcceptCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AcceptCityReputationRequestRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AcceptCityReputationRequestReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AcceptCityReputationRequestReq const>(
         (const std::shared_ptr<const proto::AcceptCityReputationRequestReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AcceptCityReputationRequestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AcceptCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AcceptCityReputationRequestRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AcceptCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AcceptCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AcceptCityReputationRequestRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AcceptCityReputationRequestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AcceptCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onAcceptCityReputationRequestReq(this, v8, rsp_0);
    proto::AcceptCityReputationRequestRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AcceptCityReputationRequestRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AcceptCityReputationRequestRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AcceptCityReputationRequestRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AcceptCityReputationRequestRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AcceptCityReputationRequestRsp>::~shared_ptr((std::shared_ptr<proto::AcceptCityReputationRequestRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AcceptCityReputationRequestReq const>::~shared_ptr((std::shared_ptr<const proto::AcceptCityReputationRequestReq> *const)(v2 + 32));
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

// Line 29: range 0000000015C85B04-0000000015C85E20
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::CancelCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CancelCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CancelCityReputationRequestRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CancelCityReputationRequestReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CancelCityReputationRequestReq const>(
         (const std::shared_ptr<const proto::CancelCityReputationRequestReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CancelCityReputationRequestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CancelCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CancelCityReputationRequestRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CancelCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CancelCityReputationRequestRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CancelCityReputationRequestRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CancelCityReputationRequestReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CancelCityReputationRequestReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onCancelCityReputationRequestReq(this, v8, rsp_0);
    proto::CancelCityReputationRequestRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CancelCityReputationRequestRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CancelCityReputationRequestRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CancelCityReputationRequestRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CancelCityReputationRequestRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CancelCityReputationRequestRsp>::~shared_ptr((std::shared_ptr<proto::CancelCityReputationRequestRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CancelCityReputationRequestReq const>::~shared_ptr((std::shared_ptr<const proto::CancelCityReputationRequestReq> *const)(v2 + 32));
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

// Line 30: range 0000000015C85E22-0000000015C8613E
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::GetCityReputationMapInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetCityReputationMapInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetCityReputationMapInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetCityReputationMapInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetCityReputationMapInfoReq const>(
         (const std::shared_ptr<const proto::GetCityReputationMapInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetCityReputationMapInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityReputationMapInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetCityReputationMapInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetCityReputationMapInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetCityReputationMapInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetCityReputationMapInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetCityReputationMapInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityReputationMapInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onGetCityReputationMapInfoReq(this, v8, rsp_0);
    proto::GetCityReputationMapInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetCityReputationMapInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetCityReputationMapInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetCityReputationMapInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetCityReputationMapInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetCityReputationMapInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetCityReputationMapInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetCityReputationMapInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetCityReputationMapInfoReq> *const)(v2 + 32));
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

// Line 31: range 0000000015C86140-0000000015C8645C
int __cdecl ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const ReputationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReputationHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeCityReputationExploreRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeCityReputationExploreRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeCityReputationExploreRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ReputationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeCityReputationExploreRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeCityReputationExploreRewardReq const>(
         (const std::shared_ptr<const proto::TakeCityReputationExploreRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeCityReputationExploreRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationExploreRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeCityReputationExploreRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeCityReputationExploreRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeCityReputationExploreRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeCityReputationExploreRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeCityReputationExploreRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCityReputationExploreRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ReputationHandler::onTakeCityReputationExploreRewardReq(this, v8, rsp_0);
    proto::TakeCityReputationExploreRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeCityReputationExploreRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeCityReputationExploreRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeCityReputationExploreRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeCityReputationExploreRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeCityReputationExploreRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeCityReputationExploreRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeCityReputationExploreRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeCityReputationExploreRewardReq> *const)(v2 + 32));
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

// Line 36: range 0000000015C86B9C-0000000015C86E51
int32_t __cdecl ReputationHandler::onGetCityReputationInfoReq(
        ReputationHandler *const this,
        const proto::GetCityReputationInfoReq *req,
        proto::GetCityReputationInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  int32_t v7; // r14d
  uint32_t ReputationComp; // eax
  common::milog::MiLogStream *v9; // rax
  CityReputation *v10; // r14
  proto::CityReputationInfo *v11; // rax
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 city_id:37 64 16 17 reputation_ptr:45";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onGetCityReputationInfoReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::GetCityReputationInfoReq::city_id(req);
  proto::GetCityReputationInfoRsp::set_city_id(rsp_0, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v7 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
    PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 64), ReputationComp);
    if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/reputation_handler.cpp",
        "onGetCityReputationInfoReq",
        48);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v14,
             (const char (*)[38])"findCityReputationPtr fails, city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v11 = proto::GetCityReputationInfoRsp::mutable_city_reputation_info(rsp_0);
      v7 = CityReputation::toClient(v10, v11);
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 64));
  }
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

// Line 55: range 0000000015C86E52-0000000015C872E9
int32_t __cdecl ReputationHandler::onTakeCityReputationLevelRewardReq(
        ReputationHandler *const this,
        const proto::TakeCityReputationLevelRewardReq *req,
        proto::TakeCityReputationLevelRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  PlayerSceneComp *SceneComp; // rax
  int32_t v9; // r14d
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v11; // r14
  CityReputation *v12; // r14
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  proto::ItemParam *v15; // rax
  int32_t result; // eax
  std::vector<ItemParam>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-100h]
  const ItemParam *item; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 ret:69 64 16 17 reputation_ptr:62 96 24 19 display_item_vec:68";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onTakeCityReputationLevelRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  v6 = proto::TakeCityReputationLevelRewardReq::city_id(req);
  proto::TakeCityReputationLevelRewardRsp::set_city_id(rsp_0, v6);
  v7 = proto::TakeCityReputationLevelRewardReq::level(req);
  proto::TakeCityReputationLevelRewardRsp::set_level(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v9 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
    proto::TakeCityReputationLevelRewardReq::city_id(req);
    PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 64), ReputationComp);
    if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/reputation_handler.cpp",
        "onTakeCityReputationLevelRewardReq",
        65);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v22,
              (const char (*)[38])"findCityReputationPtr fails, city_id:");
      *(_DWORD *)(v3 + 48) = proto::TakeCityReputationLevelRewardReq::city_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v9 = -1;
    }
    else
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 96));
      v12 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v13 = proto::TakeCityReputationLevelRewardReq::level(req);
      *(_DWORD *)(v3 + 48) = CityReputation::takeLevelReward(v12, v13, (std::vector<ItemParam> *)(v3 + 96));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/reputation_handler.cpp",
          "onTakeCityReputationLevelRewardReq",
          72);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v22,
                (const char (*)[28])"takeLevelReward fails, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v9 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        __for_range = (std::vector<ItemParam> *)(v3 + 96);
        __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 96))._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
        {
          item = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
          v15 = proto::TakeCityReputationLevelRewardRsp::add_item_list(rsp_0);
          ItemParam::toClient(item, v15);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
        }
        v9 = 0;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 96));
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 64));
  }
  result = v9;
  if ( v23 == (char *)v3 )
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

// Line 83: range 0000000015C872EA-0000000015C879A3
int32_t __cdecl ReputationHandler::onTakeCityReputationParentQuestReq(
        ReputationHandler *const this,
        const proto::TakeCityReputationParentQuestReq *req,
        proto::TakeCityReputationParentQuestRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  int32_t v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v10; // r14
  CityReputation *v11; // rax
  ItemParam *M_current; // r15
  ItemParam *v13; // r14
  PlayerItemComp *ItemComp; // rax
  proto::ItemParam *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  int32_t ret; // [rsp+30h] [rbp-170h]
  uint32_t parent_quest; // [rsp+34h] [rbp-16Ch]
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+38h] [rbp-168h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+40h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-148h]
  std::vector<ItemParam> *__for_range_0; // [rsp+60h] [rbp-140h]
  const ItemParam *item; // [rsp+68h] [rbp-138h]
  std::vector<ItemParam> __x; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-110h] BYREF
  char v30[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 17 reputation_ptr:94 64 24 18 total_item_vec:102 128 24 20 display_item_vec:103";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onTakeCityReputationParentQuestReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  v6 = proto::TakeCityReputationParentQuestReq::city_id(req);
  proto::TakeCityReputationParentQuestRsp::set_city_id(rsp_0, v6);
  if ( proto::TakeCityReputationParentQuestReq::parent_quest_list_size(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      v7 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
      proto::TakeCityReputationParentQuestReq::city_id(req);
      PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 32), ReputationComp);
      if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/reputation_handler.cpp",
          "onTakeCityReputationParentQuestReq",
          97);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v29,
                (const char (*)[38])"findCityReputationPtr fails, city_id:");
        val = proto::TakeCityReputationParentQuestReq::city_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v7 = -1;
      }
      else
      {
        ret = 0;
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 64));
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
        __for_range = proto::TakeCityReputationParentQuestReq::parent_quest_list(req);
        __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
        __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
        while ( __for_begin != __for_end )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          parent_quest = *__for_begin;
          std::vector<ItemParam>::clear((std::vector<ItemParam> *const)(v3 + 128));
          v11 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          ret = CityReputation::takeParentQuestReward(v11, parent_quest, (std::vector<ItemParam> *)(v3 + 128));
          if ( !ret )
          {
            proto::TakeCityReputationParentQuestRsp::add_parent_quest_list(rsp_0, parent_quest);
            M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
            v13 = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
            __for_begin_0._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 64))._M_current;
            __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
              (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_end_0,
              &__for_begin_0);
            std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
              (std::vector<ItemParam> *const)(v3 + 64),
              (std::vector<ItemParam>::const_iterator)__for_end_0._M_current,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v13,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current);
          }
          ++__for_begin;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        PlayerItemComp::getMergedItemParamVec(&__x, ItemComp, (const std::vector<ItemParam> *)(v3 + 64));
        std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 64), &__x);
        std::vector<ItemParam>::~vector(&__x);
        __for_range_0 = (std::vector<ItemParam> *)(v3 + 64);
        __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 64))._M_current;
        __for_end_0._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
        {
          item = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
          v15 = proto::TakeCityReputationParentQuestRsp::add_item_list(rsp_0);
          ItemParam::toClient(item, v15);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
        }
        if ( proto::TakeCityReputationParentQuestRsp::parent_quest_list_size(rsp_0) <= 0 )
        {
          if ( ret )
            v7 = ret;
          else
            v7 = -1;
        }
        else
        {
          v7 = 0;
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 64));
      }
      std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "onTakeCityReputationParentQuestReq",
      87);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v29,
      (const char (*)[27])"parent_quest_list is empty");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  result = v7;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 129: range 0000000015C879A4-0000000015C87C74
int32_t __cdecl ReputationHandler::onAcceptCityReputationRequestReq(
        ReputationHandler *const this,
        const proto::AcceptCityReputationRequestReq *req,
        proto::AcceptCityReputationRequestRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  PlayerSceneComp *SceneComp; // rax
  int32_t v9; // r14d
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v11; // r14
  CityReputation *v12; // r14
  uint32_t v13; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 reputation_ptr:136";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onAcceptCityReputationRequestReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::AcceptCityReputationRequestReq::city_id(req);
  proto::AcceptCityReputationRequestRsp::set_city_id(rsp_0, v6);
  v7 = proto::AcceptCityReputationRequestReq::request_id(req);
  proto::AcceptCityReputationRequestRsp::set_request_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v9 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
    proto::AcceptCityReputationRequestReq::city_id(req);
    PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 32), ReputationComp);
    if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/reputation_handler.cpp",
        "onAcceptCityReputationRequestReq",
        139);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v17,
              (const char (*)[38])"findCityReputationPtr fails, city_id:");
      val = proto::AcceptCityReputationRequestReq::city_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v13 = proto::AcceptCityReputationRequestReq::request_id(req);
      v9 = CityReputation::acceptRequest(v12, v13);
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 32));
  }
  result = v9;
  if ( v18 == (char *)v3 )
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

// Line 146: range 0000000015C87C76-0000000015C87F46
int32_t __cdecl ReputationHandler::onCancelCityReputationRequestReq(
        ReputationHandler *const this,
        const proto::CancelCityReputationRequestReq *req,
        proto::CancelCityReputationRequestRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  PlayerSceneComp *SceneComp; // rax
  int32_t v9; // r14d
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v11; // r14
  CityReputation *v12; // r14
  uint32_t v13; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 reputation_ptr:153";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onCancelCityReputationRequestReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::CancelCityReputationRequestReq::city_id(req);
  proto::CancelCityReputationRequestRsp::set_city_id(rsp_0, v6);
  v7 = proto::CancelCityReputationRequestReq::request_id(req);
  proto::CancelCityReputationRequestRsp::set_request_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v9 = 512;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
    proto::CancelCityReputationRequestReq::city_id(req);
    PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 32), ReputationComp);
    if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/reputation_handler.cpp",
        "onCancelCityReputationRequestReq",
        156);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v17,
              (const char (*)[38])"findCityReputationPtr fails, city_id:");
      val = proto::CancelCityReputationRequestReq::city_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v13 = proto::CancelCityReputationRequestReq::request_id(req);
      v9 = CityReputation::cancelRequest(v12, v13);
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 32));
  }
  result = v9;
  if ( v18 == (char *)v3 )
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

// Line 163: range 0000000015C87F48-0000000015C87FEF
int32_t __cdecl ReputationHandler::onGetCityReputationMapInfoReq(
        ReputationHandler *const this,
        const proto::GetCityReputationMapInfoReq *req,
        proto::GetCityReputationMapInfoRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rax
  PlayerReputationComp *ReputationComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ReputationComp = Player::getReputationComp(this->player_);
  return PlayerReputationComp::getCityReputationMapInfo(ReputationComp, rsp_0);
};

// Line 173: range 0000000015C87FF0-0000000015C886A9
int32_t __cdecl ReputationHandler::onTakeCityReputationExploreRewardReq(
        ReputationHandler *const this,
        const proto::TakeCityReputationExploreRewardReq *req,
        proto::TakeCityReputationExploreRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  int32_t v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v10; // r14
  CityReputation *v11; // rax
  ItemParam *M_current; // r15
  ItemParam *v13; // r14
  PlayerItemComp *ItemComp; // rax
  proto::ItemParam *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  int32_t ret; // [rsp+30h] [rbp-170h]
  uint32_t explore_id; // [rsp+34h] [rbp-16Ch]
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+38h] [rbp-168h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+40h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-148h]
  std::vector<ItemParam> *__for_range_0; // [rsp+60h] [rbp-140h]
  const ItemParam *item; // [rsp+68h] [rbp-138h]
  std::vector<ItemParam> __x; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-110h] BYREF
  char v30[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 18 reputation_ptr:184 64 24 18 total_item_vec:192 128 24 20 display_item_vec:193";
  *(_QWORD *)(v3 + 16) = ReputationHandler::onTakeCityReputationExploreRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  v6 = proto::TakeCityReputationExploreRewardReq::city_id(req);
  proto::TakeCityReputationExploreRewardRsp::set_city_id(rsp_0, v6);
  if ( proto::TakeCityReputationExploreRewardReq::explore_id_list_size(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      v7 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
      proto::TakeCityReputationExploreRewardReq::city_id(req);
      PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 32), ReputationComp);
      if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/reputation_handler.cpp",
          "onTakeCityReputationExploreRewardReq",
          187);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v29,
                (const char (*)[38])"findCityReputationPtr fails, city_id:");
        val = proto::TakeCityReputationExploreRewardReq::city_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v7 = -1;
      }
      else
      {
        ret = 0;
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 64));
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
        __for_range = proto::TakeCityReputationExploreRewardReq::explore_id_list(req);
        __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
        __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
        while ( __for_begin != __for_end )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          explore_id = *__for_begin;
          std::vector<ItemParam>::clear((std::vector<ItemParam> *const)(v3 + 128));
          v11 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          ret = CityReputation::takeExploreReward(v11, explore_id, (std::vector<ItemParam> *)(v3 + 128));
          if ( !ret )
          {
            proto::TakeCityReputationExploreRewardRsp::add_explore_id_list(rsp_0, explore_id);
            M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
            v13 = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
            __for_begin_0._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 64))._M_current;
            __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
              (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_end_0,
              &__for_begin_0);
            std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
              (std::vector<ItemParam> *const)(v3 + 64),
              (std::vector<ItemParam>::const_iterator)__for_end_0._M_current,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v13,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current);
          }
          ++__for_begin;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        PlayerItemComp::getMergedItemParamVec(&__x, ItemComp, (const std::vector<ItemParam> *)(v3 + 64));
        std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 64), &__x);
        std::vector<ItemParam>::~vector(&__x);
        __for_range_0 = (std::vector<ItemParam> *)(v3 + 64);
        __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 64))._M_current;
        __for_end_0._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
        {
          item = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
          v15 = proto::TakeCityReputationExploreRewardRsp::add_item_list(rsp_0);
          ItemParam::toClient(item, v15);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
        }
        if ( proto::TakeCityReputationExploreRewardRsp::explore_id_list_size(rsp_0) <= 0 )
        {
          if ( ret )
            v7 = ret;
          else
            v7 = -1;
        }
        else
        {
          v7 = 0;
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 64));
      }
      std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/reputation_handler.cpp",
      "onTakeCityReputationExploreRewardReq",
      177);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v29,
      (const char (*)[25])"explore_id_list is empty");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  result = v7;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
