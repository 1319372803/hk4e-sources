// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/handler/tothemoon_handler.cpp

// Line 42: range 000000000CBB1248-000000000CBB1A95
int32_t __cdecl ToTheMoonHandler::addPacketFuncToMap(
        ToTheMoonHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  ToTheMoonHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  ToTheMoonHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  ToTheMoonHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  ToTheMoonHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-E0h] BYREF
  __m128i v20; // [rsp+10h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+28h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+30h] [rbp-B0h]
  ToTheMoonHandler *thisa; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+4Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v26; // [rsp+50h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+58h] [rbp-88h] BYREF
  int (*__f[2])(ToTheMoonHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+60h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>),ToTheMoonHandler*,const std::_Placeholder<1>&>::type v29; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 6112;
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
      "./src/handler/tothemoon_handler.cpp",
      "addPacketFuncToMap",
      44);
    common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6112LL);
    common::milog::MiLogStream::~MiLogStream(&v30);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __x = 6112;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v5,
      (ToTheMoonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 6172;
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
        "./src/handler/tothemoon_handler.cpp",
        "addPacketFuncToMap",
        45);
      common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6172LL);
      common::milog::MiLogStream::~MiLogStream(&v30);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v19.m128i_i64[0] = (__int64)ToTheMoonHandler::onToTheMoonQueryPathReq;
      v19.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v19);
      std::bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>),ToTheMoonHandler*,std::_Placeholder<1> const&>(
        &v29,
        __f,
        (ToTheMoonHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 6172;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ToTheMoonHandler*,std::_Placeholder<1>)>>(
        v8,
        &v29);
      __x = 6135;
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
          "./src/handler/tothemoon_handler.cpp",
          "addPacketFuncToMap",
          46);
        common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6135LL);
        common::milog::MiLogStream::~MiLogStream(&v30);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v20.m128i_i64[0] = (__int64)ToTheMoonHandler::onToTheMoonEnterSceneReq;
        v20.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v20);
        std::bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>),ToTheMoonHandler*,std::_Placeholder<1> const&>(
          &v29,
          __f,
          (ToTheMoonHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 6135;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ToTheMoonHandler*,std::_Placeholder<1>)>>(
          v11,
          &v29);
        __x = 6121;
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
            "./src/handler/tothemoon_handler.cpp",
            "addPacketFuncToMap",
            47);
          common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6121LL);
          common::milog::MiLogStream::~MiLogStream(&v30);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(ToTheMoonHandler *, std::shared_ptr<common::minet::Packet>))ToTheMoonHandler::onToTheMoonAddObstacleReq;
          __f[1] = 0LL;
          std::bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>),ToTheMoonHandler*,std::_Placeholder<1> const&>(
            &v29,
            __f,
            (ToTheMoonHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 6121;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ToTheMoonHandler*,std::_Placeholder<1>)>>(
            v14,
            &v29);
          __x = 6190;
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
              "./src/handler/tothemoon_handler.cpp",
              "addPacketFuncToMap",
              48);
            common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6190LL);
            common::milog::MiLogStream::~MiLogStream(&v30);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __f[0] = (int (*)(ToTheMoonHandler *, std::shared_ptr<common::minet::Packet>))ToTheMoonHandler::onToTheMoonRemoveObstacleReq;
            __f[1] = 0LL;
            std::bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>),ToTheMoonHandler*,std::_Placeholder<1> const&>(
              &v29,
              __f,
              (ToTheMoonHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 6190;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ToTheMoonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ToTheMoonHandler*,std::_Placeholder<1>)>>(
              v17,
              &v29);
            __x = 6199;
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
                "./src/handler/tothemoon_handler.cpp",
                "addPacketFuncToMap",
                49);
              common::milog::MiLogStream::operator()(&v30, "can not add repeat process func for cmd_id=%u", 6199LL);
              common::milog::MiLogStream::~MiLogStream(&v30);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __x = 6199;
              v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
                v18,
                (ToTheMoonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              return 0;
            }
          }
        }
      }
    }
  }
};

