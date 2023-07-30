// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/handler/pathfinding_handler.cpp

// Line 48: range 000000000CB68286-000000000CB68AD3
int32_t __cdecl PathfindingHandler::addPacketFuncToMap(
        PathfindingHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  PathfindingHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  PathfindingHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
  PathfindingHandler **v13; // r8
  const std::_Placeholder<1> *v14; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  PathfindingHandler **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-E0h] BYREF
  __m128i v20; // [rsp+10h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+28h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+30h] [rbp-B0h]
  PathfindingHandler *thisa; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+4Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v26; // [rsp+50h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+58h] [rbp-88h] BYREF
  int (*__f[2])(PathfindingHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+60h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>),PathfindingHandler*,const std::_Placeholder<1>&>::type v29; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 2372;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v26, &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/pathfinding_handler.cpp",
      "addPacketFuncToMap",
      49);
    common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2372LL);
    common::milog::MiLogStream::~MiLogStream(&v30);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v19.m128i_i64[0] = (__int64)PathfindingHandler::onQueryPathReq;
    v19.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v19);
    std::bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>),PathfindingHandler*,std::_Placeholder<1> const&>(
      &v29,
      __f,
      (PathfindingHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 2372;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PathfindingHandler*,std::_Placeholder<1>)>>(
      v7,
      &v29);
    __x = 2398;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v26, &__y) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/pathfinding_handler.cpp",
        "addPacketFuncToMap",
        50);
      common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2398LL);
      common::milog::MiLogStream::~MiLogStream(&v30);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v20.m128i_i64[0] = (__int64)PathfindingHandler::onQueryPathRsp;
      v20.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v20);
      std::bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>),PathfindingHandler*,std::_Placeholder<1> const&>(
        &v29,
        __f,
        (PathfindingHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 2398;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PathfindingHandler*,std::_Placeholder<1>)>>(
        v10,
        &v29);
      __x = 2312;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v26, &__y) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/pathfinding_handler.cpp",
          "addPacketFuncToMap",
          51);
        common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2312LL);
        common::milog::MiLogStream::~MiLogStream(&v30);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __x = 2312;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
          v11,
          (PathfindingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 2335;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v26, &__y) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/pathfinding_handler.cpp",
            "addPacketFuncToMap",
            52);
          common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2335LL);
          common::milog::MiLogStream::~MiLogStream(&v30);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __x = 2335;
          v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
            v12,
            (PathfindingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 2307;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v26, &__y) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/pathfinding_handler.cpp",
              "addPacketFuncToMap",
              53);
            common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2307LL);
            common::milog::MiLogStream::~MiLogStream(&v30);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __f[0] = (int (*)(PathfindingHandler *, std::shared_ptr<common::minet::Packet>))PathfindingHandler::onPathfindingEnterSceneReq;
            __f[1] = 0LL;
            std::bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>),PathfindingHandler*,std::_Placeholder<1> const&>(
              &v29,
              __f,
              (PathfindingHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v13,
              v14);
            __x = 2307;
            v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PathfindingHandler*,std::_Placeholder<1>)>>(
              v15,
              &v29);
            __x = 2321;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v26._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v26, &__y) )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/pathfinding_handler.cpp",
                "addPacketFuncToMap",
                54);
              common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 2321LL);
              common::milog::MiLogStream::~MiLogStream(&v30);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __f[0] = (int (*)(PathfindingHandler *, std::shared_ptr<common::minet::Packet>))PathfindingHandler::onPathfindingEnterSceneRsp;
              __f[1] = 0LL;
              std::bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>),PathfindingHandler*,std::_Placeholder<1> const&>(
                &v29,
                __f,
                (PathfindingHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v16,
                v17);
              __x = 2321;
              v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PathfindingHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PathfindingHandler*,std::_Placeholder<1>)>>(
                v18,
                &v29);
              return 0;
            }
          }
        }
      }
    }
  }
};

// Line 51: range 000000000CB67DCE-000000000CB68039
int __cdecl PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const PathfindingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int v6; // r14d
  PathfindingHandler *this; // r14
  int result; // eax
  std::shared_ptr<common::minet::Packet> v9; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 72 9 notify:51";
  *(_QWORD *)(v2 + 16) = PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::ObstacleModifyNotify::ObstacleModifyNotify((proto::ObstacleModifyNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::ObstacleModifyNotify>(v5, (proto::ObstacleModifyNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "operator()",
      51);
    common::milog::MiLogStream::operator()(&v10, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure, v2 + 48);
    this = __closure->__this;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
    v6 = PathfindingHandler::onObstacleModifyNotify(this, &v9, (const proto::ObstacleModifyNotify *)(v2 + 48));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
  }
  proto::ObstacleModifyNotify::~ObstacleModifyNotify((proto::ObstacleModifyNotify *const)(v2 + 48));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 52: range 000000000CB6803A-000000000CB68284
int __cdecl PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const PathfindingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int v6; // r14d
  PathfindingHandler *this; // r14
  int result; // eax
  std::shared_ptr<common::minet::Packet> v9; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 notify:52";
  *(_QWORD *)(v2 + 16) = PathfindingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::PathfindingPingNotify::PathfindingPingNotify((proto::PathfindingPingNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::PathfindingPingNotify>(v5, (proto::PathfindingPingNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v10, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure, v2 + 32);
    this = __closure->__this;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
    v6 = PathfindingHandler::onPathfindingPingNotify(this, &v9, (const proto::PathfindingPingNotify *)(v2 + 32));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
  }
  proto::PathfindingPingNotify::~PathfindingPingNotify((proto::PathfindingPingNotify *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 58: range 000000000CB68AD4-000000000CB68CD3
bool __cdecl IsInvalidQueryPathExtend(const Vector3f *value, const Vector3f *limit)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  if ( value->x < 0.0 )
    return 1;
  *(float *)&v2 = value->x;
  if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(limit);
  }
  if ( *(float *)&v2 > limit->x )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&value->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)value + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&value->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&value->y);
  }
  if ( value->y < 0.0 )
    return 1;
  *(float *)&v3 = value->y;
  if ( *(_BYTE *)(((unsigned __int64)&limit->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)limit + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&limit->y);
  }
  if ( *(float *)&v3 > limit->y )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&value->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)value + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&value->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&value->z);
  }
  if ( value->z < 0.0 )
    return 1;
  *(float *)&v4 = value->z;
  if ( *(_BYTE *)(((unsigned __int64)&limit->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)limit + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&limit->z);
  }
  return *(float *)&v4 > limit->z;
};

