// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_misc_handler.cpp

// Line 53: range 00000000168C7E52-00000000168CA0D9
int32_t __cdecl PlayerMiscHandler::addPacketFuncToMap(
        PlayerMiscHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  PlayerMiscHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  PlayerMiscHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  PlayerMiscHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  PlayerMiscHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  PlayerMiscHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  PlayerMiscHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  PlayerMiscHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  PlayerMiscHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  PlayerMiscHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  PlayerMiscHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  PlayerMiscHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  PlayerMiscHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  PlayerMiscHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  PlayerMiscHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  PlayerMiscHandler **v48; // r8
  const std::_Placeholder<1> *v49; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  PlayerMiscHandler **v51; // r8
  const std::_Placeholder<1> *v52; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v53; // rax
  PlayerMiscHandler **v54; // r8
  const std::_Placeholder<1> *v55; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v56; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v57; // rax
  PlayerMiscHandler **v58; // r8
  const std::_Placeholder<1> *v59; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v60; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v62; // rax
  PlayerMiscHandler **v63; // r8
  const std::_Placeholder<1> *v64; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v65; // rax
  __m128i v66; // [rsp+0h] [rbp-1C0h] BYREF
  __m128i v67; // [rsp+10h] [rbp-1B0h] BYREF
  __m128i v68; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v69; // [rsp+30h] [rbp-190h] BYREF
  __m128i v70; // [rsp+40h] [rbp-180h] BYREF
  __m128i v71; // [rsp+50h] [rbp-170h] BYREF
  __m128i v72; // [rsp+60h] [rbp-160h] BYREF
  __m128i v73; // [rsp+70h] [rbp-150h] BYREF
  __m128i v74; // [rsp+80h] [rbp-140h] BYREF
  __m128i v75; // [rsp+90h] [rbp-130h] BYREF
  __m128i v76; // [rsp+A0h] [rbp-120h] BYREF
  __m128i v77; // [rsp+B0h] [rbp-110h] BYREF
  __m128i v78; // [rsp+C0h] [rbp-100h] BYREF
  __m128i v79; // [rsp+D0h] [rbp-F0h] BYREF
  __m128i v80; // [rsp+E0h] [rbp-E0h] BYREF
  __m128i v81; // [rsp+F0h] [rbp-D0h] BYREF
  __m128i v82; // [rsp+100h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+110h] [rbp-B0h]
  PlayerMiscHandler *thisa; // [rsp+118h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+12Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v86; // [rsp+130h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+138h] [rbp-88h] BYREF
  int (*__f[2])(PlayerMiscHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+140h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,const std::_Placeholder<1>&>::type v89; // [rsp+150h] [rbp-70h] BYREF
  common::milog::MiLogStream v90; // [rsp+170h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 98;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v86, &__y) )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/player_misc_handler.cpp",
      "addPacketFuncToMap",
      55);
    common::milog::MiLogStream::operator()(&v90, off_25E0B640, 98LL);
    common::milog::MiLogStream::~MiLogStream(&v90);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(PlayerMiscHandler *, std::shared_ptr<common::minet::Packet>))PlayerMiscHandler::onGmTalkReq;
    __f[1] = 0LL;
    std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
      &v89,
      __f,
      (PlayerMiscHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 98;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
      v5,
      &v89);
    __x = 10003;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v86, &__y) )
    {
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_misc_handler.cpp",
        "addPacketFuncToMap",
        56);
      common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10003LL);
      common::milog::MiLogStream::~MiLogStream(&v90);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __x = 10003;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
        v6,
        (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 10399;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v86, &__y) )
      {
        common::milog::MiLogStream::create(
          &v90,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/player_misc_handler.cpp",
          "addPacketFuncToMap",
          57);
        common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10399LL);
        common::milog::MiLogStream::~MiLogStream(&v90);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __x = 10399;
        v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
          v7,
          (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 7;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v86, &__y) )
        {
          common::milog::MiLogStream::create(
            &v90,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/player_misc_handler.cpp",
            "addPacketFuncToMap",
            58);
          common::milog::MiLogStream::operator()(&v90, off_25E0B640, 7LL);
          common::milog::MiLogStream::~MiLogStream(&v90);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(PlayerMiscHandler *, std::shared_ptr<common::minet::Packet>))PlayerMiscHandler::onPingReq;
          __f[1] = 0LL;
          std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
            &v89,
            __f,
            (PlayerMiscHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v8,
            v9);
          __x = 7;
          v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
            v10,
            &v89);
          __x = 10435;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v86, &__y) )
          {
            common::milog::MiLogStream::create(
              &v90,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/player_misc_handler.cpp",
              "addPacketFuncToMap",
              59);
            common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10435LL);
            common::milog::MiLogStream::~MiLogStream(&v90);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v66.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetPlayerMpStatusListRsp;
            v66.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v66);
            std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
              &v89,
              __f,
              (PlayerMiscHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v11,
              v12);
            __x = 10435;
            v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
              v13,
              &v89);
            __x = 90;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v86, &__y) )
            {
              common::milog::MiLogStream::create(
                &v90,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/player_misc_handler.cpp",
                "addPacketFuncToMap",
                60);
              common::milog::MiLogStream::operator()(&v90, off_25E0B640, 90LL);
              common::milog::MiLogStream::~MiLogStream(&v90);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v67.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetOnlinePlayerListReq;
              v67.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v67);
              std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                &v89,
                __f,
                (PlayerMiscHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v14,
                v15);
              __x = 90;
              v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                v16,
                &v89);
              __x = 10375;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v86, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v90,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/player_misc_handler.cpp",
                  "addPacketFuncToMap",
                  61);
                common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10375LL);
                common::milog::MiLogStream::~MiLogStream(&v90);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v68.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetOfflineMsgRsp;
                v68.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v68);
                std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                  &v89,
                  __f,
                  (PlayerMiscHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v17,
                  v18);
                __x = 10375;
                v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                  v19,
                  &v89);
                __x = 10221;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v86, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v90,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/player_misc_handler.cpp",
                    "addPacketFuncToMap",
                    62);
                  common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10221LL);
                  common::milog::MiLogStream::~MiLogStream(&v90);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v69.m128i_i64[0] = (__int64)PlayerMiscHandler::onPlayerCombatForceReq;
                  v69.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v69);
                  std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                    &v89,
                    __f,
                    (PlayerMiscHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v20,
                    v21);
                  __x = 10221;
                  v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                    v22,
                    &v89);
                  __x = 81;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v86, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v90,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/player_misc_handler.cpp",
                      "addPacketFuncToMap",
                      63);
                    common::milog::MiLogStream::operator()(&v90, off_25E0B640, 81LL);
                    common::milog::MiLogStream::~MiLogStream(&v90);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    __x = 81;
                    v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
                      v23,
                      (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 10275;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v86, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v90,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/player_misc_handler.cpp",
                        "addPacketFuncToMap",
                        64);
                      common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10275LL);
                      common::milog::MiLogStream::~MiLogStream(&v90);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v70.m128i_i64[0] = (__int64)PlayerMiscHandler::onQueryPlayerMemDataByMuipReq;
                      v70.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v70);
                      std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                        &v89,
                        __f,
                        (PlayerMiscHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v24,
                        v25);
                      __x = 10275;
                      v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                        v26,
                        &v89);
                      __x = 53;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v86, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v90,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/player_misc_handler.cpp",
                          "addPacketFuncToMap",
                          65);
                        common::milog::MiLogStream::operator()(&v90, off_25E0B640, 53LL);
                        common::milog::MiLogStream::~MiLogStream(&v90);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v71.m128i_i64[0] = (__int64)PlayerMiscHandler::onCheckSegmentCRCReq;
                        v71.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v71);
                        std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                          &v89,
                          __f,
                          (PlayerMiscHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v27,
                          v28);
                        __x = 53;
                        v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                          v29,
                          &v89);
                        __x = 82;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v86, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v90,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/player_misc_handler.cpp",
                            "addPacketFuncToMap",
                            66);
                          common::milog::MiLogStream::operator()(&v90, off_25E0B640, 82LL);
                          common::milog::MiLogStream::~MiLogStream(&v90);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v72.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetOnlinePlayerInfoReq;
                          v72.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v72);
                          std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                            &v89,
                            __f,
                            (PlayerMiscHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v30,
                            v31);
                          __x = 82;
                          v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                            v32,
                            &v89);
                          __x = 10421;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v86, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v90,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/player_misc_handler.cpp",
                              "addPacketFuncToMap",
                              67);
                            common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10421LL);
                            common::milog::MiLogStream::~MiLogStream(&v90);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v73.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetPlayerMpStatusInfoRsp;
                            v73.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v73);
                            std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                              &v89,
                              __f,
                              (PlayerMiscHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v33,
                              v34);
                            __x = 10421;
                            v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                              v35,
                              &v89);
                            __x = 10081;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v86, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v90,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/player_misc_handler.cpp",
                                "addPacketFuncToMap",
                                68);
                              common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10081LL);
                              common::milog::MiLogStream::~MiLogStream(&v90);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v74.m128i_i64[0] = (__int64)PlayerMiscHandler::onServerBlockPlayerMpNotify;
                              v74.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v74);
                              std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                &v89,
                                __f,
                                (PlayerMiscHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v36,
                                v37);
                              __x = 10081;
                              v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                v38,
                                &v89);
                              __x = 10005;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v86, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v90,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/player_misc_handler.cpp",
                                  "addPacketFuncToMap",
                                  69);
                                common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10005LL);
                                common::milog::MiLogStream::~MiLogStream(&v90);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v75.m128i_i64[0] = (__int64)PlayerMiscHandler::onServerBlockPlayerChatNotify;
                                v75.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v75);
                                std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                  &v89,
                                  __f,
                                  (PlayerMiscHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v39,
                                  v40);
                                __x = 10005;
                                v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                  v41,
                                  &v89);
                                __x = 10082;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v86, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v90,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/player_misc_handler.cpp",
                                    "addPacketFuncToMap",
                                    70);
                                  common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10082LL);
                                  common::milog::MiLogStream::~MiLogStream(&v90);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v76.m128i_i64[0] = (__int64)PlayerMiscHandler::onServerCheckSegmentCrcNotify;
                                  v76.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v76);
                                  std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                    &v89,
                                    __f,
                                    (PlayerMiscHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v42,
                                    v43);
                                  __x = 10082;
                                  v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                    v44,
                                    &v89);
                                  __x = 10373;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v86, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v90,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/player_misc_handler.cpp",
                                      "addPacketFuncToMap",
                                      71);
                                    common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10373LL);
                                    common::milog::MiLogStream::~MiLogStream(&v90);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v77.m128i_i64[0] = (__int64)PlayerMiscHandler::onSendOfflineMsgRsp;
                                    v77.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v77);
                                    std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                      &v89,
                                      __f,
                                      (PlayerMiscHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v45,
                                      v46);
                                    __x = 10373;
                                    v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                      v47,
                                      &v89);
                                    __x = 12218;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v86, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v90,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/player_misc_handler.cpp",
                                        "addPacketFuncToMap",
                                        73);
                                      common::milog::MiLogStream::operator()(&v90, off_25E0B640, 12218LL);
                                      common::milog::MiLogStream::~MiLogStream(&v90);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v78.m128i_i64[0] = (__int64)PlayerMiscHandler::onSendOfflineOpRsp;
                                      v78.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v78);
                                      std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                        &v89,
                                        __f,
                                        (PlayerMiscHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v48,
                                        v49);
                                      __x = 12218;
                                      v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                        v50,
                                        &v89);
                                      __x = 12207;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v86, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v90,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/player_misc_handler.cpp",
                                          "addPacketFuncToMap",
                                          74);
                                        common::milog::MiLogStream::operator()(&v90, off_25E0B640, 12207LL);
                                        common::milog::MiLogStream::~MiLogStream(&v90);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v79.m128i_i64[0] = (__int64)PlayerMiscHandler::onGetOfflineOpRsp;
                                        v79.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v79);
                                        std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                          &v89,
                                          __f,
                                          (PlayerMiscHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v51,
                                          v52);
                                        __x = 12207;
                                        v53 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                          v53,
                                          &v89);
                                        __x = 12229;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v86, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v90,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/player_misc_handler.cpp",
                                            "addPacketFuncToMap",
                                            75);
                                          common::milog::MiLogStream::operator()(&v90, off_25E0B640, 12229LL);
                                          common::milog::MiLogStream::~MiLogStream(&v90);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v80.m128i_i64[0] = (__int64)PlayerMiscHandler::onRemoveOfflineOpRsp;
                                          v80.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v80);
                                          std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                            &v89,
                                            __f,
                                            (PlayerMiscHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v54,
                                            v55);
                                          __x = 12229;
                                          v56 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                            v56,
                                            &v89);
                                          __x = 12202;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v86, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v90,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/player_misc_handler.cpp",
                                              "addPacketFuncToMap",
                                              76);
                                            common::milog::MiLogStream::operator()(&v90, off_25E0B640, 12202LL);
                                            common::milog::MiLogStream::~MiLogStream(&v90);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            __x = 12202;
                                            v57 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                                              v57,
                                              (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                            __x = 10227;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v86, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v90,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/player_misc_handler.cpp",
                                                "addPacketFuncToMap",
                                                77);
                                              common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10227LL);
                                              common::milog::MiLogStream::~MiLogStream(&v90);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              v81.m128i_i64[0] = (__int64)PlayerMiscHandler::onUpdateRedPointByMuipNotify;
                                              v81.m128i_i64[1] = 0LL;
                                              *(__m128i *)__f = _mm_load_si128(&v81);
                                              std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                                &v89,
                                                __f,
                                                (PlayerMiscHandler **)&__y,
                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                v58,
                                                v59);
                                              __x = 10227;
                                              v60 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                                v60,
                                                &v89);
                                              __x = 4;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v86, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v90,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/player_misc_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  78);
                                                common::milog::MiLogStream::operator()(&v90, off_25E0B640, 4LL);
                                                common::milog::MiLogStream::~MiLogStream(&v90);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                __x = 4;
                                                v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                                                  v61,
                                                  (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                __x = 27;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v86, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v90,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/player_misc_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    79);
                                                  common::milog::MiLogStream::operator()(&v90, off_25E0B640, 27LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v90);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  __x = 27;
                                                  v62 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                                                    v62,
                                                    (PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                  __x = 10295;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v86._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v86, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v90,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/player_misc_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      80);
                                                    common::milog::MiLogStream::operator()(&v90, off_25E0B640, 10295LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v90);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    v82.m128i_i64[0] = (__int64)PlayerMiscHandler::onPlayerMpModeReq;
                                                    v82.m128i_i64[1] = 0LL;
                                                    *(__m128i *)__f = _mm_load_si128(&v82);
                                                    std::bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerMiscHandler*,std::_Placeholder<1> const&>(
                                                      &v89,
                                                      __f,
                                                      (PlayerMiscHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v63,
                                                      v64);
                                                    __x = 10295;
                                                    v65 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerMiscHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerMiscHandler*,std::_Placeholder<1>)>>(
                                                      v65,
                                                      &v89);
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
};