// Line 44: range 000000000CBB0D90-000000000CBB0FDA
int __cdecl ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const ToTheMoonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int v6; // r14d
  ToTheMoonHandler *this; // r14
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
  *(_QWORD *)(v2 + 8) = "1 32 24 9 notify:44";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ToTheMoonPingNotify::ToTheMoonPingNotify((proto::ToTheMoonPingNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::ToTheMoonPingNotify>(v5, (proto::ToTheMoonPingNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "operator()",
      44);
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
    v6 = ToTheMoonHandler::onToTheMoonPingNotify(this, &v9, (const proto::ToTheMoonPingNotify *)(v2 + 32));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
  }
  proto::ToTheMoonPingNotify::~ToTheMoonPingNotify((proto::ToTheMoonPingNotify *const)(v2 + 32));
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

// Line 49: range 000000000CBB0FDC-000000000CBB1247
int __cdecl ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const ToTheMoonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int v6; // r14d
  ToTheMoonHandler *this; // r14
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
  *(_QWORD *)(v2 + 8) = "1 48 72 9 notify:49";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::ToTheMoonObstaclesModifyNotify::ToTheMoonObstaclesModifyNotify((proto::ToTheMoonObstaclesModifyNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::ToTheMoonObstaclesModifyNotify>(
         v5,
         (proto::ToTheMoonObstaclesModifyNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "operator()",
      49);
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
    v6 = ToTheMoonHandler::onToTheMoonObstaclesModifyNotify(
           this,
           &v9,
           (const proto::ToTheMoonObstaclesModifyNotify *)(v2 + 48));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
  }
  proto::ToTheMoonObstaclesModifyNotify::~ToTheMoonObstaclesModifyNotify((proto::ToTheMoonObstaclesModifyNotify *const)(v2 + 48));
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

// Line 53: range 000000000CBB1A96-000000000CBB1F89
int32_t __cdecl ToTheMoonHandler::onToTheMoonQueryPathReq(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  proto::ToTheMoonQueryPathReq_AStarMethod v6; // r14d
  const proto::Vector *v7; // rax
  const proto::Vector *v8; // rax
  const proto::Vector *v9; // rax
  const proto::Vector *v10; // rax
  const proto::Vector *v11; // rax
  const proto::Vector *v12; // rax
  unsigned int id; // eax
  google::protobuf::int32 v14; // edx
  int32_t result; // eax
  double v16; // [rsp+0h] [rbp-120h]
  double v17; // [rsp+8h] [rbp-118h]
  double v18; // [rsp+10h] [rbp-110h]
  double v19; // [rsp+18h] [rbp-108h]
  double v20; // [rsp+20h] [rbp-100h]
  double v21; // [rsp+28h] [rbp-F8h]
  google::protobuf::int32 ret; // [rsp+4Ch] [rbp-D4h]
  std::__shared_ptr_access<const proto::ToTheMoonQueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+50h] [rbp-D0h]
  std::__shared_ptr_access<proto::ToTheMoonQueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> v25; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:55 64 16 10 rsp_ptr:55";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::onToTheMoonQueryPathReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ToTheMoonQueryPathReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ToTheMoonQueryPathReq const>(
         (const std::shared_ptr<const proto::ToTheMoonQueryPathReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonQueryPathReq",
      55);
    common::milog::MiLogStream::operator()(&v26, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ToTheMoonQueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ToTheMoonQueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ToTheMoonQueryPathRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ToTheMoonQueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ToTheMoonQueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ToTheMoonQueryPathRsp::set_retcode(rsp_0, -1);
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonQueryPathReq",
      56);
    v6 = proto::ToTheMoonQueryPathReq::astar_method(req);
    v7 = proto::ToTheMoonQueryPathReq::destination_pos(req);
    v21 = proto::Vector::z(v7);
    v8 = proto::ToTheMoonQueryPathReq::destination_pos(req);
    v20 = proto::Vector::y(v8);
    v9 = proto::ToTheMoonQueryPathReq::destination_pos(req);
    v19 = proto::Vector::x(v9);
    v10 = proto::ToTheMoonQueryPathReq::source_pos(req);
    v18 = proto::Vector::z(v10);
    v11 = proto::ToTheMoonQueryPathReq::source_pos(req);
    v17 = proto::Vector::y(v11);
    v12 = proto::ToTheMoonQueryPathReq::source_pos(req);
    v16 = proto::Vector::x(v12);
    id = proto::ToTheMoonQueryPathReq::query_id(req);
    common::milog::MiLogStream::operator()(
      &v26,
      "[MoonIsAStar] onQueryPathReq query_id=%d src=[%.4f,%.4f,%.4f] des=[%.4f,%.4f,%.4f] astar_method=%d",
      id,
      (unsigned int)v6,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v14 = proto::ToTheMoonQueryPathReq::query_id(req);
    proto::ToTheMoonQueryPathRsp::set_query_id(rsp_0, v14);
    if ( proto::ToTheMoonQueryPathReq::query_type(req) == ToTheMoonQueryPathReq_OptionType_OPTION_NORMAL )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v25, p_packet_ptr);
      ret = ToTheMoonHandler::queryPath(this, &v25, req, rsp_0);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
    }
    else
    {
      ret = -1;
    }
    proto::ToTheMoonQueryPathRsp::set_retcode(rsp_0, ret);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v25, p_packet_ptr);
    v5 = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonQueryPathRsp>(this, &v25, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
    std::shared_ptr<proto::ToTheMoonQueryPathRsp>::~shared_ptr((std::shared_ptr<proto::ToTheMoonQueryPathRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ToTheMoonQueryPathReq const>::~shared_ptr((std::shared_ptr<const proto::ToTheMoonQueryPathReq> *const)(v2 + 32));
  result = v5;
  if ( v27 == (char *)v2 )
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

// Line 75: range 000000000CBB1F8A-000000000CBB22B6
int32_t __cdecl ToTheMoonHandler::onToTheMoonAddObstacleReq(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::int32 id; // edx
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<const proto::ToTheMoonAddObstacleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-D0h]
  std::__shared_ptr_access<proto::ToTheMoonAddObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> v11; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:77 64 16 10 rsp_ptr:77";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::onToTheMoonAddObstacleReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ToTheMoonAddObstacleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ToTheMoonAddObstacleReq const>(
         (const std::shared_ptr<const proto::ToTheMoonAddObstacleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonAddObstacleReq",
      77);
    common::milog::MiLogStream::operator()(&v12, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ToTheMoonAddObstacleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ToTheMoonAddObstacleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ToTheMoonAddObstacleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ToTheMoonAddObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ToTheMoonAddObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ToTheMoonAddObstacleRsp::set_retcode(rsp_0, -1);
    id = proto::ToTheMoonAddObstacleReq::query_id(req);
    proto::ToTheMoonAddObstacleRsp::set_query_id(rsp_0, id);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v11, p_packet_ptr);
    ret = ToTheMoonHandler::addObstacle(this, &v11, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v11);
    proto::ToTheMoonAddObstacleRsp::set_retcode(rsp_0, ret);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v11, p_packet_ptr);
    v5 = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonAddObstacleRsp>(this, &v11, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v11);
    std::shared_ptr<proto::ToTheMoonAddObstacleRsp>::~shared_ptr((std::shared_ptr<proto::ToTheMoonAddObstacleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ToTheMoonAddObstacleReq const>::~shared_ptr((std::shared_ptr<const proto::ToTheMoonAddObstacleReq> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 84: range 000000000CBB22B8-000000000CBB25E4
int32_t __cdecl ToTheMoonHandler::onToTheMoonRemoveObstacleReq(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::int32 id; // edx
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<const proto::ToTheMoonRemoveObstacleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-D0h]
  std::__shared_ptr_access<proto::ToTheMoonRemoveObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> v11; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:86 64 16 10 rsp_ptr:86";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::onToTheMoonRemoveObstacleReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ToTheMoonRemoveObstacleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ToTheMoonRemoveObstacleReq const>(
         (const std::shared_ptr<const proto::ToTheMoonRemoveObstacleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonRemoveObstacleReq",
      86);
    common::milog::MiLogStream::operator()(&v12, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ToTheMoonRemoveObstacleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ToTheMoonRemoveObstacleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ToTheMoonRemoveObstacleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ToTheMoonRemoveObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ToTheMoonRemoveObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ToTheMoonRemoveObstacleRsp::set_retcode(rsp_0, -1);
    id = proto::ToTheMoonRemoveObstacleReq::query_id(req);
    proto::ToTheMoonRemoveObstacleRsp::set_query_id(rsp_0, id);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v11, p_packet_ptr);
    ret = ToTheMoonHandler::removeObstacle(this, &v11, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v11);
    proto::ToTheMoonRemoveObstacleRsp::set_retcode(rsp_0, ret);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v11, p_packet_ptr);
    v5 = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonRemoveObstacleRsp>(this, &v11, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v11);
    std::shared_ptr<proto::ToTheMoonRemoveObstacleRsp>::~shared_ptr((std::shared_ptr<proto::ToTheMoonRemoveObstacleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ToTheMoonRemoveObstacleReq const>::~shared_ptr((std::shared_ptr<const proto::ToTheMoonRemoveObstacleReq> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 114: range 000000000CBB25E6-000000000CBB2AD4
int32_t __cdecl ToTheMoonHandler::onToTheMoonObstaclesModifyNotify(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonObstaclesModifyNotify *notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  TothemoonService *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const proto::ToTheMoonObstacleInfo *v15; // r15
  int32_t v16; // r14d
  int32_t result; // eax
  bool res; // [rsp+2Ah] [rbp-F6h]
  bool use_edge; // [rsp+2Bh] [rbp-F5h]
  int i; // [rsp+2Ch] [rbp-F4h]
  int i_0; // [rsp+30h] [rbp-F0h]
  TothemoonThreadLocal *thread; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Player> p_player; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:120 64 4 21 add_obstacle_size:128 80 4 24 remove_obstacle_size:129 96 16 10 player:121";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::onToTheMoonObstaclesModifyNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  v6 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v6);
  if ( std::operator==<PlayerManager>(&thread->player_mgr, 0LL) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v8);
    v9 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
    PlayerManager::GetPlayer((const PlayerManager *const)(v3 + 96), v9);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/tothemoon_handler.cpp",
        "onToTheMoonObstaclesModifyNotify",
        124);
      common::milog::MiLogStream::operator()(
        &v25,
        "[ToTheMoon] [MoonObs] player_nodes_info of uid %d is null. should never be here",
        *(unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 64) = proto::ToTheMoonObstaclesModifyNotify::add_obstacles_size(notify);
      *(_DWORD *)(v3 + 80) = proto::ToTheMoonObstaclesModifyNotify::remove_obstacle_ids_size(notify);
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/tothemoon_handler.cpp",
        "onToTheMoonObstaclesModifyNotify",
        130);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v25,
              (const char (*)[43])"[ToTheMoon][obstacle] ObstaclesModify uid=");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v11,
              (const char (*)[20])" add_obstacle_size:");
      v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v13,
              (const char (*)[23])" remove_obstacle_size:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(_DWORD *)(v3 + 64) || *(_DWORD *)(v3 + 80) )
      {
        use_edge = proto::ToTheMoonObstaclesModifyNotify::use_edge(notify);
        proto::ToTheMoonObstaclesModifyNotify::scene_id(notify);
        res = 1;
        for ( i = 0; i < *(_DWORD *)(v3 + 64); ++i )
        {
          v15 = proto::ToTheMoonObstaclesModifyNotify::add_obstacles(notify, i);
          std::shared_ptr<Player>::shared_ptr(&p_player, (const std::shared_ptr<Player> *)(v3 + 96));
          res = (res & ToTheMoonHandler::innerAddObstacle(this, &p_player, v15, use_edge)) != 0;
          std::shared_ptr<Player>::~shared_ptr(&p_player);
        }
        for ( i_0 = 0; i_0 < *(_DWORD *)(v3 + 80); ++i_0 )
        {
          v16 = proto::ToTheMoonObstaclesModifyNotify::remove_obstacle_ids(notify, i_0);
          std::shared_ptr<Player>::shared_ptr(&p_player, (const std::shared_ptr<Player> *)(v3 + 96));
          res = (res & ToTheMoonHandler::innerRemoveObstacle(this, &p_player, v16)) != 0;
          std::shared_ptr<Player>::~shared_ptr(&p_player);
        }
        if ( res )
          v7 = 0;
        else
          v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  }
  result = v7;
  if ( v26 == (char *)v3 )
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

// Line 174: range 000000000CBB2AD6-000000000CBB2DE0
int32_t __cdecl ToTheMoonHandler::onToTheMoonEnterSceneReq(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<const proto::ToTheMoonEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-D0h]
  std::__shared_ptr_access<proto::ToTheMoonEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:176 64 16 11 rsp_ptr:176";
  *(_QWORD *)(v2 + 16) = ToTheMoonHandler::onToTheMoonEnterSceneReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ToTheMoonEnterSceneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ToTheMoonEnterSceneReq const>(
         (const std::shared_ptr<const proto::ToTheMoonEnterSceneReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonEnterSceneReq",
      176);
    common::milog::MiLogStream::operator()(&v11, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ToTheMoonEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ToTheMoonEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ToTheMoonEnterSceneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ToTheMoonEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ToTheMoonEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ToTheMoonEnterSceneRsp::set_retcode(rsp_0, -1);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    ret = ToTheMoonHandler::onEnterScene(this, &v10, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
    proto::ToTheMoonEnterSceneRsp::set_retcode(rsp_0, ret);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    v5 = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonEnterSceneRsp>(this, &v10, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
    std::shared_ptr<proto::ToTheMoonEnterSceneRsp>::~shared_ptr((std::shared_ptr<proto::ToTheMoonEnterSceneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ToTheMoonEnterSceneReq const>::~shared_ptr((std::shared_ptr<const proto::ToTheMoonEnterSceneReq> *const)(v2 + 32));
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

// Line 184: range 000000000CBB2DE2-000000000CBB2F75
int32_t __cdecl ToTheMoonHandler::onToTheMoonEnterSceneRsp(
        ToTheMoonHandler *const this,
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
        "./src/handler/tothemoon_handler.cpp",
        "onToTheMoonEnterSceneRsp",
        195);
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
      "./src/handler/tothemoon_handler.cpp",
      "onToTheMoonEnterSceneRsp",
      188);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gateserver_ip is 0!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 202: range 000000000CBB2F76-000000000CBB317B
int32_t __cdecl ToTheMoonHandler::onToTheMoonPingNotify(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonPingNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TothemoonService *v7; // rax
  int v8; // eax
  Player *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t TokenKeepAliveMs; // rax
  int32_t result; // eax
  TothemoonThreadLocal *thread; // [rsp+28h] [rbp-98h]
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 10 player:206 64 16 14 config_ptr:208";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::onToTheMoonPingNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getUserId(v6);
  v7 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v7);
  v8 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
  PlayerManager::GetPlayer((const PlayerManager *const)(v3 + 32), v8);
  ServiceBox::findService<TothemoonService>();
  TothemoonService::getConfig((TothemoonService *const)(v3 + 64));
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    TokenKeepAliveMs = Config::getTokenKeepAliveMs(v10);
    Player::RefreshAliveTimer(v9, TokenKeepAliveMs);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  result = 0;
  if ( v14 == (char *)v3 )
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

// Line 221: range 000000000CBB317C-000000000CBB34CB
int32_t __cdecl ToTheMoonHandler::onEnterScene(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonEnterSceneReq *req,
        proto::ToTheMoonEnterSceneRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  TothemoonService *v8; // rax
  int32_t v9; // r14d
  int v10; // eax
  char v11; // r14
  Player *v12; // r15
  bool v13; // r15
  google::protobuf::uint32 v14; // r14d
  google::protobuf::uint32 v15; // eax
  int32_t result; // eax
  unsigned int uid; // [rsp+30h] [rbp-D0h]
  int scene_id; // [rsp+34h] [rbp-CCh]
  TothemoonThreadLocal *thread; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> p_configPtr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 10 player:227 64 16 14 config_ptr:228";
  *(_QWORD *)(v4 + 16) = ToTheMoonHandler::onEnterScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  scene_id = proto::ToTheMoonEnterSceneReq::scene_id(req);
  v8 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v8);
  if ( std::operator==<PlayerManager>(&thread->player_mgr, 0LL) )
  {
    v9 = -1;
  }
  else
  {
    v10 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
    PlayerManager::AdaptiveGetPlayer((PlayerManager *const)(v4 + 32), v10);
    ServiceBox::findService<TothemoonService>();
    TothemoonService::getConfig((TothemoonService *const)(v4 + 64));
    v11 = 0;
    v13 = 0;
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      std::shared_ptr<Config>::shared_ptr(&p_configPtr, (const std::shared_ptr<Config> *)(v4 + 64));
      v11 = 1;
      if ( Player::OnEnterScene(v12, scene_id, &p_configPtr) )
        v13 = 1;
    }
    if ( v11 )
      std::shared_ptr<Config>::~shared_ptr(&p_configPtr);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/handler/tothemoon_handler.cpp",
        "onEnterScene",
        230);
      v14 = proto::ToTheMoonEnterSceneReq::version(req);
      v15 = proto::ToTheMoonEnterSceneReq::scene_id(req);
      common::milog::MiLogStream::operator()(&v22, "[MoonObs]uid=%u, scene_id:%u, version=%d", uid, v15, v14);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v9 = 0;
    }
    else
    {
      v9 = -1;
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  }
  result = v9;
  if ( v23 == (char *)v4 )
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

// Line 237: range 000000000CBB34CC-000000000CBB402F
int32_t __cdecl ToTheMoonHandler::addObstacle(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonAddObstacleReq *req,
        proto::ToTheMoonAddObstacleRsp *rsp_0)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  TothemoonService *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TothemoonService *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r15d
  std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *NodeInfo; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::shared_ptr<DynamicSVONode> *p_second; // rsi
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 area; // rsi
  __int64 v20; // rax
  float *v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rdx
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  bool use_edge; // [rsp+39h] [rbp-227h]
  bool res; // [rsp+3Ah] [rbp-226h]
  unsigned int uid; // [rsp+3Ch] [rbp-224h]
  proto::Retcode ret; // [rsp+40h] [rbp-220h]
  int level; // [rsp+44h] [rbp-21Ch]
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::iterator __for_begin; // [rsp+48h] [rbp-218h] BYREF
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::iterator __for_end; // [rsp+50h] [rbp-210h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_begin_0; // [rsp+58h] [rbp-208h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_end_0; // [rsp+60h] [rbp-200h] BYREF
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator __for_begin_1; // [rsp+68h] [rbp-1F8h] BYREF
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator __for_end_1; // [rsp+70h] [rbp-1F0h] BYREF
  TothemoonThreadLocal *thread; // [rsp+78h] [rbp-1E8h]
  const proto::ToTheMoonObstacleInfo *obs; // [rsp+80h] [rbp-1E0h]
  proto::DynamicNodes *dynamic_nodes_proto; // [rsp+88h] [rbp-1D8h]
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *__for_range; // [rsp+90h] [rbp-1D0h]
  std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > *node_info_item; // [rsp+98h] [rbp-1C8h]
  const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *node_map; // [rsp+A0h] [rbp-1C0h]
  const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *__for_range_0; // [rsp+A8h] [rbp-1B8h]
  const std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > *layer; // [rsp+B0h] [rbp-1B0h]
  const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *node_list; // [rsp+B8h] [rbp-1A8h]
  proto::DynamicLayerNodes *layer_nodes; // [rsp+C0h] [rbp-1A0h]
  const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *__for_range_1; // [rsp+C8h] [rbp-198h]
  const std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > *node_pair; // [rsp+D0h] [rbp-190h]
  const unsigned __int64 *index; // [rsp+D8h] [rbp-188h]
  proto::DynamicSVONode *dyna_node; // [rsp+E0h] [rbp-180h]
  proto::Vector *refer_pos; // [rsp+E8h] [rbp-178h]
  common::milog::MiLogStream v58; // [rsp+F0h] [rbp-170h] BYREF
  char v59[336]; // [rsp+110h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 8 12 node_cnt:290 80 16 18 path_processor:238 112 16 10 player:252 144 16 12 dynaData:283 1"
                        "76 16 8 node:311 208 48 13 node_info:289";
  *(_QWORD *)(v5 + 16) = ToTheMoonHandler::addObstacle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862728] = -202116109;
  v8 = ServiceBox::findService<TothemoonService>();
  std::shared_ptr<ToTheMoonPathFinding>::shared_ptr(
    (std::shared_ptr<ToTheMoonPathFinding> *const)(v5 + 80),
    &v8->tothemoon_processor);
  if ( std::operator==<ToTheMoonPathFinding>((const std::shared_ptr<ToTheMoonPathFinding> *)(v5 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "addObstacle",
      241);
    common::milog::MiLogStream::operator()(&v58, "[MoonObs] path processor is null");
    common::milog::MiLogStream::~MiLogStream(&v58);
    v4 = -1;
    goto LABEL_53;
  }
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v9);
  v10 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v10);
  if ( std::operator==<PlayerManager>(&thread->player_mgr, 0LL) )
  {
    v4 = -1;
    goto LABEL_53;
  }
  v11 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
  PlayerManager::GetPlayer((const PlayerManager *const)(v5 + 112), v11);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 112), 0LL) )
  {
    use_edge = proto::ToTheMoonAddObstacleReq::use_edge(req);
    obs = proto::ToTheMoonAddObstacleReq::obstacle(req);
    std::shared_ptr<Player>::shared_ptr(
      (std::shared_ptr<Player> *const)(v5 + 176),
      (const std::shared_ptr<Player> *)(v5 + 112));
    res = ToTheMoonHandler::innerAddObstacle(this, (std::shared_ptr<Player> *)(v5 + 176), obs, use_edge);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 176));
    if ( res )
      v12 = 0;
    else
      v12 = -1;
    ret = v12;
    if ( res )
    {
      dynamic_nodes_proto = proto::ToTheMoonAddObstacleRsp::mutable_dynamic_nodes(rsp_0);
      if ( !dynamic_nodes_proto )
      {
        v4 = -1;
        goto LABEL_52;
      }
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      Player::GetDynamicData((const Player *const)(v5 + 144));
      if ( std::operator==<DynamicPlayerData>((const std::shared_ptr<DynamicPlayerData> *)(v5 + 144), 0LL) )
      {
        v4 = -1;
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        NodeInfo = DynamicPlayerData::GetNodeInfo(v14);
        std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::map(
          (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208),
          NodeInfo);
        *(_QWORD *)(v5 + 48) = 0LL;
        __for_range = (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *)(v5 + 208);
        __for_begin._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::begin((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208))._M_node;
        __for_end._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::end((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          node_info_item = std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator*(&__for_begin);
          if ( !std::operator==<DynamicNodesInfo>(&node_info_item->second, 0LL) )
          {
            v16 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&node_info_item->second);
            node_map = DynamicNodesInfo::GetNodeMap(v16);
            __for_range_0 = node_map;
            __for_begin_0._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::begin(node_map)._M_node;
            __for_end_0._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              layer = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(layer);
              }
              level = layer->first;
              node_list = &layer->second;
              layer_nodes = proto::DynamicNodes::add_nodes(dynamic_nodes_proto);
              if ( layer_nodes )
              {
                proto::DynamicLayerNodes::set_level(layer_nodes, level);
                __for_range_1 = node_list;
                __for_begin_1._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::begin(node_list)._M_node;
                __for_end_1._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(__for_range_1)._M_node;
                while ( std::operator!=(&__for_begin_1, &__for_end_1) )
                {
                  node_pair = std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator*(&__for_begin_1);
                  ++*(_QWORD *)(v5 + 48);
                  index = &node_pair->first;
                  p_second = &node_pair->second;
                  std::shared_ptr<DynamicSVONode>::shared_ptr(
                    (std::shared_ptr<DynamicSVONode> *const)(v5 + 176),
                    &node_pair->second);
                  dyna_node = proto::DynamicLayerNodes::add_nodes(layer_nodes);
                  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
                    __asan_report_load8(index, p_second);
                  proto::DynamicSVONode::set_index(dyna_node, *index);
                  v18 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)&v18->area >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v18->area >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v18->area);
                  }
                  area = (unsigned int)v18->area;
                  proto::DynamicSVONode::set_area(dyna_node, area);
                  refer_pos = proto::DynamicSVONode::mutable_refer_pos(dyna_node);
                  v20 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v20 + 80) >> 3) + 0x7FFF8000) )
                    v20 = __asan_report_load8(v20 + 80, area);
                  v21 = *(float **)(v20 + 80);
                  v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
                  LOBYTE(area) = v22 != 0;
                  if ( v22 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v22 )
                    __asan_report_load4(v21);
                  proto::Vector::set_x(refer_pos, *v21);
                  v23 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v23 + 80) >> 3) + 0x7FFF8000) )
                    v23 = __asan_report_load8(v23 + 80, area);
                  v24 = *(_QWORD *)(v23 + 80);
                  v25 = *(_BYTE *)(((unsigned __int64)(v24 + 4) >> 3) + 0x7FFF8000);
                  LOBYTE(area) = v25 != 0;
                  if ( v25 != 0 && (char)(((v24 + 4) & 7) + 3) >= v25 )
                    __asan_report_load4(v24 + 4);
                  proto::Vector::set_y(refer_pos, *(float *)(v24 + 4));
                  v26 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v26 + 80) >> 3) + 0x7FFF8000) )
                    v26 = __asan_report_load8(v26 + 80, area);
                  v27 = *(_QWORD *)(v26 + 80);
                  if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) != 0
                    && (char)(((v27 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v27 + 8);
                  }
                  proto::Vector::set_z(refer_pos, *(float *)(v27 + 8));
                  std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v5 + 176));
                  std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator++(&__for_begin_1);
                }
              }
              std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator++(&__for_begin_0);
            }
          }
          std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "addObstacle",
          325);
        v28 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v58,
                (const char (*)[39])"[AddObs] Current Dynamic Nodes Count: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v28,
          (const unsigned __int64 *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v58);
        std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::~map((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208));
        v13 = 1;
      }
      std::shared_ptr<DynamicPlayerData>::~shared_ptr((std::shared_ptr<DynamicPlayerData> *const)(v5 + 144));
      if ( v13 != 1 )
        goto LABEL_52;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/tothemoon_handler.cpp",
        "addObstacle",
        331);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v58,
        (const char (*)[40])"[ToTheMoon][AddObs] add obstacle failed");
      common::milog::MiLogStream::~MiLogStream(&v58);
    }
    v4 = ret;
    goto LABEL_52;
  }
  common::milog::MiLogStream::create(
    &v58,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/handler/tothemoon_handler.cpp",
    "addObstacle",
    255);
  common::milog::MiLogStream::operator()(
    &v58,
    "[ToTheMoon] [MoonObs] player_nodes_info of uid %d is null. should never be here",
    uid);
  common::milog::MiLogStream::~MiLogStream(&v58);
  v4 = -1;
