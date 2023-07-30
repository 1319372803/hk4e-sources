// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/match_handler.cpp

// Line 21: range 000000000DECA630-000000000DECB071
int32_t __cdecl MatchHandler::addPacketFuncToMap(
        MatchHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  MatchHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  MatchHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MatchHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  MatchHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  MatchHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  MatchHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  MatchHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  __m128i v26; // [rsp+0h] [rbp-110h] BYREF
  __m128i v27; // [rsp+10h] [rbp-100h] BYREF
  __m128i v28; // [rsp+20h] [rbp-F0h] BYREF
  __m128i v29; // [rsp+30h] [rbp-E0h] BYREF
  __m128i v30; // [rsp+40h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+50h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+58h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+60h] [rbp-B0h]
  MatchHandler *thisa; // [rsp+68h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+7Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v36; // [rsp+80h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+88h] [rbp-88h] BYREF
  int (*__f[2])(MatchHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+90h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,const std::_Placeholder<1>&>::type v39; // [rsp+A0h] [rbp-70h] BYREF
  common::milog::MiLogStream v40; // [rsp+C0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10926;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v36, &__y) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/match_handler.cpp",
      "addPacketFuncToMap",
      22);
    common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10926LL);
    common::milog::MiLogStream::~MiLogStream(&v40);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(MatchHandler *, std::shared_ptr<common::minet::Packet>))MatchHandler::onAddMatchUnitReq;
    __f[1] = 0LL;
    std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
      &v39,
      __f,
      (MatchHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10926;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
      v7,
      &v39);
    __x = 10907;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v36, &__y) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/match_handler.cpp",
        "addPacketFuncToMap",
        23);
      common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10907LL);
      common::milog::MiLogStream::~MiLogStream(&v40);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v26.m128i_i64[0] = (__int64)MatchHandler::onRemoveMatchUnitReq;
      v26.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v26);
      std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
        &v39,
        __f,
        (MatchHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10907;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
        v10,
        &v39);
      __x = 10922;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v36, &__y) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/match_handler.cpp",
          "addPacketFuncToMap",
          24);
        common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10922LL);
        common::milog::MiLogStream::~MiLogStream(&v40);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v27.m128i_i64[0] = (__int64)MatchHandler::onConfirmGuestUnitReq;
        v27.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v27);
        std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
          &v39,
          __f,
          (MatchHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10922;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
          v13,
          &v39);
        __x = 10949;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v36, &__y) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/match_handler.cpp",
            "addPacketFuncToMap",
            25);
          common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10949LL);
          common::milog::MiLogStream::~MiLogStream(&v40);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v28.m128i_i64[0] = (__int64)MatchHandler::onMatchPlayerJoinNotify;
          v28.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v28);
          std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
            &v39,
            __f,
            (MatchHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10949;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
            v16,
            &v39);
          __x = 10920;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v36, &__y) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/match_handler.cpp",
              "addPacketFuncToMap",
              26);
            common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10920LL);
            common::milog::MiLogStream::~MiLogStream(&v40);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v29.m128i_i64[0] = (__int64)MatchHandler::onMatchPlayerQuitNotify;
            v29.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v29);
            std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
              &v39,
              __f,
              (MatchHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10920;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
              v19,
              &v39);
            __x = 10942;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v36, &__y) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/match_handler.cpp",
                "addPacketFuncToMap",
                27);
              common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10942LL);
              common::milog::MiLogStream::~MiLogStream(&v40);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v30.m128i_i64[0] = (__int64)MatchHandler::onSyncMatchUnitReq;
              v30.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v30);
              std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                &v39,
                __f,
                (MatchHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10942;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                v22,
                &v39);
              __x = 10937;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v36._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v36, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/match_handler.cpp",
                  "addPacketFuncToMap",
                  28);
                common::milog::MiLogStream::operator()(&v40, off_1BB4F780, 10937LL);
                common::milog::MiLogStream::~MiLogStream(&v40);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __f[0] = (int (*)(MatchHandler *, std::shared_ptr<common::minet::Packet>))MatchHandler::onMatchPlayerUpdateNotify;
                __f[1] = 0LL;
                std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                  &v39,
                  __f,
                  (MatchHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10937;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v39);
                return 0;
              }
            }
          }
        }
      }
    }
  }
};

