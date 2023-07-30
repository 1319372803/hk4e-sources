// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_gcg_handler.cpp

// Line 34: range 00000000168AACB0-00000000168AE30F
int32_t __cdecl PlayerGCGHandler::addPacketFuncToMap(
        PlayerGCGHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  PlayerGCGHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  PlayerGCGHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  PlayerGCGHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  PlayerGCGHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  PlayerGCGHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  PlayerGCGHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  PlayerGCGHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  PlayerGCGHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  PlayerGCGHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  PlayerGCGHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  PlayerGCGHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  PlayerGCGHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  PlayerGCGHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  PlayerGCGHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  PlayerGCGHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  PlayerGCGHandler **v48; // r8
  const std::_Placeholder<1> *v49; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  PlayerGCGHandler **v51; // r8
  const std::_Placeholder<1> *v52; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v53; // rax
  PlayerGCGHandler **v54; // r8
  const std::_Placeholder<1> *v55; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v56; // rax
  PlayerGCGHandler **v57; // r8
  const std::_Placeholder<1> *v58; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v59; // rax
  PlayerGCGHandler **v60; // r8
  const std::_Placeholder<1> *v61; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v62; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v63; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v65; // rax
  PlayerGCGHandler **v66; // r8
  const std::_Placeholder<1> *v67; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v68; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v69; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v70; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v71; // rax
  PlayerGCGHandler **v72; // r8
  const std::_Placeholder<1> *v73; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v74; // rax
  PlayerGCGHandler **v75; // r8
  const std::_Placeholder<1> *v76; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v77; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v78; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v79; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v80; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v81; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v82; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v83; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v84; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v85; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v86; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v87; // rax
  __m128i v88; // [rsp+0h] [rbp-200h] BYREF
  __m128i v89; // [rsp+10h] [rbp-1F0h] BYREF
  __m128i v90; // [rsp+20h] [rbp-1E0h] BYREF
  __m128i v91; // [rsp+30h] [rbp-1D0h] BYREF
  __m128i v92; // [rsp+40h] [rbp-1C0h] BYREF
  __m128i v93; // [rsp+50h] [rbp-1B0h] BYREF
  __m128i v94; // [rsp+60h] [rbp-1A0h] BYREF
  __m128i v95; // [rsp+70h] [rbp-190h] BYREF
  __m128i v96; // [rsp+80h] [rbp-180h] BYREF
  __m128i v97; // [rsp+90h] [rbp-170h] BYREF
  __m128i v98; // [rsp+A0h] [rbp-160h] BYREF
  __m128i v99; // [rsp+B0h] [rbp-150h] BYREF
  __m128i v100; // [rsp+C0h] [rbp-140h] BYREF
  __m128i v101; // [rsp+D0h] [rbp-130h] BYREF
  __m128i v102; // [rsp+E0h] [rbp-120h] BYREF
  __m128i v103; // [rsp+F0h] [rbp-110h] BYREF
  __m128i v104; // [rsp+100h] [rbp-100h] BYREF
  __m128i v105; // [rsp+110h] [rbp-F0h] BYREF
  __m128i v106; // [rsp+120h] [rbp-E0h] BYREF
  __m128i v107; // [rsp+130h] [rbp-D0h] BYREF
  __m128i v108; // [rsp+140h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+150h] [rbp-B0h]
  PlayerGCGHandler *thisa; // [rsp+158h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+16Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v112; // [rsp+170h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+178h] [rbp-88h] BYREF
  int (*__f[2])(PlayerGCGHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+180h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,const std::_Placeholder<1>&>::type v115; // [rsp+190h] [rbp-70h] BYREF
  common::milog::MiLogStream v116; // [rsp+1B0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 7107;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v112, &__y) )
  {
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/player_gcg_handler.cpp",
      "addPacketFuncToMap",
      36);
    common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7107LL);
    common::milog::MiLogStream::~MiLogStream(&v116);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(PlayerGCGHandler *, std::shared_ptr<common::minet::Packet>))PlayerGCGHandler::onGCGOperationReq;
    __f[1] = 0LL;
    std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
      &v115,
      __f,
      (PlayerGCGHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 7107;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
      v5,
      &v115);
    __x = 7237;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v112, &__y) )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_gcg_handler.cpp",
        "addPacketFuncToMap",
        37);
      common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7237LL);
      common::milog::MiLogStream::~MiLogStream(&v116);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(PlayerGCGHandler *, std::shared_ptr<common::minet::Packet>))PlayerGCGHandler::onGCGAskDuelReq;
      __f[1] = 0LL;
      std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
        &v115,
        __f,
        (PlayerGCGHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 7237;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
        v8,
        &v115);
      __x = 7684;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v112, &__y) )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/player_gcg_handler.cpp",
          "addPacketFuncToMap",
          38);
        common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7684LL);
        common::milog::MiLogStream::~MiLogStream(&v116);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v88.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGInitFinishReq;
        v88.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v88);
        std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
          &v115,
          __f,
          (PlayerGCGHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 7684;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
          v11,
          &v115);
        __x = 7509;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v112, &__y) )
        {
          common::milog::MiLogStream::create(
            &v116,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/player_gcg_handler.cpp",
            "addPacketFuncToMap",
            39);
          common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7509LL);
          common::milog::MiLogStream::~MiLogStream(&v116);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v89.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGSkillPreviewAskReq;
          v89.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v89);
          std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
            &v115,
            __f,
            (PlayerGCGHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 7509;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
            v14,
            &v115);
          __x = 12360;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v112, &__y) )
          {
            common::milog::MiLogStream::create(
              &v116,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/player_gcg_handler.cpp",
              "addPacketFuncToMap",
              42);
            common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12360LL);
            common::milog::MiLogStream::~MiLogStream(&v116);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v90.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGNewGameInfoNotify;
            v90.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v90);
            std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
              &v115,
              __f,
              (PlayerGCGHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 12360;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
              v17,
              &v115);
            __x = 12338;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v112, &__y) )
            {
              common::milog::MiLogStream::create(
                &v116,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/player_gcg_handler.cpp",
                "addPacketFuncToMap",
                43);
              common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12338LL);
              common::milog::MiLogStream::~MiLogStream(&v116);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v91.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGGMCommandRsp;
              v91.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v91);
              std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                &v115,
                __f,
                (PlayerGCGHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 12338;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                v20,
                &v115);
              __x = 12328;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v112, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v116,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/player_gcg_handler.cpp",
                  "addPacketFuncToMap",
                  44);
                common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12328LL);
                common::milog::MiLogStream::~MiLogStream(&v116);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v92.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGSyncRsp;
                v92.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v92);
                std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                  &v115,
                  __f,
                  (PlayerGCGHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 12328;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v115);
                __x = 12492;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v112, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v116,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/player_gcg_handler.cpp",
                    "addPacketFuncToMap",
                    45);
                  common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12492LL);
                  common::milog::MiLogStream::~MiLogStream(&v116);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v93.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGGiveUpGameRsp;
                  v93.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v93);
                  std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                    &v115,
                    __f,
                    (PlayerGCGHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 12492;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v115);
                  __x = 12477;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v112, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v116,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/player_gcg_handler.cpp",
                      "addPacketFuncToMap",
                      46);
                    common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12477LL);
                    common::milog::MiLogStream::~MiLogStream(&v116);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v94.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGSkillPreviewAskRsp;
                    v94.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v94);
                    std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                      &v115,
                      __f,
                      (PlayerGCGHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 12477;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v115);
                    __x = 12308;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v112, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v116,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/player_gcg_handler.cpp",
                        "addPacketFuncToMap",
                        47);
                      common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12308LL);
                      common::milog::MiLogStream::~MiLogStream(&v116);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v95.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGCreateSingleGameRsp;
                      v95.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v95);
                      std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                        &v115,
                        __f,
                        (PlayerGCGHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 12308;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v115);
                      __x = 12490;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v112, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v116,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/player_gcg_handler.cpp",
                          "addPacketFuncToMap",
                          48);
                        common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12490LL);
                        common::milog::MiLogStream::~MiLogStream(&v116);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v96.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGCreateMultiGameRsp;
                        v96.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v96);
                        std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                          &v115,
                          __f,
                          (PlayerGCGHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 12490;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v115);
                        __x = 12329;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v112, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v116,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/player_gcg_handler.cpp",
                            "addPacketFuncToMap",
                            49);
                          common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12329LL);
                          common::milog::MiLogStream::~MiLogStream(&v116);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v97.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGMatchFinishNotify;
                          v97.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v97);
                          std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                            &v115,
                            __f,
                            (PlayerGCGHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v36,
                            v37);
                          __x = 12329;
                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                            v38,
                            &v115);
                          __x = 12309;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v112, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v116,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/player_gcg_handler.cpp",
                              "addPacketFuncToMap",
                              50);
                            common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12309LL);
                            common::milog::MiLogStream::~MiLogStream(&v116);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v98.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGBackToDuelRsp;
                            v98.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v98);
                            std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                              &v115,
                              __f,
                              (PlayerGCGHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v39,
                              v40);
                            __x = 12309;
                            v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                              v41,
                              &v115);
                            __x = 7600;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v112, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v116,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/player_gcg_handler.cpp",
                                "addPacketFuncToMap",
                                52);
                              common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7600LL);
                              common::milog::MiLogStream::~MiLogStream(&v116);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v99.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGOperationRsp;
                              v99.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v99);
                              std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                &v115,
                                __f,
                                (PlayerGCGHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v42,
                                v43);
                              __x = 7600;
                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                v44,
                                &v115);
                              __x = 7869;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v112, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v116,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/player_gcg_handler.cpp",
                                  "addPacketFuncToMap",
                                  53);
                                common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7869LL);
                                common::milog::MiLogStream::~MiLogStream(&v116);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v100.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGAskDuelRsp;
                                v100.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v100);
                                std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                  &v115,
                                  __f,
                                  (PlayerGCGHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v45,
                                  v46);
                                __x = 7869;
                                v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                  v47,
                                  &v115);
                                __x = 7433;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v112, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v116,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/player_gcg_handler.cpp",
                                    "addPacketFuncToMap",
                                    54);
                                  common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7433LL);
                                  common::milog::MiLogStream::~MiLogStream(&v116);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v101.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGInitFinishRsp;
                                  v101.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v101);
                                  std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                    &v115,
                                    __f,
                                    (PlayerGCGHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v48,
                                    v49);
                                  __x = 7433;
                                  v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                    v50,
                                    &v115);
                                  __x = 12463;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v112, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v116,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/player_gcg_handler.cpp",
                                      "addPacketFuncToMap",
                                      57);
                                    common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12463LL);
                                    common::milog::MiLogStream::~MiLogStream(&v116);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v102.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGMessagePackNotify;
                                    v102.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v102);
                                    std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                      &v115,
                                      __f,
                                      (PlayerGCGHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v51,
                                      v52);
                                    __x = 12463;
                                    v53 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                      v53,
                                      &v115);
                                    __x = 12405;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v112, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v116,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/player_gcg_handler.cpp",
                                        "addPacketFuncToMap",
                                        58);
                                      common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12405LL);
                                      common::milog::MiLogStream::~MiLogStream(&v116);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v103.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGHeartBeatNotify;
                                      v103.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v103);
                                      std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                        &v115,
                                        __f,
                                        (PlayerGCGHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v54,
                                        v55);
                                      __x = 12405;
                                      v56 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                        v56,
                                        &v115);
                                      __x = 12414;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v112, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v116,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/player_gcg_handler.cpp",
                                          "addPacketFuncToMap",
                                          59);
                                        common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12414LL);
                                        common::milog::MiLogStream::~MiLogStream(&v116);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v104.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGSkillPreviewNotify;
                                        v104.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v104);
                                        std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                          &v115,
                                          __f,
                                          (PlayerGCGHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v57,
                                          v58);
                                        __x = 12414;
                                        v59 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                          v59,
                                          &v115);
                                        __x = 12332;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v112, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v116,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/player_gcg_handler.cpp",
                                            "addPacketFuncToMap",
                                            60);
                                          common::milog::MiLogStream::operator()(&v116, off_25E0B640, 12332LL);
                                          common::milog::MiLogStream::~MiLogStream(&v116);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v105.m128i_i64[0] = (__int64)PlayerGCGHandler::onServerGCGChallengeUpdateNotify;
                                          v105.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v105);
                                          std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                            &v115,
                                            __f,
                                            (PlayerGCGHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v60,
                                            v61);
                                          __x = 12332;
                                          v62 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                            v62,
                                            &v115);
                                          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                            __asan_report_load8();
                                          if ( Player::addMsgForwardClient(thisa->player_, 0x1EFCu) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v116,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/player_gcg_handler.cpp",
                                              "addPacketFuncToMap",
                                              62);
                                            common::milog::MiLogStream::operator()(&v116, off_25E180A0, 7932LL);
                                            common::milog::MiLogStream::~MiLogStream(&v116);
                                            return -1;
                                          }
                                          else
                                          {
                                            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                              __asan_report_load8();
                                            if ( Player::addMsgForwardClient(thisa->player_, 0x1DF2u) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v116,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/player_gcg_handler.cpp",
                                                "addPacketFuncToMap",
                                                63);
                                              common::milog::MiLogStream::operator()(&v116, off_25E18100, 7666LL);
                                              common::milog::MiLogStream::~MiLogStream(&v116);
                                              return -1;
                                            }
                                            else
                                            {
                                              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                                __asan_report_load8();
                                              if ( Player::addMsgForwardClient(thisa->player_, 0x1C47u) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v116,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/player_gcg_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  64);
                                                common::milog::MiLogStream::operator()(&v116, off_25E18160, 7239LL);
                                                common::milog::MiLogStream::~MiLogStream(&v116);
                                                return -1;
                                              }
                                              else
                                              {
                                                __x = 7876;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v112, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v116,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/player_gcg_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    67);
                                                  common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7876LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v116);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  __x = 7876;
                                                  v63 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
                                                    v63,
                                                    (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                  __x = 7506;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v112, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v116,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/player_gcg_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      68);
                                                    common::milog::MiLogStream::operator()(&v116, off_25E0B640, 7506LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v116);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    __x = 7506;
                                                    v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
                                                      v64,
                                                      (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                    __x = 7124;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v112, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v116,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/player_gcg_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        69);
                                                      common::milog::MiLogStream::operator()(
                                                        &v116,
                                                        off_25E0B640,
                                                        7124LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v116);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      __x = 7124;
                                                      v65 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
                                                        v65,
                                                        (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                      __x = 7729;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v112, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v116,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/player_gcg_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          70);
                                                        common::milog::MiLogStream::operator()(
                                                          &v116,
                                                          off_25E0B640,
                                                          7729LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v116);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        v106.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGBackToDuelReq;
                                                        v106.m128i_i64[1] = 0LL;
                                                        *(__m128i *)__f = _mm_load_si128(&v106);
                                                        std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                                          &v115,
                                                          __f,
                                                          (PlayerGCGHandler **)&__y,
                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                          v66,
                                                          v67);
                                                        __x = 7729;
                                                        v68 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                                          v68,
                                                          &v115);
                                                        __x = 7169;
                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                        process_packet_func_mapa,
                                                                        &__x)._M_node;
                                                        v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                        if ( std::operator!=(&v112, &__y) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            &v116,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/handler/player_gcg_handler.cpp",
                                                            "addPacketFuncToMap",
                                                            73);
                                                          common::milog::MiLogStream::operator()(
                                                            &v116,
                                                            off_25E0B640,
                                                            7169LL);
                                                          common::milog::MiLogStream::~MiLogStream(&v116);
                                                          return -1;
                                                        }
                                                        else
                                                        {
                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                          __x = 7169;
                                                          v69 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                  process_packet_func_mapa,
                                                                  &__x);
                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                                                            v69,
                                                            (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                          __x = 7292;
                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                          process_packet_func_mapa,
                                                                          &__x)._M_node;
                                                          v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                          if ( std::operator!=(&v112, &__y) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              &v116,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/handler/player_gcg_handler.cpp",
                                                              "addPacketFuncToMap",
                                                              74);
                                                            common::milog::MiLogStream::operator()(
                                                              &v116,
                                                              off_25E0B640,
                                                              7292LL);
                                                            common::milog::MiLogStream::~MiLogStream(&v116);
                                                            return -1;
                                                          }
                                                          else
                                                          {
                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                            __x = 7292;
                                                            v70 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                    process_packet_func_mapa,
                                                                    &__x);
                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                                                              v70,
                                                              (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                            __x = 7541;
                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                            process_packet_func_mapa,
                                                                            &__x)._M_node;
                                                            v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                            if ( std::operator!=(&v112, &__y) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                &v116,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/handler/player_gcg_handler.cpp",
                                                                "addPacketFuncToMap",
                                                                75);
                                                              common::milog::MiLogStream::operator()(
                                                                &v116,
                                                                off_25E0B640,
                                                                7541LL);
                                                              common::milog::MiLogStream::~MiLogStream(&v116);
                                                              return -1;
                                                            }
                                                            else
                                                            {
                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                              __x = 7541;
                                                              v71 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                      process_packet_func_mapa,
                                                                      &__x);
                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                                                                v71,
                                                                (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                              __x = 7432;
                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                              process_packet_func_mapa,
                                                                              &__x)._M_node;
                                                              v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                              if ( std::operator!=(&v112, &__y) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  &v116,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/handler/player_gcg_handler.cpp",
                                                                  "addPacketFuncToMap",
                                                                  76);
                                                                common::milog::MiLogStream::operator()(
                                                                  &v116,
                                                                  off_25E0B640,
                                                                  7432LL);
                                                                common::milog::MiLogStream::~MiLogStream(&v116);
                                                                return -1;
                                                              }
                                                              else
                                                              {
                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                v107.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGDSChangeDeckNameReq;
                                                                v107.m128i_i64[1] = 0LL;
                                                                *(__m128i *)__f = _mm_load_si128(&v107);
                                                                std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                                                  &v115,
                                                                  __f,
                                                                  (PlayerGCGHandler **)&__y,
                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                  v72,
                                                                  v73);
                                                                __x = 7432;
                                                                v74 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                        process_packet_func_mapa,
                                                                        &__x);
                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                                                  v74,
                                                                  &v115);
                                                                __x = 7104;
                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                process_packet_func_mapa,
                                                                                &__x)._M_node;
                                                                v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                if ( std::operator!=(&v112, &__y) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    &v116,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/handler/player_gcg_handler.cpp",
                                                                    "addPacketFuncToMap",
                                                                    77);
                                                                  common::milog::MiLogStream::operator()(
                                                                    &v116,
                                                                    off_25E0B640,
                                                                    7104LL);
                                                                  common::milog::MiLogStream::~MiLogStream(&v116);
                                                                  return -1;
                                                                }
                                                                else
                                                                {
                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                  v108.m128i_i64[0] = (__int64)PlayerGCGHandler::onGCGDSDeckSaveReq;
                                                                  v108.m128i_i64[1] = 0LL;
                                                                  *(__m128i *)__f = _mm_load_si128(&v108);
                                                                  std::bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerGCGHandler*,std::_Placeholder<1> const&>(
                                                                    &v115,
                                                                    __f,
                                                                    (PlayerGCGHandler **)&__y,
                                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                    v75,
                                                                    v76);
                                                                  __x = 7104;
                                                                  v77 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                          process_packet_func_mapa,
                                                                          &__x);
                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerGCGHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerGCGHandler*,std::_Placeholder<1>)>>(
                                                                    v77,
                                                                    &v115);
                                                                  __x = 7131;
                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                  process_packet_func_mapa,
                                                                                  &__x)._M_node;
                                                                  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                  if ( std::operator!=(&v112, &__y) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      &v116,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/handler/player_gcg_handler.cpp",
                                                                      "addPacketFuncToMap",
                                                                      78);
                                                                    common::milog::MiLogStream::operator()(
                                                                      &v116,
                                                                      off_25E0B640,
                                                                      7131LL);
                                                                    common::milog::MiLogStream::~MiLogStream(&v116);
                                                                    return -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                    __x = 7131;
                                                                    v78 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                            process_packet_func_mapa,
                                                                            &__x);
                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                                                                      v78,
                                                                      (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                    __x = 7988;
                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                    process_packet_func_mapa,
                                                                                    &__x)._M_node;
                                                                    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                    if ( std::operator!=(&v112, &__y) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        &v116,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/handler/player_gcg_handler.cpp",
                                                                        "addPacketFuncToMap",
                                                                        79);
                                                                      common::milog::MiLogStream::operator()(
                                                                        &v116,
                                                                        off_25E0B640,
                                                                        7988LL);
                                                                      common::milog::MiLogStream::~MiLogStream(&v116);
                                                                      return -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                      __x = 7988;
                                                                      v79 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                              process_packet_func_mapa,
                                                                              &__x);
                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                                                                        v79,
                                                                        (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                      __x = 7581;
                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                      process_packet_func_mapa,
                                                                                      &__x)._M_node;
                                                                      v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                      if ( std::operator!=(&v112, &__y) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          &v116,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/handler/player_gcg_handler.cpp",
                                                                          "addPacketFuncToMap",
                                                                          80);
                                                                        common::milog::MiLogStream::operator()(
                                                                          &v116,
                                                                          off_25E0B640,
                                                                          7581LL);
                                                                        common::milog::MiLogStream::~MiLogStream(&v116);
                                                                        return -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                        __x = 7581;
                                                                        v80 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                process_packet_func_mapa,
                                                                                &__x);
                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                                                                          v80,
                                                                          (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                        __x = 7922;
                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                        process_packet_func_mapa,
                                                                                        &__x)._M_node;
                                                                        v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                        if ( std::operator!=(&v112, &__y) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            &v116,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/handler/player_gcg_handler.cpp",
                                                                            "addPacketFuncToMap",
                                                                            83);
                                                                          common::milog::MiLogStream::operator()(
                                                                            &v116,
                                                                            off_25E0B640,
                                                                            7922LL);
                                                                          common::milog::MiLogStream::~MiLogStream(&v116);
                                                                          return -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                          __x = 7922;
                                                                          v81 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                  process_packet_func_mapa,
                                                                                  &__x);
                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                                                                            v81,
                                                                            (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                          __x = 7051;
                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                          process_packet_func_mapa,
                                                                                          &__x)._M_node;
                                                                          v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                          if ( std::operator!=(&v112, &__y) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              &v116,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/handler/player_gcg_handler.cpp",
                                                                              "addPacketFuncToMap",
                                                                              86);
                                                                            common::milog::MiLogStream::operator()(
                                                                              &v116,
                                                                              off_25E0B640,
                                                                              7051LL);
                                                                            common::milog::MiLogStream::~MiLogStream(&v116);
                                                                            return -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                            __x = 7051;
                                                                            v82 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                    process_packet_func_mapa,
                                                                                    &__x);
                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                                                                              v82,
                                                                              (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                            __x = 7783;
                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                            process_packet_func_mapa,
                                                                                            &__x)._M_node;
                                                                            v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                            if ( std::operator!=(&v112, &__y) )
                                                                            {
                                                                              common::milog::MiLogStream::create(
                                                                                &v116,
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/handler/player_gcg_handler.cpp",
                                                                                "addPacketFuncToMap",
                                                                                88);
                                                                              common::milog::MiLogStream::operator()(
                                                                                &v116,
                                                                                off_25E0B640,
                                                                                7783LL);
                                                                              common::milog::MiLogStream::~MiLogStream(&v116);
                                                                              return -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                              __x = 7783;
                                                                              v83 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                      process_packet_func_mapa,
                                                                                      &__x);
                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                                                                                v83,
                                                                                (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                              __x = 7730;
                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                              process_packet_func_mapa,
                                                                                              &__x)._M_node;
                                                                              v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                              if ( std::operator!=(&v112, &__y) )
                                                                              {
                                                                                common::milog::MiLogStream::create(
                                                                                  &v116,
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  4u,
                                                                                  "./src/handler/player_gcg_handler.cpp",
                                                                                  "addPacketFuncToMap",
                                                                                  89);
                                                                                common::milog::MiLogStream::operator()(
                                                                                  &v116,
                                                                                  off_25E0B640,
                                                                                  7730LL);
                                                                                common::milog::MiLogStream::~MiLogStream(&v116);
                                                                                return -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                __x = 7730;
                                                                                v84 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                        process_packet_func_mapa,
                                                                                        &__x);
                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                                                                                  v84,
                                                                                  (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                __x = 7206;
                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                process_packet_func_mapa,
                                                                                                &__x)._M_node;
                                                                                v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                if ( std::operator!=(&v112, &__y) )
                                                                                {
                                                                                  common::milog::MiLogStream::create(
                                                                                    &v116,
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/handler/player_gcg_handler.cpp",
                                                                                    "addPacketFuncToMap",
                                                                                    90);
                                                                                  common::milog::MiLogStream::operator()(
                                                                                    &v116,
                                                                                    off_25E0B640,
                                                                                    7206LL);
                                                                                  common::milog::MiLogStream::~MiLogStream(&v116);
                                                                                  return -1;
                                                                                }
                                                                                else
                                                                                {
                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                  __x = 7206;
                                                                                  v85 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                          process_packet_func_mapa,
                                                                                          &__x);
                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                                                                    v85,
                                                                                    (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                  __x = 7595;
                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                  process_packet_func_mapa,
                                                                                                  &__x)._M_node;
                                                                                  v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                  if ( std::operator!=(&v112, &__y) )
                                                                                  {
                                                                                    common::milog::MiLogStream::create(
                                                                                      &v116,
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/handler/player_gcg_handler.cpp",
                                                                                      "addPacketFuncToMap",
                                                                                      93);
                                                                                    common::milog::MiLogStream::operator()(
                                                                                      &v116,
                                                                                      off_25E0B640,
                                                                                      7595LL);
                                                                                    common::milog::MiLogStream::~MiLogStream(&v116);
                                                                                    return -1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                    __x = 7595;
                                                                                    v86 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                            process_packet_func_mapa,
                                                                                            &__x);
                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                                                                      v86,
                                                                                      (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                    __x = 7778;
                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                    process_packet_func_mapa,
                                                                                                    &__x)._M_node;
                                                                                    v112._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                    if ( std::operator!=(&v112, &__y) )
                                                                                    {
                                                                                      common::milog::MiLogStream::create(
                                                                                        &v116,
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/handler/player_gcg_handler.cpp",
                                                                                        "addPacketFuncToMap",
                                                                                        94);
                                                                                      common::milog::MiLogStream::operator()(
                                                                                        &v116,
                                                                                        off_25E0B640,
                                                                                        7778LL);
                                                                                      common::milog::MiLogStream::~MiLogStream(&v116);
                                                                                      return -1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                      __x = 7778;
                                                                                      v87 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                              process_packet_func_mapa,
                                                                                              &__x);
                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                                                                        v87,
                                                                                        (PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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

// Line 67: range 00000000168A7C0A-00000000168A7DEC
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGResourceStateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:67";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGResourceStateNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGResourceStateNotify const>(
         (const std::shared_ptr<const proto::GCGResourceStateNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      67);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::GCGResourceStateNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGResourceStateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerGCGHandler::onGCGResourceStateNotify(this, v7);
  }
  std::shared_ptr<proto::GCGResourceStateNotify const>::~shared_ptr((std::shared_ptr<const proto::GCGResourceStateNotify> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 68: range 00000000168A7DEE-00000000168A810A
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGClientSettleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGClientSettleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGClientSettleRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:68 64 16 10 rsp_ptr:68";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGClientSettleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGClientSettleReq const>(
         (const std::shared_ptr<const proto::GCGClientSettleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      68);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGClientSettleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGClientSettleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGClientSettleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGClientSettleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGClientSettleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGClientSettleRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGClientSettleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGClientSettleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGClientSettleReq(this, v8, rsp_0);
    proto::GCGClientSettleRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGClientSettleRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGClientSettleRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGClientSettleRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGClientSettleRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGClientSettleRsp>::~shared_ptr((std::shared_ptr<proto::GCGClientSettleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGClientSettleReq const>::~shared_ptr((std::shared_ptr<const proto::GCGClientSettleReq> *const)(v2 + 32));
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

// Line 69: range 00000000168A810C-00000000168A8428
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGSettleOptionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGSettleOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGSettleOptionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:69 64 16 10 rsp_ptr:69";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGSettleOptionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGSettleOptionReq const>(
         (const std::shared_ptr<const proto::GCGSettleOptionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      69);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGSettleOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGSettleOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGSettleOptionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGSettleOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGSettleOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGSettleOptionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGSettleOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGSettleOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGSettleOptionReq(this, v8, rsp_0);
    proto::GCGSettleOptionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGSettleOptionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGSettleOptionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGSettleOptionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGSettleOptionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGSettleOptionRsp>::~shared_ptr((std::shared_ptr<proto::GCGSettleOptionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGSettleOptionReq const>::~shared_ptr((std::shared_ptr<const proto::GCGSettleOptionReq> *const)(v2 + 32));
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

// Line 73: range 00000000168A842A-00000000168A8746
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSChangeCardFaceReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSChangeCardFaceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSChangeCardFaceRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:73 64 16 10 rsp_ptr:73";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSChangeCardFaceReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSChangeCardFaceReq const>(
         (const std::shared_ptr<const proto::GCGDSChangeCardFaceReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      73);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSChangeCardFaceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCardFaceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSChangeCardFaceRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSChangeCardFaceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSChangeCardFaceRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSChangeCardFaceRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSChangeCardFaceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCardFaceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSChangeCardFaceReq(this, v8, rsp_0);
    proto::GCGDSChangeCardFaceRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSChangeCardFaceRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSChangeCardFaceRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSChangeCardFaceRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSChangeCardFaceRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSChangeCardFaceRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeCardFaceRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSChangeCardFaceReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSChangeCardFaceReq> *const)(v2 + 32));
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

// Line 74: range 00000000168A8748-00000000168A8A64
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSChangeCardBackReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSChangeCardBackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSChangeCardBackRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:74 64 16 10 rsp_ptr:74";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSChangeCardBackReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSChangeCardBackReq const>(
         (const std::shared_ptr<const proto::GCGDSChangeCardBackReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      74);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSChangeCardBackReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCardBackReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSChangeCardBackRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSChangeCardBackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSChangeCardBackRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSChangeCardBackRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSChangeCardBackReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCardBackReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSChangeCardBackReq(this, v8, rsp_0);
    proto::GCGDSChangeCardBackRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSChangeCardBackRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSChangeCardBackRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSChangeCardBackRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSChangeCardBackRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSChangeCardBackRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeCardBackRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSChangeCardBackReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSChangeCardBackReq> *const)(v2 + 32));
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

// Line 75: range 00000000168A8A66-00000000168A8D82
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSChangeFieldReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSChangeFieldRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSChangeFieldRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:75 64 16 10 rsp_ptr:75";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSChangeFieldReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSChangeFieldReq const>(
         (const std::shared_ptr<const proto::GCGDSChangeFieldReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      75);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSChangeFieldReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeFieldReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSChangeFieldRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSChangeFieldRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSChangeFieldRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSChangeFieldRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSChangeFieldReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeFieldReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSChangeFieldReq(this, v8, rsp_0);
    proto::GCGDSChangeFieldRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSChangeFieldRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSChangeFieldRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSChangeFieldRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSChangeFieldRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSChangeFieldRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeFieldRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSChangeFieldReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSChangeFieldReq> *const)(v2 + 32));
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

