// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_handler.cpp

// Line 50: range 00000000168BD248-00000000168BFF9D
int32_t __cdecl PlayerHandler::addPacketFuncToMap(PlayerHandler *const this, PacketFuncMap *process_packet_func_map)
{
  PlayerHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  PlayerHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  PlayerHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v21; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v24; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  PlayerHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  PlayerHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  PlayerHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v36; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v39; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v42; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v45; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v48; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v49; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v51; // rax
  __m128i v52; // [rsp+0h] [rbp-F0h] BYREF
  __m128i v53; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v54; // [rsp+20h] [rbp-D0h] BYREF
  __m128i v55; // [rsp+30h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+40h] [rbp-B0h]
  PlayerHandler *thisa; // [rsp+48h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+5Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v59; // [rsp+60h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+68h] [rbp-88h] BYREF
  int (*__f[2])(PlayerHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+70h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,const std::_Placeholder<1>&>::type v62; // [rsp+80h] [rbp-70h] BYREF
  common::milog::MiLogStream v63; // [rsp+A0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 5;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v59, &__y) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/player_handler.cpp",
      "addPacketFuncToMap",
      51);
    common::milog::MiLogStream::operator()(&v63, off_25E0B640, 5LL);
    common::milog::MiLogStream::~MiLogStream(&v63);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v52.m128i_i64[0] = (__int64)PlayerHandler::onUnionCmdNotify;
    v52.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v52);
    std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
      &v62,
      __f,
      (PlayerHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 5;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
      v5,
      &v62);
    __x = 174;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v59, &__y) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/player_handler.cpp",
        "addPacketFuncToMap",
        52);
      common::milog::MiLogStream::operator()(&v63, off_25E0B640, 174LL);
      common::milog::MiLogStream::~MiLogStream(&v63);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __x = 174;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
        v6,
        (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 197;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v59, &__y) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/player_handler.cpp",
          "addPacketFuncToMap",
          53);
        common::milog::MiLogStream::operator()(&v63, off_25E0B640, 197LL);
        common::milog::MiLogStream::~MiLogStream(&v63);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __x = 197;
        v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
          v7,
          (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 153;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v59, &__y) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/player_handler.cpp",
            "addPacketFuncToMap",
            54);
          common::milog::MiLogStream::operator()(&v63, off_25E0B640, 153LL);
          common::milog::MiLogStream::~MiLogStream(&v63);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v53.m128i_i64[0] = (__int64)PlayerHandler::onSetPlayerNameReq;
          v53.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v53);
          std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
            &v62,
            __f,
            (PlayerHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v8,
            v9);
          __x = 153;
          v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
            v10,
            &v62);
          __x = 105;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v59, &__y) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/player_handler.cpp",
              "addPacketFuncToMap",
              55);
            common::milog::MiLogStream::operator()(&v63, off_25E0B640, 105LL);
            common::milog::MiLogStream::~MiLogStream(&v63);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v54.m128i_i64[0] = (__int64)PlayerHandler::onSetPlayerBornDataReq;
            v54.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v54);
            std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
              &v62,
              __f,
              (PlayerHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v11,
              v12);
            __x = 105;
            v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
              v13,
              &v62);
            __x = 165;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v59, &__y) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/player_handler.cpp",
                "addPacketFuncToMap",
                56);
              common::milog::MiLogStream::operator()(&v63, off_25E0B640, 165LL);
              common::milog::MiLogStream::~MiLogStream(&v63);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __x = 165;
              v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
                v14,
                (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 124;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v59, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/player_handler.cpp",
                  "addPacketFuncToMap",
                  57);
                common::milog::MiLogStream::operator()(&v63, off_25E0B640, 124LL);
                common::milog::MiLogStream::~MiLogStream(&v63);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __x = 124;
                v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                  v15,
                  (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 142;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v59, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/player_handler.cpp",
                    "addPacketFuncToMap",
                    58);
                  common::milog::MiLogStream::operator()(&v63, off_25E0B640, 142LL);
                  common::milog::MiLogStream::~MiLogStream(&v63);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  __x = 142;
                  v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                    v16,
                    (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 126;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v59, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v63,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/player_handler.cpp",
                      "addPacketFuncToMap",
                      59);
                    common::milog::MiLogStream::operator()(&v63, off_25E0B640, 126LL);
                    common::milog::MiLogStream::~MiLogStream(&v63);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    __x = 126;
                    v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                      v17,
                      (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 194;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v59, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v63,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/player_handler.cpp",
                        "addPacketFuncToMap",
                        60);
                      common::milog::MiLogStream::operator()(&v63, off_25E0B640, 194LL);
                      common::milog::MiLogStream::~MiLogStream(&v63);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      __x = 194;
                      v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                        v18,
                        (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 150;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v59, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v63,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/player_handler.cpp",
                          "addPacketFuncToMap",
                          61);
                        common::milog::MiLogStream::operator()(&v63, off_25E0B640, 150LL);
                        common::milog::MiLogStream::~MiLogStream(&v63);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        __x = 150;
                        v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                          v19,
                          (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 185;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v59, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v63,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/player_handler.cpp",
                            "addPacketFuncToMap",
                            62);
                          common::milog::MiLogStream::operator()(&v63, off_25E0B640, 185LL);
                          common::milog::MiLogStream::~MiLogStream(&v63);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          __x = 185;
                          v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                            v20,
                            (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 141;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v59, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v63,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/player_handler.cpp",
                              "addPacketFuncToMap",
                              63);
                            common::milog::MiLogStream::operator()(&v63, off_25E0B640, 141LL);
                            common::milog::MiLogStream::~MiLogStream(&v63);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            __x = 141;
                            v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                              v21,
                              (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 173;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v59, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v63,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/player_handler.cpp",
                                "addPacketFuncToMap",
                                64);
                              common::milog::MiLogStream::operator()(&v63, off_25E0B640, 173LL);
                              common::milog::MiLogStream::~MiLogStream(&v63);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              __x = 173;
                              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                                v22,
                                (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 148;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v59, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v63,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/player_handler.cpp",
                                  "addPacketFuncToMap",
                                  65);
                                common::milog::MiLogStream::operator()(&v63, off_25E0B640, 148LL);
                                common::milog::MiLogStream::~MiLogStream(&v63);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                __x = 148;
                                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                                  v23,
                                  (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 129;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v59, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v63,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/player_handler.cpp",
                                    "addPacketFuncToMap",
                                    66);
                                  common::milog::MiLogStream::operator()(&v63, off_25E0B640, 129LL);
                                  common::milog::MiLogStream::~MiLogStream(&v63);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  __x = 129;
                                  v24 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                                    v24,
                                    (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 140;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v59, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v63,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/player_handler.cpp",
                                      "addPacketFuncToMap",
                                      67);
                                    common::milog::MiLogStream::operator()(&v63, off_25E0B640, 140LL);
                                    common::milog::MiLogStream::~MiLogStream(&v63);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    __x = 140;
                                    v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                      v25,
                                      (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 166;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v59, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v63,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/player_handler.cpp",
                                        "addPacketFuncToMap",
                                        68);
                                      common::milog::MiLogStream::operator()(&v63, off_25E0B640, 166LL);
                                      common::milog::MiLogStream::~MiLogStream(&v63);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      __x = 166;
                                      v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                        v26,
                                        (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 2212;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v59, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v63,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/player_handler.cpp",
                                          "addPacketFuncToMap",
                                          69);
                                        common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2212LL);
                                        common::milog::MiLogStream::~MiLogStream(&v63);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v55.m128i_i64[0] = (__int64)PlayerHandler::onWatcherEventNotify;
                                        v55.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v55);
                                        std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
                                          &v62,
                                          __f,
                                          (PlayerHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v27,
                                          v28);
                                        __x = 2212;
                                        v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
                                          v29,
                                          &v62);
                                        __x = 2235;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v59, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v63,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/player_handler.cpp",
                                            "addPacketFuncToMap",
                                            70);
                                          common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2235LL);
                                          common::milog::MiLogStream::~MiLogStream(&v63);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          __f[0] = (int (*)(PlayerHandler *, std::shared_ptr<common::minet::Packet>))PlayerHandler::onWatcherEventTypeNotify;
                                          __f[1] = 0LL;
                                          std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
                                            &v62,
                                            __f,
                                            (PlayerHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v30,
                                            v31);
                                          __x = 2235;
                                          v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
                                            v32,
                                            &v62);
                                          __x = 2207;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v59, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v63,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/player_handler.cpp",
                                              "addPacketFuncToMap",
                                              71);
                                            common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2207LL);
                                            common::milog::MiLogStream::~MiLogStream(&v63);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            __f[0] = (int (*)(PlayerHandler *, std::shared_ptr<common::minet::Packet>))PlayerHandler::onWatcherEventStageNotify;
                                            __f[1] = 0LL;
                                            std::bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>),PlayerHandler*,std::_Placeholder<1> const&>(
                                              &v62,
                                              __f,
                                              (PlayerHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v33,
                                              v34);
                                            __x = 2207;
                                            v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (PlayerHandler::*)(std::shared_ptr<common::minet::Packet>) ()(PlayerHandler*,std::_Placeholder<1>)>>(
                                              v35,
                                              &v62);
                                            __x = 2204;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v59, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v63,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/player_handler.cpp",
                                                "addPacketFuncToMap",
                                                72);
                                              common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2204LL);
                                              common::milog::MiLogStream::~MiLogStream(&v63);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              __x = 2204;
                                              v36 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                                v36,
                                                (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                              __x = 2227;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v59, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v63,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/player_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  73);
                                                common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2227LL);
                                                common::milog::MiLogStream::~MiLogStream(&v63);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                __x = 2227;
                                                v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                                  v37,
                                                  (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                __x = 2512;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v59, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v63,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/player_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    74);
                                                  common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2512LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v63);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  __x = 2512;
                                                  v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                                    v38,
                                                    (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                  __x = 2507;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v59, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v63,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/player_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      75);
                                                    common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2507LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v63);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    __x = 2507;
                                                    v39 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}>(
                                                      v39,
                                                      (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                    __x = 2548;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v59, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v63,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/player_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        76);
                                                      common::milog::MiLogStream::operator()(&v63, off_25E0B640, 2548LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v63);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      __x = 2548;
                                                      v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}>(
                                                        v40,
                                                        (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                      __x = 2581;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v59, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v63,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/player_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          77);
                                                        common::milog::MiLogStream::operator()(
                                                          &v63,
                                                          off_25E0B640,
                                                          2581LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v63);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        __x = 2581;
                                                        v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}>(
                                                          v41,
                                                          (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                        __x = 189;
                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                        process_packet_func_mapa,
                                                                        &__x)._M_node;
                                                        v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                        if ( std::operator!=(&v59, &__y) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            &v63,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/handler/player_handler.cpp",
                                                            "addPacketFuncToMap",
                                                            78);
                                                          common::milog::MiLogStream::operator()(
                                                            &v63,
                                                            off_25E0B640,
                                                            189LL);
                                                          common::milog::MiLogStream::~MiLogStream(&v63);
                                                          return -1;
                                                        }
                                                        else
                                                        {
                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                          __x = 189;
                                                          v42 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                  process_packet_func_mapa,
                                                                  &__x);
                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}>(
                                                            v42,
                                                            (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                          __x = 114;
                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                          process_packet_func_mapa,
                                                                          &__x)._M_node;
                                                          v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                          if ( std::operator!=(&v59, &__y) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              &v63,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/handler/player_handler.cpp",
                                                              "addPacketFuncToMap",
                                                              79);
                                                            common::milog::MiLogStream::operator()(
                                                              &v63,
                                                              off_25E0B640,
                                                              114LL);
                                                            common::milog::MiLogStream::~MiLogStream(&v63);
                                                            return -1;
                                                          }
                                                          else
                                                          {
                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                            __x = 114;
                                                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                    process_packet_func_mapa,
                                                                    &__x);
                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}>(
                                                              v43,
                                                              (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                            __x = 192;
                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                            process_packet_func_mapa,
                                                                            &__x)._M_node;
                                                            v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                            if ( std::operator!=(&v59, &__y) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                &v63,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/handler/player_handler.cpp",
                                                                "addPacketFuncToMap",
                                                                80);
                                                              common::milog::MiLogStream::operator()(
                                                                &v63,
                                                                off_25E0B640,
                                                                192LL);
                                                              common::milog::MiLogStream::~MiLogStream(&v63);
                                                              return -1;
                                                            }
                                                            else
                                                            {
                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                              __x = 192;
                                                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                      process_packet_func_mapa,
                                                                      &__x);
                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}>(
                                                                v44,
                                                                (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                              __x = 164;
                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                              process_packet_func_mapa,
                                                                              &__x)._M_node;
                                                              v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                              if ( std::operator!=(&v59, &__y) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  &v63,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/handler/player_handler.cpp",
                                                                  "addPacketFuncToMap",
                                                                  81);
                                                                common::milog::MiLogStream::operator()(
                                                                  &v63,
                                                                  off_25E0B640,
                                                                  164LL);
                                                                common::milog::MiLogStream::~MiLogStream(&v63);
                                                                return -1;
                                                              }
                                                              else
                                                              {
                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                __x = 164;
                                                                v45 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                        process_packet_func_mapa,
                                                                        &__x);
                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}>(
                                                                  v45,
                                                                  (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                __x = 5668;
                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                process_packet_func_mapa,
                                                                                &__x)._M_node;
                                                                v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                if ( std::operator!=(&v59, &__y) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    &v63,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/handler/player_handler.cpp",
                                                                    "addPacketFuncToMap",
                                                                    82);
                                                                  common::milog::MiLogStream::operator()(
                                                                    &v63,
                                                                    off_25E0B640,
                                                                    5668LL);
                                                                  common::milog::MiLogStream::~MiLogStream(&v63);
                                                                  return -1;
                                                                }
                                                                else
                                                                {
                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                  __x = 5668;
                                                                  v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                          process_packet_func_mapa,
                                                                          &__x);
                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}>(
                                                                    v46,
                                                                    (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                  __x = 5657;
                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                  process_packet_func_mapa,
                                                                                  &__x)._M_node;
                                                                  v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                  if ( std::operator!=(&v59, &__y) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      &v63,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/handler/player_handler.cpp",
                                                                      "addPacketFuncToMap",
                                                                      83);
                                                                    common::milog::MiLogStream::operator()(
                                                                      &v63,
                                                                      off_25E0B640,
                                                                      5657LL);
                                                                    common::milog::MiLogStream::~MiLogStream(&v63);
                                                                    return -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                    __x = 5657;
                                                                    v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                            process_packet_func_mapa,
                                                                            &__x);
                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}>(
                                                                      v47,
                                                                      (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                    __x = 111;
                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                    process_packet_func_mapa,
                                                                                    &__x)._M_node;
                                                                    v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                    if ( std::operator!=(&v59, &__y) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        &v63,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/handler/player_handler.cpp",
                                                                        "addPacketFuncToMap",
                                                                        84);
                                                                      common::milog::MiLogStream::operator()(
                                                                        &v63,
                                                                        off_25E0B640,
                                                                        111LL);
                                                                      common::milog::MiLogStream::~MiLogStream(&v63);
                                                                      return -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                      __x = 111;
                                                                      v48 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                              process_packet_func_mapa,
                                                                              &__x);
                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}>(
                                                                        v48,
                                                                        (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                      __x = 151;
                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                      process_packet_func_mapa,
                                                                                      &__x)._M_node;
                                                                      v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                      if ( std::operator!=(&v59, &__y) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          &v63,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/handler/player_handler.cpp",
                                                                          "addPacketFuncToMap",
                                                                          85);
                                                                        common::milog::MiLogStream::operator()(
                                                                          &v63,
                                                                          off_25E0B640,
                                                                          151LL);
                                                                        common::milog::MiLogStream::~MiLogStream(&v63);
                                                                        return -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                        __x = 151;
                                                                        v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                process_packet_func_mapa,
                                                                                &__x);
                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}>(
                                                                          v49,
                                                                          (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                        __x = 171;
                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                        process_packet_func_mapa,
                                                                                        &__x)._M_node;
                                                                        v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                        if ( std::operator!=(&v59, &__y) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            &v63,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/handler/player_handler.cpp",
                                                                            "addPacketFuncToMap",
                                                                            86);
                                                                          common::milog::MiLogStream::operator()(
                                                                            &v63,
                                                                            off_25E0B640,
                                                                            171LL);
                                                                          common::milog::MiLogStream::~MiLogStream(&v63);
                                                                          return -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                          __x = 171;
                                                                          v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                  process_packet_func_mapa,
                                                                                  &__x);
                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}>(
                                                                            v50,
                                                                            (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                          __x = 177;
                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                          process_packet_func_mapa,
                                                                                          &__x)._M_node;
                                                                          v59._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                          if ( std::operator!=(&v59, &__y) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              &v63,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/handler/player_handler.cpp",
                                                                              "addPacketFuncToMap",
                                                                              87);
                                                                            common::milog::MiLogStream::operator()(
                                                                              &v63,
                                                                              off_25E0B640,
                                                                              177LL);
                                                                            common::milog::MiLogStream::~MiLogStream(&v63);
                                                                            return -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                            __x = 177;
                                                                            v51 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                    process_packet_func_mapa,
                                                                                    &__x);
                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}>(
                                                                              v51,
                                                                              (PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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
};

// Line 52: range 00000000168B741A-00000000168B7736
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeCompoundOutputReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeCompoundOutputRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeCompoundOutputRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:52 64 16 10 rsp_ptr:52";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeCompoundOutputReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeCompoundOutputReq const>(
         (const std::shared_ptr<const proto::TakeCompoundOutputReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeCompoundOutputReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCompoundOutputReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeCompoundOutputRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeCompoundOutputRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeCompoundOutputRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeCompoundOutputRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeCompoundOutputReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCompoundOutputReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onTakeCompoundOutputReq(this, v8, rsp_0);
    proto::TakeCompoundOutputRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeCompoundOutputRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeCompoundOutputRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeCompoundOutputRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeCompoundOutputRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeCompoundOutputRsp>::~shared_ptr((std::shared_ptr<proto::TakeCompoundOutputRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeCompoundOutputReq const>::~shared_ptr((std::shared_ptr<const proto::TakeCompoundOutputReq> *const)(v2 + 32));
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

// Line 53: range 00000000168B7738-00000000168B7A54
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::SetPlayerPropReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetPlayerPropRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetPlayerPropRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:53 64 16 10 rsp_ptr:53";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetPlayerPropReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetPlayerPropReq const>(
         (const std::shared_ptr<const proto::SetPlayerPropReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      53);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetPlayerPropReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerPropReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetPlayerPropRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetPlayerPropRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetPlayerPropRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetPlayerPropRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetPlayerPropReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerPropReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onSetPlayerPropReq(this, v8, rsp_0);
    proto::SetPlayerPropRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetPlayerPropRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetPlayerPropRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetPlayerPropRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetPlayerPropRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetPlayerPropRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerPropRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetPlayerPropReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerPropReq> *const)(v2 + 32));
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

// Line 56: range 00000000168B7A56-00000000168B7D72
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::SetOpenStateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetOpenStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetOpenStateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:56 64 16 10 rsp_ptr:56";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetOpenStateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetOpenStateReq const>(
         (const std::shared_ptr<const proto::SetOpenStateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      56);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetOpenStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetOpenStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetOpenStateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetOpenStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetOpenStateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetOpenStateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetOpenStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetOpenStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onSetOpenStateReq(this, v8, rsp_0);
    proto::SetOpenStateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetOpenStateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetOpenStateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetOpenStateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetOpenStateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetOpenStateRsp>::~shared_ptr((std::shared_ptr<proto::SetOpenStateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetOpenStateReq const>::~shared_ptr((std::shared_ptr<const proto::SetOpenStateReq> *const)(v2 + 32));
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

// Line 57: range 00000000168B7D74-00000000168B8090
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerSetPauseReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerSetPauseRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerSetPauseRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:57 64 16 10 rsp_ptr:57";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerSetPauseReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerSetPauseReq const>(
         (const std::shared_ptr<const proto::PlayerSetPauseReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      57);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerSetPauseReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetPauseReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerSetPauseRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerSetPauseRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerSetPauseRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerSetPauseRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerSetPauseReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetPauseReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerSetPauseReq(this, v8, rsp_0);
    proto::PlayerSetPauseRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerSetPauseRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerSetPauseRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerSetPauseRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerSetPauseRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerSetPauseRsp>::~shared_ptr((std::shared_ptr<proto::PlayerSetPauseRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerSetPauseReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerSetPauseReq> *const)(v2 + 32));
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

// Line 58: range 00000000168B8092-00000000168B83AE
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerSetLanguageReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerSetLanguageRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerSetLanguageRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:58 64 16 10 rsp_ptr:58";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerSetLanguageReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerSetLanguageReq const>(
         (const std::shared_ptr<const proto::PlayerSetLanguageReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      58);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerSetLanguageReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetLanguageReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerSetLanguageRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerSetLanguageRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerSetLanguageRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerSetLanguageRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerSetLanguageReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetLanguageReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerSetLanguageReq(this, v8, rsp_0);
    proto::PlayerSetLanguageRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerSetLanguageRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerSetLanguageRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerSetLanguageRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerSetLanguageRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerSetLanguageRsp>::~shared_ptr((std::shared_ptr<proto::PlayerSetLanguageRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerSetLanguageReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerSetLanguageReq> *const)(v2 + 32));
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

// Line 59: range 00000000168B83B0-00000000168B86CC
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerRandomCookReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerRandomCookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerRandomCookRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:59 64 16 10 rsp_ptr:59";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerRandomCookReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerRandomCookReq const>(
         (const std::shared_ptr<const proto::PlayerRandomCookReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      59);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerRandomCookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerRandomCookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerRandomCookRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerRandomCookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerRandomCookRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerRandomCookRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerRandomCookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerRandomCookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerRandomCookReq(this, v8, rsp_0);
    proto::PlayerRandomCookRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerRandomCookRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerRandomCookRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerRandomCookRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerRandomCookRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerRandomCookRsp>::~shared_ptr((std::shared_ptr<proto::PlayerRandomCookRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerRandomCookReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerRandomCookReq> *const)(v2 + 32));
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

// Line 60: range 00000000168B86CE-00000000168B89EA
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerCookReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerCookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerCookRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:60 64 16 10 rsp_ptr:60";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCookReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerCookReq const>((const std::shared_ptr<const proto::PlayerCookReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerCookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerCookRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerCookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerCookRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerCookRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerCookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerCookReq(this, v8, rsp_0);
    proto::PlayerCookRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerCookRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerCookRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerCookRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerCookRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerCookRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCookRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerCookReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCookReq> *const)(v2 + 32));
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

// Line 61: range 00000000168B89EC-00000000168B8D08
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerCompoundMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerCompoundMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerCompoundMaterialRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:61 64 16 10 rsp_ptr:61";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCompoundMaterialReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerCompoundMaterialReq const>(
         (const std::shared_ptr<const proto::PlayerCompoundMaterialReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      61);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerCompoundMaterialReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCompoundMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerCompoundMaterialRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerCompoundMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerCompoundMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerCompoundMaterialReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCompoundMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerCompoundMaterialReq(this, v8, rsp_0);
    proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerCompoundMaterialRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerCompoundMaterialRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerCompoundMaterialRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerCompoundMaterialRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerCompoundMaterialRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCompoundMaterialRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerCompoundMaterialReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCompoundMaterialReq> *const)(v2 + 32));
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

