// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/scene_play_handler.cpp

// Line 29: range 0000000015C8B99C-0000000015C8BE76
int32_t __cdecl ScenePlayHandler::addPacketFuncToMap(
        ScenePlayHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  ScenePlayHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-84h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v10; // [rsp+20h] [rbp-80h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  int (*__f[2])(ScenePlayHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+30h] [rbp-70h] BYREF
  std::_Bind_helper<false,int (ScenePlayHandler::*)(std::shared_ptr<common::minet::Packet>),ScenePlayHandler*,const std::_Placeholder<1>&>::type v13; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-40h] BYREF

  __x = 4448;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v10._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v10, &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/scene_play_handler.cpp",
      "addPacketFuncToMap",
      30);
    common::milog::MiLogStream::operator()(&v14, off_259BE5C0, 4448LL);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 4448;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 4385;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v10._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v10, &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/scene_play_handler.cpp",
        "addPacketFuncToMap",
        31);
      common::milog::MiLogStream::operator()(&v14, off_259BE5C0, 4385LL);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 4385;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 4353;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v10._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v10, &__y) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/scene_play_handler.cpp",
          "addPacketFuncToMap",
          32);
        common::milog::MiLogStream::operator()(&v14, off_259BE5C0, 4353LL);
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 4353;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 4355;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v10._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v10, &__y) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/scene_play_handler.cpp",
            "addPacketFuncToMap",
            33);
          common::milog::MiLogStream::operator()(&v14, off_259BE5C0, 4355LL);
          common::milog::MiLogStream::~MiLogStream(&v14);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __f[0] = (int (*)(ScenePlayHandler *, std::shared_ptr<common::minet::Packet>))ScenePlayHandler::onScenePlayOutofRegionNotify;
          __f[1] = 0LL;
          std::bind<int (ScenePlayHandler::*)(std::shared_ptr<common::minet::Packet>),ScenePlayHandler*,std::_Placeholder<1> const&>(
            &v13,
            __f,
            (ScenePlayHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v6,
            v7);
          __x = 4355;
          v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ScenePlayHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ScenePlayHandler*,std::_Placeholder<1>)>>(
            v8,
            &v13);
          return 0;
        }
      }
    }
  }
};