LABEL_52:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 112));
LABEL_53:
  std::shared_ptr<ToTheMoonPathFinding>::~shared_ptr((std::shared_ptr<ToTheMoonPathFinding> *const)(v5 + 80));
  result = v4;
  if ( v59 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 348: range 000000000CBB4030-000000000CBB4594
bool __cdecl ToTheMoonHandler::innerAddObstacle(
        ToTheMoonHandler *const this,
        std::shared_ptr<Player> *p_player,
        const proto::ToTheMoonObstacleInfo *obs,
        bool use_edge)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool result; // al
  proto::ToTheMoonObstacleInfo_ShapeType v8; // eax
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  Player *v12; // rax
  float v13; // [rsp+8h] [rbp-108h]
  float v14; // [rsp+Ch] [rbp-104h]
  float v15; // [rsp+Ch] [rbp-104h]
  float v16; // [rsp+Ch] [rbp-104h]
  float w; // [rsp+10h] [rbp-100h]
  float wa; // [rsp+10h] [rbp-100h]
  float wb; // [rsp+10h] [rbp-100h]
  NodeObstacleType type; // [rsp+30h] [rbp-E0h]
  unsigned int handle_id; // [rsp+34h] [rbp-DCh]
  const proto::Vector *center_pos; // [rsp+38h] [rbp-D8h]
  const proto::Vector *half_extents; // [rsp+40h] [rbp-D0h]
  const proto::MathQuaternion *rotation; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-C0h] BYREF
  char v28[160]; // [rsp+70h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 15 center_moon:368 64 12 21 half_extents_moon:381 96 16 17 rotation_moon:394";
  *(_QWORD *)(v4 + 16) = ToTheMoonHandler::innerAddObstacle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -202178560;
  if ( std::operator==<Player>(p_player, 0LL) )
  {
    result = 0;
  }
  else
  {
    handle_id = proto::ToTheMoonObstacleInfo::handle_id(obs);
    v8 = proto::ToTheMoonObstacleInfo::type(obs);
    if ( v8 )
    {
      if ( v8 == ToTheMoonObstacleInfo_ShapeType_OBSTACLE_SHAPE_BOX )
        type = Box;
    }
    else
    {
      type = Capsule;
    }
    center_pos = proto::ToTheMoonObstacleInfo::center(obs);
    w = proto::Vector::z(center_pos);
    v14 = proto::Vector::y(center_pos);
    v9 = proto::Vector::x(center_pos);
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 32), v9, v14, w);
    if ( !DataValidator::IsFinite((const ToTheMoonVector3 *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tothemoon_handler.cpp",
        "innerAddObstacle",
        371);
      common::milog::MiLogStream::operator()(
        &v27,
        "[obstacle] id=%d|shape=%d, center=[%.4f,%.4f,%.4f]",
        handle_id,
        (unsigned int)type,
        *(float *)(v4 + 32),
        *(float *)(v4 + 36),
        *(float *)(v4 + 40));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0;
    }
    else
    {
      half_extents = proto::ToTheMoonObstacleInfo::half_extents(obs);
      wa = proto::Vector::z(half_extents);
      v15 = proto::Vector::y(half_extents);
      v10 = proto::Vector::x(half_extents);
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 64), v10, v15, wa);
      if ( DataValidator::IsInvalidHalfExtent((const ToTheMoonVector3 *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tothemoon_handler.cpp",
          "innerAddObstacle",
          384);
        common::milog::MiLogStream::operator()(
          &v27,
          "[obstacle] id=%d|shape=%d, halfExtends=[%.4f,%.4f,%.4f]",
          handle_id,
          (unsigned int)type,
          *(float *)(v4 + 64),
          *(float *)(v4 + 68),
          *(float *)(v4 + 72));
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = 0;
      }
      else
      {
        rotation = proto::ToTheMoonObstacleInfo::rotation(obs);
        wb = proto::MathQuaternion::w(rotation);
        v16 = proto::MathQuaternion::z(rotation);
        v13 = proto::MathQuaternion::y(rotation);
        v11 = proto::MathQuaternion::x(rotation);
        ToTheMoonQuaternion::ToTheMoonQuaternion((ToTheMoonQuaternion *const)(v4 + 96), v11, v13, v16, wb);
        if ( DataValidator::IsInvalidRotation((const ToTheMoonQuaternion *)(v4 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/tothemoon_handler.cpp",
            "innerAddObstacle",
            397);
          common::milog::MiLogStream::operator()(
            &v27,
            "[obstacle] id=%d|shape=%d, rotation=[%.4f,%.4f,%.4f,%.4f]",
            handle_id,
            (unsigned int)type,
            *(float *)(v4 + 96),
            *(float *)(v4 + 100),
            *(float *)(v4 + 104),
            *(float *)(v4 + 108));
          common::milog::MiLogStream::~MiLogStream(&v27);
          result = 0;
        }
        else
        {
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player);
          result = Player::AddObstacle(
                     v12,
                     handle_id,
                     type,
                     (const ToTheMoonVector3 *)(v4 + 32),
                     (const ToTheMoonVector3 *)(v4 + 64),
                     (const ToTheMoonQuaternion *)(v4 + 96),
                     use_edge);
        }
      }
    }
  }
  if ( v28 == (char *)v4 )
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