// Line 56: range 00000000168C72FA-00000000168C74DC
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::PacketFreqencyExceedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:56";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PacketFreqencyExceedNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PacketFreqencyExceedNotify const>(
         (const std::shared_ptr<const proto::PacketFreqencyExceedNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      56);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::PacketFreqencyExceedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PacketFreqencyExceedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerMiscHandler::onPacketFreqencyExceedNotify(this, v7);
  }
  std::shared_ptr<proto::PacketFreqencyExceedNotify const>::~shared_ptr((std::shared_ptr<const proto::PacketFreqencyExceedNotify> *const)(v2 + 32));
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

// Line 57: range 00000000168C74DE-00000000168C76C0
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::NewOfflineMsgNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:57";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::NewOfflineMsgNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::NewOfflineMsgNotify const>(
         (const std::shared_ptr<const proto::NewOfflineMsgNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      57);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::NewOfflineMsgNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NewOfflineMsgNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerMiscHandler::onNewOfflineMsgNotify(this, v7);
  }
  std::shared_ptr<proto::NewOfflineMsgNotify const>::~shared_ptr((std::shared_ptr<const proto::NewOfflineMsgNotify> *const)(v2 + 32));
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

// Line 63: range 00000000168C76C2-00000000168C78A4
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientReportNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:63";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientReportNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientReportNotify const>(
         (const std::shared_ptr<const proto::ClientReportNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      63);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ClientReportNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientReportNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerMiscHandler::onClientReportNotify(this, v7);
  }
  std::shared_ptr<proto::ClientReportNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientReportNotify> *const)(v2 + 32));
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

// Line 76: range 00000000168C78A6-00000000168C7A88
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::NewOfflineOpNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:76";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::NewOfflineOpNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::NewOfflineOpNotify const>(
         (const std::shared_ptr<const proto::NewOfflineOpNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      76);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::NewOfflineOpNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NewOfflineOpNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerMiscHandler::onNewOfflineOpNotify(this, v7);
  }
  std::shared_ptr<proto::NewOfflineOpNotify const>::~shared_ptr((std::shared_ptr<const proto::NewOfflineOpNotify> *const)(v2 + 32));
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

// Line 78: range 00000000168C7A8A-00000000168C7C6C
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int Notify; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientBulletCreateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:78";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientBulletCreateNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientBulletCreateNotify const>(
         (const std::shared_ptr<const proto::ClientBulletCreateNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      78);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    Notify = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ClientBulletCreateNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientBulletCreateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Notify = PlayerMiscHandler::onClientBulletCreateNotify(this, v7);
  }
  std::shared_ptr<proto::ClientBulletCreateNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientBulletCreateNotify> *const)(v2 + 32));
  result = Notify;
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

// Line 79: range 00000000168C7C6E-00000000168C7E50
int __cdecl PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const PlayerMiscHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerMiscHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeServerGlobalValueNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:79";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeServerGlobalValueNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeServerGlobalValueNotify const>(
         (const std::shared_ptr<const proto::ChangeServerGlobalValueNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "operator()",
      79);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ChangeServerGlobalValueNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeServerGlobalValueNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerMiscHandler::onChangeServerGlobalValueNotify(this, v7);
  }
  std::shared_ptr<proto::ChangeServerGlobalValueNotify const>::~shared_ptr((std::shared_ptr<const proto::ChangeServerGlobalValueNotify> *const)(v2 + 32));
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

// Line 85: range 00000000168CA0DA-00000000168CA6BC
int32_t __cdecl PlayerMiscHandler::onGmTalkReq(PlayerMiscHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerGmComp *GmComp; // r14
  std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const std::string *v13; // rax
  int32_t v14; // edx
  std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const std::string *v16; // rdx
  common::minet::Packet *v17; // rax
  std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const std::string *v19; // rax
  Player *v20; // rax
  GameserverService *v21; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::GmTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-168h]
  std::shared_ptr<proto::GmTalkRsp> p_rsp_ptr; // [rsp+30h] [rbp-160h] BYREF
  char v25[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 6 uid:90 64 16 10 req_ptr:86 96 16 10 rsp_ptr:86 128 16 13 player_ptr:91 160 32 10 ret_ms"
                        "g:98 224 32 10 notify:105";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onGmTalkReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GmTalkReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GmTalkReq const>((const std::shared_ptr<const proto::GmTalkReq> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGmTalkReq",
      86);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 224), off_25E0B560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GmTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::GmTalkRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GmTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GmTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::GmTalkRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 128),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onGmTalkReq",
        94);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[23])"findPlayer fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      proto::GmTalkRsp::set_retcode(rsp_0, 140);
    }
    else
    {
      std::string::basic_string(v2 + 160);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      GmComp = Player::getGmComp(v10);
      v12 = std::__shared_ptr_access<proto::GmTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v13 = proto::GmTalkReq::msg[abi:cxx11](v12);
      v14 = PlayerGmComp::onGmTalk(GmComp, v13, (std::string *)(v2 + 160));
      proto::GmTalkRsp::set_retcode(rsp_0, v14);
      v15 = std::__shared_ptr_access<proto::GmTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v16 = proto::GmTalkReq::msg[abi:cxx11](v15);
      proto::GmTalkRsp::set_msg(rsp_0, v16);
      proto::GmTalkRsp::set_retmsg(rsp_0, (const std::string *)(v2 + 160));
      v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::getExt(v17, 0) )
      {
        proto::GmTalkNotify::GmTalkNotify((proto::GmTalkNotify *const)(v2 + 224));
        v18 = std::__shared_ptr_access<proto::GmTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::GmTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v19 = proto::GmTalkReq::msg[abi:cxx11](v18);
        proto::GmTalkNotify::set_msg((proto::GmTalkNotify *const)(v2 + 224), v19);
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Player::sendProto(v20, (const google::protobuf::Message *)(v2 + 224));
        proto::GmTalkNotify::~GmTalkNotify((proto::GmTalkNotify *const)(v2 + 224));
      }
      std::string::~string((void *)(v2 + 160));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    v21 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::GmTalkRsp>::shared_ptr(&p_rsp_ptr, (const std::shared_ptr<proto::GmTalkRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::GmTalkRsp>(v21, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::GmTalkRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = 0;
    std::shared_ptr<proto::GmTalkRsp>::~shared_ptr((std::shared_ptr<proto::GmTalkRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GmTalkReq const>::~shared_ptr((std::shared_ptr<const proto::GmTalkReq> *const)(v2 + 64));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 117: range 00000000168CA6BE-00000000168CAB1E
int32_t __cdecl PlayerMiscHandler::onPingReq(PlayerMiscHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // rax
  uint32_t v8; // eax
  Player *player; // r14
  std::__shared_ptr_access<const proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *v11; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int64_t SentMs; // rax
  GameserverService *v14; // rax
  int32_t result; // eax
  float unity_engine_time; // [rsp+Ch] [rbp-E4h]
  uint32_t uid; // [rsp+28h] [rbp-C8h]
  uint32_t rtt; // [rsp+2Ch] [rbp-C4h]
  std::__shared_ptr_access<const proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+30h] [rbp-C0h]
  std::__shared_ptr_access<proto::PingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:118 64 16 11 rsp_ptr:118";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onPingReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PingReq const>((const std::shared_ptr<const proto::PingReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onPingReq",
      118);
    common::milog::MiLogStream::operator()(&v21, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    rtt = common::minet::Packet::getExt(v7, 1u);
    if ( rtt )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::setRtt(this->player_, rtt);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_misc_handler.cpp",
        "onPingReq",
        125);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v21, "update rtt=%u for player(%u)", rtt, v8);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    v10 = std::__shared_ptr_access<proto::PingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::onPingReq(player, v10, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->player_;
    unity_engine_time = proto::PingReq::ue_time(req);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SentMs = common::minet::Packet::getSentMs(v12);
    Player::anticheatCheckOnPingReq(v11, SentMs, unity_engine_time);
    v14 = ServiceBox::findService<GameserverService>();
    GameserverService::sendRspToClient<proto::PingRsp>(v14, uid, rsp_0);
    v5 = 0;
    std::shared_ptr<proto::PingRsp>::~shared_ptr((std::shared_ptr<proto::PingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PingReq const>::~shared_ptr((std::shared_ptr<const proto::PingReq> *const)(v2 + 32));
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 137: range 00000000168CAB20-00000000168CB286
int32_t __cdecl PlayerMiscHandler::onGetOnlinePlayerListReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isMpClosed; // r14
  PlayerMpComp *MpComp; // rax
  GameserverService *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::minet::Packet *v13; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::minet::Packet *v15; // r14
  GameserverApp *v16; // rax
  uint32_t AppId; // eax
  GameserverService *v18; // r14
  NetworkMgrBase *v19; // r14
  uint32_t v20; // r8d
  int32_t result; // eax
  google::protobuf::uint32 mp_block_end_time; // [rsp+1Ch] [rbp-1B4h]
  std::__shared_ptr_access<proto::GetOnlinePlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<common::minet::Packet> v24; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-190h] BYREF
  char v26[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 7 uid:139 64 16 11 req_ptr:138 96 16 11 rsp_ptr:138 128 16 18 req_packet_ptr:158 160 24 7"
                        " req:157 224 56 7 rsp:145";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onGetOnlinePlayerListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOnlinePlayerListReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetOnlinePlayerListReq const>(
         (const std::shared_ptr<const proto::GetOnlinePlayerListReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetOnlinePlayerListReq",
      138);
    common::milog::MiLogStream::operator()(&v25, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetOnlinePlayerListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOnlinePlayerListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::GetOnlinePlayerListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetOnlinePlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetOnlinePlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::GetOnlinePlayerListRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    isMpClosed = FeatureSwitchMgr::isMpClosed(&v7->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
    if ( isMpClosed )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_misc_handler.cpp",
        "onGetOnlinePlayerListReq",
        144);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v25, (const char (*)[18])"mp feature closed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      proto::GetOnlinePlayerListRsp::GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v2 + 224));
      proto::GetOnlinePlayerListRsp::set_retcode((proto::GetOnlinePlayerListRsp *const)(v2 + 224), 142);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 224));
      v5 = 142;
      proto::GetOnlinePlayerListRsp::~GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v2 + 224));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
      if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
      {
        proto::GetOnlinePlayerListRsp::set_retcode(rsp_0, 1226);
        proto::GetOnlinePlayerListRsp::set_param(rsp_0, mp_block_end_time);
        v11 = ServiceBox::findService<GameserverService>();
        GameserverService::sendRspToClient<proto::GetOnlinePlayerListRsp>(v11, *(_DWORD *)(v2 + 48), rsp_0);
        v5 = proto::GetOnlinePlayerListRsp::retcode(rsp_0);
      }
      else
      {
        proto::GetPlayerMpStatusListReq::GetPlayerMpStatusListReq((proto::GetPlayerMpStatusListReq *const)(v2 + 160));
        common::minet::PacketUtils::createPacket<proto::GetPlayerMpStatusListReq>((const proto::GetPlayerMpStatusListReq *)(v2 + 128));
        if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/player_misc_handler.cpp",
            "onGetOnlinePlayerListReq",
            161);
          v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v25,
                  (const char (*)[26])"createPacket failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v5 = -1;
        }
        else
        {
          v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          common::minet::Packet::copyHead(v13, v14);
          v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v16 = Singleton<GameserverApp>::instance();
          AppId = AppBase::getAppId((AppBase *const)v16);
          common::minet::Packet::setSource(v15, 3u, AppId);
          v18 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v24,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
          GameserverService::setPacketGameThreadIndex(v18, &v24);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v24);
          v19 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v24,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
          NetworkMgrBase::sendPacketToTargetService(v19, (common::minet::PacketPtr)__PAIR128__(11LL, &v24), 0, v20);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v24);
          v5 = 0;
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
        proto::GetPlayerMpStatusListReq::~GetPlayerMpStatusListReq((proto::GetPlayerMpStatusListReq *const)(v2 + 160));
      }
    }
    std::shared_ptr<proto::GetOnlinePlayerListRsp>::~shared_ptr((std::shared_ptr<proto::GetOnlinePlayerListRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GetOnlinePlayerListReq const>::~shared_ptr((std::shared_ptr<const proto::GetOnlinePlayerListReq> *const)(v2 + 64));
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 177: range 00000000168CB288-00000000168CB663
int32_t __cdecl PlayerMiscHandler::onGetPlayerMpStatusListRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int v7; // r15d
  uint32_t v8; // eax
  GameserverService *v9; // rax
  int32_t result; // eax
  uint32_t uid; // [rsp+24h] [rbp-12Ch]
  google::protobuf::RepeatedPtrField<proto::OnlinePlayerInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::OnlinePlayerInfo>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  PlayerSocialComp *social_comp; // [rsp+38h] [rbp-118h]
  const proto::GetPlayerMpStatusListRsp *mp_rsp; // [rsp+40h] [rbp-110h]
  const google::protobuf::RepeatedPtrField<proto::OnlinePlayerInfo> *__for_range; // [rsp+48h] [rbp-108h]
  const proto::OnlinePlayerInfo *mp_player_info; // [rsp+50h] [rbp-100h]
  proto::OnlinePlayerInfo *proto_player_info; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 mp_rsp_ptr:184 64 56 7 rsp:179";
  *(_QWORD *)(v3 + 16) = PlayerMiscHandler::onGetPlayerMpStatusListRsp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v6);
  proto::GetOnlinePlayerListRsp::GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v3 + 64));
  proto::GetOnlinePlayerListRsp::set_retcode((proto::GetOnlinePlayerListRsp *const)(v3 + 64), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  social_comp = Player::getSocialComp(this->player_);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerMpStatusListRsp>((common::minet::Packet *const)(v3 + 32));
  if ( std::operator==<proto::GetPlayerMpStatusListRsp const>(
         (const std::shared_ptr<const proto::GetPlayerMpStatusListRsp> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetPlayerMpStatusListRsp",
      184);
    common::milog::MiLogStream::operator()(&v19, off_25E201A0);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v2 = -1;
    v7 = 0;
  }
  else
  {
    mp_rsp = std::__shared_ptr_access<proto::GetPlayerMpStatusListRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpStatusListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    __for_range = proto::GetPlayerMpStatusListRsp::player_list(mp_rsp);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::OnlinePlayerInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::OnlinePlayerInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::OnlinePlayerInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      mp_player_info = google::protobuf::internal::RepeatedPtrIterator<proto::OnlinePlayerInfo const>::operator*(&__for_begin);
      if ( uid != proto::OnlinePlayerInfo::uid(mp_player_info) )
      {
        v8 = proto::OnlinePlayerInfo::uid(mp_player_info);
        if ( !PlayerSocialComp::isPlayerInBlacklist(social_comp, v8) )
        {
          proto_player_info = proto::GetOnlinePlayerListRsp::add_player_info_list((proto::GetOnlinePlayerListRsp *const)(v3 + 64));
          proto::OnlinePlayerInfo::operator=(proto_player_info, mp_player_info);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::OnlinePlayerInfo const>::operator++(&__for_begin);
    }
    v7 = 1;
  }
  std::shared_ptr<proto::GetPlayerMpStatusListRsp const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerMpStatusListRsp> *const)(v3 + 32));
  if ( v7 == 1 )
  {
    v9 = ServiceBox::findService<GameserverService>();
    GameserverService::sendRspToClient<proto::GetOnlinePlayerListRsp>(
      v9,
      uid,
      (proto::GetOnlinePlayerListRsp *)(v3 + 64));
    v2 = proto::GetOnlinePlayerListRsp::retcode((const proto::GetOnlinePlayerListRsp *const)(v3 + 64));
  }
  proto::GetOnlinePlayerListRsp::~GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v3 + 64));
  result = v2;
  if ( v20 == (char *)v3 )
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