// Line 62: range 000000000CB68CD4-000000000CB69592
int32_t __cdecl PathfindingHandler::onQueryPathReq(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  const proto::Vector *v7; // rax
  const proto::Vector *v8; // rax
  unsigned int id; // eax
  google::protobuf::int32 v10; // edx
  PathfindingService *v11; // rax
  NavMeshManager *v12; // rax
  proto::QueryPathReq_OptionType type; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t UserId; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::minet::PacketPtr v17; // rdi
  bool v18; // r14
  const char *v19; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  PathfindingService *v23; // r14
  common::minet::Packet *v24; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t v26; // eax
  PathfindingService *v27; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // eax
  int32_t result; // eax
  double v31; // [rsp+8h] [rbp-198h]
  double v32; // [rsp+10h] [rbp-190h]
  double v33; // [rsp+18h] [rbp-188h]
  google::protobuf::int32 ret; // [rsp+38h] [rbp-168h]
  int cost_time; // [rsp+3Ch] [rbp-164h]
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+40h] [rbp-160h]
  std::__shared_ptr_access<proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+48h] [rbp-158h]
  PathfindingThreadLocal *tl; // [rsp+50h] [rbp-150h]
  CPUProfilingMgr *cpuProfilingMgr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-130h] BYREF
  char v44[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 10 req_ptr:65 64 16 10 rsp_ptr:65 96 16 8 timer:73 128 16 13 config_ptr:95 160 32 10 log_str:98";
  *(_QWORD *)(v2 + 16) = PathfindingHandler::onQueryPathReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QueryPathReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QueryPathReq const>((const std::shared_ptr<const proto::QueryPathReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "onQueryPathReq",
      65);
    common::milog::MiLogStream::operator()(&v43, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QueryPathRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QueryPathRsp::set_retcode(rsp_0, -1);
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/pathfinding_handler.cpp",
      "onQueryPathReq",
      66);
    v6 = proto::QueryPathReq::source_pos(req);
    v33 = proto::Vector::z(v6);
    v7 = proto::QueryPathReq::source_pos(req);
    v32 = proto::Vector::y(v7);
    v8 = proto::QueryPathReq::source_pos(req);
    v31 = proto::Vector::x(v8);
    id = proto::QueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(
      &v43,
      "[query path] onQueryPathReq query_id=%d src=[%.4f,%.4f,%.4f]",
      id,
      v31,
      v32,
      v33);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v10 = proto::QueryPathReq::query_id(req);
    proto::QueryPathRsp::set_query_id(rsp_0, v10);
    v11 = ServiceBox::findService<PathfindingService>();
    tl = PathfindingService::getThreadLocal(v11);
    v12 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    cpuProfilingMgr = NavMeshManager::GetCPUProfilingMgr(v12);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    type = proto::QueryPathReq::query_type(req);
    if ( type == QueryPathReq_OptionType_OPTION_NORMAL )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
      ret = PathfindingHandler::queryPath(this, &packet_ptr, req, rsp_0);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    else if ( type == QueryPathReq_OptionType_OPTION_FIRST_CAN_GO )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
      ret = PathfindingHandler::tryQueryPath(this, &packet_ptr, req, rsp_0);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    else
    {
      ret = -1;
    }
    proto::QueryPathRsp::set_retcode(rsp_0, ret);
    cost_time = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
    if ( CPUProfilingMgr::GetMode(cpuProfilingMgr) )
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserId = common::minet::Packet::getUserId(v14);
      CPUProfilingMgr::AddQueryPathInfo(cpuProfilingMgr, cost_time, req, UserId);
    }
    ServiceBox::findService<PathfindingService>();
    PathfindingService::getConfig((PathfindingService *const)(v2 + 128));
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( cost_time >= 1000 * Config::GetQueryPathReqTimeLimit(v16) )
    {
      std::string::basic_string(v2 + 160);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
      v17._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 160);
      v17._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      v18 = (unsigned int)ProtoUtils::convertPacketToString(v17, (std::string *)(v2 + 160)) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( v18 )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "onQueryPathReq",
          101);
        v19 = (const char *)std::string::c_str(v2 + 160);
        common::milog::MiLogStream::operator()(&v43, "overtime! cost_time = %d us. %s, ", (unsigned int)cost_time, v19);
        common::milog::MiLogStream::~MiLogStream(&v43);
      }
      std::string::~string((void *)(v2 + 160));
    }
    v20 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v22 = common::minet::Packet::getUserId(v21);
    if ( NavMeshManager::IsTestPlayer(v20, v22) )
    {
      v23 = ServiceBox::findService<PathfindingService>();
      v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getProto((uint16_t *)&packet_ptr, v24);
      v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v26 = common::minet::Packet::getUserId(v25);
      PathfindingService::pushTestPlayerLog(v23, v26, 0x944u, (MessagePtr *)&packet_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&packet_ptr);
      v27 = ServiceBox::findService<PathfindingService>();
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto::QueryPathRsp,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&packet_ptr,
        (const std::shared_ptr<proto::QueryPathRsp> *)(v2 + 64));
      v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v29 = common::minet::Packet::getUserId(v28);
      PathfindingService::pushTestPlayerLog(v27, v29, 0x95Eu, (MessagePtr *)&packet_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    v5 = PathfindingHandler::sendRspPacket<proto::QueryPathRsp>(this, &packet_ptr, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::shared_ptr<proto::QueryPathRsp>::~shared_ptr((std::shared_ptr<proto::QueryPathRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QueryPathReq const>::~shared_ptr((std::shared_ptr<const proto::QueryPathReq> *const)(v2 + 32));
  result = v5;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 118: range 000000000CB69594-000000000CB6974A
int32_t __cdecl PathfindingHandler::fillQueryPathRsp(
        PathfindingHandler *const this,
        const Vector3f *corners,
        int32_t corner_length,
        const NavMeshPath *path,
        proto::QueryPathRsp *rsp_0)
{
  proto::QueryPathRsp_PathStatusType v5; // edx
  unsigned __int64 v6; // rcx
  const Vector3f *v7; // rdx
  const Vector3f *v8; // rdx
  int32_t i; // [rsp+34h] [rbp-Ch]
  proto::Vector *corner; // [rsp+38h] [rbp-8h]

  if ( NavMeshPath::GetStatus(path) == kPathPartial )
    v5 = QueryPathRsp_PathStatusType_STATUS_PARTIAL;
  else
    v5 = QueryPathRsp_PathStatusType_STATUS_SUCC;
  proto::QueryPathRsp::set_query_status(rsp_0, v5);
  for ( i = 0; i < corner_length; ++i )
  {
    corner = proto::QueryPathRsp::add_corners(rsp_0);
    v6 = (unsigned __int64)&corners[i];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * i + (_BYTE)corners) & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&corners[i]);
    }
    proto::Vector::set_x(corner, *(float *)v6);
    v7 = &corners[i];
    if ( *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v7->y);
    }
    proto::Vector::set_y(corner, v7->y);
    v8 = &corners[i];
    if ( *(_BYTE *)(((unsigned __int64)&v8->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v8->z);
    }
    proto::Vector::set_z(corner, v8->z);
  }
  return proto::QueryPathRsp::retcode(rsp_0);
};

// Line 133: range 000000000CB6974C-000000000CB6A5A7
int32_t __cdecl PathfindingHandler::queryPath(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::QueryPathReq *req,
        proto::QueryPathRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int id; // eax
  int32_t v9; // r14d
  uint32_t v10; // eax
  unsigned int v11; // ebx
  google::protobuf::uint32 v12; // eax
  __int64 v13; // rax
  float v14; // xmm0_4
  float v15; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 SourceExtend; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 TargetExtend; // rax
  float v20; // xmm0_4
  google::protobuf::int32 v21; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const Vector3f *v23; // rax
  common::minet::PacketPtr v24; // rdi
  bool v25; // r14
  const char *v26; // rax
  google::protobuf::int32 v27; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3f *QueryPathReqExtendLimit; // rax
  common::minet::PacketPtr v30; // rdi
  bool v31; // r14
  const char *v32; // rax
  const proto::QueryFilter *v33; // rax
  google::protobuf::int32 v34; // eax
  const proto::QueryFilter *v35; // rax
  google::protobuf::int32 v36; // eax
  unsigned int v37; // eax
  __int64 v38; // r14
  Vector3f *v39; // r15
  unsigned int v40; // eax
  __int64 v41; // rax
  float inY; // [rsp+0h] [rbp-FA0h]
  float inYa; // [rsp+0h] [rbp-FA0h]
  float inYb; // [rsp+0h] [rbp-FA0h]
  float inZ; // [rsp+4h] [rbp-F9Ch]
  float inZa; // [rsp+4h] [rbp-F9Ch]
  float inZb; // [rsp+4h] [rbp-F9Ch]
  float inZc; // [rsp+4h] [rbp-F9Ch]
  DynamicUniqueTokenType uid; // [rsp+34h] [rbp-F6Ch]
  int ret_status; // [rsp+38h] [rbp-F68h]
  int corner_length; // [rsp+3Ch] [rbp-F64h]
  const proto::Vector *source_ptr; // [rsp+40h] [rbp-F60h]
  const proto::Vector *destination_ptr; // [rsp+48h] [rbp-F58h]
  const proto::Vector3Int *pb_temp_ptr; // [rsp+50h] [rbp-F50h]
  const proto::Vector3Int *pb_temp_ptr_0; // [rsp+58h] [rbp-F48h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+60h] [rbp-F40h] BYREF
  common::milog::MiLogStream v60; // [rsp+70h] [rbp-F30h] BYREF
  char v61[3856]; // [rsp+90h] [rbp-F10h] BYREF

  v4 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_6(3808LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 8 20 dynamic_nav_mesh:140 80 12 10 source:152 112 12 15 destination:153 144 12 17 source_e"
                        "xtend:156 176 12 17 target_extend:157 208 16 14 config_ptr:155 240 32 11 log_str:176 304 56 8 pa"
                        "th:150 400 140 10 filter:187 608 3072 11 corners:207";
  *(_QWORD *)(v4 + 16) = PathfindingHandler::queryPath;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = 62194;
  v6[536862724] = 0x4000000;
  v6[536862725] = 62194;
  v6[536862725] = 0x4000000;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -218959360;
  v6[536862732] = 62194;
  v6[536862736] = 0x4000000;
  v6[536862737] = -218959118;
  v6[536862738] = -218959118;
  v6[536862835] = -202116109;
  v6[536862836] = -202116109;
  v6[536862837] = -202116109;
  v6[536862838] = -202116109;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  if ( proto::QueryPathReq::destination_pos_size(req) != 1 )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "queryPath",
      137);
    id = proto::QueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(&v60, "[query path] destaination pos error! uid=%u query_id=%d", uid, id);
    common::milog::MiLogStream::~MiLogStream(&v60);
    v9 = 6002;
    goto LABEL_38;
  }
  *(_QWORD *)(v4 + 48) = 0LL;
  v10 = proto::QueryPathReq::scene_id(req);
  ret_status = PathfindingHandler::tryGetDynamicNavMesh(this, uid, v10, (DynamicNavMesh **)(v4 + 48));
  if ( !*(_QWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/pathfinding_handler.cpp",
      "queryPath",
      144);
    v11 = proto::QueryPathReq::query_id(req);
    v12 = proto::QueryPathReq::scene_id(req);
    common::milog::MiLogStream::operator()(
      &v60,
      "[query path] uid:%u can't find dynamic_nav_mesh[world_id:%u, scene_id:%u]. queriy_id=%d",
      uid,
      uid,
      v12,
      v11);
    common::milog::MiLogStream::~MiLogStream(&v60);
    v9 = ret_status;
    goto LABEL_38;
  }
  v13 = *(_QWORD *)(v4 + 48);
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 352) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v13 + 352) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v13 + 352);
  }
  ++*(_DWORD *)(v13 + 352);
  NavMeshPath::NavMeshPath((NavMeshPath *const)(v4 + 304));
  source_ptr = proto::QueryPathReq::source_pos(req);
  inZ = proto::Vector::z(source_ptr);
  inY = proto::Vector::y(source_ptr);
  v14 = proto::Vector::x(source_ptr);
  Vector3f::Vector3f((Vector3f *const)(v4 + 80), v14, inY, inZ);
  destination_ptr = proto::QueryPathReq::destination_pos(req, 0);
  inZa = proto::Vector::z(destination_ptr);
  inYa = proto::Vector::y(destination_ptr);
  v15 = proto::Vector::x(destination_ptr);
  Vector3f::Vector3f((Vector3f *const)(v4 + 112), v15, inYa, inZa);
  ServiceBox::findService<PathfindingService>();
  PathfindingService::getConfig((PathfindingService *const)(v4 + 208));
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  SourceExtend = (unsigned __int64)Config::GetSourceExtend(v16);
  if ( (char)(SourceExtend & 7) >= *(_BYTE *)((SourceExtend >> 3) + 0x7FFF8000)
    && *(_BYTE *)((SourceExtend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((SourceExtend + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((SourceExtend + 11) & 7) >= *(_BYTE *)(((SourceExtend + 11) >> 3) + 0x7FFF8000) )
  {
    SourceExtend = __asan_report_load_n(SourceExtend, 12LL);
  }
  *(_QWORD *)(v4 + 144) = *(_QWORD *)SourceExtend;
  *(_DWORD *)(v4 + 152) = *(_DWORD *)(SourceExtend + 8);
  v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  TargetExtend = (unsigned __int64)Config::GetTargetExtend(v18);
  if ( (char)(TargetExtend & 7) >= *(_BYTE *)((TargetExtend >> 3) + 0x7FFF8000)
    && *(_BYTE *)((TargetExtend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((TargetExtend + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((TargetExtend + 11) & 7) >= *(_BYTE *)(((TargetExtend + 11) >> 3) + 0x7FFF8000) )
  {
    TargetExtend = __asan_report_load_n(TargetExtend, 12LL);
  }
  *(_QWORD *)(v4 + 176) = *(_QWORD *)TargetExtend;
  *(_DWORD *)(v4 + 184) = *(_DWORD *)(TargetExtend + 8);
  if ( proto::QueryPathReq::has_source_extend(req)
    && (pb_temp_ptr = proto::QueryPathReq::source_extend(req),
        inZb = (float)proto::Vector3Int::z(pb_temp_ptr) / 100.0,
        v20 = (float)proto::Vector3Int::y(pb_temp_ptr),
        v21 = proto::Vector3Int::x(pb_temp_ptr),
        Vector3f::Set((Vector3f *const)(v4 + 144), (float)v21 / 100.0, v20 / 100.0, inZb),
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208)),
        v23 = Config::GetQueryPathReqExtendLimit(v22),
        IsInvalidQueryPathExtend((const Vector3f *)(v4 + 144), v23)) )
  {
    std::string::basic_string(v4 + 240);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    v24._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 240);
    v24._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
    v25 = (unsigned int)ProtoUtils::convertPacketToString(v24, (std::string *)(v4 + 240)) == 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v25 )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.cpp",
        "queryPath",
        166);
      v26 = (const char *)std::string::c_str(v4 + 240);
      common::milog::MiLogStream::operator()(&v60, "invalid source extend. %s", v26);
      common::milog::MiLogStream::~MiLogStream(&v60);
    }
  }
  else
  {
    if ( !proto::QueryPathReq::has_destination_extend(req)
      || (pb_temp_ptr_0 = proto::QueryPathReq::destination_extend(req),
          inZc = (float)proto::Vector3Int::z(pb_temp_ptr_0) / 100.0,
          inYb = (float)proto::Vector3Int::y(pb_temp_ptr_0) / 100.0,
          v27 = proto::Vector3Int::x(pb_temp_ptr_0),
          Vector3f::Set((Vector3f *const)(v4 + 176), (float)v27 / 100.0, inYb, inZc),
          v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208)),
          QueryPathReqExtendLimit = Config::GetQueryPathReqExtendLimit(v28),
          !IsInvalidQueryPathExtend((const Vector3f *)(v4 + 176), QueryPathReqExtendLimit)) )
    {
      if ( proto::QueryPathReq::has_filter(req) )
      {
        QueryFilter::QueryFilter((QueryFilter *const)(v4 + 400));
        v33 = proto::QueryPathReq::filter(req);
        v34 = proto::QueryFilter::type_id(v33);
        QueryFilter::SetTypeID((QueryFilter *const)(v4 + 400), v34);
        v35 = proto::QueryPathReq::filter(req);
        v36 = proto::QueryFilter::area_mask(v35);
        QueryFilter::SetIncludeFlags((QueryFilter *const)(v4 + 400), v36);
        DynamicNavMesh::CalculatePolygonPath(
          *(DynamicNavMesh *const *)(v4 + 48),
          (NavMeshPath *)(v4 + 304),
          (const Vector3f *)(v4 + 80),
          (const Vector3f *)(v4 + 112),
          (const QueryFilter *)(v4 + 400),
          (const Vector3f *)(v4 + 144),
          (const Vector3f *)(v4 + 176));
      }
      else
      {
        DynamicNavMesh::CalculatePolygonPath(
          *(DynamicNavMesh *const *)(v4 + 48),
          (NavMeshPath *)(v4 + 304),
          (const Vector3f *)(v4 + 80),
          (const Vector3f *)(v4 + 112),
          &PathfindingHandler::query_filter,
          (const Vector3f *)(v4 + 144),
          (const Vector3f *)(v4 + 176));
      }
      if ( NavMeshPath::GetStatus((const NavMeshPath *const)(v4 + 304)) == kPathInvalid )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/pathfinding_handler.cpp",
          "queryPath",
          202);
        v37 = proto::QueryPathReq::query_id(req);
        common::milog::MiLogStream::operator()(&v60, "[query path]queriy_id=%d, NavMeshPathStatus::kPathInvalid", v37);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v9 = ret_status;
      }
      else
      {
        v38 = 255LL;
        v39 = (Vector3f *)(v4 + 608);
        while ( v38 >= 0 )
        {
          Vector3f::Vector3f(v39++);
          --v38;
        }
        corner_length = DynamicNavMesh::CalculatePathCorners(
                          *(const DynamicNavMesh *const *)(v4 + 48),
                          (Vector3f *)(v4 + 608),
                          256,
                          (const NavMeshPath *)(v4 + 304));
        if ( corner_length > 1 )
        {
          PathfindingHandler::fillQueryPathRsp(
            this,
            (const Vector3f *)(v4 + 608),
            corner_length,
            (const NavMeshPath *)(v4 + 304),
            rsp_0);
          v41 = *(_QWORD *)(v4 + 48);
          if ( *(_BYTE *)(((unsigned __int64)(v41 + 356) >> 3) + 0x7FFF8000) != 0
            && (char)(((v41 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v41 + 356) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v41 + 356);
          }
          ++*(_DWORD *)(v41 + 356);
          v9 = ret_status;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/pathfinding_handler.cpp",
            "queryPath",
            211);
          v40 = proto::QueryPathReq::query_id(req);
          common::milog::MiLogStream::operator()(
            &v60,
            "[query path]queriy_id=%d, corner_length=%d",
            v40,
            (unsigned int)corner_length);
          common::milog::MiLogStream::~MiLogStream(&v60);
          v9 = ret_status;
        }
      }
      goto LABEL_37;
    }
    std::string::basic_string(v4 + 240);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    v30._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 240);
    v30._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
    v31 = (unsigned int)ProtoUtils::convertPacketToString(v30, (std::string *)(v4 + 240)) == 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v31 )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.cpp",
        "queryPath",
        179);
      v32 = (const char *)std::string::c_str(v4 + 240);
      common::milog::MiLogStream::operator()(&v60, "invalid target extend. %s", v32);
      common::milog::MiLogStream::~MiLogStream(&v60);
    }
  }
  v9 = -1;
  std::string::~string((void *)(v4 + 240));