// Line 78: range 00000000168A8D84-00000000168A90A0
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSChangeCurDeckReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSChangeCurDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSChangeCurDeckRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:78 64 16 10 rsp_ptr:78";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSChangeCurDeckReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSChangeCurDeckReq const>(
         (const std::shared_ptr<const proto::GCGDSChangeCurDeckReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      78);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSChangeCurDeckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCurDeckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSChangeCurDeckRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSChangeCurDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSChangeCurDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSChangeCurDeckRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSChangeCurDeckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeCurDeckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSChangeCurDeckReq(this, v8, rsp_0);
    proto::GCGDSChangeCurDeckRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSChangeCurDeckRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSChangeCurDeckRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSChangeCurDeckRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSChangeCurDeckRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSChangeCurDeckRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeCurDeckRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSChangeCurDeckReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSChangeCurDeckReq> *const)(v2 + 32));
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

// Line 79: range 00000000168A90A2-00000000168A93BE
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSDeleteDeckReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSDeleteDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSDeleteDeckRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:79 64 16 10 rsp_ptr:79";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSDeleteDeckReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSDeleteDeckReq const>(
         (const std::shared_ptr<const proto::GCGDSDeleteDeckReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      79);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSDeleteDeckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSDeleteDeckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSDeleteDeckRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSDeleteDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSDeleteDeckRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSDeleteDeckRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSDeleteDeckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSDeleteDeckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSDeleteDeckReq(this, v8, rsp_0);
    proto::GCGDSDeleteDeckRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSDeleteDeckRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSDeleteDeckRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSDeleteDeckRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSDeleteDeckRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSDeleteDeckRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSDeleteDeckRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSDeleteDeckReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSDeleteDeckReq> *const)(v2 + 32));
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

