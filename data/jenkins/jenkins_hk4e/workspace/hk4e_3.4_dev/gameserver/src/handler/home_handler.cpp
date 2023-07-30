// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/home_handler.cpp

// Line 31: range 00000000151017C8-00000000151024E9
int32_t __cdecl HomeHandler::addPacketFuncToMap(
        HomeHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  HomeHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  HomeHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  HomeHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  HomeHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  HomeHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  HomeHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  HomeHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  HomeHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  HomeHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  __m128i v32; // [rsp+0h] [rbp-130h] BYREF
  __m128i v33; // [rsp+10h] [rbp-120h] BYREF
  __m128i v34; // [rsp+20h] [rbp-110h] BYREF
  __m128i v35; // [rsp+30h] [rbp-100h] BYREF
  __m128i v36; // [rsp+40h] [rbp-F0h] BYREF
  __m128i v37; // [rsp+50h] [rbp-E0h] BYREF
  __m128i v38; // [rsp+60h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+70h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+78h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+80h] [rbp-B0h]
  HomeHandler *thisa; // [rsp+88h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+9Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v44; // [rsp+A0h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+A8h] [rbp-88h] BYREF
  int (*__f[2])(HomeHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+B0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,const std::_Placeholder<1>&>::type v47; // [rsp+C0h] [rbp-70h] BYREF
  common::milog::MiLogStream v48; // [rsp+E0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 12007;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v44, &__y) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/home_handler.cpp",
      "addPacketFuncToMap",
      32);
    common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12007LL);
    common::milog::MiLogStream::~MiLogStream(&v48);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(HomeHandler *, std::shared_ptr<common::minet::Packet>))HomeHandler::onServerTryEnterHomeReq;
    __f[1] = 0LL;
    std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
      &v47,
      __f,
      (HomeHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 12007;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
      v7,
      &v47);
    __x = 12098;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v44, &__y) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/home_handler.cpp",
        "addPacketFuncToMap",
        33);
      common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12098LL);
      common::milog::MiLogStream::~MiLogStream(&v48);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(HomeHandler *, std::shared_ptr<common::minet::Packet>))HomeHandler::onGetHomeDataRsp;
      __f[1] = 0LL;
      std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
        &v47,
        __f,
        (HomeHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 12098;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
        v10,
        &v47);
      __x = 12035;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v44, &__y) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/home_handler.cpp",
          "addPacketFuncToMap",
          34);
        common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12035LL);
        common::milog::MiLogStream::~MiLogStream(&v48);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v32.m128i_i64[0] = (__int64)HomeHandler::onSaveHomeDataRsp;
        v32.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v32);
        std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
          &v47,
          __f,
          (HomeHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 12035;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
          v13,
          &v47);
        __x = 12003;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v44, &__y) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/home_handler.cpp",
            "addPacketFuncToMap",
            35);
          common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12003LL);
          common::milog::MiLogStream::~MiLogStream(&v48);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v33.m128i_i64[0] = (__int64)HomeHandler::onServerBlockHomeNotify;
          v33.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v33);
          std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
            &v47,
            __f,
            (HomeHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 12003;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
            v16,
            &v47);
          __x = 12047;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v44, &__y) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/home_handler.cpp",
              "addPacketFuncToMap",
              36);
            common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12047LL);
            common::milog::MiLogStream::~MiLogStream(&v48);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v34.m128i_i64[0] = (__int64)HomeHandler::onServerHomeGetOnlineStatusReq;
            v34.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v34);
            std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
              &v47,
              __f,
              (HomeHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 12047;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
              v19,
              &v47);
            __x = 12053;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v44, &__y) )
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/home_handler.cpp",
                "addPacketFuncToMap",
                37);
              common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12053LL);
              common::milog::MiLogStream::~MiLogStream(&v48);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v35.m128i_i64[0] = (__int64)HomeHandler::onServerHomeKickPlayerReq;
              v35.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v35);
              std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
                &v47,
                __f,
                (HomeHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 12053;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
                v22,
                &v47);
              __x = 12048;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v44, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v48,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/home_handler.cpp",
                  "addPacketFuncToMap",
                  39);
                common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12048LL);
                common::milog::MiLogStream::~MiLogStream(&v48);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v36.m128i_i64[0] = (__int64)HomeHandler::onNewHomeOfflineMsgNotify;
                v36.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v36);
                std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
                  &v47,
                  __f,
                  (HomeHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 12048;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v47);
                __x = 12081;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v44, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v48,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/home_handler.cpp",
                    "addPacketFuncToMap",
                    40);
                  common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12081LL);
                  common::milog::MiLogStream::~MiLogStream(&v48);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v37.m128i_i64[0] = (__int64)HomeHandler::onGetHomeOfflineMsgRsp;
                  v37.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v37);
                  std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
                    &v47,
                    __f,
                    (HomeHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 12081;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v47);
                  __x = 12075;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v44._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v44, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v48,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/home_handler.cpp",
                      "addPacketFuncToMap",
                      41);
                    common::milog::MiLogStream::operator()(&v48, off_2570C7C0, 12075LL);
                    common::milog::MiLogStream::~MiLogStream(&v48);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v38.m128i_i64[0] = (__int64)HomeHandler::onSendHomeOfflineMsgRsp;
                    v38.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v38);
                    std::bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>),HomeHandler*,std::_Placeholder<1> const&>(
                      &v47,
                      __f,
                      (HomeHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 12075;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (HomeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(HomeHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v47);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 47: range 00000000151024EA-0000000015102E1F
int32_t __cdecl HomeHandler::onServerTryEnterHomeReq(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  GameserverApp *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rdi
  common::milog::MiLogStream *v12; // r14
  const unsigned int *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  GameserverApp *v16; // rax
  const proto::ServerTryEnterHomeReq *v17; // rdi
  unsigned __int64 v18; // rdx
  int v19; // r14d
  char v20; // al
  GameserverService *v21; // rax
  GameserverService *v22; // rax
  uint64_t rand; // rsi
  GameserverService *v24; // rax
  unsigned int GameThreadLocal; // eax
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  GameserverService *v30; // rax
  common::milog::MiLogStream *v31; // rax
  HomeSession *v32; // r14
  HomeSession *v33; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdi
  common::milog::MiLogStream *v38; // r14
  const unsigned int *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  HomeSession *v42; // rax
  HomeSession *v43; // r14
  uint32_t v44; // r14d
  uint32_t v45; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-108h] BYREF
  unsigned int v49; // [rsp+1Ch] [rbp-104h] BYREF
  unsigned int v50; // [rsp+20h] [rbp-100h] BYREF
  int32_t ret; // [rsp+24h] [rbp-FCh]
  const proto::ServerTryEnterHomeReq *req; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Home> __a; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<HomeSession> __r; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v55; // [rsp+50h] [rbp-D0h] BYREF
  char v56[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 home_uid:50 64 16 10 req_ptr:48 96 16 19 home_session_ptr:66";
  *(_QWORD *)(v2 + 16) = HomeHandler::onServerTryEnterHomeReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerTryEnterHomeReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerTryEnterHomeReq const>(
         (const std::shared_ptr<const proto::ServerTryEnterHomeReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onServerTryEnterHomeReq",
      48);
    common::milog::MiLogStream::operator()(&v55, off_257168E0);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v5 = -1;
    goto LABEL_30;
  }
  req = std::__shared_ptr_access<proto::ServerTryEnterHomeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerTryEnterHomeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  ret = 0;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v6);
  common::milog::MiLogStream::create(
    &v55,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/home_handler.cpp",
    "onServerTryEnterHomeReq",
    53);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v55, (const char (*)[9])" appid: ");
  v8 = Singleton<GameserverApp>::instance();
  val = AppBase::getAppId((AppBase *const)v8);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" source appid: ");
  v49 = proto::ServerTryEnterHomeReq::source_app_id(req);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v49);
  v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v11,
          (const char (*)[34])" ThreadLocal::work_thread_index: ");
  v13 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v11, " ThreadLocal::work_thread_index: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, v13);
  v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v14,
          (const char (*)[23])" source thread index: ");
  v50 = proto::ServerTryEnterHomeReq::source_thread_index(req);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v50);
  common::milog::MiLogStream::~MiLogStream(&v55);
  v16 = Singleton<GameserverApp>::instance();
  LODWORD(v15) = AppBase::getAppId((AppBase *const)v16);
  v17 = req;
  if ( (_DWORD)v15 != proto::ServerTryEnterHomeReq::source_app_id(req) )
    goto LABEL_10;
  v18 = ZTWN11ThreadLocal17work_thread_indexE(v17, &v50);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  v19 = *(_DWORD *)v18;
  if ( v19 == proto::ServerTryEnterHomeReq::source_thread_index(req) )
    v20 = 0;
  else