LABEL_37:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
  NavMeshPath::~NavMeshPath((NavMeshPath *const)(v4 + 304));
LABEL_38:
  if ( v61 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF81CC) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF81D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_6(v4, 3808LL, v61);
  }
  return v9;
};

// Line 221: range 000000000CB6A5A8-000000000CB6B6E7
int32_t __cdecl PathfindingHandler::tryQueryPath(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::QueryPathReq *req,
        proto::QueryPathRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int id; // eax
  int32_t v9; // r14d
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // eax
  uint32_t v14; // eax
  unsigned int v15; // r14d
  google::protobuf::uint32 v16; // eax
  const proto::QueryFilter *v17; // rax
  google::protobuf::int32 v18; // eax
  const proto::QueryFilter *v19; // rax
  unsigned int IncludeFlags; // eax
  int TypeID; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned __int64 SourceExtend; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned __int64 TargetExtend; // rax
  float v26; // xmm0_4
  google::protobuf::int32 v27; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3f *QueryPathReqExtendLimit; // rax
  common::minet::PacketPtr v30; // rdi
  bool v31; // r14
  const char *v32; // rax
  float v33; // xmm0_4
  google::protobuf::int32 v34; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  const Vector3f *v36; // rax
  common::minet::PacketPtr v37; // rdi
  bool v38; // r14
  const char *v39; // rax
  __int64 v40; // r14
  Vector3f *v41; // r15
  float v42; // xmm0_4
  __int64 v43; // rax
  float v44; // xmm0_4
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // eax
  double v50; // [rsp+8h] [rbp-6D8h]
  double v51; // [rsp+8h] [rbp-6D8h]
  double v52; // [rsp+10h] [rbp-6D0h]
  double v53; // [rsp+10h] [rbp-6D0h]
  double v54; // [rsp+18h] [rbp-6C8h]
  double v55; // [rsp+18h] [rbp-6C8h]
  double v56; // [rsp+20h] [rbp-6C0h]
  double v57; // [rsp+20h] [rbp-6C0h]
  float inY; // [rsp+28h] [rbp-6B8h]
  float inYa; // [rsp+28h] [rbp-6B8h]
  double inYb; // [rsp+28h] [rbp-6B8h]
  double inYc; // [rsp+28h] [rbp-6B8h]
  float inZ; // [rsp+30h] [rbp-6B0h]
  float inZa; // [rsp+30h] [rbp-6B0h]
  float inZb; // [rsp+30h] [rbp-6B0h]
  float inZc; // [rsp+30h] [rbp-6B0h]
  double inZd; // [rsp+30h] [rbp-6B0h]
  double inZe; // [rsp+30h] [rbp-6B0h]
  int i; // [rsp+6Ch] [rbp-674h]
  DynamicUniqueTokenType uid; // [rsp+70h] [rbp-670h]
  int ret_status; // [rsp+74h] [rbp-66Ch]
  int destination_size; // [rsp+78h] [rbp-668h]
  int corner_length; // [rsp+7Ch] [rbp-664h]
  const proto::Vector3Int *pb_temp_ptr; // [rsp+80h] [rbp-660h]
  const proto::Vector3Int *pb_temp_ptr_0; // [rsp+88h] [rbp-658h]
  const proto::Vector *source_ptr; // [rsp+90h] [rbp-650h]
  const proto::Vector *destination_ptr; // [rsp+98h] [rbp-648h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+A0h] [rbp-640h] BYREF
  common::milog::MiLogStream v80; // [rsp+B0h] [rbp-630h] BYREF
  char v81[1552]; // [rsp+D0h] [rbp-610h] BYREF

  v4 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1504LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 8 20 dynamic_nav_mesh:236 80 12 17 source_extend:259 112 12 17 target_extend:260 144 12 10"
                        " source:291 176 12 15 destination:296 208 16 14 config_ptr:229 240 32 11 log_str:279 304 56 8 pa"
                        "th:246 400 140 10 filter:245 608 768 11 corners:289";
  *(_QWORD *)(v4 + 16) = PathfindingHandler::tryQueryPath;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = 62194;
  v6[536862724] = 0x4000000;
  v6[536862725] = 62194;
  v6[536862725] = 0x4000000;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -218959360;
  v6[536862732] = 62194;
  v6[536862736] = 0x4000000;
  v6[536862737] = -218959118;
  v6[536862738] = -218959118;
  v6[536862763] = -202116109;
  v6[536862764] = -202116109;
  v6[536862765] = -202116109;
  v6[536862766] = -202116109;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  if ( proto::QueryPathReq::destination_pos_size(req) <= 0 )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "tryQueryPath",
      226);
    id = proto::QueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(&v80, "[query path] destaination pos error! uid=%u query_id=%d", uid, id);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v9 = 6002;
    goto LABEL_45;
  }
  ServiceBox::findService<PathfindingService>();
  PathfindingService::getConfig((PathfindingService *const)(v4 + 208));
  v10 = proto::QueryPathReq::destination_pos_size(req);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  if ( v10 > Config::GetQueryPathReqTargetPointLimit(v11) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "tryQueryPath",
      232);
    v12 = proto::QueryPathReq::destination_pos_size(req);
    v13 = proto::QueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(
      &v80,
      "[query path] destaination pos size > limit! uid=%u query_id=%d, size=%u",
      uid,
      v13,
      v12);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v9 = -1;
    goto LABEL_44;
  }
  *(_QWORD *)(v4 + 48) = 0LL;
  v14 = proto::QueryPathReq::scene_id(req);
  ret_status = PathfindingHandler::tryGetDynamicNavMesh(this, uid, v14, (DynamicNavMesh **)(v4 + 48));
  if ( !*(_QWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/pathfinding_handler.cpp",
      "tryQueryPath",
      240);
    v15 = proto::QueryPathReq::query_id(req);
    v16 = proto::QueryPathReq::scene_id(req);
    common::milog::MiLogStream::operator()(
      &v80,
      "[query path] uid:%u can't find dynamic_nav_mesh[world_id:%u, scene_id:%u]. queriy_id=%d",
      uid,
      uid,
      v16,
      v15);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v9 = ret_status;
    goto LABEL_44;
  }
  QueryFilter::QueryFilter((QueryFilter *const)(v4 + 400));
  NavMeshPath::NavMeshPath((NavMeshPath *const)(v4 + 304));
  if ( proto::QueryPathReq::has_filter(req) )
  {
    v17 = proto::QueryPathReq::filter(req);
    v18 = proto::QueryFilter::type_id(v17);
    QueryFilter::SetTypeID((QueryFilter *const)(v4 + 400), v18);
    v19 = proto::QueryPathReq::filter(req);
    IncludeFlags = proto::QueryFilter::area_mask(v19);
  }
  else
  {
    TypeID = QueryFilter::GetTypeID(&PathfindingHandler::query_filter);
    QueryFilter::SetTypeID((QueryFilter *const)(v4 + 400), TypeID);
    IncludeFlags = QueryFilter::GetIncludeFlags(&PathfindingHandler::query_filter);
  }
  QueryFilter::SetIncludeFlags((QueryFilter *const)(v4 + 400), IncludeFlags);
  v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  SourceExtend = (unsigned __int64)Config::GetSourceExtend(v22);
  if ( (char)(SourceExtend & 7) >= *(_BYTE *)((SourceExtend >> 3) + 0x7FFF8000)
    && *(_BYTE *)((SourceExtend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((SourceExtend + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((SourceExtend + 11) & 7) >= *(_BYTE *)(((SourceExtend + 11) >> 3) + 0x7FFF8000) )
  {
    SourceExtend = __asan_report_load_n(SourceExtend, 12LL);
  }
  *(_QWORD *)(v4 + 80) = *(_QWORD *)SourceExtend;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(SourceExtend + 8);
  v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  TargetExtend = (unsigned __int64)Config::GetTargetExtend(v24);
  if ( (char)(TargetExtend & 7) >= *(_BYTE *)((TargetExtend >> 3) + 0x7FFF8000)
    && *(_BYTE *)((TargetExtend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((TargetExtend + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((TargetExtend + 11) & 7) >= *(_BYTE *)(((TargetExtend + 11) >> 3) + 0x7FFF8000) )
  {
    TargetExtend = __asan_report_load_n(TargetExtend, 12LL);
  }
  *(_QWORD *)(v4 + 112) = *(_QWORD *)TargetExtend;
  *(_DWORD *)(v4 + 120) = *(_DWORD *)(TargetExtend + 8);
  if ( proto::QueryPathReq::has_source_extend(req) )
  {
    pb_temp_ptr = proto::QueryPathReq::source_extend(req);
    inZ = (float)proto::Vector3Int::z(pb_temp_ptr) / 100.0;
    v26 = (float)proto::Vector3Int::y(pb_temp_ptr);
    v27 = proto::Vector3Int::x(pb_temp_ptr);
    Vector3f::Set((Vector3f *const)(v4 + 80), (float)v27 / 100.0, v26 / 100.0, inZ);
    v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
    QueryPathReqExtendLimit = Config::GetQueryPathReqExtendLimit(v28);
    if ( IsInvalidQueryPathExtend((const Vector3f *)(v4 + 80), QueryPathReqExtendLimit) )
    {
      std::string::basic_string(v4 + 240);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
      v30._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 240);
      v30._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      v31 = (unsigned int)ProtoUtils::convertPacketToString(v30, (std::string *)(v4 + 240)) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( v31 )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "tryQueryPath",
          269);
        v32 = (const char *)std::string::c_str(v4 + 240);
        common::milog::MiLogStream::operator()(&v80, "invalid source extend. %s", v32);
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
LABEL_21:
      v9 = -1;
      std::string::~string((void *)(v4 + 240));
      goto LABEL_43;
    }
  }
  if ( proto::QueryPathReq::has_destination_extend(req) )
  {
    pb_temp_ptr_0 = proto::QueryPathReq::destination_extend(req);
    inZa = (float)proto::Vector3Int::z(pb_temp_ptr_0) / 100.0;
    v33 = (float)proto::Vector3Int::y(pb_temp_ptr_0);
    v34 = proto::Vector3Int::x(pb_temp_ptr_0);
    Vector3f::Set((Vector3f *const)(v4 + 112), (float)v34 / 100.0, v33 / 100.0, inZa);
    v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
    v36 = Config::GetQueryPathReqExtendLimit(v35);
    if ( IsInvalidQueryPathExtend((const Vector3f *)(v4 + 112), v36) )
    {
      std::string::basic_string(v4 + 240);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
      v37._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 240);
      v37._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      v38 = (unsigned int)ProtoUtils::convertPacketToString(v37, (std::string *)(v4 + 240)) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( v38 )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "tryQueryPath",
          282);
        v39 = (const char *)std::string::c_str(v4 + 240);
        common::milog::MiLogStream::operator()(&v80, "invalid target extend. %s", v39);
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
      goto LABEL_21;
    }
  }
  v40 = 63LL;
  v41 = (Vector3f *)(v4 + 608);
  while ( v40 >= 0 )
  {
    Vector3f::Vector3f(v41++);
    --v40;
  }
  destination_size = proto::QueryPathReq::destination_pos_size(req);
  source_ptr = proto::QueryPathReq::source_pos(req);
  inZb = proto::Vector::z(source_ptr);
  inY = proto::Vector::y(source_ptr);
  v42 = proto::Vector::x(source_ptr);
  Vector3f::Vector3f((Vector3f *const)(v4 + 144), v42, inY, inZb);
  for ( i = 0; ; ++i )
  {
    if ( i >= destination_size )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/pathfinding_handler.cpp",
        "tryQueryPath",
        330);
      v48 = proto::QueryPathReq::query_id(req);
      common::milog::MiLogStream::operator()(&v80, "[query path]queriy_id=%d, NavMeshPathStatus::kPathInvalid", v48);
      common::milog::MiLogStream::~MiLogStream(&v80);
      v9 = ret_status;
      goto LABEL_43;
    }
    v43 = *(_QWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)(v43 + 352) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v43 + 352) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v43 + 352);
    }
    ++*(_DWORD *)(v43 + 352);
    destination_ptr = proto::QueryPathReq::destination_pos(req, i);
    inZc = proto::Vector::z(destination_ptr);
    inYa = proto::Vector::y(destination_ptr);
    v44 = proto::Vector::x(destination_ptr);
    Vector3f::Vector3f((Vector3f *const)(v4 + 176), v44, inYa, inZc);
    DynamicNavMesh::CalculatePolygonPath(
      *(DynamicNavMesh *const *)(v4 + 48),
      (NavMeshPath *)(v4 + 304),
      (const Vector3f *)(v4 + 144),
      (const Vector3f *)(v4 + 176),
      (const QueryFilter *)(v4 + 400),
      (const Vector3f *)(v4 + 80),
      (const Vector3f *)(v4 + 112));
    if ( NavMeshPath::GetStatus((const NavMeshPath *const)(v4 + 304)) == kPathInvalid )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/pathfinding_handler.cpp",
        "tryQueryPath",
        310);
      inZd = *(float *)(v4 + 184);
      inYb = *(float *)(v4 + 180);
      v56 = *(float *)(v4 + 176);
      v54 = *(float *)(v4 + 152);
      v52 = *(float *)(v4 + 148);
      v50 = *(float *)(v4 + 144);
      v45 = proto::QueryPathReq::query_id(req);
      common::milog::MiLogStream::operator()(
        &v80,
        "[query path]queriy_id=%d, i=%d, size=%d, NavMeshPathStatus::kPathInvalid. [%.4f, %.4f, %.4f] to [%.4f, %.4f, %.4f]",
        v45,
        (unsigned int)i,
        (unsigned int)destination_size,
        v50,
        v52,
        v54,
        v56,
        inYb,
        inZd);
      common::milog::MiLogStream::~MiLogStream(&v80);
      continue;
    }
    corner_length = DynamicNavMesh::CalculatePathCorners(
                      *(const DynamicNavMesh *const *)(v4 + 48),
                      (Vector3f *)(v4 + 608),
                      64,
                      (const NavMeshPath *)(v4 + 304));
    if ( corner_length > 1 )
      break;
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/pathfinding_handler.cpp",
      "tryQueryPath",
      319);
    inZe = *(float *)(v4 + 184);
    inYc = *(float *)(v4 + 180);
    v57 = *(float *)(v4 + 176);
    v55 = *(float *)(v4 + 152);
    v53 = *(float *)(v4 + 148);
    v51 = *(float *)(v4 + 144);
    v46 = proto::QueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(
      &v80,
      "[query path]queriy_id=%d, corner_length < 2. [%.4f, %.4f, %.4f] to [%.4f, %.4f, %.4f]",
      v46,
      v51,
      v53,
      v55,
      v57,
      inYc,
      inZe);
    common::milog::MiLogStream::~MiLogStream(&v80);
  }
  v47 = *(_QWORD *)(v4 + 48);
  if ( *(_BYTE *)(((unsigned __int64)(v47 + 356) >> 3) + 0x7FFF8000) != 0
    && (char)(((v47 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v47 + 356) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v47 + 356);
  }
  ++*(_DWORD *)(v47 + 356);
  PathfindingHandler::fillQueryPathRsp(
    this,
    (const Vector3f *)(v4 + 608),
    corner_length,
    (const NavMeshPath *)(v4 + 304),
    rsp_0);
  v9 = ret_status;
LABEL_43:
  NavMeshPath::~NavMeshPath((NavMeshPath *const)(v4 + 304));
LABEL_44:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
LABEL_45:
  if ( v81 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1504LL, v81);
  }
  return v9;
};