// Line 80: range 00000000168A93C0-00000000168A96DC
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGDSTakeCardProficiencyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGDSTakeCardProficiencyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:80 64 16 10 rsp_ptr:80";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGDSTakeCardProficiencyRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGDSTakeCardProficiencyRewardReq const>(
         (const std::shared_ptr<const proto::GCGDSTakeCardProficiencyRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      80);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGDSTakeCardProficiencyRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSTakeCardProficiencyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGDSTakeCardProficiencyRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGDSTakeCardProficiencyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSTakeCardProficiencyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGDSTakeCardProficiencyRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGDSTakeCardProficiencyRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSTakeCardProficiencyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGDSTakeCardProficiencyRewardReq(this, v8, rsp_0);
    proto::GCGDSTakeCardProficiencyRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGDSTakeCardProficiencyRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGDSTakeCardProficiencyRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSTakeCardProficiencyRewardReq> *const)(v2 + 32));
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

// Line 83: range 00000000168A96DE-00000000168A99FA
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGTCInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGTCInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGTCInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:83 64 16 10 rsp_ptr:83";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGTCInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGTCInviteReq const>(
         (const std::shared_ptr<const proto::GCGTCInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      83);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGTCInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGTCInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGTCInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGTCInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGTCInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGTCInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGTCInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGTCInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGTCInviteReq(this, v8, rsp_0);
    proto::GCGTCInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGTCInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGTCInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGTCInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGTCInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGTCInviteRsp>::~shared_ptr((std::shared_ptr<proto::GCGTCInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGTCInviteReq const>::~shared_ptr((std::shared_ptr<const proto::GCGTCInviteReq> *const)(v2 + 32));
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

// Line 86: range 00000000168A99FC-00000000168A9D18
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGGrowthLevelTakeRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGGrowthLevelTakeRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:86 64 16 10 rsp_ptr:86";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGGrowthLevelTakeRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGGrowthLevelTakeRewardReq const>(
         (const std::shared_ptr<const proto::GCGGrowthLevelTakeRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      86);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGGrowthLevelTakeRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGGrowthLevelTakeRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGGrowthLevelTakeRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGGrowthLevelTakeRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGGrowthLevelTakeRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGGrowthLevelTakeRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGGrowthLevelTakeRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGGrowthLevelTakeRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGGrowthLevelTakeRewardReq(this, v8, rsp_0);
    proto::GCGGrowthLevelTakeRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGGrowthLevelTakeRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp>::~shared_ptr((std::shared_ptr<proto::GCGGrowthLevelTakeRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGGrowthLevelTakeRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GCGGrowthLevelTakeRewardReq> *const)(v2 + 32));
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

// Line 88: range 00000000168A9D1A-00000000168AA036
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGInviteGuestBattleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGInviteGuestBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGInviteGuestBattleRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:88 64 16 10 rsp_ptr:88";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGInviteGuestBattleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGInviteGuestBattleReq const>(
         (const std::shared_ptr<const proto::GCGInviteGuestBattleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      88);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGInviteGuestBattleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGInviteGuestBattleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGInviteGuestBattleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGInviteGuestBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGInviteGuestBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGInviteGuestBattleRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGInviteGuestBattleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGInviteGuestBattleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGInviteGuestBattleReq(this, v8, rsp_0);
    proto::GCGInviteGuestBattleRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGInviteGuestBattleRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGInviteGuestBattleRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGInviteGuestBattleRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGInviteGuestBattleRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGInviteGuestBattleRsp>::~shared_ptr((std::shared_ptr<proto::GCGInviteGuestBattleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGInviteGuestBattleReq const>::~shared_ptr((std::shared_ptr<const proto::GCGInviteGuestBattleReq> *const)(v2 + 32));
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

// Line 89: range 00000000168AA038-00000000168AA354
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGApplyInviteBattleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGApplyInviteBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGApplyInviteBattleRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:89 64 16 10 rsp_ptr:89";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGApplyInviteBattleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGApplyInviteBattleReq const>(
         (const std::shared_ptr<const proto::GCGApplyInviteBattleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      89);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGApplyInviteBattleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGApplyInviteBattleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGApplyInviteBattleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGApplyInviteBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGApplyInviteBattleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGApplyInviteBattleRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGApplyInviteBattleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGApplyInviteBattleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGApplyInviteBattleReq(this, v8, rsp_0);
    proto::GCGApplyInviteBattleRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGApplyInviteBattleRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGApplyInviteBattleRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGApplyInviteBattleRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGApplyInviteBattleRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGApplyInviteBattleRsp>::~shared_ptr((std::shared_ptr<proto::GCGApplyInviteBattleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGApplyInviteBattleReq const>::~shared_ptr((std::shared_ptr<const proto::GCGApplyInviteBattleReq> *const)(v2 + 32));
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

// Line 90: range 00000000168AA356-00000000168AA672
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGWorldPlayerGCGStateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGWorldPlayerGCGStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:90 64 16 10 rsp_ptr:90";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGWorldPlayerGCGStateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGWorldPlayerGCGStateReq const>(
         (const std::shared_ptr<const proto::GCGWorldPlayerGCGStateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      90);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGWorldPlayerGCGStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGWorldPlayerGCGStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGWorldPlayerGCGStateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGWorldPlayerGCGStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGWorldPlayerGCGStateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGWorldPlayerGCGStateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGWorldPlayerGCGStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGWorldPlayerGCGStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGWorldPlayerGCGStateReq(this, v8, rsp_0);
    proto::GCGWorldPlayerGCGStateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGWorldPlayerGCGStateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp>::~shared_ptr((std::shared_ptr<proto::GCGWorldPlayerGCGStateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGWorldPlayerGCGStateReq const>::~shared_ptr((std::shared_ptr<const proto::GCGWorldPlayerGCGStateReq> *const)(v2 + 32));
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

// Line 93: range 00000000168AA674-00000000168AA990
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGStartChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGStartChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGStartChallengeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:93 64 16 10 rsp_ptr:93";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGStartChallengeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGStartChallengeReq const>(
         (const std::shared_ptr<const proto::GCGStartChallengeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      93);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGStartChallengeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGStartChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGStartChallengeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGStartChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGStartChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGStartChallengeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGStartChallengeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGStartChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGStartChallengeReq(this, v8, rsp_0);
    proto::GCGStartChallengeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGStartChallengeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGStartChallengeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGStartChallengeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGStartChallengeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGStartChallengeRsp>::~shared_ptr((std::shared_ptr<proto::GCGStartChallengeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGStartChallengeReq const>::~shared_ptr((std::shared_ptr<const proto::GCGStartChallengeReq> *const)(v2 + 32));
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

// Line 94: range 00000000168AA992-00000000168AACAE
int __cdecl PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const PlayerGCGHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerGCGHandler *this; // r14
  std::__shared_ptr_access<const proto::GCGStartChallengeByCheckRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GCGStartChallengeByCheckRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:94 64 16 10 rsp_ptr:94";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGStartChallengeByCheckRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GCGStartChallengeByCheckRewardReq const>(
         (const std::shared_ptr<const proto::GCGStartChallengeByCheckRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "operator()",
      94);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GCGStartChallengeByCheckRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGStartChallengeByCheckRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GCGStartChallengeByCheckRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGStartChallengeByCheckRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGStartChallengeByCheckRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GCGStartChallengeByCheckRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GCGStartChallengeByCheckRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGStartChallengeByCheckRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerGCGHandler::onGCGStartChallengeByCheckRewardReq(this, v8, rsp_0);
    proto::GCGStartChallengeByCheckRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GCGStartChallengeByCheckRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp>::~shared_ptr((std::shared_ptr<proto::GCGStartChallengeByCheckRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GCGStartChallengeByCheckRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GCGStartChallengeByCheckRewardReq> *const)(v2 + 32));
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

// Line 113: range 00000000168AE310-00000000168AE83E
int32_t __cdecl PlayerGCGHandler::onGCGOperationReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  uint32_t Uid; // eax
  google::protobuf::uint32 v8; // eax
  proto::GCGOperation *v9; // r14
  proto::GCGOperation *v10; // rax
  google::protobuf::uint32 v11; // eax
  PlayerGCGComp *v12; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-119h] BYREF
  proto::GCGOperationReq *req; // [rsp+18h] [rbp-118h]
  char v16[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 11 req_ptr:116 80 32 7 rsp:130 144 40 14 server_req:117";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGOperationReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 80), "GCGOperationReq", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, (const std::string *)(v2 + 80)) == 0;
  std::string::~string((void *)(v2 + 80));
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GCGOperationReq>((common::minet::Packet *const)(v2 + 48));
    if ( std::operator==<proto::GCGOperationReq>((const std::shared_ptr<proto::GCGOperationReq> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 80),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGOperationReq",
        116);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 80), off_25E182A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 80));
      v6 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GCGOperationReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGOperationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      proto::ServerGCGOperationReq::ServerGCGOperationReq((proto::ServerGCGOperationReq *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::ServerGCGOperationReq::set_uid((proto::ServerGCGOperationReq *const)(v2 + 144), Uid);
      if ( proto::GCGOperationReq::redirect_uid(req) )
      {
        v8 = proto::GCGOperationReq::redirect_uid(req);
        proto::ServerGCGOperationReq::set_uid((proto::ServerGCGOperationReq *const)(v2 + 144), v8);
      }
      v9 = proto::ServerGCGOperationReq::mutable_op((proto::ServerGCGOperationReq *const)(v2 + 144));
      v10 = proto::GCGOperationReq::mutable_op(req);
      proto::GCGOperation::Swap(v9, v10);
      v11 = proto::GCGOperationReq::op_seq(req);
      proto::ServerGCGOperationReq::set_op_seq((proto::ServerGCGOperationReq *const)(v2 + 144), v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = Player::getGCGComp(this->player_);
      if ( PlayerGCGComp::sendToGameMode(v12, (const google::protobuf::Message *)(v2 + 144)) )
      {
        proto::GCGOperationRsp::GCGOperationRsp((proto::GCGOperationRsp *const)(v2 + 80));
        proto::GCGOperationRsp::set_retcode((proto::GCGOperationRsp *const)(v2 + 80), -1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
        v6 = -1;
        proto::GCGOperationRsp::~GCGOperationRsp((proto::GCGOperationRsp *const)(v2 + 80));
      }
      else
      {
        v6 = 0;
      }
      proto::ServerGCGOperationReq::~ServerGCGOperationReq((proto::ServerGCGOperationReq *const)(v2 + 144));
    }
    std::shared_ptr<proto::GCGOperationReq>::~shared_ptr((std::shared_ptr<proto::GCGOperationReq> *const)(v2 + 48));
  }
  result = v6;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 139: range 00000000168AE840-00000000168AEC98
int32_t __cdecl PlayerGCGHandler::onGCGAskDuelReq(PlayerGCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  uint32_t Uid; // eax
  PlayerGCGComp *v8; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-F9h] BYREF
  proto::GCGAskDuelReq *req; // [rsp+18h] [rbp-F8h]
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:142 64 24 14 server_req:144 128 32 7 rsp:148";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGAskDuelReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 128), "GCGAskDuelReq", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, (const std::string *)(v2 + 128)) == 0;
  std::string::~string((void *)(v2 + 128));
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GCGAskDuelReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GCGAskDuelReq>((const std::shared_ptr<proto::GCGAskDuelReq> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGAskDuelReq",
        142);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_25E183A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      v6 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GCGAskDuelReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGAskDuelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      proto::ServerGCGAskDuelReq::ServerGCGAskDuelReq((proto::ServerGCGAskDuelReq *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::ServerGCGAskDuelReq::set_uid((proto::ServerGCGAskDuelReq *const)(v2 + 64), Uid);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getGCGComp(this->player_);
      if ( PlayerGCGComp::sendToGameMode(v8, (const google::protobuf::Message *)(v2 + 64)) )
      {
        proto::GCGAskDuelRsp::GCGAskDuelRsp((proto::GCGAskDuelRsp *const)(v2 + 128));
        proto::GCGAskDuelRsp::set_retcode((proto::GCGAskDuelRsp *const)(v2 + 128), -1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
        v6 = -1;
        proto::GCGAskDuelRsp::~GCGAskDuelRsp((proto::GCGAskDuelRsp *const)(v2 + 128));
      }
      else
      {
        v6 = 0;
      }
      proto::ServerGCGAskDuelReq::~ServerGCGAskDuelReq((proto::ServerGCGAskDuelReq *const)(v2 + 64));
    }
    std::shared_ptr<proto::GCGAskDuelReq>::~shared_ptr((std::shared_ptr<proto::GCGAskDuelReq> *const)(v2 + 32));
  }
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 157: range 00000000168AEC9A-00000000168AEFB4
int32_t __cdecl PlayerGCGHandler::onGCGInitFinishReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  PlayerGCGComp *v7; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  std::string name; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 14 server_req:160 96 24 7 rsp:163";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGInitFinishReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGInitFinishReq", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    proto::ServerGCGInitFinishReq::ServerGCGInitFinishReq((proto::ServerGCGInitFinishReq *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getGCGComp(this->player_);
    if ( PlayerGCGComp::sendToGameMode(v7, (const google::protobuf::Message *)(v2 + 32)) )
    {
      proto::GCGInitFinishRsp::GCGInitFinishRsp((proto::GCGInitFinishRsp *const)(v2 + 96));
      proto::GCGInitFinishRsp::set_retcode((proto::GCGInitFinishRsp *const)(v2 + 96), -1);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      v6 = -1;
      proto::GCGInitFinishRsp::~GCGInitFinishRsp((proto::GCGInitFinishRsp *const)(v2 + 96));
    }
    else
    {
      v6 = 0;
    }
    proto::ServerGCGInitFinishReq::~ServerGCGInitFinishReq((proto::ServerGCGInitFinishReq *const)(v2 + 32));
  }
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 172: range 00000000168AEFB6-00000000168AF43B
int32_t __cdecl PlayerGCGHandler::onGCGSkillPreviewAskReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  uint32_t Uid; // eax
  PlayerGCGComp *v8; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-101h] BYREF
  const proto::GCGSkillPreviewAskReq *req; // [rsp+20h] [rbp-100h]
  proto::GCGSkillPreviewAskRsp *rsp_0; // [rsp+28h] [rbp-F8h]
  std::string name; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:175 64 16 11 rsp_ptr:175 96 24 14 server_req:177";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGSkillPreviewAskReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGSkillPreviewAskReq", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::GCGSkillPreviewAskReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GCGSkillPreviewAskReq const>(
           (const std::shared_ptr<const proto::GCGSkillPreviewAskReq> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGSkillPreviewAskReq",
        175);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E0B560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GCGSkillPreviewAskReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGSkillPreviewAskReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::tools::perf::make_shared<proto::GCGSkillPreviewAskRsp>();
      rsp_0 = std::__shared_ptr_access<proto::GCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto::GCGSkillPreviewAskRsp::set_retcode(rsp_0, -1);
      proto::ServerGCGSkillPreviewAskReq::ServerGCGSkillPreviewAskReq((proto::ServerGCGSkillPreviewAskReq *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::ServerGCGSkillPreviewAskReq::set_uid((proto::ServerGCGSkillPreviewAskReq *const)(v2 + 96), Uid);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getGCGComp(this->player_);
      if ( PlayerGCGComp::sendToGameMode(v8, (const google::protobuf::Message *)(v2 + 96)) )
      {
        proto::GCGSkillPreviewAskRsp::set_retcode(rsp_0, -1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, rsp_0);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
      proto::ServerGCGSkillPreviewAskReq::~ServerGCGSkillPreviewAskReq((proto::ServerGCGSkillPreviewAskReq *const)(v2 + 96));
      std::shared_ptr<proto::GCGSkillPreviewAskRsp>::~shared_ptr((std::shared_ptr<proto::GCGSkillPreviewAskRsp> *const)(v2 + 64));
    }
    std::shared_ptr<proto::GCGSkillPreviewAskReq const>::~shared_ptr((std::shared_ptr<const proto::GCGSkillPreviewAskReq> *const)(v2 + 32));
  }
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 195: range 00000000168AF43C-00000000168AFEF5
int32_t __cdecl PlayerGCGHandler::onServerGCGNewGameInfoNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  google::protobuf::uint32 time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // ecx
  uint32_t v17; // edx
  uint32_t v18; // edx
  uint32_t v19; // ecx
  proto::GCGGameBusinessType v20; // edx
  uint32_t v21; // ecx
  GCGPlayerBriefInfo *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-189h] BYREF
  unsigned int val; // [rsp+18h] [rbp-188h] BYREF
  unsigned int v30; // [rsp+1Ch] [rbp-184h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefData>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefData>::const_iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  proto::ServerGCGNewGameInfoNotify *notify; // [rsp+30h] [rbp-170h]
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-168h]
  GCGGameBriefInfo *game_info; // [rsp+40h] [rbp-160h]
  const proto::GCGGameBriefData *game_brief; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefData> *__for_range; // [rsp+50h] [rbp-150h]
  const proto::GCGPlayerBriefData *player_brief; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v39; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v40; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v41; // [rsp+90h] [rbp-110h] BYREF
  std::string name; // [rsp+B0h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 now:200 64 16 14 notify_ptr:198 96 24 10 notify:207";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGNewGameInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGNewGameInfoNotify", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::ServerGCGNewGameInfoNotify>((common::minet::Packet *const)(v2 + 64));
    if ( std::operator==<proto::ServerGCGNewGameInfoNotify>(
           (const std::shared_ptr<proto::ServerGCGNewGameInfoNotify> *)(v2 + 64),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGNewGameInfoNotify",
        198);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E18600);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      notify = std::__shared_ptr_access<proto::ServerGCGNewGameInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGNewGameInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGNewGameInfoNotify",
        199);
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v41,
             (const char (*)[38])"onServerGCGNewGameInfoNotify notify: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, notify);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &name);
      std::string::~string(&name);
      common::milog::MiLogStream::~MiLogStream(&v41);
      *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
      time = proto::ServerGCGNewGameInfoNotify::try_create_time(notify);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      if ( *(_BYTE *)(((unsigned __int64)&v9->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->gcg_game_create_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v10 = time + v9->gcg_game_create_timeout < *(_DWORD *)(v2 + 48);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGNewGameInfoNotify",
          203);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&name,
                (const char (*)[28])"create time too long. now: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" create_time: ");
        val = proto::ServerGCGNewGameInfoNotify::create_time(notify);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])" try_create_time: ");
        v30 = proto::ServerGCGNewGameInfoNotify::try_create_time(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v30);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        proto::GCGGameCreateFailReasonNotify::GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
        proto::GCGGameCreateFailReasonNotify::set_reason(
          (proto::GCGGameCreateFailReasonNotify *const)(v2 + 96),
          GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_TIMEOUT);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        v6 = -1;
        proto::GCGGameCreateFailReasonNotify::~GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        gcg_comp = Player::getGCGComp(this->player_);
        game_info = PlayerGCGComp::getGameInfo(gcg_comp);
        GCGGameBriefInfo::reset(game_info);
        v16 = proto::ServerGCGNewGameInfoNotify::app_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&game_info->app_id);
        }
        game_info->app_id = v16;
        v17 = proto::ServerGCGNewGameInfoNotify::thread_index(notify);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&game_info->thread_index);
        }
        game_info->thread_index = v17;
        game_brief = proto::ServerGCGNewGameInfoNotify::game_brief_data(notify);
        v18 = proto::GCGGameBriefData::game_id(game_brief);
        if ( *(_BYTE *)(((unsigned __int64)game_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)game_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(game_info);
        }
        game_info->game_id = v18;
        v19 = proto::GCGGameBriefData::game_uid(game_brief);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_store4(&game_info->game_uid);
        }
        game_info->game_uid = v19;
        v20 = proto::GCGGameBriefData::business_type(game_brief);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->business_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_info->business_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&game_info->business_type);
        }
        game_info->business_type = v20;
        v21 = proto::GCGGameBriefData::verify_code(game_brief);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&game_info->verify_code);
        }
        game_info->verify_code = v21;
        __for_range = proto::GCGGameBriefData::player_brief_list(game_brief);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefData>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefData>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefData const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          player_brief = google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefData const>::operator*(&__for_begin);
          v22 = std::vector<GCGPlayerBriefInfo>::emplace_back<>(&game_info->player_brief_vec);
          GCGPlayerBriefInfo::fromProto(v22, player_brief);
          google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefData const>::operator++(&__for_begin);
        }
        PlayerGCGComp::afterSetGameInfo(gcg_comp);
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGNewGameInfoNotify",
          228);
        v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v40,
                (const char (*)[32])"NewGCGGame SERVICE_GCG app_id: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &game_info->app_id);
        v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" app: ");
        if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v41, game_info->app_id);
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)&v41);
        GCGGameBriefInfo::getDesc[abi:cxx11](&name, game_info);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &name);
        std::string::~string(&name);
        std::string::~string(&v41);
        common::milog::MiLogStream::~MiLogStream(&v40);
        PlayerGCGComp::notifyGameInfo(gcg_comp, 1);
        PlayerGCGComp::clearEnterGameTime(gcg_comp);
        PlayerGCGComp::createAndEnterGCGDungeon(gcg_comp);
        v6 = 0;
      }
    }
    std::shared_ptr<proto::ServerGCGNewGameInfoNotify>::~shared_ptr((std::shared_ptr<proto::ServerGCGNewGameInfoNotify> *const)(v2 + 64));
  }
  result = v6;
  if ( v43 == (char *)v2 )
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