LABEL_10:
    v20 = 1;
  if ( !v20 || (v21 = ServiceBox::findService<GameserverService>(), GameserverService::isOnlinePlayerNumSafe(v21)) )
  {
    v22 = ServiceBox::findService<GameserverService>();
    GameserverService::findHomeSession((GameserverService *const)(v2 + 96), (__int64)v22, *(_DWORD *)(v2 + 48));
    rand = 0LL;
    if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 96), 0LL) )
    {
      v24 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v24);
      HomeMgr::findOnlineHome((HomeMgr *const)&__a, GameThreadLocal + 704);
      v26 = std::operator!=<Home>(&__a, 0LL);
      std::shared_ptr<Home>::~shared_ptr(&__a);
      if ( v26 )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/home_handler.cpp",
          "onServerTryEnterHomeReq",
          72);
        v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v55,
                (const char (*)[17])"[HOME] home_uid:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v28, (const char (*)[17])" already online!");
        common::milog::MiLogStream::~MiLogStream(&v55);
        ret = -1;
LABEL_26:
        std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v2 + 96));
        goto LABEL_27;
      }
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/home_handler.cpp",
        "onServerTryEnterHomeReq",
        77);
      v29 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v55,
              (const char (*)[47])"home_session_ptr is null. create it. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v55);
      v30 = ServiceBox::findService<GameserverService>();
      GameserverService::createHomeSession((GameserverService *const)&__r, (__int64)v30, *(_DWORD *)(v2 + 48));
      std::shared_ptr<HomeSession>::operator=((std::shared_ptr<HomeSession> *const)(v2 + 96), &__r);
      std::shared_ptr<HomeSession>::~shared_ptr(&__r);
      if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/home_handler.cpp",
          "onServerTryEnterHomeReq",
          81);
        v31 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v55,
                (const char (*)[43])"[HOME] createHomeSession failed. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
        ret = -1;
        goto LABEL_26;
      }
      v32 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      rand = proto::ServerTryEnterHomeReq::cur_load_rand(req);
      HomeSession::setLastLoadRand(v32, rand);
    }
    v33 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    ThreadIndex = HomeSession::getThreadIndex(v33);
    v35 = ZTWN11ThreadLocal17work_thread_indexE(v33, rand);
    if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) != 0 && (char)((v35 & 7) + 3) >= *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    if ( ThreadIndex == *(_DWORD *)v35 )
    {
      v43 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__r,
        p_packet_ptr);
      ret = HomeSession::onServerTryEnterHomeReq(v43, (common::minet::PacketPtr *)&__r, req);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/home_handler.cpp",
        "onServerTryEnterHomeReq",
        90);
      v36 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v55,
              (const char (*)[55])"[HOME][SESSION] session is in another thread, home_uid");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 48));
      v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v37, (const char (*)[14])" this thread:");
      v39 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v37, " this thread:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, v39);
      v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v40, (const char (*)[17])" another thread:");
      v42 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v50 = HomeSession::getThreadIndex(v42);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &v50);
      common::milog::MiLogStream::~MiLogStream(&v55);
      ret = -1;
    }
    goto LABEL_26;
  }
  common::milog::MiLogStream::create(
    &v55,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/home_handler.cpp",
    "onServerTryEnterHomeReq",
    60);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v55,
    (const char (*)[28])"isOnlinePlayerNumSafe false");
  common::milog::MiLogStream::~MiLogStream(&v55);
  ret = 9746;