// Line 335: range 000000000CB6B6E8-000000000CB6B87B
int32_t __cdecl PathfindingHandler::onQueryPathRsp(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  uint32_t v5; // r8d
  uint32_t packet_gate_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  packet_gate_id = common::minet::Packet::getServiceAppId(v2, 2u);
  if ( packet_gate_id )
  {
    v4 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    LOBYTE(v4) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                 v4,
                                 (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
                                 packet_gate_id,
                                 v5) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.cpp",
        "onQueryPathRsp",
        346);
      common::milog::MiLogStream::operator()(&v8, "send packet failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/pathfinding_handler.cpp",
      "onQueryPathRsp",
      339);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gateserver_ip is 0!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 353: range 000000000CB6B87C-000000000CB6BDB1
int32_t __cdecl PathfindingHandler::onObstacleModifyNotify(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ObstacleModifyNotify *notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  uint32_t v13; // edi
  google::protobuf::uint32 v14; // eax
  const proto::ObstacleInfo *v15; // rdx
  unsigned int v16; // eax
  DynamicNavMesh *v17; // r14
  int v18; // eax
  PathfindingService *v19; // rax
  NavMeshManager *v20; // rax
  CPUProfilingMgr *CPUProfilingMgr; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  PathfindingService *v23; // r14
  common::minet::Packet *v24; // rax
  int i; // [rsp+2Ch] [rbp-F4h]
  int i_0; // [rsp+30h] [rbp-F0h]
  int ret_status; // [rsp+34h] [rbp-ECh]
  PathfindingThreadLocal *tl; // [rsp+38h] [rbp-E8h]
  MessagePtr p_message_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:354 64 4 21 add_obstacle_size:356 80 4 24 remove_obstacle_size:357 96 8 20 dynamic_nav_mesh:366";
  *(_QWORD *)(v3 + 16) = PathfindingHandler::onObstacleModifyNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v6);
  *(_DWORD *)(v3 + 64) = proto::ObstacleModifyNotify::add_obstacles_size(notify);
  *(_DWORD *)(v3 + 80) = proto::ObstacleModifyNotify::remove_obstacle_ids_size(notify);
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/pathfinding_handler.cpp",
    "onObstacleModifyNotify",
    358);
  v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v32,
         (const char (*)[31])"[obstacle] onQueryPathReq uid=");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" add_obstacle_size:");
  v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 64));
  v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v10,
          (const char (*)[23])" remove_obstacle_size:");
  common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v32);
  if ( *(_DWORD *)(v3 + 64) || *(_DWORD *)(v3 + 80) )
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    v13 = proto::ObstacleModifyNotify::scene_id(notify);
    ret_status = PathfindingHandler::tryGetDynamicNavMesh(this, *(_DWORD *)(v3 + 48), v13, (DynamicNavMesh **)(v3 + 96));
    if ( *(_QWORD *)(v3 + 96) )
    {
      if ( ret_status != 6003 )
      {
        for ( i = 0; i < *(_DWORD *)(v3 + 64); ++i )
        {
          v15 = proto::ObstacleModifyNotify::add_obstacles(notify, i);
          PathfindingHandler::addOneObstacle(this, *(DynamicNavMesh **)(v3 + 96), v15);
        }
        for ( i_0 = 0; i_0 < *(_DWORD *)(v3 + 80); ++i_0 )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/pathfinding_handler.cpp",
            "onObstacleModifyNotify",
            383);
          v16 = proto::ObstacleModifyNotify::remove_obstacle_ids(notify, i_0);
          common::milog::MiLogStream::operator()(
            &v32,
            "[obstacle] uid=%u UnregisterObstacle id=%d",
            *(unsigned int *)(v3 + 48),
            v16);
          common::milog::MiLogStream::~MiLogStream(&v32);
          v17 = *(DynamicNavMesh **)(v3 + 96);
          v18 = proto::ObstacleModifyNotify::remove_obstacle_ids(notify, i_0);
          DynamicNavMesh::UnregisterObstacle(v17, v18, 0LL);
        }
      }
      v19 = ServiceBox::findService<PathfindingService>();
      tl = PathfindingService::getThreadLocal(v19);
      v20 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      CPUProfilingMgr = NavMeshManager::GetCPUProfilingMgr(v20);
      CPUProfilingMgr::AddObstacleCount(CPUProfilingMgr, *(_DWORD *)(v3 + 64) + *(_DWORD *)(v3 + 80));
      v22 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      if ( NavMeshManager::IsTestPlayer(v22, *(_DWORD *)(v3 + 48)) )
      {
        v23 = ServiceBox::findService<PathfindingService>();
        v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::getProto((uint16_t *)&p_message_ptr, v24);
        PathfindingService::pushTestPlayerLog(v23, *(_DWORD *)(v3 + 48), 0x908u, &p_message_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_message_ptr);
      }
      result = ret_status;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/pathfinding_handler.cpp",
        "onObstacleModifyNotify",
        371);
      v14 = proto::ObstacleModifyNotify::scene_id(notify);
      common::milog::MiLogStream::operator()(
        &v32,
        "uid:%u can't find dynamic_nav_mesh[world_id:%d, scene_id:%d]",
        *(unsigned int *)(v3 + 48),
        *(unsigned int *)(v3 + 48),
        v14);
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = ret_status;
    }
  }
  else
  {
    result = 0;
  }
  if ( v33 == (char *)v3 )
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

