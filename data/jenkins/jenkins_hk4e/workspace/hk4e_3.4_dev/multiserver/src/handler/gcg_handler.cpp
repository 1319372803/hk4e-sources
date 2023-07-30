// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/gcg_handler.cpp

// Line 29: range 000000000E17DF2A-000000000E17F4EB
int32_t __cdecl GCGHandler::addPacketFuncToMap(
        GCGHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  GCGHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  GCGHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  GCGHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  GCGHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  GCGHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  GCGHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  GCGHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  GCGHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  GCGHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  GCGHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  GCGHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  GCGHandler **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  GCGHandler **v41; // r8
  const std::_Placeholder<1> *v42; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  GCGHandler **v44; // r8
  const std::_Placeholder<1> *v45; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  GCGHandler **v47; // r8
  const std::_Placeholder<1> *v48; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v49; // rax
  __m128i v50; // [rsp+0h] [rbp-190h] BYREF
  __m128i v51; // [rsp+10h] [rbp-180h] BYREF
  __m128i v52; // [rsp+20h] [rbp-170h] BYREF
  __m128i v53; // [rsp+30h] [rbp-160h] BYREF
  __m128i v54; // [rsp+40h] [rbp-150h] BYREF
  __m128i v55; // [rsp+50h] [rbp-140h] BYREF
  __m128i v56; // [rsp+60h] [rbp-130h] BYREF
  __m128i v57; // [rsp+70h] [rbp-120h] BYREF
  __m128i v58; // [rsp+80h] [rbp-110h] BYREF
  __m128i v59; // [rsp+90h] [rbp-100h] BYREF
  __m128i v60; // [rsp+A0h] [rbp-F0h] BYREF
  __m128i v61; // [rsp+B0h] [rbp-E0h] BYREF
  __m128i v62; // [rsp+C0h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+D0h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+D8h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+E0h] [rbp-B0h]
  GCGHandler *thisa; // [rsp+E8h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+FCh] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v68; // [rsp+100h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+108h] [rbp-88h] BYREF
  int (*__f[2])(GCGHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+110h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,const std::_Placeholder<1>&>::type v71; // [rsp+120h] [rbp-70h] BYREF
  common::milog::MiLogStream v72; // [rsp+140h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10031;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v68, &__y) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      "addPacketFuncToMap",
      30);
    common::milog::MiLogStream::operator()(&v72, off_1BC89040, 10031LL);
    common::milog::MiLogStream::~MiLogStream(&v72);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(GCGHandler *, std::shared_ptr<common::minet::Packet>))GCGHandler::onReloadConfigNotify;
    __f[1] = 0LL;
    std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
      &v71,
      __f,
      (GCGHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10031;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
      v7,
      &v71);
    __x = 12436;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v68, &__y) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "addPacketFuncToMap",
        31);
      common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12436LL);
      common::milog::MiLogStream::~MiLogStream(&v72);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(GCGHandler *, std::shared_ptr<common::minet::Packet>))GCGHandler::onServerGCGOperationReq;
      __f[1] = 0LL;
      std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
        &v71,
        __f,
        (GCGHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 12436;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
        v10,
        &v71);
      __x = 12457;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v68, &__y) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "addPacketFuncToMap",
          32);
        common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12457LL);
        common::milog::MiLogStream::~MiLogStream(&v72);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v50.m128i_i64[0] = (__int64)GCGHandler::onServerGCGAskDuelReq;
        v50.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v50);
        std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
          &v71,
          __f,
          (GCGHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 12457;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
          v13,
          &v71);
        __x = 12373;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v68, &__y) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "addPacketFuncToMap",
            33);
          common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12373LL);
          common::milog::MiLogStream::~MiLogStream(&v72);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v51.m128i_i64[0] = (__int64)GCGHandler::onServerGCGGMCommandReq;
          v51.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v51);
          std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
            &v71,
            __f,
            (GCGHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 12373;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
            v16,
            &v71);
          __x = 12497;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v68, &__y) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "addPacketFuncToMap",
              34);
            common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12497LL);
            common::milog::MiLogStream::~MiLogStream(&v72);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v52.m128i_i64[0] = (__int64)GCGHandler::onServerGCGCreateMatchGameNotify;
            v52.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v52);
            std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
              &v71,
              __f,
              (GCGHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 12497;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
              v19,
              &v71);
            __x = 12392;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v68, &__y) )
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/gcg_handler.cpp",
                "addPacketFuncToMap",
                35);
              common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12392LL);
              common::milog::MiLogStream::~MiLogStream(&v72);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v53.m128i_i64[0] = (__int64)GCGHandler::onServerGCGCreateMatchAIGameNotify;
              v53.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v53);
              std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                &v71,
                __f,
                (GCGHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 12392;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                v22,
                &v71);
              __x = 12334;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v68, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v72,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/gcg_handler.cpp",
                  "addPacketFuncToMap",
                  36);
                common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12334LL);
                common::milog::MiLogStream::~MiLogStream(&v72);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v54.m128i_i64[0] = (__int64)GCGHandler::onServerGCGInitFinishReq;
                v54.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v54);
                std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                  &v71,
                  __f,
                  (GCGHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 12334;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v71);
                __x = 12456;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v68, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v72,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/gcg_handler.cpp",
                    "addPacketFuncToMap",
                    37);
                  common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12456LL);
                  common::milog::MiLogStream::~MiLogStream(&v72);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v55.m128i_i64[0] = (__int64)GCGHandler::onServerGCGSyncReq;
                  v55.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v55);
                  std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                    &v71,
                    __f,
                    (GCGHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 12456;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v71);
                  __x = 12244;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v68, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v72,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/gcg_handler.cpp",
                      "addPacketFuncToMap",
                      38);
                    common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12244LL);
                    common::milog::MiLogStream::~MiLogStream(&v72);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v56.m128i_i64[0] = (__int64)GCGHandler::onSendGCGOfflineOpRsp;
                    v56.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v56);
                    std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                      &v71,
                      __f,
                      (GCGHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 12244;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v71);
                    __x = 12489;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v68, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v72,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/gcg_handler.cpp",
                        "addPacketFuncToMap",
                        39);
                      common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12489LL);
                      common::milog::MiLogStream::~MiLogStream(&v72);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v57.m128i_i64[0] = (__int64)GCGHandler::onServerGCGCreateSingleGameReq;
                      v57.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v57);
                      std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                        &v71,
                        __f,
                        (GCGHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 12489;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v71);
                      __x = 12476;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v68, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v72,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/gcg_handler.cpp",
                          "addPacketFuncToMap",
                          40);
                        common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12476LL);
                        common::milog::MiLogStream::~MiLogStream(&v72);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v58.m128i_i64[0] = (__int64)GCGHandler::onServerGCGCreateMultiGameReq;
                        v58.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v58);
                        std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                          &v71,
                          __f,
                          (GCGHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 12476;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v71);
                        __x = 12499;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v68, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v72,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/gcg_handler.cpp",
                            "addPacketFuncToMap",
                            41);
                          common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12499LL);
                          common::milog::MiLogStream::~MiLogStream(&v72);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v59.m128i_i64[0] = (__int64)GCGHandler::onServerGCGGiveUpGameReq;
                          v59.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v59);
                          std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                            &v71,
                            __f,
                            (GCGHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 12499;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v71);
                          __x = 12319;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v68, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v72,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/gcg_handler.cpp",
                              "addPacketFuncToMap",
                              42);
                            common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12319LL);
                            common::milog::MiLogStream::~MiLogStream(&v72);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v60.m128i_i64[0] = (__int64)GCGHandler::onServerGCGSkillPreviewAskReq;
                            v60.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v60);
                            std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                              &v71,
                              __f,
                              (GCGHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v41,
                              v42);
                            __x = 12319;
                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                              v43,
                              &v71);
                            __x = 12423;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v68, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v72,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/gcg_handler.cpp",
                                "addPacketFuncToMap",
                                43);
                              common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12423LL);
                              common::milog::MiLogStream::~MiLogStream(&v72);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v61.m128i_i64[0] = (__int64)GCGHandler::onServerGCGAddBothAITaskReq;
                              v61.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v61);
                              std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                                &v71,
                                __f,
                                (GCGHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v44,
                                v45);
                              __x = 12423;
                              v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                                v46,
                                &v71);
                              __x = 12455;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v68._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v68, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v72,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/gcg_handler.cpp",
                                  "addPacketFuncToMap",
                                  44);
                                common::milog::MiLogStream::operator()(&v72, off_1BC89040, 12455LL);
                                common::milog::MiLogStream::~MiLogStream(&v72);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v62.m128i_i64[0] = (__int64)GCGHandler::onServerGCGBackToDuelReq;
                                v62.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v62);
                                std::bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>),GCGHandler*,std::_Placeholder<1> const&>(
                                  &v71,
                                  __f,
                                  (GCGHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v47,
                                  v48);
                                __x = 12455;
                                v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GCGHandler*,std::_Placeholder<1>)>>(
                                  v49,
                                  &v71);
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
            }
          }
        }
      }
    }
  }
};

// Line 50: range 000000000E17F4EC-000000000E17F586
int32_t __cdecl GCGHandler::onReloadConfigNotify(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  GCGService *v2; // rax
  GCGGameMgr *ThreadLocalGameMgr; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gcg_handler.cpp",
    "onReloadConfigNotify",
    51);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v5, (const char (*)[24])"onReloadConfigNotify...");
  common::milog::MiLogStream::~MiLogStream(&v5);
  v2 = ServiceBox::findService<GCGService>();
  ThreadLocalGameMgr = GCGService::getThreadLocalGameMgr(v2);
  GCGGameMgr::onReloadConfig(ThreadLocalGameMgr);
  return 0;
};

// Line 57: range 000000000E17F588-000000000E180135
int32_t __cdecl GCGHandler::onServerGCGOperationReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  GCGService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned int v20; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t GameUid; // eax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  GCGControllerValue v30; // r14d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  GCGGameMode *v32; // r14
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  uint32_t v35; // eax
  google::protobuf::uint32 v36; // eax
  GCGService *v37; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-2E0h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-2DCh]
  const proto::ServerGCGOperationReq *req; // [rsp+18h] [rbp-2D8h]
  proto::GCGOperationRsp *rsp_0; // [rsp+20h] [rbp-2D0h]
  GCGGameMgr *game_mgr; // [rsp+28h] [rbp-2C8h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+30h] [rbp-2C0h] BYREF
  common::milog::MiLogStream v45; // [rsp+40h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v46; // [rsp+60h] [rbp-290h] BYREF
  char v47[624]; // [rsp+80h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 6 uid:63 64 4 16 controller_id:86 80 16 10 req_ptr:58 112 16 10 rsp_ptr:60 144 16 16 game"
                        "_mode_ptr:67 176 16 9 op_ptr:79 208 16 17 controller_ptr:93 240 257 9 holder:92";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGOperationReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862735] = -218038272;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGOperationReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerGCGOperationReq const>(
         (const std::shared_ptr<const proto::ServerGCGOperationReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGOperationReq",
      58);
    common::milog::MiLogStream::operator()(&v46, off_1BC89220);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGOperationReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGOperationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGOperationReq",
      59);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v45,
           (const char (*)[25])"onServerGCGOperationReq:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v46, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v46);
    std::string::~string(&v46);
    common::milog::MiLogStream::~MiLogStream(&v45);
    common::tools::perf::make_shared<proto::GCGOperationRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGOperationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGOperationRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    retcode = -1;
    *(_DWORD *)(v2 + 48) = proto::ServerGCGOperationReq::uid(req);
    v7 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v7);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 144), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGOperationReq",
        70);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v46,
             (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v46);
      retcode = 12000;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      if ( !GCGGameMode::isController(v9, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGOperationReq",
          76);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v46,
                (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" gcg_game: ");
        v13 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        val = GCGGameMode::getGameUid(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      else
      {
        proto::ServerGCGOperationReq::op(req);
        GCGHandler::createOperation((const GCGHandler *const)(v2 + 176), (const proto::GCGOperation *)this);
        if ( std::operator==<GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v2 + 176), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGOperationReq",
            82);
          v14 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v46,
                  (const char (*)[38])"[GCG_RET] createOperation fail. uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v46);
          retcode = 12001;
        }
        else
        {
          v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          *(_DWORD *)(v2 + 64) = GCGGameMode::getControllerId(v15, *(_DWORD *)(v2 + 48));
          if ( *(_DWORD *)(v2 + 64) )
          {
            v20 = *(_DWORD *)(v2 + 64);
            v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            GameUid = GCGGameMode::getGameUid(v21);
            common::milog::MilogContextHolder::MilogContextHolder(
              (common::milog::MilogContextHolder *const)(v2 + 240),
              "gcg_game: %u c:%u",
              GameUid,
              v20);
            v23 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            GCGGameMode::getController<GCGPlayerController>(
              (GCGGameMode *const)(v2 + 208),
              (__int64)v23,
              *(_DWORD *)(v2 + 64));
            if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 208), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/gcg_handler.cpp",
                "onServerGCGOperationReq",
                96);
              v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v46,
                      (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
              v25 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                      v24,
                      (const proto::GCGControllerValue *)(v2 + 64));
              v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" uid: ");
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      (const unsigned int *)(v2 + 48));
              v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v27,
                      (const char (*)[12])" game_uid: ");
              v29 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              val = GCGGameMode::getGameUid(v29);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
            else
            {
              v30 = *(_DWORD *)(v2 + 64);
              v31 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
              if ( *(_BYTE *)(((unsigned __int64)&v31->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v31->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v31 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v31->controller_id);
              }
              v31->controller_id = v30;
              v32 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              std::shared_ptr<GCGOperationBase>::shared_ptr(
                &p_operation_ptr,
                (const std::shared_ptr<GCGOperationBase> *)(v2 + 176));
              retcode = GCGGameMode::process(v32, &p_operation_ptr);
              std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
              v33 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
              GCGPlayerController::updateRecvTime(v33);
              v34 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
              v35 = proto::ServerGCGOperationReq::op_seq(req);
              GCGPlayerController::updateOperationSeq(v34, v35);
            }
            std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 208));
            common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 240));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGOperationReq",
              89);
            v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v46,
                    (const char (*)[36])"[GCG_RET] controller_id is 0. uid: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 48));
            v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v17,
                    (const char (*)[12])" gcg_game: ");
            v19 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            val = GCGGameMode::getGameUid(v19);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
        }
        std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v2 + 176));
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 144));
    proto::GCGOperationRsp::set_retcode(rsp_0, retcode);
    v36 = proto::ServerGCGOperationReq::op_seq(req);
    proto::GCGOperationRsp::set_op_seq(rsp_0, v36);
    v37 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&p_operation_ptr,
      p_packet_ptr);
    std::shared_ptr<proto::GCGOperationRsp>::shared_ptr(
      (std::shared_ptr<proto::GCGOperationRsp> *const)(v2 + 208),
      (const std::shared_ptr<proto::GCGOperationRsp> *)(v2 + 112));
    v5 = ServiceBase::sendRsp<proto::GCGOperationRsp>(
           v37,
           (std::shared_ptr<proto::GCGOperationRsp> *)(v2 + 208),
           (common::minet::PacketPtr *)&p_operation_ptr);
    std::shared_ptr<proto::GCGOperationRsp>::~shared_ptr((std::shared_ptr<proto::GCGOperationRsp> *const)(v2 + 208));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&p_operation_ptr);
    std::shared_ptr<proto::GCGOperationRsp>::~shared_ptr((std::shared_ptr<proto::GCGOperationRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerGCGOperationReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGOperationReq> *const)(v2 + 80));
  result = v5;
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 000000000E180136-000000000E180885
int32_t __cdecl GCGHandler::onServerGCGAskDuelReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  proto::GCGDuel *v23; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GCGService *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-12Ch]
  const proto::ServerGCGAskDuelReq *req; // [rsp+18h] [rbp-128h]
  proto::GCGAskDuelRsp *rsp_0; // [rsp+20h] [rbp-120h]
  GCGGameMgr *game_mgr; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-110h] BYREF
  char v33[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 uid:121 48 4 17 controller_id:137 64 16 11 req_ptr:116 96 16 11 rsp_ptr:119 128 16 17 g"
                        "ame_mode_ptr:125 160 16 18 controller_ptr:138";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGAskDuelReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gcg_handler.cpp",
    "onServerGCGAskDuelReq",
    115);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v32, (const char (*)[22])"onServerGCGAskDuelReq");
  common::milog::MiLogStream::~MiLogStream(&v32);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGAskDuelReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGAskDuelReq const>(
         (const std::shared_ptr<const proto::ServerGCGAskDuelReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGAskDuelReq",
      116);
    common::milog::MiLogStream::operator()(&v32, off_1BC89640);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGAskDuelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGAskDuelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    retcode = -1;
    common::tools::perf::make_shared<proto::GCGAskDuelRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGAskDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGAskDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v7);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 128), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGAskDuelReq",
        128);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v32,
             (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v32);
      retcode = 12000;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( !GCGGameMode::isController(v9, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGAskDuelReq",
          134);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v32,
                (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" game_uid: ");
        v13 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = GCGGameMode::getGameUid(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        v14 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(_DWORD *)(v2 + 48) = GCGGameMode::getControllerId(v14, *(_DWORD *)(v2 + 32));
        v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        GCGGameMode::getController<GCGPlayerController>(
          (GCGGameMode *const)(v2 + 160),
          (__int64)v15,
          *(_DWORD *)(v2 + 48));
        if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGAskDuelReq",
            141);
          v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v32,
                  (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
          v17 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v16,
                  (const proto::GCGControllerValue *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" uid: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 32));
          v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" game_uid: ");
          v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = GCGGameMode::getGameUid(v21);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
        else
        {
          v22 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v23 = proto::GCGAskDuelRsp::mutable_duel(rsp_0);
          GCGPlayerController::fillDuelInfo(v22, v23);
          v24 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          GCGPlayerController::updateRecvTime(v24);
          retcode = 0;
        }
        std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 160));
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
    proto::GCGAskDuelRsp::set_retcode(rsp_0, retcode);
    v25 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 160),
      p_packet_ptr);
    std::shared_ptr<proto::GCGAskDuelRsp>::shared_ptr(
      (std::shared_ptr<proto::GCGAskDuelRsp> *const)(v2 + 128),
      (const std::shared_ptr<proto::GCGAskDuelRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::GCGAskDuelRsp>(
           v25,
           (std::shared_ptr<proto::GCGAskDuelRsp> *)(v2 + 128),
           (common::minet::PacketPtr *)(v2 + 160));
    std::shared_ptr<proto::GCGAskDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGAskDuelRsp> *const)(v2 + 128));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
    std::shared_ptr<proto::GCGAskDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGAskDuelRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGAskDuelReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGAskDuelReq> *const)(v2 + 64));
  result = v5;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 154: range 000000000E180886-000000000E181294