// Line 411: range 000000000CBB4596-000000000CBB45C6
bool __cdecl ToTheMoonHandler::innerRemoveObstacle(
        ToTheMoonHandler *const this,
        std::shared_ptr<Player> *p_player,
        int32_t handle_id)
{
  Player *v3; // rax

  v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player);
  return Player::RemoveObstacle(v3, handle_id);
};

// Line 417: range 000000000CBB45C8-000000000CBB509C
int32_t __cdecl ToTheMoonHandler::removeObstacle(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonRemoveObstacleReq *req,
        proto::ToTheMoonRemoveObstacleRsp *rsp_0)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  TothemoonService *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TothemoonService *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r15d
  std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *NodeInfo; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::shared_ptr<DynamicSVONode> *p_second; // rsi
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 area; // rsi
  __int64 v20; // rax
  float *v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rdx
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  bool res; // [rsp+3Eh] [rbp-222h]
  int handle_id; // [rsp+44h] [rbp-21Ch]
  proto::Retcode ret; // [rsp+48h] [rbp-218h]
  int level; // [rsp+4Ch] [rbp-214h]
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::iterator __for_begin; // [rsp+50h] [rbp-210h] BYREF
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::iterator __for_end; // [rsp+58h] [rbp-208h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_begin_0; // [rsp+60h] [rbp-200h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_end_0; // [rsp+68h] [rbp-1F8h] BYREF
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator __for_begin_1; // [rsp+70h] [rbp-1F0h] BYREF
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator __for_end_1; // [rsp+78h] [rbp-1E8h] BYREF
  TothemoonThreadLocal *thread; // [rsp+80h] [rbp-1E0h]
  proto::DynamicNodes *dynamic_nodes_proto; // [rsp+88h] [rbp-1D8h]
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *__for_range; // [rsp+90h] [rbp-1D0h]
  std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > *node_info_item; // [rsp+98h] [rbp-1C8h]
  const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *node_map; // [rsp+A0h] [rbp-1C0h]
  const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *__for_range_0; // [rsp+A8h] [rbp-1B8h]
  const std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > *layer; // [rsp+B0h] [rbp-1B0h]
  const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *node_list; // [rsp+B8h] [rbp-1A8h]
  proto::DynamicLayerNodes *layer_nodes; // [rsp+C0h] [rbp-1A0h]
  const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *__for_range_1; // [rsp+C8h] [rbp-198h]
  const std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > *node_pair; // [rsp+D0h] [rbp-190h]
  const unsigned __int64 *index; // [rsp+D8h] [rbp-188h]
  proto::DynamicSVONode *dyna_node; // [rsp+E0h] [rbp-180h]
  proto::Vector *refer_pos; // [rsp+E8h] [rbp-178h]
  common::milog::MiLogStream v56; // [rsp+F0h] [rbp-170h] BYREF
  char v57[336]; // [rsp+110h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 8 12 node_cnt:459 80 16 18 path_processor:418 112 16 10 player:430 144 16 12 dynaData:452 1"
                        "76 16 8 node:480 208 48 13 node_info:458";
  *(_QWORD *)(v5 + 16) = ToTheMoonHandler::removeObstacle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862728] = -202116109;
  v8 = ServiceBox::findService<TothemoonService>();
  std::shared_ptr<ToTheMoonPathFinding>::shared_ptr(
    (std::shared_ptr<ToTheMoonPathFinding> *const)(v5 + 80),
    &v8->tothemoon_processor);
  if ( std::operator==<ToTheMoonPathFinding>((const std::shared_ptr<ToTheMoonPathFinding> *)(v5 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "removeObstacle",
      422);
    common::milog::MiLogStream::operator()(&v56, "[MoonObs] path processor is null");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v4 = -1;
    goto LABEL_51;
  }
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getUserId(v9);
  v10 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v10);
  if ( std::operator==<PlayerManager>(&thread->player_mgr, 0LL) )
  {
    v4 = -1;
    goto LABEL_51;
  }
  v11 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
  PlayerManager::GetPlayer((const PlayerManager *const)(v5 + 112), v11);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 112), 0LL) )
  {
    handle_id = proto::ToTheMoonRemoveObstacleReq::handle(req);
    std::shared_ptr<Player>::shared_ptr(
      (std::shared_ptr<Player> *const)(v5 + 176),
      (const std::shared_ptr<Player> *)(v5 + 112));
    res = ToTheMoonHandler::innerRemoveObstacle(this, (std::shared_ptr<Player> *)(v5 + 176), handle_id);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 176));
    if ( res )
      v12 = 0;
    else
      v12 = -1;
    ret = v12;
    if ( res )
    {
      dynamic_nodes_proto = proto::ToTheMoonRemoveObstacleRsp::mutable_dynamic_nodes(rsp_0);
      if ( !dynamic_nodes_proto )
      {
        v4 = -1;
        goto LABEL_50;
      }
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      Player::GetDynamicData((const Player *const)(v5 + 144));
      if ( std::operator==<DynamicPlayerData>((const std::shared_ptr<DynamicPlayerData> *)(v5 + 144), 0LL) )
      {
        v4 = -1;
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        NodeInfo = DynamicPlayerData::GetNodeInfo(v14);
        std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::map(
          (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208),
          NodeInfo);
        *(_QWORD *)(v5 + 48) = 0LL;
        __for_range = (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *)(v5 + 208);
        __for_begin._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::begin((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208))._M_node;
        __for_end._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::end((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          node_info_item = std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator*(&__for_begin);
          if ( !std::operator==<DynamicNodesInfo>(&node_info_item->second, 0LL) )
          {
            v16 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&node_info_item->second);
            node_map = DynamicNodesInfo::GetNodeMap(v16);
            __for_range_0 = node_map;
            __for_begin_0._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::begin(node_map)._M_node;
            __for_end_0._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              layer = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(layer);
              }
              level = layer->first;
              node_list = &layer->second;
              layer_nodes = proto::DynamicNodes::add_nodes(dynamic_nodes_proto);
              if ( layer_nodes )
              {
                proto::DynamicLayerNodes::set_level(layer_nodes, level);
                __for_range_1 = node_list;
                __for_begin_1._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::begin(node_list)._M_node;
                __for_end_1._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(__for_range_1)._M_node;
                while ( std::operator!=(&__for_begin_1, &__for_end_1) )
                {
                  node_pair = std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator*(&__for_begin_1);
                  ++*(_QWORD *)(v5 + 48);
                  index = &node_pair->first;
                  p_second = &node_pair->second;
                  std::shared_ptr<DynamicSVONode>::shared_ptr(
                    (std::shared_ptr<DynamicSVONode> *const)(v5 + 176),
                    &node_pair->second);
                  dyna_node = proto::DynamicLayerNodes::add_nodes(layer_nodes);
                  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
                    __asan_report_load8(index, p_second);
                  proto::DynamicSVONode::set_index(dyna_node, *index);
                  v18 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)&v18->area >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v18->area >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v18->area);
                  }
                  area = (unsigned int)v18->area;
                  proto::DynamicSVONode::set_area(dyna_node, area);
                  refer_pos = proto::DynamicSVONode::mutable_refer_pos(dyna_node);
                  v20 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v20 + 80) >> 3) + 0x7FFF8000) )
                    v20 = __asan_report_load8(v20 + 80, area);
                  v21 = *(float **)(v20 + 80);
                  v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
                  LOBYTE(area) = v22 != 0;
                  if ( v22 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v22 )
                    __asan_report_load4(v21);
                  proto::Vector::set_x(refer_pos, *v21);
                  v23 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v23 + 80) >> 3) + 0x7FFF8000) )
                    v23 = __asan_report_load8(v23 + 80, area);
                  v24 = *(_QWORD *)(v23 + 80);
                  v25 = *(_BYTE *)(((unsigned __int64)(v24 + 4) >> 3) + 0x7FFF8000);
                  LOBYTE(area) = v25 != 0;
                  if ( v25 != 0 && (char)(((v24 + 4) & 7) + 3) >= v25 )
                    __asan_report_load4(v24 + 4);
                  proto::Vector::set_y(refer_pos, *(float *)(v24 + 4));
                  v26 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)(v26 + 80) >> 3) + 0x7FFF8000) )
                    v26 = __asan_report_load8(v26 + 80, area);
                  v27 = *(_QWORD *)(v26 + 80);
                  if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) != 0
                    && (char)(((v27 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v27 + 8);
                  }
                  proto::Vector::set_z(refer_pos, *(float *)(v27 + 8));
                  std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v5 + 176));
                  std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator++(&__for_begin_1);
                }
              }
              std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator++(&__for_begin_0);
            }
          }
          std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "removeObstacle",
          494);
        v28 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v56,
                (const char (*)[39])"[AddObs] Current Dynamic Nodes Count: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v28,
          (const unsigned __int64 *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::~map((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)(v5 + 208));
        v13 = 1;
      }
      std::shared_ptr<DynamicPlayerData>::~shared_ptr((std::shared_ptr<DynamicPlayerData> *const)(v5 + 144));
      if ( v13 != 1 )
        goto LABEL_50;
    }
    v4 = ret;
    goto LABEL_50;
  }
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/tothemoon_handler.cpp",
    "removeObstacle",
    433);
  common::milog::MiLogStream::operator()(&v56, "[MoonObs] player is null");
  common::milog::MiLogStream::~MiLogStream(&v56);
  v4 = -1;