// Line 62: range 00000000168B8D0A-00000000168B9026
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerCompoundMaterialBoostReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerCompoundMaterialBoostRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:62 64 16 10 rsp_ptr:62";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCompoundMaterialBoostReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerCompoundMaterialBoostReq const>(
         (const std::shared_ptr<const proto::PlayerCompoundMaterialBoostReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      62);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerCompoundMaterialBoostReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCompoundMaterialBoostReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerCompoundMaterialBoostRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerCompoundMaterialBoostRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerCompoundMaterialBoostRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerCompoundMaterialBoostRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerCompoundMaterialBoostReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCompoundMaterialBoostReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerCompoundMaterialBoostReq(this, v8, rsp_0);
    proto::PlayerCompoundMaterialBoostRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerCompoundMaterialBoostRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCompoundMaterialBoostRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerCompoundMaterialBoostReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCompoundMaterialBoostReq> *const)(v2 + 32));
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

// Line 63: range 00000000168B9028-00000000168B9344
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetCompoundDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetCompoundDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetCompoundDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:63 64 16 10 rsp_ptr:63";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetCompoundDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetCompoundDataReq const>(
         (const std::shared_ptr<const proto::GetCompoundDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      63);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetCompoundDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCompoundDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetCompoundDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetCompoundDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetCompoundDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetCompoundDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetCompoundDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCompoundDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetCompoundDataReq(this, v8, rsp_0);
    proto::GetCompoundDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetCompoundDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetCompoundDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetCompoundDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetCompoundDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetCompoundDataRsp>::~shared_ptr((std::shared_ptr<proto::GetCompoundDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetCompoundDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetCompoundDataReq> *const)(v2 + 32));
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

// Line 64: range 00000000168B9346-00000000168B9662
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeGameTimeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChangeGameTimeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChangeGameTimeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:64 64 16 10 rsp_ptr:64";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeGameTimeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeGameTimeReq const>(
         (const std::shared_ptr<const proto::ChangeGameTimeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      64);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChangeGameTimeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeGameTimeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeGameTimeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeGameTimeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeGameTimeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeGameTimeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChangeGameTimeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeGameTimeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onChangeGameTimeReq(this, v8, rsp_0);
    proto::ChangeGameTimeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChangeGameTimeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChangeGameTimeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChangeGameTimeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChangeGameTimeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChangeGameTimeRsp>::~shared_ptr((std::shared_ptr<proto::ChangeGameTimeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeGameTimeReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeGameTimeReq> *const)(v2 + 32));
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

// Line 65: range 00000000168B9664-00000000168B9846
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientTriggerEventNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:65";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientTriggerEventNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientTriggerEventNotify const>(
         (const std::shared_ptr<const proto::ClientTriggerEventNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      65);
    common::milog::MiLogStream::operator()(&v9, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ClientTriggerEventNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientTriggerEventNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerHandler::onClientTriggerEventNotify(this, v7);
  }
  std::shared_ptr<proto::ClientTriggerEventNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientTriggerEventNotify> *const)(v2 + 32));
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

// Line 66: range 00000000168B9848-00000000168B9B64
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::TakePlayerLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakePlayerLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakePlayerLevelRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:66 64 16 10 rsp_ptr:66";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakePlayerLevelRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakePlayerLevelRewardReq const>(
         (const std::shared_ptr<const proto::TakePlayerLevelRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      66);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakePlayerLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakePlayerLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakePlayerLevelRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakePlayerLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakePlayerLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakePlayerLevelRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakePlayerLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakePlayerLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onTakePlayerLevelRewardReq(this, v8, rsp_0);
    proto::TakePlayerLevelRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakePlayerLevelRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakePlayerLevelRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakePlayerLevelRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakePlayerLevelRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakePlayerLevelRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakePlayerLevelRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakePlayerLevelRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakePlayerLevelRewardReq> *const)(v2 + 32));
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