// Line 207: range 00000000168CB664-00000000168CC5D8
int32_t __cdecl PlayerMiscHandler::onPacketFreqencyExceedNotify(
        PlayerMiscHandler *const this,
        const proto::PacketFreqencyExceedNotify *notify)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // ebx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  SkillComp *SkillComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 Position; // rax
  uint32_t v13; // ebx
  PlayerViewMgr *v14; // rax
  uint32_t Uid; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v24; // eax
  const std::string *v25; // rbx
  std::array<std::string,5>::reference v26; // rax
  google::protobuf::uint32 v27; // ebx
  std::array<unsigned int,5>::reference v28; // rax
  google::protobuf::uint32 *v29; // rdx
  time_t v30; // rax
  std::array<unsigned int,5>::reference v31; // rdx
  std::array<std::string,5>::reference v32; // rax
  std::array<unsigned int,5>::reference v33; // rdx
  std::array<std::string,5>::reference v34; // rax
  std::array<unsigned int,5>::reference v35; // rdx
  std::array<std::string,5>::reference v36; // rax
  std::array<unsigned int,5>::reference v37; // rcx
  std::array<std::string,5>::reference v38; // rax
  std::array<unsigned int,5>::reference v39; // rdi
  std::array<std::string,5>::reference v40; // rax
  __int64 v41; // r15
  uint32_t v42; // ebx
  __int64 v43; // rax
  int32_t result; // eax
  double v45; // [rsp+10h] [rbp-380h]
  double v46; // [rsp+18h] [rbp-378h]
  double v47; // [rsp+20h] [rbp-370h]
  unsigned int v48; // [rsp+2Ch] [rbp-364h]
  __int64 v49; // [rsp+30h] [rbp-360h]
  __int64 v50; // [rsp+38h] [rbp-358h]
  unsigned int v51; // [rsp+40h] [rbp-350h]
  unsigned int v52; // [rsp+44h] [rbp-34Ch]
  __int64 v53; // [rsp+48h] [rbp-348h]
  __int64 v54; // [rsp+50h] [rbp-340h]
  unsigned int v55; // [rsp+58h] [rbp-338h]
  unsigned int v56; // [rsp+5Ch] [rbp-334h]
  uint32_t cur_scene_id; // [rsp+78h] [rbp-318h]
  uint32_t cur_dungeon_id; // [rsp+7Ch] [rbp-314h]
  uint32_t cur_avatar_id; // [rsp+80h] [rbp-310h]
  uint32_t last_used_skill_id; // [rsp+84h] [rbp-30Ch]
  uint32_t monster_count; // [rsp+88h] [rbp-308h]
  uint32_t gadget_count; // [rsp+8Ch] [rbp-304h]
  uint32_t monster_gm_count; // [rsp+90h] [rbp-300h]
  uint32_t gadget_gm_count; // [rsp+94h] [rbp-2FCh]
  int32_t i; // [rsp+98h] [rbp-2F8h]
  uint32_t packet_count; // [rsp+A0h] [rbp-2F0h]
  uint32_t interval_ms; // [rsp+A4h] [rbp-2ECh]
  std::vector<std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+A8h] [rbp-2E8h] BYREF
  std::vector<std::shared_ptr<Entity>>::iterator __for_end; // [rsp+B0h] [rbp-2E0h] BYREF
  PlayerSceneComp *scene_comp; // [rsp+B8h] [rbp-2D8h]
  PlayerDungeonComp *dungeon_comp; // [rsp+C0h] [rbp-2D0h]
  std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+C8h] [rbp-2C8h]
  const proto::PacketCountInfo *packet_count_info; // [rsp+D0h] [rbp-2C0h]
  EntityPtr *entity_ptr; // [rsp+D8h] [rbp-2B8h]
  std::vector<std::shared_ptr<Entity>> __x; // [rsp+E0h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v77; // [rsp+100h] [rbp-290h] BYREF
  char v78[624]; // [rsp+120h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 12 11 cur_pos:228 64 16 13 scene_ptr:209 96 16 14 avatar_ptr:230 128 16 16 creature_ptr:267"
                        " 160 20 13 count_arr:280 224 24 19 view_entity_vec:229 288 32 11 now_str:289 352 160 13 proto_arr:279";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onPacketFreqencyExceedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234618880;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_comp = Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onPacketFreqencyExceedNotify",
      212);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v77, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v6 = -1;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  cur_scene_id = 0;
  cur_dungeon_id = 0;
  if ( PlayerDungeonComp::isInDungeon(dungeon_comp) )
    cur_dungeon_id = PlayerDungeonComp::getCurDungeonId(dungeon_comp);
  else
    cur_scene_id = PlayerSceneComp::getCurSceneId(scene_comp);
  cur_avatar_id = 0;
  last_used_skill_id = 0;
  Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
  std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v2 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v2 + 96));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 96), 0LL) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    cur_avatar_id = Avatar::getAvatarId(v7);
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    SkillComp = Avatar::getSkillComp(v8);
    last_used_skill_id = SkillComp::getLastUsedSkillId(SkillComp);
    v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( Entity::isOnScene((const Entity *const)v10) )
    {
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v11);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v2 + 32) = *(_QWORD *)Position;
      *(_DWORD *)(v2 + 40) = *(_DWORD *)(Position + 8);
    }
    v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    Scene::findPlayerViewMgr((const Scene *const)(v2 + 128), v13);
    if ( std::operator!=<PlayerViewMgr>((const std::shared_ptr<PlayerViewMgr> *)(v2 + 128), 0LL) )
    {
      v14 = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      PlayerViewMgr::validateAndGetEntitiesInView(&__x, v14);
      std::vector<std::shared_ptr<Entity>>::operator=((std::vector<std::shared_ptr<Entity>> *const)(v2 + 224), &__x);
      std::vector<std::shared_ptr<Entity>>::~vector(&__x);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_misc_handler.cpp",
        "onPacketFreqencyExceedNotify",
        246);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v77, "uid:%u view_mgr is null", Uid);
      common::milog::MiLogStream::~MiLogStream(&v77);
    }
    std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v2 + 128));
  }
  monster_count = 0;
  gadget_count = 0;
  monster_gm_count = 0;
  gadget_gm_count = 0;
  __for_range = (std::vector<std::shared_ptr<Entity>> *)(v2 + 224);
  __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin((std::vector<std::shared_ptr<Entity>> *const)(v2 + 224))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end((std::vector<std::shared_ptr<Entity>> *const)(v2 + 224))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            &__for_begin,
            &__for_end) )
  {
    entity_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
    v16 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v17 = *(_QWORD *)v16 + 24LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v18 = (*(__int64 (__fastcall **)(unsigned __int64))v17)(v16);
    if ( v18 == 2 )
    {
      ++monster_count;
      std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      toPtr<Creature,Entity>((Entity *)(v2 + 128));
      if ( std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 128)) )
      {
        v19 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Creature::getIsCreatedByGm(v19) )
          ++monster_gm_count;
      }
      goto LABEL_52;
    }
    if ( v18 == 4 )
    {
      ++gadget_count;
      std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      toPtr<Creature,Entity>((Entity *)(v2 + 128));
      if ( std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 128)) )
      {
        v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Creature::getIsCreatedByGm(v21) )
          ++gadget_gm_count;
      }