// Line 240: range 00000000168AFEF6-00000000168B01FB
int32_t __cdecl PlayerGCGHandler::onServerGCGGMCommandRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const std::string *v6; // rax
  const std::string *v7; // rax
  Player *player; // r14
  const std::string *v9; // rax
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGGMCommandRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 server_rsp_ptr:241 64 32 10 notify:244";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGGMCommandRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGGMCommandRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGGMCommandRsp>(
         (const std::shared_ptr<proto::ServerGCGGMCommandRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGGMCommandRsp",
      241);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), off_25E18880);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGGMCommandRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGGMCommandRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGCGGMCommandRsp::retcode(server_rsp) )
    {
      proto::GmTalkNotify::GmTalkNotify((proto::GmTalkNotify *const)(v2 + 64));
      v6 = proto::ServerGCGGMCommandRsp::ret_msg[abi:cxx11](server_rsp);
      proto::GmTalkNotify::set_msg((proto::GmTalkNotify *const)(v2 + 64), v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      proto::GmTalkNotify::~GmTalkNotify((proto::GmTalkNotify *const)(v2 + 64));
    }
    v7 = proto::ServerGCGGMCommandRsp::ret_extra_content[abi:cxx11](server_rsp);
    if ( (unsigned __int8)std::string::empty(v7) != 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v9 = proto::ServerGCGGMCommandRsp::ret_extra_content[abi:cxx11](server_rsp);
      Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_INFO_0, v9);
    }
    v5 = proto::ServerGCGGMCommandRsp::retcode(server_rsp);
  }
  std::shared_ptr<proto::ServerGCGGMCommandRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGGMCommandRsp> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 256: range 00000000168B01FC-00000000168B0410
int32_t __cdecl PlayerGCGHandler::onServerGCGSyncRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerGCGComp *GCGComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:257";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGSyncRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGSyncRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGSyncRsp>((const std::shared_ptr<proto::ServerGCGSyncRsp> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGSyncRsp",
      257);
    common::milog::MiLogStream::operator()(&v9, off_25E18940);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GCGComp = Player::getGCGComp(this->player_);
    PlayerGCGComp::recvSyncRsp(GCGComp, server_rsp);
    v5 = proto::ServerGCGSyncRsp::retcode(server_rsp);
  }
  std::shared_ptr<proto::ServerGCGSyncRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSyncRsp> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 263: range 00000000168B0412-00000000168B06AE
int32_t __cdecl PlayerGCGHandler::onServerGCGGiveUpGameRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGGiveUpGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:264";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGGiveUpGameRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGGiveUpGameRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGGiveUpGameRsp>(
         (const std::shared_ptr<proto::ServerGCGGiveUpGameRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGGiveUpGameRsp",
      264);
    common::milog::MiLogStream::operator()(&v10, off_25E189E0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGGiveUpGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGGiveUpGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGCGGiveUpGameRsp::retcode(server_rsp) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGGiveUpGameRsp",
        267);
      v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v9,
             (const char (*)[20])"give up game fail. ");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v10, server_rsp);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v10);
      std::string::~string(&v10);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    v5 = proto::ServerGCGGiveUpGameRsp::retcode(server_rsp);
  }
  std::shared_ptr<proto::ServerGCGGiveUpGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGGiveUpGameRsp> *const)(v2 + 32));
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

// Line 273: range 00000000168B06B0-00000000168B0AA7
int32_t __cdecl PlayerGCGHandler::onServerGCGSkillPreviewAskRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  google::protobuf::int32 v7; // eax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-D9h] BYREF
  proto::ServerGCGSkillPreviewAskRsp *server_rsp; // [rsp+18h] [rbp-D8h]
  std::string name; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 server_rsp_ptr:276 64 24 25 skill_preview_ask_rsp:281";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGSkillPreviewAskRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGSkillPreviewAskRsp", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::ServerGCGSkillPreviewAskRsp>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::ServerGCGSkillPreviewAskRsp>(
           (const std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGSkillPreviewAskRsp",
        276);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E18B60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      server_rsp = std::__shared_ptr_access<proto::ServerGCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGSkillPreviewAskRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( proto::ServerGCGSkillPreviewAskRsp::retcode(server_rsp) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGSkillPreviewAskRsp",
          279);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)&name,
          (const char (*)[33])"onServerSkillPreviewRsp not succ");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      }
      proto::GCGSkillPreviewAskRsp::GCGSkillPreviewAskRsp((proto::GCGSkillPreviewAskRsp *const)(v2 + 64));
      v7 = proto::ServerGCGSkillPreviewAskRsp::retcode(server_rsp);
      proto::GCGSkillPreviewAskRsp::set_retcode((proto::GCGSkillPreviewAskRsp *const)(v2 + 64), v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      v6 = proto::ServerGCGSkillPreviewAskRsp::retcode(server_rsp);
      proto::GCGSkillPreviewAskRsp::~GCGSkillPreviewAskRsp((proto::GCGSkillPreviewAskRsp *const)(v2 + 64));
    }
    std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSkillPreviewAskRsp> *const)(v2 + 32));
  }
  result = v6;
  if ( v12 == (char *)v2 )
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

// Line 288: range 00000000168B0AA8-00000000168B0DE9
int32_t __cdecl PlayerGCGHandler::onServerGCGCreateSingleGameRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGCreateSingleGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:289";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGCreateSingleGameRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGCreateSingleGameRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGCreateSingleGameRsp>(
         (const std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGCreateSingleGameRsp",
      289);
    common::milog::MiLogStream::operator()(&v11, off_25E18C80);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGCreateSingleGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGCreateSingleGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGCGCreateSingleGameRsp::retcode(server_rsp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      PlayerGCGComp::clearEnterGameTime(GCGComp);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGCreateSingleGameRsp",
        293);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v10,
             (const char (*)[26])"create single game fail. ");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v11, server_rsp);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v11);
      std::string::~string(&v11);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGCreateSingleGameRsp",
        297);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v11,
        (const char (*)[39])"ServerGCGCreateSingleGameRsp success. ");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    v5 = 0;
  }
  std::shared_ptr<proto::ServerGCGCreateSingleGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateSingleGameRsp> *const)(v2 + 32));
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

// Line 303: range 00000000168B0DEA-00000000168B112B
int32_t __cdecl PlayerGCGHandler::onServerGCGCreateMultiGameRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:304";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGCreateMultiGameRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGCreateMultiGameRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGCGCreateMultiGameRsp>(
         (const std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGCreateMultiGameRsp",
      304);
    common::milog::MiLogStream::operator()(&v11, off_25E18DE0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGCreateMultiGameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGCGCreateMultiGameRsp::retcode(server_rsp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      PlayerGCGComp::clearEnterGameTime(GCGComp);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGCreateMultiGameRsp",
        308);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v10,
             (const char (*)[25])"create multi game fail. ");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v11, server_rsp);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v11);
      std::string::~string(&v11);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGCreateMultiGameRsp",
        312);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v11,
        (const char (*)[39])"ServerGCGCreateSingleGameRsp success. ");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    v5 = 0;
  }
  std::shared_ptr<proto::ServerGCGCreateMultiGameRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGCreateMultiGameRsp> *const)(v2 + 32));
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

// Line 319: range 00000000168B112C-00000000168B117F
int32_t __cdecl PlayerGCGHandler::onServerGCGMatchFinishNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  PlayerGCGComp *GCGComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  PlayerGCGComp::onBeginEnterGame(GCGComp);
  return 0;
};

// Line 327: range 00000000168B1180-00000000168B18CD
int32_t __cdecl PlayerGCGHandler::onServerGCGBackToDuelRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t game_uid; // r14d
  uint32_t app_id; // r14d
  uint32_t verify_code; // r14d
  uint32_t thread_index; // r14d
  char v10; // al
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  google::protobuf::uint32 v12; // r14d
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  const proto::PlayerLoginReq *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-138h] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-134h] BYREF
  proto::ServerGCGBackToDuelRsp *server_rsp; // [rsp+20h] [rbp-130h]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-128h]
  GCGGameBriefInfo *game_info; // [rsp+30h] [rbp-120h]
  proto::GCGBackToDuelRsp *rsp_0; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 ret:331 64 12 10 option:350 96 16 18 server_rsp_ptr:328 128 16 11 rsp_ptr:365";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGBackToDuelRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGBackToDuelRsp>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerGCGBackToDuelRsp>(
         (const std::shared_ptr<proto::ServerGCGBackToDuelRsp> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGBackToDuelRsp",
      328);
    common::milog::MiLogStream::operator()(&v28, off_25E18F20);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gcg_comp = Player::getGCGComp(this->player_);
    game_info = PlayerGCGComp::getGameInfo(gcg_comp);
    *(_DWORD *)(v2 + 48) = proto::ServerGCGBackToDuelRsp::retcode(server_rsp);
    if ( !*(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      game_uid = game_info->game_uid;
      if ( game_uid != proto::ServerGCGBackToDuelRsp::game_uid(server_rsp) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      app_id = game_info->app_id;
      if ( app_id != proto::ServerGCGBackToDuelRsp::app_id(server_rsp) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      verify_code = game_info->verify_code;
      if ( verify_code != proto::ServerGCGBackToDuelRsp::verify_code(server_rsp) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      thread_index = game_info->thread_index;
      if ( thread_index == proto::ServerGCGBackToDuelRsp::thread_index(server_rsp) )
        v10 = 1;
      else
LABEL_22:
        v10 = 0;
      if ( v10 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SessionLoginReq = Player::getSessionLoginReq(this->player_);
        v12 = proto::PlayerLoginReq::client_data_version(SessionLoginReq);
        if ( v12 == proto::ServerGCGBackToDuelRsp::client_data_version(server_rsp) )
        {
          *(_QWORD *)(v2 + 64) = 0LL;
          *(_DWORD *)(v2 + 72) = 0;
          *(_BYTE *)(v2 + 68) = 1;
          *(_BYTE *)(v2 + 73) = 1;
          *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkCanEnterGame(gcg_comp, (const GCGEnterCheckOption *)(v2 + 64));
          if ( *(_DWORD *)(v2 + 48) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/player_gcg_handler.cpp",
              "onServerGCGBackToDuelRsp",
              360);
            v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v27,
                    (const char (*)[30])"checkCanEnterGame fail. ret: ");
            v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v18,
                    (const char (*)[13])" game_info: ");
            GCGGameBriefInfo::getDesc[abi:cxx11]((std::string *)&v28, game_info);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v28);
            std::string::~string(&v28);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          else
          {
            PlayerGCGComp::createAndEnterGCGDungeon(gcg_comp);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/player_gcg_handler.cpp",
            "onServerGCGBackToDuelRsp",
            346);
          v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v28,
                  (const char (*)[32])"client version not match. rsp: ");
          val = proto::ServerGCGBackToDuelRsp::client_data_version(server_rsp);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v14,
                  (const char (*)[18])" client version: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v16 = Player::getSessionLoginReq(this->player_);
          v22 = proto::PlayerLoginReq::client_data_version(v16);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v22);
          common::milog::MiLogStream::~MiLogStream(&v28);
          *(_DWORD *)(v2 + 48) = 12142;
        }
      }
    }
    common::tools::perf::make_shared<proto::GCGBackToDuelRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::GCGBackToDuelRsp::set_retcode(rsp_0, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = *(_DWORD *)(v2 + 48);
    std::shared_ptr<proto::GCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGBackToDuelRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerGCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGBackToDuelRsp> *const)(v2 + 96));
  result = v5;
  if ( v29 == (char *)v2 )
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