// Line 67: range 00000000168B9B66-00000000168B9E82
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::ItemGivingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ItemGivingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ItemGivingRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:67 64 16 10 rsp_ptr:67";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ItemGivingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ItemGivingReq const>((const std::shared_ptr<const proto::ItemGivingReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      67);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ItemGivingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ItemGivingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ItemGivingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ItemGivingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ItemGivingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ItemGivingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ItemGivingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ItemGivingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onItemGivingReq(this, v8, rsp_0);
    proto::ItemGivingRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ItemGivingRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ItemGivingRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ItemGivingRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ItemGivingRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ItemGivingRsp>::~shared_ptr((std::shared_ptr<proto::ItemGivingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ItemGivingReq const>::~shared_ptr((std::shared_ptr<const proto::ItemGivingReq> *const)(v2 + 32));
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

// Line 68: range 00000000168B9E84-00000000168BA1A0
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerCookArgsReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerCookArgsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerCookArgsRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCookArgsReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerCookArgsReq const>(
         (const std::shared_ptr<const proto::PlayerCookArgsReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      68);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerCookArgsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCookArgsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerCookArgsRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerCookArgsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerCookArgsRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerCookArgsRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerCookArgsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCookArgsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerCookArgsReq(this, v8, rsp_0);
    proto::PlayerCookArgsRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerCookArgsRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerCookArgsRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerCookArgsRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerCookArgsRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerCookArgsRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCookArgsRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerCookArgsReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCookArgsReq> *const)(v2 + 32));
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

// Line 72: range 00000000168BA1A2-00000000168BA4BE
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PushTipsReadFinishReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PushTipsReadFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PushTipsReadFinishRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:72 64 16 10 rsp_ptr:72";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PushTipsReadFinishReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PushTipsReadFinishReq const>(
         (const std::shared_ptr<const proto::PushTipsReadFinishReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      72);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PushTipsReadFinishReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PushTipsReadFinishReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PushTipsReadFinishRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PushTipsReadFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PushTipsReadFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PushTipsReadFinishRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PushTipsReadFinishReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PushTipsReadFinishReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPushTipsReadFinishReq(this, v8, rsp_0);
    proto::PushTipsReadFinishRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PushTipsReadFinishRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PushTipsReadFinishRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PushTipsReadFinishRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PushTipsReadFinishRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PushTipsReadFinishRsp>::~shared_ptr((std::shared_ptr<proto::PushTipsReadFinishRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PushTipsReadFinishReq const>::~shared_ptr((std::shared_ptr<const proto::PushTipsReadFinishReq> *const)(v2 + 32));
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

// Line 73: range 00000000168BA4C0-00000000168BA7DC
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetPushTipsRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetPushTipsRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetPushTipsRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPushTipsRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPushTipsRewardReq const>(
         (const std::shared_ptr<const proto::GetPushTipsRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      73);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetPushTipsRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPushTipsRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetPushTipsRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetPushTipsRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPushTipsRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetPushTipsRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetPushTipsRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPushTipsRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetPushTipsRewardReq(this, v8, rsp_0);
    proto::GetPushTipsRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetPushTipsRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetPushTipsRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetPushTipsRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetPushTipsRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetPushTipsRewardRsp>::~shared_ptr((std::shared_ptr<proto::GetPushTipsRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetPushTipsRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GetPushTipsRewardReq> *const)(v2 + 32));
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

// Line 74: range 00000000168BA7DE-00000000168BAAFA
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::SignInInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SignInInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SignInInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SignInInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SignInInfoReq const>((const std::shared_ptr<const proto::SignInInfoReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      74);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SignInInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SignInInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SignInInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SignInInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SignInInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SignInInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SignInInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SignInInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onSignInInfoReq(this, v8, rsp_0);
    proto::SignInInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SignInInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SignInInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SignInInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SignInInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SignInInfoRsp>::~shared_ptr((std::shared_ptr<proto::SignInInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SignInInfoReq const>::~shared_ptr((std::shared_ptr<const proto::SignInInfoReq> *const)(v2 + 32));
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

// Line 75: range 00000000168BAAFC-00000000168BAE18
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetSignInRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetSignInRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetSignInRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetSignInRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetSignInRewardReq const>(
         (const std::shared_ptr<const proto::GetSignInRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      75);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetSignInRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSignInRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetSignInRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetSignInRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetSignInRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetSignInRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetSignInRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSignInRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetSignInRewardReq(this, v8, rsp_0);
    proto::GetSignInRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetSignInRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetSignInRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetSignInRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetSignInRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetSignInRewardRsp>::~shared_ptr((std::shared_ptr<proto::GetSignInRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetSignInRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GetSignInRewardReq> *const)(v2 + 32));
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

// Line 76: range 00000000168BAE1A-00000000168BB136
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::BonusActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BonusActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BonusActivityInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:76 64 16 10 rsp_ptr:76";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BonusActivityInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BonusActivityInfoReq const>(
         (const std::shared_ptr<const proto::BonusActivityInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      76);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BonusActivityInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BonusActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BonusActivityInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BonusActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BonusActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BonusActivityInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BonusActivityInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BonusActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onBonusActivityInfoReq(this, v8, rsp_0);
    proto::BonusActivityInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BonusActivityInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BonusActivityInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BonusActivityInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BonusActivityInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BonusActivityInfoRsp>::~shared_ptr((std::shared_ptr<proto::BonusActivityInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BonusActivityInfoReq const>::~shared_ptr((std::shared_ptr<const proto::BonusActivityInfoReq> *const)(v2 + 32));
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

// Line 77: range 00000000168BB138-00000000168BB454
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetBonusActivityRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetBonusActivityRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetBonusActivityRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:77 64 16 10 rsp_ptr:77";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetBonusActivityRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetBonusActivityRewardReq const>(
         (const std::shared_ptr<const proto::GetBonusActivityRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      77);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetBonusActivityRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBonusActivityRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetBonusActivityRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetBonusActivityRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetBonusActivityRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetBonusActivityRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetBonusActivityRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBonusActivityRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetBonusActivityRewardReq(this, v8, rsp_0);
    proto::GetBonusActivityRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetBonusActivityRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetBonusActivityRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetBonusActivityRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetBonusActivityRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetBonusActivityRewardRsp>::~shared_ptr((std::shared_ptr<proto::GetBonusActivityRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetBonusActivityRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GetBonusActivityRewardReq> *const)(v2 + 32));
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

// Line 78: range 00000000168BB456-00000000168BB772
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerForceExitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerForceExitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerForceExitRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerForceExitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerForceExitReq const>(
         (const std::shared_ptr<const proto::PlayerForceExitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      78);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerForceExitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerForceExitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerForceExitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerForceExitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerForceExitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerForceExitRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerForceExitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerForceExitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onPlayerForceExitReq(this, v8, rsp_0);
    proto::PlayerForceExitRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerForceExitRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerForceExitRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerForceExitRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerForceExitRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerForceExitRsp>::~shared_ptr((std::shared_ptr<proto::PlayerForceExitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerForceExitReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerForceExitReq> *const)(v2 + 32));
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

// Line 79: range 00000000168BB774-00000000168BB956
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientLockGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientLockGameTimeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientLockGameTimeNotify const>(
         (const std::shared_ptr<const proto::ClientLockGameTimeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
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
    v7 = std::__shared_ptr_access<proto::ClientLockGameTimeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientLockGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = PlayerHandler::onClientLockGameTimeNotify(this, v7);
  }
  std::shared_ptr<proto::ClientLockGameTimeNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientLockGameTimeNotify> *const)(v2 + 32));
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

// Line 80: range 00000000168BB958-00000000168BBC74
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetNextResourceInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetNextResourceInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetNextResourceInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetNextResourceInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetNextResourceInfoReq const>(
         (const std::shared_ptr<const proto::GetNextResourceInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      80);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetNextResourceInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetNextResourceInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetNextResourceInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetNextResourceInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetNextResourceInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetNextResourceInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetNextResourceInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetNextResourceInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetNextResourceInfoReq(this, v8, rsp_0);
    proto::GetNextResourceInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetNextResourceInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetNextResourceInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetNextResourceInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetNextResourceInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetNextResourceInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetNextResourceInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetNextResourceInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetNextResourceInfoReq> *const)(v2 + 32));
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

// Line 81: range 00000000168BBC76-00000000168BBF92
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::AdjustWorldLevelReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AdjustWorldLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AdjustWorldLevelRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:81 64 16 10 rsp_ptr:81";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AdjustWorldLevelReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AdjustWorldLevelReq const>(
         (const std::shared_ptr<const proto::AdjustWorldLevelReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      81);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AdjustWorldLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AdjustWorldLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AdjustWorldLevelRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AdjustWorldLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AdjustWorldLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AdjustWorldLevelRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AdjustWorldLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AdjustWorldLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onAdjustWorldLevelReq(this, v8, rsp_0);
    proto::AdjustWorldLevelRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AdjustWorldLevelRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AdjustWorldLevelRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AdjustWorldLevelRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AdjustWorldLevelRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AdjustWorldLevelRsp>::~shared_ptr((std::shared_ptr<proto::AdjustWorldLevelRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AdjustWorldLevelReq const>::~shared_ptr((std::shared_ptr<const proto::AdjustWorldLevelReq> *const)(v2 + 32));
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

// Line 82: range 00000000168BBF94-00000000168BC2B0
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAllH5ActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAllH5ActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAllH5ActivityInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:82 64 16 10 rsp_ptr:82";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllH5ActivityInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllH5ActivityInfoReq const>(
         (const std::shared_ptr<const proto::GetAllH5ActivityInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      82);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAllH5ActivityInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllH5ActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAllH5ActivityInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAllH5ActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAllH5ActivityInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAllH5ActivityInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAllH5ActivityInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllH5ActivityInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetAllH5ActivityInfoReq(this, v8, rsp_0);
    proto::GetAllH5ActivityInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAllH5ActivityInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAllH5ActivityInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAllH5ActivityInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAllH5ActivityInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAllH5ActivityInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetAllH5ActivityInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAllH5ActivityInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetAllH5ActivityInfoReq> *const)(v2 + 32));
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

// Line 83: range 00000000168BC2B2-00000000168BC5CE
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::SetH5ActivityRedDotTimestampReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetH5ActivityRedDotTimestampRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetH5ActivityRedDotTimestampReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetH5ActivityRedDotTimestampReq const>(
         (const std::shared_ptr<const proto::SetH5ActivityRedDotTimestampReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      83);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetH5ActivityRedDotTimestampReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetH5ActivityRedDotTimestampReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetH5ActivityRedDotTimestampRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetH5ActivityRedDotTimestampRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetH5ActivityRedDotTimestampRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetH5ActivityRedDotTimestampRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetH5ActivityRedDotTimestampReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetH5ActivityRedDotTimestampReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onSetH5ActivityRedDotTimestampReq(this, v8, rsp_0);
    proto::SetH5ActivityRedDotTimestampRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetH5ActivityRedDotTimestampRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp>::~shared_ptr((std::shared_ptr<proto::SetH5ActivityRedDotTimestampRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetH5ActivityRedDotTimestampReq const>::~shared_ptr((std::shared_ptr<const proto::SetH5ActivityRedDotTimestampReq> *const)(v2 + 32));
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

// Line 84: range 00000000168BC5D0-00000000168BC8EC
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::DailyTaskFilterCityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DailyTaskFilterCityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DailyTaskFilterCityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:84 64 16 10 rsp_ptr:84";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DailyTaskFilterCityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DailyTaskFilterCityReq const>(
         (const std::shared_ptr<const proto::DailyTaskFilterCityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      84);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DailyTaskFilterCityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DailyTaskFilterCityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DailyTaskFilterCityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DailyTaskFilterCityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DailyTaskFilterCityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DailyTaskFilterCityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DailyTaskFilterCityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DailyTaskFilterCityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onDailyTaskFilterCityReq(this, v8, rsp_0);
    proto::DailyTaskFilterCityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DailyTaskFilterCityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DailyTaskFilterCityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DailyTaskFilterCityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DailyTaskFilterCityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DailyTaskFilterCityRsp>::~shared_ptr((std::shared_ptr<proto::DailyTaskFilterCityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DailyTaskFilterCityReq const>::~shared_ptr((std::shared_ptr<const proto::DailyTaskFilterCityReq> *const)(v2 + 32));
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

// Line 85: range 00000000168BC8EE-00000000168BCC0A
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::GetGameplayRecommendationReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetGameplayRecommendationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetGameplayRecommendationRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:85 64 16 10 rsp_ptr:85";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetGameplayRecommendationReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetGameplayRecommendationReq const>(
         (const std::shared_ptr<const proto::GetGameplayRecommendationReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      85);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetGameplayRecommendationReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetGameplayRecommendationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetGameplayRecommendationRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetGameplayRecommendationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetGameplayRecommendationRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetGameplayRecommendationRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetGameplayRecommendationReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetGameplayRecommendationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onGetGameplayRecommendationReq(this, v8, rsp_0);
    proto::GetGameplayRecommendationRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetGameplayRecommendationRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetGameplayRecommendationRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetGameplayRecommendationRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetGameplayRecommendationRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetGameplayRecommendationRsp>::~shared_ptr((std::shared_ptr<proto::GetGameplayRecommendationRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetGameplayRecommendationReq const>::~shared_ptr((std::shared_ptr<const proto::GetGameplayRecommendationReq> *const)(v2 + 32));
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

// Line 86: range 00000000168BCC0C-00000000168BCF28
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeBackGivingItemReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeBackGivingItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeBackGivingItemRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeBackGivingItemReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeBackGivingItemReq const>(
         (const std::shared_ptr<const proto::TakeBackGivingItemReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      86);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeBackGivingItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBackGivingItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeBackGivingItemRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeBackGivingItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeBackGivingItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeBackGivingItemRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeBackGivingItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBackGivingItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onTakeBackGivingItemReq(this, v8, rsp_0);
    proto::TakeBackGivingItemRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeBackGivingItemRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeBackGivingItemRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeBackGivingItemRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeBackGivingItemRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeBackGivingItemRsp>::~shared_ptr((std::shared_ptr<proto::TakeBackGivingItemRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeBackGivingItemReq const>::~shared_ptr((std::shared_ptr<const proto::TakeBackGivingItemReq> *const)(v2 + 32));
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

// Line 87: range 00000000168BCF2A-00000000168BD246
int __cdecl PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}::operator()(
        const PlayerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerHandler *this; // r14
  std::__shared_ptr_access<const proto::ReadNicknameAuditReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ReadNicknameAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ReadNicknameAuditRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:87 64 16 10 rsp_ptr:87";
  *(_QWORD *)(v2 + 16) = PlayerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReadNicknameAuditReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReadNicknameAuditReq const>(
         (const std::shared_ptr<const proto::ReadNicknameAuditReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "operator()",
      87);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ReadNicknameAuditReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadNicknameAuditReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReadNicknameAuditRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReadNicknameAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReadNicknameAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReadNicknameAuditRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ReadNicknameAuditReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadNicknameAuditReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = PlayerHandler::onReadNicknameAuditReq(this, v8, rsp_0);
    proto::ReadNicknameAuditRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReadNicknameAuditRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReadNicknameAuditRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ReadNicknameAuditRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ReadNicknameAuditRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ReadNicknameAuditRsp>::~shared_ptr((std::shared_ptr<proto::ReadNicknameAuditRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReadNicknameAuditReq const>::~shared_ptr((std::shared_ptr<const proto::ReadNicknameAuditReq> *const)(v2 + 32));
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

// Line 93: range 00000000168BFF9E-00000000168C09E8
int32_t __cdecl PlayerHandler::onUnionCmdNotify(PlayerHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  GameserverService *v7; // rax
  GameThreadLocal *GameThreadLocal; // rax
  std::__shared_ptr_access<const proto::UnionCmdNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<const proto::UnionCmdNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  const char *v13; // rax
  uint32_t Uid; // r14d
  __int64 v15; // rax
  const char *v16; // r15
  const char *v17; // r14
  uint32_t v18; // eax
  uint32_t v19; // r14d
  const char *v20; // rax
  uint32_t v21; // eax
  GameserverService *v22; // rax
  GameThreadLocal *v23; // rax
  GameserverService *v24; // rax
  GameThreadLocal *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t result; // eax
  uint32_t v30; // [rsp+Ch] [rbp-2D4h]
  std::allocator<char> v31; // [rsp+22h] [rbp-2BEh] BYREF
  std::allocator<char> __a; // [rsp+23h] [rbp-2BDh] BYREF
  int val; // [rsp+24h] [rbp-2BCh] BYREF
  uint32_t count; // [rsp+28h] [rbp-2B8h]
  int32_t retcode; // [rsp+2Ch] [rbp-2B4h]
  uint32_t last_time; // [rsp+30h] [rbp-2B0h]
  uint32_t cmd_id; // [rsp+34h] [rbp-2ACh]
  google::protobuf::RepeatedPtrField<proto::UnionCmd>::const_iterator __for_begin; // [rsp+38h] [rbp-2A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::UnionCmd>::const_iterator __for_end; // [rsp+40h] [rbp-2A0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::UnionCmd> *__for_range; // [rsp+48h] [rbp-298h]
  const proto::UnionCmd *union_cmd; // [rsp+50h] [rbp-290h]
  const std::string *bytes; // [rsp+58h] [rbp-288h]
  const std::string *cmd_name; // [rsp+60h] [rbp-280h]
  const std::string *retcode_name; // [rsp+68h] [rbp-278h]
  std::string title; // [rsp+70h] [rbp-270h] BYREF
  common::milog::MiLogStream v46; // [rsp+90h] [rbp-250h] BYREF
  char v47[560]; // [rsp+B0h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 cnt:102 48 16 13 notify_ptr:94 80 16 9 timer:103 112 32 8 func:120 176 257 10 holder:122";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onUnionCmdNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862733] = -218038272;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnionCmdNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::UnionCmdNotify const>(
         (const std::shared_ptr<const proto::UnionCmdNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onUnionCmdNotify",
      97);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v46,
           (const char (*)[29])"notify_ptr is null, player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v6 = -1;
  }
  else
  {
    retcode = -1;
    last_time = 0;
    *(_DWORD *)(v2 + 32) = 0;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 80));
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = GameserverService::getGameThreadLocal(v7);
    PlayerSendPacketController::setIsNeedDelayFlush(&GameThreadLocal->player_send_packet_controller, 1);
    count = 0;
    v9 = std::__shared_ptr_access<proto::UnionCmdNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::UnionCmdNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    __for_range = proto::UnionCmdNotify::cmd_list(v9);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::UnionCmd>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::UnionCmd>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::UnionCmd const>::operator!=(&__for_begin, &__for_end) )
    {
      union_cmd = google::protobuf::internal::RepeatedPtrIterator<proto::UnionCmd const>::operator*(&__for_begin);
      if ( count > 0x32 )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/player_handler.cpp",
          "onUnionCmdNotify",
          110);
        v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v46,
                (const char (*)[26])"Union cmd too long, size:");
        v11 = std::__shared_ptr_access<proto::UnionCmdNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::UnionCmdNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        val = proto::UnionCmdNotify::cmd_list_size(v11);
        v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v46);
        break;
      }
      cmd_id = proto::UnionCmd::message_id(union_cmd);
      PlayerHandler::checkUnionFrequent(this, cmd_id, count++);
      bytes = proto::UnionCmd::body[abi:cxx11](union_cmd);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::findBytesProcessFunc[abi:cxx11]((BytesFunc *)(v2 + 112), this->player_, cmd_id);
      cmd_name = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
      v13 = (const char *)std::string::c_str(cmd_name);
      common::milog::MilogContextHolder::MilogContextHolder(
        (common::milog::MilogContextHolder *const)(v2 + 176),
        "UnionCmd, cmd:%s",
        v13);
      if ( !std::function<int ()(std::string const&)>::operator bool((const std::function<int(const std::string&)> *const)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_handler.cpp",
          "onUnionCmdNotify",
          125);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v15 = std::string::c_str(cmd_name);
        common::milog::MiLogStream::operator()(&v46, off_25E1BD00, cmd_id, v15, Uid);
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      else
      {
        last_time = CoroutineHelper::time();
        retcode = std::function<int ()(std::string const&)>::operator()(
                    (const std::function<int(const std::string&)> *const)(v2 + 112),
                    bytes);
        retcode_name = ProtoUtils::getRetcodeName[abi:cxx11](retcode);
        ++*(_DWORD *)(v2 + 32);
        v30 = CoroutineHelper::time() - last_time;
        v16 = (const char *)std::string::c_str(retcode_name);
        v17 = (const char *)std::string::c_str(cmd_name);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = Player::getUid(this->player_);
        common::milog::MiLog::writeLog(
          &common::milog::MiLogDefault::default_log_obj_,
          0xBu,
          "|%s|%u|%u|%s|%d|%s|%d",
          "UnionSubCmd",
          v18,
          0LL,
          v17,
          (unsigned int)retcode,
          v16,
          v30);
        v19 = CoroutineHelper::time() - last_time;
        std::allocator<char>::allocator(&__a);
        v20 = (const char *)std::string::c_str(cmd_name);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v46, v20, &__a);
        std::allocator<char>::allocator(&v31);
        std::string::basic_string<std::allocator<char>>(&title, "UnionSubCmd", &v31);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v21 = Player::getUid(this->player_);
        CmdReport::addCmdRecord(v21, &title, (const std::string *)&v46, v19, 1u);
        std::string::~string(&title);
        std::allocator<char>::~allocator(&v31);
        std::string::~string(&v46);
        std::allocator<char>::~allocator(&__a);
      }
      common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 176));
      std::function<int ()(std::string const&)>::~function((std::function<int(const std::string&)> *const)(v2 + 112));
      google::protobuf::internal::RepeatedPtrIterator<proto::UnionCmd const>::operator++(&__for_begin);
    }
    v22 = ServiceBox::findService<GameserverService>();
    v23 = GameserverService::getGameThreadLocal(v22);
    PlayerSendPacketController::setIsNeedDelayFlush(&v23->player_send_packet_controller, 0);
    v24 = ServiceBox::findService<GameserverService>();
    v25 = GameserverService::getGameThreadLocal(v24);
    PlayerSendPacketController::flushAll(&v25->player_send_packet_controller);
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/player_handler.cpp",
      "onUnionCmdNotify",
      138);
    v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v46,
            (const char (*)[21])"[UNION_CMD] all cnt=");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 32));
    v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])" time_cost=");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 80));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v6 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 80));
  }
  std::shared_ptr<proto::UnionCmdNotify const>::~shared_ptr((std::shared_ptr<const proto::UnionCmdNotify> *const)(v2 + 48));
  result = v6;
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 144: range 00000000168C09EA-00000000168C19CA
__int64 __fastcall PlayerHandler::checkUnionFrequent(PlayerHandler *const this, uint32_t cmd_id, uint32_t sub_count)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v9; // rax
  std::pair<unsigned int const,unsigned int> *v10; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  Player *player; // r14
  uint32_t v16; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 *v20; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  uint32_t union_notify_freq; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  bool v36; // bl
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rdx
  uint32_t v39; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  bool v41; // bl
  bool is_kick; // [rsp+13h] [rbp-11Dh]
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-11Ch] BYREF
  uint32_t max_union_freq; // [rsp+18h] [rbp-118h]
  uint32_t now; // [rsp+1Ch] [rbp-114h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *cmd_ida; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-E8h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+50h] [rbp-E0h] BYREF
  std::string server_log; // [rsp+60h] [rbp-D0h] BYREF
  char v55[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 cmd_id:143 64 16 7 oss:152 96 16 11 log_ptr:165";
  *(_QWORD *)(v3 + 16) = PlayerHandler::checkUnionFrequent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = cmd_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v53);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
  if ( *(_BYTE *)(((unsigned __int64)&v6->union_packet_max_freq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->union_packet_max_freq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_union_freq = v6->union_packet_max_freq;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now != this->last_union_sec_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_cheat_in_last_period_);
    }
    if ( this->is_cheat_in_last_period_ )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
             "union packet exceed freq limit, freq:");
      if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->union_cmd_freq_);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "\n");
      __for_range = &this->union_cmd_count_map_;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->union_cmd_count_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->union_cmd_count_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v9, 8LL);
        }
        __in = *v10;
        cmd_ida = std::get<0ul,unsigned int const,unsigned int>(&__in);
        count = std::get<1ul,unsigned int const,unsigned int>(&__in);
        v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
                "cmd_id:");
        if ( *(_BYTE *)(((unsigned __int64)cmd_ida >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cmd_ida & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cmd_ida >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, *cmd_ida);
        v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, " count:");
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, *count);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "\n");
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        &server_log,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, &server_log);
      std::string::~string(&server_log);
      if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v16 = ++this->union_packet_cheat_count_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v53);
      v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
      if ( *(_BYTE *)(((unsigned __int64)&v17->union_packet_kick_cheat_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v17 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->union_packet_kick_cheat_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      is_kick = v16 >= v17->union_packet_kick_cheat_count;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
      common::tools::perf::make_shared<proto_log::AntiCheatBodyUnionExceedFreq>();
      if ( std::operator!=<proto_log::AntiCheatBodyUnionExceedFreq>(
             0LL,
             (const std::shared_ptr<proto_log::AntiCheatBodyUnionExceedFreq> *)(v3 + 96)) )
      {
        v18 = std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyUnionExceedFreq::set_union_notify_freq(v18, this->union_notify_freq_);
        v19 = std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        __k = 319;
        v20 = std::map<unsigned int,unsigned int>::operator[](&this->union_cmd_count_map_, &__k);
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyUnionExceedFreq::set_combat_notify_freq(v19, *v20);
        v21 = std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyUnionExceedFreq::set_sub_total_union_freq(v21, this->union_cmd_freq_);
        v22 = std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyUnionExceedFreq::set_cheat_count(v22, this->union_packet_cheat_count_);
        v23 = std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUnionExceedFreq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        proto_log::AntiCheatBodyUnionExceedFreq::set_is_kick(v23, is_kick);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v24 = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyUnionExceedFreq,void>(
          &v53,
          (const std::shared_ptr<proto_log::AntiCheatBodyUnionExceedFreq> *)(v3 + 96));
        Player::printAntiCheatLog(v24, ANTI_CHEAT_ACTION_UNION_EXCEED_FREQ, &v53);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
      }
      if ( is_kick )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::disconnectSession(this->player_, 0x13u);
        if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->union_packet_cheat_count_);
        }
        this->union_packet_cheat_count_ = 0;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&server_log,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_handler.cpp",
        "checkUnionFrequent",
        182);
      v25 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)&server_log,
              (const char (*)[47])"checkUnionFrequent exceed limit, union notify:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->union_notify_freq_);
      v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])" sub union freq:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->union_cmd_freq_);
      v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" combat freq:");
      __k = 319;
      v30 = std::map<unsigned int,unsigned int>::operator[](&this->union_cmd_count_map_, &__k);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, v30);
      v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v32, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&server_log);
      std::shared_ptr<proto_log::AntiCheatBodyUnionExceedFreq>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyUnionExceedFreq> *const)(v3 + 96));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->union_packet_cheat_count_);
      }
      this->union_packet_cheat_count_ = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->union_cmd_freq_);
    }
    this->union_cmd_freq_ = 0;
    std::map<unsigned int,unsigned int>::clear(&this->union_cmd_count_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->union_notify_freq_);
    }
    this->union_notify_freq_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_cheat_in_last_period_);
    }
    this->is_cheat_in_last_period_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_union_sec_);
    }
    this->last_union_sec_ = now;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->union_cmd_freq_;
  v33 = std::map<unsigned int,unsigned int>::operator[](
          &this->union_cmd_count_map_,
          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++*v33;
  if ( !sub_count )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->union_notify_freq_;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  union_notify_freq = this->union_notify_freq_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v53);
  v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
  if ( *(_BYTE *)(((unsigned __int64)&v35->union_notify_max_freq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->union_notify_max_freq >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v36 = union_notify_freq > v35->union_notify_max_freq;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
  if ( v36 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_cheat_in_last_period_);
    }
    this->is_cheat_in_last_period_ = 1;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __k = 319;
    v38 = std::map<unsigned int,unsigned int>::operator[](&this->union_cmd_count_map_, &__k);
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v39 = *v38;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v53);
    v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
    if ( *(_BYTE *)(((unsigned __int64)&v40->combat_notify_max_freq >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v40->combat_notify_max_freq >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v41 = v39 > v40->combat_notify_max_freq;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( v41 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_cheat_in_last_period_);
      }
      this->is_cheat_in_last_period_ = 1;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( max_union_freq >= this->union_cmd_freq_ )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_cheat_in_last_period_);
        }
        this->is_cheat_in_last_period_ = 1;
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v55 == (char *)v3 )
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