LABEL_52:
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
  }
  std::array<std::string,5ul>::array((std::array<std::string,5> *const)(v2 + 352));
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 176) = 0;
  for ( i = 0; i < proto::PacketFreqencyExceedNotify::packet_count_list_size(notify) && (unsigned int)i <= 4; ++i )
  {
    packet_count_info = proto::PacketFreqencyExceedNotify::packet_count_list(notify, i);
    v24 = proto::PacketCountInfo::cmd_id(packet_count_info);
    v25 = ProtoUtils::getCmdName[abi:cxx11](v24);
    v26 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), i);
    std::string::operator=(v26, v25);
    v27 = proto::PacketCountInfo::count(packet_count_info);
    v28 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), i);
    v29 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v28);
    }
    *v29 = v27;
  }
  packet_count = proto::PacketFreqencyExceedNotify::packet_count(notify);
  interval_ms = proto::PacketFreqencyExceedNotify::interval(notify);
  v30 = time(0LL);
  common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 288), v30);
  common::milog::MiLogStream::create(
    &v77,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/player_misc_handler.cpp",
    "onPacketFreqencyExceedNotify",
    290);
  v31 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v56 = *v31;
  v32 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), 4uLL);
  v54 = std::string::c_str(v32);
  v33 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v55 = *v33;
  v34 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), 3uLL);
  v53 = std::string::c_str(v34);
  v35 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v52 = *v35;
  v36 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), 2uLL);
  v50 = std::string::c_str(v36);
  v37 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v51 = *v37;
  v38 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), 1uLL);
  v49 = std::string::c_str(v38);
  v39 = std::array<unsigned int,5ul>::operator[]((std::array<unsigned int,5> *const)(v2 + 160), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v48 = *v39;
  v40 = std::array<std::string,5ul>::operator[]((std::array<std::string,5> *const)(v2 + 352), 0LL);
  v41 = std::string::c_str(v40);
  v47 = *(float *)(v2 + 40);
  v46 = *(float *)(v2 + 36);
  v45 = *(float *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v42 = Player::getUid(this->player_);
  v43 = std::string::c_str(v2 + 288);
  common::milog::MiLogStream::operator()(
    &v77,
    "[FREQ] exceed max|%s|%u|%u|%u|%u|%u|%u-%u|%u-%u|%u|%u|%f|%f|%f|%s:%u|%s:%u|%s:%u|%s:%u|%s:%u",
    v43,
    packet_count,
    interval_ms,
    v42,
    v45,
    v46,
    v47,
    cur_avatar_id,
    last_used_skill_id,
    monster_gm_count,
    monster_count,
    gadget_gm_count,
    gadget_count,
    cur_scene_id,
    cur_dungeon_id,
    v41,
    v48,
    v49,
    v51,
    v50,
    v52,
    v53,
    v55,
    v54,
    v56);
  common::milog::MiLogStream::~MiLogStream(&v77);
  v6 = 0;
  std::string::~string((void *)(v2 + 288));
  std::array<std::string,5ul>::~array((std::array<std::string,5> *const)(v2 + 352));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
  std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v2 + 224));
LABEL_76:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v6;
  if ( v78 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
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

// Line 300: range 00000000168CC5DA-00000000168CC628
int32_t __cdecl PlayerMiscHandler::onNewOfflineMsgNotify(
        PlayerMiscHandler *const this,
        const proto::NewOfflineMsgNotify *notify)
{
  PlayerOfflineMsgComp *OfflineMsgComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineMsgComp = Player::getOfflineMsgComp(this->player_);
  return PlayerOfflineMsgComp::onNewOfflineMsgNotify(OfflineMsgComp);
};

// Line 306: range 00000000168CC62A-00000000168CC971
int32_t __cdecl PlayerMiscHandler::onGetOfflineMsgRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerOfflineMsgComp *OfflineMsgComp; // rdx
  Player *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-DCh]
  std::__shared_ptr_access<const proto::GetOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:308 64 16 11 rsp_ptr:307 96 16 14 player_ptr:309";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onGetOfflineMsgRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOfflineMsgRsp>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetOfflineMsgRsp const>(
         (const std::shared_ptr<const proto::GetOfflineMsgRsp> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetOfflineMsgRsp",
      307);
    common::milog::MiLogStream::operator()(&v16, off_25E204A0);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetOfflineMsgRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 96),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onGetOfflineMsgRsp",
        312);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v16,
             (const char (*)[24])"findPlayer fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v5 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      OfflineMsgComp = Player::getOfflineMsgComp(v10);
      ret = PlayerOfflineMsgComp::onGetOfflineMsgRsp(OfflineMsgComp, rsp_0);
      if ( proto::GetOfflineMsgRsp::is_login(rsp_0) )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Player::onLoginOfflineMsgDone(v12);
      }
      v5 = ret;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GetOfflineMsgRsp const>::~shared_ptr((std::shared_ptr<const proto::GetOfflineMsgRsp> *const)(v2 + 64));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 325: range 00000000168CCA26-00000000168CCEFF
int32_t __cdecl PlayerMiscHandler::onPlayerCombatForceReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerAvatarComp *AvatarComp; // rax
  float v12; // xmm0_4
  Player *v13; // rax
  PlayerAvatarComp *v14; // r14
  GameserverService *v15; // r14
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+14h] [rbp-11Ch]
  std::__shared_ptr_access<proto::PlayerCombatForceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-110h]
  google::protobuf::Map<unsigned int,float> *player_combat_force_map; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::PlayerCombatForceRsp> p_rsp_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:330 64 16 11 req_ptr:326 96 16 11 rsp_ptr:326 128 16 14 player_ptr:331";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onPlayerCombatForceReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCombatForceReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlayerCombatForceReq const>(
         (const std::shared_ptr<const proto::PlayerCombatForceReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onPlayerCombatForceReq",
      326);
    common::milog::MiLogStream::operator()(&v21, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerCombatForceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCombatForceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::PlayerCombatForceRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerCombatForceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerCombatForceRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::PlayerCombatForceRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 128),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onPlayerCombatForceReq",
        334);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v21,
             (const char (*)[23])"findPlayer fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      proto::PlayerCombatForceRsp::set_retcode(rsp_0, 140);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      AvatarComp = Player::getAvatarComp(v10);
      v12 = PlayerAvatarComp::calcPlayerCombatForce(AvatarComp);
      proto::PlayerCombatForceRsp::set_player_combat_force(rsp_0, v12);
      player_combat_force_map = proto::PlayerCombatForceRsp::mutable_player_combat_force_map(rsp_0);
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v14 = Player::getAvatarComp(v13);
      std::function<ForeachPolicy ()(Avatar const&)>::function<PlayerMiscHandler::onPlayerCombatForceReq(std::shared_ptr<common::minet::Packet>)::{lambda(Avatar const&)#1},void,void>(
        (std::function<ForeachPolicy(const Avatar&)> *const)&v21,
        (PlayerMiscHandler::onPlayerCombatForceReq::<lambda(const Avatar&)>)player_combat_force_map);
      ret = PlayerAvatarComp::foreachAvatar(v14, (std::function<ForeachPolicy(const Avatar&)> *)&v21);
      std::function<ForeachPolicy ()(Avatar const&)>::~function((std::function<ForeachPolicy(const Avatar&)> *const)&v21);
      proto::PlayerCombatForceRsp::set_retcode(rsp_0, ret);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    v15 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::PlayerCombatForceRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::PlayerCombatForceRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::PlayerCombatForceRsp>(v15, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::PlayerCombatForceRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = 0;
    std::shared_ptr<proto::PlayerCombatForceRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCombatForceRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::PlayerCombatForceReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCombatForceReq> *const)(v2 + 64));
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