LABEL_27:
  if ( ret )
  {
    v44 = proto::ServerTryEnterHomeReq::source_app_id(req);
    v45 = proto::ServerTryEnterHomeReq::source_uid(req);
    HomeHandler::sendServerTryEnterHomeRsp(ret, *(_DWORD *)(v2 + 48), v45, v44);
  }
  v5 = 0;
LABEL_30:
  std::shared_ptr<proto::ServerTryEnterHomeReq const>::~shared_ptr((std::shared_ptr<const proto::ServerTryEnterHomeReq> *const)(v2 + 64));
  result = v5;
  if ( v56 == (char *)v2 )
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

// Line 106: range 0000000015102E20-000000001510326C
int32_t __cdecl HomeHandler::onGetHomeDataRsp(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HomeDataRsp; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  HomeSession *v9; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdi
  common::milog::MiLogStream *v14; // r14
  const unsigned int *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  HomeSession *v18; // rax
  HomeSession *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  const proto::GetHomeDataRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 home_uid:108 64 16 11 rsp_ptr:107 96 16 20 home_session_ptr:109";
  *(_QWORD *)(v2 + 16) = HomeHandler::onGetHomeDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetHomeDataRsp>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetHomeDataRsp const>(
         (const std::shared_ptr<const proto::GetHomeDataRsp> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onGetHomeDataRsp",
      107);
    common::milog::MiLogStream::operator()(&v23, off_25716D60);
    common::milog::MiLogStream::~MiLogStream(&v23);
    HomeDataRsp = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetHomeDataRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameserverService::findHomeSession((GameserverService *const)(v2 + 96), (__int64)v7, *(_DWORD *)(v2 + 48));
    if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onGetHomeDataRsp",
        112);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v23,
             (const char (*)[36])"home_session_ptr is null. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      HomeDataRsp = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      ThreadIndex = HomeSession::getThreadIndex(v9);
      v11 = ZTWN11ThreadLocal17work_thread_indexE(v9, 0LL);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      if ( ThreadIndex == *(_DWORD *)v11 )
      {
        v19 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        HomeDataRsp = HomeSession::onGetHomeDataRsp(v19, rsp_0);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/home_handler.cpp",
          "onGetHomeDataRsp",
          117);
        v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v23,
                (const char (*)[55])"[HOME][SESSION] session is in another thread, home_uid");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" this thread:");
        v15 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v13, " this thread:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
        v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v16,
                (const char (*)[17])" another thread:");
        v18 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = HomeSession::getThreadIndex(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        HomeDataRsp = -1;
      }
    }
    std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GetHomeDataRsp const>::~shared_ptr((std::shared_ptr<const proto::GetHomeDataRsp> *const)(v2 + 64));
  result = HomeDataRsp;
  if ( v24 == (char *)v2 )
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