// Line 30: range 0000000015C8B042-0000000015C8B35E
int __cdecl ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ScenePlayHandler *this; // r14
  std::__shared_ptr_access<const proto::ScenePlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ScenePlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ScenePlayOwnerCheckRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ScenePlayOwnerCheckReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ScenePlayOwnerCheckReq const>(
         (const std::shared_ptr<const proto::ScenePlayOwnerCheckReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_play_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ScenePlayOwnerCheckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ScenePlayOwnerCheckRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ScenePlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ScenePlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ScenePlayOwnerCheckRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ScenePlayOwnerCheckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ScenePlayHandler::onScenePlayOwnerCheckReq(this, v8, rsp_0);
    proto::ScenePlayOwnerCheckRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ScenePlayOwnerCheckRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ScenePlayOwnerCheckRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ScenePlayOwnerCheckRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ScenePlayOwnerCheckRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ScenePlayOwnerCheckRsp>::~shared_ptr((std::shared_ptr<proto::ScenePlayOwnerCheckRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ScenePlayOwnerCheckReq const>::~shared_ptr((std::shared_ptr<const proto::ScenePlayOwnerCheckReq> *const)(v2 + 32));
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

// Line 31: range 0000000015C8B360-0000000015C8B67C
int __cdecl ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ScenePlayHandler *this; // r14
  std::__shared_ptr_access<const proto::ScenePlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ScenePlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ScenePlayOwnerStartInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ScenePlayOwnerStartInviteReq const>(
         (const std::shared_ptr<const proto::ScenePlayOwnerStartInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_play_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ScenePlayOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ScenePlayOwnerStartInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ScenePlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ScenePlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ScenePlayOwnerStartInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ScenePlayOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ScenePlayHandler::onScenePlayOwnerStartInviteReq(this, v8, rsp_0);
    proto::ScenePlayOwnerStartInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ScenePlayOwnerStartInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp>::~shared_ptr((std::shared_ptr<proto::ScenePlayOwnerStartInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ScenePlayOwnerStartInviteReq const>::~shared_ptr((std::shared_ptr<const proto::ScenePlayOwnerStartInviteReq> *const)(v2 + 32));
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

// Line 32: range 0000000015C8B67E-0000000015C8B99A
int __cdecl ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const ScenePlayHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ScenePlayHandler *this; // r14
  std::__shared_ptr_access<const proto::ScenePlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ScenePlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ScenePlayHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ScenePlayGuestReplyInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ScenePlayGuestReplyInviteReq const>(
         (const std::shared_ptr<const proto::ScenePlayGuestReplyInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_play_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ScenePlayGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ScenePlayGuestReplyInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ScenePlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ScenePlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ScenePlayGuestReplyInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ScenePlayGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ScenePlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ScenePlayHandler::onScenePlayGuestReplyInviteReq(this, v8, rsp_0);
    proto::ScenePlayGuestReplyInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ScenePlayGuestReplyInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp>::~shared_ptr((std::shared_ptr<proto::ScenePlayGuestReplyInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ScenePlayGuestReplyInviteReq const>::~shared_ptr((std::shared_ptr<const proto::ScenePlayGuestReplyInviteReq> *const)(v2 + 32));
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

// Line 39: range 0000000015C8BE78-0000000015C8C33D
int32_t __cdecl ScenePlayHandler::onScenePlayOwnerCheckReq(
        ScenePlayHandler *const this,
        const proto::ScenePlayOwnerCheckReq *req,
        proto::ScenePlayOwnerCheckRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerScenePlayComp *ScenePlayComp; // rax
  int *v7; // r8
  unsigned int *v8; // r9
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  int32_t v13; // r14d
  PlayerScenePlayComp *v14; // r14
  uint32_t Uid; // eax
  uint32_t v16; // edx
  int32_t result; // eax
  std::vector<unsigned int> *v18; // [rsp+0h] [rbp-140h]
  bool is_skip_match; // [rsp+2Fh] [rbp-111h]
  uint32_t play_id; // [rsp+30h] [rbp-110h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-F8h]
  std::tuple<int&,unsigned int&,std::vector<unsigned int>&> v25; // [rsp+50h] [rbp-F0h] BYREF
  std::tuple<int,unsigned int,std::vector<unsigned int> > __in; // [rsp+70h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 6 ret:45 48 4 12 wrong_uid:46 64 24 12 param_vec:47";
  *(_QWORD *)(v3 + 16) = ScenePlayHandler::onScenePlayOwnerCheckReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  play_id = proto::ScenePlayOwnerCheckReq::play_id(req);
  is_skip_match = proto::ScenePlayOwnerCheckReq::is_skip_match(req);
  proto::ScenePlayOwnerCheckRsp::set_play_id(rsp_0, play_id);
  proto::ScenePlayOwnerCheckRsp::set_is_skip_match(rsp_0, is_skip_match);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ScenePlayComp = Player::getScenePlayComp(this->player_);
  PlayerScenePlayComp::checkInviteFlowCond(&__in, ScenePlayComp, play_id, is_skip_match);
  std::tie<int,unsigned int,std::vector<unsigned int>>(
    &v25,
    (int *)(v3 + 32),
    (unsigned int *)(v3 + 48),
    (std::vector<unsigned int> *)(v3 + 64),
    v7,
    v8,
    v18);
  std::tuple<int &,unsigned int &,std::vector<unsigned int> &>::operator=<int,unsigned int,std::vector<unsigned int>>(
    &v25,
    &__in);
  std::tuple<int,unsigned int,std::vector<unsigned int>>::~tuple(&__in);
  if ( *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/scene_play_handler.cpp",
      "onScenePlayOwnerCheckReq",
      51);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)&__in,
           (const char (*)[47])"[SCENE_PLAY] checkInviteFlowCond failed, ret: ");
    v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" ,wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
    proto::ScenePlayOwnerCheckRsp::set_wrong_uid(rsp_0, *(_DWORD *)(v3 + 48));
    __for_range = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ScenePlayOwnerCheckRsp::add_param_list(rsp_0, *v12);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v13 = *(_DWORD *)(v3 + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = Player::getScenePlayComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    if ( PlayerScenePlayComp::isScenePlayRewardRemained(v14, play_id, Uid) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getUid(this->player_);
      proto::ScenePlayOwnerCheckRsp::set_wrong_uid(rsp_0, v16);
      v13 = 1220;
    }
    else
    {
      v13 = 0;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v13;
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

// Line 71: range 0000000015C8C33E-0000000015C8C73A
int32_t __cdecl ScenePlayHandler::onScenePlayOwnerStartInviteReq(
        ScenePlayHandler *const this,
        const proto::ScenePlayOwnerStartInviteReq *req,
        proto::ScenePlayOwnerStartInviteRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerScenePlayComp *ScenePlayComp; // rax
  int *v7; // r8
  unsigned int *v8; // r9
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r14d
  PlayerScenePlayComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  std::vector<unsigned int> *v16; // [rsp+0h] [rbp-140h]
  bool is_skip_match; // [rsp+2Fh] [rbp-111h]
  std::tuple<int&,unsigned int&,std::vector<unsigned int>&> v19; // [rsp+30h] [rbp-110h] BYREF
  std::tuple<int,unsigned int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 10 play_id:72 64 4 6 ret:77 80 4 12 wrong_uid:78 96 24 12 param_vec:79";
  *(_QWORD *)(v3 + 16) = ScenePlayHandler::onScenePlayOwnerStartInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::ScenePlayOwnerStartInviteReq::play_id(req);
  is_skip_match = proto::ScenePlayOwnerStartInviteReq::is_skip_match(req);
  proto::ScenePlayOwnerStartInviteRsp::set_play_id(rsp_0, *(_DWORD *)(v3 + 48));
  proto::ScenePlayOwnerStartInviteRsp::set_is_skip_match(rsp_0, is_skip_match);
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ScenePlayComp = Player::getScenePlayComp(this->player_);
  PlayerScenePlayComp::checkInviteFlowCond(&__in, ScenePlayComp, *(_DWORD *)(v3 + 48), is_skip_match);
  std::tie<int,unsigned int,std::vector<unsigned int>>(
    &v19,
    (int *)(v3 + 64),
    (unsigned int *)(v3 + 80),
    (std::vector<unsigned int> *)(v3 + 96),
    v7,
    v8,
    v16);
  std::tuple<int &,unsigned int &,std::vector<unsigned int> &>::operator=<int,unsigned int,std::vector<unsigned int>>(
    &v19,
    &__in);
  std::tuple<int,unsigned int,std::vector<unsigned int>>::~tuple(&__in);
  if ( *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_play_handler.cpp",
      "onScenePlayOwnerStartInviteReq",
      83);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)&__in,
           (const char (*)[47])"[SCENE_PLAY] checkInviteFlowCond failed, ret: ");
    v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
    v12 = *(_DWORD *)(v3 + 64);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getScenePlayComp(this->player_);
    *(_DWORD *)(v3 + 64) = PlayerScenePlayComp::startInviteFlow(v13, *(_DWORD *)(v3 + 48), is_skip_match);
    if ( *(_DWORD *)(v3 + 64) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_play_handler.cpp",
        "onScenePlayOwnerStartInviteReq",
        90);
      v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)&__in,
              (const char (*)[47])"[SCENE_PLAY] startInviteFlow failed, play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
      v12 = *(_DWORD *)(v3 + 64);
    }
    else
    {
      v12 = 0;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  result = v12;
  if ( v21 == (char *)v3 )
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

// Line 98: range 0000000015C8C73C-0000000015C8CB9A
int32_t __cdecl ScenePlayHandler::onScenePlayGuestReplyInviteReq(
        ScenePlayHandler *const this,
        const proto::ScenePlayGuestReplyInviteReq *req,
        proto::ScenePlayGuestReplyInviteRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rax
  PlayerScenePlayComp *ScenePlayComp; // r15
  uint32_t v11; // eax
  int32_t result; // eax
  bool is_agree; // [rsp+2Bh] [rbp-B5h]
  uint32_t play_id; // [rsp+2Ch] [rbp-B4h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 13 world_ptr:104 64 16 20 owner_player_ptr:111";
  *(_QWORD *)(v3 + 16) = ScenePlayHandler::onScenePlayGuestReplyInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  play_id = proto::ScenePlayGuestReplyInviteReq::play_id(req);
  is_agree = proto::ScenePlayGuestReplyInviteReq::is_agree(req);
  proto::ScenePlayGuestReplyInviteRsp::set_play_id(rsp_0, play_id);
  proto::ScenePlayGuestReplyInviteRsp::set_is_agree(rsp_0, is_agree);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_play_handler.cpp",
      "onScenePlayGuestReplyInviteReq",
      107);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v16,
      (const char (*)[27])"[SCENE_PLAY] world is null");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_play_handler.cpp",
        "onScenePlayGuestReplyInviteReq",
        114);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v16,
        (const char (*)[33])"[SCENE_PLAY] getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Uid == Player::getUid(v8) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_play_handler.cpp",
          "onScenePlayGuestReplyInviteReq",
          120);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v16,
          (const char (*)[34])"[SCENE_PLAY] guest is world owner");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v6 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        ScenePlayComp = Player::getScenePlayComp(v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getUid(this->player_);
        v6 = PlayerScenePlayComp::onGuestReplyInvite(ScenePlayComp, play_id, v11, is_agree);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v6;
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

// Line 129: range 0000000015C8CB9C-0000000015C8D042
int32_t __cdecl ScenePlayHandler::onScenePlayOutofRegionNotify(
        ScenePlayHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  Player *v6; // rax
  PlayerMpPlayComp *MpPlayComp; // rax
  Player *v8; // rax
  PlayerMpPlayComp *v9; // rcx
  Player *v10; // rax
  PlayerScenePlayComp *ScenePlayComp; // rcx
  int32_t result; // eax
  google::protobuf::uint32 play_id; // [rsp+14h] [rbp-DCh]
  std::__shared_ptr_access<proto::ScenePlayOutofRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:130 64 16 13 world_ptr:131 96 16 20 owner_player_ptr:137";
  *(_QWORD *)(v2 + 16) = ScenePlayHandler::onScenePlayOutofRegionNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ScenePlayOutofRegionNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ScenePlayOutofRegionNotify>(
         (const std::shared_ptr<proto::ScenePlayOutofRegionNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_play_handler.cpp",
      "onScenePlayOutofRegionNotify",
      130);
    common::milog::MiLogStream::operator()(&v15, off_259C4FC0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ScenePlayOutofRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ScenePlayOutofRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_play_handler.cpp",
        "onScenePlayOutofRegionNotify",
        134);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v15,
        (const char (*)[27])"[SCENE_PLAY] world is null");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_play_handler.cpp",
          "onScenePlayOutofRegionNotify",
          140);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v15,
          (const char (*)[33])"[SCENE_PLAY] getOwnPlayer failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
      }
      else
      {
        play_id = proto::ScenePlayOutofRegionNotify::play_id(notify);
        v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        MpPlayComp = Player::getMpPlayComp(v6);
        if ( PlayerMpPlayComp::isMpPlayOpen(MpPlayComp, play_id) )
        {
          v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v9 = Player::getMpPlayComp(v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v5 = PlayerMpPlayComp::onOutofRegionNotify(v9, play_id, this->player_);
        }
        else
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          ScenePlayComp = Player::getScenePlayComp(v10);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v5 = PlayerScenePlayComp::onOutofRegionNotify(ScenePlayComp, play_id, this->player_);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ScenePlayOutofRegionNotify>::~shared_ptr((std::shared_ptr<proto::ScenePlayOutofRegionNotify> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