// Line 373: range 00000000168B18CE-00000000168B1BBE
int32_t __cdecl PlayerGCGHandler::onGCGOperationRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-99h] BYREF
  proto::GCGOperationRsp *rsp_0; // [rsp+18h] [rbp-98h]
  std::string name; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:375";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGOperationRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGOperationRsp", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GCGOperationRsp>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GCGOperationRsp>((const std::shared_ptr<proto::GCGOperationRsp> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGOperationRsp",
        375);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E19120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      rsp_0 = std::__shared_ptr_access<proto::GCGOperationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGOperationRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      v6 = proto::GCGOperationRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::GCGOperationRsp>::~shared_ptr((std::shared_ptr<proto::GCGOperationRsp> *const)(v2 + 32));
  }
  result = v6;
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

// Line 381: range 00000000168B1BC0-00000000168B1EB0
int32_t __cdecl PlayerGCGHandler::onGCGAskDuelRsp(PlayerGCGHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-99h] BYREF
  proto::GCGAskDuelRsp *rsp_0; // [rsp+18h] [rbp-98h]
  std::string name; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:383";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGAskDuelRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGAskDuelRsp", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GCGAskDuelRsp>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GCGAskDuelRsp>((const std::shared_ptr<proto::GCGAskDuelRsp> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGAskDuelRsp",
        383);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E19200);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      rsp_0 = std::__shared_ptr_access<proto::GCGAskDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGAskDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      v6 = proto::GCGAskDuelRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::GCGAskDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGAskDuelRsp> *const)(v2 + 32));
  }
  result = v6;
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

// Line 389: range 00000000168B1EB2-00000000168B21A2
int32_t __cdecl PlayerGCGHandler::onGCGInitFinishRsp(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-99h] BYREF
  proto::GCGInitFinishRsp *rsp_0; // [rsp+18h] [rbp-98h]
  std::string name; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:391";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGInitFinishRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGInitFinishRsp", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GCGInitFinishRsp>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::GCGInitFinishRsp>((const std::shared_ptr<proto::GCGInitFinishRsp> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGInitFinishRsp",
        391);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E192E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      rsp_0 = std::__shared_ptr_access<proto::GCGInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      v6 = proto::GCGInitFinishRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::GCGInitFinishRsp>::~shared_ptr((std::shared_ptr<proto::GCGInitFinishRsp> *const)(v2 + 32));
  }
  result = v6;
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

// Line 398: range 00000000168B21A4-00000000168B2650
int32_t __cdecl PlayerGCGHandler::onServerGCGMessagePackNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  const proto::ServerGCGVerify *v7; // rax
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  google::protobuf::RepeatedPtrField<proto::GCGMessagePack> *v10; // rax
  std::remove_reference<google::protobuf::RepeatedPtrField<proto::GCGMessagePack>&>::type *v11; // r14
  google::protobuf::RepeatedPtrField<proto::GCGMessagePack> *v12; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-101h] BYREF
  proto::ServerGCGMessagePackNotify *server_notify; // [rsp+20h] [rbp-100h]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-F8h]
  std::string name; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 ret:402 48 16 21 server_notify_ptr:400 80 48 10 notify:408";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGMessagePackNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGMessagePackNotify", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::ServerGCGMessagePackNotify>((common::minet::Packet *const)(v2 + 48));
    if ( std::operator==<proto::ServerGCGMessagePackNotify>(
           (const std::shared_ptr<proto::ServerGCGMessagePackNotify> *)(v2 + 48),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGMessagePackNotify",
        400);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E19400);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      server_notify = std::__shared_ptr_access<proto::ServerGCGMessagePackNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGMessagePackNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gcg_comp = Player::getGCGComp(this->player_);
      v7 = proto::ServerGCGMessagePackNotify::verify(server_notify);
      *(_DWORD *)(v2 + 32) = PlayerGCGComp::checkServerGCGVerify(gcg_comp, v7);
      if ( *(_DWORD *)(v2 + 32) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGMessagePackNotify",
          405);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               (common::milog::MiLogStream *const)&name,
               (const char (*)[33])"checkServerGCGVerify fail. ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = *(_DWORD *)(v2 + 32);
      }
      else
      {
        proto::GCGMessagePackNotify::GCGMessagePackNotify((proto::GCGMessagePackNotify *const)(v2 + 80));
        v9 = proto::ServerGCGMessagePackNotify::server_seq(server_notify);
        proto::GCGMessagePackNotify::set_server_seq((proto::GCGMessagePackNotify *const)(v2 + 80), v9);
        v10 = proto::ServerGCGMessagePackNotify::mutable_msg_pack_list(server_notify);
        v11 = std::move<google::protobuf::RepeatedPtrField<proto::GCGMessagePack> &>(v10);
        v12 = proto::GCGMessagePackNotify::mutable_msg_pack_list((proto::GCGMessagePackNotify *const)(v2 + 80));
        google::protobuf::RepeatedPtrField<proto::GCGMessagePack>::operator=(v12, v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
        v6 = 0;
        proto::GCGMessagePackNotify::~GCGMessagePackNotify((proto::GCGMessagePackNotify *const)(v2 + 80));
      }
    }
    std::shared_ptr<proto::ServerGCGMessagePackNotify>::~shared_ptr((std::shared_ptr<proto::ServerGCGMessagePackNotify> *const)(v2 + 48));
  }
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 416: range 00000000168B2652-00000000168B2AD6
int32_t __cdecl PlayerGCGHandler::onServerGCGHeartBeatNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  const proto::ServerGCGVerify *v7; // rax
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-101h] BYREF
  proto::ServerGCGHeartBeatNotify *server_notify; // [rsp+20h] [rbp-100h]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-F8h]
  std::string name; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:420 64 16 21 server_notify_ptr:418 96 24 10 notify:426";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGHeartBeatNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGHeartBeatNotify", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::ServerGCGHeartBeatNotify>((common::minet::Packet *const)(v2 + 64));
    if ( std::operator==<proto::ServerGCGHeartBeatNotify>(
           (const std::shared_ptr<proto::ServerGCGHeartBeatNotify> *)(v2 + 64),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGHeartBeatNotify",
        418);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E195A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      server_notify = std::__shared_ptr_access<proto::ServerGCGHeartBeatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGHeartBeatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gcg_comp = Player::getGCGComp(this->player_);
      v7 = proto::ServerGCGHeartBeatNotify::verify(server_notify);
      *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkServerGCGVerify(gcg_comp, v7);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGHeartBeatNotify",
          423);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               (common::milog::MiLogStream *const)&name,
               (const char (*)[33])"checkServerGCGVerify fail. ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        proto::GCGHeartBeatNotify::GCGHeartBeatNotify((proto::GCGHeartBeatNotify *const)(v2 + 96));
        v9 = proto::ServerGCGHeartBeatNotify::server_seq(server_notify);
        proto::GCGHeartBeatNotify::set_server_seq((proto::GCGHeartBeatNotify *const)(v2 + 96), v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        v6 = 0;
        proto::GCGHeartBeatNotify::~GCGHeartBeatNotify((proto::GCGHeartBeatNotify *const)(v2 + 96));
      }
    }
    std::shared_ptr<proto::ServerGCGHeartBeatNotify>::~shared_ptr((std::shared_ptr<proto::ServerGCGHeartBeatNotify> *const)(v2 + 64));
  }
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 433: range 00000000168B2AD8-00000000168B3059
int32_t __cdecl PlayerGCGHandler::onServerGCGSkillPreviewNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // r14
  int32_t v6; // r14d
  const proto::ServerGCGVerify *v7; // rax
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  google::protobuf::uint32 v10; // eax
  google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewInfo> *v11; // rax
  std::remove_reference<google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewInfo>&>::type *v12; // r14
  google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewInfo> *v13; // rax
  google::protobuf::RepeatedPtrField<proto::GCGChangeOnstageInfo> *v14; // rax
  std::remove_reference<google::protobuf::RepeatedPtrField<proto::GCGChangeOnstageInfo>&>::type *v15; // r14
  google::protobuf::RepeatedPtrField<proto::GCGChangeOnstageInfo> *v16; // rax
  google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewPlayCardInfo> *v17; // rax
  std::remove_reference<google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewPlayCardInfo>&>::type *v18; // r14
  google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewPlayCardInfo> *v19; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-141h] BYREF
  proto::ServerGCGSkillPreviewNotify *server_notify; // [rsp+20h] [rbp-140h]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-138h]
  std::string name; // [rsp+30h] [rbp-130h] BYREF
  char v25[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 ret:437 48 16 21 server_notify_ptr:435 80 104 10 notify:443";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGSkillPreviewNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "GCGSkillPreviewNotify", &__a);
  LOBYTE(GCGComp) = PlayerGCGComp::checkAndDecDropPackNum(GCGComp, &name) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( (_BYTE)GCGComp )
  {
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::ServerGCGSkillPreviewNotify>((common::minet::Packet *const)(v2 + 48));
    if ( std::operator==<proto::ServerGCGSkillPreviewNotify>(
           (const std::shared_ptr<proto::ServerGCGSkillPreviewNotify> *)(v2 + 48),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGSkillPreviewNotify",
        435);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&name, off_25E196E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      server_notify = std::__shared_ptr_access<proto::ServerGCGSkillPreviewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGSkillPreviewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gcg_comp = Player::getGCGComp(this->player_);
      v7 = proto::ServerGCGSkillPreviewNotify::verify(server_notify);
      *(_DWORD *)(v2 + 32) = PlayerGCGComp::checkServerGCGVerify(gcg_comp, v7);
      if ( *(_DWORD *)(v2 + 32) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_gcg_handler.cpp",
          "onServerGCGSkillPreviewNotify",
          440);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               (common::milog::MiLogStream *const)&name,
               (const char (*)[33])"checkServerGCGVerify fail. ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = *(_DWORD *)(v2 + 32);
      }
      else
      {
        proto::GCGSkillPreviewNotify::GCGSkillPreviewNotify((proto::GCGSkillPreviewNotify *const)(v2 + 80));
        v9 = proto::ServerGCGSkillPreviewNotify::controller_id(server_notify);
        proto::GCGSkillPreviewNotify::set_controller_id((proto::GCGSkillPreviewNotify *const)(v2 + 80), v9);
        v10 = proto::ServerGCGSkillPreviewNotify::onstage_card_guid(server_notify);
        proto::GCGSkillPreviewNotify::set_onstage_card_guid((proto::GCGSkillPreviewNotify *const)(v2 + 80), v10);
        v11 = proto::ServerGCGSkillPreviewNotify::mutable_skill_preview_list(server_notify);
        v12 = std::move<google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewInfo> &>(v11);
        v13 = proto::GCGSkillPreviewNotify::mutable_skill_preview_list((proto::GCGSkillPreviewNotify *const)(v2 + 80));
        google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewInfo>::operator=(v13, v12);
        v14 = proto::ServerGCGSkillPreviewNotify::mutable_change_onstage_preview_list(server_notify);
        v15 = std::move<google::protobuf::RepeatedPtrField<proto::GCGChangeOnstageInfo> &>(v14);
        v16 = proto::GCGSkillPreviewNotify::mutable_change_onstage_preview_list((proto::GCGSkillPreviewNotify *const)(v2 + 80));
        google::protobuf::RepeatedPtrField<proto::GCGChangeOnstageInfo>::operator=(v16, v15);
        v17 = proto::ServerGCGSkillPreviewNotify::mutable_play_card_list(server_notify);
        v18 = std::move<google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewPlayCardInfo> &>(v17);
        v19 = proto::GCGSkillPreviewNotify::mutable_play_card_list((proto::GCGSkillPreviewNotify *const)(v2 + 80));
        google::protobuf::RepeatedPtrField<proto::GCGSkillPreviewPlayCardInfo>::operator=(v19, v18);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
        v6 = 0;
        proto::GCGSkillPreviewNotify::~GCGSkillPreviewNotify((proto::GCGSkillPreviewNotify *const)(v2 + 80));
      }
    }
    std::shared_ptr<proto::ServerGCGSkillPreviewNotify>::~shared_ptr((std::shared_ptr<proto::ServerGCGSkillPreviewNotify> *const)(v2 + 48));
  }
  result = v6;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 454: range 00000000168B305A-00000000168B3408
int32_t __cdecl PlayerGCGHandler::onServerGCGChallengeUpdateNotify(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::ServerGCGVerify *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  google::protobuf::uint32 v8; // eax
  proto::GCGDuelChallenge *v9; // rax
  std::remove_reference<proto::GCGDuelChallenge&>::type *v10; // r14
  proto::GCGDuelChallenge *v11; // rax
  int32_t result; // eax
  std::__shared_ptr_access<proto::ServerGCGChallengeUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_notify; // [rsp+10h] [rbp-E0h]
  const PlayerGCGComp *gcg_comp; // [rsp+18h] [rbp-D8h]
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:457 64 16 21 server_notify_ptr:455 96 32 10 notify:463";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onServerGCGChallengeUpdateNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGCGChallengeUpdateNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGCGChallengeUpdateNotify>(
         (const std::shared_ptr<proto::ServerGCGChallengeUpdateNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onServerGCGChallengeUpdateNotify",
      455);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 96), off_25E19800);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    v5 = -1;
  }
  else
  {
    server_notify = std::__shared_ptr_access<proto::ServerGCGChallengeUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGCGChallengeUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gcg_comp = Player::getGCGComp(this->player_);
    v6 = proto::ServerGCGChallengeUpdateNotify::verify(server_notify);
    *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkServerGCGVerify(gcg_comp, v6);
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_gcg_handler.cpp",
        "onServerGCGChallengeUpdateNotify",
        460);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[33])"checkServerGCGVerify fail. ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      v5 = *(_DWORD *)(v2 + 48);
    }
    else
    {
      proto::GCGChallengeUpdateNotify::GCGChallengeUpdateNotify((proto::GCGChallengeUpdateNotify *const)(v2 + 96));
      v8 = proto::ServerGCGChallengeUpdateNotify::server_seq(server_notify);
      proto::GCGChallengeUpdateNotify::set_server_seq((proto::GCGChallengeUpdateNotify *const)(v2 + 96), v8);
      v9 = proto::ServerGCGChallengeUpdateNotify::mutable_challenge(server_notify);
      v10 = std::move<proto::GCGDuelChallenge &>(v9);
      v11 = proto::GCGChallengeUpdateNotify::mutable_challenge((proto::GCGChallengeUpdateNotify *const)(v2 + 96));
      proto::GCGDuelChallenge::operator=(v11, v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      v5 = 0;
      proto::GCGChallengeUpdateNotify::~GCGChallengeUpdateNotify((proto::GCGChallengeUpdateNotify *const)(v2 + 96));
    }
  }
  std::shared_ptr<proto::ServerGCGChallengeUpdateNotify>::~shared_ptr((std::shared_ptr<proto::ServerGCGChallengeUpdateNotify> *const)(v2 + 64));
  result = v5;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 475: range 00000000168B340A-00000000168B3477