// Line 399: range 000000000CB6BDB2-000000000CB6BE93
int32_t __cdecl PathfindingHandler::onPathfindingPingNotify(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::PathfindingPingNotify *notify)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PathfindingService *v4; // rax
  NavMeshManager *v5; // rbx
  uint64_t NowMs; // rax
  unsigned int uid; // [rsp+24h] [rbp-3Ch]
  PathfindingThreadLocal *tl; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v3);
  v4 = ServiceBox::findService<PathfindingService>();
  tl = PathfindingService::getThreadLocal(v4);
  v5 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  NowMs = common::tools::TimeUtils::getNowMs();
  NavMeshManager::UpdateUniqueTokenTime(v5, uid, NowMs);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/pathfinding_handler.cpp",
    "onPathfindingPingNotify",
    406);
  common::milog::MiLogStream::operator()(&v10, "[pathfinding ping]uid=%u", uid);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 411: range 000000000CB6BE94-000000000CB6C19E
int32_t __cdecl PathfindingHandler::onPathfindingEnterSceneReq(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-D0h]
  std::__shared_ptr_access<proto::PathfindingEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:413 64 16 11 rsp_ptr:413";
  *(_QWORD *)(v2 + 16) = PathfindingHandler::onPathfindingEnterSceneReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PathfindingEnterSceneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PathfindingEnterSceneReq const>(
         (const std::shared_ptr<const proto::PathfindingEnterSceneReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.cpp",
      "onPathfindingEnterSceneReq",
      413);
    common::milog::MiLogStream::operator()(&v11, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PathfindingEnterSceneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PathfindingEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PathfindingEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PathfindingEnterSceneRsp::set_retcode(rsp_0, -1);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    ret = PathfindingHandler::onEnterScene(this, &v10, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
    proto::PathfindingEnterSceneRsp::set_retcode(rsp_0, ret);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    v5 = PathfindingHandler::sendRspPacket<proto::PathfindingEnterSceneRsp>(this, &v10, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
    std::shared_ptr<proto::PathfindingEnterSceneRsp>::~shared_ptr((std::shared_ptr<proto::PathfindingEnterSceneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PathfindingEnterSceneReq const>::~shared_ptr((std::shared_ptr<const proto::PathfindingEnterSceneReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 421: range 000000000CB6C1A0-000000000CB6C333
int32_t __cdecl PathfindingHandler::onPathfindingEnterSceneRsp(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  uint32_t v5; // r8d
  uint32_t packet_gate_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  packet_gate_id = common::minet::Packet::getServiceAppId(v2, 2u);
  if ( packet_gate_id )
  {
    v4 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    LOBYTE(v4) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                 v4,
                                 (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
                                 packet_gate_id,
                                 v5) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.cpp",
        "onPathfindingEnterSceneRsp",
        432);
      common::milog::MiLogStream::operator()(&v8, "send packet failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/pathfinding_handler.cpp",
      "onPathfindingEnterSceneRsp",
      425);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gateserver_ip is 0!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 439: range 000000000CB6C334-000000000CB6C59D
uint32_t __cdecl calcActivityHash(
        const proto::PathfindingEnterSceneReq *req,
        int32_t version,
        ConfigPtr *p_config,
        int32_t *config_version)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t v7; // r14d
  google::protobuf::uint32 v8; // r14d
  unsigned int *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  Config *v11; // r14
  uint32_t v12; // eax
  uint32_t result; // eax
  int i; // [rsp+28h] [rbp-98h]
  int sz; // [rsp+2Ch] [rbp-94h]
  char v18[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 16 activity_ids:447";
  *(_QWORD *)(v4 + 16) = calcActivityHash;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( std::operator==<Config>(p_config, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    sz = proto::PathfindingEnterSceneReq::activity_id_size(req);
    if ( sz )
    {
      dynamic_array<unsigned int,false,4ul>::dynamic_array((dynamic_array<unsigned int,false,4> *const)(v4 + 32), sz);
      for ( i = 0; i < sz; ++i )
      {
        v8 = proto::PathfindingEnterSceneReq::activity_id(req, i);
        v9 = dynamic_array<unsigned int,false,4ul>::operator[]((dynamic_array<unsigned int,false,4> *const)(v4 + 32), i);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v9);
        }
        *v10 = v8;
      }
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_config);
      v12 = proto::PathfindingEnterSceneReq::scene_id(req);
      v7 = Config::calcActivityHash(v11, (dynamic_array<unsigned int,false,4> *)(v4 + 32), v12, version, config_version);
      dynamic_array<unsigned int,false,4ul>::~dynamic_array((dynamic_array<unsigned int,false,4> *const)(v4 + 32));
    }
    else
    {
      v7 = 0;
    }
  }
  result = v7;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 456: range 000000000CB6C59E-000000000CB6D14B
int32_t __cdecl PathfindingHandler::onEnterScene(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::PathfindingEnterSceneReq *req,
        proto::PathfindingEnterSceneRsp *rsp_0)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PathfindingService *v8; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t v10; // eax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t ID; // r14d
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Config *v18; // r14
  uint32_t v19; // eax
  int32_t v20; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r15
  uint32_t v22; // r14d
  google::protobuf::uint32 v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned int v33; // eax
  google::protobuf::uint32 v34; // eax
  NavMeshManager *v35; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  bool v37; // al
  google::protobuf::uint32 v38; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  bool v40; // al
  bool v41; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  uint64_t TokenKeepAliveMs; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  uint64_t ObstacleTimeLimit; // rax
  __int64 v46; // r15
  __int64 v47; // r14
  google::protobuf::uint32 v48; // eax
  __int64 v49; // r15
  __int64 v50; // r14
  google::protobuf::uint32 v51; // eax
  bool is_editor; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  bool v54; // al
  const proto::ObstacleInfo *v55; // rax
  NavMeshManager *v56; // rax
  CPUProfilingMgr *CPUProfilingMgr; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  PathfindingService *v59; // r14
  common::minet::Packet *v60; // rax
  int32_t result; // eax
  uint32_t version; // [rsp+14h] [rbp-14Ch]
  unsigned int versiona; // [rsp+14h] [rbp-14Ch]
  unsigned int versionb; // [rsp+14h] [rbp-14Ch]
  uint32_t polygon_id; // [rsp+18h] [rbp-148h]
  _BOOL4 polygon_ida; // [rsp+18h] [rbp-148h]
  _BOOL4 polygon_idb; // [rsp+18h] [rbp-148h]
  uint32_t scene_tag_hash; // [rsp+1Ch] [rbp-144h]
  uint32_t scene_tag_hasha; // [rsp+1Ch] [rbp-144h]
  uint32_t scene_tag_hashb; // [rsp+1Ch] [rbp-144h]
  bool is_static_navmesh_failed; // [rsp+43h] [rbp-11Dh]
  unsigned int val; // [rsp+44h] [rbp-11Ch] BYREF
  unsigned int v74; // [rsp+48h] [rbp-118h] BYREF
  int i; // [rsp+4Ch] [rbp-114h]
  int32_t i_0; // [rsp+50h] [rbp-110h]
  unsigned int uid; // [rsp+54h] [rbp-10Ch]
  int sz; // [rsp+58h] [rbp-108h]
  int obstacle_size; // [rsp+5Ch] [rbp-104h]
  DynamicNavMesh *dynamic_nav_mesh; // [rsp+60h] [rbp-100h]
  PathfindingThreadLocal *tl; // [rsp+68h] [rbp-F8h]
  const std::shared_ptr<StaticNavMesh> *static_nav_mesh; // [rsp+70h] [rbp-F0h]
  const std::shared_ptr<StaticNavMesh> *static_nav_mesh_0; // [rsp+78h] [rbp-E8h]
  std::shared_ptr<Config> p_config; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v85; // [rsp+90h] [rbp-D0h] BYREF
  char v86[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 18 config_version:467 48 4 17 activity_hash:468 64 4 18 scene_tag_hash:469 80 4 14 polygo"
                        "n_id:470 96 16 14 config_ptr:464";
  *(_QWORD *)(v4 + 16) = PathfindingHandler::onEnterScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  v8 = ServiceBox::findService<PathfindingService>();
  tl = PathfindingService::getThreadLocal(v8);
  v9 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  dynamic_nav_mesh = NavMeshManager::GetDynamicNavMesh(v9, uid);
  ServiceBox::findService<PathfindingService>();
  PathfindingService::getConfig((PathfindingService *const)(v4 + 96));
  is_static_navmesh_failed = 0;
  std::shared_ptr<Config>::shared_ptr(&p_config, (const std::shared_ptr<Config> *)(v4 + 96));
  v10 = proto::PathfindingEnterSceneReq::version(req);
  *(_DWORD *)(v4 + 48) = calcActivityHash(req, v10, &p_config, (int32_t *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&p_config);
  *(_DWORD *)(v4 + 64) = proto::PathfindingEnterSceneReq::scene_tag_hash(req);
  *(_DWORD *)(v4 + 80) = proto::PathfindingEnterSceneReq::polygon_id(req);
  if ( dynamic_nav_mesh )
  {
    static_nav_mesh = DynamicNavMesh::GetStaticNavMesh(dynamic_nav_mesh);
    if ( std::operator==<StaticNavMesh>(static_nav_mesh, 0LL)
      || (v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_nav_mesh),
          StaticNavMesh::GetVersion(v11) != *(_DWORD *)(v4 + 32))
      || (v12 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_nav_mesh),
          ID = StaticNavMesh::GetID(v12),
          ID != proto::PathfindingEnterSceneReq::scene_id(req))
      || (v14 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_nav_mesh),
          StaticNavMesh::GetActivityID(v14) != *(_DWORD *)(v4 + 48))
      || (v15 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_nav_mesh),
          StaticNavMesh::GetSceneTagHash(v15) != *(_DWORD *)(v4 + 64))
      || (v16 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_nav_mesh),
          StaticNavMesh::GetPolygonID(v16) != *(_DWORD *)(v4 + 80)) )
    {
      is_static_navmesh_failed = 1;
    }
  }
  if ( dynamic_nav_mesh && !is_static_navmesh_failed )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/handler/pathfinding_handler.cpp",
      "onEnterScene",
      528);
    scene_tag_hashb = *(_DWORD *)(v4 + 48);
    v49 = *(unsigned int *)(v4 + 64);
    v50 = *(unsigned int *)(v4 + 80);
    polygon_idb = proto::PathfindingEnterSceneReq::is_editor(req);
    versionb = proto::PathfindingEnterSceneReq::version(req);
    v51 = proto::PathfindingEnterSceneReq::scene_id(req);
    common::milog::MiLogStream::operator()(
      &v85,
      "clear all obstacle, uid=%u, scene_id=%u version=%u is_editor=%d polygon_id=%u scene_tag_hash=%u activity_id=%u",
      uid,
      v51,
      versionb,
      polygon_idb,
      v50,
      v49,
      scene_tag_hashb);
    common::milog::MiLogStream::~MiLogStream(&v85);
    is_editor = proto::PathfindingEnterSceneReq::is_editor(req);
    DynamicNavMesh::SetIsEditor(dynamic_nav_mesh, is_editor);
    v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v54 = Config::UseHavokCut(v53);
    DynamicNavMesh::ClearAllObstacles(dynamic_nav_mesh, 0, v54);
  }
  else
  {
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v19 = proto::PathfindingEnterSceneReq::scene_id(req);
    if ( Config::IsIgnoreScene(v18, v19) )
    {
      v20 = 6001;
      goto LABEL_36;
    }
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    scene_tag_hash = *(_DWORD *)(v4 + 64);
    polygon_id = *(_DWORD *)(v4 + 80);
    v22 = *(_DWORD *)(v4 + 48);
    version = proto::PathfindingEnterSceneReq::version(req);
    v23 = proto::PathfindingEnterSceneReq::scene_id(req);
    static_nav_mesh_0 = (const std::shared_ptr<StaticNavMesh> *)Config::getStaticNavMesh(
                                                                  v21,
                                                                  v23,
                                                                  version,
                                                                  v22,
                                                                  polygon_id,
                                                                  scene_tag_hash);
    if ( std::operator==<StaticNavMesh>(static_nav_mesh_0, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.cpp",
        "onEnterScene",
        494);
      v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v85,
              (const char (*)[38])"can't find static nav mesh. scene_id:");
      val = proto::PathfindingEnterSceneReq::scene_id(req);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" version:");
      v74 = proto::PathfindingEnterSceneReq::version(req);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v74);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])" activity_hash:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
      v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" polygon_id:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 80));
      v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v31, (const char (*)[17])" scene_tag_hash:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v85);
      if ( proto::PathfindingEnterSceneReq::activity_id_size(req) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "onEnterScene",
          499);
        v33 = proto::PathfindingEnterSceneReq::activity_id_size(req);
        common::milog::MiLogStream::operator()(&v85, "can't find static nav mesh. activity_id_size:%d", v33);
        common::milog::MiLogStream::~MiLogStream(&v85);
        i = 0;
        sz = proto::PathfindingEnterSceneReq::activity_id_size(req);
        while ( i < sz )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/pathfinding_handler.cpp",
            "onEnterScene",
            502);
          v34 = proto::PathfindingEnterSceneReq::activity_id(req, i);
          common::milog::MiLogStream::operator()(&v85, "can't find static nav mesh. activit_id:%u", v34);
          common::milog::MiLogStream::~MiLogStream(&v85);
          ++i;
        }
      }
      v20 = 6001;
      goto LABEL_36;
    }
    if ( !dynamic_nav_mesh )
    {
      v35 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
      v36 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v37 = Config::UseHavokCut(v36);
      dynamic_nav_mesh = NavMeshManager::AddDynamicNavMesh(v35, static_nav_mesh_0, uid, v37);
      if ( !dynamic_nav_mesh )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "onEnterScene",
          515);
        v38 = proto::PathfindingEnterSceneReq::scene_id(req);
        common::milog::MiLogStream::operator()(&v85, "can't create dynamic nav mesh[%u, %u]", uid, v38);
        common::milog::MiLogStream::~MiLogStream(&v85);
        v20 = 6001;
        goto LABEL_36;
      }
    }
    v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v40 = Config::UseHavokCut(v39);
    DynamicNavMesh::InitMeshData(dynamic_nav_mesh, static_nav_mesh_0, v40);
    v41 = proto::PathfindingEnterSceneReq::is_editor(req);
    DynamicNavMesh::SetIsEditor(dynamic_nav_mesh, v41);
    v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    TokenKeepAliveMs = Config::getTokenKeepAliveMs(v42);
    DynamicNavMesh::RefreshAliveTimer(dynamic_nav_mesh, TokenKeepAliveMs);
    v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    ObstacleTimeLimit = Config::getObstacleTimeLimit(v44);
    DynamicNavMesh::SetObstacleTimeLimit(dynamic_nav_mesh, ObstacleTimeLimit);
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/handler/pathfinding_handler.cpp",
      "onEnterScene",
      524);
    scene_tag_hasha = *(_DWORD *)(v4 + 48);
    v46 = *(unsigned int *)(v4 + 64);
    v47 = *(unsigned int *)(v4 + 80);
    polygon_ida = proto::PathfindingEnterSceneReq::is_editor(req);
    versiona = proto::PathfindingEnterSceneReq::version(req);
    v48 = proto::PathfindingEnterSceneReq::scene_id(req);
    common::milog::MiLogStream::operator()(
      &v85,
      "change static nav mesh, uid=%u, scene_id=%u version=%u is_editor=%d polygon_id=%u scene_tag_hash=%u activity_id=%u",
      uid,
      v48,
      versiona,
      polygon_ida,
      v47,
      v46,
      scene_tag_hasha);
    common::milog::MiLogStream::~MiLogStream(&v85);
  }
  obstacle_size = proto::PathfindingEnterSceneReq::obstacles_size(req);
  for ( i_0 = 0; i_0 < obstacle_size; ++i_0 )
  {
    v55 = proto::PathfindingEnterSceneReq::obstacles(req, i_0);
    PathfindingHandler::addOneObstacle(this, dynamic_nav_mesh, v55);
  }
  v56 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  CPUProfilingMgr = NavMeshManager::GetCPUProfilingMgr(v56);
  CPUProfilingMgr::AddObstacleCount(CPUProfilingMgr, obstacle_size);
  v58 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  if ( NavMeshManager::IsTestPlayer(v58, uid) )
  {
    v59 = ServiceBox::findService<PathfindingService>();
    v60 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto((uint16_t *)&p_config, v60);
    PathfindingService::pushTestPlayerLog(v59, uid, 0x903u, (MessagePtr *)&p_config);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_config);
  }
  v20 = 0;