// Line 341: range 00000000168CC972-00000000168CCA24
ForeachPolicy __cdecl PlayerMiscHandler::onPlayerCombatForceReq(std::shared_ptr<common::minet::Packet>)::{lambda(Avatar const&)#1}::operator()(
        const PlayerMiscHandler::onPlayerCombatForceReq::<lambda(const Avatar&)> *const __closure,
        const Avatar *avatar)
{
  __m128i v2; // xmm0
  int v3; // ebx
  google::protobuf::Map<unsigned int,float> *player_combat_force_map; // r12
  float *v5; // rax
  int *v6; // rdx
  google::protobuf::Map<unsigned int,float>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  *(float *)v2.m128i_i32 = Avatar::calcAvatarCombatForce(avatar);
  v3 = _mm_cvtsi128_si32(v2);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_combat_force_map = __closure->__player_combat_force_map;
  key[0] = Avatar::getAvatarId(avatar);
  v5 = google::protobuf::Map<unsigned int,float>::operator[](player_combat_force_map, key);
  v6 = (int *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = v3;
  return 0;
};

// Line 356: range 00000000168CCF00-00000000168CD95F
int32_t __cdecl PlayerMiscHandler::onClientReportNotify(
        PlayerMiscHandler *const this,
        const proto::ClientReportNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *v5; // rax
  const std::string *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  char v11; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *player; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  std::string *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  std::string *v24; // rax
  Player *v25; // r14
  int32_t result; // eax
  std::string v27; // [rsp+0h] [rbp-1D0h]
  std::allocator<char> v28; // [rsp+2Eh] [rbp-1A2h] BYREF
  std::allocator<char> __a; // [rsp+2Fh] [rbp-1A1h] BYREF
  std::shared_ptr<google::protobuf::Message> v30; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-190h] BYREF
  char v32[368]; // [rsp+60h] [rbp-170h] BYREF

  *(&v27._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v27._anon_0._M_allocated_capacity = (std::string::size_type)notify;
  v2 = (unsigned __int64)v32;
  v27._M_dataplus._M_p = v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 14 stat_holer:393 48 4 11 id_type:362 64 16 11 log_ptr:395 96 16 15 mtp_log_ptr:372 128 3"
                        "2 15 report_type:357 192 32 16 report_value:358 256 32 14 reason_str:363";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onClientReportNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  v5 = proto::ClientReportNotify::report_type[abi:cxx11](notify);
  std::string::basic_string(v2 + 128, v5);
  v6 = proto::ClientReportNotify::report_value[abi:cxx11](notify);
  std::string::basic_string(v2 + 192, v6);
  if ( !std::operator==<char>("GameQAReport1", (const std::string *)(v2 + 128)) )
  {
    if ( std::operator==<char>("GameAnimData", (const std::string *)(v2 + 128)) )
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodySafeFloatException>();
      v17 = std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::AntiCheatBodySafeFloatException::set_report_type(v17, (const std::string *)(v2 + 128));
      v18 = std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySafeFloatException,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::AntiCheatBodySafeFloatException::set_report_value(v18, (const std::string *)(v2 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodySafeFloatException,void>(
        &v30,
        (const std::shared_ptr<proto_log::AntiCheatBodySafeFloatException> *)(v2 + 96));
      Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_SAFE_FLOAT_EXCEPTION, &v30);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v30);
      std::shared_ptr<proto_log::AntiCheatBodySafeFloatException>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodySafeFloatException> *const)(v2 + 96));
    }
    else if ( std::operator==<char>("GameAnalyticsData", (const std::string *)(v2 + 128)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::checkAwaitingLuaShell(this->player_, (const std::string *)(v2 + 192));
    }
    goto LABEL_30;
  }
  *(_DWORD *)(v2 + 48) = 0;
  std::string::basic_string(v2 + 256);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  v8 = data::DbMTPWhitelistConfigMgr::extractIdTypeInReportStr(
         &v7->design_config.db_config_mgr.db_local_config_mgr.mtp_whitelist_mgr,
         (const std::string *)(v2 + 192),
         (uint32_t *)(v2 + 48),
         (std::string *)(v2 + 256)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/player_misc_handler.cpp",
      "onClientReportNotify",
      366);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v31,
           (const char (*)[51])"[MTP] extractIdTypeInReportStr fail, report_value:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 192));
    common::milog::MiLogStream::~MiLogStream(&v31);
    HIDWORD(v27._M_string_length) = -1;
    v10 = 0;
  }
  else
  {
    v11 = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BYTE3(v27._M_string_length) = data::DbMTPBlacklistConfigMgr::isTypeInBlacklist(
                                    &v12->design_config.db_config_mgr.db_local_config_mgr.mtp_blacklist_mgr,
                                    *(_DWORD *)(v2 + 48))
                               && (ServiceBox::findService<GameserverService>(),
                                   GameserverService::getConfig((GameserverService *const)&v30),
                                   v11 = 1,
                                   v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30),
                                   !data::DbMTPWhitelistConfigMgr::isReportValueInWhitelist(
                                      &v13->design_config.db_config_mgr.db_local_config_mgr.mtp_whitelist_mgr,
                                      *(_DWORD *)(v2 + 48),
                                      (const std::string *)(v2 + 256)));
    if ( v11 )
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( BYTE3(v27._M_string_length) )
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyMTP>();
      v14 = std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::AntiCheatBodyMTP::set_report_type(v14, (const std::string *)(v2 + 128));
      v15 = std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMTP,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::AntiCheatBodyMTP::set_report_value(v15, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyMTP,void>(
        &v30,
        (const std::shared_ptr<proto_log::AntiCheatBodyMTP> *)(v2 + 96));
      Player::printAntiCheatLog(v16, ANTI_CHEAT_ACTION_MTP, &v30);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v30);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::disconnectSession(this->player_, 0xCu);
      std::shared_ptr<proto_log::AntiCheatBodyMTP>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyMTP> *const)(v2 + 96));
    }
    v10 = 1;
  }
  std::string::~string((void *)(v2 + 256));
  if ( v10 == 1 )
  {
LABEL_30:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x45Cu, v27);
    std::string::~string(&v31);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyClientReport>();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v31, " ", &__a);
    std::allocator<char>::allocator(&v28);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 256), "|", &v28);
    common::tools::StringUtils::replaceAll(
      (std::string *)(v2 + 192),
      (const std::string *)(v2 + 256),
      (const std::string *)&v31);
    std::string::~string((void *)(v2 + 256));
    std::allocator<char>::~allocator(&v28);
    std::string::~string(&v31);
    std::allocator<char>::~allocator(&__a);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v22 = std::move<std::string &>((std::string *)(v2 + 192));
    proto_log::PlayerLogBodyClientReport::set_report_value(v21, v22);
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyClientReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v24 = std::move<std::string &>((std::string *)(v2 + 128));
    proto_log::PlayerLogBodyClientReport::set_report_type(v23, v24);
    if ( *(_BYTE *)(((*(&v27._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = *(Player **)(*(&v27._anon_0._M_allocated_capacity + 1) + 8);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v30, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyClientReport,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 96),
      (const std::shared_ptr<proto_log::PlayerLogBodyClientReport> *)(v2 + 64));
    Player::printStatLog(v25, (MessagePtr *)(v2 + 96), &v30, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 96));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v30);
    HIDWORD(v27._M_string_length) = 0;
    std::shared_ptr<proto_log::PlayerLogBodyClientReport>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyClientReport> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  std::string::~string((void *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  result = HIDWORD(v27._M_string_length);
  if ( v27._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 407: range 00000000168CD960-00000000168CDD7D
int32_t __cdecl PlayerMiscHandler::onQueryPlayerMemDataByMuipReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  PlayerH5ActivityComp *H5ActivityComp; // r14
  proto::PlayerMemH5ActivityDataResult *v9; // rax
  std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // r14
  int32_t result; // eax
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::QueryPlayerMemDataByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-120h]
  std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-118h]
  std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> p_rsp_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:408 64 16 11 rsp_ptr:408 96 24 22 h5_schedule_id_vec:417";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onQueryPlayerMemDataByMuipReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QueryPlayerMemDataByMuipReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QueryPlayerMemDataByMuipReq const>(
         (const std::shared_ptr<const proto::QueryPlayerMemDataByMuipReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onQueryPlayerMemDataByMuipReq",
      408);
    common::milog::MiLogStream::operator()(&v18, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QueryPlayerMemDataByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QueryPlayerMemDataByMuipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QueryPlayerMemDataByMuipRsp::set_retcode(rsp_0, -1);
    ret = -1;
    v6 = proto::QueryPlayerMemDataByMuipReq::data_type(req);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
        v7 = proto::QueryPlayerMemDataByMuipReq::param_list(req);
        common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
          v7,
          (std::vector<unsigned int> *)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        H5ActivityComp = Player::getH5ActivityComp(this->player_);
        v9 = proto::QueryPlayerMemDataByMuipRsp::mutable_h5_activity_data_result(rsp_0);
        ret = PlayerH5ActivityComp::getPlayerMemH5ActivityData(
                H5ActivityComp,
                (const std::vector<unsigned int> *)(v2 + 96),
                v9);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
      }
    }
    else
    {
      ret = PlayerMiscHandler::getPlayerBasicData(this, rsp_0);
    }
    v10 = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QueryPlayerMemDataByMuipRsp::set_retcode(v10, ret);
    v11 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::QueryPlayerMemDataByMuipRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr((std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QueryPlayerMemDataByMuipReq const>::~shared_ptr((std::shared_ptr<const proto::QueryPlayerMemDataByMuipReq> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 430: range 00000000168CDD7E-00000000168CDF7E
int32_t __cdecl PlayerMiscHandler::getPlayerBasicData(
        PlayerMiscHandler *const this,
        proto::QueryPlayerMemDataByMuipRsp *rsp_0)
{
  const std::string *v2; // rdx
  uint32_t Level; // edx
  uint32_t Exp; // edx
  PlayerItemComp *ItemComp; // rax
  uint32_t Scoin; // edx
  PlayerItemComp *v7; // rax
  uint32_t Hcoin; // edx
  uint32_t CurLoginTime; // edx
  const ProfilePicture *ProfilePicture; // rbx
  proto::ProfilePicture *v11; // rax
  uint32_t RegisterTime; // edx
  PlayerAvatarComp *AvatarComp; // rax
  google::protobuf::uint32 PlayerGenderType; // edx
  proto::PlayerMemBasicData *basic_data; // [rsp+10h] [rbp-20h]
  PlayerBasicComp *basic_comp; // [rsp+18h] [rbp-18h]

  basic_data = proto::QueryPlayerMemDataByMuipRsp::mutable_basic_data(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  basic_comp = Player::getBasicComp(this->player_);
  v2 = PlayerBasicComp::getNickName[abi:cxx11](basic_comp);
  proto::PlayerMemBasicData::set_nickname(basic_data, v2);
  Level = PlayerBasicComp::getLevel(basic_comp);
  proto::PlayerMemBasicData::set_level(basic_data, Level);
  Exp = PlayerBasicComp::getExp(basic_comp);
  proto::PlayerMemBasicData::set_exp(basic_data, Exp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  Scoin = PlayerItemComp::getScoin(ItemComp);
  proto::PlayerMemBasicData::set_scoin(basic_data, Scoin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = Player::getItemComp(this->player_);
  Hcoin = PlayerItemComp::getHcoin(v7);
  proto::PlayerMemBasicData::set_hcoin(basic_data, Hcoin);
  CurLoginTime = PlayerBasicComp::getCurLoginTime(basic_comp);
  proto::PlayerMemBasicData::set_last_login(basic_data, CurLoginTime);
  ProfilePicture = PlayerBasicComp::getProfilePicture(basic_comp);
  v11 = proto::PlayerMemBasicData::mutable_profile_picture(basic_data);
  ProfilePicture::toClient(ProfilePicture, v11);
  RegisterTime = PlayerBasicComp::getRegisterTime(basic_comp);
  proto::PlayerMemBasicData::set_register_time(basic_data, RegisterTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerGenderType = PlayerAvatarComp::getPlayerGenderType(AvatarComp);
  proto::PlayerMemBasicData::set_gender_type(basic_data, PlayerGenderType);
  return 0;
};

// Line 446: range 00000000168CDF80-00000000168CE941
int32_t __cdecl PlayerMiscHandler::onGetOnlinePlayerInfoReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerMpComp *MpComp; // rax
  bool is_online_id; // al
  const std::string *v10; // rax
  int v11; // r15d
  int v12; // r15d
  const std::string *v13; // rax
  int v14; // r15d
  google::protobuf::uint32 v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::minet::Packet *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::minet::Packet *v20; // r14
  GameserverApp *v21; // rax
  uint32_t AppId; // eax
  GameserverService *v23; // r14
  NetworkMgrBase *v24; // r14
  uint32_t v25; // r8d
  GameserverService *v26; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-195h] BYREF
  uint32_t mp_block_end_time; // [rsp+2Ch] [rbp-194h]
  const proto::GetOnlinePlayerInfoReq *req; // [rsp+30h] [rbp-190h]
  proto::GetOnlinePlayerInfoRsp *rsp_0; // [rsp+38h] [rbp-188h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-170h] BYREF
  char v34[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 7 uid:448 48 16 11 req_ptr:447 80 16 11 rsp_ptr:447 112 16 21 mp_req_packet_ptr:497 144 3"
                        "2 13 online_id:473 208 40 10 mp_req:459";
  *(_QWORD *)(v3 + 16) = PlayerMiscHandler::onGetOnlinePlayerInfoReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOnlinePlayerInfoReq>((common::minet::Packet *const)(v3 + 48));
  if ( std::operator==<proto::GetOnlinePlayerInfoReq const>(
         (const std::shared_ptr<const proto::GetOnlinePlayerInfoReq> *)(v3 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetOnlinePlayerInfoReq",
      447);
    common::milog::MiLogStream::operator()(&v33, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v2 = -1;
    goto LABEL_38;
  }
  req = std::__shared_ptr_access<proto::GetOnlinePlayerInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOnlinePlayerInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  common::tools::perf::make_shared<proto::GetOnlinePlayerInfoRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GetOnlinePlayerInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetOnlinePlayerInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, -1);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 32) = common::minet::Packet::getUserId(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
  if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
  {
    proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, 1226);
    proto::GetOnlinePlayerInfoRsp::set_param(rsp_0, mp_block_end_time);
LABEL_36:
    v26 = ServiceBox::findService<GameserverService>();
    GameserverService::sendRspToClient<proto::GetOnlinePlayerInfoRsp>(v26, *(_DWORD *)(v3 + 32), rsp_0);
    v2 = proto::GetOnlinePlayerInfoRsp::retcode(rsp_0);
    goto LABEL_37;
  }
  proto::GetPlayerMpStatusInfoReq::GetPlayerMpStatusInfoReq((proto::GetPlayerMpStatusInfoReq *const)(v3 + 208));
  is_online_id = proto::GetOnlinePlayerInfoReq::is_online_id(req);
  proto::GetPlayerMpStatusInfoReq::set_is_online_id((proto::GetPlayerMpStatusInfoReq *const)(v3 + 208), is_online_id);
  if ( proto::GetOnlinePlayerInfoReq::player_id_case(req) == kPsnId )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v33, off_25E209E0, &__a);
    v10 = proto::GetOnlinePlayerInfoReq::psn_id[abi:cxx11](req);
    common::tools::StringUtils::trim((std::string *)(v3 + 144), v10, (const std::string *)&v33, 1);
    std::string::~string(&v33);
    std::allocator<char>::~allocator(&__a);
    if ( (unsigned __int8)std::string::empty(v3 + 144) )
    {
      proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, 7036);
      v11 = 0;
    }
    else
    {
      proto::GetPlayerMpStatusInfoReq::set_psn_id(
        (proto::GetPlayerMpStatusInfoReq *const)(v3 + 208),
        (const std::string *)(v3 + 144));
      v11 = 1;
    }
    std::string::~string((void *)(v3 + 144));
    if ( v11 != 1 )
    {
      v12 = 0;
      goto LABEL_35;
    }
  }
  else if ( proto::GetOnlinePlayerInfoReq::player_id_case(req) == kOnlineId )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v33, off_25E209E0, &__a);
    v13 = proto::GetOnlinePlayerInfoReq::online_id[abi:cxx11](req);
    common::tools::StringUtils::trim((std::string *)(v3 + 144), v13, (const std::string *)&v33, 1);
    std::string::~string(&v33);
    std::allocator<char>::~allocator(&__a);
    if ( (unsigned __int8)std::string::empty(v3 + 144) )
    {
      proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, 28);
      v14 = 0;
    }
    else
    {
      proto::GetPlayerMpStatusInfoReq::set_online_id(
        (proto::GetPlayerMpStatusInfoReq *const)(v3 + 208),
        (const std::string *)(v3 + 144));
      v14 = 1;
    }
    std::string::~string((void *)(v3 + 144));
    if ( v14 != 1 )
    {
      v12 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    if ( proto::GetOnlinePlayerInfoReq::player_id_case(req) != kTargetUid )
    {
      proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, -1);
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onGetOnlinePlayerInfoReq",
        493);
      v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v33, (const char (*)[34])off_25E20A20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v12 = 0;
      goto LABEL_35;
    }
    if ( !proto::GetOnlinePlayerInfoReq::target_uid(req) )
    {
      proto::GetOnlinePlayerInfoRsp::set_retcode(rsp_0, 2001);
      v12 = 0;
      goto LABEL_35;
    }
    v15 = proto::GetOnlinePlayerInfoReq::target_uid(req);
    proto::GetPlayerMpStatusInfoReq::set_target_uid((proto::GetPlayerMpStatusInfoReq *const)(v3 + 208), v15);
  }
  common::minet::PacketUtils::createPacket<proto::GetPlayerMpStatusInfoReq>((const proto::GetPlayerMpStatusInfoReq *)(v3 + 112));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetOnlinePlayerInfoReq",
      500);
    v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v33,
            (const char (*)[26])"createPacket failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v2 = -1;
  }
  else
  {
    v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::copyHead(v18, v19);
    v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    v21 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v21);
    common::minet::Packet::setSource(v20, 3u, AppId);
    v23 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 112));
    GameserverService::setPacketGameThreadIndex(v23, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v24 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 112));
    NetworkMgrBase::sendPacketToTargetService(v24, (common::minet::PacketPtr)__PAIR128__(11LL, &packet_ptr), 0, v25);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v2 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 112));
  v12 = 1;