LABEL_50:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 112));
LABEL_51:
  std::shared_ptr<ToTheMoonPathFinding>::~shared_ptr((std::shared_ptr<ToTheMoonPathFinding> *const)(v5 + 80));
  result = v4;
  if ( v57 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 501: range 000000000CBB509E-000000000CBB5CBA
int32_t __cdecl ToTheMoonHandler::queryPath(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ToTheMoonQueryPathReq *req,
        proto::ToTheMoonQueryPathRsp *rsp_0)
{
  int32_t v4; // r14d
  unsigned __int64 p_M_single_bucket; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  TothemoonService *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TothemoonService *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // r15d
  int v15; // r15d
  proto::ToTheMoonQueryPathReq_FilterType v16; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned int v19; // eax
  std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::vector<ToTheMoonVector3> *v21; // rax
  std::vector<ToTheMoonVector3>::reference v22; // rax
  float *p_x; // rdx
  std::vector<ToTheMoonVector3> *v24; // rax
  std::vector<ToTheMoonVector3>::reference v25; // rdx
  float *p_y; // rax
  std::vector<ToTheMoonVector3> *v27; // rax
  std::vector<ToTheMoonVector3>::reference v28; // rdx
  float *p_z; // rax
  std::vector<int>::reference v30; // rax
  google::protobuf::int32 *v31; // rdx
  unsigned __int64 v32; // rax
  int32_t result; // eax
  float v34; // [rsp+8h] [rbp-228h]
  float v35; // [rsp+8h] [rbp-228h]
  float v36; // [rsp+Ch] [rbp-224h]
  float v37; // [rsp+Ch] [rbp-224h]
  FilterType filterType; // [rsp+34h] [rbp-1FCh]
  int32_t i; // [rsp+38h] [rbp-1F8h]
  int32_t i_0; // [rsp+3Ch] [rbp-1F4h]
  int32_t i_1; // [rsp+40h] [rbp-1F0h]
  unsigned int uid; // [rsp+44h] [rbp-1ECh]
  unsigned int scene_id; // [rsp+48h] [rbp-1E8h]
  TothemoonThreadLocal *thread; // [rsp+50h] [rbp-1E0h]
  const proto::Vector *des_pos; // [rsp+58h] [rbp-1D8h]
  const proto::Vector *src_pos; // [rsp+60h] [rbp-1D0h]
  proto::Vector *corner; // [rsp+68h] [rbp-1C8h]
  PlayerManager v50; // [rsp+70h] [rbp-1C0h] BYREF

  p_M_single_bucket = (unsigned __int64)&v50.playerMap._M_h._M_single_bucket;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      p_M_single_bucket = v6;
  }
  *(_QWORD *)p_M_single_bucket = 1102416563LL;
  *(_QWORD *)(p_M_single_bucket + 8) = "8 32 12 12 des_moon:525 64 12 12 src_moon:526 96 16 18 path_processor:502 128 16 "
                                       "10 player:528 160 16 14 config_ptr:532 192 16 13 path_list:581 224 24 13 levelLis"
                                       "t:540 288 24 13 indexList:541";
  *(_QWORD *)(p_M_single_bucket + 16) = ToTheMoonHandler::queryPath;
  v7 = (_DWORD *)(p_M_single_bucket >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -218103808;
  v7[536862730] = -202116109;
  v8 = ServiceBox::findService<TothemoonService>();
  std::shared_ptr<ToTheMoonPathFinding>::shared_ptr(
    (std::shared_ptr<ToTheMoonPathFinding> *const)(p_M_single_bucket + 96),
    &v8->tothemoon_processor);
  if ( std::operator==<ToTheMoonPathFinding>(
         (const std::shared_ptr<ToTheMoonPathFinding> *)(p_M_single_bucket + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v50.playerMap._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "queryPath",
      506);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin,
      "[MoonIsAStar] path processor is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin);
    v4 = -1;
    goto LABEL_47;
  }
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v9);
  v10 = ServiceBox::findService<TothemoonService>();
  thread = TothemoonService::getThreadLocal(v10);
  if ( std::operator==<PlayerManager>(&thread->player_mgr, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v50.playerMap._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/tothemoon_handler.cpp",
      "queryPath",
      515);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin,
      "[MoonIsAStar] thread player_mgr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin);
    v4 = -1;
    goto LABEL_47;
  }
  des_pos = proto::ToTheMoonQueryPathReq::destination_pos(req);
  src_pos = proto::ToTheMoonQueryPathReq::source_pos(req);
  scene_id = proto::ToTheMoonQueryPathReq::scene_id(req);
  v36 = proto::Vector::z(des_pos);
  v34 = proto::Vector::y(des_pos);
  v11 = proto::Vector::x(des_pos);
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(p_M_single_bucket + 32), v11, v34, v36);
  v37 = proto::Vector::z(src_pos);
  v35 = proto::Vector::y(src_pos);
  v12 = proto::Vector::x(src_pos);
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(p_M_single_bucket + 64), v12, v35, v37);
  v13 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
  PlayerManager::GetPlayer((const PlayerManager *const)(p_M_single_bucket + 128), v13);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(p_M_single_bucket + 128), 0LL) )
    goto LABEL_13;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v50.playerMap._M_h._M_before_begin,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/tothemoon_handler.cpp",
    "queryPath",
    531);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin,
    "[MoonIsAStar] player of uid %d is null",
    uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin);
  ServiceBox::findService<TothemoonService>();
  TothemoonService::getConfig((TothemoonService *const)(p_M_single_bucket + 160));
  v14 = (unsigned int)std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thread->player_mgr);
  std::shared_ptr<Config>::shared_ptr(
    (std::shared_ptr<Config> *const)(p_M_single_bucket + 192),
    (const std::shared_ptr<Config> *)(p_M_single_bucket + 160));
  PlayerManager::AddPlayer(&v50, v14, uid, (ConfigPtr *)scene_id);
  std::shared_ptr<Player>::operator=(
    (std::shared_ptr<Player> *const)(p_M_single_bucket + 128),
    (std::shared_ptr<Player> *)&v50);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v50);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_single_bucket + 192));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(p_M_single_bucket + 128), 0LL) )
  {
    v4 = -1;
    v15 = 0;
  }
  else
  {
    v15 = 1;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_single_bucket + 160));
  if ( v15 == 1 )
  {
LABEL_13:
    std::vector<int>::vector((std::vector<int> *const)(p_M_single_bucket + 224));
    std::vector<long>::vector((std::vector<long int> *const)(p_M_single_bucket + 288));
    proto::ToTheMoonQueryPathReq::refined(req);
    proto::ToTheMoonQueryPathReq::use_full_neighbor(req);
    v16 = proto::ToTheMoonQueryPathReq::filter_type(req);
    if ( v16 == ToTheMoonQueryPathReq_FilterType_Water )
    {
      filterType = Water_4;
    }
    else
    {
      if ( v16 > ToTheMoonQueryPathReq_FilterType_Water )
      {
LABEL_21:
        filterType = All_0;
        goto LABEL_22;
      }
      if ( v16 )
      {
        if ( v16 != ToTheMoonQueryPathReq_FilterType_Air )
          goto LABEL_21;
        filterType = Air_0;
      }
      else
      {
        filterType = All_0;
      }
    }
LABEL_22:
    proto::ToTheMoonQueryPathReq::astar_method(req);
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
    Player::GetPath(
      (Player *const)(p_M_single_bucket + 192),
      (const ToTheMoonVector3 *)v17,
      (const ToTheMoonVector3 *)(p_M_single_bucket + 64),
      (FilterType)(p_M_single_bucket + 32),
      (std::vector<int> *)(unsigned int)filterType,
      (std::vector<long int> *)(p_M_single_bucket + 224),
      p_M_single_bucket + 32);
    if ( std::operator!=<std::vector<ToTheMoonVector3>>(
           (const std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_single_bucket + 192),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v50.playerMap._M_h._M_before_begin,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/tothemoon_handler.cpp",
        "queryPath",
        586);
      v18 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
      v19 = std::vector<ToTheMoonVector3>::size(v18);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin,
        "[MoonIsAStar] queryPath finish, path_list is not null. Total size: %d",
        v19);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin);
      v20 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
      for ( i = std::vector<ToTheMoonVector3>::size(v20) - 1; i >= 0; --i )
      {
        corner = proto::ToTheMoonQueryPathRsp::add_corners(rsp_0);
        v21 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
        v22 = std::vector<ToTheMoonVector3>::operator[](v21, i);
        p_x = &v22->x;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        proto::Vector::set_x(corner, *p_x);
        v24 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
        v25 = std::vector<ToTheMoonVector3>::operator[](v24, i);
        p_y = &v25->y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        proto::Vector::set_y(corner, v25->y);
        v27 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
        v28 = std::vector<ToTheMoonVector3>::operator[](v27, i);
        p_z = &v28->z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        proto::Vector::set_z(corner, v28->z);
      }
    }
    if ( proto::ToTheMoonQueryPathRsp::corners_size(rsp_0) <= 0 )
      proto::ToTheMoonQueryPathRsp::set_query_status(rsp_0, ToTheMoonQueryPathRsp_PathStatusType_STATUS_FAIL);
    else
      proto::ToTheMoonQueryPathRsp::set_query_status(rsp_0, ToTheMoonQueryPathRsp_PathStatusType_STATUS_SUCC);
    for ( i_0 = 0; i_0 < std::vector<int>::size((const std::vector<int> *const)(p_M_single_bucket + 224)); ++i_0 )
    {
      v30 = std::vector<int>::operator[]((std::vector<int> *const)(p_M_single_bucket + 224), i_0);
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v30);
      }
      proto::ToTheMoonQueryPathRsp::add_level(rsp_0, *v31);
    }
    for ( i_1 = 0; i_1 < std::vector<long>::size((const std::vector<long int> *const)(p_M_single_bucket + 288)); ++i_1 )
    {
      v32 = (unsigned __int64)std::vector<long>::operator[](
                                (std::vector<long int> *const)(p_M_single_bucket + 288),
                                i_1);
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v32 = __asan_report_load8(v32, i_1);
      proto::ToTheMoonQueryPathRsp::add_index(rsp_0, *(_QWORD *)v32);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v50.playerMap._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/tothemoon_handler.cpp",
      "queryPath",
      622);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin,
      "[ToTheMoon][MoonIsAStar] finish queryPath");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50.playerMap._M_h._M_before_begin);
    v4 = 0;
    std::shared_ptr<std::vector<ToTheMoonVector3>>::~shared_ptr((std::shared_ptr<std::vector<ToTheMoonVector3> > *const)(p_M_single_bucket + 192));
    std::vector<long>::~vector((std::vector<long int> *const)(p_M_single_bucket + 288));
    std::vector<int>::~vector((std::vector<int> *const)(p_M_single_bucket + 224));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_single_bucket + 128));