int32_t __cdecl PlayerGCGHandler::onGCGResourceStateNotify(
        PlayerGCGHandler *const this,
        const proto::GCGResourceStateNotify *notify)
{
  PlayerGCGComp *GCGComp; // rbx
  bool is_complete; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  is_complete = proto::GCGResourceStateNotify::is_complete(notify);
  PlayerGCGComp::setIsResourceComplete(GCGComp, is_complete);
  return 0;
};

// Line 481: range 00000000168B3478-00000000168B37AE
int32_t __cdecl PlayerGCGHandler::onGCGClientSettleReq(
        PlayerGCGHandler *const this,
        const proto::GCGClientSettleReq *req,
        proto::GCGClientSettleRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  DungeonScene *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  DungeonScene *v10; // r14
  time_t Now; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::uint32 DungeonCloseTime; // edx
  int32_t result; // eax
  uint32_t close_time; // [rsp+24h] [rbp-ACh]
  const PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 dungeon_scene_ptr:491";
  *(_QWORD *)(v3 + 16) = PlayerGCGHandler::onGCGClientSettleReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gcg_comp = Player::getGCGComp(this->player_);
  if ( PlayerGCGComp::isInGame(gcg_comp) )
  {
    v6 = 12116;
  }
  else if ( !PlayerGCGComp::isInGCGDungeon(gcg_comp) )
  {
    v6 = 12117;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 32));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGClientSettleReq",
        494);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v19,
        (const char (*)[26])"getCurDungeon is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( DungeonScene::getDungeonResult(v7) == DUNGEON_RESULT_NONE )
      {
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        DungeonScene::settle(v8, DUNGEON_RESULT_SUCCEED);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v18);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
        close_time = ConstValueExcelConfigMgr::getGCGSettleWaitTime(&v9->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v18);
        v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Now = common::tools::TimeUtils::getNow();
        DungeonScene::setDungeonCloseTime(v10, close_time + Now);
      }
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      DungeonCloseTime = DungeonScene::getDungeonCloseTime(v12);
      proto::GCGClientSettleRsp::set_close_time(rsp_0, DungeonCloseTime);
      v6 = 0;
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  }
  result = v6;
  if ( v20 == (char *)v3 )
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

// Line 508: range 00000000168B37B0-00000000168B3D8D
int32_t __cdecl PlayerGCGHandler::onGCGBackToDuelReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  google::protobuf::uint32 v7; // eax
  PlayerGCGComp *GCGComp; // rax
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+14h] [rbp-11Ch]
  std::__shared_ptr_access<const proto::GCGBackToDuelReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-118h]
  PlayerGCGComp *gcg_comp; // [rsp+20h] [rbp-110h]
  std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-108h]
  GCGGameBriefInfo *game_info; // [rsp+30h] [rbp-100h]
  std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_1; // [rsp+38h] [rbp-F8h]
  char v16[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 10 option:526 64 16 11 req_ptr:509 96 16 11 rsp_ptr:553 128 32 14 server_req:536";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGBackToDuelReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GCGBackToDuelReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GCGBackToDuelReq const>(
         (const std::shared_ptr<const proto::GCGBackToDuelReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGBackToDuelReq",
      509);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_25E199C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GCGBackToDuelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGBackToDuelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gcg_comp = Player::getGCGComp(this->player_);
    if ( !PlayerGCGComp::isInGame(gcg_comp) )
    {
      ret = 12130;
    }
    else if ( PlayerGCGComp::isInGCGDungeon(gcg_comp) )
    {
      ret = 12129;
    }
    else if ( proto::GCGBackToDuelReq::is_back(req) )
    {
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)(v2 + 40) = 0;
      *(_BYTE *)(v2 + 36) = 1;
      *(_BYTE *)(v2 + 41) = 1;
      ret = PlayerGCGComp::checkCanEnterGame(gcg_comp, (const GCGEnterCheckOption *)(v2 + 32));
      if ( !ret )
      {
        game_info = PlayerGCGComp::getGameInfo(gcg_comp);
        proto::ServerGCGBackToDuelReq::ServerGCGBackToDuelReq((proto::ServerGCGBackToDuelReq *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->game_uid >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ServerGCGBackToDuelReq::set_game_uid(
          (proto::ServerGCGBackToDuelReq *const)(v2 + 128),
          game_info->game_uid);
        if ( *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->verify_code >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ServerGCGBackToDuelReq::set_verify_code(
          (proto::ServerGCGBackToDuelReq *const)(v2 + 128),
          game_info->verify_code);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SessionLoginReq = Player::getSessionLoginReq(this->player_);
        v7 = proto::PlayerLoginReq::client_data_version(SessionLoginReq);
        proto::ServerGCGBackToDuelReq::set_client_data_version((proto::ServerGCGBackToDuelReq *const)(v2 + 128), v7);
        PlayerGCGComp::sendToGameMode(gcg_comp, (const google::protobuf::Message *)(v2 + 128));
        proto::ServerGCGBackToDuelReq::~ServerGCGBackToDuelReq((proto::ServerGCGBackToDuelReq *const)(v2 + 128));
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      PlayerGCGComp::tryGiveUpGame(GCGComp);
      common::tools::perf::make_shared<proto::GCGBackToDuelRsp>();
      rsp_0 = std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      std::shared_ptr<proto::GCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGBackToDuelRsp> *const)(v2 + 96));
    }
    if ( ret )
    {
      common::tools::perf::make_shared<proto::GCGBackToDuelRsp>();
      rsp_1 = std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGBackToDuelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto::GCGBackToDuelRsp::set_retcode(rsp_1, ret);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_1);
      std::shared_ptr<proto::GCGBackToDuelRsp>::~shared_ptr((std::shared_ptr<proto::GCGBackToDuelRsp> *const)(v2 + 96));
    }
    v5 = ret;
  }
  std::shared_ptr<proto::GCGBackToDuelReq const>::~shared_ptr((std::shared_ptr<const proto::GCGBackToDuelReq> *const)(v2 + 64));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 562: range 00000000168B3D8E-00000000168B4246
int32_t __cdecl PlayerGCGHandler::onGCGSettleOptionReq(
        PlayerGCGHandler *const this,
        const proto::GCGSettleOptionReq *req,
        proto::GCGSettleOptionRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::GCGSettleOption v8; // eax
  PlayerDungeonComp *DungeonComp; // rax
  PlayerGCGComp *GCGComp; // rax
  GCGLevelChallenge *LevelChallenge; // rax
  PlayerGCGComp *v12; // rax
  GCGLevelChallenge *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  proto::GCGSettleOption val; // [rsp+20h] [rbp-A0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-9Ch]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 dungeon_scene_ptr:572";
  *(_QWORD *)(v3 + 16) = PlayerGCGHandler::onGCGSettleOptionReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gcg_comp = Player::getGCGComp(this->player_);
  if ( PlayerGCGComp::isInGame(gcg_comp) )
  {
    v6 = 12116;
    goto LABEL_33;
  }
  if ( !PlayerGCGComp::isInGCGDungeon(gcg_comp) )
  {
    v6 = 12117;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 32));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( DungeonScene::getDungeonResult(v7) == DUNGEON_RESULT_NONE )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGSettleOptionReq",
        581);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"dungeon not settle.");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
      goto LABEL_32;
    }
    ret = 0;
    v8 = proto::GCGSettleOptionReq::option(req);
    if ( v8 == GCG_SETTLE_OPT_RESTART )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      LevelChallenge = PlayerGCGComp::getLevelChallenge(GCGComp);
      ret = GCGLevelChallenge::restartLevel(LevelChallenge);
      goto LABEL_31;
    }
    if ( v8 > GCG_SETTLE_OPT_RESTART )
      goto LABEL_30;
    if ( v8 == GCG_SETTLE_OPT_EXIT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      DungeonComp = Player::getDungeonComp(this->player_);
      PlayerDungeonComp::quitCurDungeon(DungeonComp, DUNGEON_QUIT_REASON_PLAYER_EXIT);
      goto LABEL_31;
    }
    if ( v8 == GCG_SETTLE_OPT_CONTINUE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = Player::getGCGComp(this->player_);
      v13 = PlayerGCGComp::getLevelChallenge(v12);
      ret = GCGLevelChallenge::continueLevel(v13);
    }
    else
    {
LABEL_30:
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_gcg_handler.cpp",
        "onGCGSettleOptionReq",
        603);
      v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v19,
              (const char (*)[19])"unsupport option. ");
      val = proto::GCGSettleOptionReq::option(req);
      common::milog::MiLogStream::operator<<<proto::GCGSettleOption,(proto::GCGSettleOption*)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      ret = 12118;
    }
LABEL_31:
    v6 = ret;
    goto LABEL_32;
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/handler/player_gcg_handler.cpp",
    "onGCGSettleOptionReq",
    575);
  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v19, (const char (*)[26])"getCurDungeon is nullptr.");
  common::milog::MiLogStream::~MiLogStream(&v19);
  v6 = -1;
LABEL_32:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
LABEL_33:
  result = v6;
  if ( v20 == (char *)v3 )
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

// Line 615: range 00000000168B4248-00000000168B4308
int32_t __cdecl PlayerGCGHandler::onGCGDSChangeCardFaceReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSChangeCardFaceReq *req,
        proto::GCGDSChangeCardFaceRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerGCGComp *GCGComp; // rax
  signed int v6; // ebx
  uint32_t v7; // ecx
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-18h]

  v3 = proto::GCGDSChangeCardFaceReq::card_id(req);
  proto::GCGDSChangeCardFaceRsp::set_card_id(rsp_0, v3);
  v4 = proto::GCGDSChangeCardFaceReq::face_type(req);
  proto::GCGDSChangeCardFaceRsp::set_face_type(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v6 = proto::GCGDSChangeCardFaceReq::face_type(req);
  v7 = proto::GCGDSChangeCardFaceReq::card_id(req);
  return GCGDeckSystem::setCardFaceType(deck_system, v7, (data::GCGCardFaceType)v6);
};

// Line 623: range 00000000168B430A-00000000168B43CA
int32_t __cdecl PlayerGCGHandler::onGCGDSChangeCardBackReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSChangeCardBackReq *req,
        proto::GCGDSChangeCardBackRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerGCGComp *GCGComp; // rax
  uint32_t v6; // ebx
  uint32_t v7; // ecx
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-18h]

  v3 = proto::GCGDSChangeCardBackReq::deck_id(req);
  proto::GCGDSChangeCardBackRsp::set_deck_id(rsp_0, v3);
  v4 = proto::GCGDSChangeCardBackReq::card_back_id(req);
  proto::GCGDSChangeCardBackRsp::set_card_back_id(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v6 = proto::GCGDSChangeCardBackReq::card_back_id(req);
  v7 = proto::GCGDSChangeCardBackReq::deck_id(req);
  return GCGDeckSystem::setDeckCardBackId(deck_system, v7, v6);
};

// Line 631: range 00000000168B43CC-00000000168B448C
int32_t __cdecl PlayerGCGHandler::onGCGDSChangeFieldReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSChangeFieldReq *req,
        proto::GCGDSChangeFieldRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerGCGComp *GCGComp; // rax
  uint32_t v6; // ebx
  uint32_t v7; // ecx
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-18h]

  v3 = proto::GCGDSChangeFieldReq::deck_id(req);
  proto::GCGDSChangeFieldRsp::set_deck_id(rsp_0, v3);
  v4 = proto::GCGDSChangeFieldReq::field_id(req);
  proto::GCGDSChangeFieldRsp::set_field_id(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v6 = proto::GCGDSChangeFieldReq::field_id(req);
  v7 = proto::GCGDSChangeFieldReq::deck_id(req);
  return GCGDeckSystem::setDeckFieldId(deck_system, v7, v6);
};

// Line 639: range 00000000168B47B2-00000000168B52B6
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerGCGHandler::onGCGDSChangeDeckNameReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  google::protobuf::uint32 v7; // eax
  const std::string *v8; // rax
  PlayerGCGComp *GCGComp; // rax
  const std::string *v10; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v11; // rsi
  common::minet::Packet *v12; // rax
  uint64_t change_deck_name_ms; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v18; // rax
  GameserverService *v19; // r14
  const std::shared_ptr<common::minet::Packet> *v20; // rsi
  __suseconds_t v21; // rdx
  common::minet::PacketPtr v22; // rdi
  common::minet::Packet *v23; // rax
  common::minet::Packet *v24; // rax
  common::minet::PacketPtr v25; // rdi
  common::minet::Packet *v26; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v27; // rsi
  common::minet::Packet *v28; // rax
  common::milog::MiLogStream *v29; // r14
  const std::string *v30; // r14
  uint32_t v31; // eax
  GameserverService *v32; // r14
  const std::shared_ptr<common::minet::Packet> *v33; // rsi
  common::milog::MiLogStream *v34; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-270h] BYREF
  int32_t ret; // [rsp+14h] [rbp-26Ch]
  uint32_t async_http_type; // [rsp+18h] [rbp-268h]
  int32_t ret_0; // [rsp+1Ch] [rbp-264h]
  const proto::GCGDSChangeDeckNameReq *req; // [rsp+20h] [rbp-260h]
  proto::GCGDSChangeDeckNameRsp *rsp_0; // [rsp+28h] [rbp-258h]
  GCGDeckSystem *deck_system; // [rsp+30h] [rbp-250h]
  uint64_t now_ms; // [rsp+38h] [rbp-248h]
  std::shared_ptr<common::minet::Packet> v44; // [rsp+40h] [rbp-240h] BYREF
  PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v45; // [rsp+50h] [rbp-230h] BYREF
  common::milog::MiLogStream v46; // [rsp+70h] [rbp-210h] BYREF
  char v47[496]; // [rsp+90h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 11 req_ptr:640 80 16 11 rsp_ptr:640 112 16 9 timer:661 144 240 12 http_req:661";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGDSChangeDeckNameReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862732] = -202116109;
  v4[536862733] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::GCGDSChangeDeckNameReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::GCGDSChangeDeckNameReq const>(
         (const std::shared_ptr<const proto::GCGDSChangeDeckNameReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGDSChangeDeckNameReq",
      640);
    common::milog::MiLogStream::operator()(&v46, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v6 = -1;
    goto LABEL_38;
  }
  req = std::__shared_ptr_access<proto::GCGDSChangeDeckNameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSChangeDeckNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::GCGDSChangeDeckNameRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GCGDSChangeDeckNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSChangeDeckNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::GCGDSChangeDeckNameRsp::set_retcode(rsp_0, -1);
  v7 = proto::GCGDSChangeDeckNameReq::deck_id(req);
  proto::GCGDSChangeDeckNameRsp::set_deck_id(rsp_0, v7);
  v8 = proto::GCGDSChangeDeckNameReq::name[abi:cxx11](req);
  proto::GCGDSChangeDeckNameRsp::set_name(rsp_0, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v10 = proto::GCGDSChangeDeckNameReq::name[abi:cxx11](req);
  if ( GCGDeckSystem::checkDeckName(deck_system, v10) )
  {
    proto::GCGDSChangeDeckNameRsp::set_retcode(rsp_0, 12218);
  }
  else
  {
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v11);
    if ( common::minet::Packet::getExt(v12, 2u) )
    {
      v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v27);
      if ( common::minet::Packet::getExt(v28, 3u) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_gcg_handler.cpp",
          "onGCGDSChangeDeckNameReq",
          668);
        v29 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v46,
                (const char (*)[46])"GCGDSChangeDeckName failed, word illegal uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
        common::milog::MiLogStream::~MiLogStream(&v46);
        proto::GCGDSChangeDeckNameRsp::set_retcode(rsp_0, 12218);
      }
      else
      {
        v30 = proto::GCGDSChangeDeckNameReq::name[abi:cxx11](req);
        v31 = proto::GCGDSChangeDeckNameReq::deck_id(req);
        ret = GCGDeckSystem::setDeckName(deck_system, v31, v30);
        proto::GCGDSChangeDeckNameRsp::set_retcode(rsp_0, ret);
      }
    }
    else
    {
      now_ms = common::tools::TimeUtils::getNowMs();
      if ( *(_BYTE *)(((unsigned __int64)&this->change_deck_name_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      change_deck_name_ms = this->change_deck_name_ms_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 112));
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      LOBYTE(change_deck_name_ms) = now_ms < change_deck_name_ms
                                           + ConstValueExcelConfigMgr::getGCGDeckChangeNameCD(&v14->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
      if ( !(_BYTE)change_deck_name_ms )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->change_deck_name_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->change_deck_name_ms_);
        this->change_deck_name_ms_ = now_ms;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v44);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
        if ( *(char *)(((unsigned __int64)&v15->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v15 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v15->is_word_filter_use_remote);
        is_word_filter_use_remote = v15->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v18 = proto::GCGDSChangeDeckNameReq::name[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 144), v18, player, 0x10u);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x1D08u);
          v19 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v45.__packet_ptr, v20);
          v21 = *(_QWORD *)(v2 + 120);
          v45.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 112);
          v45.__timer.start_tv_.tv_usec = v21;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v46,
            &v45);
          ret_0 = GameserverService::asyncHttpRequest(
                    v19,
                    (const common::minet::http_client::HttpRequest *)(v2 + 144),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v46);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v46);
          PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v45);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/player_gcg_handler.cpp",
              "onGCGDSChangeDeckNameReq",
              661);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v46,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v46);
            v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22._M_refcount._M_pi);
            common::minet::Packet::setExt(v23, 2u, 1u);
            v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22._M_refcount._M_pi);
            common::minet::Packet::setExt(v24, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v44,
              (const std::shared_ptr<common::minet::Packet> *)v22._M_refcount._M_pi);
            v22._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v44;
            ServiceBox::pushPacketToService(v22);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v44);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 144));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
        }
        else
        {
          v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v25._M_refcount._M_pi);
          common::minet::Packet::setExt(v26, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v44,
            (const std::shared_ptr<common::minet::Packet> *)v25._M_refcount._M_pi);
          v25._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v44;
          ServiceBox::pushPacketToService(v25);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v44);
        }
        v6 = 0;
        goto LABEL_37;
      }
      proto::GCGDSChangeDeckNameRsp::set_retcode(rsp_0, 12220);
    }
  }
  v32 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v44, v33);
  std::shared_ptr<proto::GCGDSChangeDeckNameRsp>::shared_ptr(
    (std::shared_ptr<proto::GCGDSChangeDeckNameRsp> *const)(v2 + 112),
    (const std::shared_ptr<proto::GCGDSChangeDeckNameRsp> *)(v2 + 80));
  LOBYTE(v32) = ServiceBase::sendRsp<proto::GCGDSChangeDeckNameRsp>(
                  v32,
                  (std::shared_ptr<proto::GCGDSChangeDeckNameRsp> *)(v2 + 112),
                  &v44) != 0;
  std::shared_ptr<proto::GCGDSChangeDeckNameRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeDeckNameRsp> *const)(v2 + 112));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v44);
  if ( (_BYTE)v32 )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGDSChangeDeckNameReq",
      680);
    v34 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v46,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v34, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v6 = -1;
  }
  else
  {
    v6 = proto::GCGDSChangeDeckNameRsp::retcode(rsp_0);
  }