// Line 33: range 000000000DECB072-000000000DECB295
int32_t __cdecl MatchHandler::onAddMatchUnitReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::AddMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:34";
  *(_QWORD *)(v2 + 16) = MatchHandler::onAddMatchUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddMatchUnitReq const>(
         (const std::shared_ptr<const proto::AddMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onAddMatchUnitReq",
      34);
    common::milog::MiLogStream::operator()(&v11, off_1BB55DE0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AddMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::AddMatchUnitReq::match_type(req);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::AddMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::AddMatchUnitReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 39: range 000000000DECB296-000000000DECB4B9
int32_t __cdecl MatchHandler::onRemoveMatchUnitReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::RemoveMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:40";
  *(_QWORD *)(v2 + 16) = MatchHandler::onRemoveMatchUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveMatchUnitReq const>(
         (const std::shared_ptr<const proto::RemoveMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onRemoveMatchUnitReq",
      40);
    common::milog::MiLogStream::operator()(&v11, off_1BB55E80);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::RemoveMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::RemoveMatchUnitReq::match_type(req);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::RemoveMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::RemoveMatchUnitReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 45: range 000000000DECB4BA-000000000DECB6DD
int32_t __cdecl MatchHandler::onConfirmGuestUnitReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ConfirmGuestUnitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:46";
  *(_QWORD *)(v2 + 16) = MatchHandler::onConfirmGuestUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ConfirmGuestUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ConfirmGuestUnitReq const>(
         (const std::shared_ptr<const proto::ConfirmGuestUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onConfirmGuestUnitReq",
      46);
    common::milog::MiLogStream::operator()(&v11, off_1BB55F20);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ConfirmGuestUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ConfirmGuestUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::ConfirmGuestUnitReq::match_type(req);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::ConfirmGuestUnitReq const>::~shared_ptr((std::shared_ptr<const proto::ConfirmGuestUnitReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 51: range 000000000DECB6DE-000000000DECB901
int32_t __cdecl MatchHandler::onMatchPlayerJoinNotify(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchPlayerJoinNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:52";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchPlayerJoinNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerJoinNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerJoinNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerJoinNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchPlayerJoinNotify",
      52);
    common::milog::MiLogStream::operator()(&v11, off_1BB55FC0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerJoinNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerJoinNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::MatchPlayerJoinNotify::match_type(notify);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::MatchPlayerJoinNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerJoinNotify> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 57: range 000000000DECB902-000000000DECBB25
int32_t __cdecl MatchHandler::onMatchPlayerQuitNotify(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchPlayerQuitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:58";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchPlayerQuitNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerQuitNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerQuitNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerQuitNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchPlayerQuitNotify",
      58);
    common::milog::MiLogStream::operator()(&v11, off_1BB56080);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerQuitNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerQuitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::MatchPlayerQuitNotify::match_type(notify);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::MatchPlayerQuitNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerQuitNotify> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 63: range 000000000DECBB26-000000000DECBD49
int32_t __cdecl MatchHandler::onSyncMatchUnitReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SyncMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:64";
  *(_QWORD *)(v2 + 16) = MatchHandler::onSyncMatchUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SyncMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SyncMatchUnitReq const>(
         (const std::shared_ptr<const proto::SyncMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onSyncMatchUnitReq",
      64);
    common::milog::MiLogStream::operator()(&v11, off_1BB56140);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SyncMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SyncMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::SyncMatchUnitReq::match_type(req);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::SyncMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::SyncMatchUnitReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 69: range 000000000DECBD4A-000000000DECBF6D
int32_t __cdecl MatchHandler::onMatchPlayerUpdateNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchMgr *p_match_mgr; // r14
  proto::MatchType matched; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchPlayerUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<common::minet::Packet> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:70";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchPlayerUpdateNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerUpdateNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerUpdateNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerUpdateNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchPlayerUpdateNotify",
      70);
    common::milog::MiLogStream::operator()(&v11, off_1BB561E0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerUpdateNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_mgr = &ServiceBox::findService<MatchService>()->match_mgr_;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v10, p_packet_ptr);
    matched = proto::MatchPlayerUpdateNotify::match_type(notify);
    v5 = MatchMgr::dispatchPacket(p_match_mgr, matched, &v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v10);
  }
  std::shared_ptr<proto::MatchPlayerUpdateNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerUpdateNotify> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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