LABEL_35:
  proto::GetPlayerMpStatusInfoReq::~GetPlayerMpStatusInfoReq((proto::GetPlayerMpStatusInfoReq *const)(v3 + 208));
  if ( !v12 )
    goto LABEL_36;
LABEL_37:
  std::shared_ptr<proto::GetOnlinePlayerInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetOnlinePlayerInfoRsp> *const)(v3 + 80));
LABEL_38:
  std::shared_ptr<proto::GetOnlinePlayerInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetOnlinePlayerInfoReq> *const)(v3 + 48));
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 516: range 00000000168CE942-00000000168CEC31
int32_t __cdecl PlayerMiscHandler::onGetPlayerMpStatusInfoRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::int32 v6; // eax
  google::protobuf::uint32 v7; // eax
  const proto::OnlinePlayerInfo *v8; // r14
  proto::OnlinePlayerInfo *v9; // rax
  GameserverService *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t UserId; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetPlayerMpStatusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *mp_rsp; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 mp_rsp_ptr:517 80 40 7 rsp:518";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onGetPlayerMpStatusInfoRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerMpStatusInfoRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::GetPlayerMpStatusInfoRsp const>(
         (const std::shared_ptr<const proto::GetPlayerMpStatusInfoRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetPlayerMpStatusInfoRsp",
      517);
    common::milog::MiLogStream::operator()(&v15, off_25E20B00);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    mp_rsp = std::__shared_ptr_access<proto::GetPlayerMpStatusInfoRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpStatusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetOnlinePlayerInfoRsp::GetOnlinePlayerInfoRsp((proto::GetOnlinePlayerInfoRsp *const)(v2 + 80));
    v6 = proto::GetPlayerMpStatusInfoRsp::retcode(mp_rsp);
    proto::GetOnlinePlayerInfoRsp::set_retcode((proto::GetOnlinePlayerInfoRsp *const)(v2 + 80), v6);
    v7 = proto::GetPlayerMpStatusInfoRsp::target_uid(mp_rsp);
    proto::GetOnlinePlayerInfoRsp::set_target_uid((proto::GetOnlinePlayerInfoRsp *const)(v2 + 80), v7);
    v8 = proto::GetPlayerMpStatusInfoRsp::target_player_info(mp_rsp);
    v9 = proto::GetOnlinePlayerInfoRsp::mutable_target_player_info((proto::GetOnlinePlayerInfoRsp *const)(v2 + 80));
    proto::OnlinePlayerInfo::operator=(v9, v8);
    v10 = ServiceBox::findService<GameserverService>();
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v11);
    GameserverService::sendRspToClient<proto::GetOnlinePlayerInfoRsp>(
      v10,
      UserId,
      (proto::GetOnlinePlayerInfoRsp *)(v2 + 80));
    v5 = proto::GetOnlinePlayerInfoRsp::retcode((const proto::GetOnlinePlayerInfoRsp *const)(v2 + 80));
    proto::GetOnlinePlayerInfoRsp::~GetOnlinePlayerInfoRsp((proto::GetOnlinePlayerInfoRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::GetPlayerMpStatusInfoRsp const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerMpStatusInfoRsp> *const)(v2 + 48));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 527: range 00000000168CEC32-00000000168CEC7C
void __cdecl fillSegmentInfo(proto::SegmentInfo *info, uint32_t module, uint32_t offset, uint32_t size)
{
  proto::SegmentInfo::set_module(info, module);
  proto::SegmentInfo::set_offset(info, offset);
  proto::SegmentInfo::set_size(info, size);
};

// Line 535: range 00000000168CEC7E-00000000168CFCAD
int32_t __cdecl PlayerMiscHandler::onCheckSegmentCRCReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  uint32_t v13; // r15d
  uint32_t v14; // r14d
  google::protobuf::uint32 v15; // r15d
  unsigned int v16; // r14d
  uint32_t PlatformType; // eax
  google::protobuf::uint32 v18; // r15d
  unsigned int v19; // r14d
  uint32_t v20; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  google::protobuf::uint32 v23; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  google::protobuf::uint32 v25; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  const std::string *v27; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  const std::string *v29; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  google::protobuf::uint32 v31; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  google::protobuf::uint32 v33; // eax
  Player *player; // r14
  SegmentCRCTree *v35; // r14
  uint32_t v36; // r15d
  uint32_t v37; // eax
  google::protobuf::uint32 v38; // r15d
  unsigned int v39; // r14d
  uint32_t v40; // eax
  int v41; // r14d
  uint32_t v42; // r15d
  uint32_t v43; // r14d
  google::protobuf::uint32 v44; // r14d
  google::protobuf::uint32 v45; // eax
  uint32_t v46; // r15d
  uint32_t v47; // r14d
  uint32_t v48; // eax
  uint32_t v49; // r15d
  uint32_t v50; // r14d
  uint32_t v51; // eax
  const google::protobuf::RepeatedPtrField<proto::SegmentInfo> *v52; // rax
  common::milog::MiLogStream *v53; // r14
  const google::protobuf::RepeatedPtrField<proto::SegmentInfo> *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rcx
  const google::protobuf::RepeatedPtrField<proto::SegmentInfo> *v57; // rax
  int32_t result; // eax
  std::string *crcc; // [rsp+8h] [rbp-208h]
  google::protobuf::uint32 crc; // [rsp+8h] [rbp-208h]
  google::protobuf::uint32 crca; // [rsp+8h] [rbp-208h]
  google::protobuf::uint32 crcb; // [rsp+8h] [rbp-208h]
  int val; // [rsp+24h] [rbp-1ECh] BYREF
  int32_t ret; // [rsp+28h] [rbp-1E8h]
  int ret_0; // [rsp+2Ch] [rbp-1E4h]
  google::protobuf::RepeatedPtrField<proto::SegmentCRCInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::SegmentCRCInfo>::const_iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  const proto::CheckSegmentCRCReq *req; // [rsp+40h] [rbp-1D0h]
  const google::protobuf::RepeatedPtrField<proto::SegmentCRCInfo> *__for_range; // [rsp+48h] [rbp-1C8h]
  const proto::SegmentCRCInfo *crc_info; // [rsp+50h] [rbp-1C0h]
  const proto::PlayerLoginReq *login_req; // [rsp+58h] [rbp-1B8h]
  proto::SegmentInfo *left_info; // [rsp+60h] [rbp-1B0h]
  proto::SegmentInfo *right_info; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<SegmentCRCTree> p_tree; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v75; // [rsp+80h] [rbp-190h] BYREF
  char v76[368]; // [rsp+A0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 20 crc_module_index:552 64 4 19 crc_module_type:559 80 4 15 left_offset:599 96 4 13 left"
                        "_size:599 112 4 16 right_offset:599 128 4 14 right_size:599 144 16 11 req_ptr:547 176 16 12 tree"
                        "_ptr:560 208 16 11 log_ptr:579 240 48 10 notify:549";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onCheckSegmentCRCReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isSegmentCrcOpen(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/player_misc_handler.cpp",
      "onCheckSegmentCRCReq",
      538);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v75,
           (const char (*)[32])"ignore segment crc req, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v75);
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = Player::checkAndUpdateSegmentCrcCount(this->player_);
    if ( ret )
    {
      v6 = ret;
    }
    else
    {
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::CheckSegmentCRCReq>((common::minet::Packet *const)(v2 + 144));
      if ( std::operator==<proto::CheckSegmentCRCReq const>(
             (const std::shared_ptr<const proto::CheckSegmentCRCReq> *)(v2 + 144),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_misc_handler.cpp",
          "onCheckSegmentCRCReq",
          547);
        common::milog::MiLogStream::operator()(&v75, off_25E20CE0);
        common::milog::MiLogStream::~MiLogStream(&v75);
        v6 = -1;
      }
      else
      {
        req = std::__shared_ptr_access<proto::CheckSegmentCRCReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckSegmentCRCReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        proto::CheckSegmentCRCNotify::CheckSegmentCRCNotify((proto::CheckSegmentCRCNotify *const)(v2 + 240));
        __for_range = proto::CheckSegmentCRCReq::info_list(req);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SegmentCRCInfo>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SegmentCRCInfo>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::SegmentCRCInfo const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          crc_info = google::protobuf::internal::RepeatedPtrIterator<proto::SegmentCRCInfo const>::operator*(&__for_begin);
          *(_DWORD *)(v2 + 48) = proto::SegmentCRCInfo::module(crc_info);
          if ( proto::SegmentCRCInfo::retcode(crc_info) )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/player_misc_handler.cpp",
              "onCheckSegmentCRCReq",
              555);
            v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   &v75,
                   (const char (*)[10])byte_25E20D20);
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v7,
                   (const unsigned int *)(v2 + 48));
            v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v8, (const char (*)[26])byte_25E20D60);
            val = proto::SegmentCRCInfo::retcode(crc_info);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v9, &val);
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
          else
          {
            *(_DWORD *)(v2 + 64) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::findModuleSegmentCrcTree(
              (const Player *const)(v2 + 176),
              (uint32_t)this->player_,
              (uint32_t *)*(unsigned int *)(v2 + 48));
            if ( std::operator==<SegmentCRCTree>((const std::shared_ptr<SegmentCRCTree> *)(v2 + 176), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/player_misc_handler.cpp",
                "onCheckSegmentCRCReq",
                563);
              v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                      &v75,
                      (const char (*)[8])byte_25E20DA0);
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v11, (const char (*)[34])byte_25E20DE0);
              common::milog::MiLogStream::~MiLogStream(&v75);
              v12 = 0;
            }
            else
            {
              crcc = (std::string *)proto::SegmentCRCInfo::crc[abi:cxx11](crc_info);
              v13 = proto::SegmentCRCInfo::size(crc_info);
              v14 = proto::SegmentCRCInfo::offset(crc_info);
              std::shared_ptr<SegmentCRCTree>::shared_ptr(&p_tree, (const std::shared_ptr<SegmentCRCTree> *)(v2 + 176));
              LOBYTE(v14) = SegmentCRCMgr::checkCRCIsValid(&p_tree, v14, v13, crcc);
              std::shared_ptr<SegmentCRCTree>::~shared_ptr(&p_tree);
              if ( (_BYTE)v14 )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/player_misc_handler.cpp",
                  "onCheckSegmentCRCReq",
                  570);
                crc = proto::SegmentCRCInfo::size(crc_info);
                v15 = proto::SegmentCRCInfo::offset(crc_info);
                v16 = *(_DWORD *)(v2 + 64);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                PlatformType = Player::getPlatformType(this->player_);
                common::milog::MiLogStream::operator()(&v75, &byte_25E20E40, PlatformType, v16, v15, crc);
                common::milog::MiLogStream::~MiLogStream(&v75);
                v12 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/player_misc_handler.cpp",
                  "onCheckSegmentCRCReq",
                  576);
                crca = proto::SegmentCRCInfo::size(crc_info);
                v18 = proto::SegmentCRCInfo::offset(crc_info);
                v19 = *(_DWORD *)(v2 + 64);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v20 = Player::getPlatformType(this->player_);
                common::milog::MiLogStream::operator()(&v75, &byte_25E20EC0, v20, v19, v18, crca);
                common::milog::MiLogStream::~MiLogStream(&v75);
                common::tools::perf::make_shared<proto_log::AntiCheatBodySegmentCrcCheckFail>();
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                login_req = Player::getSessionLoginReq(this->player_);
                v21 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_crc_module_type(v21, *(_DWORD *)(v2 + 64));
                v22 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v23 = proto::SegmentCRCInfo::offset(crc_info);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_offset(v22, v23);
                v24 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v25 = proto::SegmentCRCInfo::size(crc_info);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_size(v24, v25);
                v26 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v27 = proto::SegmentCRCInfo::crc[abi:cxx11](crc_info);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_crc(v26, v27);
                v28 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v29 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_client_version(v28, v29);
                v30 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v31 = proto::PlayerLoginReq::channel_id(login_req);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_channel_id(v30, v31);
                v32 = std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySegmentCrcCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v33 = proto::PlayerLoginReq::sub_channel_id(login_req);
                proto_log::AntiCheatBodySegmentCrcCheckFail::set_sub_channel_id(v32, v33);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                player = this->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodySegmentCrcCheckFail,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)&p_tree,
                  (const std::shared_ptr<proto_log::AntiCheatBodySegmentCrcCheckFail> *)(v2 + 208));
                Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_SEGMENT_CRC_CHECK_FAIL, (MessagePtr *)&p_tree);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_tree);
                v35 = std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                v36 = proto::SegmentCRCInfo::size(crc_info);
                v37 = proto::SegmentCRCInfo::offset(crc_info);
                if ( SegmentCRCTree::isNodeLeaf(v35, v37, v36) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/player_misc_handler.cpp",
                    "onCheckSegmentCRCReq",
                    594);
                  crcb = proto::SegmentCRCInfo::size(crc_info);
                  v38 = proto::SegmentCRCInfo::offset(crc_info);
                  v39 = *(_DWORD *)(v2 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v40 = Player::getPlatformType(this->player_);
                  common::milog::MiLogStream::operator()(&v75, &byte_25E20F40, v40, v39, v38, crcb);
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  v41 = 0;
                }
                else
                {
                  *(_DWORD *)(v2 + 80) = 0;
                  *(_DWORD *)(v2 + 96) = 0;
                  *(_DWORD *)(v2 + 112) = 0;
                  *(_DWORD *)(v2 + 128) = 0;
                  v42 = proto::SegmentCRCInfo::size(crc_info);
                  v43 = proto::SegmentCRCInfo::offset(crc_info);
                  std::shared_ptr<SegmentCRCTree>::shared_ptr(
                    &p_tree,
                    (const std::shared_ptr<SegmentCRCTree> *)(v2 + 176));
                  ret_0 = SegmentCRCMgr::getNodeChildsOffsetAndSize(
                            &p_tree,
                            v43,
                            v42,
                            (uint32_t *)(v2 + 80),
                            (uint32_t *)(v2 + 96),
                            (uint32_t *)(v2 + 112),
                            (uint32_t *)(v2 + 128));
                  std::shared_ptr<SegmentCRCTree>::~shared_ptr(&p_tree);
                  if ( ret_0 )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/player_misc_handler.cpp",
                      "onCheckSegmentCRCReq",
                      604);
                    v44 = proto::SegmentCRCInfo::size(crc_info);
                    v45 = proto::SegmentCRCInfo::offset(crc_info);
                    common::milog::MiLogStream::operator()(&v75, &byte_25E20FC0, v45, v44);
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v41 = 0;
                  }
                  else
                  {
                    left_info = proto::CheckSegmentCRCNotify::add_info_list((proto::CheckSegmentCRCNotify *const)(v2 + 240));
                    v46 = *(_DWORD *)(v2 + 96);
                    v47 = *(_DWORD *)(v2 + 80);
                    v48 = proto::SegmentCRCInfo::module(crc_info);
                    fillSegmentInfo(left_info, v48, v47, v46);
                    right_info = proto::CheckSegmentCRCNotify::add_info_list((proto::CheckSegmentCRCNotify *const)(v2 + 240));
                    v49 = *(_DWORD *)(v2 + 128);
                    v50 = *(_DWORD *)(v2 + 112);
                    v51 = proto::SegmentCRCInfo::module(crc_info);
                    fillSegmentInfo(right_info, v51, v50, v49);
                    v52 = proto::CheckSegmentCRCNotify::info_list((const proto::CheckSegmentCRCNotify *const)(v2 + 240));
                    if ( google::protobuf::RepeatedPtrField<proto::SegmentInfo>::size(v52) <= 99 )
                    {
                      v41 = 2;
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v75,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/player_misc_handler.cpp",
                        "onCheckSegmentCRCReq",
                        616);
                      v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              &v75,
                              (const char (*)[16])"info_list_size:");
                      v54 = proto::CheckSegmentCRCNotify::info_list((const proto::CheckSegmentCRCNotify *const)(v2 + 240));
                      val = google::protobuf::RepeatedPtrField<proto::SegmentInfo>::size(v54);
                      v55 = common::milog::MiLogStream::operator<<<int,(int *)0>(v53, &val);
                      v56 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              v55,
                              (const char (*)[19])" too long, player:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      operator<<(v56, this->player_);
                      common::milog::MiLogStream::~MiLogStream(&v75);
                      v41 = 1;
                    }
                  }
                }
                std::shared_ptr<proto_log::AntiCheatBodySegmentCrcCheckFail>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodySegmentCrcCheckFail> *const)(v2 + 208));
                if ( v41 )
                {
                  if ( v41 == 2 )
                    v12 = 2;
                  else
                    v12 = 1;
                }
                else
                {
                  v12 = 0;
                }
              }
            }
            std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 176));
            if ( v12 && v12 != 2 )
              break;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::SegmentCRCInfo const>::operator++(&__for_begin);
        }
        v57 = proto::CheckSegmentCRCNotify::info_list((const proto::CheckSegmentCRCNotify *const)(v2 + 240));
        if ( google::protobuf::RepeatedPtrField<proto::SegmentInfo>::size(v57) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 240));
        }
        v6 = 0;
        proto::CheckSegmentCRCNotify::~CheckSegmentCRCNotify((proto::CheckSegmentCRCNotify *const)(v2 + 240));
      }
      std::shared_ptr<proto::CheckSegmentCRCReq const>::~shared_ptr((std::shared_ptr<const proto::CheckSegmentCRCReq> *const)(v2 + 144));
    }
  }
  result = v6;
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 631: range 00000000168CFCAE-00000000168D04BF
int32_t __cdecl PlayerMiscHandler::onServerBlockPlayerMpNotify(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMpComp *v6; // rax
  time_t v7; // r14
  common::milog::MiLogStream *v8; // r14
  PlayerMpComp *MpComp; // r14
  uint32_t v10; // eax
  PlayerMatchComp *MatchComp; // rax
  PlayerMatchComp *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<proto::MpBlockNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  google::protobuf::uint32 v22; // eax
  Player *player; // r14
  int32_t result; // eax
  bool is_notify; // [rsp+13h] [rbp-EDh]
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const proto::ServerBlockPlayerMpNotify *notify; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<proto::MpBlockNotify> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:632 64 16 13 world_ptr:655 96 16 21 client_notify_ptr:685";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onServerBlockPlayerMpNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerBlockPlayerMpNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerBlockPlayerMpNotify const>(
         (const std::shared_ptr<const proto::ServerBlockPlayerMpNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onServerBlockPlayerMpNotify",
      632);
    common::milog::MiLogStream::operator()(&v29, off_25E21160);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
    goto LABEL_49;
  }
  notify = std::__shared_ptr_access<proto::ServerBlockPlayerMpNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerBlockPlayerMpNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( !proto::ServerBlockPlayerMpNotify::is_unlock(notify) )
  {
    v7 = proto::ServerBlockPlayerMpNotify::end_time(notify);
    if ( v7 < common::tools::TimeUtils::getNow() )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_misc_handler.cpp",
        "onServerBlockPlayerMpNotify",
        641);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v29,
             (const char (*)[38])"[MP_BLOCK] end time expired, end_time");
      val = proto::ServerBlockPlayerMpNotify::end_time(notify);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = 0;
      goto LABEL_49;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    v10 = proto::ServerBlockPlayerMpNotify::end_time(notify);
    PlayerMpComp::setMpBlockEndTime(MpComp, v10);
    is_notify = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    if ( PlayerMatchComp::isInMatch(MatchComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = Player::getMatchComp(this->player_);
      PlayerMatchComp::sendRemoveMatchUnitReq(v12, MATCH_UNIT_REMOVE_OP_INTERRUPTED);
      is_notify = 1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onServerBlockPlayerMpNotify",
        658);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v29,
        (const char (*)[29])"[MP_BLOCK] world_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
LABEL_48:
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 64));
      goto LABEL_49;
    }
    v13 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    v14 = *(_QWORD *)v13 + 16LL;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) == 1 )
    {
      v15 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      OwnerUid = World::getOwnerUid(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( OwnerUid == Player::getUid(this->player_) )
      {
        v17 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( World::getPlayerCount(v17) > 1 )
        {
          v18 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8();
          v19 = *(_QWORD *)v18 + 120LL;
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))v19)(v18, 5LL, 0LL);
          is_notify = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        if ( PlayerSceneComp::backMyWorld(SceneComp, E_BACK_MY_WORLD_BY_HOST_BE_BLOCK) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/player_misc_handler.cpp",
            "onServerBlockPlayerMpNotify",
            677);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v29,
            (const char (*)[30])"[MP_BLOCK] backMyWorld failed");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v5 = -1;
          goto LABEL_48;
        }
        is_notify = 1;
      }
    }
    if ( is_notify )
    {
      common::tools::perf::make_shared<proto::MpBlockNotify>();
      v21 = std::__shared_ptr_access<proto::MpBlockNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MpBlockNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v22 = proto::ServerBlockPlayerMpNotify::end_time(notify);
      proto::MpBlockNotify::set_end_time(v21, v22);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::MpBlockNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      std::shared_ptr<proto::MpBlockNotify>::~shared_ptr((std::shared_ptr<proto::MpBlockNotify> *const)(v2 + 96));
    }
    v5 = 0;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = Player::getMpComp(this->player_);
  PlayerMpComp::setMpBlockEndTime(v6, 0);
  v5 = 0;
