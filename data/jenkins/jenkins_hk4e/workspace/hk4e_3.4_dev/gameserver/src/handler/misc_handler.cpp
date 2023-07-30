// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/misc_handler.cpp

// Line 25: range 000000001689B422-000000001689BA13
int32_t __cdecl MiscHandler::addPacketFuncToMap(
        MiscHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  MiscHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  MiscHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MiscHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  MiscHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  __m128i v17; // [rsp+0h] [rbp-E0h] BYREF
  __m128i v18; // [rsp+10h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+28h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+30h] [rbp-B0h]
  MiscHandler *thisa; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+4Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v24; // [rsp+50h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+58h] [rbp-88h] BYREF
  int (*__f[2])(MiscHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+60h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>),MiscHandler*,const std::_Placeholder<1>&>::type v27; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10075;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v24, &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/misc_handler.cpp",
      "addPacketFuncToMap",
      26);
    common::milog::MiLogStream::operator()(&v28, off_25E0B640, 10075LL);
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v17.m128i_i64[0] = (__int64)MiscHandler::onMultiserverServiceTypeNotify;
    v17.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v17);
    std::bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>),MiscHandler*,std::_Placeholder<1> const&>(
      &v27,
      __f,
      (MiscHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10075;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MiscHandler*,std::_Placeholder<1>)>>(
      v7,
      &v27);
    __x = 10048;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v24, &__y) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/misc_handler.cpp",
        "addPacketFuncToMap",
        27);
      common::milog::MiLogStream::operator()(&v28, off_25E0B640, 10048LL);
      common::milog::MiLogStream::~MiLogStream(&v28);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v18.m128i_i64[0] = (__int64)MiscHandler::onMatchServiceStopNotify;
      v18.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v18);
      std::bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>),MiscHandler*,std::_Placeholder<1> const&>(
        &v27,
        __f,
        (MiscHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10048;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MiscHandler*,std::_Placeholder<1>)>>(
        v10,
        &v27);
      __x = 10097;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v24, &__y) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/misc_handler.cpp",
          "addPacketFuncToMap",
          28);
        common::milog::MiLogStream::operator()(&v28, off_25E0B640, 10097LL);
        common::milog::MiLogStream::~MiLogStream(&v28);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(MiscHandler *, std::shared_ptr<common::minet::Packet>))MiscHandler::onMatchServiceStopImplementNotify;
        __f[1] = 0LL;
        std::bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>),MiscHandler*,std::_Placeholder<1> const&>(
          &v27,
          __f,
          (MiscHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10097;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MiscHandler*,std::_Placeholder<1>)>>(
          v13,
          &v27);
        __x = 10148;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v24, &__y) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/misc_handler.cpp",
            "addPacketFuncToMap",
            29);
          common::milog::MiLogStream::operator()(&v28, off_25E0B640, 10148LL);
          common::milog::MiLogStream::~MiLogStream(&v28);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(MiscHandler *, std::shared_ptr<common::minet::Packet>))MiscHandler::onSavePlayerExtraBinDataNotify;
          __f[1] = 0LL;
          std::bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>),MiscHandler*,std::_Placeholder<1> const&>(
            &v27,
            __f,
            (MiscHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10148;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MiscHandler*,std::_Placeholder<1>)>>(
            v16,
            &v27);
          return 0;
        }
      }
    }
  }
};