LABEL_47:
  std::shared_ptr<ToTheMoonPathFinding>::~shared_ptr((std::shared_ptr<ToTheMoonPathFinding> *const)(p_M_single_bucket
                                                                                                  + 96));
  result = v4;
  if ( &v50.playerMap._M_h._M_single_bucket == (std::_Hashtable<int,std::pair<int const,std::shared_ptr<Player> >,std::allocator<std::pair<int const,std::shared_ptr<Player> > >,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__bucket_type *)p_M_single_bucket )
  {
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)p_M_single_bucket = 1172321806LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 628: range 000000000CCF5A08-000000000CCF5EA4
int32_t __cdecl ToTheMoonHandler::sendRspPacket<proto::ToTheMoonAddObstacleRsp>(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::ToTheMoonAddObstacleRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 error_code:636 64 16 18 rsp_packet_ptr:630";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonAddObstacleRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::ToTheMoonAddObstacleRsp>((const proto::ToTheMoonAddObstacleRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "sendRspPacket",
      633);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tothemoon_handler.cpp",
        "sendRspPacket",
        639);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          649);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          652);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::ToTheMoonAddObstacleRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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

// Line 628: range 000000000CCF6DE0-000000000CCF727C
int32_t __cdecl ToTheMoonHandler::sendRspPacket<proto::ToTheMoonEnterSceneRsp>(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::ToTheMoonEnterSceneRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 error_code:636 64 16 18 rsp_packet_ptr:630";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonEnterSceneRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::ToTheMoonEnterSceneRsp>((const proto::ToTheMoonEnterSceneRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "sendRspPacket",
      633);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tothemoon_handler.cpp",
        "sendRspPacket",
        639);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          649);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          652);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::ToTheMoonEnterSceneRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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