GCGOperationBasePtr __cdecl GCGHandler::createOperation(const GCGHandler *const this, const proto::GCGOperation *proto)
{
  const proto::GCGOperation *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  const proto::GCGOperationRedraw *v7; // rax
  GCGOperationBasePtr result; // rax
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  const proto::GCGOperationOnStageSelect *v10; // rax
  std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  const proto::GCGOperationReroll *v12; // rax
  GCGOperationAttack *v13; // r14
  const proto::GCGOperationAttack *v14; // rax
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  const proto::GCGOperationPlayCard *v16; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  const proto::GCGOperationReboot *v18; // rax
  GCGOperationSurrender *v19; // r14
  const proto::GCGOperationSurrender *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  const proto::GCGOperation *protoa; // [rsp+8h] [rbp-B8h]
  proto::GCGOperation::OpCase val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  protoa = v2;
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 op_ptr:242";
  *(_QWORD *)(v3 + 16) = GCGHandler::createOperation;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  switch ( proto::GCGOperation::op_case(protoa) )
  {
    case kOpSurrender:
      common::tools::perf::make_shared<GCGOperationSurrender>();
      if ( std::operator==<GCGOperationSurrender>((const std::shared_ptr<GCGOperationSurrender> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          245);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v19 = std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v20 = proto::GCGOperation::op_surrender(protoa);
        GCGOperationSurrender::fromClient(v19, v20);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationSurrender,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationSurrender> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationSurrender>::~shared_ptr((std::shared_ptr<GCGOperationSurrender> *const)(v3 + 32));
      break;
    case kOpPlayCard:
      common::tools::perf::make_shared<GCGOperationPlayCard>();
      if ( std::operator==<GCGOperationPlayCard>((const std::shared_ptr<GCGOperationPlayCard> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          221);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v15 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v16 = proto::GCGOperation::op_play_card(protoa);
        GCGOperationPlayCard::fromClient(v15, v16);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationPlayCard,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationPlayCard> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationPlayCard>::~shared_ptr((std::shared_ptr<GCGOperationPlayCard> *const)(v3 + 32));
      break;
    case kOpSelectOnStage:
      common::tools::perf::make_shared<GCGOperationOnStageSelect>();
      if ( std::operator==<GCGOperationOnStageSelect>(
             (const std::shared_ptr<GCGOperationOnStageSelect> *)(v3 + 32),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          174);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v9 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v10 = proto::GCGOperation::op_select_on_stage(protoa);
        GCGOperationOnStageSelect::fromClient(v9, v10);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationOnStageSelect,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationOnStageSelect> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v3 + 32));
      break;
    case kOpReboot:
      common::tools::perf::make_shared<GCGOperationReboot>();
      if ( std::operator==<GCGOperationReboot>((const std::shared_ptr<GCGOperationReboot> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          233);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v17 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v18 = proto::GCGOperation::op_reboot(protoa);
        GCGOperationReboot::fromClient(v17, v18);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationReboot,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationReboot> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationReboot>::~shared_ptr((std::shared_ptr<GCGOperationReboot> *const)(v3 + 32));
      break;
    case kOpReroll:
      common::tools::perf::make_shared<GCGOperationReroll>();
      if ( std::operator==<GCGOperationReroll>((const std::shared_ptr<GCGOperationReroll> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          186);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v12 = proto::GCGOperation::op_reroll(protoa);
        GCGOperationReroll::fromClient(v11, v12);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationReroll,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationReroll> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationReroll>::~shared_ptr((std::shared_ptr<GCGOperationReroll> *const)(v3 + 32));
      break;
    case kOpRedraw:
      common::tools::perf::make_shared<GCGOperationRedraw>();
      if ( std::operator==<GCGOperationRedraw>((const std::shared_ptr<GCGOperationRedraw> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          162);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v6 = std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v7 = proto::GCGOperation::op_redraw(protoa);
        GCGOperationRedraw::fromClient(v6, v7);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationRedraw,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationRedraw> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationRedraw>::~shared_ptr((std::shared_ptr<GCGOperationRedraw> *const)(v3 + 32));
      break;
    case kOpAttack:
      common::tools::perf::make_shared<GCGOperationAttack>();
      if ( std::operator==<GCGOperationAttack>((const std::shared_ptr<GCGOperationAttack> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          198);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        v13 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v14 = proto::GCGOperation::op_attack(protoa);
        GCGOperationAttack::fromClient(v13, v14);
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationAttack,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationAttack> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v3 + 32));
      break;
    case kOpPass:
      common::tools::perf::make_shared<GCGOperationPass>();
      if ( std::operator==<GCGOperationPass>((const std::shared_ptr<GCGOperationPass> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "createOperation",
          210);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"MAKE_SHARED fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationPass,void>(
          (std::shared_ptr<GCGOperationBase> *const)this,
          (std::shared_ptr<GCGOperationPass> *)(v3 + 32));
      }
      std::shared_ptr<GCGOperationPass>::~shared_ptr((std::shared_ptr<GCGOperationPass> *const)(v3 + 32));
      break;
    default:
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gcg_handler.cpp",
        "createOperation",
        254);
      v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v24,
              (const char (*)[39])"[GCG_RET] op case not match. op_case: ");
      val = proto::GCGOperation::op_case(protoa);
      common::milog::MiLogStream::operator<<<proto::GCGOperation::OpCase,(proto::GCGOperation::OpCase*)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
      break;
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 263: range 000000000E181296-000000000E181869
int32_t __cdecl GCGHandler::onServerGCGGMCommandReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGService *v8; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-1A9h] BYREF
  uint32_t uid; // [rsp+18h] [rbp-1A8h]
  int32_t retcode; // [rsp+1Ch] [rbp-1A4h]
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  const proto::ServerGCGGMCommandReq *req; // [rsp+30h] [rbp-190h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+38h] [rbp-188h]
  proto::ServerGCGGMCommandRsp *rsp_0; // [rsp+40h] [rbp-180h]
  const std::string *msg; // [rsp+48h] [rbp-178h]
  std::shared_ptr<proto::ServerGCGGMCommandRsp> p_rsp_ptr; // [rsp+50h] [rbp-170h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-160h] BYREF
  char v21[336]; // [rsp+70h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 11 req_ptr:264 64 16 11 rsp_ptr:277 96 24 11 msg_vec:267 160 32 11 ret_msg:272 224 32 21"
                        " ret_extra_content:273";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGGMCommandReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGGMCommandReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGGMCommandReq const>(
         (const std::shared_ptr<const proto::ServerGCGGMCommandReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGGMCommandReq",
      264);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), off_1BC89880);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGGMCommandReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGGMCommandReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGGMCommandReq",
      265);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[26])"onServerGCGGMCommandReq: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 224), &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
    __for_range = proto::ServerGCGGMCommandReq::msg_list[abi:cxx11](req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      msg = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      std::vector<std::string>::emplace_back<std::string const&>((std::vector<std::string> *const)(v2 + 96), msg, msg);
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 160), "success", &__a);
    std::allocator<char>::~allocator(&__a);
    std::string::basic_string(v2 + 224);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v7);
    retcode = GCGHandler::procGCGGM(
                this,
                uid,
                (const std::vector<std::string> *)(v2 + 96),
                (std::string *)(v2 + 160),
                (std::string *)(v2 + 224));
    common::tools::perf::make_shared<proto::ServerGCGGMCommandRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGGMCommandRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGGMCommandRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGCGGMCommandRsp::set_retcode(rsp_0, retcode);
    proto::ServerGCGGMCommandRsp::set_ret_msg(rsp_0, (const std::string *)(v2 + 160));
    proto::ServerGCGGMCommandRsp::set_ret_extra_content(rsp_0, (const std::string *)(v2 + 224));
    v8 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGCGGMCommandRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGCGGMCommandRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::ServerGCGGMCommandRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGCGGMCommandRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::ServerGCGGMCommandRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGGMCommandRsp> *const)(v2 + 64));
    std::string::~string((void *)(v2 + 224));
    std::string::~string((void *)(v2 + 160));
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGGMCommandReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGGMCommandReq> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 286: range 000000000E18186A-000000000E18250C
int32_t __cdecl GCGHandler::onServerGCGCreateMatchGameNotify(
        GCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  GCGService *v8; // rax
  google::protobuf::uint32 time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool v11; // r14
  const proto::MatchPlayer *matched; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  const proto::MatchPlayer *v16; // rax
  const proto::MatchPlayer *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  GCGGameMode *v20; // rax
  GCGGameMode *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const proto::GCGDuelExtra *v23; // rax
  const proto::OnlinePlayerInfo *v24; // rax
  const proto::GCGDuelExtra *v25; // rax
  const proto::OnlinePlayerInfo *v26; // rax
  common::milog::MiLogStream *v27; // rax
  GCGGameMode *v28; // rax
  GCGStatistics *Statistics; // rax
  GCGGameMode *v30; // rax
  int32_t result; // eax
  google::protobuf::uint32 match_id; // [rsp+1Ch] [rbp-3A4h]
  google::protobuf::uint32 uid_0; // [rsp+20h] [rbp-3A0h]
  google::protobuf::uint32 uid; // [rsp+24h] [rbp-39Ch]
  google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-398h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::const_iterator __for_end; // [rsp+30h] [rbp-390h] BYREF
  const proto::ServerGCGCreateMatchGameNotify *notify; // [rsp+38h] [rbp-388h]
  GCGGameMgr *game_mgr; // [rsp+40h] [rbp-380h]
  const google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *gcg_match_player_list; // [rsp+48h] [rbp-378h]
  const google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *__for_range_1; // [rsp+50h] [rbp-370h]
  const proto::GCGMatchPlayerInfo *gcg_match_player_2; // [rsp+58h] [rbp-368h]
  const proto::MatchPlayer *match_player; // [rsp+60h] [rbp-360h]
  const proto::GCGMatchPlayerInfo *gcg_match_player_3; // [rsp+68h] [rbp-358h]
  const proto::MatchPlayer *match_player_0; // [rsp+70h] [rbp-350h]
  const proto::GCGMatchPlayerInfo *gcg_match_player_1; // [rsp+78h] [rbp-348h]
  const google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *__for_range_0; // [rsp+80h] [rbp-340h]
  const proto::GCGMatchPlayerInfo *gcg_match_player_0; // [rsp+88h] [rbp-338h]
  const google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *__for_range; // [rsp+90h] [rbp-330h]
  const proto::GCGMatchPlayerInfo *gcg_match_player; // [rsp+98h] [rbp-328h]
  std::shared_ptr<Config> v50; // [rsp+A0h] [rbp-320h] BYREF
  common::milog::MiLogStream v51; // [rsp+B0h] [rbp-310h] BYREF
  common::milog::MiLogStream v52; // [rsp+D0h] [rbp-2F0h] BYREF
  char v53[720]; // [rsp+F0h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 now:297 48 4 7 uid:320 64 16 14 notify_ptr:287 96 16 17 game_mode_ptr:347 128 472 9 param:328";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGCreateMatchGameNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGCreateMatchGameNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGCreateMatchGameNotify const>(
         (const std::shared_ptr<const proto::ServerGCGCreateMatchGameNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMatchGameNotify",
      287);
    common::milog::MiLogStream::operator()(&v52, off_1BC89A40);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerGCGCreateMatchGameNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGCreateMatchGameNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMatchGameNotify",
      288);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v51,
           (const char (*)[35])"onServerGCGCreateMatchGameNotify: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v52, &notify->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v52);
    std::string::~string(&v52);
    common::milog::MiLogStream::~MiLogStream(&v51);
    if ( proto::ServerGCGCreateMatchGameNotify::gcg_match_player_list_size(notify) == 2 )
    {
      v8 = ServiceBox::findService<GCGService>();
      game_mgr = GCGService::getThreadLocalGameMgr(v8);
      gcg_match_player_list = proto::ServerGCGCreateMatchGameNotify::gcg_match_player_list(notify);
      *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getNow();
      time = proto::ServerGCGCreateMatchGameNotify::try_create_time(notify);
      Config::getConfig();
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
      if ( *(_BYTE *)(((unsigned __int64)&v10->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->gcg_game_create_timeout >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&v10->gcg_game_create_timeout);
      }
      v11 = time + v10->gcg_game_create_timeout < *(_DWORD *)(v2 + 32);
      std::shared_ptr<Config>::~shared_ptr(&v50);
      if ( v11 )
      {
        __for_range = gcg_match_player_list;
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::begin(gcg_match_player_list).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::end(gcg_match_player_list).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          gcg_match_player = google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator*(&__for_begin);
          matched = proto::GCGMatchPlayerInfo::match_player(gcg_match_player);
          uid = proto::MatchPlayer::uid(matched);
          GCGGameMgr::sendCreateGameFailNotify(uid, GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
          google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGCreateMatchGameNotify",
          305);
        v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v52, (const char (*)[32])off_1BC89B60);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])" try_create_time: ");
        *(_DWORD *)(v2 + 48) = proto::ServerGCGCreateMatchGameNotify::try_create_time(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v5 = 12146;
      }
      else if ( GCGGameMgr::checkOverload(game_mgr) )
      {
        __for_range_0 = gcg_match_player_list;
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::begin(gcg_match_player_list).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::end(gcg_match_player_list).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          gcg_match_player_0 = google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator*(&__for_begin);
          v16 = proto::GCGMatchPlayerInfo::match_player(gcg_match_player_0);
          uid_0 = proto::MatchPlayer::uid(v16);
          GCGGameMgr::sendCreateGameFailNotify(uid_0, GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_GAME_MAX);
          google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator++(&__for_begin);
        }
        v5 = 12021;
      }
      else
      {
        match_id = proto::ServerGCGCreateMatchGameNotify::match_id(notify);
        __for_range_1 = gcg_match_player_list;
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::begin(gcg_match_player_list).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::end(gcg_match_player_list).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          gcg_match_player_1 = google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator*(&__for_begin);
          v17 = proto::GCGMatchPlayerInfo::match_player(gcg_match_player_1);
          *(_DWORD *)(v2 + 48) = proto::MatchPlayer::uid(v17);
          GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 96), (uint32_t)game_mgr);
          if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGCreateMatchGameNotify",
              324);
            v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v51,
                    (const char (*)[40])off_1BC89BE0);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 48));
            v20 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            GCGGameMode::getDesc[abi:cxx11]((std::string *)&v52, v20);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v52);
            std::string::~string(&v52);
            common::milog::MiLogStream::~MiLogStream(&v51);
            v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            GCGGameMode::onPlayerGiveUp(v21, *(_DWORD *)(v2 + 48));
          }
          std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 96));
          google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchPlayerInfo const>::operator++(&__for_begin);
        }
        GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v2 + 128));
        Config::getConfig();
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(_DWORD *)(v2 + 128) = GCGPlayingExcelConfigMgr::getGameIdByMatchId(
                                  &v22->design_config_.txt_config_mgr.gcg_playing_config_mgr,
                                  match_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
        *(_DWORD *)(v2 + 592) = proto::ServerGCGCreateMatchGameNotify::try_create_time(notify);
        *(_DWORD *)(v2 + 136) = 2;
        gcg_match_player_2 = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::operator[](
                               gcg_match_player_list,
                               0);
        match_player = proto::GCGMatchPlayerInfo::match_player(gcg_match_player_2);
        *(_DWORD *)(v2 + 232) = proto::MatchPlayer::uid(match_player);
        v23 = proto::GCGMatchPlayerInfo::gcg_duel_extra(gcg_match_player_2);
        GCGControllerParam::fromExtra((GCGControllerParam *const)(v2 + 144), v23);
        v24 = proto::MatchPlayer::player_info(match_player);
        GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 144), v24);
        gcg_match_player_3 = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::operator[](
                               gcg_match_player_list,
                               1);
        match_player_0 = proto::GCGMatchPlayerInfo::match_player(gcg_match_player_3);
        *(_DWORD *)(v2 + 456) = proto::MatchPlayer::uid(match_player_0);
        v25 = proto::GCGMatchPlayerInfo::gcg_duel_extra(gcg_match_player_3);
        GCGControllerParam::fromExtra((GCGControllerParam *const)(v2 + 368), v25);
        v26 = proto::MatchPlayer::player_info(match_player_0);
        GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 368), v26);
        *(_DWORD *)(v2 + 592) = proto::ServerGCGCreateMatchGameNotify::try_create_time(notify);
        GCGGameMgr::createPVPGameMode((GCGGameMgr *const)(v2 + 96), (GCGGameModeParam *)game_mgr);
        if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGCreateMatchGameNotify",
            350);
          v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v52,
                  (const char (*)[34])"createPVPGameMode fail. game_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 128));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v5 = -1;
        }
        else
        {
          v28 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Statistics = GCGGameMode::getStatistics(v28);
          if ( *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) <= 3 )
          {
            Statistics = (GCGStatistics *)__asan_report_store4(&Statistics->match_id);
          }
          Statistics->match_id = match_id;
          v30 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          GCGGameMode::start(v30);
          v5 = 0;
        }
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 96));
        GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v2 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateMatchGameNotify",
        291);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v51, (const char (*)[36])off_1BC89B00);
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v52, &notify->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v52);
      std::string::~string(&v52);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v5 = -1;
    }
  }
  std::shared_ptr<proto::ServerGCGCreateMatchGameNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGCreateMatchGameNotify> *const)(v2 + 64));
  result = v5;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 360: range 000000000E18250E-000000000E1831AC
int32_t __cdecl GCGHandler::onServerGCGCreateMatchAIGameNotify(
        GCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *matched; // rax
  const proto::MatchPlayer *v10; // rax
  const proto::GCGDuelExtra *v11; // rax
  const proto::GCGDuelExtra *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  google::protobuf::uint32 time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  GCGService *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  GCGGameMode *v27; // rax
  GCGGameMode *v28; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const proto::GCGDuelExtra *v30; // rax
  const proto::MatchPlayer *v31; // rax
  const proto::OnlinePlayerInfo *v32; // rax
  const proto::OnlinePlayerInfo *v33; // rax
  common::milog::MiLogStream *v34; // rax
  uint32_t v35; // r14d
  GCGGameMode *v36; // rax
  GCGStatistics *Statistics; // rax
  GCGGameMode *v38; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-3BCh] BYREF
  const proto::ServerGCGCreateMatchAIGameNotify *notify; // [rsp+18h] [rbp-3B8h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-3B0h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-3A8h]
  const proto::GCGMatchPlayerInfo *gcg_match_player; // [rsp+38h] [rbp-398h]
  GCGGameMgr *game_mgr; // [rsp+48h] [rbp-388h]
  std::shared_ptr<Config> v48; // [rsp+50h] [rbp-380h] BYREF
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-370h] BYREF
  std::shared_ptr<Config> v50; // [rsp+70h] [rbp-360h] BYREF
  common::milog::MiLogStream v51; // [rsp+80h] [rbp-350h] BYREF
  common::milog::MiLogStream v52; // [rsp+A0h] [rbp-330h] BYREF
  char v53[784]; // [rsp+C0h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 12 match_id:363 64 4 7 uid:379 80 4 9 score:380 96 4 17 card_group_id:381 112 4 7 now:388"
                        " 128 16 14 notify_ptr:361 160 16 17 game_mode_ptr:422 192 472 9 param:410";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGCreateMatchAIGameNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGCreateMatchAIGameNotify>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::ServerGCGCreateMatchAIGameNotify const>(
         (const std::shared_ptr<const proto::ServerGCGCreateMatchAIGameNotify> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMatchAIGameNotify",
      361);
    common::milog::MiLogStream::operator()(&v52, off_1BC89DC0);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerGCGCreateMatchAIGameNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGCreateMatchAIGameNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMatchAIGameNotify",
      362);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v51,
           (const char (*)[37])"onServerGCGCreateMatchAIGameNotify: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v52, &notify->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v52);
    std::string::~string(&v52);
    common::milog::MiLogStream::~MiLogStream(&v51);
    *(_DWORD *)(v2 + 48) = proto::ServerGCGCreateMatchAIGameNotify::match_id(notify);
    Config::getConfig();
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config_.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v48);
    Config::getConfig();
    gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config_.txt_config_mgr.gcg_game_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v2 + 48)) )
    {
      if ( proto::ServerGCGCreateMatchAIGameNotify::gcg_match_player_list_size(notify) == 1 )
      {
        matched = proto::ServerGCGCreateMatchAIGameNotify::gcg_match_player_list(notify);
        gcg_match_player = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::operator[](matched, 0);
        v10 = proto::GCGMatchPlayerInfo::match_player(gcg_match_player);
        *(_DWORD *)(v2 + 64) = proto::MatchPlayer::uid(v10);
        v11 = proto::GCGMatchPlayerInfo::gcg_duel_extra(gcg_match_player);
        *(_DWORD *)(v2 + 80) = proto::GCGDuelExtra::score(v11);
        v12 = proto::GCGMatchPlayerInfo::gcg_duel_extra(gcg_match_player);
        *(_DWORD *)(v2 + 96) = proto::GCGDuelExtra::ai_deck_id(v12);
        if ( data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(gcg_game_config_mgr, *(_DWORD *)(v2 + 96)) )
        {
          *(_DWORD *)(v2 + 112) = common::tools::TimeUtils::getNow();
          time = proto::ServerGCGCreateMatchAIGameNotify::try_create_time(notify);
          Config::getConfig();
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
          if ( *(_BYTE *)(((unsigned __int64)&v19->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v19 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->gcg_game_create_timeout >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&v19->gcg_game_create_timeout);
          }
          v20 = time + v19->gcg_game_create_timeout < *(_DWORD *)(v2 + 112);
          std::shared_ptr<Config>::~shared_ptr(&v50);
          if ( v20 )
          {
            GCGGameMgr::sendCreateGameFailNotify(
              *(_DWORD *)(v2 + 64),
              GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGCreateMatchAIGameNotify",
              392);
            v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v52,
                    (const char (*)[32])off_1BC89B60);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v2 + 112));
            v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v22,
                    (const char (*)[19])" try_create_time: ");
            val = proto::ServerGCGCreateMatchAIGameNotify::try_create_time(notify);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
            common::milog::MiLogStream::~MiLogStream(&v52);
            v5 = 12146;
          }
          else
          {
            v24 = ServiceBox::findService<GCGService>();
            game_mgr = GCGService::getThreadLocalGameMgr(v24);
            if ( GCGGameMgr::checkOverload(game_mgr) )
            {
              GCGGameMgr::sendCreateGameFailNotify(
                *(_DWORD *)(v2 + 64),
                GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_GAME_MAX);
              v5 = 12021;
            }
            else
            {
              GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 160), (uint32_t)game_mgr);
              if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/gcg_handler.cpp",
                  "onServerGCGCreateMatchAIGameNotify",
                  405);
                v25 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v51,
                        (const char (*)[40])off_1BC89BE0);
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 64));
                v27 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                GCGGameMode::getDesc[abi:cxx11]((std::string *)&v52, v27);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)&v52);
                std::string::~string(&v52);
                common::milog::MiLogStream::~MiLogStream(&v51);
                v28 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                GCGGameMode::onPlayerGiveUp(v28, *(_DWORD *)(v2 + 64));
              }
              std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 160));
              GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v2 + 192));
              Config::getConfig();
              v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              *(_DWORD *)(v2 + 192) = GCGPlayingExcelConfigMgr::getAIGameIdByMatchId(
                                        &v29->design_config_.txt_config_mgr.gcg_playing_config_mgr,
                                        *(_DWORD *)(v2 + 48));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
              *(_DWORD *)(v2 + 200) = 2;
              *(_DWORD *)(v2 + 296) = *(_DWORD *)(v2 + 64);
              v30 = proto::GCGMatchPlayerInfo::gcg_duel_extra(gcg_match_player);
              GCGControllerParam::fromExtra((GCGControllerParam *const)(v2 + 208), v30);
              v31 = proto::GCGMatchPlayerInfo::match_player(gcg_match_player);
              v32 = proto::MatchPlayer::player_info(v31);
              GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 208), v32);
              *(_DWORD *)(v2 + 432) = *(_DWORD *)(v2 + 96);
              v33 = proto::ServerGCGCreateMatchAIGameNotify::ai_info(notify);
              GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 432), v33);
              *(_DWORD *)(v2 + 656) = proto::ServerGCGCreateMatchAIGameNotify::try_create_time(notify);
              GCGGameMgr::createAIGameMode((GCGGameMgr *const)(v2 + 160), (GCGGameModeParam *)game_mgr);
              if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/gcg_handler.cpp",
                  "onServerGCGCreateMatchAIGameNotify",
                  425);
                v34 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v52,
                        (const char (*)[34])"createPVPGameMode fail. game_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 192));
                common::milog::MiLogStream::~MiLogStream(&v52);
                v5 = -1;
              }
              else
              {
                v35 = *(_DWORD *)(v2 + 48);
                v36 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                Statistics = GCGGameMode::getStatistics(v36);
                if ( *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  Statistics = (GCGStatistics *)__asan_report_store4(&Statistics->match_id);
                }
                Statistics->match_id = v35;
                v38 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                GCGGameMode::start(v38);
                v5 = 0;
              }
              std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 160));
              GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v2 + 192));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGCreateMatchAIGameNotify",
            385);
          v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v52,
                  (const char (*)[40])"findGCGDeckExcelConfig fail. match_id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" score: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 80));
          v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v16,
                  (const char (*)[17])" card_group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 96));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v5 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGCreateMatchAIGameNotify",
          375);
        v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v52,
               (const char (*)[51])"notify gcg_match_player_list_size is 0. match_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateMatchAIGameNotify",
        370);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v52,
             (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v52);
      v5 = -1;
    }
  }
  std::shared_ptr<proto::ServerGCGCreateMatchAIGameNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGCreateMatchAIGameNotify> *const)(v2 + 128));
  result = v5;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 434: range 000000000E1831AE-000000000E1839EA