// Line 222: range 00000000168C19CC-00000000168C2212
int32_t __cdecl PlayerHandler::onChangeGameTimeReq(
        PlayerHandler *const this,
        const proto::ChangeGameTimeReq *req,
        proto::ChangeGameTimeRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r13
  int32_t v8; // r13d
  uint32_t v9; // r13d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r13
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rcx
  PlayerHomeComp *HomeComp; // rax
  Home *v18; // rax
  HomeBasicComp *BasicComp; // r15
  bool is_force_set; // r13
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // rcx
  PlayerBasicComp *v23; // rax
  PlayerBasicComp *v24; // r13
  uint32_t v25; // r15d
  uint32_t v26; // eax
  PlayerBasicComp *v27; // r13
  uint32_t v28; // r15d
  uint32_t v29; // eax
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint32 v31; // edx
  int32_t result; // eax
  google::protobuf::uint32 extra_days; // [rsp+14h] [rbp-CCh]
  unsigned int val; // [rsp+3Ch] [rbp-A4h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-A0h] BYREF
  int32_t ret_1; // [rsp+44h] [rbp-9Ch]
  int32_t ret_0; // [rsp+48h] [rbp-98h]
  int32_t ret; // [rsp+4Ch] [rbp-94h]
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-90h] BYREF
  char v41[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 home_ptr:232";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onChangeGameTimeReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v7 = FeatureSwitchMgr::isChangeGameTimeClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( v7 )
  {
    v8 = 142;
    goto LABEL_42;
  }
  v9 = proto::ChangeGameTimeReq::game_time(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v11 = v9 > ConstValueExcelConfigMgr::getGameDaySeconds(&v10->design_config.txt_config_mgr.const_value_config_mgr)
     || proto::ChangeGameTimeReq::extra_days(req) > 2;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( !v11 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getHomeComp(this->player_);
    PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    if ( PlayerHomeComp::isInMyHome(HomeComp) && std::operator!=<Home>(0LL, (const std::shared_ptr<Home> *)(v3 + 32)) )
    {
      v18 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      BasicComp = Home::getBasicComp(v18);
      is_force_set = proto::ChangeGameTimeReq::is_force_set(req);
      extra_days = proto::ChangeGameTimeReq::extra_days(req);
      v21 = proto::ChangeGameTimeReq::game_time(req);
      ret = HomeBasicComp::setGameTime(BasicComp, v21, extra_days, is_force_set);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_handler.cpp",
          "onChangeGameTimeReq",
          238);
        v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v40,
                (const char (*)[27])"[HOME] setGameTime fails. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v22, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v8 = ret;
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = Player::getBasicComp(this->player_);
    if ( !PlayerBasicComp::checkAndUpdateSetGameTimeCd(v23) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_handler.cpp",
        "onChangeGameTimeReq",
        247);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v40,
        (const char (*)[33])"checkAndUpdateSetGameTimeCd fail");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v8 = -1;
LABEL_41:
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
      goto LABEL_42;
    }
    if ( proto::ChangeGameTimeReq::is_force_set(req) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = Player::getBasicComp(this->player_);
      v25 = proto::ChangeGameTimeReq::extra_days(req);
      v26 = proto::ChangeGameTimeReq::game_time(req);
      ret_0 = PlayerBasicComp::forceSetGameTime(v24, v26, v25, 1);
      if ( ret_0 )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_handler.cpp",
          "onChangeGameTimeReq",
          255);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v40, (const char (*)[18])"setGameTime fails");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v8 = ret_0;
        goto LABEL_41;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v27 = Player::getBasicComp(this->player_);
      v28 = proto::ChangeGameTimeReq::extra_days(req);
      v29 = proto::ChangeGameTimeReq::game_time(req);
      ret_1 = PlayerBasicComp::setGameTime(v27, v29, v28, 1);
      if ( ret_1 )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_handler.cpp",
          "onChangeGameTimeReq",
          264);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v40, (const char (*)[18])"setGameTime fails");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v8 = ret_1;
        goto LABEL_41;
      }
    }