// Line 126: range 000000001510326E-000000001510376E
int32_t __cdecl HomeHandler::onSaveHomeDataRsp(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  Home *v9; // rdx
  GameserverService *v10; // rax
  unsigned int v11; // eax
  google::protobuf::uint32 v12; // r14d
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GameserverService *v14; // rax
  GameThreadLocal *v15; // rax
  common::milog::MiLogStream *v16; // rax
  GameserverService *v17; // rax
  __int64 v18; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SaveHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 home_uid:134 64 16 11 rsp_ptr:127 96 16 12 home_ptr:135 128 16 12 save_ptr:141";
  *(_QWORD *)(v2 + 16) = HomeHandler::onSaveHomeDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveHomeDataRsp>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SaveHomeDataRsp const>(
         (const std::shared_ptr<const proto::SaveHomeDataRsp> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onSaveHomeDataRsp",
      127);
    common::milog::MiLogStream::operator()(&v21, off_25716EA0);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::SaveHomeDataRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( proto::SaveHomeDataRsp::retcode(rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onSaveHomeDataRsp",
        130);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v21, (const char (*)[21])"save home data fails");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v6);
      v7 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
      HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 96), GameThreadLocal + 704);
      if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
      {
        v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v5 = Home::onSaveHomeDataRsp(v9, rsp_0);
      }
      else
      {
        v10 = ServiceBox::findService<GameserverService>();
        v11 = (unsigned int)GameserverService::getGameThreadLocal(v10);
        HomeMgr::findSaveWaitHome((HomeMgr *const)(v2 + 128), v11 + 704);
        if ( std::operator==<HomeSaveWaitData>(0LL, (const std::shared_ptr<HomeSaveWaitData> *)(v2 + 128)) )
        {
          v5 = 0;
        }
        else
        {
          v12 = proto::SaveHomeDataRsp::data_version(rsp_0);
          v13 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v13->data_version >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v13->data_version >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v12 == v13->data_version )
          {
            v14 = ServiceBox::findService<GameserverService>();
            v15 = GameserverService::getGameThreadLocal(v14);
            HomeMgr::delSaveWaitHome(&v15->home_mgr, *(_DWORD *)(v2 + 48));
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "./src/handler/home_handler.cpp",
              "onSaveHomeDataRsp",
              156);
            v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v21,
                    (const char (*)[33])"[HOME] delSaveWaitHome home_uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v21);
            v17 = ServiceBox::findService<GameserverService>();
            GameserverService::removeHomeSession(v17, *(_DWORD *)(v2 + 48));
            v18 = (__int64)std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)(v18 + 56) >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load8();
            v5 = HomeMgr::cleanHomeStatus(*(_DWORD *)(v2 + 48), *(_QWORD *)(v18 + 56));
          }
          else
          {
            v5 = 0;
          }
        }
        std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v2 + 128));
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
    }
  }
  std::shared_ptr<proto::SaveHomeDataRsp const>::~shared_ptr((std::shared_ptr<const proto::SaveHomeDataRsp> *const)(v2 + 64));
  result = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 164: range 0000000015103770-0000000015103A7D
