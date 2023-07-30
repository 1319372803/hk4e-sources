// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_codex_handler.cpp

// Line 23: range 00000000168A6D16-00000000168A7043
int32_t __cdecl CodexHandler::addPacketFuncToMap(CodexHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v7; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __x = 4203;
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
      "./src/handler/player_codex_handler.cpp",
      "addPacketFuncToMap",
      24);
    common::milog::MiLogStream::operator()(&v9, off_25E0B640, 4203LL);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 4203;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 4202;
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
        "./src/handler/player_codex_handler.cpp",
        "addPacketFuncToMap",
        25);
      common::milog::MiLogStream::operator()(&v9, off_25E0B640, 4202LL);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 4202;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 4208;
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
          "./src/handler/player_codex_handler.cpp",
          "addPacketFuncToMap",
          26);
        common::milog::MiLogStream::operator()(&v9, off_25E0B640, 4208LL);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 4208;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        return 0;
      }
    }
  }
};

// Line 24: range 00000000168A63BC-00000000168A66D8
int __cdecl CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CodexHandler *this; // r14
  std::__shared_ptr_access<const proto::QueryCodexMonsterBeKilledNumReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QueryCodexMonsterBeKilledNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QueryCodexMonsterBeKilledNumReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QueryCodexMonsterBeKilledNumReq const>(
         (const std::shared_ptr<const proto::QueryCodexMonsterBeKilledNumReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_codex_handler.cpp",
      "operator()",
      24);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QueryCodexMonsterBeKilledNumReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QueryCodexMonsterBeKilledNumReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QueryCodexMonsterBeKilledNumRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QueryCodexMonsterBeKilledNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QueryCodexMonsterBeKilledNumRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QueryCodexMonsterBeKilledNumRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QueryCodexMonsterBeKilledNumReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QueryCodexMonsterBeKilledNumReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CodexHandler::onQueryCodexMonsterBeKilledNumReq(this, v8, rsp_0);
    proto::QueryCodexMonsterBeKilledNumRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QueryCodexMonsterBeKilledNumRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp>::~shared_ptr((std::shared_ptr<proto::QueryCodexMonsterBeKilledNumRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QueryCodexMonsterBeKilledNumReq const>::~shared_ptr((std::shared_ptr<const proto::QueryCodexMonsterBeKilledNumReq> *const)(v2 + 32));
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

// Line 25: range 00000000168A66DA-00000000168A69F6
int __cdecl CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CodexHandler *this; // r14
  std::__shared_ptr_access<const proto::ViewCodexReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ViewCodexRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ViewCodexRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ViewCodexReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ViewCodexReq const>((const std::shared_ptr<const proto::ViewCodexReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_codex_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ViewCodexReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ViewCodexReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ViewCodexRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ViewCodexRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ViewCodexRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ViewCodexRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ViewCodexReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ViewCodexReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CodexHandler::onViewCodexReq(this, v8, rsp_0);
    proto::ViewCodexRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ViewCodexRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ViewCodexRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ViewCodexRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ViewCodexRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ViewCodexRsp>::~shared_ptr((std::shared_ptr<proto::ViewCodexRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ViewCodexReq const>::~shared_ptr((std::shared_ptr<const proto::ViewCodexReq> *const)(v2 + 32));
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

// Line 26: range 00000000168A69F8-00000000168A6D14
int __cdecl CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const CodexHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CodexHandler *this; // r14
  std::__shared_ptr_access<const proto::SetCodexPushtipsReadReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetCodexPushtipsReadRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetCodexPushtipsReadRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CodexHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetCodexPushtipsReadReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetCodexPushtipsReadReq const>(
         (const std::shared_ptr<const proto::SetCodexPushtipsReadReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_codex_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetCodexPushtipsReadReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetCodexPushtipsReadReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetCodexPushtipsReadRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetCodexPushtipsReadRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetCodexPushtipsReadRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetCodexPushtipsReadRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetCodexPushtipsReadReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetCodexPushtipsReadReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CodexHandler::onSetCodexPushtipsReadReq(this, v8, rsp_0);
    proto::SetCodexPushtipsReadRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetCodexPushtipsReadRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetCodexPushtipsReadRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetCodexPushtipsReadRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetCodexPushtipsReadRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetCodexPushtipsReadRsp>::~shared_ptr((std::shared_ptr<proto::SetCodexPushtipsReadRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetCodexPushtipsReadReq const>::~shared_ptr((std::shared_ptr<const proto::SetCodexPushtipsReadReq> *const)(v2 + 32));
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

// Line 33: range 00000000168A7044-00000000168A747B
int32_t __cdecl CodexHandler::onQueryCodexMonsterBeKilledNumReq(
        CodexHandler *const this,
        const proto::QueryCodexMonsterBeKilledNumReq *req,
        proto::QueryCodexMonsterBeKilledNumRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::set<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  PlayerCodexComp *CodexComp; // rax
  PlayerCodexComp *v13; // rax
  int32_t result; // eax
  int ret; // [rsp+28h] [rbp-118h]
  int reta; // [rsp+28h] [rbp-118h]
  unsigned int codex_id; // [rsp+2Ch] [rbp-114h]
  unsigned __int64 val; // [rsp+30h] [rbp-110h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-108h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 killed_num:45 64 4 15 captured_num:47 80 48 15 codex_id_set:34";
  *(_QWORD *)(v3 + 16) = CodexHandler::onQueryCodexMonsterBeKilledNumReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862724] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
  v6 = proto::QueryCodexMonsterBeKilledNumReq::codex_id_list(req);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    (std::set<unsigned int> *)(v3 + 80),
    v6);
  v7 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 80));
  if ( v7 == proto::QueryCodexMonsterBeKilledNumReq::codex_id_list_size(req) )
  {
    ret = 0;
    __for_range = proto::QueryCodexMonsterBeKilledNumReq::codex_id_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      codex_id = *__for_begin;
      *(_DWORD *)(v3 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      CodexComp = Player::getCodexComp(this->player_);
      reta = PlayerCodexComp::getCodexMonsterBeKilledNum(CodexComp, codex_id, (uint32_t *)(v3 + 48)) | ret;
      *(_DWORD *)(v3 + 64) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = Player::getCodexComp(this->player_);
      ret = PlayerCodexComp::getCodexMonsterBeCapturedNum(v13, codex_id, (uint32_t *)(v3 + 64)) | reta;
      proto::QueryCodexMonsterBeKilledNumRsp::add_codex_id_list(rsp_0, codex_id);
      proto::QueryCodexMonsterBeKilledNumRsp::add_be_killed_num_list(rsp_0, *(_DWORD *)(v3 + 48));
      proto::QueryCodexMonsterBeKilledNumRsp::add_be_captured_num_list(rsp_0, *(_DWORD *)(v3 + 64));
      ++__for_begin;
    }
    v11 = ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_codex_handler.cpp",
      "onQueryCodexMonsterBeKilledNumReq",
      38);
    v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v23,
           (const char (*)[21])"codex_id_set.size():");
    val = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 80));
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v9,
            (const char (*)[27])" req.codex_id_list_size():");
    *(_DWORD *)(v3 + 64) = proto::QueryCodexMonsterBeKilledNumReq::codex_id_list_size(req);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v11 = -1;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  result = v11;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 58: range 00000000168A747C-00000000168A79B7
int32_t __cdecl CodexHandler::onViewCodexReq(
        CodexHandler *const this,
        const proto::ViewCodexReq *req,
        proto::ViewCodexRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  proto::CodexType v6; // eax
  PlayerCodexComp *CodexComp; // r15
  uint32_t v8; // r14d
  proto::CodexType v9; // eax
  PlayerCodexComp *v10; // rax
  PlayerCodexComp *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CodexTypeData>::const_iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::CodexTypeData>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::CodexTypeData> *__for_range; // [rsp+48h] [rbp-128h]
  const std::deque<unsigned int> *recent_viewed_pushtips_deque; // [rsp+50h] [rbp-120h]
  const proto::CodexTypeData *type_data; // [rsp+58h] [rbp-118h]
  proto::CodexTypeData *rsp_type_data; // [rsp+60h] [rbp-110h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+68h] [rbp-108h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-100h]
  const unsigned int *codex_id; // [rsp+78h] [rbp-F8h]
  std::deque<unsigned int>::const_reverse_iterator __y; // [rsp+80h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 31 valid_push_tips_codex_id_vec:59 96 32 7 iter:85";
  *(_QWORD *)(v3 + 16) = CodexHandler::onViewCodexReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  __for_range = proto::ViewCodexReq::type_data_list(req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CodexTypeData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CodexTypeData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    type_data = google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeData const>::operator*(&__for_begin);
    rsp_type_data = proto::ViewCodexRsp::add_type_data_list(rsp_0);
    v6 = proto::CodexTypeData::type(type_data);
    proto::CodexTypeData::set_type(rsp_type_data, v6);
    __for_range_0 = proto::CodexTypeData::codex_id_list(type_data);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end_0 )
    {
      codex_id = __for_begin_0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      CodexComp = Player::getCodexComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *codex_id;
      v9 = proto::CodexTypeData::type(type_data);
      if ( !PlayerCodexComp::viewCodex(CodexComp, v9, v8) )
      {
        if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::CodexTypeData::add_codex_id_list(rsp_type_data, *codex_id);
        proto::CodexTypeData::add_have_viewed_list(rsp_type_data, 1);
        if ( proto::CodexTypeData::type(type_data) == CODEX_PUSHTIPS )
          std::vector<unsigned int>::emplace_back<unsigned int const&>(
            (std::vector<unsigned int> *const)(v3 + 32),
            codex_id,
            codex_id);
      }
      ++__for_begin_0;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeData const>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Player::getCodexComp(this->player_);
  PlayerCodexComp::tryReadPushTipsAndTakeReward(v10, (std::vector<unsigned int> *)(v3 + 32), rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = Player::getCodexComp(this->player_);
  recent_viewed_pushtips_deque = PlayerCodexComp::getRecentViewedPushtipsDeque(v11);
  std::deque<unsigned int>::rbegin(
    (std::deque<unsigned int>::const_reverse_iterator *)(v3 + 96),
    recent_viewed_pushtips_deque);
  while ( 1 )
  {
    std::deque<unsigned int>::rend(&__y, recent_viewed_pushtips_deque);
    if ( !std::operator!=<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*>>(
            (const std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*> > *)(v3 + 96),
            &__y) )
      break;
    v12 = (google::protobuf::uint32 *)std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*>>::operator*((const std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ViewCodexRsp::add_recent_viewed_pushtips_list(rsp_0, *v12);
    std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*>>::operator++(
      &__y,
      (std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*> > *const)(v3 + 96),
      0);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = 0;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 94: range 00000000168A79B8-00000000168A7C08
int32_t __cdecl CodexHandler::onSetCodexPushtipsReadReq(
        CodexHandler *const this,
        const proto::SetCodexPushtipsReadReq *req,
        proto::SetCodexPushtipsReadRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerCodexComp *CodexComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 codex_id:95 64 4 10 type_id:96";
  *(_QWORD *)(v3 + 16) = CodexHandler::onSetCodexPushtipsReadReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::SetCodexPushtipsReadReq::codex_id(req);
  *(_DWORD *)(v3 + 64) = proto::SetCodexPushtipsReadReq::type_id(req);
  proto::SetCodexPushtipsReadRsp::set_codex_id(rsp_0, *(_DWORD *)(v3 + 48));
  proto::SetCodexPushtipsReadRsp::set_type_id(rsp_0, *(_DWORD *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CodexComp = Player::getCodexComp(this->player_);
  if ( PlayerCodexComp::setCodexPushtipsLastRead(CodexComp, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_codex_handler.cpp",
      "onSetCodexPushtipsReadReq",
      101);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v12,
           (const char (*)[56])"failed to set codex pushtips read last time, codex_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])"type_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v13 == (char *)v3 )
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