LABEL_40:
    v30 = proto::ChangeGameTimeReq::game_time(req);
    proto::ChangeGameTimeRsp::set_cur_game_time(rsp_0, v30);
    v31 = proto::ChangeGameTimeReq::extra_days(req);
    proto::ChangeGameTimeRsp::set_extra_days(rsp_0, v31);
    v8 = 0;
    goto LABEL_41;
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/player_handler.cpp",
    "onChangeGameTimeReq",
    229);
  v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v40, (const char (*)[35])off_25E1C180);
  val = proto::ChangeGameTimeReq::game_time(req);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
  v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", extra_days:");
  v36 = proto::ChangeGameTimeReq::extra_days(req);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v36);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v15, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v40);
  v8 = -1;
LABEL_42:
  result = v8;
  if ( v41 == (char *)v3 )
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

// Line 276: range 00000000168C2214-00000000168C2555
int32_t __cdecl PlayerHandler::onClientTriggerEventNotify(
        PlayerHandler *const this,
        const proto::ClientTriggerEventNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int Uid; // [rsp+18h] [rbp-98h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:277";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onClientTriggerEventNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onClientTriggerEventNotify",
      280);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v13,
           (const char (*)[24])"getCurScene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else if ( proto::ClientTriggerEventNotify::event_type(notify) == EVENT_TRIGGER_ENTER_FORCE )
  {
    v6 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onClientTriggerEventNotify",
      288);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"unknown event_type, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" type:");
    val = proto::ClientTriggerEventNotify::event_type(notify);
    common::milog::MiLogStream::operator<<<proto::EventTriggerType,(proto::EventTriggerType*)0>(
      v9,
      (const proto::EventTriggerType *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 296: range 00000000168C2556-00000000168C2890
int32_t __cdecl PlayerHandler::onSetPlayerPropReq(
        PlayerHandler *const this,
        const proto::SetPlayerPropReq *req,
        proto::SetPlayerPropRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rax
  google::protobuf::uint32 v5; // eax
  PlayerAvatarComp *AvatarComp; // rbx
  google::protobuf::int64 v7; // rax
  Player *player; // rbx
  int64_t v9; // r12
  signed int v10; // eax
  PlayerAvatarComp *v11; // rbx
  uint32_t v12; // eax
  PlayerMatchComp *MatchComp; // rax
  PlayerMpComp *MpComp; // rbx
  proto::MpSettingType v15; // eax
  int i; // [rsp+28h] [rbp-28h]
  int i_0; // [rsp+2Ch] [rbp-24h]
  const proto::PropValue *prop_value_0; // [rsp+30h] [rbp-20h]
  const proto::PropValue *prop_value; // [rsp+38h] [rbp-18h]

  for ( i = 0; i < proto::SetPlayerPropReq::prop_list_size(req); ++i )
  {
    prop_value = proto::SetPlayerPropReq::prop_list(req, i);
    if ( proto::PropValue::type(prop_value) - 10004 <= 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        return 512;
    }
  }
  for ( i_0 = 0; i_0 < proto::SetPlayerPropReq::prop_list_size(req); ++i_0 )
  {
    prop_value_0 = proto::SetPlayerPropReq::prop_list(req, i_0);
    v5 = proto::PropValue::type(prop_value_0);
    if ( v5 == 10017 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MatchComp = Player::getMatchComp(this->player_);
      if ( PlayerMatchComp::isInMatch(MatchComp) )
        return 1562;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      v15 = (unsigned int)proto::PropValue::ival(prop_value_0);
      PlayerMpComp::setMpSettingType(MpComp, v15, 1);
    }
    else
    {
      if ( v5 > 0x2721 )
        continue;
      if ( v5 == 10004 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        v7 = proto::PropValue::ival(prop_value_0);
        PlayerAvatarComp::setIsSpringAutoUse(AvatarComp, v7 != 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_20;
      }
      if ( v5 == 10005 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getAvatarComp(this->player_);
        v12 = proto::PropValue::ival(prop_value_0);
        PlayerAvatarComp::setSpringAutoUsePercent(v11, v12);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_20:
        player = this->player_;
        v9 = proto::PropValue::ival(prop_value_0);
        v10 = proto::PropValue::type(prop_value_0);
        Player::notifyPlayerIntProp(player, (data::PropType)v10, v9);
        continue;
      }
    }
  }
  return 0;
};

// Line 344: range 00000000168C2BB6-00000000168C38F6
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHandler::onSetPlayerBornDataReq(
        PlayerHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  PlayerBasicComp *BasicComp; // r14
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool is_word_filter_use_remote; // r14
  Player *v13; // r14
  const std::string *v14; // rax
  GameserverService *v15; // r14
  __suseconds_t v16; // rdx
  common::minet::Packet *v17; // rax
  common::minet::Packet *v18; // rax
  common::minet::PacketPtr v19; // rdi
  common::minet::Packet *v20; // rax
  common::minet::PacketPtr v21; // rdi
  common::minet::Packet *v22; // rax
  common::minet::Packet *v23; // rax
  common::milog::MiLogStream *v25; // r14
  common::minet::Packet *v26; // rax
  PlayerBasicComp *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUncheckedNickname,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  const std::string *v29; // rax
  Player *v30; // r14
  GameserverService *v31; // r14
  common::milog::MiLogStream *v32; // rcx
  int32_t result; // eax
  std::string p_packet_ptra; // [rsp+0h] [rbp-290h] OVERLAPPED BYREF
  const proto::SetPlayerBornDataReq *req; // [rsp+20h] [rbp-270h]
  proto::SetPlayerBornDataRsp *rsp_0; // [rsp+28h] [rbp-268h]
  std::shared_ptr<common::minet::Packet> v37; // [rsp+30h] [rbp-260h] BYREF
  PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v38; // [rsp+40h] [rbp-250h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-230h] BYREF
  char v40[528]; // [rsp+80h] [rbp-210h] BYREF

  p_packet_ptra._M_string_length = (std::string::size_type)this;
  p_packet_ptra._M_dataplus._M_p = (std::string::pointer)p_packet_ptr;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 holder:380 48 16 11 req_ptr:345 80 16 11 rsp_ptr:345 112 16 11 log_ptr:381 144 16 9 ti"
                        "mer:366 176 240 12 http_req:366";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onSetPlayerBornDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
  common::minet::Packet::getConstProto<proto::SetPlayerBornDataReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::SetPlayerBornDataReq const>(
         (const std::shared_ptr<const proto::SetPlayerBornDataReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onSetPlayerBornDataReq",
      345);
    common::milog::MiLogStream::operator()(&v39, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v5 = -1;
    goto LABEL_50;
  }
  req = std::__shared_ptr_access<proto::SetPlayerBornDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerBornDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::SetPlayerBornDataRsp>();
  rsp_0 = std::__shared_ptr_access<proto::SetPlayerBornDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetPlayerBornDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::SetPlayerBornDataRsp::set_retcode(rsp_0, -1);
  if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
  if ( PlayerAvatarComp::getAvatarCount(AvatarComp) )
  {
    proto::SetPlayerBornDataRsp::set_retcode(rsp_0, 116);
  }
  else
  {
    if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
    v8 = proto::SetPlayerBornDataReq::nick_name[abi:cxx11](req);
    HIDWORD(p_packet_ptra._anon_0._M_allocated_capacity) = PlayerBasicComp::checkNickName(BasicComp, v8);
    if ( HIDWORD(p_packet_ptra._anon_0._M_allocated_capacity) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_handler.cpp",
        "onSetPlayerBornDataReq",
        359);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v39,
             (const char (*)[38])"setNickName failed, word illegal uid:");
      if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)p_packet_ptra._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(p_packet_ptra._M_string_length
                                                                                            + 8));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)&p_packet_ptra._anon_0);
      common::milog::MiLogStream::~MiLogStream(&v39);
      proto::SetPlayerBornDataRsp::set_retcode(rsp_0, SHIDWORD(p_packet_ptra._anon_0._M_allocated_capacity));
    }
    else
    {
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
      if ( !common::minet::Packet::getExt(v10, 2u) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        if ( *(char *)(((unsigned __int64)&v11->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v11 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->is_word_filter_use_remote);
        is_word_filter_use_remote = v11->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = *(Player **)(p_packet_ptra._M_string_length + 8);
          v14 = proto::SetPlayerBornDataReq::nick_name[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 176), v14, v13, 1u);
          *((_DWORD *)&p_packet_ptra._anon_0._M_allocated_capacity + 2) = RemoteWordFilter::getHttpTypeByCmdId(0x69u);
          v15 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v38.__packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
          v16 = *(_QWORD *)(v2 + 152);
          v38.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 144);
          v38.__timer.start_tv_.tv_usec = v16;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v39,
            &v38);
          *((_DWORD *)&p_packet_ptra._anon_0._M_allocated_capacity + 3) = GameserverService::asyncHttpRequest(
                                                                            v15,
                                                                            (const common::minet::http_client::HttpRequest *)(v2 + 176),
                                                                            5LL,
                                                                            *((uint32_t *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                                            + 2),
                                                                            (common::minet::http_client::ResponseCallBackFunc *)&v39);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v39);
          PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v38);
          if ( *((_DWORD *)&p_packet_ptra._anon_0._M_allocated_capacity + 3) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/player_handler.cpp",
              "onSetPlayerBornDataReq",
              366);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v39,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v39);
            v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
            common::minet::Packet::setExt(v17, 2u, 1u);
            v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
            common::minet::Packet::setExt(v18, 3u, 4u);
            v19._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_packet_ptra._M_dataplus._M_p;
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v37,
              (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
            v19._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v37;
            ServiceBox::pushPacketToService(v19);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v37);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 176));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
        }
        else
        {
          v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
          common::minet::Packet::setExt(v20, 2u, 1u);
          v21._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_packet_ptra._M_dataplus._M_p;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v37,
            (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
          v21._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v37;
          ServiceBox::pushPacketToService(v21);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v37);
        }
        v5 = 0;
        goto LABEL_49;
      }
      v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
      if ( common::minet::Packet::getExt(v22, 3u)
        && (v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p),
            common::minet::Packet::getExt(v23, 3u) != 4) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/player_handler.cpp",
          "onSetPlayerBornDataReq",
          374);
        v25 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v39,
                (const char (*)[44])"word filter check failed, word illegal uid:");
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)p_packet_ptra._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(p_packet_ptra._M_string_length
                                                                                              + 8));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v25,
          (const unsigned int *)&p_packet_ptra._anon_0);
        common::milog::MiLogStream::~MiLogStream(&v39);
        proto::SetPlayerBornDataRsp::set_retcode(rsp_0, 132);
      }
      else
      {
        v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
        if ( common::minet::Packet::getExt(v26, 3u) == 4 )
        {
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v27 = Player::getBasicComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, v27);
          StatLogUtils::ContextHolder::ContextHolder(
            (StatLogUtils::ContextHolder *const)(v2 + 32),
            0x3F2u,
            p_packet_ptra);
          std::string::~string(&v39);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyUncheckedNickname>();
          v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyUncheckedNickname,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUncheckedNickname,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v29 = proto::SetPlayerBornDataReq::nick_name[abi:cxx11](req);
          proto_log::PlayerLogBodyUncheckedNickname::set_nick_name(v28, v29);
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v30 = *(Player **)(p_packet_ptra._M_string_length + 8);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)&v37,
            0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUncheckedNickname,void>(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 144),
            (const std::shared_ptr<proto_log::PlayerLogBodyUncheckedNickname> *)(v2 + 112));
          Player::printStatLog(v30, (MessagePtr *)(v2 + 144), (MessagePtr *)&v37, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 144));
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v37);
          std::shared_ptr<proto_log::PlayerLogBodyUncheckedNickname>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUncheckedNickname> *const)(v2 + 112));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
        }
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(p_packet_ptra._anon_0._M_allocated_capacity) = Player::setPlayerBornData(
                                                                 *(Player *const *)(p_packet_ptra._M_string_length + 8),
                                                                 req);
        proto::SetPlayerBornDataRsp::set_retcode(rsp_0, 0);
      }
    }
  }
  v31 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    &v37,
    (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
  std::shared_ptr<proto::SetPlayerBornDataRsp>::shared_ptr(
    (std::shared_ptr<proto::SetPlayerBornDataRsp> *const)(v2 + 144),
    (const std::shared_ptr<proto::SetPlayerBornDataRsp> *)(v2 + 80));
  LOBYTE(v31) = ServiceBase::sendRsp<proto::SetPlayerBornDataRsp>(
                  v31,
                  (std::shared_ptr<proto::SetPlayerBornDataRsp> *)(v2 + 144),
                  &v37) != 0;
  std::shared_ptr<proto::SetPlayerBornDataRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerBornDataRsp> *const)(v2 + 144));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v37);
  if ( (_BYTE)v31 )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onSetPlayerBornDataReq",
      391);
    v32 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v39,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v32, *(const Player **)(p_packet_ptra._M_string_length + 8));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v5 = -1;
  }
  else
  {
    v5 = proto::SetPlayerBornDataRsp::retcode(rsp_0);
  }
LABEL_49:
  std::shared_ptr<proto::SetPlayerBornDataRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerBornDataRsp> *const)(v2 + 80));
LABEL_50:
  std::shared_ptr<proto::SetPlayerBornDataReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerBornDataReq> *const)(v2 + 48));
  result = v5;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 366: range 00000000168F27C2-00000000168F284B