int32_t __cdecl GCGHandler::onServerGCGInitFinishReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GCGService *v8; // rax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r15d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r15
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r15
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  int v24; // r15d
  unsigned int v25; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t GameUid; // eax
  GCGService *v28; // r14
  GCGControllerBase *v29; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  GCGService *v31; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-28Ch] BYREF
  int32_t retcode; // [rsp+28h] [rbp-288h]
  int32_t ret; // [rsp+2Ch] [rbp-284h]
  proto::GCGInitFinishRsp *rsp_0; // [rsp+30h] [rbp-280h]
  GCGGameMgr *game_mgr; // [rsp+38h] [rbp-278h]
  std::shared_ptr<proto::GCGInitFinishRsp> p_rsp_ptr; // [rsp+40h] [rbp-270h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-260h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-250h] BYREF
  char v41[560]; // [rsp+80h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 uid:437 64 4 17 controller_id:455 80 16 11 rsp_ptr:436 112 16 17 game_mode_ptr:443 144 "
                        "16 18 controller_ptr:456 176 257 10 holder:462";
  *(_QWORD *)(v3 + 16) = GCGHandler::onServerGCGInitFinishReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862733] = -218038272;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  retcode = -1;
  common::tools::perf::make_shared<proto::GCGInitFinishRsp>();
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v6);
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gcg_handler.cpp",
    "onServerGCGInitFinishReq",
    438);
  v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v40,
         (const char (*)[32])"onServerGCGInitFinishReq. uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v40);
  rsp_0 = std::__shared_ptr_access<proto::GCGInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  v8 = ServiceBox::findService<GCGService>();
  game_mgr = GCGService::getThreadLocalGameMgr(v8);
  GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v3 + 112), (uint32_t)game_mgr);
  if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGInitFinishReq",
      446);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v40,
           (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v40);
    retcode = 12000;
    v10 = 0;
  }
  else
  {
    v11 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( !GCGGameMode::isController(v11, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGInitFinishReq",
        452);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v40,
              (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" game_uid: ");
      v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      val = GCGGameMode::getGameUid(v15);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v10 = 0;
    }
    else
    {
      v16 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      *(_DWORD *)(v3 + 64) = GCGGameMode::getControllerId(v16, *(_DWORD *)(v3 + 48));
      v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      GCGGameMode::getController<GCGPlayerController>(
        (GCGGameMode *const)(v3 + 144),
        (__int64)v17,
        *(_DWORD *)(v3 + 64));
      if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v3 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGInitFinishReq",
          459);
        v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v40,
                (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
        v19 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v18,
                (const proto::GCGControllerValue *)(v3 + 64));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" uid: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" game_uid: ");
        v23 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        val = GCGGameMode::getGameUid(v23);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v24 = 0;
      }
      else
      {
        v25 = *(_DWORD *)(v3 + 64);
        v26 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        GameUid = GCGGameMode::getGameUid(v26);
        common::milog::MilogContextHolder::MilogContextHolder(
          (common::milog::MilogContextHolder *const)(v3 + 176),
          "gcg_game: %u c:%u",
          GameUid,
          v25);
        retcode = 0;
        proto::GCGInitFinishRsp::set_retcode(rsp_0, 0);
        v28 = ServiceBox::findService<GCGService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
        std::shared_ptr<proto::GCGInitFinishRsp>::shared_ptr(
          &p_rsp_ptr,
          (const std::shared_ptr<proto::GCGInitFinishRsp> *)(v3 + 80));
        ret = ServiceBase::sendRsp<proto::GCGInitFinishRsp>(v28, &p_rsp_ptr, &p_req_packet_ptr);
        std::shared_ptr<proto::GCGInitFinishRsp>::~shared_ptr(&p_rsp_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
        v29 = (GCGControllerBase *)std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        GCGControllerBase::setReady(v29);
        v30 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        GCGPlayerController::updateRecvTime(v30);
        v2 = ret;
        common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v3 + 176));
        v24 = 1;
      }
      std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v3 + 144));
      v10 = v24 != 0;
    }
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 112));
  if ( !v10 )
  {
    proto::GCGInitFinishRsp::set_retcode(rsp_0, retcode);
    v31 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GCGInitFinishRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GCGInitFinishRsp> *)(v3 + 80));
    v2 = ServiceBase::sendRsp<proto::GCGInitFinishRsp>(v31, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::GCGInitFinishRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  }
  std::shared_ptr<proto::GCGInitFinishRsp>::~shared_ptr((std::shared_ptr<proto::GCGInitFinishRsp> *const)(v3 + 80));
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 477: range 000000000E1839EC-000000000E1844FF
int32_t __cdecl GCGHandler::onServerGCGSyncReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GCGService *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  google::protobuf::uint32 v11; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::uint32 v17; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  google::protobuf::uint32 v40; // eax
  MultiserverApp *v41; // rax
  uint32_t AppId; // eax
  unsigned __int64 v43; // rax
  google::protobuf::uint32 *v44; // rdx
  google::protobuf::uint32 v45; // eax
  bool is_login; // al
  GCGService *v47; // r14
  int32_t result; // eax
  unsigned int v49; // [rsp+1Ch] [rbp-134h] BYREF
  unsigned int val; // [rsp+20h] [rbp-130h] BYREF
  int32_t retcode; // [rsp+24h] [rbp-12Ch]
  const proto::ServerGCGSyncReq *req; // [rsp+28h] [rbp-128h]
  proto::ServerGCGSyncRsp *rsp_0; // [rsp+30h] [rbp-120h]
  GCGGameMgr *game_mgr; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v55; // [rsp+40h] [rbp-110h] BYREF
  char v56[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 uid:481 48 4 17 controller_id:517 64 16 11 req_ptr:478 96 16 11 rsp_ptr:480 128 16 17 g"
                        "ame_mode_ptr:487 160 16 18 controller_ptr:518";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGSyncReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGSyncReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGSyncReq const>(
         (const std::shared_ptr<const proto::ServerGCGSyncReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGSyncReq",
      478);
    common::milog::MiLogStream::operator()(&v55, off_1BC8A220);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    retcode = -1;
    common::tools::perf::make_shared<proto::ServerGCGSyncRsp>();
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGSyncReq",
      482);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v55,
           (const char (*)[26])"onServerGCGSyncReq. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v55);
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v8 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v8);
    GCGGameMgr::findGameModeByUid(
      (GCGGameMgr *const)(v2 + 128),
      (std::map<unsigned int,unsigned int> *)game_mgr,
      *(_DWORD *)(v2 + 32));
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
    {
      if ( !GCGGameMgr::isRecentGameDestroyByUid(game_mgr, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGSyncReq",
          492);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v55,
               (const char (*)[40])"[GCG_RET] findGameModeByUid fail. uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v55);
        retcode = 12000;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGSyncReq",
          497);
        v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v55,
                (const char (*)[34])"[GCG_RET] game not running. uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v55);
        retcode = 12002;
      }
    }
    else
    {
      v11 = proto::ServerGCGSyncReq::game_uid(req);
      v12 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( v11 == GCGGameMode::getGameUid(v12) )
      {
        v17 = proto::ServerGCGSyncReq::verify_code(req);
        v18 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( v17 == GCGGameMode::getVerifyCode(v18) )
        {
          v26 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( !GCGGameMode::isController(v26, *(_DWORD *)(v2 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGSyncReq",
              514);
            v27 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v55,
                    (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v2 + 32));
            v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v28,
                    (const char (*)[12])" game_uid: ");
            v30 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = GCGGameMode::getGameUid(v30);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream(&v55);
          }
          else
          {
            v31 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 48) = GCGGameMode::getControllerId(v31, *(_DWORD *)(v2 + 32));
            v32 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            GCGGameMode::getController<GCGPlayerController>(
              (GCGGameMode *const)(v2 + 160),
              (__int64)v32,
              *(_DWORD *)(v2 + 48));
            if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/gcg_handler.cpp",
                "onServerGCGSyncReq",
                521);
              v33 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v55,
                      (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
              v34 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                      v33,
                      (const proto::GCGControllerValue *)(v2 + 48));
              v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])" uid: ");
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v2 + 32));
              v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v36,
                      (const char (*)[12])" game_uid: ");
              v38 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              val = GCGGameMode::getGameUid(v38);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
              common::milog::MiLogStream::~MiLogStream(&v55);
            }
            else
            {
              v39 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              GCGPlayerController::updateRecvTime(v39);
              retcode = 0;
            }
            std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 160));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGSyncReq",
            509);
          v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v55,
                  (const char (*)[39])"[GCG_RET] verify_code not match. req: ");
          v49 = proto::ServerGCGSyncReq::verify_code(req);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v49);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v20,
                  (const char (*)[15])" verify_code: ");
          v22 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          *(_DWORD *)(v2 + 48) = GCGGameMode::getVerifyCode(v22);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" game_uid: ");
          v25 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = GCGGameMode::getGameUid(v25);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          common::milog::MiLogStream::~MiLogStream(&v55);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGSyncReq",
          504);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v55,
                (const char (*)[36])"[GCG_RET] game uid not match. req: ");
        *(_DWORD *)(v2 + 48) = proto::ServerGCGSyncReq::game_uid(req);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" game_uid: ");
        v16 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = GCGGameMode::getGameUid(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
    v40 = proto::ServerGCGSyncReq::game_uid(req);
    proto::ServerGCGSyncRsp::set_game_uid(rsp_0, v40);
    v41 = Singleton<MultiserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v41);
    proto::ServerGCGSyncRsp::set_app_id(rsp_0, AppId);
    v43 = ZTWN11ThreadLocal17work_thread_indexE();
    v44 = (google::protobuf::uint32 *)v43;
    if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) != 0 && (char)((v43 & 7) + 3) >= *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v43);
    proto::ServerGCGSyncRsp::set_thread_index(rsp_0, *v44);
    proto::ServerGCGSyncRsp::set_retcode(rsp_0, retcode);
    v45 = proto::ServerGCGSyncReq::verify_code(req);
    proto::ServerGCGSyncRsp::set_verify_code(rsp_0, v45);
    is_login = proto::ServerGCGSyncReq::is_login(req);
    proto::ServerGCGSyncRsp::set_is_login(rsp_0, is_login);
    v47 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 160),
      p_packet_ptr);
    std::shared_ptr<proto::ServerGCGSyncRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerGCGSyncRsp> *const)(v2 + 128),
      (const std::shared_ptr<proto::ServerGCGSyncRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::ServerGCGSyncRsp>(
           v47,
           (std::shared_ptr<proto::ServerGCGSyncRsp> *)(v2 + 128),
           (common::minet::PacketPtr *)(v2 + 160));
    std::shared_ptr<proto::ServerGCGSyncRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSyncRsp> *const)(v2 + 128));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
    std::shared_ptr<proto::ServerGCGSyncRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSyncRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGSyncReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGSyncReq> *const)(v2 + 64));
  result = v5;
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 538: range 000000000E184500-000000000E184790
int32_t __cdecl GCGHandler::onSendGCGOfflineOpRsp(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SendGCGOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-90h] BYREF
  char v11[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:539";
  *(_QWORD *)(v2 + 16) = GCGHandler::onSendGCGOfflineOpRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendGCGOfflineOpRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SendGCGOfflineOpRsp const>(
         (const std::shared_ptr<const proto::SendGCGOfflineOpRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onSendGCGOfflineOpRsp",
      539);
    common::milog::MiLogStream::operator()(&v10, off_1BC8A4C0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::SendGCGOfflineOpRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendGCGOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::SendGCGOfflineOpRsp::retcode(rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gcg_handler.cpp",
        "onSendGCGOfflineOpRsp",
        542);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v9,
             (const char (*)[24])"SendGCGOfflineOp fail. ");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v10, rsp_0);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v10);
      std::string::~string(&v10);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    v5 = 0;
  }
  std::shared_ptr<proto::SendGCGOfflineOpRsp const>::~shared_ptr((std::shared_ptr<const proto::SendGCGOfflineOpRsp> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 548: range 000000000E184792-000000000E18550F
int32_t __cdecl GCGHandler::onServerGCGCreateSingleGameReq(
        GCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 p_M_right; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  const proto::OnlinePlayerInfo *v7; // rax
  google::protobuf::uint32 time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  GCGService *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  GCGGameMode *v17; // rax
  GCGGameMode *v18; // rax
  const proto::GCGDuelExtra *v19; // rax
  const proto::OnlinePlayerInfo *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  GCGGameMode *v27; // rax
  std::vector<unsigned int> *p_custom_param_vec; // r14
  const google::protobuf::RepeatedField<unsigned int> *v29; // rax
  GCGGameMode *v30; // rax
  google::protobuf::uint32 v31; // eax
  GCGService *v32; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+10h] [rbp-3D0h]
  proto::GCGGameBusinessType business_type; // [rsp+14h] [rbp-3CCh]
  char *val; // [rsp+18h] [rbp-3C8h] BYREF
  const proto::ServerGCGCreateSingleGameReq *req; // [rsp+20h] [rbp-3C0h]
  const proto::GCGPlayerData *player_data; // [rsp+28h] [rbp-3B8h]
  proto::ServerGCGCreateSingleGameRsp *rsp_0; // [rsp+30h] [rbp-3B0h]
  GCGGameMgr *game_mgr; // [rsp+38h] [rbp-3A8h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+40h] [rbp-3A0h]
  data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+48h] [rbp-398h]
  std::shared_ptr<Config> v43; // [rsp+50h] [rbp-390h] BYREF
  GCGGameMgr v44; // [rsp+60h] [rbp-380h] BYREF

  p_M_right = (unsigned __int64)&v44.uid_map_._M_t._M_impl._M_header._M_right;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      p_M_right = v3;
  }
  *(_QWORD *)p_M_right = 1102416563LL;
  *(_QWORD *)(p_M_right + 8) = "8 48 4 7 uid:553 64 4 7 now:557 80 4 11 game_id:587 96 16 11 req_ptr:549 128 16 11 rsp_pt"
                               "r:551 160 16 17 game_mode_ptr:604 192 16 17 game_mode_ptr:580 224 472 9 param:596";
  *(_QWORD *)(p_M_right + 16) = GCGHandler::onServerGCGCreateSingleGameReq;
  v4 = (_DWORD *)(p_M_right >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGCreateSingleGameReq>((common::minet::Packet *const)(p_M_right + 96));
  if ( std::operator==<proto::ServerGCGCreateSingleGameReq const>(
         (const std::shared_ptr<const proto::ServerGCGCreateSingleGameReq> *)(p_M_right + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v44.uid_map_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateSingleGameReq",
      549);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v44.uid_map_, off_1BC8A640);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.uid_map_);
    v5 = -1;
    goto LABEL_34;
  }
  req = std::__shared_ptr_access<proto::ServerGCGCreateSingleGameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGCreateSingleGameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 96));
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gcg_handler.cpp",
    "onServerGCGCreateSingleGameReq",
    550);
  v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         (common::milog::MiLogStream *const)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent,
         (const char (*)[31])"ServerGCGCreateSingleGameReq: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v44.uid_map_, &req->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v44.uid_map_);
  std::string::~string(&v44.uid_map_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent);
  common::tools::perf::make_shared<proto::ServerGCGCreateSingleGameRsp>();
  player_data = proto::ServerGCGCreateSingleGameReq::player_data(req);
  v7 = proto::GCGPlayerData::player_info(player_data);
  *(_DWORD *)(p_M_right + 48) = proto::OnlinePlayerInfo::uid(v7);
  business_type = proto::ServerGCGCreateSingleGameReq::business_type(req);
  rsp_0 = std::__shared_ptr_access<proto::ServerGCGCreateSingleGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGCreateSingleGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 128));
  retcode = -1;
  *(_DWORD *)(p_M_right + 64) = common::tools::TimeUtils::getNow();
  time = proto::ServerGCGCreateSingleGameReq::try_create_time(req);
  Config::getConfig();
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  if ( *(_BYTE *)(((unsigned __int64)&v9->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->gcg_game_create_timeout >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->gcg_game_create_timeout);
  }
  v10 = time + v9->gcg_game_create_timeout < *(_DWORD *)(p_M_right + 64);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  if ( !v10 )
  {
    v14 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v14);
    if ( business_type != GCG_GAME_QUEST && business_type != GCG_GAME_GUIDE_GROUP && GCGGameMgr::checkOverload(game_mgr) )
    {
      GCGGameMgr::sendCreateGameFailNotify(
        *(_DWORD *)(p_M_right + 48),
        GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_GAME_MAX);
      proto::ServerGCGCreateSingleGameRsp::set_retcode(rsp_0, 12021);
      goto LABEL_33;
    }
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(p_M_right + 192), (uint32_t)game_mgr);
    if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(p_M_right + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateSingleGameReq",
        583);
      v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent,
              (const char (*)[40])off_1BC89BE0);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              (const unsigned int *)(p_M_right + 48));
      v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 192));
      GCGGameMode::getDesc[abi:cxx11]((std::string *)&v44.uid_map_, v17);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v44.uid_map_);
      std::string::~string(&v44.uid_map_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.game_mode_map_._M_t._M_impl._M_header._M_parent);
      v18 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 192));
      GCGGameMode::onPlayerGiveUp(v18, *(_DWORD *)(p_M_right + 48));
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(p_M_right + 192));
    *(_DWORD *)(p_M_right + 80) = proto::ServerGCGCreateSingleGameReq::game_id(req);
    Config::getConfig();
    gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 160))->design_config_.txt_config_mgr.gcg_game_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_right + 160));
    game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                              gcg_game_config_mgr,
                              *(_DWORD *)(p_M_right + 80));
    if ( !game_excel_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44.uid_map_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateSingleGameReq",
        592);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)&v44.uid_map_,
        (const char (*)[30])"findGCGGameExcelConfig fail. ");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.uid_map_);
      proto::ServerGCGCreateSingleGameRsp::set_retcode(rsp_0, 12114);
      goto LABEL_33;
    }
    GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(p_M_right + 224));
    *(_DWORD *)(p_M_right + 224) = *(_DWORD *)(p_M_right + 80);
    *(_DWORD *)(p_M_right + 232) = business_type;
    *(_DWORD *)(p_M_right + 328) = *(_DWORD *)(p_M_right + 48);
    v19 = proto::GCGPlayerData::duel_extra(player_data);
    GCGControllerParam::fromExtra((GCGControllerParam *const)(p_M_right + 240), v19);
    v20 = proto::GCGPlayerData::player_info(player_data);
    GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(p_M_right + 240), v20);
    *(_DWORD *)(p_M_right + 688) = proto::ServerGCGCreateSingleGameReq::try_create_time(req);
    *(_QWORD *)(p_M_right + 160) = 0LL;
    *(_QWORD *)(p_M_right + 168) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&game_excel_config_ptr->game_type);
    }
    if ( game_excel_config_ptr->game_type == AI )
    {
      GCGGameMgr::createAIGameMode(&v44, (GCGGameModeParam *)game_mgr);
      std::shared_ptr<GCGGameMode>::operator=(
        (std::shared_ptr<GCGGameMode> *const)(p_M_right + 160),
        (std::shared_ptr<GCGGameMode> *)&v44);
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)&v44);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_excel_config_ptr->game_type);
      }
      if ( game_excel_config_ptr->game_type != PVE )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v44.uid_map_,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGCreateSingleGameReq",
          615);
        v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)&v44.uid_map_,
                (const char (*)[29])"invalid game type. game_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(p_M_right + 80));
        v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" type: ");
        if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&game_excel_config_ptr->game_type);
        }
        val = (char *)data::enumValToStr(game_excel_config_ptr->game_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.uid_map_);
        retcode = 12114;
        goto LABEL_32;
      }
      GCGGameMgr::createPVEGameMode((GCGGameMgr *const)(p_M_right + 192), (GCGGameModeParam *)game_mgr);
      std::shared_ptr<GCGGameMode>::operator=(
        (std::shared_ptr<GCGGameMode> *const)(p_M_right + 160),
        (std::shared_ptr<GCGGameMode> *)(p_M_right + 192));
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(p_M_right + 192));
    }
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(p_M_right + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44.uid_map_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateSingleGameReq",
        621);
      v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&v44.uid_map_,
              (const char (*)[33])"createSingleGameMode fail. uid: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v24,
              (const unsigned int *)(p_M_right + 48));
      v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" game_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v26,
        (const unsigned int *)(p_M_right + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.uid_map_);
    }
    else
    {
      v27 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 160));
      p_custom_param_vec = &GCGGameMode::getStatistics(v27)->custom_param_vec;
      v29 = proto::ServerGCGCreateSingleGameReq::custom_param_list(req);
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v29, p_custom_param_vec);
      v30 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_right + 160));
      GCGGameMode::start(v30);
      retcode = 0;
    }