LABEL_37:
  std::shared_ptr<proto::GCGDSChangeDeckNameRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeDeckNameRsp> *const)(v2 + 80));
LABEL_38:
  std::shared_ptr<proto::GCGDSChangeDeckNameReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSChangeDeckNameReq> *const)(v2 + 48));
  result = v6;
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 661: range 00000000168EEA76-00000000168EEAFF
void __cdecl PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 661: range 00000000168EEBCA-00000000168EEC53
void __cdecl PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 661: range 00000000168B448E-00000000168B4784
void __cdecl PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  MonitorReport *v7; // r14
  int v8; // eax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rcx
  proto::GCGDSChangeDeckNameReq *v11; // rax
  std::string *v12; // rdx
  common::minet::PacketPtr v13; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:661";
  *(_QWORD *)(v4 + 16) = PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v8 = common::tools::TimeUtils::Timer::time(&__closure->__timer);
  MonitorReport::addValue(v7, MONITOR_WORD_FILTER_HTTP_COST, v8);
  RemoteWordFilter::processQueryRsp[abi:cxx11](&__in, rsp_0);
  action_type = std::get<0ul,RemoteWordFilter::ActionType,std::string>(&__in);
  replace_str = std::get<1ul,RemoteWordFilter::ActionType,std::string>(&__in);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  common::minet::Packet::setExt(v9, 2u, 1u);
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::minet::Packet::setExt(v10, 3u, *action_type);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *action_type == WORD_FILTER_REPLACE )
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    common::minet::Packet::getProto<proto::GCGDSChangeDeckNameReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::GCGDSChangeDeckNameReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGDSChangeDeckNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::GCGDSChangeDeckNameReq::mutable_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::GCGDSChangeDeckNameReq>::~shared_ptr((std::shared_ptr<proto::GCGDSChangeDeckNameReq> *const)(v4 + 32));
  }
  v13._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v13._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v13);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 661: range 00000000168B4786-00000000168B47B0
void __cdecl PlayerGCGHandler::onGCGDSChangeDeckNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        PlayerGCGHandler::onGCGDSChangeDeckNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 687: range 00000000168B55DC-00000000168B6471
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerGCGHandler::onGCGDSDeckSaveReq(
        PlayerGCGHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  google::protobuf::uint32 v7; // eax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // r14
  PlayerGCGComp *GCGComp; // rax
  const std::string *v11; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v12; // rsi
  common::minet::Packet *v13; // rax
  uint64_t save_deck_ms; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v19; // rax
  GameserverService *v20; // r14
  const std::shared_ptr<common::minet::Packet> *v21; // rsi
  __suseconds_t v22; // rdx
  common::minet::PacketPtr v23; // rdi
  common::minet::Packet *v24; // rax
  common::minet::Packet *v25; // rax
  common::minet::PacketPtr v26; // rdi
  common::minet::Packet *v27; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v28; // rsi
  common::minet::Packet *v29; // rax
  common::milog::MiLogStream *v30; // r14
  const google::protobuf::RepeatedField<unsigned int> *v31; // rax
  const google::protobuf::RepeatedField<unsigned int> *v32; // rax
  const std::string *v33; // r14
  uint32_t v34; // eax
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  bool isValid; // al
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  GameserverService *v39; // r14
  const std::shared_ptr<common::minet::Packet> *v40; // rsi
  common::milog::MiLogStream *v41; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-31Ch] BYREF
  uint32_t async_http_type; // [rsp+18h] [rbp-318h]
  int32_t ret_0; // [rsp+1Ch] [rbp-314h]
  const proto::GCGDSDeckSaveReq *req; // [rsp+20h] [rbp-310h]
  proto::GCGDSDeckSaveRsp *rsp_0; // [rsp+28h] [rbp-308h]
  GCGDeckSystem *deck_system; // [rsp+30h] [rbp-300h]
  std::tuple_element<0,std::tuple<int,const std::shared_ptr<const GCGDSDeck> > >::type *ret; // [rsp+38h] [rbp-2F8h]
  std::tuple_element<0,std::tuple<const std::shared_ptr<const GCGDSDeck> > >::type *deck_ptr; // [rsp+40h] [rbp-2F0h]
  uint64_t now_ms; // [rsp+48h] [rbp-2E8h]
  std::shared_ptr<common::minet::Packet> v52; // [rsp+50h] [rbp-2E0h] BYREF
  std::tuple<int,const std::shared_ptr<const GCGDSDeck> > __t; // [rsp+60h] [rbp-2D0h] BYREF
  PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v54; // [rsp+80h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v55; // [rsp+A0h] [rbp-290h] BYREF
  char v56[624]; // [rsp+C0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 16 11 req_ptr:688 80 16 11 rsp_ptr:688 112 16 9 timer:714 144 24 12 card_vec:726 208 24 22 "
                        "character_card_vec:728 272 240 12 http_req:714";
  *(_QWORD *)(v2 + 16) = PlayerGCGHandler::onGCGDSDeckSaveReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::GCGDSDeckSaveReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::GCGDSDeckSaveReq const>(
         (const std::shared_ptr<const proto::GCGDSDeckSaveReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGDSDeckSaveReq",
      688);
    common::milog::MiLogStream::operator()(&v55, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v6 = -1;
    goto LABEL_56;
  }
  req = std::__shared_ptr_access<proto::GCGDSDeckSaveReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GCGDSDeckSaveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::GCGDSDeckSaveRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GCGDSDeckSaveRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGDSDeckSaveRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, -1);
  v7 = proto::GCGDSDeckSaveReq::deck_id(req);
  proto::GCGDSDeckSaveRsp::set_deck_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCE8u) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGDSDeckSaveReq",
      694);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v55,
           (const char (*)[35])"OPEN_STATE_GCG_DECK not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v55);
    proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, 141);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GCGComp = Player::getGCGComp(this->player_);
    deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
    v11 = proto::GCGDSDeckSaveReq::name[abi:cxx11](req);
    if ( GCGDeckSystem::checkDeckName(deck_system, v11) )
    {
      proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, 12218);
    }
    else
    {
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v12);
      if ( common::minet::Packet::getExt(v13, 2u) )
      {
        v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v28);
        if ( common::minet::Packet::getExt(v29, 3u) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/player_gcg_handler.cpp",
            "onGCGDSDeckSaveReq",
            721);
          v30 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v55,
                  (const char (*)[40])"GCGDSDeckSave failed, word illegal uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
          common::milog::MiLogStream::~MiLogStream(&v55);
          proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, 12218);
        }
        else
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
          v31 = proto::GCGDSDeckSaveReq::card_list(req);
          common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
            v31,
            (std::vector<unsigned int> *)(v2 + 144));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 208));
          v32 = proto::GCGDSDeckSaveReq::character_card_list(req);
          common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
            v32,
            (std::vector<unsigned int> *)(v2 + 208));
          v33 = proto::GCGDSDeckSaveReq::name[abi:cxx11](req);
          v34 = proto::GCGDSDeckSaveReq::deck_id(req);
          GCGDeckSystem::saveDeck(
            &__t,
            deck_system,
            v34,
            v33,
            (const std::vector<unsigned int> *)(v2 + 208),
            (const std::vector<unsigned int> *)(v2 + 144));
          ret = std::get<0ul,int,std::shared_ptr<GCGDSDeck const> const>(&__t);
          deck_ptr = std::get<1ul,int,std::shared_ptr<GCGDSDeck const> const>(&__t);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, *ret);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !*ret && std::operator!=<GCGDSDeck const>(deck_ptr, 0LL) )
          {
            v36 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
            isValid = GCGDSDeck::isValid(v36);
            proto::GCGDSDeckSaveRsp::set_is_valid(rsp_0, isValid);
            v38 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&v38->create_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v38->create_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::GCGDSDeckSaveRsp::set_create_time(rsp_0, v38->create_time);
          }
          std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::~tuple(&__t);
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 208));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
        }
      }
      else
      {
        now_ms = common::tools::TimeUtils::getNowMs();
        if ( *(_BYTE *)(((unsigned __int64)&this->save_deck_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        save_deck_ms = this->save_deck_ms_;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 112));
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        LOBYTE(save_deck_ms) = now_ms < save_deck_ms
                                      + ConstValueExcelConfigMgr::getGCGDeckSaveCD(&v15->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
        if ( !(_BYTE)save_deck_ms )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->save_deck_ms_ >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->save_deck_ms_);
          this->save_deck_ms_ = now_ms;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v52);
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
          if ( *(char *)(((unsigned __int64)&v16->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
            v16 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v16->is_word_filter_use_remote);
          is_word_filter_use_remote = v16->is_word_filter_use_remote;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
          if ( is_word_filter_use_remote )
          {
            common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = this->player_;
            v19 = proto::GCGDSDeckSaveReq::name[abi:cxx11](req);
            RemoteWordFilter::buildQueryHttpReq(
              (common::minet::http_client::HttpRequest *)(v2 + 272),
              v19,
              player,
              0x10u);
            async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x1BC0u);
            v20 = ServiceBox::findService<GameserverService>();
            std::shared_ptr<common::minet::Packet>::shared_ptr(&v54.__packet_ptr, v21);
            v22 = *(_QWORD *)(v2 + 120);
            v54.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 112);
            v54.__timer.start_tv_.tv_usec = v22;
            std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
              (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55,
              &v54);
            ret_0 = GameserverService::asyncHttpRequest(
                      v20,
                      (const common::minet::http_client::HttpRequest *)(v2 + 272),
                      5LL,
                      async_http_type,
                      (common::minet::http_client::ResponseCallBackFunc *)&v55);
            std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55);
            PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v54);
            if ( ret_0 )
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/player_gcg_handler.cpp",
                "onGCGDSDeckSaveReq",
                714);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v55,
                (const char (*)[23])"asyncHttpRequest fails");
              common::milog::MiLogStream::~MiLogStream(&v55);
              v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
              common::minet::Packet::setExt(v24, 2u, 1u);
              v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
              common::minet::Packet::setExt(v25, 3u, 4u);
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                &v52,
                (const std::shared_ptr<common::minet::Packet> *)v23._M_refcount._M_pi);
              v23._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v52;
              ServiceBox::pushPacketToService(v23);
              std::shared_ptr<common::minet::Packet>::~shared_ptr(&v52);
            }
            common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 272));
            common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
          }
          else
          {
            v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26._M_refcount._M_pi);
            common::minet::Packet::setExt(v27, 2u, 1u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v52,
              (const std::shared_ptr<common::minet::Packet> *)v26._M_refcount._M_pi);
            v26._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v52;
            ServiceBox::pushPacketToService(v26);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v52);
          }
          v6 = 0;
          goto LABEL_55;
        }
        proto::GCGDSDeckSaveRsp::set_retcode(rsp_0, 12219);
      }
    }
  }
  v39 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v52, v40);
  std::shared_ptr<proto::GCGDSDeckSaveRsp>::shared_ptr(
    (std::shared_ptr<proto::GCGDSDeckSaveRsp> *const)(v2 + 112),
    (const std::shared_ptr<proto::GCGDSDeckSaveRsp> *)(v2 + 80));
  LOBYTE(v39) = ServiceBase::sendRsp<proto::GCGDSDeckSaveRsp>(
                  v39,
                  (std::shared_ptr<proto::GCGDSDeckSaveRsp> *)(v2 + 112),
                  &v52) != 0;
  std::shared_ptr<proto::GCGDSDeckSaveRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSDeckSaveRsp> *const)(v2 + 112));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v52);
  if ( (_BYTE)v39 )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGDSDeckSaveReq",
      742);
    v41 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v55,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v41, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v6 = -1;
  }
  else
  {
    v6 = proto::GCGDSDeckSaveRsp::retcode(rsp_0);
  }
LABEL_55:
  std::shared_ptr<proto::GCGDSDeckSaveRsp>::~shared_ptr((std::shared_ptr<proto::GCGDSDeckSaveRsp> *const)(v2 + 80));
LABEL_56:
  std::shared_ptr<proto::GCGDSDeckSaveReq const>::~shared_ptr((std::shared_ptr<const proto::GCGDSDeckSaveReq> *const)(v2 + 48));
  result = v6;
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 714: range 00000000168EED46-00000000168EEDCF
void __cdecl PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 714: range 00000000168EEE9A-00000000168EEF23
void __cdecl PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 714: range 00000000168B52B8-00000000168B55AE
void __cdecl PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  MonitorReport *v7; // r14
  int v8; // eax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rcx
  proto::GCGDSDeckSaveReq *v11; // rax
  std::string *v12; // rdx
  common::minet::PacketPtr v13; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:714";
  *(_QWORD *)(v4 + 16) = PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v8 = common::tools::TimeUtils::Timer::time(&__closure->__timer);
  MonitorReport::addValue(v7, MONITOR_WORD_FILTER_HTTP_COST, v8);
  RemoteWordFilter::processQueryRsp[abi:cxx11](&__in, rsp_0);
  action_type = std::get<0ul,RemoteWordFilter::ActionType,std::string>(&__in);
  replace_str = std::get<1ul,RemoteWordFilter::ActionType,std::string>(&__in);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  common::minet::Packet::setExt(v9, 2u, 1u);
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::minet::Packet::setExt(v10, 3u, *action_type);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *action_type == WORD_FILTER_REPLACE )
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    common::minet::Packet::getProto<proto::GCGDSDeckSaveReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::GCGDSDeckSaveReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGDSDeckSaveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::GCGDSDeckSaveReq::mutable_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::GCGDSDeckSaveReq>::~shared_ptr((std::shared_ptr<proto::GCGDSDeckSaveReq> *const)(v4 + 32));
  }
  v13._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v13._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v13);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 714: range 00000000168B55B0-00000000168B55DA
