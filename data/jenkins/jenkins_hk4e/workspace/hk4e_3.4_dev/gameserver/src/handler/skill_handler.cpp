// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/skill_handler.cpp

// Line 27: range 0000000015C8F092-0000000015C8F3BF
int32_t __cdecl SkillHandler::addPacketFuncToMap(SkillHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v7; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __x = 1072;
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
      "./src/handler/skill_handler.cpp",
      "addPacketFuncToMap",
      28);
    common::milog::MiLogStream::operator()(&v9, off_259BE5C0, 1072LL);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 1072;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1073;
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
        "./src/handler/skill_handler.cpp",
        "addPacketFuncToMap",
        29);
      common::milog::MiLogStream::operator()(&v9, off_259BE5C0, 1073LL);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 1073;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 1075;
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
          "./src/handler/skill_handler.cpp",
          "addPacketFuncToMap",
          30);
        common::milog::MiLogStream::operator()(&v9, off_259BE5C0, 1075LL);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 1075;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        return 0;
      }
    }
  }
};

// Line 28: range 0000000015C8E738-0000000015C8EA54
int __cdecl SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SkillHandler *this; // r14
  std::__shared_ptr_access<const proto::UnlockAvatarTalentReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UnlockAvatarTalentRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UnlockAvatarTalentRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnlockAvatarTalentReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UnlockAvatarTalentReq const>(
         (const std::shared_ptr<const proto::UnlockAvatarTalentReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UnlockAvatarTalentReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockAvatarTalentReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UnlockAvatarTalentRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UnlockAvatarTalentRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UnlockAvatarTalentRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UnlockAvatarTalentRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UnlockAvatarTalentReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockAvatarTalentReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SkillHandler::onUnlockAvatarTalentReq(this, v8, rsp_0);
    proto::UnlockAvatarTalentRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UnlockAvatarTalentRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UnlockAvatarTalentRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UnlockAvatarTalentRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UnlockAvatarTalentRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UnlockAvatarTalentRsp>::~shared_ptr((std::shared_ptr<proto::UnlockAvatarTalentRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UnlockAvatarTalentReq const>::~shared_ptr((std::shared_ptr<const proto::UnlockAvatarTalentReq> *const)(v2 + 32));
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

// Line 29: range 0000000015C8EA56-0000000015C8ED72
int __cdecl SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SkillHandler *this; // r14
  std::__shared_ptr_access<const proto::ProudSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ProudSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ProudSkillUpgradeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ProudSkillUpgradeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ProudSkillUpgradeReq const>(
         (const std::shared_ptr<const proto::ProudSkillUpgradeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ProudSkillUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ProudSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ProudSkillUpgradeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ProudSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ProudSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ProudSkillUpgradeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ProudSkillUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ProudSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SkillHandler::onProudSkillUpgradeReq(this, v8, rsp_0);
    proto::ProudSkillUpgradeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ProudSkillUpgradeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ProudSkillUpgradeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ProudSkillUpgradeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ProudSkillUpgradeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ProudSkillUpgradeRsp>::~shared_ptr((std::shared_ptr<proto::ProudSkillUpgradeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ProudSkillUpgradeReq const>::~shared_ptr((std::shared_ptr<const proto::ProudSkillUpgradeReq> *const)(v2 + 32));
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

// Line 30: range 0000000015C8ED74-0000000015C8F090
int __cdecl SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const SkillHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SkillHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarSkillUpgradeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SkillHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarSkillUpgradeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarSkillUpgradeReq const>(
         (const std::shared_ptr<const proto::AvatarSkillUpgradeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarSkillUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarSkillUpgradeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarSkillUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarSkillUpgradeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarSkillUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarSkillUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SkillHandler::onAvatarSkillUpgradeReq(this, v8, rsp_0);
    proto::AvatarSkillUpgradeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarSkillUpgradeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarSkillUpgradeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarSkillUpgradeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarSkillUpgradeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarSkillUpgradeRsp>::~shared_ptr((std::shared_ptr<proto::AvatarSkillUpgradeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarSkillUpgradeReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarSkillUpgradeReq> *const)(v2 + 32));
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

// Line 36: range 0000000015C8F3C0-0000000015C8F8AB
int32_t __cdecl SkillHandler::onUnlockAvatarTalentReq(
        SkillHandler *const this,
        const proto::UnlockAvatarTalentReq *req,
        proto::UnlockAvatarTalentRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  PlayerAvatarComp *v11; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  TalentComp *TalentComp; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  uint32_t talent_id; // [rsp+28h] [rbp-168h]
  int32_t ret; // [rsp+2Ch] [rbp-164h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-150h] BYREF
  char v23[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 avatar_guid:39 64 16 20 formal_avatar_ptr:43 96 48 19 fight_prop_guard:37 176 48 24 re"
                        "fresh_ability_guard:38";
  *(_QWORD *)(v3 + 16) = SkillHandler::onUnlockAvatarTalentReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 96));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  *(_QWORD *)(v3 + 32) = proto::UnlockAvatarTalentReq::avatar_guid(req);
  talent_id = proto::UnlockAvatarTalentReq::talent_id(req);
  proto::UnlockAvatarTalentRsp::set_avatar_guid(rsp_0, *(_QWORD *)(v3 + 32));
  proto::UnlockAvatarTalentRsp::set_talent_id(rsp_0, talent_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "onUnlockAvatarTalentReq",
      46);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v22,
           (const char (*)[29])"findFormalAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", avatar_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v10 = 104;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getAvatarComp(this->player_);
    std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
      &p_avatar_ptr,
      (const std::shared_ptr<FormalAvatar> *)(v3 + 64));
    LOBYTE(v11) = PlayerAvatarComp::isAvatarSwitchClosed(v11, &p_avatar_ptr);
    std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
    if ( (_BYTE)v11 )
    {
      v10 = 142;
    }
    else
    {
      v12 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      FightPropGuard::addCreature((FightPropGuard *const)(v3 + 96), v12, 0);
      v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 176), v13);
      v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      TalentComp = Avatar::getTalentComp(v14);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ret = TalentComp::unlockTalent(TalentComp, this->player_, talent_id);
      v10 = ret;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 96));
  result = v10;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 0000000015C8F8AC-0000000015C8FD97
int32_t __cdecl SkillHandler::onProudSkillUpgradeReq(
        SkillHandler *const this,
        const proto::ProudSkillUpgradeReq *req,
        proto::ProudSkillUpgradeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  PlayerAvatarComp *v11; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  TalentComp *TalentComp; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  uint32_t proud_skill_id; // [rsp+28h] [rbp-168h]
  int32_t ret; // [rsp+2Ch] [rbp-164h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-150h] BYREF
  char v23[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 avatar_guid:67 64 16 20 formal_avatar_ptr:71 96 48 19 fight_prop_guard:65 176 48 24 re"
                        "fresh_ability_guard:66";
  *(_QWORD *)(v3 + 16) = SkillHandler::onProudSkillUpgradeReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 96));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  *(_QWORD *)(v3 + 32) = proto::ProudSkillUpgradeReq::avatar_guid(req);
  proud_skill_id = proto::ProudSkillUpgradeReq::proud_skill_id(req);
  proto::ProudSkillUpgradeRsp::set_avatar_guid(rsp_0, *(_QWORD *)(v3 + 32));
  proto::ProudSkillUpgradeRsp::set_proud_skill_id(rsp_0, proud_skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "onProudSkillUpgradeReq",
      74);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v22,
           (const char (*)[29])"findFormalAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", avatar_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v10 = 104;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getAvatarComp(this->player_);
    std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
      &p_avatar_ptr,
      (const std::shared_ptr<FormalAvatar> *)(v3 + 64));
    LOBYTE(v11) = PlayerAvatarComp::isAvatarSwitchClosed(v11, &p_avatar_ptr);
    std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
    if ( (_BYTE)v11 )
    {
      v10 = 142;
    }
    else
    {
      v12 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      FightPropGuard::addCreature((FightPropGuard *const)(v3 + 96), v12, 0);
      v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 176), v13);
      v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      TalentComp = Avatar::getTalentComp(v14);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ret = TalentComp::upgradeProudSkill(TalentComp, this->player_, proud_skill_id);
      v10 = ret;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 96));
  result = v10;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 92: range 0000000015C8FD98-0000000015C902F7
int32_t __cdecl SkillHandler::onAvatarSkillUpgradeReq(
        SkillHandler *const this,
        const proto::AvatarSkillUpgradeReq *req,
        proto::AvatarSkillUpgradeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  PlayerAvatarComp *v11; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  SkillComp *SkillComp; // rdi
  int32_t result; // eax
  uint32_t avatar_skill_id; // [rsp+24h] [rbp-18Ch]
  uint32_t old_level; // [rsp+28h] [rbp-188h]
  int32_t ret; // [rsp+2Ch] [rbp-184h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-170h] BYREF
  char v24[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 cur_level:116 64 8 14 avatar_guid:95 96 16 21 formal_avatar_ptr:101 128 48 19 fight_pr"
                        "op_guard:93 208 48 24 refresh_ability_guard:94";
  *(_QWORD *)(v3 + 16) = SkillHandler::onAvatarSkillUpgradeReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 128));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 208));
  *(_QWORD *)(v3 + 64) = proto::AvatarSkillUpgradeReq::avatar_guid(req);
  avatar_skill_id = proto::AvatarSkillUpgradeReq::avatar_skill_id(req);
  old_level = proto::AvatarSkillUpgradeReq::old_level(req);
  proto::AvatarSkillUpgradeRsp::set_avatar_guid(rsp_0, *(_QWORD *)(v3 + 64));
  proto::AvatarSkillUpgradeRsp::set_avatar_skill_id(rsp_0, avatar_skill_id);
  proto::AvatarSkillUpgradeRsp::set_old_level(rsp_0, old_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 96), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/skill_handler.cpp",
      "onAvatarSkillUpgradeReq",
      104);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v23,
           (const char (*)[29])"findFormalAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", avatar_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v10 = 104;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getAvatarComp(this->player_);
    std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
      &p_avatar_ptr,
      (const std::shared_ptr<FormalAvatar> *)(v3 + 96));
    LOBYTE(v11) = PlayerAvatarComp::isAvatarSwitchClosed(v11, &p_avatar_ptr);
    std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
    if ( (_BYTE)v11 )
    {
      v10 = 142;
    }
    else
    {
      v12 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      FightPropGuard::addCreature((FightPropGuard *const)(v3 + 128), v12, 0);
      v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 208), v13);
      *(_DWORD *)(v3 + 48) = old_level;
      v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      SkillComp = Avatar::getSkillComp(v14);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      {
        SkillComp = (SkillComp *)&this->player_;
        __asan_report_load8();
      }
      ret = SkillComp::upgradeAvatarSkill(SkillComp, this->player_, avatar_skill_id, old_level, (uint32_t *)(v3 + 48));
      proto::AvatarSkillUpgradeRsp::set_cur_level(rsp_0, *(_DWORD *)(v3 + 48));
      v10 = ret;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 96));
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 208));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 128));
  result = v10;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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