LABEL_32:
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(p_M_right + 160));
    GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(p_M_right + 224));
    proto::ServerGCGCreateSingleGameRsp::set_retcode(rsp_0, retcode);
    goto LABEL_33;
  }
  GCGGameMgr::sendCreateGameFailNotify(
    *(_DWORD *)(p_M_right + 48),
    GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v44.uid_map_,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/gcg_handler.cpp",
    "onServerGCGCreateSingleGameReq",
    563);
  v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)&v44.uid_map_,
          (const char (*)[32])off_1BC89B60);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v11,
          (const unsigned int *)(p_M_right + 64));
  v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" try_create_time: ");
  *(_DWORD *)(p_M_right + 80) = proto::ServerGCGCreateSingleGameReq::try_create_time(req);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(p_M_right + 80));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.uid_map_);
  proto::ServerGCGCreateSingleGameRsp::set_retcode(rsp_0, 12146);
LABEL_33:
  v31 = proto::ServerGCGCreateSingleGameReq::game_id(req);
  proto::ServerGCGCreateSingleGameRsp::set_game_id(rsp_0, v31);
  v32 = ServiceBox::findService<GCGService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(p_M_right + 192),
    p_packet_ptr);
  std::shared_ptr<proto::ServerGCGCreateSingleGameRsp>::shared_ptr(
    (std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *const)&v44,
    (const std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *)(p_M_right + 128));
  v5 = ServiceBase::sendRsp<proto::ServerGCGCreateSingleGameRsp>(
         v32,
         (std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *)&v44,
         (common::minet::PacketPtr *)(p_M_right + 192));
  std::shared_ptr<proto::ServerGCGCreateSingleGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *const)&v44);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(p_M_right + 192));
  std::shared_ptr<proto::ServerGCGCreateSingleGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *const)(p_M_right + 128));
LABEL_34:
  std::shared_ptr<proto::ServerGCGCreateSingleGameReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGCreateSingleGameReq> *const)(p_M_right + 96));
  result = v5;
  if ( &v44.uid_map_._M_t._M_impl._M_header._M_right == (std::_Rb_tree_node_base::_Base_ptr *)p_M_right )
  {
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((p_M_right >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((p_M_right >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)p_M_right = 1172321806LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_right >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 637: range 000000000E185510-000000000E185522
int32_t __cdecl GCGHandler::onServerGCGAddBothAITaskReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  return 0;
};

// Line 662: range 000000000E185524-000000000E1862BF
int32_t __cdecl GCGHandler::onServerGCGCreateMultiGameReq(
        GCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  GCGService *v7; // rax
  const proto::GCGPlayerData *v8; // rax
  const proto::OnlinePlayerInfo *v9; // rax
  const proto::GCGPlayerData *v10; // rax
  const proto::OnlinePlayerInfo *v11; // rax
  google::protobuf::uint32 time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  GCGGameMode *v20; // rax
  GCGGameMode *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const proto::GCGPlayerData *v25; // rax
  const proto::GCGDuelExtra *v26; // rax
  const proto::GCGPlayerData *v27; // rax
  const proto::OnlinePlayerInfo *v28; // rax
  const proto::GCGPlayerData *v29; // rax
  const proto::GCGDuelExtra *v30; // rax
  const proto::GCGPlayerData *v31; // rax
  const proto::OnlinePlayerInfo *v32; // rax
  common::milog::MiLogStream *v33; // rax
  GCGGameMode *v34; // rax
  google::protobuf::uint32 v35; // edx
  GCGService *v36; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-394h]
  char *uid_1; // [rsp+20h] [rbp-390h]
  std::initializer_list<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-388h]
  std::__shared_ptr_access<const proto::ServerGCGCreateMultiGameReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+30h] [rbp-380h]
  std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+38h] [rbp-378h]
  GCGGameMgr *game_mgr; // [rsp+40h] [rbp-370h]
  std::initializer_list<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-360h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+58h] [rbp-358h]
  data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+60h] [rbp-350h]
  char *val; // [rsp+68h] [rbp-348h] BYREF
  std::shared_ptr<Config> v48; // [rsp+70h] [rbp-340h] BYREF
  common::milog::MiLogStream v49; // [rsp+80h] [rbp-330h] BYREF
  common::milog::MiLogStream v50; // [rsp+A0h] [rbp-310h] BYREF
  char v51[752]; // [rsp+C0h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 now:668 48 4 11 game_id:699 64 16 11 req_ptr:663 96 16 11 rsp_ptr:665 128 16 17 game_mo"
                        "de_ptr:692 160 472 9 param:714";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGCreateMultiGameReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862739] = -218103808;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGCreateMultiGameReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGCreateMultiGameReq const>(
         (const std::shared_ptr<const proto::ServerGCGCreateMultiGameReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMultiGameReq",
      663);
    common::milog::MiLogStream::operator()(&v50, off_1BC8A900);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGCreateMultiGameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGCreateMultiGameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGCreateMultiGameReq",
      664);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v49,
           (const char (*)[32])"onServerGCGCreateMultiGameReq: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v50, req);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v50);
    std::string::~string(&v50);
    common::milog::MiLogStream::~MiLogStream(&v49);
    common::tools::perf::make_shared<proto::ServerGCGCreateMultiGameRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    retcode = -1;
    *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getNow();
    v7 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v7);
    v8 = proto::ServerGCGCreateMultiGameReq::player_data_1(req);
    v9 = proto::GCGPlayerData::player_info(v8);
    LODWORD(uid_1) = proto::OnlinePlayerInfo::uid(v9);
    v10 = proto::ServerGCGCreateMultiGameReq::player_data_2(req);
    v11 = proto::GCGPlayerData::player_info(v10);
    HIDWORD(uid_1) = proto::OnlinePlayerInfo::uid(v11);
    time = proto::ServerGCGCreateMultiGameReq::try_create_time(req);
    Config::getConfig();
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
    if ( *(_BYTE *)(((unsigned __int64)&v13->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v13 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gcg_game_create_timeout >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&v13->gcg_game_create_timeout);
    }
    v14 = time + v13->gcg_game_create_timeout < *(_DWORD *)(v2 + 32);
    std::shared_ptr<Config>::~shared_ptr(&v48);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGCreateMultiGameReq",
        676);
      v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v50, (const char (*)[32])off_1BC89B60);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v16,
              (const char (*)[19])" try_create_time: ");
      *(_DWORD *)(v2 + 48) = proto::ServerGCGCreateMultiGameReq::try_create_time(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v50);
      retcode = 12146;
      GCGGameMgr::sendCreateGameFailNotify(
        (uint32_t)uid_1,
        GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
      GCGGameMgr::sendCreateGameFailNotify(
        HIDWORD(uid_1),
        GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
    }
    else if ( GCGGameMgr::checkOverload(game_mgr) )
    {
      GCGGameMgr::sendCreateGameFailNotify(
        (uint32_t)uid_1,
        GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_GAME_MAX);
      GCGGameMgr::sendCreateGameFailNotify(
        HIDWORD(uid_1),
        GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_GAME_MAX);
      retcode = 12021;
    }
    else
    {
      v48._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)2;
      val = uid_1;
      v48._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)&val;
      __for_begin = std::initializer_list<unsigned int>::begin((const std::initializer_list<unsigned int> *const)&v48);
      __for_end = std::initializer_list<unsigned int>::end((const std::initializer_list<unsigned int> *const)&v48);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin);
        }
        *(_DWORD *)(v2 + 48) = *__for_begin;
        GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 128), (uint32_t)game_mgr);
        if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGCreateMultiGameReq",
            695);
          v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v49, (const char (*)[40])off_1BC89BE0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 48));
          v20 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          GCGGameMode::getDesc[abi:cxx11]((std::string *)&v50, v20);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v50);
          std::string::~string(&v50);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          GCGGameMode::onPlayerGiveUp(v21, *(_DWORD *)(v2 + 48));
        }
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
        ++__for_begin;
      }
      *(_DWORD *)(v2 + 48) = proto::ServerGCGCreateMultiGameReq::game_id(req);
      Config::getConfig();
      gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config_.txt_config_mgr.gcg_game_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
      game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                                gcg_game_config_mgr,
                                *(_DWORD *)(v2 + 48));
      if ( game_excel_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&game_excel_config_ptr->game_type);
        }
        if ( game_excel_config_ptr->game_type )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGCreateMultiGameReq",
            710);
          v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v50,
                  (const char (*)[29])"invalid game type. game_id: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" type: ");
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&game_excel_config_ptr->game_type);
          }
          val = (char *)data::enumValToStr(game_excel_config_ptr->game_type);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v24, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v50);
          retcode = 12114;
        }
        else
        {
          GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v2 + 160));
          *(_DWORD *)(v2 + 160) = *(_DWORD *)(v2 + 48);
          *(_DWORD *)(v2 + 168) = proto::ServerGCGCreateMultiGameReq::business_type(req);
          v25 = proto::ServerGCGCreateMultiGameReq::player_data_1(req);
          v26 = proto::GCGPlayerData::duel_extra(v25);
          GCGControllerParam::fromExtra((GCGControllerParam *const)(v2 + 176), v26);
          v27 = proto::ServerGCGCreateMultiGameReq::player_data_1(req);
          v28 = proto::GCGPlayerData::player_info(v27);
          GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 176), v28);
          v29 = proto::ServerGCGCreateMultiGameReq::player_data_2(req);
          v30 = proto::GCGPlayerData::duel_extra(v29);
          GCGControllerParam::fromExtra((GCGControllerParam *const)(v2 + 400), v30);
          v31 = proto::ServerGCGCreateMultiGameReq::player_data_2(req);
          v32 = proto::GCGPlayerData::player_info(v31);
          GCGControllerParam::fromOnlinePlayerInfo((GCGControllerParam *const)(v2 + 400), v32);
          *(_DWORD *)(v2 + 624) = proto::ServerGCGCreateMultiGameReq::try_create_time(req);
          GCGGameMgr::createPVPGameMode((GCGGameMgr *const)(v2 + 128), (GCGGameModeParam *)game_mgr);
          if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGCreateMultiGameReq",
              725);
            v33 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v50,
                    (const char (*)[37])"createSingleGameMode fail. game_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
          else
          {
            v34 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            GCGGameMode::start(v34);
            retcode = 0;
          }
          std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
          GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v2 + 160));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGCreateMultiGameReq",
          704);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v50,
          (const char (*)[30])"findGCGGameExcelConfig fail. ");
        common::milog::MiLogStream::~MiLogStream(&v50);
        retcode = 12114;
      }
    }
    proto::ServerGCGCreateMultiGameRsp::set_retcode(rsp_0, retcode);
    v35 = proto::ServerGCGCreateMultiGameReq::game_id(req);
    proto::ServerGCGCreateMultiGameRsp::set_game_id(rsp_0, v35);
    v36 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::ServerGCGCreateMultiGameRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *const)&v48,
      (const std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::ServerGCGCreateMultiGameRsp>(
           v36,
           (std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *)&v48,
           (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::ServerGCGCreateMultiGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *const)&v48);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    std::shared_ptr<proto::ServerGCGCreateMultiGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGCreateMultiGameReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGCreateMultiGameReq> *const)(v2 + 64));
  result = v5;
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 738: range 000000000E1862C0-000000000E186E6F
int32_t __cdecl GCGHandler::onServerGCGGiveUpGameReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGService *v8; // rax
  common::milog::MiLogStream *v9; // rax
  google::protobuf::uint32 v10; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 v16; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  google::protobuf::uint32 v25; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  proto::GCGGameBusinessType v34; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  GCGGameMode *v48; // rax
  google::protobuf::uint32 v49; // eax
  google::protobuf::uint32 v50; // eax
  google::protobuf::uint32 v51; // eax
  MultiserverApp *v52; // rax
  uint32_t AppId; // eax
  unsigned __int64 v54; // rax
  google::protobuf::uint32 *v55; // rdx
  GCGService *v56; // r14
  int32_t result; // eax
  proto::GCGGameBusinessType v58; // [rsp+18h] [rbp-148h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-144h] BYREF
  unsigned int GameUid; // [rsp+20h] [rbp-140h] BYREF
  int32_t retcode; // [rsp+24h] [rbp-13Ch]
  const proto::ServerGCGGiveUpGameReq *req; // [rsp+28h] [rbp-138h]
  proto::ServerGCGGiveUpGameRsp *rsp_0; // [rsp+30h] [rbp-130h]
  GCGGameMgr *game_mgr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<proto::ServerGCGGiveUpGameRsp> p_rsp_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v66; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v67; // [rsp+70h] [rbp-F0h] BYREF
  char v68[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:742 64 16 11 req_ptr:739 96 16 11 rsp_ptr:741 128 16 17 game_mode_ptr:748";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGGiveUpGameReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGGiveUpGameReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGGiveUpGameReq const>(
         (const std::shared_ptr<const proto::ServerGCGGiveUpGameReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGGiveUpGameReq",
      739);
    common::milog::MiLogStream::operator()(&v67, off_1BC8AAA0);
    common::milog::MiLogStream::~MiLogStream(&v67);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGGiveUpGameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGGiveUpGameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGGiveUpGameReq",
      740);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v66,
           (const char (*)[25])"ServerGCGGiveUpGameReq: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v67, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v67);
    std::string::~string(&v67);
    common::milog::MiLogStream::~MiLogStream(&v66);
    common::tools::perf::make_shared<proto::ServerGCGGiveUpGameRsp>();
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v7);
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGGiveUpGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGGiveUpGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    retcode = -1;
    v8 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v8);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 128), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGGiveUpGameReq",
        751);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v67,
             (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v67);
      retcode = 12000;
    }
    else
    {
      v10 = proto::ServerGCGGiveUpGameReq::game_uid(req);
      v11 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( v10 == GCGGameMode::getGameUid(v11) )
      {
        v16 = proto::ServerGCGGiveUpGameReq::game_id(req);
        v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( v16 == GCGGameMode::getGameId(v17) )
        {
          v25 = proto::ServerGCGGiveUpGameReq::verify_code(req);
          v26 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( v25 == GCGGameMode::getVerifyCode(v26) )
          {
            v34 = proto::ServerGCGGiveUpGameReq::business_type(req);
            v35 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( v34 == GCGGameMode::getBusinessType(v35) )
            {
              v43 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              if ( !GCGGameMode::isController(v43, *(_DWORD *)(v2 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/gcg_handler.cpp",
                  "onServerGCGGiveUpGameReq",
                  777);
                v44 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v67,
                        (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
                v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v44,
                        (const unsigned int *)(v2 + 48));
                v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v45,
                        (const char (*)[12])" game_uid: ");
                v47 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                GameUid = GCGGameMode::getGameUid(v47);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &GameUid);
                common::milog::MiLogStream::~MiLogStream(&v67);
              }
              else
              {
                v48 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                retcode = GCGGameMode::onPlayerGiveUp(v48, *(_DWORD *)(v2 + 48));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/gcg_handler.cpp",
                "onServerGCGGiveUpGameReq",
                772);
              v36 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v67,
                      (const char (*)[41])"[GCG_RET] business_type not match. req: ");
              v58 = proto::ServerGCGGiveUpGameReq::business_type(req);
              v37 = common::milog::MiLogStream::operator<<<proto::GCGGameBusinessType,(proto::GCGGameBusinessType*)0>(
                      v36,
                      &v58);
              v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v37,
                      (const char (*)[17])" business_type: ");
              v39 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              val = GCGGameMode::getBusinessType(v39);
              v40 = common::milog::MiLogStream::operator<<<proto::GCGGameBusinessType,(proto::GCGGameBusinessType*)0>(
                      v38,
                      (const proto::GCGGameBusinessType *)&val);
              v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v40,
                      (const char (*)[12])" game_uid: ");
              v42 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              GameUid = GCGGameMode::getGameUid(v42);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &GameUid);
              common::milog::MiLogStream::~MiLogStream(&v67);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v67,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGGiveUpGameReq",
              767);
            v27 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v67,
                    (const char (*)[39])"[GCG_RET] verify_code not match. req: ");
            v58 = proto::ServerGCGGiveUpGameReq::verify_code(req);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)&v58);
            v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v28,
                    (const char (*)[15])" verify_code: ");
            v30 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = GCGGameMode::getVerifyCode(v30);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v31,
                    (const char (*)[12])" game_uid: ");
            v33 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            GameUid = GCGGameMode::getGameUid(v33);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &GameUid);
            common::milog::MiLogStream::~MiLogStream(&v67);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGGiveUpGameReq",
            762);
          v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v67,
                  (const char (*)[35])"[GCG_RET] game_id not match. req: ");
          v58 = proto::ServerGCGGiveUpGameReq::game_id(req);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)&v58);
          v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" game_id: ");
          v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = GCGGameMode::getGameId(v21);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" game_uid: ");
          v24 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          GameUid = GCGGameMode::getGameUid(v24);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &GameUid);
          common::milog::MiLogStream::~MiLogStream(&v67);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGGiveUpGameReq",
          757);
        v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v67,
                (const char (*)[36])"[GCG_RET] game uid not match. req: ");
        val = proto::ServerGCGGiveUpGameReq::game_uid(req);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" game_uid: ");
        v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        GameUid = GCGGameMode::getGameUid(v15);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &GameUid);
        common::milog::MiLogStream::~MiLogStream(&v67);
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
    proto::ServerGCGGiveUpGameRsp::set_retcode(rsp_0, retcode);
    v49 = proto::ServerGCGGiveUpGameReq::game_uid(req);
    proto::ServerGCGGiveUpGameRsp::set_game_uid(rsp_0, v49);
    v50 = proto::ServerGCGGiveUpGameReq::game_id(req);
    proto::ServerGCGGiveUpGameRsp::set_game_id(rsp_0, v50);
    v51 = proto::ServerGCGGiveUpGameReq::verify_code(req);
    proto::ServerGCGGiveUpGameRsp::set_verify_code(rsp_0, v51);
    v52 = Singleton<MultiserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v52);
    proto::ServerGCGGiveUpGameRsp::set_app_id(rsp_0, AppId);
    v54 = ZTWN11ThreadLocal17work_thread_indexE();
    v55 = (google::protobuf::uint32 *)v54;
    if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) != 0 && (char)((v54 & 7) + 3) >= *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v54);
    proto::ServerGCGGiveUpGameRsp::set_thread_index(rsp_0, *v55);
    v56 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::ServerGCGGiveUpGameRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGCGGiveUpGameRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::ServerGCGGiveUpGameRsp>(v56, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::ServerGCGGiveUpGameRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    std::shared_ptr<proto::ServerGCGGiveUpGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGGiveUpGameRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGGiveUpGameReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGGiveUpGameReq> *const)(v2 + 64));
  result = v5;
  if ( v68 == (char *)v2 )
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