void __cdecl PlayerGCGHandler::onGCGDSDeckSaveReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        PlayerGCGHandler::onGCGDSDeckSaveReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 749: range 00000000168B6472-00000000168B6500
int32_t __cdecl PlayerGCGHandler::onGCGDSChangeCurDeckReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSChangeCurDeckReq *req,
        proto::GCGDSChangeCurDeckRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerGCGComp *GCGComp; // rax
  uint32_t v5; // edx
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  v3 = proto::GCGDSChangeCurDeckReq::deck_id(req);
  proto::GCGDSChangeCurDeckRsp::set_deck_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v5 = proto::GCGDSChangeCurDeckReq::deck_id(req);
  return GCGDeckSystem::setCurDeckId(deck_system, v5);
};

// Line 756: range 00000000168B6502-00000000168B6590
int32_t __cdecl PlayerGCGHandler::onGCGDSDeleteDeckReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSDeleteDeckReq *req,
        proto::GCGDSDeleteDeckRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerGCGComp *GCGComp; // rax
  uint32_t v5; // edx
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  v3 = proto::GCGDSDeleteDeckReq::deck_id(req);
  proto::GCGDSDeleteDeckRsp::set_deck_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  v5 = proto::GCGDSDeleteDeckReq::deck_id(req);
  return GCGDeckSystem::deleteDeck(deck_system, v5);
};

// Line 763: range 00000000168B6592-00000000168B663C
int32_t __cdecl PlayerGCGHandler::onGCGDSTakeCardProficiencyRewardReq(
        PlayerGCGHandler *const this,
        const proto::GCGDSTakeCardProficiencyRewardReq *req,
        proto::GCGDSTakeCardProficiencyRewardRsp *rsp_0)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t card_id; // [rsp+20h] [rbp-10h]
  uint32_t reward_index; // [rsp+24h] [rbp-Ch]
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  card_id = proto::GCGDSTakeCardProficiencyRewardReq::card_id(req);
  reward_index = proto::GCGDSTakeCardProficiencyRewardReq::reward_index(req);
  proto::GCGDSTakeCardProficiencyRewardRsp::set_card_id(rsp_0, card_id);
  proto::GCGDSTakeCardProficiencyRewardRsp::set_reward_index(rsp_0, reward_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  return GCGDeckSystem::tryGrantProficiencyReward(deck_system, card_id, reward_index);
};

// Line 777: range 00000000168B663E-00000000168B66C6
int32_t __cdecl PlayerGCGHandler::onGCGTCInviteReq(
        PlayerGCGHandler *const this,
        const proto::GCGTCInviteReq *req,
        proto::GCGTCInviteRsp *rsp_0)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t v4; // ebx
  uint32_t v5; // ecx
  GCGTavernChallenge *tavern_challenge; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  tavern_challenge = PlayerGCGComp::getTavernChallenge(GCGComp);
  v4 = proto::GCGTCInviteReq::level_id(req);
  v5 = proto::GCGTCInviteReq::character_id(req);
  return GCGTavernChallenge::invite(tavern_challenge, v5, v4);
};

// Line 788: range 00000000168B66C8-00000000168B6755
int32_t __cdecl PlayerGCGHandler::onGCGGrowthLevelTakeRewardReq(
        PlayerGCGHandler *const this,
        const proto::GCGGrowthLevelTakeRewardReq *req,
        proto::GCGGrowthLevelTakeRewardRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerGCGComp *GCGComp; // rax
  GCGBasic *Basic; // rbx
  uint32_t v6; // eax

  v3 = proto::GCGGrowthLevelTakeRewardReq::level(req);
  proto::GCGGrowthLevelTakeRewardRsp::set_level(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  Basic = PlayerGCGComp::getBasic(GCGComp);
  v6 = proto::GCGGrowthLevelTakeRewardReq::level(req);
  return GCGBasic::takeLevelReward(Basic, v6);
};

// Line 794: range 00000000168B6756-00000000168B6809
int32_t __cdecl PlayerGCGHandler::onGCGInviteGuestBattleReq(
        PlayerGCGHandler *const this,
        const proto::GCGInviteGuestBattleReq *req,
        proto::GCGInviteGuestBattleRsp *rsp_0)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t InviteExpireTime; // edx
  uint32_t uid; // [rsp+20h] [rbp-10h]
  int32_t retcode; // [rsp+24h] [rbp-Ch]
  GCGBasic *gcg_gasic; // [rsp+28h] [rbp-8h]

  uid = proto::GCGInviteGuestBattleReq::uid(req);
  proto::GCGInviteGuestBattleRsp::set_uid(rsp_0, uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  gcg_gasic = PlayerGCGComp::getBasic(GCGComp);
  retcode = GCGBasic::invite(gcg_gasic, uid, rsp_0);
  if ( !retcode )
  {
    InviteExpireTime = GCGBasic::getInviteExpireTime(gcg_gasic);
    proto::GCGInviteGuestBattleRsp::set_confirm_end_time(rsp_0, InviteExpireTime);
  }
  return retcode;
};

// Line 807: range 00000000168B680A-00000000168B6882
int32_t __cdecl PlayerGCGHandler::onGCGApplyInviteBattleReq(
        PlayerGCGHandler *const this,
        const proto::GCGApplyInviteBattleReq *req,
        proto::GCGApplyInviteBattleRsp *rsp_0)
{
  PlayerGCGComp *GCGComp; // rax
  GCGBasic *Basic; // rbx
  bool is_agree; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  Basic = PlayerGCGComp::getBasic(GCGComp);
  is_agree = proto::GCGApplyInviteBattleReq::is_agree(req);
  return GCGBasic::inviteApply(Basic, is_agree, rsp_0);
};

// Line 812: range 00000000168B693A-00000000168B6B02
int32_t __cdecl PlayerGCGHandler::onGCGWorldPlayerGCGStateReq(
        PlayerGCGHandler *const this,
        const proto::GCGWorldPlayerGCGStateReq *req,
        proto::GCGWorldPlayerGCGStateRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  int32_t result; // eax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 world_ptr:813";
  *(_QWORD *)(v3 + 16) = PlayerGCGHandler::onGCGWorldPlayerGCGStateReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    v6 = 12105;
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerGCGHandler::onGCGWorldPlayerGCGStateReq(proto::GCGWorldPlayerGCGStateReq const&,proto::GCGWorldPlayerGCGStateRsp &)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerGCGHandler::onGCGWorldPlayerGCGStateReq::<lambda(Player&)>)rsp_0);
    World::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    v6 = 0;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v6;
  if ( v11 == (char *)v3 )
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

// Line 818: range 00000000168B6884-00000000168B6939
ForeachPolicy __cdecl PlayerGCGHandler::onGCGWorldPlayerGCGStateReq(proto::GCGWorldPlayerGCGStateReq const&,proto::GCGWorldPlayerGCGStateRsp &)::{lambda(Player &)#1}::operator()(
        const PlayerGCGHandler::onGCGWorldPlayerGCGStateReq::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rax
  bool isStateOpen; // dl
  PlayerGCGComp *GCGComp; // rax
  bool isResourceComplete; // dl
  proto::GCGPlayerGCGState *player_state; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_state = proto::GCGWorldPlayerGCGStateRsp::add_player_state(__closure->__rsp);
  Uid = Player::getUid(player);
  proto::GCGPlayerGCGState::set_uid(player_state, Uid);
  BasicComp = Player::getBasicComp(player);
  isStateOpen = PlayerBasicComp::isStateOpen(BasicComp, 0xCE7u);
  proto::GCGPlayerGCGState::set_is_gcg_state_open(player_state, isStateOpen);
  GCGComp = Player::getGCGComp(player);
  isResourceComplete = PlayerGCGComp::isResourceComplete(GCGComp);
  proto::GCGPlayerGCGState::set_is_reasouce_complete(player_state, isResourceComplete);
  return 0;
};

// Line 833: range 00000000168B6B04-00000000168B6BFA
int32_t __cdecl PlayerGCGHandler::onGCGStartChallengeReq(
        PlayerGCGHandler *const this,
        const proto::GCGStartChallengeReq *req,
        proto::GCGStartChallengeRsp *rsp_0)
{
  proto::GCGLevelType v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // edx
  PlayerGCGComp *GCGComp; // rax
  proto::GCGLevelType v7; // r12d
  uint32_t v8; // ebx
  uint32_t v9; // esi
  GCGLevelChallenge *level_challenge; // [rsp+28h] [rbp-18h]

  v3 = proto::GCGStartChallengeReq::level_type(req);
  proto::GCGStartChallengeRsp::set_level_type(rsp_0, v3);
  v4 = proto::GCGStartChallengeReq::level_id(req);
  proto::GCGStartChallengeRsp::set_level_id(rsp_0, v4);
  v5 = proto::GCGStartChallengeReq::config_id(req);
  proto::GCGStartChallengeRsp::set_config_id(rsp_0, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  v7 = proto::GCGStartChallengeReq::level_type(req);
  v8 = proto::GCGStartChallengeReq::level_id(req);
  v9 = proto::GCGStartChallengeReq::config_id(req);
  return GCGLevelChallenge::startLevel(level_challenge, v9, v8, v7, 0);
};

// Line 843: range 00000000168B6BFC-00000000168B7419
int32_t __cdecl PlayerGCGHandler::onGCGStartChallengeByCheckRewardReq(
        PlayerGCGHandler *const this,
        const proto::GCGStartChallengeByCheckRewardReq *req,
        proto::GCGStartChallengeByCheckRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::GCGLevelType v6; // edx
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  PlayerGCGComp *GCGComp; // rax
  proto::GCGLevelType v10; // r14d
  uint32_t v11; // ebx
  uint32_t v12; // eax
  int32_t started; // r14d
  uint32_t *v14; // rdx
  std::set<unsigned int>::iterator v15; // rax
  std::set<unsigned int>::iterator v16; // rax
  proto::GCGLevelType v17; // r15d
  uint32_t v18; // r14d
  uint32_t v19; // eax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  google::protobuf::RepeatedField<unsigned int> *v21; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last; // [rsp+10h] [rbp-2D0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __lasta; // [rsp+10h] [rbp-2D0h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-2ADh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+34h] [rbp-2ACh] BYREF
  proto::GCGLevelType level_type; // [rsp+44h] [rbp-29Ch]
  uint32_t reward_id; // [rsp+48h] [rbp-298h]
  int32_t ret; // [rsp+4Ch] [rbp-294h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+50h] [rbp-290h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-288h] BYREF
  GCGLevelChallenge *level_challenge; // [rsp+60h] [rbp-280h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+68h] [rbp-278h]
  PlayerItemComp *item_comp; // [rsp+70h] [rbp-270h]
  std::set<unsigned int> *__for_range; // [rsp+78h] [rbp-268h]
  std::shared_ptr<Config> v37; // [rsp+80h] [rbp-260h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+90h] [rbp-250h] BYREF
  common::milog::MiLogStream v39; // [rsp+B0h] [rbp-230h] BYREF
  char v40[528]; // [rsp+D0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 24 10 reason:868 112 48 17 reward_id_set:870 192 48 21 exceeded_item_set:873 272 48 26 exce"
                        "eded_item_type_set:874 352 96 16 check_result:877";
  *(_QWORD *)(v3 + 16) = PlayerGCGHandler::onGCGStartChallengeByCheckRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -218959118;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862730] = -218959118;
  v5[536862734] = -202116109;
  v6 = proto::GCGStartChallengeByCheckRewardReq::level_type(req);
  proto::GCGStartChallengeByCheckRewardRsp::set_level_type(rsp_0, v6);
  v7 = proto::GCGStartChallengeByCheckRewardReq::level_id(req);
  proto::GCGStartChallengeByCheckRewardRsp::set_level_id(rsp_0, v7);
  v8 = proto::GCGStartChallengeByCheckRewardReq::config_id(req);
  proto::GCGStartChallengeByCheckRewardRsp::set_config_id(rsp_0, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GCGComp = Player::getGCGComp(this->player_);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  HIDWORD(__l._M_len) = proto::GCGStartChallengeByCheckRewardReq::level_id(req);
  level_type = proto::GCGStartChallengeByCheckRewardReq::level_type(req);
  if ( level_type == GCG_LEVEL_GUIDE_GROUP || level_type == GCG_LEVEL_BREAK || level_type == GCG_LEVEL_QUEST )
  {
    v10 = proto::GCGStartChallengeByCheckRewardReq::level_type(req);
    v11 = proto::GCGStartChallengeByCheckRewardReq::level_id(req);
    v12 = proto::GCGStartChallengeByCheckRewardReq::config_id(req);
    started = GCGLevelChallenge::startLevel(level_challenge, v12, v11, v10, 0);
  }
  else if ( HIDWORD(__l._M_len) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v37);
    HIDWORD(__l._M_array) = 3303;
    if ( GCGPlayingExcelConfigMgr::isRepeatableLevel(gcg_playing_config_mgr, HIDWORD(__l._M_len)) )
      HIDWORD(__l._M_array) = 3304;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    item_comp = Player::getItemComp(this->player_);
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 48),
      ACTION_REASON_GCG_CHALLENGE_FINISH,
      SHIDWORD(__l._M_array));
    *(_BYTE *)(v3 + 62) = 0;
    GCGLevelChallenge::getUnfinishedChallengeRewardIdSet(
      (std::set<unsigned int> *)(v3 + 112),
      level_challenge,
      HIDWORD(__l._M_len));
    LODWORD(__l._M_len) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 192));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 272));
    __for_range = (std::set<unsigned int> *)(v3 + 112);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 112))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 112))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      reward_id = *v14;
      FrontLooseCheckResult::FrontLooseCheckResult((FrontLooseCheckResult *const)(v3 + 352));
      LODWORD(__l._M_array) = reward_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        &reward_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
        &__a);
      ret = PlayerItemComp::checkFrontLooseGrantRewards(
              item_comp,
              &reward_id_vec,
              (const ActionReason *)(v3 + 48),
              (FrontLooseCheckResult *)(v3 + 352));
      std::vector<unsigned int>::~vector(&reward_id_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( ret )
      {
        LODWORD(__l._M_len) = ret;
        __last = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 352))._M_node;
        v15._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 352))._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          (std::set<unsigned int> *const)(v3 + 192),
          v15,
          (std::_Rb_tree_const_iterator<unsigned int>)__last);
        __lasta = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 400))._M_node;
        v16._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 400))._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          (std::set<unsigned int> *const)(v3 + 272),
          v16,
          (std::_Rb_tree_const_iterator<unsigned int>)__lasta);
      }
      FrontLooseCheckResult::~FrontLooseCheckResult((FrontLooseCheckResult *const)(v3 + 352));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( LODWORD(__l._M_len) )
    {
      v20 = proto::GCGStartChallengeByCheckRewardRsp::mutable_exceeded_item_list(rsp_0);
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
        (const std::set<unsigned int> *)(v3 + 192),
        v20);
      v21 = proto::GCGStartChallengeByCheckRewardRsp::mutable_exceeded_item_type_list(rsp_0);
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
        (const std::set<unsigned int> *)(v3 + 272),
        v21);
      started = __l._M_len;
    }
    else
    {
      v17 = proto::GCGStartChallengeByCheckRewardReq::level_type(req);
      v18 = proto::GCGStartChallengeByCheckRewardReq::level_id(req);
      v19 = proto::GCGStartChallengeByCheckRewardReq::config_id(req);
      started = GCGLevelChallenge::startLevel(level_challenge, v19, v18, v17, 0);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 272));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 192));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/player_gcg_handler.cpp",
      "onGCGStartChallengeByCheckRewardReq",
      858);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v39, (const char (*)[16])"level_id is 0. ");
    common::milog::MiLogStream::~MiLogStream(&v39);
    started = -1;
  }
  result = started;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};