LABEL_49:
  std::shared_ptr<proto::ServerBlockPlayerMpNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerBlockPlayerMpNotify> *const)(v2 + 32));
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 694: range 00000000168D04C0-00000000168D07F7
int32_t __cdecl PlayerMiscHandler::onServerBlockPlayerChatNotify(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSceneComp *SceneComp; // rax
  time_t v7; // r14
  common::milog::MiLogStream *v8; // r14
  PlayerSceneComp *v9; // r14
  uint32_t v10; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::ServerBlockPlayerChatNotify *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:695";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onServerBlockPlayerChatNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerBlockPlayerChatNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerBlockPlayerChatNotify const>(
         (const std::shared_ptr<const proto::ServerBlockPlayerChatNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onServerBlockPlayerChatNotify",
      695);
    common::milog::MiLogStream::operator()(&v14, off_25E21300);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerBlockPlayerChatNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerBlockPlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerBlockPlayerChatNotify::is_unlock(notify) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      PlayerSceneComp::setChatBlockEndTime(SceneComp, 0);
      v5 = 0;
    }
    else
    {
      v7 = proto::ServerBlockPlayerChatNotify::end_time(notify);
      if ( v7 >= common::tools::TimeUtils::getNow() )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = Player::getSceneComp(this->player_);
        v10 = proto::ServerBlockPlayerChatNotify::end_time(notify);
        PlayerSceneComp::setChatBlockEndTime(v9, v10);
        v5 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_misc_handler.cpp",
          "onServerBlockPlayerChatNotify",
          705);
        v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v14,
               (const char (*)[38])"[MP_BLOCK] end time expired, end_time");
        val = proto::ServerBlockPlayerChatNotify::end_time(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = 0;
      }
    }
  }
  std::shared_ptr<proto::ServerBlockPlayerChatNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerBlockPlayerChatNotify> *const)(v2 + 32));
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

// Line 715: range 00000000168D07F8-00000000168D0AE5
int32_t __cdecl PlayerMiscHandler::onServerCheckSegmentCrcNotify(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:716";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onServerCheckSegmentCrcNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerCheckSegmentCrcNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerCheckSegmentCrcNotify const>(
         (const std::shared_ptr<const proto::ServerCheckSegmentCrcNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onServerCheckSegmentCrcNotify",
      716);
    common::milog::MiLogStream::operator()(&v8, off_25E213C0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ServerCheckSegmentCrcNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerCheckSegmentCrcNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isSegmentCrcOpen(this->player_) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_misc_handler.cpp",
        "onServerCheckSegmentCrcNotify",
        719);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v8,
             (const char (*)[35])"isSegmentCrcOpen is false, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      v5 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::startCheckSegmentCrc(this->player_);
      v5 = 0;
    }
  }
  std::shared_ptr<proto::ServerCheckSegmentCrcNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerCheckSegmentCrcNotify> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 727: range 00000000168D0AE6-00000000168D0DB6