// Line 793: range 000000000E186E70-000000000E1879A8
int32_t __cdecl GCGHandler::onServerGCGBackToDuelReq(GCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GCGService *v8; // rax
  common::milog::MiLogStream *v9; // rax
  google::protobuf::uint32 v10; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 v16; // r14d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  uint32_t v31; // eax
  GCGGameMode *v32; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  google::protobuf::uint32 v42; // eax
  MultiserverApp *v43; // rax
  uint32_t AppId; // eax
  unsigned __int64 v45; // rax
  google::protobuf::uint32 *v46; // rdx
  google::protobuf::uint32 v47; // eax
  google::protobuf::uint32 v48; // eax
  GCGService *v49; // r14
  int32_t result; // eax
  unsigned int v51; // [rsp+1Ch] [rbp-134h] BYREF
  unsigned int val; // [rsp+20h] [rbp-130h] BYREF
  int32_t retcode; // [rsp+24h] [rbp-12Ch]
  const proto::ServerGCGBackToDuelReq *req; // [rsp+28h] [rbp-128h]
  proto::ServerGCGBackToDuelRsp *rsp_0; // [rsp+30h] [rbp-120h]
  GCGGameMgr *game_mgr; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v57; // [rsp+40h] [rbp-110h] BYREF
  char v58[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 uid:797 48 4 17 controller_id:833 64 16 11 req_ptr:794 96 16 11 rsp_ptr:796 128 16 17 g"
                        "ame_mode_ptr:803 160 16 18 controller_ptr:834";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGBackToDuelReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGBackToDuelReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGBackToDuelReq const>(
         (const std::shared_ptr<const proto::ServerGCGBackToDuelReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGBackToDuelReq",
      794);
    common::milog::MiLogStream::operator()(&v57, off_1BC8AD20);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGBackToDuelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGBackToDuelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    retcode = -1;
    common::tools::perf::make_shared<proto::ServerGCGBackToDuelRsp>();
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGBackToDuelReq",
      798);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v57,
           (const char (*)[32])"onServerGCGBackToDuelReq. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v57);
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v8 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v8);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 128), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGBackToDuelReq",
        806);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v57,
             (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v57);
      retcode = 12000;
    }
    else
    {
      v10 = proto::ServerGCGBackToDuelReq::game_uid(req);
      v11 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( v10 == GCGGameMode::getGameUid(v11) )
      {
        v16 = proto::ServerGCGBackToDuelReq::verify_code(req);
        v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( v16 == GCGGameMode::getVerifyCode(v17) )
        {
          v25 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( !GCGGameMode::isController(v25, *(_DWORD *)(v2 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGBackToDuelReq",
              822);
            v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v57,
                    (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v2 + 32));
            v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v27,
                    (const char (*)[12])" game_uid: ");
            v29 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = GCGGameMode::getGameUid(v29);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
            common::milog::MiLogStream::~MiLogStream(&v57);
          }
          else
          {
            v30 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v31 = proto::ServerGCGBackToDuelReq::client_data_version(req);
            if ( (unsigned int)GCGGameMode::checkClientVersionCanBack(v30, v31) )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gcg_handler.cpp",
                "onServerGCGBackToDuelReq",
                828);
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v57,
                (const char (*)[24])"give up by dataversion.");
              common::milog::MiLogStream::~MiLogStream(&v57);
              v32 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              GCGGameMode::onPlayerGiveUp(v32, *(_DWORD *)(v2 + 32));
              retcode = 12143;
            }
            else
            {
              v33 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              *(_DWORD *)(v2 + 48) = GCGGameMode::getControllerId(v33, *(_DWORD *)(v2 + 32));
              v34 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              GCGGameMode::getController<GCGPlayerController>(
                (GCGGameMode *const)(v2 + 160),
                (__int64)v34,
                *(_DWORD *)(v2 + 48));
              if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v57,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/gcg_handler.cpp",
                  "onServerGCGBackToDuelReq",
                  837);
                v35 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        &v57,
                        (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
                v36 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                        v35,
                        (const proto::GCGControllerValue *)(v2 + 48));
                v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" uid: ");
                v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v37,
                        (const unsigned int *)(v2 + 32));
                v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v38,
                        (const char (*)[12])" game_uid: ");
                v40 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                val = GCGGameMode::getGameUid(v40);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
                common::milog::MiLogStream::~MiLogStream(&v57);
              }
              else
              {
                v41 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                GCGPlayerController::updateRecvTime(v41);
                retcode = 0;
              }
              std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 160));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGBackToDuelReq",
            817);
          v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v57,
                  (const char (*)[39])"[GCG_RET] verify_code not match. req: ");
          v51 = proto::ServerGCGBackToDuelReq::verify_code(req);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v51);
          v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])" verify_code: ");
          v21 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          *(_DWORD *)(v2 + 48) = GCGGameMode::getVerifyCode(v21);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" game_uid: ");
          v24 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = GCGGameMode::getGameUid(v24);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v57);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGBackToDuelReq",
          812);
        v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v57,
                (const char (*)[36])"[GCG_RET] game uid not match. req: ");
        *(_DWORD *)(v2 + 48) = proto::ServerGCGBackToDuelReq::game_uid(req);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" game_uid: ");
        v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = GCGGameMode::getGameUid(v15);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
    v42 = proto::ServerGCGBackToDuelReq::game_uid(req);
    proto::ServerGCGBackToDuelRsp::set_game_uid(rsp_0, v42);
    v43 = Singleton<MultiserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v43);
    proto::ServerGCGBackToDuelRsp::set_app_id(rsp_0, AppId);
    v45 = ZTWN11ThreadLocal17work_thread_indexE();
    v46 = (google::protobuf::uint32 *)v45;
    if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) != 0 && (char)((v45 & 7) + 3) >= *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v45);
    proto::ServerGCGBackToDuelRsp::set_thread_index(rsp_0, *v46);
    proto::ServerGCGBackToDuelRsp::set_retcode(rsp_0, retcode);
    v47 = proto::ServerGCGBackToDuelReq::verify_code(req);
    proto::ServerGCGBackToDuelRsp::set_verify_code(rsp_0, v47);
    v48 = proto::ServerGCGBackToDuelReq::client_data_version(req);
    proto::ServerGCGBackToDuelRsp::set_client_data_version(rsp_0, v48);
    v49 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 160),
      p_packet_ptr);
    std::shared_ptr<proto::ServerGCGBackToDuelRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerGCGBackToDuelRsp> *const)(v2 + 128),
      (const std::shared_ptr<proto::ServerGCGBackToDuelRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::ServerGCGBackToDuelRsp>(
           v49,
           (std::shared_ptr<proto::ServerGCGBackToDuelRsp> *)(v2 + 128),
           (common::minet::PacketPtr *)(v2 + 160));
    std::shared_ptr<proto::ServerGCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGBackToDuelRsp> *const)(v2 + 128));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
    std::shared_ptr<proto::ServerGCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGBackToDuelRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGBackToDuelReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGBackToDuelReq> *const)(v2 + 64));
  result = v5;
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 854: range 000000000E1879AA-000000000E18B974
int32_t __cdecl GCGHandler::procGCGGM(
        GCGHandler *const this,
        uint32_t uid,
        const std::vector<std::string> *param_vec,
        std::string *ret_msg,
        std::string *ret_extra_content)
{
  int32_t v5; // r12d
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // r13
  const std::string *v9; // rax
  GCGService *v10; // rax
  GCGGameMgr *ThreadLocalGameMgr; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rax
  GCGService *v16; // rax
  GCGGameMode *v17; // rax
  GCGGameMode *v18; // rax
  GCGGameMode *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rax
  GCGService *v22; // rax
  GCGGameMode *v23; // rax
  GCGGameMode *v24; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGControllerBase *v26; // rax
  const std::string *v27; // rax
  const std::string *v28; // rax
  const std::string *v29; // rax
  const std::string *v30; // rax
  bool v31; // r12
  const std::string *v32; // rax
  bool v33; // r12
  const std::string *v34; // rax
  GCGService *v35; // rax
  GCGGameMode *v36; // rax
  GCGGameMode *v37; // rax
  GCGGameMode *v38; // rax
  const std::string *v39; // rax
  const std::string *v40; // rax
  const std::string *v41; // rax
  const std::string *v42; // rax
  const std::string *v43; // rax
  const std::string *v44; // rax
  const std::string *v45; // rax
  const std::string *v46; // rax
  const std::string *v47; // rax
  const std::string *v48; // rax
  const std::string *v49; // rax
  const std::string *v50; // rax
  GCGService *v51; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t GameUid; // eax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  const std::string *v55; // rax
  uint32_t Now; // r12d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t v58; // eax
  const std::string *v59; // rax
  const std::string *v60; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  GCGControllerBase *v62; // rax
  const std::string *v63; // rax
  GCGGameMode *v64; // rax
  const std::string *v65; // rax
  GCGGameMode *v66; // rax
  GCGDuel *Duel; // rax
  GCGField *Field; // rax
  uint32_t CharacterZone; // eax
  GCGGameMode *v70; // rax
  GCGDuel *v71; // rax
  GCGField *v72; // rax
  GCGCharacterZone *v73; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  uint32_t Guid; // eax
  GCGGameMode *v76; // rax
  GCGDuel *v77; // rax
  GCGField *v78; // rax
  GCGCharacterZone *v79; // rax
  GCGGameMode *v80; // rax
  GCGPhaseMgr *PhaseMgr; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rdx
  uint32_t *p_skill_id; // rax
  GCGGameMode *v85; // r12
  const std::string *v86; // rax
  const std::string *v87; // rax
  bool v88; // r12
  GCGGameMode *v89; // rax
  GCGDuel *v90; // rax
  GCGField *v91; // rax
  std::vector<unsigned int>::size_type v92; // r12
  GCGGameMode *v93; // rax
  const std::string *v94; // rax
  const std::string *v95; // rax
  GCGGameMode *v96; // rax
  const std::string *v97; // rax
  const std::string *v98; // rax
  const std::string *v99; // rax
  GCGGameMode *v100; // rax
  const std::string *v101; // rax
  const std::string *v102; // rax
  GCGGameMode *v103; // rax
  const std::string *v104; // rax
  GCGGameMode *v105; // rax
  const std::string *v106; // rax
  GCGGameMode *v107; // rax
  const std::string *v108; // rax
  const std::string *v109; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v110; // rax
  GCGControllerBase *v111; // rax
  const std::string *v112; // rax
  unsigned int *v113; // r8
  unsigned int *v114; // r9
  GCGGameMode *v115; // rax
  const std::string *v116; // rax
  GCGGameMode *v117; // rax
  const std::string *v118; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v119; // rax
  GCGGameMode *v120; // rax
  GCGSkillLogic *SkillLogic; // rax
  GCGGameMode *v122; // rax
  GCGSkillLogic *v123; // rax
  common::milog::MiLogStream *v124; // rdx
  const std::string *v125; // rax
  const std::string *v126; // rax
  GCGGameMode *v127; // rax
  const std::string *v128; // rax
  const std::string *v129; // rax
  GCGGameMode *v130; // rax
  const std::string *v131; // rax
  const std::string *v132; // rax
  GCGControllerValue v133; // r12d
  std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v134; // rax
  GCGGameMode *v135; // r12
  const std::string *v136; // rax
  const std::string *v137; // rax
  GCGGameMode *v138; // rax
  const std::string *v139; // rax
  GCGGameMode *v140; // rdx
  const std::string *v141; // rax
  GCGGameMode *v142; // rax
  const std::string *v143; // rax
  const std::string *v144; // rax
  GCGGameMode *v145; // rax
  const std::string *v146; // rax
  const std::string *v147; // rax
  GCGGameMode *v148; // rax
  const std::string *v149; // rax
  const std::string *v150; // rax
  GCGGameMode *v151; // rax
  const std::string *v152; // rax
  const std::string *v153; // rax
  const std::string *v154; // rax
  GCGGameMode *v155; // rax
  const std::string *v156; // rax
  unsigned int *v157; // r8
  unsigned int *v158; // r9
  GCGGameMode *v159; // rax
  const std::string *v160; // rax
  const std::string *v161; // rax
  GCGGameMode *v162; // rax
  const std::string *v163; // rax
  const std::string *v164; // rax
  GCGGameMode *v165; // rax
  const std::string *v166; // rax
  GCGGameMode *v167; // rax
  const std::string *v168; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v169; // rax
  int v170; // r15d
  const std::string *v171; // rax
  const std::string *v172; // rax
  bool v173; // r12
  GCGGameMode *v174; // rax
  GCGDuel *v175; // rax
  GCGField *v176; // rax
  std::vector<unsigned int>::size_type v177; // r12
  GCGGameMode *v178; // rax
  const std::string *v179; // rax
  const std::string *v180; // rax
  GCGGameMode *v181; // rax
  std::allocator<char> __a; // [rsp+34h] [rbp-5BCh] BYREF
  bool is_preview_open; // [rsp+35h] [rbp-5BBh]
  bool is_stop; // [rsp+36h] [rbp-5BAh]
  bool is_open_replay; // [rsp+37h] [rbp-5B9h]
  uint32_t controller_id; // [rsp+38h] [rbp-5B8h]
  GCGControllerValue ai_controller_id; // [rsp+3Ch] [rbp-5B4h]
  GCGGameMgr *game_mgr; // [rsp+40h] [rbp-5B0h]
  GCGDiceZone *dice_zone_0; // [rsp+48h] [rbp-5A8h]
  GCGDiceZone *dice_zone; // [rsp+50h] [rbp-5A0h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr_0; // [rsp+58h] [rbp-598h]
  data::GCGGameExcelConfig *game_excel_config_ptr_0; // [rsp+60h] [rbp-590h]
  GCGGameMgr *game_mgr_2; // [rsp+68h] [rbp-588h]
  GCGGameMgr *game_mgr_1; // [rsp+70h] [rbp-580h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+78h] [rbp-578h]
  data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+80h] [rbp-570h]
  GCGGameMgr *game_mgr_0; // [rsp+88h] [rbp-568h]
  std::shared_ptr<Config> v202; // [rsp+90h] [rbp-560h] BYREF
  std::string v203; // [rsp+A0h] [rbp-550h] BYREF
  char v204[1328]; // [rsp+C0h] [rbp-530h] BYREF

  v6 = (unsigned __int64)v204;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_5(1280LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "12 32 4 25 target_controller_id:1612 48 4 12 card_id:1613 64 4 12 card_id:1714 80 16 18 game_mod"
                        "e_ptr:1215 112 16 13 card_ptr:1260 144 16 18 operation_ptr:1506 176 16 22 ai_controller_ptr:1673"
                        " 208 24 13 card_vec:1017 272 24 18 dice_side_vec:1687 336 32 16 attack_task:1102 400 257 11 hold"
                        "er:1221 736 472 10 param:1060";
  *(_QWORD *)(v6 + 16) = GCGHandler::procGCGGM;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = 61956;
  v8[536862723] = 62194;
  v8[536862724] = 62194;
  v8[536862725] = 62194;
  v8[536862726] = 62194;
  v8[536862727] = -218959360;
  v8[536862728] = 62194;
  v8[536862729] = -218959360;
  v8[536862730] = 62194;
  v8[536862731] = -219021312;
  v8[536862732] = 62194;
  v8[536862740] = -234815488;
  v8[536862741] = -218959118;
  v8[536862742] = -218959118;
  v8[536862757] = -218103808;
  v8[536862758] = -202116109;
  v8[536862759] = -202116109;
  if ( std::vector<std::string>::empty(param_vec) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "procGCGGM",
      857);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v6 + 336),
      (const char (*)[17])"param not enough");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
    v5 = -1;
    goto LABEL_314;
  }
  v9 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( std::operator==<char>(v9, "CLEARALL") )
  {
    v10 = ServiceBox::findService<GCGService>();
    ThreadLocalGameMgr = GCGService::getThreadLocalGameMgr(v10);
    GCGGameMgr::clear(ThreadLocalGameMgr);
    v5 = 0;
    goto LABEL_314;
  }
  v12 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( std::operator==<char>(v12, "INIT") )
  {
    if ( std::vector<std::string>::size(param_vec) <= 1 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gcg_handler.cpp",
        "procGCGGM",
        870);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        (common::milog::MiLogStream *const)(v6 + 336),
        (const char (*)[17])"param not enough");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
      v5 = -1;
      goto LABEL_314;
    }
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 48) = 1;
    *(_DWORD *)(v6 + 64) = 0;
    v13 = std::vector<std::string>::operator[](param_vec, 1uLL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v13, (unsigned int *)(v6 + 32), 1) )
    {
LABEL_59:
      std::string::operator=(ret_msg, "parse uid fail.");
      v5 = -1;
      goto LABEL_314;
    }
    if ( std::vector<std::string>::size(param_vec) > 2 )
    {
      v14 = std::vector<std::string>::operator[](param_vec, 2uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v6 + 48), 1) )
        goto LABEL_15;
      if ( std::vector<std::string>::size(param_vec) > 3 )
      {
        v15 = std::vector<std::string>::operator[](param_vec, 3uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v15, (unsigned int *)(v6 + 64), 1) )
        {
          std::string::operator=(ret_msg, "parse seed fail.");
          v5 = -1;
          goto LABEL_314;
        }
      }
    }
    Config::getConfig();
    gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176))->design_config_.txt_config_mgr.gcg_game_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 176));
    game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                              gcg_game_config_mgr,
                              *(_DWORD *)(v6 + 48));
    if ( !game_excel_config_ptr )
    {
      std::string::operator=(ret_msg, "findGCGGameExcelConfig fail. ");
      v5 = -1;
      goto LABEL_314;
    }
    v16 = ServiceBox::findService<GCGService>();
    game_mgr_0 = GCGService::getThreadLocalGameMgr(v16);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 176), (uint32_t)game_mgr_0);
    if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 176), 0LL) )
    {
      v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
      GCGGameMode::onPlayerGiveUp(v17, *(_DWORD *)(v6 + 32));
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 176), (uint32_t)game_mgr_0);
    if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 176), 0LL) )
    {
      v18 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
      GCGGameMode::onPlayerGiveUp(v18, uid);
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
    GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
    *(_DWORD *)(v6 + 736) = *(_DWORD *)(v6 + 48);
    *(_DWORD *)(v6 + 744) = 1;
    *(_DWORD *)(v6 + 740) = *(_DWORD *)(v6 + 64);
    *(_DWORD *)(v6 + 840) = uid;
    *(_DWORD *)(v6 + 1064) = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 1200) = common::tools::TimeUtils::getNow();
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&game_excel_config_ptr->game_type);
    }
    if ( game_excel_config_ptr->game_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_excel_config_ptr->game_type);
      }
      if ( game_excel_config_ptr->game_type == AI )
      {
        GCGGameMgr::createAIGameMode((GCGGameMgr *const)(v6 + 144), (GCGGameModeParam *)game_mgr_0);
        std::shared_ptr<GCGGameMode>::operator=(
          (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
          (std::shared_ptr<GCGGameMode> *)(v6 + 144));
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 144));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&game_excel_config_ptr->game_type);
        }
        if ( game_excel_config_ptr->game_type != PVE )
        {
          std::string::operator=(ret_msg, "config error, invalid game type. ");
          v5 = -1;
LABEL_41:
          std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 80));
          GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
          goto LABEL_314;
        }
        GCGGameMgr::createPVEGameMode((GCGGameMgr *const)(v6 + 176), (GCGGameModeParam *)game_mgr_0);
        std::shared_ptr<GCGGameMode>::operator=(
          (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
          (std::shared_ptr<GCGGameMode> *)(v6 + 176));
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
      }
    }
    else
    {
      GCGGameMgr::createPVPGameMode((GCGGameMgr *const)(v6 + 112), (GCGGameModeParam *)game_mgr_0);
      std::shared_ptr<GCGGameMode>::operator=(
        (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
        (std::shared_ptr<GCGGameMode> *)(v6 + 112));
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 112));
    }
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 80), 0LL) )
    {
      std::string::operator=(ret_msg, "createGameMode fail.");
      v5 = -1;
    }
    else
    {
      v19 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      GCGGameMode::start(v19);
      v5 = 0;
    }
    goto LABEL_41;
  }
  v20 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( !std::operator==<char>(v20, "AI") )
  {
    v27 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v27, "CUSTOM") )
    {
      if ( std::vector<std::string>::size(param_vec) <= 4 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gcg_handler.cpp",
          "procGCGGM",
          1001);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v6 + 336),
          (const char (*)[17])"param not enough");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
        v5 = -1;
        goto LABEL_314;
      }
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 48) = 1;
      *(_DWORD *)(v6 + 64) = 0;
      v28 = std::vector<std::string>::operator[](param_vec, 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v28, (unsigned int *)(v6 + 32), 1) )
        goto LABEL_59;
      v29 = std::vector<std::string>::operator[](param_vec, 2uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v29, (unsigned int *)(v6 + 48), 1) )
      {
LABEL_15:
        std::string::operator=(ret_msg, "parse level_id fail.");
        v5 = -1;
        goto LABEL_314;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 208));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v6 + 336), ",", &__a);
      v30 = std::vector<std::string>::operator[](param_vec, 3uLL);
      v31 = common::tools::StringUtils::splitToList<unsigned int>(
              v30,
              (const std::string *)(v6 + 336),
              (std::vector<unsigned int> *)(v6 + 208),
              0) != 0;
      std::string::~string((void *)(v6 + 336));
      std::allocator<char>::~allocator(&__a);
      if ( v31 )
      {
        std::string::operator=(ret_msg, "splitToList fail. ");
        v5 = -1;
LABEL_92:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 208));
        goto LABEL_314;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 272));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v6 + 336), ",", &__a);
      v32 = std::vector<std::string>::operator[](param_vec, 4uLL);
      v33 = common::tools::StringUtils::splitToList<unsigned int>(
              v32,
              (const std::string *)(v6 + 336),
              (std::vector<unsigned int> *)(v6 + 272),
              0) != 0;
      std::string::~string((void *)(v6 + 336));
      std::allocator<char>::~allocator(&__a);
      if ( v33 )
      {
        std::string::operator=(ret_msg, "splitToList fail. ");
        v5 = -1;
LABEL_91:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 272));
        goto LABEL_92;
      }
      if ( std::vector<std::string>::size(param_vec) > 5 )
      {
        v34 = std::vector<std::string>::operator[](param_vec, 5uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v34, (unsigned int *)(v6 + 64), 1) )
        {
          std::string::operator=(ret_msg, "parse seed fail.");
          v5 = -1;
          goto LABEL_91;
        }
      }
      Config::getConfig();
      gcg_game_config_mgr_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v202)->design_config_.txt_config_mgr.gcg_game_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v202);
      game_excel_config_ptr_0 = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                                  gcg_game_config_mgr_0,
                                  *(_DWORD *)(v6 + 48));
      if ( !game_excel_config_ptr_0 )
      {
        std::string::operator=(ret_msg, "findGCGGameExcelConfig fail. ");
        v5 = -1;
        goto LABEL_91;
      }
      v35 = ServiceBox::findService<GCGService>();
      game_mgr_2 = GCGService::getThreadLocalGameMgr(v35);
      GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 176), (uint32_t)game_mgr_2);
      if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 176), 0LL) )
      {
        v36 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
        GCGGameMode::onPlayerGiveUp(v36, *(_DWORD *)(v6 + 32));
      }
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
      GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 176), (uint32_t)game_mgr_2);
      if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 176), 0LL) )
      {
        v37 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
        GCGGameMode::onPlayerGiveUp(v37, uid);
      }
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
      GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
      *(_DWORD *)(v6 + 736) = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(v6 + 744) = 1;
      *(_DWORD *)(v6 + 740) = *(_DWORD *)(v6 + 64);
      *(_DWORD *)(v6 + 840) = uid;
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(v6 + 760),
        (const std::vector<unsigned int> *)(v6 + 208));
      *(_DWORD *)(v6 + 1064) = *(_DWORD *)(v6 + 32);
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(v6 + 984),
        (const std::vector<unsigned int> *)(v6 + 272));
      *(_DWORD *)(v6 + 1200) = common::tools::TimeUtils::getNow();
      *(_QWORD *)(v6 + 80) = 0LL;
      *(_QWORD *)(v6 + 88) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_excel_config_ptr_0->game_type);
      }
      if ( game_excel_config_ptr_0->game_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&game_excel_config_ptr_0->game_type);
        }
        if ( game_excel_config_ptr_0->game_type == AI )
        {
          GCGGameMgr::createAIGameMode((GCGGameMgr *const)(v6 + 144), (GCGGameModeParam *)game_mgr_2);
          std::shared_ptr<GCGGameMode>::operator=(
            (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
            (std::shared_ptr<GCGGameMode> *)(v6 + 144));
          std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 144));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr_0->game_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&game_excel_config_ptr_0->game_type);
          }
          if ( game_excel_config_ptr_0->game_type != PVE )
          {
            std::string::operator=(ret_msg, "config error, invalid game type. ");
            v5 = -1;
LABEL_90:
            std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 80));
            GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
            goto LABEL_91;
          }
          GCGGameMgr::createPVEGameMode((GCGGameMgr *const)(v6 + 176), (GCGGameModeParam *)game_mgr_2);
          std::shared_ptr<GCGGameMode>::operator=(
            (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
            (std::shared_ptr<GCGGameMode> *)(v6 + 176));
          std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
        }
      }
      else
      {
        GCGGameMgr::createPVPGameMode((GCGGameMgr *const)(v6 + 112), (GCGGameModeParam *)game_mgr_2);
        std::shared_ptr<GCGGameMode>::operator=(
          (std::shared_ptr<GCGGameMode> *const)(v6 + 80),
          (std::shared_ptr<GCGGameMode> *)(v6 + 112));
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 112));
      }
      if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 80), 0LL) )
      {
        std::string::operator=(ret_msg, "create game mode fail. ");
        v5 = -1;
      }
      else
      {
        v38 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        GCGGameMode::start(v38);
        v5 = 0;
      }
      goto LABEL_90;
    }
    v39 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v39, "BOTHAI") )
    {
      if ( std::vector<std::string>::size(param_vec) <= 1 )
      {
        std::string::operator=(ret_msg, "param need: GCG BOTHAI PVP levelid group1 group2");
        v5 = -1;
        goto LABEL_314;
      }
      *(_QWORD *)(v6 + 336) = 0LL;
      *(_DWORD *)(v6 + 344) = 0;
      *(_DWORD *)(v6 + 348) = 0;
      *(_DWORD *)(v6 + 352) = 0;
      *(_DWORD *)(v6 + 356) = 0;
      *(_DWORD *)(v6 + 360) = 0;
      v40 = std::vector<std::string>::operator[](param_vec, 1uLL);
      if ( std::operator==<char>(v40, off_1BC8B3A0) )
      {
        *(_DWORD *)(v6 + 352) = 1;
        if ( std::vector<std::string>::size(param_vec) <= 4 )
        {
LABEL_98:
          std::string::operator=(ret_msg, "param need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
          v5 = -1;
          goto LABEL_314;
        }
        v41 = std::vector<std::string>::operator[](param_vec, 2uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v41, (unsigned int *)(v6 + 348), 1) )
        {
LABEL_100:
          std::string::operator=(
            ret_msg,
            "level_id not valid, need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
          v5 = -1;
          goto LABEL_314;
        }
        v42 = std::vector<std::string>::operator[](param_vec, 3uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v42, (unsigned int *)(v6 + 356), 1) )
        {
LABEL_102:
          std::string::operator=(
            ret_msg,
            "group1 not valid, need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
          v5 = -1;
          goto LABEL_314;
        }
        v43 = std::vector<std::string>::operator[](param_vec, 4uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v43, (unsigned int *)(v6 + 360), 1) )
        {
          std::string::operator=(
            ret_msg,
            "group2 not valid, need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
          v5 = -1;
          goto LABEL_314;
        }
        if ( std::vector<std::string>::size(param_vec) > 6 )
        {
          v44 = std::vector<std::string>::operator[](param_vec, 5uLL);
          if ( common::tools::StringUtils::strToNum<unsigned long>(v44, (unsigned __int64 *)(v6 + 336), 1) )
          {
LABEL_107:
            std::string::operator=(
              ret_msg,
              "taskid not valid, need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
            v5 = -1;
            goto LABEL_314;
          }
          v45 = std::vector<std::string>::operator[](param_vec, 6uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v45, (unsigned int *)(v6 + 344), 1) )
          {
LABEL_109:
            std::string::operator=(
              ret_msg,
              "subtaskid not valid need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid");
            v5 = -1;
            goto LABEL_314;
          }
        }
      }
      else
      {
        *(_DWORD *)(v6 + 352) = 2;
        if ( std::vector<std::string>::size(param_vec) <= 4 )
          goto LABEL_98;
        v46 = std::vector<std::string>::operator[](param_vec, 2uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v46, (unsigned int *)(v6 + 348), 1) )
          goto LABEL_100;
        v47 = std::vector<std::string>::operator[](param_vec, 3uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v47, (unsigned int *)(v6 + 356), 1) )
          goto LABEL_102;
        if ( std::vector<std::string>::size(param_vec) > 5 )
        {
          v48 = std::vector<std::string>::operator[](param_vec, 4uLL);
          if ( common::tools::StringUtils::strToNum<unsigned long>(v48, (unsigned __int64 *)(v6 + 336), 1) )
            goto LABEL_107;
          v49 = std::vector<std::string>::operator[](param_vec, 5uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v49, (unsigned int *)(v6 + 344), 1) )
            goto LABEL_109;
        }
        if ( std::vector<std::string>::size(param_vec) > 6 )
        {
          v50 = std::vector<std::string>::operator[](param_vec, 6uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v50, (unsigned int *)(v6 + 360), 1) )
          {
            std::string::operator=(
              ret_msg,
              "group1 not valid, need: GCG BOTHAI PVP levelid group1 group2 taskid subtaskid group2");
            v5 = -1;
            goto LABEL_314;
          }
        }
      }
      v5 = GCGHandler::handleBothAITask(this, (const GCGBothAIAttackTask *)(v6 + 336));
      goto LABEL_314;
    }
    v51 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v51);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 80), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 80), 0LL) )
    {
      std::string::operator=(ret_msg, "findGameMode fail.");
      v5 = -1;
LABEL_313:
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 80));
      goto LABEL_314;
    }
    v52 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
    GameUid = GCGGameMode::getGameUid(v52);
    common::milog::MilogContextHolder::MilogContextHolder(
      (common::milog::MilogContextHolder *const)(v6 + 400),
      "gcg_game: %u",
      GameUid);
    v54 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
    controller_id = GCGGameMode::getControllerId(v54, uid);
    v55 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v55, "CLEAR") )
    {
      Now = common::tools::TimeUtils::getNow();
      v57 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      v58 = GCGGameMode::getGameUid(v57);
      GCGGameMgr::removeGameMode(game_mgr, v58, Now);
      v5 = 0;
LABEL_312:
      common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v6 + 400));
      goto LABEL_313;
    }
    v59 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v59, "START") )
    {
      *(_DWORD *)(v6 + 64) = 0;
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        v60 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v60, (unsigned int *)(v6 + 64), 1) )
          goto LABEL_267;
      }
      if ( !*(_DWORD *)(v6 + 64) )
        *(_DWORD *)(v6 + 64) = controller_id;
      v61 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      GCGGameMode::getController((GCGGameMode *const)(v6 + 176), (__int64)v61, *(_DWORD *)(v6 + 64));
      if ( !std::operator==<GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v6 + 176), 0LL) )
      {
        v62 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
        GCGControllerBase::setReady(v62);
        v5 = 0;
        goto LABEL_134;
      }