void __cdecl PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 366: range 00000000168F2916-00000000168F299F
void __cdecl PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 366: range 00000000168C2892-00000000168C2B88
void __cdecl PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::SetPlayerBornDataReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:366";
  *(_QWORD *)(v4 + 16) = PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::SetPlayerBornDataReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::SetPlayerBornDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerBornDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::SetPlayerBornDataReq::mutable_nick_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::SetPlayerBornDataReq>::~shared_ptr((std::shared_ptr<proto::SetPlayerBornDataReq> *const)(v4 + 32));
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

// Line 366: range 00000000168C2B8A-00000000168C2BB4
void __cdecl PlayerHandler::onSetPlayerBornDataReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        PlayerHandler::onSetPlayerBornDataReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 398: range 00000000168C3C1C-00000000168C47F2
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHandler::onSetPlayerNameReq(PlayerHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerBasicComp *BasicComp; // r14
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v11; // rsi
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v16; // rax
  GameserverService *v17; // r14
  const std::shared_ptr<common::minet::Packet> *v18; // rsi
  __suseconds_t v19; // rdx
  common::minet::PacketPtr v20; // rdi
  common::minet::Packet *v21; // rax
  common::minet::Packet *v22; // rax
  common::minet::PacketPtr v23; // rdi
  common::minet::Packet *v24; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v25; // rsi
  common::minet::Packet *v26; // rax
  common::milog::MiLogStream *v27; // r14
  const std::string *v28; // rax
  const std::string *v29; // rax
  GameserverService *v30; // r14
  const std::shared_ptr<common::minet::Packet> *v31; // rsi
  common::milog::MiLogStream *v32; // rcx
  int32_t result; // eax
  bool is_open_audit; // [rsp+17h] [rbp-289h]
  unsigned int val; // [rsp+18h] [rbp-288h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-284h]
  uint32_t async_http_type; // [rsp+20h] [rbp-280h]
  int32_t ret_0; // [rsp+24h] [rbp-27Ch]
  const proto::SetPlayerNameReq *req; // [rsp+28h] [rbp-278h]
  proto::SetPlayerNameRsp *rsp_0; // [rsp+30h] [rbp-270h]
  PlayerBasicComp *basic_comp; // [rsp+38h] [rbp-268h]
  std::shared_ptr<common::minet::Packet> v42; // [rsp+40h] [rbp-260h] BYREF
  PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v43; // [rsp+50h] [rbp-250h] BYREF
  char v44[560]; // [rsp+70h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 11 req_ptr:399 80 16 11 rsp_ptr:399 112 16 9 timer:413 144 32 16 old_nickname:425 208 24"
                        "0 12 http_req:413";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onSetPlayerNameReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::SetPlayerNameReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::SetPlayerNameReq const>(
         (const std::shared_ptr<const proto::SetPlayerNameReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onSetPlayerNameReq",
      399);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 144), off_25E0B560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
    v6 = -1;
    goto LABEL_40;
  }
  req = std::__shared_ptr_access<proto::SetPlayerNameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::SetPlayerNameRsp>();
  rsp_0 = std::__shared_ptr_access<proto::SetPlayerNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetPlayerNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::SetPlayerNameRsp::set_retcode(rsp_0, -1);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
  is_open_audit = FeatureSwitchMgr::isNicknameAuditEnabled(&v7->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v9 = proto::SetPlayerNameReq::nick_name[abi:cxx11](req);
  ret = PlayerBasicComp::checkNickName(BasicComp, v9);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/player_handler.cpp",
      "onSetPlayerNameReq",
      406);
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)(v2 + 144),
            (const char (*)[25])"setNickName failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
    proto::SetPlayerNameRsp::set_retcode(rsp_0, ret);
  }
  else
  {
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v11);
    if ( !common::minet::Packet::getExt(v12, 2u) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v42);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
      if ( *(char *)(((unsigned __int64)&v13->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
        v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->is_word_filter_use_remote);
      is_word_filter_use_remote = v13->is_word_filter_use_remote;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
      if ( is_word_filter_use_remote )
      {
        common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v16 = proto::SetPlayerNameReq::nick_name[abi:cxx11](req);
        RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 208), v16, player, 1u);
        async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x99u);
        v17 = ServiceBox::findService<GameserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v43.__packet_ptr, v18);
        v19 = *(_QWORD *)(v2 + 120);
        v43.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 112);
        v43.__timer.start_tv_.tv_usec = v19;
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
          (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)(v2 + 144),
          &v43);
        ret_0 = GameserverService::asyncHttpRequest(
                  v17,
                  (const common::minet::http_client::HttpRequest *)(v2 + 208),
                  5LL,
                  async_http_type,
                  (common::minet::http_client::ResponseCallBackFunc *)(v2 + 144));
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)(v2 + 144));
        PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v43);
        if ( ret_0 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 144),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/player_handler.cpp",
            "onSetPlayerNameReq",
            413);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v2 + 144),
            (const char (*)[23])"asyncHttpRequest fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
          v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v20._M_refcount._M_pi);
          common::minet::Packet::setExt(v21, 2u, 1u);
          v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v20._M_refcount._M_pi);
          common::minet::Packet::setExt(v22, 3u, 4u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v42,
            (const std::shared_ptr<common::minet::Packet> *)v20._M_refcount._M_pi);
          v20._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v42;
          ServiceBox::pushPacketToService(v20);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v42);
        }
        common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 208));
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
      }
      else
      {
        v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
        common::minet::Packet::setExt(v24, 2u, 1u);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v42,
          (const std::shared_ptr<common::minet::Packet> *)v23._M_refcount._M_pi);
        v23._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v42;
        ServiceBox::pushPacketToService(v23);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v42);
      }
      v6 = 0;
      goto LABEL_39;
    }
    v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v25);
    if ( common::minet::Packet::getExt(v26, 3u) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_handler.cpp",
        "onSetPlayerNameReq",
        420);
      v27 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v2 + 144),
              (const char (*)[38])"setNickName failed, word illegal uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
      proto::SetPlayerNameRsp::set_retcode(rsp_0, 132);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      basic_comp = Player::getBasicComp(this->player_);
      v28 = PlayerBasicComp::getNickName[abi:cxx11](basic_comp);
      std::string::basic_string(v2 + 144, v28);
      ret = PlayerBasicComp::onChangeNickName(basic_comp, req);
      proto::SetPlayerNameRsp::set_retcode(rsp_0, ret);
      if ( !ret )
      {
        v29 = PlayerBasicComp::getNickName[abi:cxx11](basic_comp);
        proto::SetPlayerNameRsp::set_nick_name(rsp_0, v29);
        if ( is_open_audit )
          PlayerBasicComp::notifyNicknameAuditData(basic_comp);
        PlayerBasicComp::logOperatePlayerChangeNickName(basic_comp, (const std::string *)(v2 + 144));
      }
      std::string::~string((void *)(v2 + 144));
    }
  }
  v30 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v42, v31);
  std::shared_ptr<proto::SetPlayerNameRsp>::shared_ptr(
    (std::shared_ptr<proto::SetPlayerNameRsp> *const)(v2 + 112),
    (const std::shared_ptr<proto::SetPlayerNameRsp> *)(v2 + 80));
  LOBYTE(v30) = ServiceBase::sendRsp<proto::SetPlayerNameRsp>(
                  v30,
                  (std::shared_ptr<proto::SetPlayerNameRsp> *)(v2 + 112),
                  &v42) != 0;
  std::shared_ptr<proto::SetPlayerNameRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerNameRsp> *const)(v2 + 112));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v42);
  if ( (_BYTE)v30 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onSetPlayerNameReq",
      441);
    v32 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)(v2 + 144),
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v32, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
    v6 = -1;
  }
  else
  {
    v6 = proto::SetPlayerNameRsp::retcode(rsp_0);
  }
LABEL_39:
  std::shared_ptr<proto::SetPlayerNameRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerNameRsp> *const)(v2 + 80));
LABEL_40:
  std::shared_ptr<proto::SetPlayerNameReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerNameReq> *const)(v2 + 48));
  result = v6;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 413: range 00000000168F2A92-00000000168F2B1B
void __cdecl PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 413: range 00000000168F2BE6-00000000168F2C6F
void __cdecl PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 413: range 00000000168C38F8-00000000168C3BEE
void __cdecl PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::SetPlayerNameReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:413";
  *(_QWORD *)(v4 + 16) = PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::SetPlayerNameReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::SetPlayerNameReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::SetPlayerNameReq::mutable_nick_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::SetPlayerNameReq>::~shared_ptr((std::shared_ptr<proto::SetPlayerNameReq> *const)(v4 + 32));
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