int32_t __cdecl HomeHandler::onServerBlockHomeNotify(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  Home *v10; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerBlockHomeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 home_uid:165 64 16 12 home_ptr:166 96 16 14 notify_ptr:173";
  *(_QWORD *)(v2 + 16) = HomeHandler::onServerBlockHomeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v5);
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 64), GameThreadLocal + 704);
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/home_handler.cpp",
      "onServerBlockHomeNotify",
      169);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v13,
           (const char (*)[34])"[HOME] home not online. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::ServerBlockHomeNotify>((common::minet::Packet *const)(v2 + 96));
    if ( std::operator==<proto::ServerBlockHomeNotify const>(
           (const std::shared_ptr<const proto::ServerBlockHomeNotify> *)(v2 + 96),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onServerBlockHomeNotify",
        173);
      common::milog::MiLogStream::operator()(&v13, off_25717080);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v9 = -1;
    }
    else
    {
      notify = std::__shared_ptr_access<proto::ServerBlockHomeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerBlockHomeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v10 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = Home::onServerBlockHomeNotify(v10, notify);
    }
    std::shared_ptr<proto::ServerBlockHomeNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerBlockHomeNotify> *const)(v2 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = v9;
  if ( v14 == (char *)v2 )
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

// Line 179: range 0000000015103B38-0000000015104009
int32_t __cdecl HomeHandler::onServerHomeGetOnlineStatusReq(
        HomeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  common::minet::Packet *v11; // rax
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  int32_t result; // eax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+8h] [rbp-158h]
  google::protobuf::int32 retcode; // [rsp+28h] [rbp-138h]
  uint32_t source_uid; // [rsp+2Ch] [rbp-134h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-130h] BYREF
  char v19[272]; // [rsp+50h] [rbp-110h] BYREF
  HomeHandler::onServerHomeGetOnlineStatusReq::<lambda(Player&)> v20; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 home_uid:181 64 16 18 rsp_packet_ptr:208 96 16 12 home_ptr:187 128 56 7 rsp:184";
  *(_QWORD *)(v2 + 16) = HomeHandler::onServerHomeGetOnlineStatusReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v5);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  source_uid = common::minet::Packet::getUserId(v6);
  proto::ServerHomeGetOnlineStatusRsp::ServerHomeGetOnlineStatusRsp((proto::ServerHomeGetOnlineStatusRsp *const)(v2 + 128));
  v7 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 96), GameThreadLocal + 704);
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onServerHomeGetOnlineStatusReq",
      190);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"[HOME] home not online. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    retcode = -1;
  }
  else
  {
    proto::ServerHomeGetOnlineStatusRsp::set_is_online((proto::ServerHomeGetOnlineStatusRsp *const)(v2 + 128), 1);
    v15 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v20.__home_uid = *(_DWORD *)(v2 + 48);
    v20.__rsp = (proto::ServerHomeGetOnlineStatusRsp *)(v2 + 128);
    std::function<ForeachPolicy ()(Player &)>::function<HomeHandler::onServerHomeGetOnlineStatusReq(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v18,
      v20);
    retcode = Home::foreachPlayer(v15, (std::function<ForeachPolicy(Player&)> *)&v18);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v18);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
  proto::ServerHomeGetOnlineStatusRsp::set_retcode((proto::ServerHomeGetOnlineStatusRsp *const)(v2 + 128), retcode);
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetOnlineStatusRsp>((const proto::ServerHomeGetOnlineStatusRsp *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onServerHomeGetOnlineStatusReq",
      211);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v18, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setUserId(v11, source_uid);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 96),
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    NetworkMgrBase::sendPacketToTargetService(v12, (common::minet::PacketPtr)__PAIR128__(3LL, v2 + 96), 0, v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
    v10 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  proto::ServerHomeGetOnlineStatusRsp::~ServerHomeGetOnlineStatusRsp((proto::ServerHomeGetOnlineStatusRsp *const)(v2 + 128));
  result = v10;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 196: range 0000000015103A7E-0000000015103B36
ForeachPolicy __cdecl HomeHandler::onServerHomeGetOnlineStatusReq(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1}::operator()(
        const HomeHandler::onServerHomeGetOnlineStatusReq::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerMpComp *MpComp; // rbx
  proto::OnlinePlayerInfo *v4; // rax

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != __closure->__home_uid )
  {
    MpComp = Player::getMpComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = proto::ServerHomeGetOnlineStatusRsp::add_player_info_list(__closure->__rsp);
    PlayerMpComp::fillOnlinePlayerInfo(MpComp, v4);
  }
  return 0;
};