// Line 35: range 000000001689BA14-000000001689BE71
int32_t __cdecl MiscHandler::onMultiserverServiceTypeNotify(
        MiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int v6; // eax
  GameserverService *v7; // rax
  common::minet::Packet *v8; // rax
  uint32_t SourceAppId; // eax
  const char *v10; // rax
  common::minet::Packet *v11; // rax
  uint32_t v12; // eax
  const char *v13; // rax
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-104h] BYREF
  size_t idx; // [rsp+20h] [rbp-100h]
  const proto::MultiserverServiceTypeNotify *notify; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 notify_ptr:36 64 24 11 type_vec:39";
  *(_QWORD *)(v2 + 16) = MiscHandler::onMultiserverServiceTypeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MultiserverServiceTypeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MultiserverServiceTypeNotify const>(
         (const std::shared_ptr<const proto::MultiserverServiceTypeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/misc_handler.cpp",
      "onMultiserverServiceTypeNotify",
      36);
    common::milog::MiLogStream::operator()(&v19, off_25E0E2A0);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MultiserverServiceTypeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MultiserverServiceTypeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    for ( idx = 0LL; ; ++idx )
    {
      v6 = proto::MultiserverServiceTypeNotify::service_type_list_size(notify);
      if ( idx >= v6 )
        break;
      __x = proto::MultiserverServiceTypeNotify::service_type_list(notify, idx);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), &__x);
    }
    v7 = ServiceBox::findService<GameserverService>();
    if ( !GameserverService::isMultiserverServiceAllStart(v7, (const std::vector<unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/misc_handler.cpp",
        "onMultiserverServiceTypeNotify",
        48);
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      SourceAppId = common::minet::Packet::getSourceAppId(v8);
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v19, SourceAppId);
      v10 = (const char *)std::string::c_str(&v19);
      common::milog::MiLogStream::operator()(
        &v18,
        "multiserver services have not all registered at nodeserver, nodeserver_id=%s",
        v10);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/misc_handler.cpp",
        "onMultiserverServiceTypeNotify",
        52);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v12 = common::minet::Packet::getSourceAppId(v11);
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v19, v12);
      v13 = (const char *)std::string::c_str(&v19);
      common::milog::MiLogStream::operator()(
        &v18,
        "multiserver services have all registered at nodeserver, nodeserver_id=%s",
        v13);
    }
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MultiserverServiceTypeNotify const>::~shared_ptr((std::shared_ptr<const proto::MultiserverServiceTypeNotify> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 59: range 000000001689BE72-000000001689C1BA
int32_t __cdecl MiscHandler::onMatchServiceStopNotify(MiscHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<proto::MatchServiceStopImplementNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::MatchServiceStopNotify *v8; // rdx
  GameserverService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchServiceStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<proto::MatchServiceStopImplementNotify> p_proto_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 notify_ptr:60 64 16 18 impl_notify_ptr:64";
  *(_QWORD *)(v2 + 16) = MiscHandler::onMatchServiceStopNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchServiceStopNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchServiceStopNotify const>(
         (const std::shared_ptr<const proto::MatchServiceStopNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/misc_handler.cpp",
      "onMatchServiceStopNotify",
      60);
    common::milog::MiLogStream::operator()(&v14, off_25E0E480);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchServiceStopNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchServiceStopNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/misc_handler.cpp",
      "onMatchServiceStopNotify",
      61);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"MatchServiceStopNotify: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v14, notify);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v14);
    std::string::~string(&v14);
    common::milog::MiLogStream::~MiLogStream(&v13);
    common::tools::perf::make_shared<proto::MatchServiceStopImplementNotify>();
    v7 = std::__shared_ptr_access<proto::MatchServiceStopImplementNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MatchServiceStopImplementNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = proto::MatchServiceStopImplementNotify::mutable_msg(v7);
    proto::MatchServiceStopNotify::CopyFrom(v8, notify);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MatchServiceStopImplementNotify>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MatchServiceStopImplementNotify> *)(v2 + 64));
    GameserverService::broadcastToAllThread<proto::MatchServiceStopImplementNotify>(v9, &p_proto_ptr);
    std::shared_ptr<proto::MatchServiceStopImplementNotify>::~shared_ptr(&p_proto_ptr);
    v5 = 0;
    std::shared_ptr<proto::MatchServiceStopImplementNotify>::~shared_ptr((std::shared_ptr<proto::MatchServiceStopImplementNotify> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MatchServiceStopNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchServiceStopNotify> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 72: range 000000001689C264-000000001689C53B
int32_t __cdecl MiscHandler::onMatchServiceStopImplementNotify(
        MiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  GameserverService *v7; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchServiceStopImplementNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-90h] BYREF
  char v13[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:73";
  *(_QWORD *)(v2 + 16) = MiscHandler::onMatchServiceStopImplementNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchServiceStopImplementNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchServiceStopImplementNotify const>(
         (const std::shared_ptr<const proto::MatchServiceStopImplementNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/misc_handler.cpp",
      "onMatchServiceStopImplementNotify",
      73);
    common::milog::MiLogStream::operator()(&v12, off_25E0E5A0);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchServiceStopImplementNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchServiceStopImplementNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/misc_handler.cpp",
      "onMatchServiceStopImplementNotify",
      74);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v11,
           (const char (*)[34])"MatchServiceStopImplementNotify: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v12, notify);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v12);
    std::string::~string(&v12);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = ServiceBox::findService<GameserverService>();
    p_player_mgr = &GameserverService::getGameThreadLocal(v7)->player_mgr;
    std::function<ForeachPolicy ()(Player &)>::function<MiscHandler::onMatchServiceStopImplementNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v12,
      (MiscHandler::onMatchServiceStopImplementNotify::<lambda(Player&)>)notify);
    PlayerMgr::foreachPlayer(p_player_mgr, (std::function<ForeachPolicy(Player&)> *)&v12);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
    v5 = 0;
  }
  std::shared_ptr<proto::MatchServiceStopImplementNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchServiceStopImplementNotify> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 75: range 000000001689C1BC-000000001689C262
ForeachPolicy __cdecl MiscHandler::onMatchServiceStopImplementNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1}::operator()(
        const MiscHandler::onMatchServiceStopImplementNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  const proto::MatchServiceStopNotify *v3; // rax
  google::protobuf::uint32 v4; // ebx
  PlayerMatchComp *MatchComp; // rax
  PlayerMatchComp *v6; // rax

  if ( !Player::isConnected(player) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = proto::MatchServiceStopImplementNotify::msg(__closure->__notify);
  v4 = proto::MatchServiceStopNotify::server_id(v3);
  MatchComp = Player::getMatchComp(player);
  if ( v4 == PlayerMatchComp::getMatchServerId(MatchComp) )
  {
    v6 = Player::getMatchComp(player);
    PlayerMatchComp::clearMatchInfo(v6, MATCH_SYSTEM_ERROR);
  }
  return 0;
};

// Line 94: range 000000001689C53C-000000001689C861
int32_t __cdecl MiscHandler::onSavePlayerExtraBinDataNotify(
        MiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> v12; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-90h] BYREF
  char v15[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:95";
  *(_QWORD *)(v2 + 16) = MiscHandler::onSavePlayerExtraBinDataNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::SavePlayerExtraBinDataNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SavePlayerExtraBinDataNotify>(
         (const std::shared_ptr<proto::SavePlayerExtraBinDataNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/misc_handler.cpp",
      "onSavePlayerExtraBinDataNotify",
      95);
    common::milog::MiLogStream::operator()(&v14, off_25E0E6C0);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/misc_handler.cpp",
      "onSavePlayerExtraBinDataNotify",
      96);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v13, (const char (*)[9])"notify: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v14, notify);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v14);
    std::string::~string(&v14);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v7 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(v7->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v8;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
    v5 = v9(v7, &v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
  }
  std::shared_ptr<proto::SavePlayerExtraBinDataNotify>::~shared_ptr((std::shared_ptr<proto::SavePlayerExtraBinDataNotify> *const)(v2 + 32));
  result = v5;
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