// Line 413: range 00000000168C3BF0-00000000168C3C1A
void __cdecl PlayerHandler::onSetPlayerNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        PlayerHandler::onSetPlayerNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 448: range 00000000168C47F4-00000000168C48AB
int32_t __cdecl PlayerHandler::onSetOpenStateReq(
        PlayerHandler *const this,
        const proto::SetOpenStateReq *req,
        proto::SetOpenStateRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerBasicComp *BasicComp; // rbx
  uint32_t v6; // r12d
  uint32_t v7; // eax

  v3 = proto::SetOpenStateReq::key(req);
  proto::SetOpenStateRsp::set_key(rsp_0, v3);
  v4 = proto::SetOpenStateReq::value(req);
  proto::SetOpenStateRsp::set_value(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v6 = proto::SetOpenStateReq::value(req);
  v7 = proto::SetOpenStateReq::key(req);
  return PlayerBasicComp::setOpenStateByClient(BasicComp, v7, v6);
};

// Line 456: range 00000000168C48AC-00000000168C4918
int32_t __cdecl PlayerHandler::onPlayerCookReq(
        PlayerHandler *const this,
        const proto::PlayerCookReq *req,
        proto::PlayerCookRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onPlayerCookReq(CookComp, req, rsp_0);
  return proto::PlayerCookRsp::retcode(rsp_0);
};

// Line 463: range 00000000168C491A-00000000168C4986
int32_t __cdecl PlayerHandler::onPlayerRandomCookReq(
        PlayerHandler *const this,
        const proto::PlayerRandomCookReq *req,
        proto::PlayerRandomCookRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onPlayerRandomCookReq(CookComp, req, rsp_0);
  return proto::PlayerRandomCookRsp::retcode(rsp_0);
};

// Line 470: range 00000000168C4988-00000000168C49F4
int32_t __cdecl PlayerHandler::onPlayerCompoundMaterialReq(
        PlayerHandler *const this,
        const proto::PlayerCompoundMaterialReq *req,
        proto::PlayerCompoundMaterialRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onPlayerCompoundMaterialReq(CookComp, req, rsp_0);
  return proto::PlayerCompoundMaterialRsp::retcode(rsp_0);
};

// Line 477: range 00000000168C49F6-00000000168C4A62
int32_t __cdecl PlayerHandler::onPlayerCompoundMaterialBoostReq(
        PlayerHandler *const this,
        const proto::PlayerCompoundMaterialBoostReq *req,
        proto::PlayerCompoundMaterialBoostRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onPlayerCompoundMaterialBoostReq(CookComp, req, rsp_0);
  return proto::PlayerCompoundMaterialBoostRsp::retcode(rsp_0);
};

// Line 484: range 00000000168C4A64-00000000168C4AD0
int32_t __cdecl PlayerHandler::onGetCompoundDataReq(
        PlayerHandler *const this,
        const proto::GetCompoundDataReq *req,
        proto::GetCompoundDataRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onGetCompoundDataReq(CookComp, req, rsp_0);
  return proto::GetCompoundDataRsp::retcode(rsp_0);
};

// Line 491: range 00000000168C4AD2-00000000168C4B3E
int32_t __cdecl PlayerHandler::onTakeCompoundOutputReq(
        PlayerHandler *const this,
        const proto::TakeCompoundOutputReq *req,
        proto::TakeCompoundOutputRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  PlayerCookComp::onTakeCompoundOutputReq(CookComp, req, rsp_0);
  return proto::TakeCompoundOutputRsp::retcode(rsp_0);
};

// Line 497: range 00000000168C4B40-00000000168C4BB1
int32_t __cdecl PlayerHandler::onPlayerSetPauseReq(
        PlayerHandler *const this,
        const proto::PlayerSetPauseReq *req,
        proto::PlayerSetPauseRsp *rsp_0)
{
  PlayerBasicComp *BasicComp; // rbx
  bool is_paused; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  is_paused = proto::PlayerSetPauseReq::is_paused(req);
  PlayerBasicComp::setIsPaused(BasicComp, is_paused);
  return 0;
};

// Line 503: range 00000000168C4BB2-00000000168C4D82
int32_t __cdecl PlayerHandler::onPlayerSetLanguageReq(
        PlayerHandler *const this,
        const proto::PlayerSetLanguageReq *req,
        proto::PlayerSetLanguageRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 language_type:504";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onPlayerSetLanguageReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::PlayerSetLanguageReq::language_type(req);
  if ( !proto::LanguageType_IsValid(*(_DWORD *)(v3 + 32)) || !*(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onPlayerSetLanguageReq",
      507);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v10, (const char (*)[28])off_25E1C740);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    result = PlayerBasicComp::setLanguageType(BasicComp, *(_DWORD *)(v3 + 32));
  }
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

// Line 514: range 00000000168C4D84-00000000168C4E0F
int32_t __cdecl PlayerHandler::onTakePlayerLevelRewardReq(
        PlayerHandler *const this,
        const proto::TakePlayerLevelRewardReq *req,
        proto::TakePlayerLevelRewardRsp *rsp_0)
{
  PlayerBasicComp *BasicComp; // rbx
  uint32_t v4; // eax
  google::protobuf::uint32 v5; // edx
  int ret; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v4 = proto::TakePlayerLevelRewardReq::level(req);
  ret = PlayerBasicComp::takePlayerLevelReward(BasicComp, v4);
  v5 = proto::TakePlayerLevelRewardReq::level(req);
  proto::TakePlayerLevelRewardRsp::set_level(rsp_0, v5);
  return ret;
};

// Line 523: range 00000000168C4E10-00000000168C4E70
int32_t __cdecl PlayerHandler::onItemGivingReq(
        PlayerHandler *const this,
        const proto::ItemGivingReq *req,
        proto::ItemGivingRsp *rsp_0)
{
  PlayerGivingComp *GivingComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GivingComp = Player::getGivingComp(this->player_);
  return PlayerGivingComp::onItemGivingReq(GivingComp, req, rsp_0);
};

// Line 529: range 00000000168C4E72-00000000168C4ED2
int32_t __cdecl PlayerHandler::onPlayerCookArgsReq(
        PlayerHandler *const this,
        const proto::PlayerCookArgsReq *req,
        proto::PlayerCookArgsRsp *rsp_0)
{
  PlayerCookComp *CookComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CookComp = Player::getCookComp(this->player_);
  return PlayerCookComp::onPlayerCookArgsReq(CookComp, req, rsp_0);
};

// Line 535: range 00000000168C4ED4-00000000168C50D9
int32_t __cdecl PlayerHandler::onWatcherEventNotify(PlayerHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerWatcherComp *WatcherComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::WatcherEventNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:536";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onWatcherEventNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WatcherEventNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WatcherEventNotify const>(
         (const std::shared_ptr<const proto::WatcherEventNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onWatcherEventNotify",
      536);
    common::milog::MiLogStream::operator()(&v9, off_25E1C7E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::WatcherEventNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WatcherEventNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    v5 = PlayerWatcherComp::onWatcherEventNotify(WatcherComp, notify);
  }
  std::shared_ptr<proto::WatcherEventNotify const>::~shared_ptr((std::shared_ptr<const proto::WatcherEventNotify> *const)(v2 + 32));
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

// Line 542: range 00000000168C50DA-00000000168C52DF
int32_t __cdecl PlayerHandler::onWatcherEventTypeNotify(
        PlayerHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerWatcherComp *WatcherComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::WatcherEventTypeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:543";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onWatcherEventTypeNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WatcherEventTypeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WatcherEventTypeNotify const>(
         (const std::shared_ptr<const proto::WatcherEventTypeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onWatcherEventTypeNotify",
      543);
    common::milog::MiLogStream::operator()(&v9, off_25E1C880);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::WatcherEventTypeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WatcherEventTypeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    v5 = PlayerWatcherComp::onWatcherEventTypeNotify(WatcherComp, notify);
  }
  std::shared_ptr<proto::WatcherEventTypeNotify const>::~shared_ptr((std::shared_ptr<const proto::WatcherEventTypeNotify> *const)(v2 + 32));
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

// Line 549: range 00000000168C52E0-00000000168C54E5
int32_t __cdecl PlayerHandler::onWatcherEventStageNotify(
        PlayerHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerWatcherComp *WatcherComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::WatcherEventStageNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:550";
  *(_QWORD *)(v2 + 16) = PlayerHandler::onWatcherEventStageNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WatcherEventStageNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WatcherEventStageNotify const>(
         (const std::shared_ptr<const proto::WatcherEventStageNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onWatcherEventStageNotify",
      550);
    common::milog::MiLogStream::operator()(&v9, off_25E1C940);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::WatcherEventStageNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WatcherEventStageNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    v5 = PlayerWatcherComp::onWatcherEventStageNotify(WatcherComp, notify);
  }
  std::shared_ptr<proto::WatcherEventStageNotify const>::~shared_ptr((std::shared_ptr<const proto::WatcherEventStageNotify> *const)(v2 + 32));
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

// Line 556: range 00000000168C54E6-00000000168C556B
int32_t __cdecl PlayerHandler::onPushTipsReadFinishReq(
        PlayerHandler *const this,
        const proto::PushTipsReadFinishReq *req,
        proto::PushTipsReadFinishRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerWatcherComp *WatcherComp; // rbx
  uint32_t v5; // eax

  v3 = proto::PushTipsReadFinishReq::push_tips_id(req);
  proto::PushTipsReadFinishRsp::set_push_tips_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  v5 = proto::PushTipsReadFinishReq::push_tips_id(req);
  return PlayerWatcherComp::onPushTipsReadFinish(WatcherComp, v5);
};

// Line 563: range 00000000168C556C-00000000168C55F4
int32_t __cdecl PlayerHandler::onGetPushTipsRewardReq(
        PlayerHandler *const this,
        const proto::GetPushTipsRewardReq *req,
        proto::GetPushTipsRewardRsp *rsp_0)
{
  const google::protobuf::RepeatedField<unsigned int> *v3; // rbx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  PlayerWatcherComp *WatcherComp; // rdx

  v3 = proto::GetPushTipsRewardReq::push_tips_id_list(req);
  v4 = proto::GetPushTipsRewardRsp::mutable_push_tips_id_list(rsp_0);
  google::protobuf::RepeatedField<unsigned int>::operator=(v4, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  return PlayerWatcherComp::onPushTipsRewardReq(WatcherComp, req);
};

// Line 570: range 00000000168C55F6-00000000168C5660
int32_t __cdecl PlayerHandler::onSignInInfoReq(
        PlayerHandler *const this,
        const proto::SignInInfoReq *req,
        proto::SignInInfoRsp *rsp_0)
{
  PlayerSignInComp *SignInComp; // rbx
  google::protobuf::RepeatedPtrField<proto::SignInInfo> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SignInComp = Player::getSignInComp(this->player_);
  v4 = proto::SignInInfoRsp::mutable_sign_in_info_list(rsp_0);
  return PlayerSignInComp::getCurOrNextSignInInfo(SignInComp, v4);
};

// Line 577: range 00000000168C5662-00000000168C5780
int32_t __cdecl PlayerHandler::onGetSignInRewardReq(
        PlayerHandler *const this,
        const proto::GetSignInRewardReq *req,
        proto::GetSignInRewardRsp *rsp_0)
{
  PlayerSignInComp *SignInComp; // rax
  PlayerSignInComp *v4; // rax
  PlayerSignInComp *v5; // rbx
  proto::SignInInfo *v6; // rax
  google::protobuf::uint32 schedule_id; // [rsp+24h] [rbp-1Ch]
  google::protobuf::uint32 reward_day; // [rsp+28h] [rbp-18h]
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SignInComp = Player::getSignInComp(this->player_);
  PlayerSignInComp::checkRefreshScheduleAndTryNotify(SignInComp);
  schedule_id = proto::GetSignInRewardReq::schedule_id(req);
  reward_day = proto::GetSignInRewardReq::reward_day(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSignInComp(this->player_);
  ret = PlayerSignInComp::doGetSignInReward(v4, schedule_id, reward_day);
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getSignInComp(this->player_);
    v6 = proto::GetSignInRewardRsp::mutable_sign_in_info(rsp_0);
    PlayerSignInComp::scheduleRecordToClient(v5, schedule_id, v6);
  }
  return ret;
};

// Line 591: range 00000000168C5782-00000000168C582E
int32_t __cdecl PlayerHandler::onBonusActivityInfoReq(
        PlayerHandler *const this,
        const proto::BonusActivityInfoReq *req,
        proto::BonusActivityInfoRsp *rsp_0)
{
  PlayerSignInComp *SignInComp; // rax
  PlayerSignInComp *v4; // rbx
  google::protobuf::RepeatedPtrField<proto::BonusActivityInfo> *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SignInComp = Player::getSignInComp(this->player_);
  PlayerSignInComp::checkRevertBonusActivityAndNotify(SignInComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSignInComp(this->player_);
  v5 = proto::BonusActivityInfoRsp::mutable_bonus_activity_info_list(rsp_0);
  PlayerSignInComp::getAllBonusActivityInfo(v4, v5);
  return 0;
};

// Line 599: range 00000000168C5830-00000000168C5946
int32_t __cdecl PlayerHandler::onGetBonusActivityRewardReq(
        PlayerHandler *const this,
        const proto::GetBonusActivityRewardReq *req,
        proto::GetBonusActivityRewardRsp *rsp_0)
{
  PlayerSignInComp *SignInComp; // rax
  PlayerSignInComp *v4; // rbx
  uint32_t v5; // eax
  PlayerSignInComp *v6; // rbx
  proto::BonusActivityInfo *v7; // r12
  uint32_t v8; // eax
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SignInComp = Player::getSignInComp(this->player_);
  PlayerSignInComp::checkRevertBonusActivityAndNotify(SignInComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSignInComp(this->player_);
  v5 = proto::GetBonusActivityRewardReq::bonus_activity_id(req);
  ret = PlayerSignInComp::getBonusActivityReward(v4, v5);
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getSignInComp(this->player_);
    v7 = proto::GetBonusActivityRewardRsp::mutable_bonus_activity_info_list(rsp_0);
    v8 = proto::GetBonusActivityRewardReq::bonus_activity_id(req);
    PlayerSignInComp::getBonusActivityInfo(v6, v8, v7);
  }
  return ret;
};

// Line 611: range 00000000168C5948-00000000168C5C8D
int32_t __cdecl PlayerHandler::onPlayerForceExitReq(
        PlayerHandler *const this,
        const proto::PlayerForceExitReq *req,
        proto::PlayerForceExitRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  uint32_t Uid; // eax
  GameserverService *v9; // r14
  common::minet::PacketPtr v10; // rdi
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 packet_ptr:618 64 24 14 logout_req:616";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onPlayerForceExitReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::doOnDisconnect(this->player_);
  proto::PlayerLogoutReq::PlayerLogoutReq((proto::PlayerLogoutReq *const)(v3 + 64));
  proto::PlayerLogoutReq::set_reason((proto::PlayerLogoutReq *const)(v3 + 64), PlayerLogoutReq_Reason_CLIENT_REQ);
  common::minet::PacketUtils::createPacket<proto::PlayerLogoutReq>((const proto::PlayerLogoutReq *)(v3 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onPlayerForceExitReq",
      621);
    common::milog::MiLogStream::operator()(&v13, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v7, Uid);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    GameserverService::setPacketGameThreadIndex(v9, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    v10._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v3 + 32);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v10._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
    ServiceBox::pushPacketToService(v10);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    v6 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  proto::PlayerLogoutReq::~PlayerLogoutReq((proto::PlayerLogoutReq *const)(v3 + 64));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 634: range 00000000168C5C8E-00000000168C5CFB
int32_t __cdecl PlayerHandler::onClientLockGameTimeNotify(
        PlayerHandler *const this,
        const proto::ClientLockGameTimeNotify *notify)
{
  PlayerBasicComp *BasicComp; // rbx
  bool is_lock; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  is_lock = proto::ClientLockGameTimeNotify::is_lock(notify);
  PlayerBasicComp::setIsGameTimeLockedByClient(BasicComp, is_lock);
  return 0;
};

// Line 640: range 00000000168C5CFC-00000000168C62A0
int32_t __cdecl PlayerHandler::onGetNextResourceInfoReq(
        PlayerHandler *const this,
        const proto::GetNextResourceInfoReq *req,
        proto::GetNextResourceInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  ClientVersionConfig *p_version_config; // r14
  uint32_t PlatformType; // eax
  common::milog::MiLogStream *v12; // rbx
  proto::ResVersionConfig *res_version_config; // rax
  unsigned __int64 v14; // rax
  _BYTE *v15; // rdx
  char v16; // al
  const std::string *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  const std::string *region_name; // [rsp+28h] [rbp-118h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+30h] [rbp-110h]
  const proto::ResVersionConfig *next_res_config_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 16 resource_url:657 96 32 15 next_branch:662";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onGetNextResourceInfoReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  region_name = ConfigBase::getRegionName[abi:cxx11](v6);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                        &v7->design_config.db_config_mgr.db_deploy_config_mgr,
                        region_name);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( region_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    p_version_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.version_config;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlatformType = Player::getPlatformType(this->player_);
    next_res_config_ptr = ClientVersionConfig::findNextResVersionConfig(p_version_config, PlatformType);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( next_res_config_ptr )
    {
      res_version_config = proto::GetNextResourceInfoRsp::mutable_next_res_version_config(rsp_0);
      proto::ResVersionConfig::operator=(res_version_config, next_res_config_ptr);
      std::string::basic_string(v3 + 32, &region_config_ptr->resource_url);
      if ( (unsigned __int8)std::string::empty(v3 + 32) == 1 )
        goto LABEL_17;
      v14 = std::string::back(v3 + 32);
      v15 = (_BYTE *)v14;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)(v14 & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v14);
      if ( *v15 == 47 )
LABEL_17:
        v16 = 0;
      else
        v16 = 1;
      if ( v16 )
        std::string::operator+=(v3 + 32, "/");
      v17 = proto::ResVersionConfig::branch[abi:cxx11](next_res_config_ptr);
      std::string::basic_string(v3 + 96, v17);
      if ( (unsigned __int8)std::string::empty(v3 + 96) != 1 )
      {
        std::operator+<char>((std::string *)&v25, (const std::string *)(v3 + 32), (const std::string *)(v3 + 96));
        proto::GetNextResourceInfoRsp::set_next_resource_url(rsp_0, (std::string *)&v25);
        std::string::~string(&v25);
      }
      v9 = 0;
      std::string::~string((void *)(v3 + 96));
      std::string::~string((void *)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/player_handler.cpp",
        "onGetNextResourceInfoReq",
        652);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v25,
              (const char (*)[41])"next_res_config_ptr is null, plat_form: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getPlatformType(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v9 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/player_handler.cpp",
      "onGetNextResourceInfoReq",
      645);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v25,
           (const char (*)[41])"region_config_ptr is null, region_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, region_name);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v9 = -1;
  }
  result = v9;
  if ( v26 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 673: range 00000000168C62A2-00000000168C694D
int32_t __cdecl PlayerHandler::onAdjustWorldLevelReq(
        PlayerHandler *const this,
        const proto::AdjustWorldLevelReq *req,
        proto::AdjustWorldLevelRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isWorldLevelAdjustClosed; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerMpComp *MpComp; // rax
  PlayerMatchComp *MatchComp; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerWorld *v18; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t Level; // edx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t AdjustCDOverTime; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  uint32_t expect_world_level; // [rsp+28h] [rbp-D8h]
  int32_t ret; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 19 cur_world_level:674 64 16 13 world_ptr:681 96 16 13 scene_ptr:711";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onAdjustWorldLevelReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::AdjustWorldLevelReq::cur_world_level(req);
  expect_world_level = proto::AdjustWorldLevelReq::expect_world_level(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  isWorldLevelAdjustClosed = FeatureSwitchMgr::isWorldLevelAdjustClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( isWorldLevelAdjustClosed )
  {
    v8 = 142;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/player_handler.cpp",
        "onAdjustWorldLevelReq",
        684);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v28,
        (const char (*)[23])"getMyPlayerWorld fails");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( PlayerWorld::getLevel(v9) == *(_DWORD *)(v3 + 48) )
      {
        if ( expect_world_level != *(_DWORD *)(v3 + 48) && expect_world_level )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MpComp = Player::getMpComp(this->player_);
          if ( PlayerMpComp::isInMpMode(MpComp) )
          {
            v8 = 1202;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MatchComp = Player::getMatchComp(this->player_);
            if ( PlayerMatchComp::isInMatch(MatchComp) )
            {
              v8 = 1562;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              if ( PlayerAvatarComp::isInCombat(AvatarComp) )
              {
                v8 = 128;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getSceneComp(this->player_);
                PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
                if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
                {
                  common::milog::MiLogStream::create(
                    &v28,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/player_handler.cpp",
                    "onAdjustWorldLevelReq",
                    714);
                  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v28,
                    (const char (*)[18])"getCurScene fails");
                  common::milog::MiLogStream::~MiLogStream(&v28);
                  v8 = -1;
                }
                else
                {
                  v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  if ( Scene::getSceneType(v17) == SCENE_DUNGEON )
                  {
                    v8 = 158;
                  }
                  else
                  {
                    v18 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                    ret = PlayerWorld::manualAdjustLevel(v18, expect_world_level);
                    if ( !ret )
                    {
                      v19 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                      Level = PlayerWorld::getLevel(v19);
                      proto::AdjustWorldLevelRsp::set_after_world_level(rsp_0, Level);
                      v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                      AdjustCDOverTime = PlayerWorld::getAdjustCDOverTime(v21);
                      proto::AdjustWorldLevelRsp::set_cd_over_time(rsp_0, AdjustCDOverTime);
                    }
                    v8 = ret;
                  }
                }
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/player_handler.cpp",
            "onAdjustWorldLevelReq",
            694);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v28,
            (const char (*)[25])"expect_world_level error");
          common::milog::MiLogStream::~MiLogStream(&v28);
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/player_handler.cpp",
          "onAdjustWorldLevelReq",
          689);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v28, (const char (*)[21])off_25E1CCC0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])off_25E1CD00);
        v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = PlayerWorld::getLevel(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v8 = -1;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  result = v8;
  if ( v29 == (char *)v3 )
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

// Line 735: range 00000000168C694E-00000000168C69AA
int32_t __cdecl PlayerHandler::onGetAllH5ActivityInfoReq(
        PlayerHandler *const this,
        const proto::GetAllH5ActivityInfoReq *req,
        proto::GetAllH5ActivityInfoRsp *rsp_0)
{
  PlayerH5ActivityComp *H5ActivityComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  H5ActivityComp = Player::getH5ActivityComp(this->player_);
  return PlayerH5ActivityComp::getAllH5ActivityInfo(H5ActivityComp, rsp_0);
};

// Line 741: range 00000000168C69AC-00000000168C6A15
int32_t __cdecl PlayerHandler::onSetH5ActivityRedDotTimestampReq(
        PlayerHandler *const this,
        const proto::SetH5ActivityRedDotTimestampReq *req,
        proto::SetH5ActivityRedDotTimestampRsp *rsp_0)
{
  PlayerH5ActivityComp *H5ActivityComp; // rbx
  uint32_t v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  H5ActivityComp = Player::getH5ActivityComp(this->player_);
  v4 = proto::SetH5ActivityRedDotTimestampReq::client_red_dot_timestamp(req);
  return PlayerH5ActivityComp::setClientRedDotTimestamp(H5ActivityComp, v4);
};

// Line 747: range 00000000168C6A16-00000000168C6A9B
int32_t __cdecl PlayerHandler::onDailyTaskFilterCityReq(
        PlayerHandler *const this,
        const proto::DailyTaskFilterCityReq *req,
        proto::DailyTaskFilterCityRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerDailyTaskComp *DailyTaskComp; // rbx
  uint32_t v5; // eax

  v3 = proto::DailyTaskFilterCityReq::city_id(req);
  proto::DailyTaskFilterCityRsp::set_city_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  DailyTaskComp = Player::getDailyTaskComp(this->player_);
  v5 = proto::DailyTaskFilterCityReq::city_id(req);
  return PlayerDailyTaskComp::onFilterCityReq(DailyTaskComp, v5);
};

// Line 754: range 00000000168C6A9C-00000000168C6CFD
int32_t __cdecl PlayerHandler::onGetGameplayRecommendationReq(
        PlayerHandler *const this,
        const proto::GetGameplayRecommendationReq *req,
        proto::GetGameplayRecommendationRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  proto::GetGameplayRecommendationReq::DetailCase v7; // eax
  proto::GameplayRecommendationSkillResponse *v8; // r13
  const proto::GameplayRecommendationSkillRequest *v9; // rdx
  proto::GameplayRecommendationReliquaryResponse *v10; // r13
  const proto::GameplayRecommendationReliquaryRequest *v11; // rdx
  proto::GameplayRecommendationElementReliquaryResponse *v12; // r13
  const proto::GameplayRecommendationElementReliquaryRequest *v13; // rdx
  data::DbGameplayRecommendationConfigMgr *gameplay_recommendation_config_mgr; // [rsp+28h] [rbp-88h]
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> *proto_avatar_recommendation_config_map; // [rsp+30h] [rbp-80h]
  common::tools::transcribe_cv_t_27 *avatar_recommendation_config_ptr; // [rsp+38h] [rbp-78h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-70h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 avatar_id:755";
  *(_QWORD *)(v3 + 16) = PlayerHandler::onGetGameplayRecommendationReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::GetGameplayRecommendationReq::avatar_id(req);
  proto::GetGameplayRecommendationRsp::set_avatar_id(rsp_0, *(_DWORD *)(v3 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  gameplay_recommendation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.db_config_mgr.db_local_config_mgr.gameplay_recommendation_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  proto_avatar_recommendation_config_map = proto::GameplayRecommendationConfig::avatar_config_map(&gameplay_recommendation_config_mgr->current_recommendation_config.proto_gameplay_recommendation_config);
  avatar_recommendation_config_ptr = common::tools::MiscUtils::findMapValuePointer<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> const>(
                                       proto_avatar_recommendation_config_map,
                                       (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::key_type *)(v3 + 32));
  if ( !avatar_recommendation_config_ptr )
  {
    result = 115;
    goto LABEL_15;
  }
  v7 = proto::GetGameplayRecommendationReq::detail_case(req);
  if ( v7 == kReliquaryRequest )
  {
    v10 = proto::GetGameplayRecommendationRsp::mutable_reliquary_response(rsp_0);
    v11 = proto::GetGameplayRecommendationReq::reliquary_request(req);
    result = PlayerHandler::processGameplayRecommendationReliquaryRequest(
               this,
               avatar_recommendation_config_ptr,
               v11,
               v10);
  }
  else
  {
    if ( v7 > kReliquaryRequest )
      goto LABEL_14;
    if ( v7 == kSkillRequest )
    {
      v8 = proto::GetGameplayRecommendationRsp::mutable_skill_response(rsp_0);
      v9 = proto::GetGameplayRecommendationReq::skill_request(req);
      result = PlayerHandler::processGameplayRecommendationSkillRequest(this, avatar_recommendation_config_ptr, v9, v8);
      goto LABEL_15;
    }
    if ( v7 == kElementReliquaryRequest )
    {
      v12 = proto::GetGameplayRecommendationRsp::mutable_element_reliquary_response(rsp_0);
      v13 = proto::GetGameplayRecommendationReq::element_reliquary_request(req);
      result = PlayerHandler::processGameplayRecommendationElementReliquaryRequest(
                 this,
                 avatar_recommendation_config_ptr,
                 v13,
                 v12);
    }
    else
    {
LABEL_14:
      result = -1;
    }
  }
LABEL_15:
  if ( v19 == (char *)v3 )
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

// Line 780: range 00000000168C6CFE-00000000168C6E42
int32_t __cdecl PlayerHandler::processGameplayRecommendationSkillRequest(
        PlayerHandler *const this,
        const proto::GameplayRecommendationAvatarConfig *avatar_recommendation_config,
        const proto::GameplayRecommendationSkillRequest *request,
        proto::GameplayRecommendationSkillResponse *response)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // r13
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  int32_t result; // eax
  common::tools::transcribe_cv_t_26 *recommendation_skill_config_ptr; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 18 skill_depot_id:781";
  *(_QWORD *)(v4 + 16) = PlayerHandler::processGameplayRecommendationSkillRequest;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = proto::GameplayRecommendationSkillRequest::skill_depot_id(request);
  proto::GameplayRecommendationSkillResponse::set_skill_depot_id(response, *(_DWORD *)(v4 + 32));
  v7 = proto::GameplayRecommendationAvatarConfig::skill_config_map(avatar_recommendation_config);
  recommendation_skill_config_ptr = common::tools::MiscUtils::findMapValuePointer<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> const>(
                                      v7,
                                      (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::key_type *)(v4 + 32));
  if ( recommendation_skill_config_ptr )
  {
    v8 = proto::GameplayRecommendationSkillResponse::mutable_skill_id_list(response);
    v9 = proto::GameplayRecommendationSkillConfig::skill_id_list(recommendation_skill_config_ptr);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(v8, v9);
  }
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 793: range 00000000168C6E44-00000000168C6F23
void __cdecl PlayerHandler::composeGameplayRecommendationReliquaryMainPropDataList(
        PlayerHandler *const this,
        const proto::GameplayRecommendationReliquaryConfig *proto_config,
        google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropData> *proto_main_prop_data_list)
{
  int v3; // edx
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig> *__for_range; // [rsp+38h] [rbp-18h]
  const proto::GameplayRecommendationReliquaryMainPropConfig *proto_main_prop_config; // [rsp+40h] [rbp-10h]
  proto::GameplayRecommendationReliquaryMainPropData *proto_main_prop_data; // [rsp+48h] [rbp-8h]

  v3 = proto::GameplayRecommendationReliquaryConfig::main_prop_config_list_size(proto_config);
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropData>::Reserve(
    proto_main_prop_data_list,
    v3);
  __for_range = proto::GameplayRecommendationReliquaryConfig::main_prop_config_list(proto_config);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_main_prop_config = google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator*(&__for_begin);
    proto_main_prop_data = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropData>::Add(proto_main_prop_data_list);
    v4 = proto::GameplayRecommendationReliquaryMainPropConfig::main_prop_id(proto_main_prop_config);
    proto::GameplayRecommendationReliquaryMainPropData::set_main_prop_id(proto_main_prop_data, v4);
    v5 = proto::GameplayRecommendationReliquaryMainPropConfig::permillage(proto_main_prop_config);
    proto::GameplayRecommendationReliquaryMainPropData::set_permillage(proto_main_prop_data, v5);
    google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator++(&__for_begin);
  }
};

// Line 805: range 00000000168C6F24-00000000168C7064
int32_t __cdecl PlayerHandler::processGameplayRecommendationReliquaryRequest(
        PlayerHandler *const this,
        const proto::GameplayRecommendationAvatarConfig *avatar_recommendation_config,
        const proto::GameplayRecommendationReliquaryRequest *request,
        proto::GameplayRecommendationReliquaryResponse *response)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *v7; // rax
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropData> *v8; // rdx
  int32_t result; // eax
  common::tools::transcribe_cv_t_25 *recommendation_reliquary_config_ptr; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 14 equip_type:806";
  *(_QWORD *)(v4 + 16) = PlayerHandler::processGameplayRecommendationReliquaryRequest;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = proto::GameplayRecommendationReliquaryRequest::equip_type(request);
  proto::GameplayRecommendationReliquaryResponse::set_equip_type(response, *(_DWORD *)(v4 + 32));
  v7 = proto::GameplayRecommendationAvatarConfig::reliquary_config_map(avatar_recommendation_config);
  recommendation_reliquary_config_ptr = common::tools::MiscUtils::findMapValuePointer<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> const>(
                                          v7,
                                          (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::key_type *)(v4 + 32));
  if ( recommendation_reliquary_config_ptr )
  {
    v8 = proto::GameplayRecommendationReliquaryResponse::mutable_main_prop_data_list(response);
    PlayerHandler::composeGameplayRecommendationReliquaryMainPropDataList(this, recommendation_reliquary_config_ptr, v8);
  }
  result = 0;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 818: range 00000000168C7066-00000000168C723F
int32_t __cdecl PlayerHandler::processGameplayRecommendationElementReliquaryRequest(
        PlayerHandler *const this,
        const proto::GameplayRecommendationAvatarConfig *avatar_recommendation_config,
        const proto::GameplayRecommendationElementReliquaryRequest *request,
        proto::GameplayRecommendationElementReliquaryResponse *response)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> *v7; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *v8; // rax
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropData> *v9; // rdx
  int32_t result; // eax
  common::tools::transcribe_cv_t_24 *recommendation_reliquary_map_config_ptr; // [rsp+20h] [rbp-90h]
  common::tools::transcribe_cv_t_25 *recommendation_reliquary_config_ptr; // [rsp+28h] [rbp-88h]
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 16 element_type:819 64 4 14 equip_type:820";
  *(_QWORD *)(v4 + 16) = PlayerHandler::processGameplayRecommendationElementReliquaryRequest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = proto::GameplayRecommendationElementReliquaryRequest::element_type(request);
  *(_DWORD *)(v4 + 64) = proto::GameplayRecommendationElementReliquaryRequest::equip_type(request);
  proto::GameplayRecommendationElementReliquaryResponse::set_element_type(response, *(_DWORD *)(v4 + 48));
  proto::GameplayRecommendationElementReliquaryResponse::set_equip_type(response, *(_DWORD *)(v4 + 64));
  v7 = proto::GameplayRecommendationAvatarConfig::element_reliquary_config_map(avatar_recommendation_config);
  recommendation_reliquary_map_config_ptr = common::tools::MiscUtils::findMapValuePointer<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> const>(
                                              v7,
                                              (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::key_type *)(v4 + 48));
  if ( recommendation_reliquary_map_config_ptr )
  {
    v8 = proto::GameplayRecommendationReliquaryMapConfig::reliquary_config_map(recommendation_reliquary_map_config_ptr);
    recommendation_reliquary_config_ptr = common::tools::MiscUtils::findMapValuePointer<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> const>(
                                            v8,
                                            (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::key_type *)(v4 + 64));
    if ( recommendation_reliquary_config_ptr )
    {
      v9 = proto::GameplayRecommendationElementReliquaryResponse::mutable_main_prop_data_list(response);
      PlayerHandler::composeGameplayRecommendationReliquaryMainPropDataList(
        this,
        recommendation_reliquary_config_ptr,
        v9);
    }
  }
  result = 0;
  if ( v15 == (char *)v4 )
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

// Line 837: range 00000000168C7240-00000000168C72A0
int32_t __cdecl PlayerHandler::onTakeBackGivingItemReq(
        PlayerHandler *const this,
        const proto::TakeBackGivingItemReq *req,
        proto::TakeBackGivingItemRsp *rsp_0)
{
  PlayerGivingComp *GivingComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GivingComp = Player::getGivingComp(this->player_);
  return PlayerGivingComp::onTakeBackGivingItemReq(GivingComp, req, rsp_0);
};

// Line 842: range 00000000168C72A2-00000000168C72F9
int32_t __cdecl PlayerHandler::onReadNicknameAuditReq(
        PlayerHandler *const this,
        const proto::ReadNicknameAuditReq *req,
        proto::ReadNicknameAuditRsp *rsp_0)
{
  PlayerBasicComp *BasicComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::onReadNicknameAudit(BasicComp);
  return 0;
};