LABEL_132:
      std::string::operator=(ret_msg, "getController fail.");
      v5 = -1;
LABEL_134:
      std::shared_ptr<GCGControllerBase>::~shared_ptr((std::shared_ptr<GCGControllerBase> *const)(v6 + 176));
      goto LABEL_312;
    }
    v63 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v63, "SWITCH") )
    {
      v64 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      GCGGameMode::onGMSwitchController(v64);
      v5 = 0;
      goto LABEL_312;
    }
    v65 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v65, "USE_SKILL") )
    {
      v66 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      Duel = GCGGameMode::getDuel(v66);
      Field = GCGDuel::getField(Duel, GCG_CONTROLLER_A);
      CharacterZone = (unsigned int)GCGField::getCharacterZone(Field);
      GCGCardZone::findCardById((GCGCardZone *const)(v6 + 112), CharacterZone);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v6 + 112), 0LL) )
      {
        std::string::operator=(ret_msg, "find 1203 card from player 1 failed!");
        v5 = -1;
      }
      else
      {
        v70 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v71 = GCGGameMode::getDuel(v70);
        v72 = GCGDuel::getField(v71, GCG_CONTROLLER_A);
        v73 = GCGField::getCharacterZone(v72);
        v74 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 112));
        Guid = GCGCard::getGuid(v74);
        GCGCharacterZone::setOnStage(v73, Guid, GCG_REASON_GM, 1);
        v76 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v77 = GCGGameMode::getDuel(v76);
        v78 = GCGDuel::getField(v77, GCG_CONTROLLER_B);
        v79 = GCGField::getCharacterZone(v78);
        GCGCharacterZone::onGMDefaultOnStage(v79);
        v80 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        PhaseMgr = GCGGameMode::getPhaseMgr(v80);
        GCGPhaseMgr::enterPhase(PhaseMgr, GCG_PHASE_MAIN);
        std::make_shared<GCGOperationAttack>();
        if ( std::operator==<GCGOperationAttack>((const std::shared_ptr<GCGOperationAttack> *)(v6 + 144), 0LL) )
        {
          std::string::operator=(ret_msg, "operation ptr is nullptr");
          v5 = -1;
        }
        else
        {
          v82 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&v82->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v82->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v82 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v82->controller_id);
          }
          v82->controller_id = GCG_CONTROLLER_A;
          v83 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
          p_skill_id = &v83->skill_id;
          if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(p_skill_id);
          }
          v83->skill_id = 12032;
          v85 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationAttack,void>(
            (std::shared_ptr<GCGOperationBase> *const)(v6 + 176),
            (const std::shared_ptr<GCGOperationAttack> *)(v6 + 144));
          GCGGameMode::process(v85, (GCGOperationBasePtr *)(v6 + 176));
          std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v6 + 176));
          v5 = 0;
        }
        std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v6 + 144));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 112));
      goto LABEL_312;
    }
    v86 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v86, "DICE") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 272));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v6 + 336), ",", &__a);
        v87 = std::vector<std::string>::operator[](param_vec, 1uLL);
        v88 = common::tools::StringUtils::splitToList<unsigned int>(
                v87,
                (const std::string *)(v6 + 336),
                (std::vector<unsigned int> *)(v6 + 272),
                0) != 0;
        std::string::~string((void *)(v6 + 336));
        std::allocator<char>::~allocator(&__a);
        if ( v88 )
        {
          std::string::operator=(ret_msg, "splitToList fail. ");
          v5 = -1;
        }
        else
        {
          v89 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          v90 = GCGGameMode::getDuel(v89);
          v91 = GCGDuel::getField(v90, (GCGControllerValue)controller_id);
          dice_zone = GCGField::getDiceZone(v91);
          v92 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 272));
          if ( v92 <= GCGDiceZone::getMaxDiceSize(dice_zone) )
          {
            if ( GCGDiceZone::onGMSetDice(dice_zone, (const std::vector<unsigned int> *)(v6 + 272)) )
            {
              std::string::operator=(ret_msg, "onGMSetDice faill.");
              v5 = -1;
            }
            else
            {
              v93 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
              GCGGameMode::trySendMsgPack(v93);
              v5 = 0;
            }
          }
          else
          {
            std::string::operator=(ret_msg, &off_1BC8BA40);
            v5 = -1;
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 272));
        goto LABEL_312;
      }
      goto LABEL_285;
    }
    v94 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v94, "HAND") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        *(_DWORD *)(v6 + 64) = 0;
        v95 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v95, (unsigned int *)(v6 + 64), 1) )
          goto LABEL_272;
        v96 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        if ( !(unsigned int)GCGGameMode::onGMCreateHand(v96, (GCGControllerValue)controller_id, *(_DWORD *)(v6 + 64)) )
        {
          v5 = 0;
          goto LABEL_312;
        }
LABEL_215:
        std::string::operator=(ret_msg, &off_1BC8BB40);
        v5 = -1;
        goto LABEL_312;
      }
      goto LABEL_285;
    }
    v97 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v97, "CARD") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        *(_DWORD *)(v6 + 48) = 0;
        v98 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v98, (unsigned int *)(v6 + 48), 1) )
          goto LABEL_272;
        *(_DWORD *)(v6 + 64) = 0;
        if ( std::vector<std::string>::size(param_vec) > 2 )
        {
          v99 = std::vector<std::string>::operator[](param_vec, 2uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v99, (unsigned int *)(v6 + 64), 1) )
          {
            std::string::operator=(ret_msg, "parse param fail.");
            v5 = -1;
            goto LABEL_312;
          }
        }
        v100 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        if ( !GCGGameMode::onGMCreateCard(
                v100,
                (GCGControllerValue)controller_id,
                *(_DWORD *)(v6 + 48),
                *(_DWORD *)(v6 + 64)) )
        {
          v5 = 0;
          goto LABEL_312;
        }
        goto LABEL_215;
      }