int32_t __cdecl PlayerMiscHandler::onSendOfflineMsgRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int *v6; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string __args_0; // [rsp+14h] [rbp-CCh] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:728 64 16 13 event_ptr:729";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onSendOfflineMsgRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendOfflineMsgRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SendOfflineMsgRsp const>(
         (const std::shared_ptr<const proto::SendOfflineMsgRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)((char *)&__args_0._anon_0._M_allocated_capacity + 12),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onSendOfflineMsgRsp",
      728);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)((char *)&__args_0._anon_0._M_allocated_capacity + 12),
      off_25E21500);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)((char *)&__args_0._anon_0._M_allocated_capacity
                                                                               + 12));
    v5 = -1;
  }
  else
  {
    *(std::string::pointer *)((char *)&__args_0._M_dataplus._M_p + 4) = (std::string::pointer)std::__shared_ptr_access<proto::SendOfflineMsgRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    LODWORD(__args_0._M_dataplus._M_p) = proto::SendOfflineMsgRsp::retcode(*(const proto::SendOfflineMsgRsp *const *)((char *)&__args_0._M_dataplus._M_p + 4));
    v6 = (int *)proto::SendOfflineMsgRsp::ticket[abi:cxx11](*(const proto::SendOfflineMsgRsp *const *)((char *)&__args_0._M_dataplus._M_p + 4));
    common::tools::perf::make_shared<SendOfflineMsgRspEvent,std::string const&,int>(
      (const std::string *)(v2 + 64),
      v6,
      &__args_0,
      v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<SendOfflineMsgRspEvent,void>(
      (std::shared_ptr<BaseEvent> *const)((char *)&__args_0._M_string_length + 4),
      (const std::shared_ptr<SendOfflineMsgRspEvent> *)(v2 + 64));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)((char *)&__args_0._M_string_length + 4));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)((char *)&__args_0._M_string_length + 4));
    v5 = 0;
    std::shared_ptr<SendOfflineMsgRspEvent>::~shared_ptr((std::shared_ptr<SendOfflineMsgRspEvent> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SendOfflineMsgRsp const>::~shared_ptr((std::shared_ptr<const proto::SendOfflineMsgRsp> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 735: range 00000000168D0DB8-00000000168D0FC0
int32_t __cdecl PlayerMiscHandler::onSendOfflineOpRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerOfflineOpComp *OfflineOpComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SendOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:736";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onSendOfflineOpRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendOfflineOpRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SendOfflineOpRsp const>(
         (const std::shared_ptr<const proto::SendOfflineOpRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onSendOfflineOpRsp",
      736);
    common::milog::MiLogStream::operator()(&v9, off_25E215A0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::SendOfflineOpRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OfflineOpComp = Player::getOfflineOpComp(this->player_);
    PlayerOfflineOpComp::onSendOfflineOpRsp(OfflineOpComp, rsp_0);
    v5 = 0;
  }
  std::shared_ptr<proto::SendOfflineOpRsp const>::~shared_ptr((std::shared_ptr<const proto::SendOfflineOpRsp> *const)(v2 + 32));
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

// Line 742: range 00000000168D0FC2-00000000168D11CA
int32_t __cdecl PlayerMiscHandler::onGetOfflineOpRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerOfflineOpComp *OfflineOpComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:743";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onGetOfflineOpRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOfflineOpRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetOfflineOpRsp const>(
         (const std::shared_ptr<const proto::GetOfflineOpRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onGetOfflineOpRsp",
      743);
    common::milog::MiLogStream::operator()(&v9, off_25E21640);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetOfflineOpRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OfflineOpComp = Player::getOfflineOpComp(this->player_);
    PlayerOfflineOpComp::onGetOfflineOpRsp(OfflineOpComp, rsp_0);
    v5 = 0;
  }
  std::shared_ptr<proto::GetOfflineOpRsp const>::~shared_ptr((std::shared_ptr<const proto::GetOfflineOpRsp> *const)(v2 + 32));
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

// Line 750: range 00000000168D11CC-00000000168D13D4
int32_t __cdecl PlayerMiscHandler::onRemoveOfflineOpRsp(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerOfflineOpComp *OfflineOpComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::RemoveOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:751";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onRemoveOfflineOpRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveOfflineOpRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveOfflineOpRsp const>(
         (const std::shared_ptr<const proto::RemoveOfflineOpRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onRemoveOfflineOpRsp",
      751);
    common::milog::MiLogStream::operator()(&v9, off_25E216E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::RemoveOfflineOpRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OfflineOpComp = Player::getOfflineOpComp(this->player_);
    PlayerOfflineOpComp::onRemoveOfflineOpRsp(OfflineOpComp, rsp_0);
    v5 = 0;
  }
  std::shared_ptr<proto::RemoveOfflineOpRsp const>::~shared_ptr((std::shared_ptr<const proto::RemoveOfflineOpRsp> *const)(v2 + 32));
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

// Line 757: range 00000000168D13D6-00000000168D1433
int32_t __cdecl PlayerMiscHandler::onNewOfflineOpNotify(
        PlayerMiscHandler *const this,
        const proto::NewOfflineOpNotify *notify)
{
  PlayerOfflineOpComp *OfflineOpComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  PlayerOfflineOpComp::onNewOfflineOpNotify(OfflineOpComp, notify);
  return 0;
};

// Line 764: range 00000000168D1434-00000000168D16D2
int32_t __cdecl PlayerMiscHandler::onUpdateRedPointByMuipNotify(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  google::protobuf::RepeatedPtrField<proto::RedPointData> *v6; // r14
  google::protobuf::RepeatedPtrField<proto::RedPointData> *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<proto::UpdateRedPointByMuipNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *muip_notify; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 19 muip_notify_ptr:765 80 48 10 notify:766";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onUpdateRedPointByMuipNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::UpdateRedPointByMuipNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::UpdateRedPointByMuipNotify>(
         (const std::shared_ptr<proto::UpdateRedPointByMuipNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onUpdateRedPointByMuipNotify",
      765);
    common::milog::MiLogStream::operator()(&v10, off_25E217A0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    muip_notify = std::__shared_ptr_access<proto::UpdateRedPointByMuipNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UpdateRedPointByMuipNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::UpdateRedPointNotify::UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v2 + 80));
    v6 = proto::UpdateRedPointNotify::mutable_red_point_list((proto::UpdateRedPointNotify *const)(v2 + 80));
    v7 = proto::UpdateRedPointByMuipNotify::mutable_red_point_list(muip_notify);
    google::protobuf::RepeatedPtrField<proto::RedPointData>::Swap(v6, v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = 0;
    proto::UpdateRedPointNotify::~UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v2 + 80));
  }
  std::shared_ptr<proto::UpdateRedPointByMuipNotify>::~shared_ptr((std::shared_ptr<proto::UpdateRedPointByMuipNotify> *const)(v2 + 48));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 773: range 00000000168D16D4-00000000168D1999
int32_t __cdecl PlayerMiscHandler::onClientBulletCreateNotify(
        PlayerMiscHandler *const this,
        const proto::ClientBulletCreateNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool *p_is_mouse_macro_check_open; // rax
  bool v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<proto_log::AntiCheatBodyMouseMacroClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  google::protobuf::uint32 v10; // eax
  Player *player; // r14
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<google::protobuf::Message> v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 log_ptr:784";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onClientBulletCreateNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  p_is_mouse_macro_check_open = &v5->security_config.is_mouse_macro_check_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_mouse_macro_check_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_mouse_macro_check_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_mouse_macro_check_open >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_mouse_macro_check_open);
  }
  v7 = !v5->security_config.is_mouse_macro_check_open;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v14);
  if ( v7 )
  {
    v8 = 142;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now == this->last_mouse_macro_report_time_ )
    {
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_mouse_macro_report_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_mouse_macro_report_time_);
      }
      this->last_mouse_macro_report_time_ = now;
      common::tools::perf::make_shared<proto_log::AntiCheatBodyMouseMacroClientReport>();
      v9 = std::__shared_ptr_access<proto_log::AntiCheatBodyMouseMacroClientReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMouseMacroClientReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v10 = proto::ClientBulletCreateNotify::param(notify);
      proto_log::AntiCheatBodyMouseMacroClientReport::set_param(v9, v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyMouseMacroClientReport,void>(
        &v14,
        (const std::shared_ptr<proto_log::AntiCheatBodyMouseMacroClientReport> *)(v2 + 32));
      Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_MOUSE_MACRO_CLIENT_REPORT, &v14);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v14);
      v8 = 0;
      std::shared_ptr<proto_log::AntiCheatBodyMouseMacroClientReport>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyMouseMacroClientReport> *const)(v2 + 32));
    }
  }
  result = v8;
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

// Line 792: range 00000000168D199A-00000000168D1FB5
int32_t __cdecl PlayerMiscHandler::onChangeServerGlobalValueNotify(
        PlayerMiscHandler *const this,
        const proto::ChangeServerGlobalValueNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t v7; // r14d
  Creature *v8; // rax
  AbilityComp *AbilityComp; // rax
  time_t Now; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // ecx
  Entity *v13; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto_log::EntityLog *v15; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  Player *player; // r14
  PlayerAvatarComp *v25; // rax
  int32_t result; // eax
  uint32_t total_log_count; // [rsp+14h] [rbp-CCh]
  ClientServerGlobalValueConfig *config; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+20h] [rbp-C0h] BYREF
  char v30[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 scene_ptr:803 64 16 16 creature_ptr:808 96 16 11 log_ptr:821";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onChangeServerGlobalValueNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->security_config.client_server_global_value_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  if ( *(char *)(((unsigned __int64)config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(config);
  if ( !config->is_open )
  {
    v5 = 142;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    total_log_count = PlayerAvatarComp::getClientSgvAnticheatLogCount(AvatarComp);
    if ( *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( total_log_count < config->anticheat_log_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
      {
        v5 = 103;
      }
      else
      {
        v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        proto::ChangeServerGlobalValueNotify::entity_id(notify);
        Scene::findEntity<Creature>((const Scene *const)(v2 + 64), v7);
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 64)) )
        {
          v5 = 504;
        }
        else
        {
          v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          AbilityComp = Creature::getAbilityComp(v8);
          if ( AbilityComp::getDynamicValue<float>(AbilityComp, &config->sgv_name) == 0.0 )
          {
            Now = common::tools::TimeUtils::getNow();
            v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v12 = Creature::getLastChangeSpecialSgvTime(v11);
            if ( *(_BYTE *)(((unsigned __int64)&config->timeout_seconds >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->timeout_seconds >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( Now > v12 + config->timeout_seconds )
            {
              common::tools::perf::make_shared<proto_log::AntiCheatBodyClientSgvCheckFail>();
              v13 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              v14 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v15 = proto_log::AntiCheatBodyClientSgvCheckFail::mutable_entity_log(v14);
              Entity::getEntityLog(v13, v15);
              v16 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v17 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              EntityId = Entity::getEntityId((const Entity *const)v17);
              proto_log::AntiCheatBodyClientSgvCheckFail::set_entity_id(v16, EntityId);
              v19 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              proto_log::AntiCheatBodyClientSgvCheckFail::set_sgv(v19, &config->sgv_name);
              v20 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              v22 = Creature::getLastChangeSpecialSgvTime(v21);
              proto_log::AntiCheatBodyClientSgvCheckFail::set_last_enable_time(v20, v22);
              v23 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientSgvCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&config->timeout_seconds >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->timeout_seconds >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto_log::AntiCheatBodyClientSgvCheckFail::set_timeout_seconds(v23, config->timeout_seconds);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              player = this->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyClientSgvCheckFail,void>(
                &v29,
                (const std::shared_ptr<proto_log::AntiCheatBodyClientSgvCheckFail> *)(v2 + 96));
              Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_CLIENT_SGV_CHECK_FAIL, &v29);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v25 = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::setClientSgvAnticheatLogCount(v25, total_log_count + 1);
              v5 = 0;
              std::shared_ptr<proto_log::AntiCheatBodyClientSgvCheckFail>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyClientSgvCheckFail> *const)(v2 + 96));
            }
            else
            {
              v5 = 0;
            }
          }
          else
          {
            v5 = 0;
          }
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
    }
    else
    {
      v5 = -1;
    }
  }
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 833: range 00000000168D1FB6-00000000168D240D
int32_t __cdecl PlayerMiscHandler::onPlayerMpModeReq(
        PlayerMiscHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerMpComp *MpComp; // rax
  bool v12; // dl
  GameserverService *v13; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::PlayerMpModeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-108h]
  std::shared_ptr<proto::PlayerMpModeRsp> p_rsp_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:838 64 16 11 req_ptr:834 96 16 11 rsp_ptr:834 128 16 14 player_ptr:839";
  *(_QWORD *)(v2 + 16) = PlayerMiscHandler::onPlayerMpModeReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerMpModeReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlayerMpModeReq const>(
         (const std::shared_ptr<const proto::PlayerMpModeReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_misc_handler.cpp",
      "onPlayerMpModeReq",
      834);
    common::milog::MiLogStream::operator()(&v17, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerMpModeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerMpModeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::PlayerMpModeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerMpModeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerMpModeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::PlayerMpModeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 128),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_misc_handler.cpp",
        "onPlayerMpModeReq",
        842);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v17,
             (const char (*)[23])"findPlayer fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      proto::PlayerMpModeRsp::set_retcode(rsp_0, 140);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      MpComp = Player::getMpComp(v10);
      v12 = PlayerMpComp::isInMpMode(MpComp);
      proto::PlayerMpModeRsp::set_is_mp_mode(rsp_0, v12);
      proto::PlayerMpModeRsp::set_retcode(rsp_0, 0);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    v13 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::PlayerMpModeRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::PlayerMpModeRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::PlayerMpModeRsp>(v13, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::PlayerMpModeRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = 0;
    std::shared_ptr<proto::PlayerMpModeRsp>::~shared_ptr((std::shared_ptr<proto::PlayerMpModeRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::PlayerMpModeReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerMpModeReq> *const)(v2 + 64));
  result = v5;
  if ( v18 == (char *)v2 )
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