// Line 220: range 000000001510400A-00000000151047BA
int32_t __cdecl HomeHandler::onServerHomeKickPlayerReq(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GameserverService *v8; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v10; // rax
  Home *v11; // rax
  HomeSceneComp *SceneComp; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned __int64 v20; // rax
  common::minet::Packet *v21; // rax
  NetworkMgrBase *v22; // r14
  uint32_t v23; // r8d
  int32_t result; // eax
  bool is_kick_all; // [rsp+1Fh] [rbp-161h]
  std::__shared_ptr_access<const proto::ServerHomeKickPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-160h]
  HomeWorld *home_world; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-150h] BYREF
  char v29[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 14 target_uid:223 48 4 11 retcode:225 64 4 12 home_uid:226 80 4 14 source_uid:227 96 16 1"
                        "1 req_ptr:221 128 16 18 rsp_packet_ptr:262 160 16 12 home_ptr:234 192 32 7 rsp:229";
  *(_QWORD *)(v2 + 16) = HomeHandler::onServerHomeKickPlayerReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeKickPlayerReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerHomeKickPlayerReq const>(
         (const std::shared_ptr<const proto::ServerHomeKickPlayerReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "onServerHomeKickPlayerReq",
      221);
    common::milog::MiLogStream::operator()(&v28, off_257172C0);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeKickPlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeKickPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    is_kick_all = proto::ServerHomeKickPlayerReq::is_kick_all(req);
    *(_DWORD *)(v2 + 32) = proto::ServerHomeKickPlayerReq::target_uid(req);
    *(_DWORD *)(v2 + 48) = 0;
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 64) = common::minet::Packet::getHomeUserId(v6);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 80) = common::minet::Packet::getUserId(v7);
    proto::ServerHomeKickPlayerRsp::ServerHomeKickPlayerRsp((proto::ServerHomeKickPlayerRsp *const)(v2 + 192));
    proto::ServerHomeKickPlayerRsp::set_is_kick_all((proto::ServerHomeKickPlayerRsp *const)(v2 + 192), is_kick_all);
    proto::ServerHomeKickPlayerRsp::set_target_uid(
      (proto::ServerHomeKickPlayerRsp *const)(v2 + 192),
      *(_DWORD *)(v2 + 32));
    v8 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v8);
    HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 160), GameThreadLocal + 704);
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onServerHomeKickPlayerReq",
        237);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v28,
              (const char (*)[34])"[HOME] home not online. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      *(_DWORD *)(v2 + 48) = 9704;
    }
    else
    {
      v11 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      SceneComp = Home::getSceneComp(v11);
      home_world = HomeSceneComp::getHomeWorld(SceneComp);
      if ( is_kick_all )
      {
        if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned __int64)(home_world->_vptr_World + 15);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        (*(void (__fastcall **)(HomeWorld *, __int64, _QWORD))v13)(home_world, 1LL, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = (unsigned __int64)(home_world->_vptr_World + 13);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(HomeWorld *, _QWORD))v14)(
                                 home_world,
                                 *(unsigned int *)(v2 + 32));
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/home_handler.cpp",
            "onServerHomeKickPlayerReq",
            252);
          v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v28,
                  (const char (*)[30])"checkKickPlayer failed, uid: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 80));
          v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v16,
                  (const char (*)[15])" ,target_uid: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 32));
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" , retcode: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v20 = (unsigned __int64)(home_world->_vptr_World + 14);
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8();
          (*(void (__fastcall **)(HomeWorld *, _QWORD, _QWORD))v20)(home_world, *(unsigned int *)(v2 + 32), 0LL);
        }
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 160));
    proto::ServerHomeKickPlayerRsp::set_retcode((proto::ServerHomeKickPlayerRsp *const)(v2 + 192), *(_DWORD *)(v2 + 48));
    common::minet::PacketUtils::createPacket<proto::ServerHomeKickPlayerRsp>((const proto::ServerHomeKickPlayerRsp *)(v2 + 128));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onServerHomeKickPlayerReq",
        265);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v28, (const char (*)[20])"createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v5 = -1;
    }
    else
    {
      v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      common::minet::Packet::setUserId(v21, *(_DWORD *)(v2 + 80));
      v22 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)(v2 + 160),
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
      NetworkMgrBase::sendPacketToTargetService(v22, (common::minet::PacketPtr)__PAIR128__(3LL, v2 + 160), 0, v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
      v5 = 0;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    proto::ServerHomeKickPlayerRsp::~ServerHomeKickPlayerRsp((proto::ServerHomeKickPlayerRsp *const)(v2 + 192));
  }
  std::shared_ptr<proto::ServerHomeKickPlayerReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeKickPlayerReq> *const)(v2 + 96));
  result = v5;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 274: range 00000000151047BC-00000000151049CF
int32_t __cdecl HomeHandler::onNewHomeOfflineMsgNotify(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  Home *v10; // rax
  HomeOfflineMsgComp *OfflineMsgComp; // rax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 home_uid:275 64 16 12 home_ptr:276";
  *(_QWORD *)(v2 + 16) = HomeHandler::onNewHomeOfflineMsgNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v5);
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 64), GameThreadLocal + 704);
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/home_handler.cpp",
      "onNewHomeOfflineMsgNotify",
      279);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v13,
           (const char (*)[34])"[HOME] home not online. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    OfflineMsgComp = Home::getOfflineMsgComp(v10);
    v9 = HomeOfflineMsgComp::onNewHomeOfflineMsgNotify(OfflineMsgComp);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = v9;
  if ( v14 == (char *)v2 )
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