LABEL_285:
      std::string::operator=(ret_msg, "param not enough");
      v5 = -1;
      goto LABEL_312;
    }
    v101 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v101, "REMOVE") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        *(_DWORD *)(v6 + 64) = 0;
        v102 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v102, (unsigned int *)(v6 + 64), 1) )
          goto LABEL_272;
        v103 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        if ( !GCGGameMode::onGMRemoveCard(v103, *(_DWORD *)(v6 + 64)) )
        {
          v5 = 0;
          goto LABEL_312;
        }
        goto LABEL_215;
      }
      goto LABEL_285;
    }
    v104 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v104, "LOOK") )
    {
      v105 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      if ( GCGGameMode::onGMSetLookOpponent(v105, 1) )
      {
        std::string::operator=(ret_msg, "look opponent failed");
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
      goto LABEL_312;
    }
    v106 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v106, "LOOKBACK") )
    {
      v107 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      if ( GCGGameMode::onGMSetLookOpponent(v107, 0) )
      {
        std::string::operator=(ret_msg, "look change to me failed");
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
      goto LABEL_312;
    }
    v108 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v108, "DO_DEFAULT") )
    {
      if ( std::vector<std::string>::size(param_vec) <= 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gcg_handler.cpp",
          "procGCGGM",
          1398);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v6 + 336),
          (const char (*)[17])"param not enough");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
        v5 = -1;
        goto LABEL_312;
      }
      *(_DWORD *)(v6 + 64) = 0;
      v109 = std::vector<std::string>::operator[](param_vec, 1uLL);
      if ( !common::tools::StringUtils::strToNum<unsigned int>(v109, (unsigned int *)(v6 + 64), 1) )
      {
        v110 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        GCGGameMode::getController((GCGGameMode *const)(v6 + 176), (__int64)v110, *(_DWORD *)(v6 + 64));
        if ( !std::operator==<GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v6 + 176), 0LL) )
        {
          v111 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
          GCGControllerBase::doDefaultOp(v111);
          v5 = 0;
          goto LABEL_134;
        }
        goto LABEL_132;
      }
      goto LABEL_267;
    }
    v112 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v112, "TOKEN") )
    {
      if ( std::vector<std::string>::size(param_vec) > 3 )
      {
        *(_DWORD *)(v6 + 32) = 0;
        *(_DWORD *)(v6 + 48) = 0;
        *(_DWORD *)(v6 + 64) = 0;
        if ( common::tools::StringUtils::strVecToNum<1u,unsigned int,unsigned int &,unsigned int &>(
               param_vec,
               (unsigned int *)(v6 + 32),
               (unsigned int *)(v6 + 48),
               (unsigned int *)(v6 + 64),
               v113,
               v114) )
        {
          std::string::operator=(ret_msg, "parse param fail");
          v5 = -1;
        }
        else
        {
          v115 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          v5 = GCGGameMode::onGMSetCardToken(
                 v115,
                 *(_DWORD *)(v6 + 32),
                 (GCGTokenType)*(_DWORD *)(v6 + 48),
                 *(_DWORD *)(v6 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gcg_handler.cpp",
          "procGCGGM",
          1420);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v6 + 336),
          (const char (*)[17])"param not enough");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
        v5 = -1;
      }
      goto LABEL_312;
    }
    v116 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v116, "ENERGY") )
    {
      v117 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      v5 = GCGGameMode::onGMSetEnergyMax(v117, (GCGControllerValue)controller_id);
      goto LABEL_312;
    }
    v118 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v118, "PREVIEW") )
    {
      v119 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
      if ( !GCGGameMode::isPreviewSwitchOpen(v119) )
      {
        std::string::operator=(ret_msg, "preview switch is not open");
        v5 = -1;
      }
      else
      {
        v120 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        SkillLogic = GCGGameMode::getSkillLogic(v120);
        if ( GCGSkillLogic::doSkillPreview(SkillLogic) )
        {
          std::string::operator=(ret_msg, "preview failed");
        }
        else
        {
          v122 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          v123 = GCGGameMode::getSkillLogic(v122);
          GCGSkillLogic::getSkillPreviewFormatStrResult[abi:cxx11](&v203, v123);
          std::string::operator=(ret_msg, &v203);
          std::string::~string(&v203);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/gcg_handler.cpp",
            "procGCGGM",
            1452);
          v124 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   (common::milog::MiLogStream *const)(v6 + 336),
                   (const char (*)[10])"[PREVIEW]");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v124, ret_msg);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
        }
        v5 = -1;
      }
      goto LABEL_312;
    }
    v125 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v125, "ONSTAGE") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        *(_DWORD *)(v6 + 64) = 0;
        v126 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v126, (unsigned int *)(v6 + 64), 1) )
          goto LABEL_272;
        v127 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        if ( !GCGGameMode::onGMOnStage(v127, *(_DWORD *)(v6 + 64)) )
        {
          v5 = 0;
          goto LABEL_312;
        }
        goto LABEL_215;
      }
      goto LABEL_285;
    }
    v128 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v128, "NOCOST") )
    {
      if ( std::vector<std::string>::size(param_vec) > 1 )
      {
        *(_DWORD *)(v6 + 64) = 0;
        v129 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v129, (unsigned int *)(v6 + 64), 1) )
        {
          std::string::operator=(ret_msg, "parse value fail.");
          v5 = -1;
        }
        else
        {
          v130 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          v5 = GCGGameMode::onGMSetNoNeedCost(v130, (GCGControllerValue)controller_id, *(_DWORD *)(v6 + 64));
        }
        goto LABEL_312;
      }
      goto LABEL_285;
    }
    v131 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v131, "SURRENDER") )
    {
      *(_DWORD *)(v6 + 64) = 0;
      if ( std::vector<std::string>::size(param_vec) <= 1
        || (v132 = std::vector<std::string>::operator[](param_vec, 1uLL),
            !common::tools::StringUtils::strToNum<unsigned int>(v132, (unsigned int *)(v6 + 64), 1)) )
      {
        if ( !*(_DWORD *)(v6 + 64) )
          *(_DWORD *)(v6 + 64) = controller_id;
        common::tools::perf::make_shared<GCGOperationSurrender>();
        v133 = *(_DWORD *)(v6 + 64);
        v134 = std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v134->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v134->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v134 = (std::__shared_ptr_access<GCGOperationSurrender,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v134->controller_id);
        }
        v134->controller_id = v133;
        v135 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationSurrender,void>(
          (std::shared_ptr<GCGOperationBase> *const)(v6 + 176),
          (const std::shared_ptr<GCGOperationSurrender> *)(v6 + 144));
        v5 = GCGGameMode::process(v135, (GCGOperationBasePtr *)(v6 + 176));
        std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v6 + 176));
        std::shared_ptr<GCGOperationSurrender>::~shared_ptr((std::shared_ptr<GCGOperationSurrender> *const)(v6 + 144));
        goto LABEL_312;
      }
      goto LABEL_267;
    }
    v136 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( std::operator==<char>(v136, "KILL") )
    {
      if ( std::vector<std::string>::size(param_vec) <= 1 )
        goto LABEL_285;
      *(_DWORD *)(v6 + 64) = 0;
      v137 = std::vector<std::string>::operator[](param_vec, 1uLL);
      if ( !common::tools::StringUtils::strToNum<unsigned int>(v137, (unsigned int *)(v6 + 64), 1) )
      {
        v138 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v5 = GCGGameMode::onGMKillCharacter(v138, *(_DWORD *)(v6 + 64));
        goto LABEL_312;
      }
    }
    else
    {
      v139 = std::vector<std::string>::operator[](param_vec, 0LL);
      if ( std::operator==<char>(v139, "INTENTION") )
      {
        v140 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v5 = GCGGameMode::onGMPrintPVEIntention(v140, ret_extra_content);
        goto LABEL_312;
      }
      v141 = std::vector<std::string>::operator[](param_vec, 0LL);
      if ( std::operator==<char>(v141, "NOTHINK") )
      {
        v142 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v5 = GCGGameMode::onGMSetIgnoreThink(v142);
        goto LABEL_312;
      }
      v143 = std::vector<std::string>::operator[](param_vec, 0LL);
      if ( std::operator==<char>(v143, "PREVIEW_SWITCH") )
      {
        is_preview_open = 1;
        if ( std::vector<std::string>::size(param_vec) > 1 )
        {
          *(_DWORD *)(v6 + 64) = 0;
          v144 = std::vector<std::string>::operator[](param_vec, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v144, (unsigned int *)(v6 + 64), 1) )
          {
            std::string::operator=(ret_msg, "parse open_state_value fail.");
            v5 = -1;
            goto LABEL_312;
          }
          is_preview_open = *(_DWORD *)(v6 + 64) != 0;
        }
        v145 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
        v5 = GCGGameMode::onGMSetPreviewSwitch(v145, is_preview_open);
        goto LABEL_312;
      }
      v146 = std::vector<std::string>::operator[](param_vec, 0LL);
      if ( std::operator==<char>(v146, "SETTLE") )
      {
        if ( std::vector<std::string>::size(param_vec) <= 1 )
          goto LABEL_285;
        *(_DWORD *)(v6 + 64) = 0;
        v147 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( !common::tools::StringUtils::strToNum<unsigned int>(v147, (unsigned int *)(v6 + 64), 1) )
        {
          v148 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          GCGGameMode::setGameOver(v148, *(GCGControllerValue *)(v6 + 64), GCG_END_REASON_GM);
          v5 = 0;
          goto LABEL_312;
        }
      }
      else
      {
        v149 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( !std::operator==<char>(v149, "REPLAY") )
        {
          v152 = std::vector<std::string>::operator[](param_vec, 0LL);
          if ( std::operator==<char>(v152, "WAITING_CHAR") )
          {
            if ( std::vector<std::string>::size(param_vec) <= 2 )
              goto LABEL_285;
            v153 = std::vector<std::string>::operator[](param_vec, 1uLL);
            if ( std::operator==<char>(v153, "CLEAR") )
            {
              if ( std::vector<std::string>::size(param_vec) <= 2 )
                goto LABEL_285;
              *(_DWORD *)(v6 + 64) = 0;
              v154 = std::vector<std::string>::operator[](param_vec, 2uLL);
              if ( !common::tools::StringUtils::strToNum<unsigned int>(v154, (unsigned int *)(v6 + 64), 1) )
              {
                v155 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                v5 = GCGGameMode::onGMClearWaitingCharacter(v155, *(GCGControllerValue *)(v6 + 64));
                goto LABEL_312;
              }
              goto LABEL_267;
            }
            v156 = std::vector<std::string>::operator[](param_vec, 1uLL);
            if ( std::operator==<char>(v156, off_1BC8C240) )
            {
              if ( std::vector<std::string>::size(param_vec) > 4 )
              {
                *(_DWORD *)(v6 + 32) = 0;
                *(_DWORD *)(v6 + 48) = 0;
                *(_DWORD *)(v6 + 64) = 0;
                if ( !common::tools::StringUtils::strVecToNum<2u,unsigned int,unsigned int &,unsigned int &>(
                        param_vec,
                        (unsigned int *)(v6 + 32),
                        (unsigned int *)(v6 + 48),
                        (unsigned int *)(v6 + 64),
                        v157,
                        v158) )
                {
                  v159 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                  v5 = GCGGameMode::onGMAddWaitingCharacter(
                         v159,
                         *(GCGControllerValue *)(v6 + 32),
                         *(_DWORD *)(v6 + 48),
                         *(_DWORD *)(v6 + 64));
                  goto LABEL_312;
                }
                goto LABEL_267;
              }
              goto LABEL_285;
            }
          }
          else
          {
            v160 = std::vector<std::string>::operator[](param_vec, 0LL);
            if ( std::operator==<char>(v160, "REVIVE") )
            {
              if ( std::vector<std::string>::size(param_vec) <= 1 )
                goto LABEL_285;
              *(_DWORD *)(v6 + 64) = 0;
              v161 = std::vector<std::string>::operator[](param_vec, 1uLL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v161, (unsigned int *)(v6 + 64), 1) )
              {
LABEL_272:
                std::string::operator=(ret_msg, "parse card_id fail.");
                v5 = -1;
                goto LABEL_312;
              }
              v162 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
              if ( GCGGameMode::onGMRevive(v162, *(_DWORD *)(v6 + 64)) )
              {
                std::string::operator=(ret_msg, "revive card fail.");
                v5 = -1;
                goto LABEL_312;
              }
            }
            else
            {
              v163 = std::vector<std::string>::operator[](param_vec, 0LL);
              if ( std::operator==<char>(v163, "STOP_TIMER") )
              {
                if ( std::vector<std::string>::size(param_vec) > 1 )
                {
                  *(_DWORD *)(v6 + 64) = 0;
                  v164 = std::vector<std::string>::operator[](param_vec, 1uLL);
                  if ( common::tools::StringUtils::strToNum<unsigned int>(v164, (unsigned int *)(v6 + 64), 1) )
                  {
                    std::string::operator=(ret_msg, "parse is_stop fail.");
                    v5 = -1;
                  }
                  else
                  {
                    is_stop = *(_DWORD *)(v6 + 64) == 1;
                    v165 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                    v5 = GCGGameMode::onGMTimeStop(v165, is_stop);
                  }
                  goto LABEL_312;
                }
                goto LABEL_285;
              }
              v166 = std::vector<std::string>::operator[](param_vec, 0LL);
              if ( std::operator==<char>(v166, "DESC") )
              {
                v167 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                GCGGameMode::getDesc[abi:cxx11]((std::string *)(v6 + 336), v167);
                std::string::operator=(ret_msg, v6 + 336);
                std::string::~string((void *)(v6 + 336));
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 336),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/gcg_handler.cpp",
                  "procGCGGM",
                  1661);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  (common::milog::MiLogStream *const)(v6 + 336),
                  ret_msg);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
                v5 = 0;
                goto LABEL_312;
              }
              v168 = std::vector<std::string>::operator[](param_vec, 0LL);
              if ( std::operator==<char>(v168, "OP_AI") )
              {
                if ( std::vector<std::string>::size(param_vec) <= 1 )
                  goto LABEL_285;
                ai_controller_id = GCG_CONTROLLER_B;
                v169 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                GCGGameMode::getController<GCGAIController>((GCGGameMode *const)(v6 + 176), (__int64)v169, 2);
                if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v6 + 176), 0LL) )
                {
                  std::string::operator=(ret_msg, "ai controller not found");
                  v5 = -1;
                  v170 = 0;
                }
                else
                {
                  v171 = std::vector<std::string>::operator[](param_vec, 1uLL);
                  if ( std::operator==<char>(v171, "DICE") )
                  {
                    if ( std::vector<std::string>::size(param_vec) > 2 )
                    {
                      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 272));
                      std::allocator<char>::allocator(&__a);
                      std::string::basic_string<std::allocator<char>>((std::string *const)(v6 + 336), ",", &__a);
                      v172 = std::vector<std::string>::operator[](param_vec, 2uLL);
                      v173 = common::tools::StringUtils::splitToList<unsigned int>(
                               v172,
                               (const std::string *)(v6 + 336),
                               (std::vector<unsigned int> *)(v6 + 272),
                               0) != 0;
                      std::string::~string((void *)(v6 + 336));
                      std::allocator<char>::~allocator(&__a);
                      if ( v173 )
                      {
                        std::string::operator=(ret_msg, "splitToList failed");
                        v5 = -1;
                      }
                      else
                      {
                        v174 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                        v175 = GCGGameMode::getDuel(v174);
                        v176 = GCGDuel::getField(v175, GCG_CONTROLLER_B);
                        dice_zone_0 = GCGField::getDiceZone(v176);
                        v177 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 272));
                        if ( v177 <= GCGDiceZone::getMaxDiceSize(dice_zone_0) )
                        {
                          if ( GCGDiceZone::onGMSetDice(dice_zone_0, (const std::vector<unsigned int> *)(v6 + 272)) )
                          {
                            std::string::operator=(ret_msg, "onGMSetDice failed");
                            v5 = -1;
                          }
                          else
                          {
                            v178 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                            GCGGameMode::trySendMsgPack(v178);
                            v5 = 0;
                          }
                        }
                        else
                        {
                          std::string::operator=(ret_msg, &off_1BC8C480);
                          v5 = -1;
                        }
                      }
                      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 272));
                    }
                    else
                    {
                      std::string::operator=(ret_msg, "param not enough");
                      v5 = -1;
                    }
                    v170 = 0;
                  }
                  else
                  {
                    v179 = std::vector<std::string>::operator[](param_vec, 1uLL);
                    if ( std::operator==<char>(v179, "HAND") )
                    {
                      if ( std::vector<std::string>::size(param_vec) > 2 )
                      {
                        *(_DWORD *)(v6 + 64) = 0;
                        v180 = std::vector<std::string>::operator[](param_vec, 2uLL);
                        if ( common::tools::StringUtils::strToNum<unsigned int>(v180, (unsigned int *)(v6 + 64), 1) )
                        {
                          std::string::operator=(ret_msg, "parse card_id failed.");
                          v5 = -1;
                        }
                        else
                        {
                          v181 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
                          if ( (unsigned int)GCGGameMode::onGMCreateHand(v181, GCG_CONTROLLER_B, *(_DWORD *)(v6 + 64)) )
                          {
                            std::string::operator=(ret_msg, &off_1BC8C540);
                            v5 = -1;
                          }
                          else
                          {
                            v5 = 0;
                          }
                        }
                      }
                      else
                      {
                        std::string::operator=(ret_msg, "param not enough");
                        v5 = -1;
                      }
                      v170 = 0;
                    }
                    else
                    {
                      v170 = 1;
                    }
                  }
                }
                std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v6 + 176));
                if ( v170 != 1 )
                  goto LABEL_312;
              }
            }
          }
          std::string::operator=(ret_msg, "gm not found.");
          v5 = -1;
          goto LABEL_312;
        }
        if ( std::vector<std::string>::size(param_vec) <= 1 )
          goto LABEL_285;
        *(_DWORD *)(v6 + 64) = 0;
        v150 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( !common::tools::StringUtils::strToNum<unsigned int>(v150, (unsigned int *)(v6 + 64), 1) )
        {
          is_open_replay = *(_DWORD *)(v6 + 64) == 1;
          v151 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 80));
          GCGGameMode::setIsSaveOperation(v151, is_open_replay);
          v5 = 0;
          goto LABEL_312;
        }
      }
    }
LABEL_267:
    std::string::operator=(ret_msg, "parse controller_id fail.");
    v5 = -1;
    goto LABEL_312;
  }
  if ( std::vector<std::string>::size(param_vec) <= 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "procGCGGM",
      958);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v6 + 336),
      (const char (*)[17])"param not enough");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 336));
    v5 = -1;
    goto LABEL_314;
  }
  *(_DWORD *)(v6 + 64) = 1;
  v21 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( common::tools::StringUtils::strToNum<unsigned int>(v21, (unsigned int *)(v6 + 64), 1) )
    goto LABEL_59;
  v22 = ServiceBox::findService<GCGService>();
  game_mgr_1 = GCGService::getThreadLocalGameMgr(v22);
  GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v6 + 176), (uint32_t)game_mgr_1);
  if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 176), 0LL) )
  {
    v23 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
    GCGGameMode::onPlayerGiveUp(v23, uid);
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 176));
  GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
  *(_DWORD *)(v6 + 736) = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 744) = 1;
  *(_DWORD *)(v6 + 840) = uid;
  *(_DWORD *)(v6 + 1200) = common::tools::TimeUtils::getNow();
  GCGGameMgr::createAIGameMode((GCGGameMgr *const)(v6 + 144), (GCGGameModeParam *)game_mgr_1);
  if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 144), 0LL) )
  {
    std::string::operator=(ret_msg, "createGameMode fail.");
    v5 = -1;
  }
  else
  {
    v24 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
    GCGGameMode::start(v24);
    v25 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
    GCGGameMode::getController((GCGGameMode *const)(v6 + 176), (__int64)v25, 1);
    if ( std::operator==<GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v6 + 176), 0LL) )
    {
      std::string::operator=(ret_msg, "getController GCG_CONTROLLER_A fail.");
      v5 = -1;
    }
    else
    {
      v26 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
      GCGControllerBase::setReady(v26);
      v5 = 0;
    }
    std::shared_ptr<GCGControllerBase>::~shared_ptr((std::shared_ptr<GCGControllerBase> *const)(v6 + 176));
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 144));
  GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v6 + 736));
LABEL_314:
  if ( v204 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF809C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_5(v6, 1280LL, v204);
  }
  return v5;
};