// Line 628: range 000000000CCF50FE-000000000CCF559A
int32_t __cdecl ToTheMoonHandler::sendRspPacket<proto::ToTheMoonQueryPathRsp>(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::ToTheMoonQueryPathRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 error_code:636 64 16 18 rsp_packet_ptr:630";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonQueryPathRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::ToTheMoonQueryPathRsp>((const proto::ToTheMoonQueryPathRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "sendRspPacket",
      633);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tothemoon_handler.cpp",
        "sendRspPacket",
        639);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          649);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          652);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::ToTheMoonQueryPathRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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

// Line 628: range 000000000CCF6312-000000000CCF67AE
int32_t __cdecl ToTheMoonHandler::sendRspPacket<proto::ToTheMoonRemoveObstacleRsp>(
        ToTheMoonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::ToTheMoonRemoveObstacleRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 error_code:636 64 16 18 rsp_packet_ptr:630";
  *(_QWORD *)(v3 + 16) = ToTheMoonHandler::sendRspPacket<proto::ToTheMoonRemoveObstacleRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::ToTheMoonRemoveObstacleRsp>((const proto::ToTheMoonRemoveObstacleRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tothemoon_handler.cpp",
      "sendRspPacket",
      633);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tothemoon_handler.cpp",
        "sendRspPacket",
        639);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          649);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/tothemoon_handler.cpp",
          "sendRspPacket",
          652);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::ToTheMoonRemoveObstacleRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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