// Line 286: range 00000000151049D0-0000000015104CE5
int32_t __cdecl HomeHandler::onGetHomeOfflineMsgRsp(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t HomeOfflineMsgRsp; // r14d
  Home *v10; // rax
  HomeOfflineMsgComp *OfflineMsgComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 home_uid:287 64 16 12 home_ptr:288 96 16 11 rsp_ptr:295";
  *(_QWORD *)(v2 + 16) = HomeHandler::onGetHomeOfflineMsgRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v5);
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 64), GameThreadLocal + 704);
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/home_handler.cpp",
      "onGetHomeOfflineMsgRsp",
      291);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v14,
           (const char (*)[34])"[HOME] home not online. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    HomeOfflineMsgRsp = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::GetHomeOfflineMsgRsp>((common::minet::Packet *const)(v2 + 96));
    if ( std::operator==<proto::GetHomeOfflineMsgRsp const>(
           (const std::shared_ptr<const proto::GetHomeOfflineMsgRsp> *)(v2 + 96),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "onGetHomeOfflineMsgRsp",
        295);
      common::milog::MiLogStream::operator()(&v14, off_257174C0);
      common::milog::MiLogStream::~MiLogStream(&v14);
      HomeOfflineMsgRsp = -1;
    }
    else
    {
      rsp_0 = std::__shared_ptr_access<proto::GetHomeOfflineMsgRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v10 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      OfflineMsgComp = Home::getOfflineMsgComp(v10);
      HomeOfflineMsgRsp = HomeOfflineMsgComp::onGetHomeOfflineMsgRsp(OfflineMsgComp, rsp_0);
    }
    std::shared_ptr<proto::GetHomeOfflineMsgRsp const>::~shared_ptr((std::shared_ptr<const proto::GetHomeOfflineMsgRsp> *const)(v2 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = HomeOfflineMsgRsp;
  if ( v15 == (char *)v2 )
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

// Line 300: range 0000000015104CE6-0000000015104CF8
int32_t __cdecl HomeHandler::onSendHomeOfflineMsgRsp(HomeHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  return 0;
};

// Line 312: range 0000000015104CFA-00000000151051B1
__int64 __fastcall HomeHandler::sendServerTryEnterHomeReq(
        uint32_t source_uid,
        uint32_t target_uid,
        uint32_t gameserver_id,
        uint64_t load_rand,
        uint32_t owner_init_home_module_id,
        int32_t thread_index,
        uint32_t try_times)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  GameserverApp *v14; // rax
  uint32_t AppId; // eax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::minet::Packet *v18; // rax
  common::minet::Packet *v19; // rax
  common::minet::Packet *v20; // rax
  NetworkMgrBase *v21; // r14
  uint32_t v22; // r8d
  __int64 result; // rax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-110h] BYREF
  char v30[240]; // [rsp+50h] [rbp-F0h] BYREF

  v7 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 14 source_uid:309 64 4 14 target_uid:309 80 16 14 packet_ptr:326 112 48 7 req:319";
  *(_QWORD *)(v7 + 16) = HomeHandler::sendServerTryEnterHomeReq;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = 61956;
  v9[536862723] = 62194;
  v9[536862725] = -202116109;
  *(_DWORD *)(v7 + 48) = source_uid;
  *(_DWORD *)(v7 + 64) = target_uid;
  if ( gameserver_id )
  {
    proto::ServerTryEnterHomeReq::ServerTryEnterHomeReq((proto::ServerTryEnterHomeReq *const)(v7 + 112));
    proto::ServerTryEnterHomeReq::set_source_uid((proto::ServerTryEnterHomeReq *const)(v7 + 112), *(_DWORD *)(v7 + 48));
    v14 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v14);
    proto::ServerTryEnterHomeReq::set_source_app_id((proto::ServerTryEnterHomeReq *const)(v7 + 112), AppId);
    proto::ServerTryEnterHomeReq::set_cur_load_rand((proto::ServerTryEnterHomeReq *const)(v7 + 112), load_rand);
    proto::ServerTryEnterHomeReq::set_owner_init_home_module_id(
      (proto::ServerTryEnterHomeReq *const)(v7 + 112),
      owner_init_home_module_id);
    proto::ServerTryEnterHomeReq::set_try_times((proto::ServerTryEnterHomeReq *const)(v7 + 112), try_times);
    v16 = ZTWN11ThreadLocal17work_thread_indexE(v7 + 112, try_times);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    proto::ServerTryEnterHomeReq::set_source_thread_index(
      (proto::ServerTryEnterHomeReq *const)(v7 + 112),
      *(_DWORD *)v16);
    common::minet::PacketUtils::createPacket<proto::ServerTryEnterHomeReq>((const proto::ServerTryEnterHomeReq *)(v7 + 80));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v7 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "sendServerTryEnterHomeReq",
        329);
      v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v29,
              (const char (*)[26])"createPacket failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v13 = -1;
    }
    else
    {
      v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 80));
      common::minet::Packet::setUserId(v18, *(_DWORD *)(v7 + 48));
      v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 80));
      common::minet::Packet::setHomeUserId(v19, *(_DWORD *)(v7 + 64));
      if ( thread_index >= 0 )
      {
        v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 80));
        common::minet::Packet::setGameThreadIndex(v20, thread_index);
      }
      v21 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v7 + 80));
      NetworkMgrBase::sendPacketToTargetService(
        v21,
        (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr),
        gameserver_id,
        v22);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v13 = 0;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v7 + 80));
    proto::ServerTryEnterHomeReq::~ServerTryEnterHomeReq((proto::ServerTryEnterHomeReq *const)(v7 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/home_handler.cpp",
      "sendServerTryEnterHomeReq",
      315);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v29,
            (const char (*)[32])"gameserver_id is 0. source_uid:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v7 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" target_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v7 + 64));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v13 = -1;
  }
  result = v13;
  if ( v30 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 343: range 00000000151051B2-00000000151055A8
void __fastcall HomeHandler::sendServerTryEnterHomeRsp(
        google::protobuf::int32 retcode,
        uint32_t home_uid,
        uint32_t rsp_user_id,
        uint32_t rsp_app_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  GameserverApp *v7; // rax
  uint32_t AppId; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::minet::Packet *v12; // rax
  NetworkMgrBase *v13; // r14
  uint32_t v14; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 home_uid:342 48 16 14 packet_ptr:349 80 40 7 rsp:344";
  *(_QWORD *)(v4 + 16) = HomeHandler::sendServerTryEnterHomeRsp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = home_uid;
  proto::ServerTryEnterHomeRsp::ServerTryEnterHomeRsp((proto::ServerTryEnterHomeRsp *const)(v4 + 80));
  proto::ServerTryEnterHomeRsp::set_retcode((proto::ServerTryEnterHomeRsp *const)(v4 + 80), retcode);
  proto::ServerTryEnterHomeRsp::set_target_home_uid(
    (proto::ServerTryEnterHomeRsp *const)(v4 + 80),
    *(_DWORD *)(v4 + 32));
  v7 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v7);
  v9 = AppId;
  proto::ServerTryEnterHomeRsp::set_target_app_id((proto::ServerTryEnterHomeRsp *const)(v4 + 80), AppId);
  v10 = ZTWN11ThreadLocal17work_thread_indexE(v4 + 80, v9);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  proto::ServerTryEnterHomeRsp::set_target_thread_index((proto::ServerTryEnterHomeRsp *const)(v4 + 80), *(_DWORD *)v10);
  common::minet::PacketUtils::createPacket<proto::ServerTryEnterHomeRsp>((const proto::ServerTryEnterHomeRsp *)(v4 + 48));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "sendServerTryEnterHomeRsp",
      352);
    v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v18,
            (const char (*)[31])"createPacket failed, home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    common::minet::Packet::setUserId(v12, rsp_user_id);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 48));
    LOBYTE(v13) = NetworkMgrBase::sendPacketToTargetService(
                    v13,
                    (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr),
                    rsp_app_id,
                    v14) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v13 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/home_handler.cpp",
        "sendServerTryEnterHomeRsp",
        358);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v18,
        (const char (*)[33])"sendPacketToTargetService failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 48));
  proto::ServerTryEnterHomeRsp::~ServerTryEnterHomeRsp((proto::ServerTryEnterHomeRsp *const)(v4 + 80));
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 364: range 00000000151055AA-00000000151058A1
void __fastcall HomeHandler::sendServerHomeGetOnlineStatusReq(uint32_t source_uid, uint32_t home_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::minet::Packet *v6; // rax
  common::minet::Packet *v7; // rax
  NetworkMgrBase *v8; // r14
  uint32_t v9; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-F0h] BYREF
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 source_uid:363 64 16 14 packet_ptr:366 96 24 7 req:365";
  *(_QWORD *)(v2 + 16) = HomeHandler::sendServerHomeGetOnlineStatusReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = source_uid;
  proto::ServerHomeGetOnlineStatusReq::ServerHomeGetOnlineStatusReq((proto::ServerHomeGetOnlineStatusReq *const)(v2 + 96));
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetOnlineStatusReq>((const proto::ServerHomeGetOnlineStatusReq *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "sendServerHomeGetOnlineStatusReq",
      369);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v11,
           (const char (*)[26])"createPacket failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setUserId(v6, *(_DWORD *)(v2 + 48));
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setHomeUserId(v7, home_uid);
    v8 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    NetworkMgrBase::sendPacketToTargetService(v8, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v9);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  proto::ServerHomeGetOnlineStatusReq::~ServerHomeGetOnlineStatusReq((proto::ServerHomeGetOnlineStatusReq *const)(v2 + 96));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 378: range 00000000151058A2-0000000015105BC4
void __fastcall HomeHandler::sendServerHomeKickPlayerReq(
        uint32_t source_uid,
        uint32_t home_uid,
        bool is_kick_all,
        uint32_t target_uid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // rax
  NetworkMgrBase *v10; // r14
  uint32_t v11; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 14 source_uid:377 64 16 14 packet_ptr:382 96 32 7 req:379";
  *(_QWORD *)(v4 + 16) = HomeHandler::sendServerHomeKickPlayerReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = source_uid;
  proto::ServerHomeKickPlayerReq::ServerHomeKickPlayerReq((proto::ServerHomeKickPlayerReq *const)(v4 + 96));
  proto::ServerHomeKickPlayerReq::set_is_kick_all((proto::ServerHomeKickPlayerReq *const)(v4 + 96), is_kick_all);
  proto::ServerHomeKickPlayerReq::set_target_uid((proto::ServerHomeKickPlayerReq *const)(v4 + 96), target_uid);
  common::minet::PacketUtils::createPacket<proto::ServerHomeKickPlayerReq>((const proto::ServerHomeKickPlayerReq *)(v4 + 64));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/home_handler.cpp",
      "sendServerHomeKickPlayerReq",
      385);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v15,
           (const char (*)[26])"createPacket failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setUserId(v8, *(_DWORD *)(v4 + 48));
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setHomeUserId(v9, home_uid);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    NetworkMgrBase::sendPacketToTargetService(v10, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v11);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  proto::ServerHomeKickPlayerReq::~ServerHomeKickPlayerReq((proto::ServerHomeKickPlayerReq *const)(v4 + 96));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};