// Line 1733: range 000000000E18B976-000000000E18C665
void __cdecl GCGHandler::sendGameSettle(GCGGameMode *game_mode)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // r14d
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const GCGControllerShowData *ShowData; // rax
  uint32_t score; // r14d
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  MultiserverApp *v13; // rax
  uint32_t AppId; // eax
  unsigned __int64 v15; // rax
  google::protobuf::uint32 *v16; // rdx
  uint32_t GameId; // eax
  uint32_t GameUid; // eax
  GCGControllerValue Winner; // eax
  google::protobuf::uint32 EndReason; // eax
  uint32_t VerifyCode; // eax
  google::protobuf::uint32 BusinessType; // eax
  GCGStatistics *Statistics; // rax
  google::protobuf::RepeatedField<unsigned int> *v24; // r14
  GCGStatistics *v25; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  google::protobuf::uint32 Now; // eax
  proto::OfflineOpBin *v28; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v29; // r14
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  GCGStatistics *v31; // rax
  google::protobuf::RepeatedField<unsigned int> *v32; // rax
  google::protobuf::RepeatedField<unsigned int> *v33; // r14
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  const std::vector<unsigned int> *ForbidFinishChallengeVec; // rax
  GCGService *v36; // r14
  unsigned __int64 v37; // rdx
  common::minet::Packet *v38; // rax
  common::minet::Packet *v39; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  unsigned __int64 v42; // rax
  unsigned int (__fastcall *v43)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  bool v44; // r14
  common::milog::MiLogStream *v45; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-394h] BYREF
  uint32_t uid_0; // [rsp+20h] [rbp-390h]
  uint32_t uid; // [rsp+24h] [rbp-38Ch]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+28h] [rbp-388h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+30h] [rbp-380h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_uid_map; // [rsp+38h] [rbp-378h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_score_map; // [rsp+40h] [rbp-370h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *controller_map; // [rsp+48h] [rbp-368h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+50h] [rbp-360h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_0; // [rsp+58h] [rbp-358h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *v56; // [rsp+60h] [rbp-350h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id_0; // [rsp+68h] [rbp-348h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr_0; // [rsp+70h] [rbp-340h]
  proto::OfflineOpData *op_data; // [rsp+78h] [rbp-338h]
  proto::OfflineOpGCGSettle *gcg_settle_op; // [rsp+80h] [rbp-330h]
  proto::GCGSettleData *proto_settle_data; // [rsp+88h] [rbp-328h]
  GCGControllerStatistics *statistic_data; // [rsp+90h] [rbp-320h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+98h] [rbp-318h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+A0h] [rbp-310h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+A8h] [rbp-308h]
  common::milog::MiLogStream v66; // [rsp+B0h] [rbp-300h] BYREF
  std::map<unsigned int,unsigned int> map; // [rsp+D0h] [rbp-2E0h] BYREF
  char v68[688]; // [rsp+100h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 16 26 player_controller_ptr:1766 80 16 15 packet_ptr:1786 112 16 26 player_controller_ptr:1"
                        "742 144 40 8 req:1770 224 344 16 settle_data:1734";
  *(_QWORD *)(v1 + 16) = GCGHandler::sendGameSettle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862737] = -218103808;
  v3[536862738] = -202116109;
  v3[536862739] = -202116109;
  proto::GCGSettleData::GCGSettleData((proto::GCGSettleData *const)(v1 + 224));
  proto_uid_map = proto::GCGSettleData::mutable_uid_map((proto::GCGSettleData *const)(v1 + 224));
  proto_score_map = proto::GCGSettleData::mutable_score_map((proto::GCGSettleData *const)(v1 + 224));
  controller_map = GCGGameMode::getControllerMap(game_mode);
  __for_range = controller_map;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(controller_map)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(controller_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 112));
    if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 112), 0LL) )
    {
      v4 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      uid = GCGPlayerController::getPlayerUid(v4);
      v5 = uid;
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      key = *controller_id;
      v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_uid_map, &key);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6);
      }
      *v7 = v5;
      if ( GCGGameMode::getBusinessType(game_mode) == GCG_GAME_MATCH )
      {
        v8 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
        ShowData = GCGControllerBase::getShowData((const GCGControllerBase *const)v8);
        if ( *(_BYTE *)(((unsigned __int64)&ShowData->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&ShowData->score >> 3) + 0x7FFF8000) <= 3 )
        {
          ShowData = (const GCGControllerShowData *)__asan_report_load4(&ShowData->score);
        }
        score = ShowData->score;
        if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(controller_id);
        }
        key = *controller_id;
        v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_score_map, &key);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11);
        }
        *v12 = score;
      }
    }
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 112));
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  v13 = Singleton<MultiserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v13);
  proto::GCGSettleData::set_app_id((proto::GCGSettleData *const)(v1 + 224), AppId);
  v15 = ZTWN11ThreadLocal17work_thread_indexE();
  v16 = (google::protobuf::uint32 *)v15;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)((v15 & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v15);
  proto::GCGSettleData::set_thread_index((proto::GCGSettleData *const)(v1 + 224), *v16);
  GameId = GCGGameMode::getGameId(game_mode);
  proto::GCGSettleData::set_game_id((proto::GCGSettleData *const)(v1 + 224), GameId);
  GameUid = GCGGameMode::getGameUid(game_mode);
  proto::GCGSettleData::set_game_uid((proto::GCGSettleData *const)(v1 + 224), GameUid);
  Winner = GCGGameMode::getWinner(game_mode);
  proto::GCGSettleData::set_winner_controller((proto::GCGSettleData *const)(v1 + 224), Winner);
  EndReason = GCGGameMode::getEndReason(game_mode);
  proto::GCGSettleData::set_reason((proto::GCGSettleData *const)(v1 + 224), EndReason);
  VerifyCode = GCGGameMode::getVerifyCode(game_mode);
  proto::GCGSettleData::set_verify_code((proto::GCGSettleData *const)(v1 + 224), VerifyCode);
  BusinessType = GCGGameMode::getBusinessType(game_mode);
  proto::GCGSettleData::set_business_type((proto::GCGSettleData *const)(v1 + 224), BusinessType);
  Statistics = GCGGameMode::getStatistics(game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&Statistics->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    Statistics = (GCGStatistics *)__asan_report_load4(&Statistics->match_id);
  }
  proto::GCGSettleData::set_match_id((proto::GCGSettleData *const)(v1 + 224), Statistics->match_id);
  v24 = proto::GCGSettleData::mutable_custom_param_list((proto::GCGSettleData *const)(v1 + 224));
  v25 = GCGGameMode::getStatistics(game_mode);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v25->custom_param_vec, v24);
  __for_range_0 = controller_map;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(controller_map)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v56 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id_0 = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(v56);
    controller_ptr_0 = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(v56);
    std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 48));
    if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 48), 0LL) )
    {
      v26 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      uid_0 = GCGPlayerController::getPlayerUid(v26);
      proto::SendGCGOfflineOpReq::SendGCGOfflineOpReq((proto::SendGCGOfflineOpReq *const)(v1 + 144));
      proto::SendGCGOfflineOpReq::set_uid((proto::SendGCGOfflineOpReq *const)(v1 + 144), uid_0);
      Now = common::tools::TimeUtils::getNow();
      proto::SendGCGOfflineOpReq::set_time((proto::SendGCGOfflineOpReq *const)(v1 + 144), Now);
      proto::SendGCGOfflineOpReq::set_op_type((proto::SendGCGOfflineOpReq *const)(v1 + 144), OFFLINE_OP_GCG_SETTLE);
      op_data = proto::SendGCGOfflineOpReq::mutable_op_data((proto::SendGCGOfflineOpReq *const)(v1 + 144));
      v28 = proto::OfflineOpData::mutable_bin(op_data);
      gcg_settle_op = proto::OfflineOpBin::mutable_gcg_settle_op(v28);
      proto_settle_data = proto::OfflineOpGCGSettle::mutable_settle_data(gcg_settle_op);
      proto::GCGSettleData::CopyFrom(proto_settle_data, (const proto::GCGSettleData *)(v1 + 224));
      v29 = proto::GCGSettleData::mutable_challenge_progress_map(proto_settle_data);
      v30 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      GCGPlayerController::getChallengeProgressMap(&map, v30);
      common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        &map,
        v29);
      std::map<unsigned int,unsigned int>::~map(&map);
      v31 = GCGGameMode::getStatistics(game_mode);
      statistic_data = std::map<proto::GCGControllerValue,GCGControllerStatistics>::operator[](
                         &v31->statistics_map,
                         controller_id_0);
      v32 = proto::GCGSettleData::mutable_card_id_list(proto_settle_data);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&statistic_data->card_id_vec, v32);
      v33 = proto::GCGSettleData::mutable_forbid_finish_challenge_list(proto_settle_data);
      v34 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      ForbidFinishChallengeVec = GCGPlayerController::getForbidFinishChallengeVec(v34);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(ForbidFinishChallengeVec, v33);
      if ( *(_BYTE *)(((unsigned __int64)&statistic_data->card_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&statistic_data->card_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&statistic_data->card_group_id);
      }
      proto::GCGSettleData::set_card_group_id(proto_settle_data, statistic_data->card_group_id);
      common::minet::PacketUtils::createPacket<proto::SendGCGOfflineOpReq>((const proto::SendGCGOfflineOpReq *)(v1 + 80));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gcg_handler.cpp",
          "sendGameSettle",
          1789);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v66, (const char (*)[19])"createPacket fails");
        common::milog::MiLogStream::~MiLogStream(&v66);
      }
      else
      {
        v36 = ServiceBox::findService<GCGService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v1 + 112),
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
        ServiceBase::setPacketSource(v36, (common::minet::PacketPtr)__PAIR128__(v37, v1 + 112));
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 112));
        v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        common::minet::Packet::setUserId(v38, uid_0);
        v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        common::minet::Packet::setTargetService(v39, 0x12u);
        v40 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v41 = v40;
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v40);
        v42 = (unsigned __int64)(v41->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v41->_vptr_NetworkMgrBase + 8);
        v43 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v42;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v1 + 112),
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
        v44 = v43(v41, v1 + 112) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 112));
        if ( v44 )
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gcg_handler.cpp",
            "sendGameSettle",
            1798);
          v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v66,
                  (const char (*)[24])"sendPacket fails, cmd: ");
          common::milog::MiLogStream::operator<<<proto::SendOfflineOpReq_CmdId,(proto::SendOfflineOpReq_CmdId*)0>(
            v45,
            &proto::SendOfflineOpReq::CMD_ID);
          common::milog::MiLogStream::~MiLogStream(&v66);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 80));
      proto::SendGCGOfflineOpReq::~SendGCGOfflineOpReq((proto::SendGCGOfflineOpReq *const)(v1 + 144));
    }
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 48));
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  proto::GCGSettleData::~GCGSettleData((proto::GCGSettleData *const)(v1 + 224));
  if ( v68 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1806: range 000000000E18C666-000000000E18CED6
int32_t __cdecl GCGHandler::onServerGCGSkillPreviewAskReq(
        GCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  GCGService *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  GCGSkillLogic *SkillLogic; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  GCGService *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-138h] BYREF
  const proto::ServerGCGSkillPreviewAskReq *req; // [rsp+20h] [rbp-130h]
  proto::ServerGCGSkillPreviewAskRsp *rsp_0; // [rsp+28h] [rbp-128h]
  GCGGameMgr *game_mgr; // [rsp+30h] [rbp-120h]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-110h] BYREF
  char v34[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 8 uid:1808 48 4 18 controller_id:1829 64 16 12 req_ptr:1807 96 16 12 rsp_ptr:1807 128 16 "
                        "18 game_mode_ptr:1812 160 16 19 controller_ptr:1830";
  *(_QWORD *)(v2 + 16) = GCGHandler::onServerGCGSkillPreviewAskReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGCGSkillPreviewAskReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGSkillPreviewAskReq const>(
         (const std::shared_ptr<const proto::ServerGCGSkillPreviewAskReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gcg_handler.cpp",
      "onServerGCGSkillPreviewAskReq",
      1807);
    common::milog::MiLogStream::operator()(&v33, off_1BC8C7C0);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGCGSkillPreviewAskReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGSkillPreviewAskReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerGCGSkillPreviewAskRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerGCGSkillPreviewAskRsp::set_retcode(rsp_0, -1);
    *(_DWORD *)(v2 + 32) = proto::ServerGCGSkillPreviewAskReq::uid(req);
    v6 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v6);
    GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v2 + 128), (uint32_t)game_mgr);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gcg_handler.cpp",
        "onServerGCGSkillPreviewAskReq",
        1815);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v33,
             (const char (*)[47])"[GCG_RET] findRunningGameModeByUid fail. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      game_mode = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( !GCGGameMode::isController(game_mode, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGSkillPreviewAskReq",
          1821);
        v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v33,
               (const char (*)[39])"[GCG_RET] uid is not controller. uid: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" game_uid: ");
        val = GCGGameMode::getGameUid(game_mode);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else if ( !GCGGameMode::isPreviewSwitchOpen(game_mode) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gcg_handler.cpp",
          "onServerGCGSkillPreviewAskReq",
          1826);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v33,
                (const char (*)[33])"[GCG_RET] not open preview, uid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" game_uid:");
        val = GCGGameMode::getGameUid(game_mode);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        *(_DWORD *)(v2 + 48) = GCGGameMode::getControllerId(game_mode, *(_DWORD *)(v2 + 32));
        GCGGameMode::getController<GCGPlayerController>(
          (GCGGameMode *const)(v2 + 160),
          (__int64)game_mode,
          *(_DWORD *)(v2 + 48));
        if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            "onServerGCGSkillPreviewAskReq",
            1833);
          v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v33,
                  (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
          v15 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v14,
                  (const proto::GCGControllerValue *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" game_uid: ");
          val = GCGGameMode::getGameUid(game_mode);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          SkillLogic = GCGGameMode::getSkillLogic(game_mode);
          if ( (unsigned int)GCGSkillLogic::trySendSpecialControllerSkillPreview(
                               SkillLogic,
                               (GCGControllerValue)*(_DWORD *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/gcg_handler.cpp",
              "onServerGCGSkillPreviewAskReq",
              1839);
            v20 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v33,
                    (const char (*)[44])"[GCG_RET] preview not exec. controller_id: ");
            v21 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                    v20,
                    (const proto::GCGControllerValue *)(v2 + 48));
            v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" uid: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v2 + 32));
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])" game_uid: ");
            val = GCGGameMode::getGameUid(game_mode);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
        std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 160));
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v2 + 128));
    proto::ServerGCGSkillPreviewAskRsp::set_retcode(rsp_0, 0);
    v25 = ServiceBox::findService<GCGService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 160),
      p_packet_ptr);
    std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *const)(v2 + 128),
      (const std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::ServerGCGSkillPreviewAskRsp>(
           v25,
           (std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *)(v2 + 128),
           (common::minet::PacketPtr *)(v2 + 160));
    std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *const)(v2 + 128));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
    std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGCGSkillPreviewAskReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGSkillPreviewAskReq> *const)(v2 + 64));
  result = v5;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1850: range 000000000E18D584-000000000E18E0EC
int32_t __cdecl GCGHandler::handleBothAITask(GCGHandler *const this, const GCGBothAIAttackTask *attack_task)
{
  unsigned __int64 p_destroy_uid_map; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t v9; // r14d
  GCGService *v10; // rax
  GCGBothAIMode mode; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // r14
  GCGStatistics *Statistics; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-158h]
  uint32_t card_group1; // [rsp+1Ch] [rbp-154h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+20h] [rbp-150h]
  data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+28h] [rbp-148h]
  GCGGameMgr *game_mgr; // [rsp+30h] [rbp-140h]
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *game_mode; // [rsp+38h] [rbp-138h]
  GCGGameMgr v26; // [rsp+40h] [rbp-130h] BYREF

  p_destroy_uid_map = (unsigned __int64)&v26.destroy_uid_map_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      p_destroy_uid_map = v3;
  }
  *(_QWORD *)p_destroy_uid_map = 1102416563LL;
  *(_QWORD *)(p_destroy_uid_map + 8) = "5 32 4 13 level_id:1854 48 4 16 card_group2:1863 64 16 18 game_mode_ptr:1873 96 1"
                                       "6 31 check_group_config_ai_func:1874 128 16 36 check_group_config_monster_func:1890";
  *(_QWORD *)(p_destroy_uid_map + 16) = GCGHandler::handleBothAITask;
  v4 = (_DWORD *)(p_destroy_uid_map >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gcg_handler.cpp",
    aHandlebothaita[0],
    1851);
  v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
         (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
         "handleBothAITask");
  GCGBothAIAttackTask::getDesc[abi:cxx11]((std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent, attack_task);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    v5,
    (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
  std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&attack_task->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_task + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_task->level_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_task->level_id);
  }
  *(_DWORD *)(p_destroy_uid_map + 32) = attack_task->level_id;
  Config::getConfig();
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_parent)->design_config_.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_parent);
  game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                            gcg_game_config_mgr,
                            *(_DWORD *)(p_destroy_uid_map + 32));
  if ( game_excel_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&attack_task->card_group1_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)attack_task + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_task->card_group1_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&attack_task->card_group1_id);
    }
    card_group1 = attack_task->card_group1_id;
    if ( *(_BYTE *)(((unsigned __int64)&attack_task->card_group2_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_task->card_group2_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&attack_task->card_group2_id);
    }
    *(_DWORD *)(p_destroy_uid_map + 48) = attack_task->card_group2_id;
    if ( !card_group1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->card_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->card_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_excel_config_ptr->card_group_id);
      }
      card_group1 = game_excel_config_ptr->card_group_id;
    }
    if ( !*(_DWORD *)(p_destroy_uid_map + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_excel_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_card_group_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&game_excel_config_ptr->enemy_card_group_id);
      }
      *(_DWORD *)(p_destroy_uid_map + 48) = game_excel_config_ptr->enemy_card_group_id;
    }
    v10 = ServiceBox::findService<GCGService>();
    game_mgr = GCGService::getThreadLocalGameMgr(v10);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)(p_destroy_uid_map + 64), 0LL);
    *(_QWORD *)(p_destroy_uid_map + 96) = attack_task;
    *(_QWORD *)(p_destroy_uid_map + 104) = gcg_game_config_mgr;
    *(_QWORD *)(p_destroy_uid_map + 128) = attack_task;
    *(_QWORD *)(p_destroy_uid_map + 136) = gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&attack_task->mode >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_task->mode >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&attack_task->mode);
    }
    mode = attack_task->mode;
    if ( mode == GCG_BOTH_AI_MODE_PVP )
    {
      if ( !GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#1}::operator()(
              (const GCGHandler::handleBothAITask::<lambda(uint32_t)> *const)(p_destroy_uid_map + 96),
              card_group1) )
      {
        ret = -1;
      }
      else if ( !GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#1}::operator()(
                   (const GCGHandler::handleBothAITask::<lambda(uint32_t)> *const)(p_destroy_uid_map + 96),
                   *(_DWORD *)(p_destroy_uid_map + 48)) )
      {
        ret = -1;
      }
      else
      {
        GCGGameMgr::createBothAIGameMode(
          &v26,
          (uint32_t)game_mgr,
          *(_DWORD *)(p_destroy_uid_map + 32),
          card_group1,
          (const GCGBothAIAttackTask *)*(unsigned int *)(p_destroy_uid_map + 48),
          (GCGGameBusinessType)attack_task);
        std::shared_ptr<GCGGameMode>::operator=(
          (std::shared_ptr<GCGGameMode> *const)(p_destroy_uid_map + 64),
          (std::shared_ptr<GCGGameMode> *)&v26);
        std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)&v26);
      }
    }
    else if ( mode == GCG_BOTH_AI_MODE_PVE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_excel_config_ptr->game_type);
      }
      if ( game_excel_config_ptr->game_type == PVE )
      {
        if ( card_group1 )
        {
          if ( !GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#1}::operator()(
                  (const GCGHandler::handleBothAITask::<lambda(uint32_t)> *const)(p_destroy_uid_map + 96),
                  card_group1) )
          {
            ret = -1;
          }
          else if ( !GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#2}::operator()(
                       (const GCGHandler::handleBothAITask::<lambda(uint32_t)> *const)(p_destroy_uid_map + 128),
                       *(_DWORD *)(p_destroy_uid_map + 48)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gcg_handler.cpp",
              aHandlebothaita[0],
              1948);
            v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    (common::milog::MiLogStream *const)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
                    (const char (*)[13])"card_group2:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(p_destroy_uid_map + 48));
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v15,
              (const char (*)[27])" not config advanture rule");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
            ret = -1;
          }
          else
          {
            GCGGameMgr::createAIAndPVEGameMode(
              (GCGGameMgr *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_parent,
              (GCGGameModeParam *)game_mgr,
              *(_DWORD *)(p_destroy_uid_map + 32),
              card_group1,
              (const GCGBothAIAttackTask *)*(unsigned int *)(p_destroy_uid_map + 48),
              attack_task,
              GCG_GAME_GM);
            std::shared_ptr<GCGGameMode>::operator=(
              (std::shared_ptr<GCGGameMode> *const)(p_destroy_uid_map + 64),
              (std::shared_ptr<GCGGameMode> *)&v26.game_mode_map_._M_t._M_impl._M_header._M_parent);
            std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_parent);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gcg_handler.cpp",
            aHandlebothaita[0],
            1936);
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
                  (const char (*)[15])"group1 is zero");
          GCGBothAIAttackTask::getDesc[abi:cxx11](
            (std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
            attack_task);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v13,
            (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
          std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
          ret = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gcg_handler.cpp",
          aHandlebothaita[0],
          1929);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
                (const char (*)[14])"level not pve");
        GCGBothAIAttackTask::getDesc[abi:cxx11](
          (std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
          attack_task);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v12,
          (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
        std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
        ret = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        aHandlebothaita[0],
        1957);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
              (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
              (const char (*)[15])"mode not valid");
      GCGBothAIAttackTask::getDesc[abi:cxx11](
        (std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
        attack_task);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v16,
        (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
      std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
      ret = -1;
    }
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(p_destroy_uid_map + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gcg_handler.cpp",
        aHandlebothaita[0],
        1964);
      v17 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
              (const char (*)[25])"game_mode_ptr is nullptr");
      GCGBothAIAttackTask::getDesc[abi:cxx11](
        (std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent,
        attack_task);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v17,
        (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
      std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
      v9 = -1;
    }
    else
    {
      game_mode = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_destroy_uid_map + 64));
      Statistics = GCGGameMode::getStatistics(game_mode);
      GCGStatistics::setTaskInfo(Statistics, attack_task);
      GCGGameMode::start(game_mode);
      v9 = ret;
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(p_destroy_uid_map + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      aHandlebothaita[0],
      1859);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right,
           (const char (*)[12])"find level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           (const unsigned int *)(p_destroy_uid_map + 32));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" failed");
    GCGBothAIAttackTask::getDesc[abi:cxx11]((std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent, attack_task);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v8,
      (const std::string *)&v26.uid_map_._M_t._M_impl._M_header._M_parent);
    std::string::~string(&v26.uid_map_._M_t._M_impl._M_header._M_parent);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26.game_mode_map_._M_t._M_impl._M_header._M_right);
    v9 = -1;
  }
  result = v9;
  if ( &v26.destroy_uid_map_ == (std::map<unsigned int,unsigned int> *)p_destroy_uid_map )
  {
    *(_QWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)p_destroy_uid_map = 1172321806LL;
    *(_QWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_destroy_uid_map >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1874: range 000000000E18CED8-000000000E18D214
__int64 __fastcall GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t card_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  data::GCGDeckExcelConfig *card_group_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  std::string val; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 card_group_id:1874";
  *(_QWORD *)(v2 + 16) = GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_group_id;
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  card_group_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                            *(data::GCGGameExcelConfigMgrBase *const *)(__closure + 8),
                            *(_DWORD *)(v2 + 32));
  if ( !card_group_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      "operator()",
      1879);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"card group config not find:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
LABEL_9:
    GCGBothAIAttackTask::getDesc[abi:cxx11](&val, *(const GCGBothAIAttackTask *const *)__closure);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
    goto LABEL_15;
  }
  if ( (unsigned __int8)std::string::empty(&card_group_config_ptr->behavior_tree_file_name) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      "operator()",
      1884);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v10,
           (const char (*)[31])"card group not have ai config:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    goto LABEL_9;
  }
  result = 1LL;
LABEL_15:
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

// Line 1890: range 000000000E18D216-000000000E18D582
__int64 __fastcall GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#2}::operator()(
        unsigned __int64 __closure,
        uint32_t card_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  data::GCGDeckExcelConfig *card_group_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  std::string val; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 card_group_id:1890";
  *(_QWORD *)(v2 + 16) = GCGHandler::handleBothAITask(GCGBothAIAttackTask const&)::{lambda(unsigned int)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_group_id;
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  card_group_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                            *(data::GCGGameExcelConfigMgrBase *const *)(__closure + 8),
                            *(_DWORD *)(v2 + 32));
  if ( !card_group_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      "operator()",
      1895);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"card group config not find:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
LABEL_9:
    GCGBothAIAttackTask::getDesc[abi:cxx11](&val, *(const GCGBothAIAttackTask *const *)__closure);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->advanture_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_group_config_ptr->advanture_rule_id);
  }
  if ( !card_group_config_ptr->advanture_rule_id )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gcg_handler.cpp",
      "operator()",
      1900);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v10,
           (const char (*)[38])"card group not have advanture config:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    goto LABEL_9;
  }
  result = 1LL;
LABEL_17:
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

// Line 1971: range 000000000E1CD89E-000000000E1CD8B2
void __cdecl GLOBAL__sub_I_merge_merge_subtree_node_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1971: range 000000000E1B4E66-000000000E1CD89D
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