LABEL_36:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  result = v20;
  if ( v86 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 550: range 000000000CB6D14C-000000000CB6D8A8
int32_t __cdecl PathfindingHandler::addOneObstacle(
        PathfindingHandler *const this,
        DynamicNavMesh *dynamic_nav_mesh,
        const proto::ObstacleInfo *pb_data)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  float v7; // xmm0_4
  google::protobuf::int32 v8; // eax
  float v9; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  float MaxObstacleExtent; // xmm0_4
  int32_t result; // eax
  float v14; // [rsp+1Ch] [rbp-134h]
  float inY; // [rsp+20h] [rbp-130h]
  float inYa; // [rsp+20h] [rbp-130h]
  float inYb; // [rsp+20h] [rbp-130h]
  float inZ; // [rsp+24h] [rbp-12Ch]
  float inZa; // [rsp+24h] [rbp-12Ch]
  float inZb; // [rsp+24h] [rbp-12Ch]
  const proto::Vector *pb_position_ptr; // [rsp+48h] [rbp-108h]
  const proto::Vector3Int *pb_extend_ptr; // [rsp+50h] [rbp-100h]
  const proto::MathQuaternion *pb_rotation_ptr; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 config_ptr:580 64 56 8 data:555";
  *(_QWORD *)(v3 + 16) = PathfindingHandler::addOneObstacle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( dynamic_nav_mesh )
  {
    NavMeshObstacleData::NavMeshObstacleData((NavMeshObstacleData *const)(v3 + 64));
    *(_DWORD *)(v3 + 64) = proto::ObstacleInfo::obstacle_id(pb_data);
    if ( proto::ObstacleInfo::shape(pb_data) )
      *(_DWORD *)(v3 + 68) = 1;
    else
      *(_DWORD *)(v3 + 68) = 0;
    pb_position_ptr = proto::ObstacleInfo::center(pb_data);
    inZ = proto::Vector::z(pb_position_ptr);
    inY = proto::Vector::y(pb_position_ptr);
    v7 = proto::Vector::x(pb_position_ptr);
    Vector3f::Set((Vector3f *const)(v3 + 72), v7, inY, inZ);
    pb_extend_ptr = proto::ObstacleInfo::extents(pb_data);
    inZa = (float)proto::Vector3Int::z(pb_extend_ptr) / 100.0;
    inYa = (float)proto::Vector3Int::y(pb_extend_ptr) / 100.0;
    v8 = proto::Vector3Int::x(pb_extend_ptr);
    Vector3f::Set((Vector3f *const)(v3 + 84), (float)v8 / 100.0, inYa, inZa);
    pb_rotation_ptr = proto::ObstacleInfo::rotation(pb_data);
    inZb = proto::MathQuaternion::w(pb_rotation_ptr);
    inYb = proto::MathQuaternion::z(pb_rotation_ptr);
    v14 = proto::MathQuaternion::y(pb_rotation_ptr);
    v9 = proto::MathQuaternion::x(pb_rotation_ptr);
    Quaternionf::Set((Quaternionf *const)(v3 + 96), v9, v14, inYb, inZb);
    if ( !IsFinite((const Vector3f *)(v3 + 72))
      || IsNAN((const Vector3f *)(v3 + 72))
      || !IsFinite((const Quaternionf *)(v3 + 96))
      || IsNAN((const Quaternionf *)(v3 + 96))
      || !IsFinite((const Vector3f *)(v3 + 84))
      || IsNAN((const Vector3f *)(v3 + 84)) )
    {
      v6 = -1;
    }
    else
    {
      ServiceBox::findService<PathfindingService>();
      PathfindingService::getConfig((PathfindingService *const)(v3 + 32));
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      MaxObstacleExtent = Config::GetMaxObstacleExtent(v11);
      if ( IsInvalidExtent((const Vector3f *)(v3 + 84), MaxObstacleExtent) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "addOneObstacle",
          584);
        common::milog::MiLogStream::operator()(
          &v25,
          "[obstacle] id=%d|shape=%d, center=[%.4f,%.4f,%.4f], extends=[%.4f,%.4f,%.4f], rotation=[%.4f,%.4f,%.4f,%.4f]",
          *(unsigned int *)(v3 + 64),
          *(unsigned int *)(v3 + 68),
          *(float *)(v3 + 72),
          *(float *)(v3 + 76),
          *(float *)(v3 + 80),
          *(float *)(v3 + 84),
          *(float *)(v3 + 88),
          *(float *)(v3 + 92),
          *(float *)(v3 + 96),
          *(float *)(v3 + 100),
          *(float *)(v3 + 104),
          *(float *)(v3 + 108));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v6 = -1;
      }
      else if ( IsInvalidRotation((const Quaternionf *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "addOneObstacle",
          594);
        common::milog::MiLogStream::operator()(
          &v25,
          "[obstacle] id=%d|shape=%d, center=[%.4f,%.4f,%.4f], extends=[%.4f,%.4f,%.4f], rotation=[%.4f,%.4f,%.4f,%.4f]",
          *(unsigned int *)(v3 + 64),
          *(unsigned int *)(v3 + 68),
          *(float *)(v3 + 72),
          *(float *)(v3 + 76),
          *(float *)(v3 + 80),
          *(float *)(v3 + 84),
          *(float *)(v3 + 88),
          *(float *)(v3 + 92),
          *(float *)(v3 + 96),
          *(float *)(v3 + 100),
          *(float *)(v3 + 104),
          *(float *)(v3 + 108));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v6 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/pathfinding_handler.cpp",
          "addOneObstacle",
          604);
        common::milog::MiLogStream::operator()(
          &v25,
          "[obstacle] id=%d|shape=%d, center=[%.4f,%.4f,%.4f], extends=[%.4f,%.4f,%.4f], rotation=[%.4f,%.4f,%.4f,%.4f]",
          *(unsigned int *)(v3 + 64),
          *(unsigned int *)(v3 + 68),
          *(float *)(v3 + 72),
          *(float *)(v3 + 76),
          *(float *)(v3 + 80),
          *(float *)(v3 + 84),
          *(float *)(v3 + 88),
          *(float *)(v3 + 92),
          *(float *)(v3 + 96),
          *(float *)(v3 + 100),
          *(float *)(v3 + 104),
          *(float *)(v3 + 108));
        common::milog::MiLogStream::~MiLogStream(&v25);
        DynamicNavMesh::RegisterObstacle(dynamic_nav_mesh, (const NavMeshObstacleData *)(v3 + 64), 0LL);
        v6 = 0;
      }
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    }
  }
  else
  {
    v6 = -1;
  }
  result = v6;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 617: range 000000000CB6D8AA-000000000CB6E02D
__int64 __fastcall PathfindingHandler::tryGetDynamicNavMesh(
        PathfindingHandler *const this,
        DynamicUniqueTokenType token,
        uint32_t scene_id,
        DynamicNavMesh **out_value)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  PathfindingService *v8; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const std::shared_ptr<StaticNavMesh> *StaticNavMesh; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Config *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t PolygonID; // r15d
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t Version; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  bool v34; // al
  unsigned int v35; // r14d
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t ID; // eax
  __int64 result; // rax
  int32_t activity_id; // [rsp+10h] [rbp-120h]
  uint32_t scene_tag_hash; // [rsp+14h] [rbp-11Ch]
  int val; // [rsp+38h] [rbp-F8h] BYREF
  int ActivityID; // [rsp+3Ch] [rbp-F4h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-F0h] BYREF
  unsigned int SceneTagHash; // [rsp+44h] [rbp-ECh] BYREF
  PathfindingThreadLocal *tl; // [rsp+48h] [rbp-E8h]
  DynamicNavMesh *ret; // [rsp+50h] [rbp-E0h]
  const std::shared_ptr<StaticNavMesh> *new_static_nav_mesh; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v50; // [rsp+60h] [rbp-D0h] BYREF
  char v51[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 scene_id:616 64 16 19 static_nav_mesh:636 96 16 14 config_ptr:644";
  *(_QWORD *)(v4 + 16) = PathfindingHandler::tryGetDynamicNavMesh;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = scene_id;
  if ( out_value )
  {
    v8 = ServiceBox::findService<PathfindingService>();
    tl = PathfindingService::getThreadLocal(v8);
    v9 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
    ret = NavMeshManager::GetDynamicNavMesh(v9, token);
    if ( *(_BYTE *)(((unsigned __int64)out_value >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *out_value = 0LL;
    if ( ret )
    {
      StaticNavMesh = DynamicNavMesh::GetStaticNavMesh(ret);
      std::shared_ptr<StaticNavMesh>::shared_ptr((std::shared_ptr<StaticNavMesh> *const)(v4 + 64), StaticNavMesh);
      if ( std::operator==<StaticNavMesh>((const std::shared_ptr<StaticNavMesh> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.cpp",
          "tryGetDynamicNavMesh",
          639);
        common::milog::MiLogStream::operator()(
          &v50,
          "can't find static nav mesh[%u, %u]",
          token,
          *(unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v50);
        v7 = 6003;
      }
      else
      {
        v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( StaticNavMesh::GetID(v11) == *(_DWORD *)(v4 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)out_value >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *out_value = ret;
          v7 = 0;
        }
        else
        {
          ServiceBox::findService<PathfindingService>();
          PathfindingService::getConfig((PathfindingService *const)(v4 + 96));
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( Config::IsIgnoreScene(v12, *(_DWORD *)(v4 + 48)) )
          {
            v7 = -1;
          }
          else
          {
            v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v14 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            scene_tag_hash = StaticNavMesh::GetSceneTagHash(v14);
            v15 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            PolygonID = StaticNavMesh::GetPolygonID(v15);
            v17 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            activity_id = StaticNavMesh::GetActivityID(v17);
            v18 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            Version = StaticNavMesh::GetVersion(v18);
            new_static_nav_mesh = (const std::shared_ptr<StaticNavMesh> *)Config::getStaticNavMesh(
                                                                            v13,
                                                                            *(_DWORD *)(v4 + 48),
                                                                            Version,
                                                                            activity_id,
                                                                            PolygonID,
                                                                            scene_tag_hash);
            if ( std::operator==<StaticNavMesh>(new_static_nav_mesh, 0LL) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/pathfinding_handler.cpp",
                "tryGetDynamicNavMesh",
                652);
              v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v50,
                      (const char (*)[38])"can't find static nav mesh. scene_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v4 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v21,
                      (const char (*)[10])" version:");
              v23 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              val = StaticNavMesh::GetVersion(v23);
              v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, &val);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v24,
                      (const char (*)[16])" activity_hash:");
              v26 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              ActivityID = StaticNavMesh::GetActivityID(v26);
              v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, &ActivityID);
              v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v27,
                      (const char (*)[13])" polygon_id:");
              v29 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v45 = StaticNavMesh::GetPolygonID(v29);
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &v45);
              v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v30,
                      (const char (*)[17])" scene_tag_hash:");
              v32 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              SceneTagHash = StaticNavMesh::GetSceneTagHash(v32);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &SceneTagHash);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v7 = 6001;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)out_value >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *out_value = ret;
              v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              v34 = Config::UseHavokCut(v33);
              DynamicNavMesh::InitMeshData(ret, new_static_nav_mesh, v34);
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/handler/pathfinding_handler.cpp",
                "tryGetDynamicNavMesh",
                659);
              v35 = *(_DWORD *)(v4 + 48);
              v36 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              ID = StaticNavMesh::GetID(v36);
              common::milog::MiLogStream::operator()(
                &v50,
                "dynamic nav mesh is in scene[%u], but try get other scene[%u]",
                ID,
                v35);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v7 = 6003;
            }
          }
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
        }
      }
      std::shared_ptr<StaticNavMesh>::~shared_ptr((std::shared_ptr<StaticNavMesh> *const)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/pathfinding_handler.cpp",
        "tryGetDynamicNavMesh",
        631);
      common::milog::MiLogStream::operator()(
        &v50,
        "can't find dynamic nav mesh[%u, %u]",
        token,
        *(unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v7 = 6003;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/pathfinding_handler.cpp",
      "tryGetDynamicNavMesh",
      620);
    common::milog::MiLogStream::operator()(&v50, "out value is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v7 = -1;
  }
  result = v7;
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
