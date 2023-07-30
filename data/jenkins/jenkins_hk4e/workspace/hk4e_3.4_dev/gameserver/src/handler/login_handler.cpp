// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/login_handler.cpp

// Line 49: range 0000000016002D7C-000000001600433D
int32_t __cdecl LoginHandler::addPacketFuncToMap(
        LoginHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  LoginHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  LoginHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  LoginHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  LoginHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  LoginHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  LoginHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  LoginHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  LoginHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  LoginHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  LoginHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  LoginHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  LoginHandler **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  LoginHandler **v41; // r8
  const std::_Placeholder<1> *v42; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  LoginHandler **v44; // r8
  const std::_Placeholder<1> *v45; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  LoginHandler **v47; // r8
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
  LoginHandler *thisa; // [rsp+E8h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+FCh] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v68; // [rsp+100h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+108h] [rbp-88h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+110h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,const std::_Placeholder<1>&>::type v71; // [rsp+120h] [rbp-70h] BYREF
  common::milog::MiLogStream v72; // [rsp+140h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 172;
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
      "./src/handler/login_handler.cpp",
      "addPacketFuncToMap",
      50);
    common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 172LL);
    common::milog::MiLogStream::~MiLogStream(&v72);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onGetPlayerTokenReq;
    __f[1] = 0LL;
    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
      &v71,
      __f,
      (LoginHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 172;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
      v7,
      &v71);
    __x = 198;
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
        "./src/handler/login_handler.cpp",
        "addPacketFuncToMap",
        51);
      common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 198LL);
      common::milog::MiLogStream::~MiLogStream(&v72);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onGetPlayerTokenRsp;
      __f[1] = 0LL;
      std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
        &v71,
        __f,
        (LoginHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 198;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
        v10,
        &v71);
      __x = 112;
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
          "./src/handler/login_handler.cpp",
          "addPacketFuncToMap",
          52);
        common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 112LL);
        common::milog::MiLogStream::~MiLogStream(&v72);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v50.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginReq;
        v50.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v50);
        std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
          &v71,
          __f,
          (LoginHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 112;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
          v13,
          &v71);
        __x = 135;
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
            "./src/handler/login_handler.cpp",
            "addPacketFuncToMap",
            53);
          common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 135LL);
          common::milog::MiLogStream::~MiLogStream(&v72);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v51.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginRsp;
          v51.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v51);
          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
            &v71,
            __f,
            (LoginHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 135;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
            v16,
            &v71);
          __x = 10190;
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
              "./src/handler/login_handler.cpp",
              "addPacketFuncToMap",
              54);
            common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10190LL);
            common::milog::MiLogStream::~MiLogStream(&v72);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v52.m128i_i64[0] = (__int64)LoginHandler::onPlayerDisconnectNotify;
            v52.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v52);
            std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
              &v71,
              __f,
              (LoginHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10190;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
              v19,
              &v71);
            __x = 107;
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
                "./src/handler/login_handler.cpp",
                "addPacketFuncToMap",
                55);
              common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 107LL);
              common::milog::MiLogStream::~MiLogStream(&v72);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v53.m128i_i64[0] = (__int64)LoginHandler::onPlayerLogoutReq;
              v53.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v53);
              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                &v71,
                __f,
                (LoginHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 107;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                v22,
                &v71);
              __x = 10212;
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
                  "./src/handler/login_handler.cpp",
                  "addPacketFuncToMap",
                  56);
                common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10212LL);
                common::milog::MiLogStream::~MiLogStream(&v72);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v54.m128i_i64[0] = (__int64)LoginHandler::onKickoutPlayerNotify;
                v54.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v54);
                std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                  &v71,
                  __f,
                  (LoginHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10212;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v71);
                __x = 10112;
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
                    "./src/handler/login_handler.cpp",
                    "addPacketFuncToMap",
                    57);
                  common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10112LL);
                  common::milog::MiLogStream::~MiLogStream(&v72);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v55.m128i_i64[0] = (__int64)LoginHandler::onSavePlayerDataRsp;
                  v55.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v55);
                  std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                    &v71,
                    __f,
                    (LoginHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10112;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v71);
                  __x = 10175;
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
                      "./src/handler/login_handler.cpp",
                      "addPacketFuncToMap",
                      58);
                    common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10175LL);
                    common::milog::MiLogStream::~MiLogStream(&v72);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v56.m128i_i64[0] = (__int64)LoginHandler::onSaveBlockDataRsp;
                    v56.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v56);
                    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                      &v71,
                      __f,
                      (LoginHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 10175;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v71);
                    __x = 10235;
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
                        "./src/handler/login_handler.cpp",
                        "addPacketFuncToMap",
                        59);
                      common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10235LL);
                      common::milog::MiLogStream::~MiLogStream(&v72);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v57.m128i_i64[0] = (__int64)LoginHandler::onCheckOnlinePlayerReq;
                      v57.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v57);
                      std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                        &v71,
                        __f,
                        (LoginHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 10235;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v71);
                      __x = 10098;
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
                          "./src/handler/login_handler.cpp",
                          "addPacketFuncToMap",
                          60);
                        common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10098LL);
                        common::milog::MiLogStream::~MiLogStream(&v72);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v58.m128i_i64[0] = (__int64)LoginHandler::onNodeserverConnectedAndRegisteredNotify;
                        v58.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v58);
                        std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                          &v71,
                          __f,
                          (LoginHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 10098;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v71);
                        __x = 10072;
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
                            "./src/handler/login_handler.cpp",
                            "addPacketFuncToMap",
                            61);
                          common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10072LL);
                          common::milog::MiLogStream::~MiLogStream(&v72);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v59.m128i_i64[0] = (__int64)LoginHandler::onStopServerConfigNotify;
                          v59.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v59);
                          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                            &v71,
                            __f,
                            (LoginHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 10072;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v71);
                          __x = 10031;
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
                              "./src/handler/login_handler.cpp",
                              "addPacketFuncToMap",
                              62);
                            common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10031LL);
                            common::milog::MiLogStream::~MiLogStream(&v72);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v60.m128i_i64[0] = (__int64)LoginHandler::onReloadConfigNotify;
                            v60.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v60);
                            std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                              &v71,
                              __f,
                              (LoginHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v41,
                              v42);
                            __x = 10031;
                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                              v43,
                              &v71);
                            __x = 10247;
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
                                "./src/handler/login_handler.cpp",
                                "addPacketFuncToMap",
                                63);
                              common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10247LL);
                              common::milog::MiLogStream::~MiLogStream(&v72);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v61.m128i_i64[0] = (__int64)LoginHandler::onPlatformAntiAddictNotify;
                              v61.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v61);
                              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                                &v71,
                                __f,
                                (LoginHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v44,
                                v45);
                              __x = 10247;
                              v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                                v46,
                                &v71);
                              __x = 10181;
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
                                  "./src/handler/login_handler.cpp",
                                  "addPacketFuncToMap",
                                  64);
                                common::milog::MiLogStream::operator()(&v72, off_25AC7BE0, 10181LL);
                                common::milog::MiLogStream::~MiLogStream(&v72);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v62.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginBlockInfoNotify;
                                v62.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v62);
                                std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                                  &v71,
                                  __f,
                                  (LoginHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v47,
                                  v48);
                                __x = 10181;
                                v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
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

// Line 71: range 000000001600433E-00000000160054EC
int32_t __cdecl LoginHandler::onGetPlayerTokenReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  GameserverApp *v9; // rax
  uint32_t AppId; // eax
  int32_t v11; // r14d
  GameserverService *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t UserIp; // eax
  uint32_t v23; // eax
  uint32_t v24; // eax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  bool isStopServerConfig; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::string *v39; // r15
  uint32_t v40; // r14d
  uint32_t v41; // eax
  const google::protobuf::Timestamp *v42; // rax
  google::protobuf::uint32 v43; // eax
  const google::protobuf::Timestamp *v44; // rax
  google::protobuf::uint32 v45; // eax
  const std::string *v46; // rax
  std::string *v47; // r15
  uint32_t v48; // r14d
  uint32_t v49; // eax
  common::minet::Packet *v50; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  const proto::PacketHead *Head; // rax
  common::minet::Packet *v53; // rax
  NetworkMgrBase *v54; // r14
  uint32_t v55; // r8d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  GameserverService *v57; // r14
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  const std::string *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  const std::string *v68; // rax
  NetworkMgrBase *v69; // r14
  uint32_t v70; // r8d
  int32_t result; // eax
  unsigned int v72; // [rsp+28h] [rbp-348h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-344h] BYREF
  uint32_t register_min_age; // [rsp+30h] [rbp-340h]
  uint32_t packet_gate_id; // [rsp+34h] [rbp-33Ch]
  proto::GetPlayerTokenReq *req; // [rsp+38h] [rbp-338h]
  const DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+40h] [rbp-330h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+48h] [rbp-328h]
  const proto::StopServerConfig *region_stop_config; // [rsp+50h] [rbp-320h]
  proto::StopServerInfo *stop_server_info; // [rsp+58h] [rbp-318h]
  opentracing::v3::string_view operation_name; // [rsp+60h] [rbp-310h] BYREF
  std::string s; // [rsp+70h] [rbp-300h] BYREF
  std::string in_str; // [rsp+90h] [rbp-2E0h] BYREF
  opentracing::v3::Value value; // [rsp+B0h] [rbp-2C0h] BYREF
  char v85[656]; // [rsp+E0h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 6 ret:72 48 4 9 tmp_ip:96 64 8 16 root_span_ctx:73 96 16 10 req_ptr:77 128 16 18 rsp_pack"
                        "et_ptr:127 160 32 16 client_ip_str:88 224 56 13 span_proxy:74 320 216 7 rsp:107";
  *(_QWORD *)(v2 + 16) = LoginHandler::onGetPlayerTokenReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v6);
  TracingMgr::extract(v5, &in_str);
  std::string::~string(&in_str);
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onGetPlayerTokenReq");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 224), v8, operation_name, v7, 0, (const int *)(v2 + 32));
  v9 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v9);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&s, AppId);
  opentracing::v3::Value::Value(&value, &s);
  opentracing::v3::string_view::string_view(&operation_name, "app_id");
  SpanProxy::SetTag((SpanProxy *const)(v2 + 224), operation_name, &value);
  opentracing::v3::Value::~Value(&value);
  std::string::~string(&s);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::GetPlayerTokenReq>((const std::shared_ptr<proto::GetPlayerTokenReq> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onGetPlayerTokenReq",
      77);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC7D80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v11 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v12 = ServiceBox::findService<GameserverService>();
    ExternalMonitorReportMgr::addGetTokenValue(&v12->external_monitor_report_mgr);
    if ( proto::GetPlayerTokenReq::platform_type(req) > 0xF
      || (v13 = proto::GetPlayerTokenReq::platform_type(req), !proto::PlatformType_IsValid(v13)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onGetPlayerTokenReq",
        83);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[18])"invalid platform:");
      *(_DWORD *)(v2 + 48) = proto::GetPlayerTokenReq::platform_type(req);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" account_type:");
      val = proto::GetPlayerTokenReq::account_type(req);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" account_uid:");
      v20 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v2 + 32) = -1;
      v11 = *(_DWORD *)(v2 + 32);
    }
    else
    {
      v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserIp = common::minet::Packet::getUserIp(v21);
      common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)(v2 + 160), UserIp);
      v23 = proto::GetPlayerTokenReq::platform_type(req);
      if ( TxtConfigMgr::isCloudPlatform(v23) && proto::GetPlayerTokenReq::cloud_client_ip(req) )
      {
        v24 = proto::GetPlayerTokenReq::cloud_client_ip(req);
        *(_DWORD *)(v2 + 48) = htonl(v24);
        common::tools::NetUtils::inetNtoa[abi:cxx11](&in_str, *(_DWORD *)(v2 + 48));
        std::string::operator=(v2 + 160, &in_str);
        std::string::~string(&in_str);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenReq",
          98);
        v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[22])off_25AC7E80);
        val = proto::GetPlayerTokenReq::cloud_client_ip(req);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" tmp_ip: ");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v28,
                (const char (*)[17])" client_ip_str: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v2 + 160));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      }
      proto::GetPlayerTokenReq::set_client_ip_str(req, (const std::string *)(v2 + 160));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&operation_name);
      v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
      isStopServerConfig = Config::isStopServerConfig(v30, (const std::string *)(v2 + 160));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
      if ( isStopServerConfig )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenReq",
          104);
        v32 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[57])"refuse TokenReq because StopServerConfig client_ip_str: ");
        v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)(v2 + 160));
        v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v33,
                (const char (*)[19])" cloud_client_ip: ");
        *(_DWORD *)(v2 + 48) = proto::GetPlayerTokenReq::cloud_client_ip(req);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v2 + 48));
        v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])" userip:");
        v37 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserIp(v37);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 320));
        proto::GetPlayerTokenRsp::set_retcode((proto::GetPlayerTokenRsp *const)(v2 + 320), 11);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&operation_name);
        db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name)->design_config.db_config_mgr.db_deploy_config_mgr;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&operation_name);
        v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
        region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(db_deploy_config_mgr, &v38->region_name);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
        if ( region_config_ptr )
        {
          region_stop_config = &region_config_ptr->stop_server_config;
          v39 = proto::GetPlayerTokenRsp::mutable_msg[abi:cxx11]((proto::GetPlayerTokenRsp *const)(v2 + 320));
          v40 = proto::StopServerConfig::text_id(region_stop_config);
          v41 = proto::GetPlayerTokenReq::lang(req);
          LoginHandler::findMultiLangText(this, v41, v40, v39);
          stop_server_info = proto::GetPlayerTokenRsp::mutable_stop_server((proto::GetPlayerTokenRsp *const)(v2 + 320));
          v42 = proto::StopServerConfig::begin_time(region_stop_config);
          v43 = google::protobuf::Timestamp::seconds(v42);
          proto::StopServerInfo::set_stop_begin_time(stop_server_info, v43);
          v44 = proto::StopServerConfig::end_time(region_stop_config);
          v45 = google::protobuf::Timestamp::seconds(v44);
          proto::StopServerInfo::set_stop_end_time(stop_server_info, v45);
          v46 = proto::StopServerConfig::url[abi:cxx11](region_stop_config);
          proto::StopServerInfo::set_url(stop_server_info, v46);
          if ( proto::StopServerConfig::content_text_id(region_stop_config) )
          {
            v47 = proto::StopServerInfo::mutable_content_msg[abi:cxx11](stop_server_info);
            v48 = proto::StopServerConfig::content_text_id(region_stop_config);
            v49 = proto::GetPlayerTokenReq::lang(req);
            LoginHandler::findMultiLangText(this, v49, v48, v47);
          }
          common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>((const proto::GetPlayerTokenRsp *)(v2 + 128));
          if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 128)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "onGetPlayerTokenReq",
              130);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[19])"createPacket fails");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            *(_DWORD *)(v2 + 32) = -1;
            v11 = *(_DWORD *)(v2 + 32);
          }
          else
          {
            v50 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v51 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            Head = common::minet::Packet::getHead(v51);
            if ( common::minet::Packet::copyHead(v50, Head) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/login_handler.cpp",
                "onGetPlayerTokenReq",
                135);
              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[15])"copyHead fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
              *(_DWORD *)(v2 + 32) = -1;
              v11 = *(_DWORD *)(v2 + 32);
            }
            else
            {
              v53 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              packet_gate_id = common::minet::Packet::getServiceAppId(v53, 2u);
              if ( packet_gate_id )
              {
                v54 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                  (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
                LOBYTE(v54) = NetworkMgrBase::sendPacketToTargetService(
                                v54,
                                (common::minet::PacketPtr)__PAIR128__(2LL, &operation_name),
                                packet_gate_id,
                                v55) != 0;
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
                if ( (_BYTE)v54 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&in_str,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/login_handler.cpp",
                    "onGetPlayerTokenReq",
                    146);
                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)&in_str,
                    (const char (*)[32])"sendPacketToTargetService fails");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                  *(_DWORD *)(v2 + 32) = -1;
                }
                else
                {
                  *(_DWORD *)(v2 + 32) = proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v2 + 320));
                }
                v11 = *(_DWORD *)(v2 + 32);
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&in_str,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/login_handler.cpp",
                  "onGetPlayerTokenReq",
                  141);
                common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  (common::milog::MiLogStream *const)&in_str,
                  (const char (*)[20])"gateserver_ip is 0!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                *(_DWORD *)(v2 + 32) = -1;
                v11 = *(_DWORD *)(v2 + 32);
              }
            }
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
        }
        else
        {
          v11 = 0;
        }
        proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 320));
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&operation_name);
        v56 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
        register_min_age = FeatureSwitchMgr::getMinorsRegisterMinAge(&v56->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
        proto::GetPlayerTokenReq::set_minors_reg_min_age(req, register_min_age);
        v57 = ServiceBox::findService<GameserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          p_packet_ptr);
        GameserverService::setPacketGameThreadIndex(v57, (common::minet::PacketPtr *)&operation_name);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenReq",
          156);
        v58 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[41])"[LOGIN] OnGetPlayerTokenReq, channel_id:");
        v72 = proto::GetPlayerTokenReq::channel_id(req);
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &v72);
        v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v59,
                (const char (*)[17])" sub_channel_id:");
        *(_DWORD *)(v2 + 48) = proto::GetPlayerTokenReq::sub_channel_id(req);
        v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v60,
                (const unsigned int *)(v2 + 48));
        v62 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v61, (const char (*)[15])" account_type:");
        val = proto::GetPlayerTokenReq::account_type(req);
        v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &val);
        v64 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v63, (const char (*)[14])" account_uid:");
        v65 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v65);
        v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v66,
                (const char (*)[16])" country code: ");
        v68 = proto::GetPlayerTokenReq::country_code[abi:cxx11](req);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, v68);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        v69 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          p_packet_ptr);
        *(_DWORD *)(v2 + 32) = NetworkMgrBase::sendPacketToTargetService(
                                 v69,
                                 (common::minet::PacketPtr)__PAIR128__(5LL, &operation_name),
                                 0,
                                 v70);
        v11 = *(_DWORD *)(v2 + 32);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
      }
      std::string::~string((void *)(v2 + 160));
    }
  }
  std::shared_ptr<proto::GetPlayerTokenReq>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenReq> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 224));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v11;
  if ( v85 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 163: range 00000000160054EE-000000001600625C
int32_t __cdecl LoginHandler::onGetPlayerTokenRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  int32_t v9; // r14d
  common::minet::Packet *v10; // rax
  GameserverService *v11; // rax
  PlayerMgr *p_player_mgr; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v16; // rax
  unsigned __int64 BasicComp; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::string *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *v24; // r14
  const std::string *v25; // rax
  Player *v26; // r14
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const std::string *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  bool v39; // al
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  data::DbClientWatchdogUidListConfigMgr *p_client_watchdog_uid_list_config_mgr; // r14
  uint32_t v44; // eax
  bool isUidInWatchdogUidList; // al
  common::milog::MiLogStream *v46; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  const std::string *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  const std::string *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  bool is_watchdog_uid; // al
  NetworkMgrBase *v58; // r14
  uint32_t v59; // r8d
  int32_t result; // eax
  bool is_login_white_list; // [rsp+1Bh] [rbp-205h]
  unsigned int v62; // [rsp+1Ch] [rbp-204h] BYREF
  unsigned int val; // [rsp+20h] [rbp-200h] BYREF
  uint32_t packet_gate_id; // [rsp+24h] [rbp-1FCh]
  proto::GetPlayerTokenRsp *rsp_0; // [rsp+28h] [rbp-1F8h]
  DbConfigMgr *db_config_mgr; // [rsp+30h] [rbp-1F0h]
  const std::string *client_ip_str; // [rsp+38h] [rbp-1E8h]
  opentracing::v3::string_view operation_name; // [rsp+40h] [rbp-1E0h] BYREF
  std::string in_str; // [rsp+50h] [rbp-1D0h] BYREF
  char v70[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 7 ret:164 64 8 17 root_span_ctx:165 96 16 11 rsp_ptr:168 128 16 14 player_ptr:178 160 56 "
                        "14 span_proxy:166 256 96 25 player_extra_bin_data:181";
  *(_QWORD *)(v2 + 16) = LoginHandler::onGetPlayerTokenRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v6);
  TracingMgr::extract(v5, &in_str);
  std::string::~string(&in_str);
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onGetPlayerTokenRsp");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 160), v8, operation_name, v7, 0, (const int *)(v2 + 48));
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::GetPlayerTokenRsp>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::GetPlayerTokenRsp>((const std::shared_ptr<proto::GetPlayerTokenRsp> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onGetPlayerTokenRsp",
      168);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC82E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v9 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    packet_gate_id = common::minet::Packet::getServiceAppId(v10, 2u);
    if ( packet_gate_id )
    {
      v11 = ServiceBox::findService<GameserverService>();
      p_player_mgr = &GameserverService::getGameThreadLocal(v11)->player_mgr;
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getUserId(v13);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 128), (uint32_t)p_player_mgr);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Player::isLogin(v14) )
        {
          proto::PlayerExtraBinData::PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 256));
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          BasicComp = (unsigned __int64)Player::getBasicComp(v16);
          if ( *(_BYTE *)((BasicComp >> 3) + 0x7FFF8000) )
            BasicComp = __asan_report_load8();
          v18 = *(_QWORD *)BasicComp + 40LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            BasicComp = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v18)(BasicComp, v2 + 256) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "onGetPlayerTokenRsp",
              184);
            v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)&in_str,
                    (const char (*)[22])"toExtraBin fail, uid:");
            v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            val = common::minet::Packet::getUserId(v20);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          }
          else
          {
            proto::GetPlayerTokenRsp::clear_extra_bin_data(rsp_0);
            v21 = proto::GetPlayerTokenRsp::mutable_extra_bin_data[abi:cxx11](rsp_0);
            if ( !google::protobuf::MessageLite::SerializeToString(
                    (const google::protobuf::MessageLite *const)(v2 + 256),
                    v21) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/login_handler.cpp",
                "onGetPlayerTokenRsp",
                191);
              v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      (common::milog::MiLogStream *const)&in_str,
                      (const char (*)[51])"player_extra_bin_data SerializeToString fail, uid:");
              v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              val = common::minet::Packet::getUserId(v23);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            }
          }
          proto::PlayerExtraBinData::~PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 256));
        }
      }
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v25 = proto::GetPlayerTokenRsp::country_code[abi:cxx11](rsp_0);
        Player::setCountryCode(v24, v25);
        v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v27 = proto::GetPlayerTokenRsp::birthday[abi:cxx11](rsp_0);
        Player::setBirthday(v26, v27);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenRsp",
          199);
        v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[24])"country code update to ");
        v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v30 = Player::getCountryCode[abi:cxx11](v29);
        v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, v30);
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" player: ");
        v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        operator<<(v32, v33);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenRsp",
          200);
        v34 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[24])off_25AC8440);
        v35 = proto::GetPlayerTokenRsp::birthday[abi:cxx11](rsp_0);
        v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, v35);
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" player: ");
        v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        operator<<(v37, v38);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&operation_name);
      db_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name)->design_config.db_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
      client_ip_str = proto::GetPlayerTokenRsp::client_ip_str[abi:cxx11](rsp_0);
      is_login_white_list = 0;
      if ( (unsigned __int8)std::string::empty(client_ip_str) != 1 )
      {
        v39 = DbDeployConfigMgr::isLoginWhiteIp(&db_config_mgr->db_deploy_config_mgr, client_ip_str)
           || data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
                &db_config_mgr->db_local_config_mgr.stop_server_login_white_ip_config_mgr,
                client_ip_str);
        is_login_white_list = v39;
      }
      proto::GetPlayerTokenRsp::set_is_login_white_list(rsp_0, is_login_white_list);
      if ( proto::GetPlayerTokenRsp::retcode(rsp_0) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenRsp",
          215);
        v40 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[34])"[LOGIN] OnGetPlayerToken retcode:");
        v62 = proto::GetPlayerTokenRsp::retcode(rsp_0);
        v41 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, (const int *)&v62);
        v42 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v41, (const char (*)[6])" uid:");
        val = proto::GetPlayerTokenRsp::uid(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      }
      p_client_watchdog_uid_list_config_mgr = &db_config_mgr->db_local_config_mgr.client_watchdog_uid_list_config_mgr;
      v44 = proto::GetPlayerTokenRsp::uid(rsp_0);
      isUidInWatchdogUidList = data::DbClientWatchdogUidListConfigMgr::isUidInWatchdogUidList(
                                 p_client_watchdog_uid_list_config_mgr,
                                 v44);
      proto::GetPlayerTokenRsp::set_is_watchdog_uid(rsp_0, isUidInWatchdogUidList);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/handler/login_handler.cpp",
        "onGetPlayerTokenRsp",
        220);
      v46 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[43])"[LOGIN] OnGetPlayerTokenRsp, account_type:");
      v62 = proto::GetPlayerTokenRsp::account_type(rsp_0);
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &v62);
      v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v47, (const char (*)[14])" account_uid:");
      v49 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
      v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, v49);
      v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v50, (const char (*)[6])" uid:");
      val = proto::GetPlayerTokenRsp::uid(rsp_0);
      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &val);
      v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v52, (const char (*)[16])" country_code: ");
      v54 = proto::GetPlayerTokenRsp::country_code[abi:cxx11](rsp_0);
      v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, v54);
      v56 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v55,
              (const char (*)[18])" is_watchdog_uid:");
      is_watchdog_uid = proto::GetPlayerTokenRsp::is_watchdog_uid(rsp_0);
      common::milog::MiLogStream::operator<<(v56, is_watchdog_uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      v58 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&operation_name,
        p_packet_ptr);
      LOBYTE(v58) = NetworkMgrBase::sendPacketToTargetService(
                      v58,
                      (common::minet::PacketPtr)__PAIR128__(2LL, &operation_name),
                      packet_gate_id,
                      v59) != 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
      if ( (_BYTE)v58 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "onGetPlayerTokenRsp",
          225);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, "send packet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v2 + 48) = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = 0;
      }
      v9 = *(_DWORD *)(v2 + 48);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "onGetPlayerTokenRsp",
        173);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)&in_str,
        (const char (*)[20])"gateserver_ip is 0!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v2 + 48) = -1;
      v9 = *(_DWORD *)(v2 + 48);
    }
  }
  std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 160));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v9;
  if ( v70 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 233: range 000000001600625E-0000000016006AAC
int32_t __cdecl LoginHandler::onPlayerLoginReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  TracingMgr *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  GameserverApp *v10; // rax
  uint32_t AppId; // eax
  int32_t v12; // r14d
  GameserverService *v13; // rax
  std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  bool is_transfer; // al
  common::minet::Packet *v16; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const proto::PacketHead *Head; // rax
  common::minet::Packet *v19; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  unsigned int (__fastcall *v22)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  bool v23; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-1C0h]
  std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-1B8h]
  opentracing::v3::string_view operation_name; // [rsp+30h] [rbp-1B0h] BYREF
  std::string in_str; // [rsp+40h] [rbp-1A0h] BYREF
  opentracing::v3::Value value; // [rsp+60h] [rbp-180h] BYREF
  char v30[336]; // [rsp+90h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 7 ret:237 64 8 17 root_span_ctx:238 96 16 11 req_ptr:243 128 16 11 rsp_ptr:243 160 16 18 "
                        "rsp_packet_ptr:256 192 56 14 span_proxy:239";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLoginReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = ServiceBox::findService<GameserverService>();
  GameserverService::decreaseLoginLoad(v5);
  *(_DWORD *)(v2 + 48) = 0;
  v6 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v7);
  TracingMgr::extract(v6, &in_str);
  std::string::~string(&in_str);
  v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onPlayerLoginReq");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 192), v9, operation_name, v8, 0, (const int *)(v2 + 48));
  v10 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v10);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&in_str, AppId);
  opentracing::v3::Value::Value(&value, &in_str);
  opentracing::v3::string_view::string_view(&operation_name, "app_id");
  SpanProxy::SetTag((SpanProxy *const)(v2 + 192), operation_name, &value);
  opentracing::v3::Value::~Value(&value);
  std::string::~string(&in_str);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerLoginReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::PlayerLoginReq const>(
         (const std::shared_ptr<const proto::PlayerLoginReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlayerLoginReq",
      243);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC86E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v12 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PlayerLoginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::PlayerLoginRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::PlayerLoginRsp::set_retcode(rsp_0, -1);
    v13 = ServiceBox::findService<GameserverService>();
    ExternalMonitorReportMgr::addLoginValue(&v13->external_monitor_report_mgr);
    v14 = std::__shared_ptr_access<proto::PlayerLoginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(v2 + 48) = LoginHandler::playerLogin(this, (common::minet::PacketPtr *)&operation_name, v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    is_transfer = proto::PlayerLoginReq::is_transfer(req);
    proto::PlayerLoginRsp::set_is_transfer(rsp_0, is_transfer);
    if ( *(_DWORD *)(v2 + 48) )
    {
      proto::PlayerLoginRsp::set_retcode(rsp_0, *(_DWORD *)(v2 + 48));
      common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>((const proto::PlayerLoginRsp *)(v2 + 160));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "onPlayerLoginReq",
          259);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)&in_str,
          (const char (*)[21])"create packet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v2 + 48) = -1;
        v12 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        Head = common::minet::Packet::getHead(v17);
        if ( common::minet::Packet::copyHead(v16, Head) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "onPlayerLoginReq",
            264);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
            (common::milog::MiLogStream *const)&in_str,
            (const char (*)[15])"copyHead fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          *(_DWORD *)(v2 + 48) = -1;
          v12 = *(_DWORD *)(v2 + 48);
        }
        else
        {
          v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          common::minet::Packet::setTargetService(v19, 2u);
          v20 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = (unsigned __int64)(v20->_vptr_NetworkMgrBase + 8);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          v22 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v21;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&operation_name,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 160));
          v23 = v22(v20, &operation_name) != 0;
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
          if ( v23 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "onPlayerLoginReq",
              271);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[33])"sendPacketToTargetService failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          }
          *(_DWORD *)(v2 + 48) = proto::PlayerLoginRsp::retcode(rsp_0);
          v12 = *(_DWORD *)(v2 + 48);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      v12 = *(_DWORD *)(v2 + 48);
    }
    std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::PlayerLoginReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginReq> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 192));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v12;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 278: range 0000000016006AAE-0000000016008BEC
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl LoginHandler::playerLogin(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::PlayerLoginReq *req)
{
  unsigned __int64 p_M_single_bucket; // r14
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r12d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t UserIp; // eax
  uint32_t v15; // eax
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // r12
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  bool isStopServerConfig; // r12
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r12
  uint32_t v31; // r15d
  uint32_t v32; // eax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r12
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r12
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r12
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  GameserverService *v47; // rax
  unsigned int GameThreadLocal; // eax
  bool v49; // r12
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  GameserverService *v52; // rax
  unsigned int v53; // eax
  GameserverService *v54; // rax
  common::milog::MiLogStream *v55; // rax
  PlayerSessionProxy *v56; // rdi
  uint32_t ThreadIndex; // r12d
  unsigned __int64 v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdi
  common::milog::MiLogStream *v61; // r12
  const unsigned int *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r12
  PlayerSessionProxy *v65; // rax
  bool v66; // r12
  bool v67; // r12
  Player *v68; // r12
  const std::string *v69; // rax
  Player *v70; // r12
  const std::string *v71; // rax
  GameserverService *v72; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  bool v74; // r12
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  GameserverService *v81; // rax
  GameThreadLocal *v82; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  bool v84; // r12
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rdx
  GameserverService *v91; // rax
  GameserverService *v92; // rax
  std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  bool v94; // r15
  common::milog::MiLogStream *v95; // rax
  GameserverService *v96; // rax
  PlayerSessionProxy *v97; // rdi
  uint32_t v98; // r12d
  unsigned __int64 v99; // rdx
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rdi
  common::milog::MiLogStream *v102; // r12
  const unsigned int *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r12
  PlayerSessionProxy *v106; // rax
  bool v107; // r12
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  bool v110; // r12
  GameserverService *v111; // r12
  GameserverService *v112; // rax
  PlayerSessionProxy *v113; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v114; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  GameserverService *v116; // r12
  LoginHandler **v117; // r9
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // r12
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // r12
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // r12
  common::minet::Packet *v130; // rax
  int32_t result; // eax
  AsyncTaskFunc v132; // [rsp+0h] [rbp-2F0h] BYREF
  AsyncTaskCallbackFunc v133; // [rsp+20h] [rbp-2D0h] OVERLAPPED
  unsigned int val; // [rsp+44h] [rbp-2ACh] BYREF
  LoginHandler *LastLoginRand; // [rsp+48h] [rbp-2A8h] BYREF
  LoginHandler *M_invoker; // [rsp+50h] [rbp-2A0h] BYREF
  const std::string *version; // [rsp+58h] [rbp-298h]
  PlayerMgr context; // [rsp+60h] [rbp-290h] BYREF

  v133._M_invoker = (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)>::_Invoker_type)this;
  v133._M_manager = (std::_Function_base::_Manager_type)p_packet_ptr;
  *(_QWORD *)&v133._M_functor._M_pod_data[8] = req;
  p_M_single_bucket = (unsigned __int64)&context.save_player_queue_.save_info_map_._M_h._M_single_bucket;
  v133._M_functor._M_unused._M_object = &context.save_player_queue_.save_info_map_._M_h._M_single_bucket;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      p_M_single_bucket = v4;
  }
  *(_QWORD *)p_M_single_bucket = 1102416563LL;
  *(_QWORD *)(p_M_single_bucket + 8) = "10 32 4 7 ret:279 48 4 7 uid:282 64 4 14 online_num:387 80 4 25 online_num_cur_th"
                                       "read:394 96 16 14 player_ptr:350 128 16 15 session_ptr:412 160 16 15 context_ptr:"
                                       "483 192 16 15 session_ptr:353 224 32 17 client_ip_str:290 288 56 14 span_proxy:280";
  *(_QWORD *)(p_M_single_bucket + 16) = LoginHandler::playerLogin;
  v5 = (_DWORD *)(p_M_single_bucket >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  *(_DWORD *)(p_M_single_bucket + 32) = 0;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)&context.online_player_map_._M_h._M_rehash_policy,
    "playerLogin");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(p_M_single_bucket + 288),
    v6,
    (opentracing::v3::string_view)context.online_player_map_._M_h._M_rehash_policy,
    0LL,
    0,
    (const int *)(p_M_single_bucket + 32));
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v133._M_manager);
  *(_DWORD *)(p_M_single_bucket + 48) = common::minet::Packet::getUserId(v7);
  v8 = (unsigned __int64)ServiceBox::findService<GameserverService>();
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(_QWORD *)v8 + 64LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v9)(v8) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/login_handler.cpp",
      "playerLogin",
      285);
    v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
            (const char (*)[23])"refuse login from uid=");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            (const unsigned int *)(p_M_single_bucket + 48));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v11,
      (const char (*)[28])" because server is shutdown");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    *(_DWORD *)(p_M_single_bucket + 32) = 11;
    v12 = *(_DWORD *)(p_M_single_bucket + 32);
    goto LABEL_80;
  }
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v133._M_manager);
  UserIp = common::minet::Packet::getUserIp(v13);
  common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)(p_M_single_bucket + 224), UserIp);
  v15 = proto::PlayerLoginReq::platform_type(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
  if ( TxtConfigMgr::isCloudPlatform(v15)
    && proto::PlayerLoginReq::cloud_client_ip(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]) )
  {
    v16 = proto::PlayerLoginReq::cloud_client_ip(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
    *(_DWORD *)(p_M_single_bucket + 80) = htonl(v16);
    common::tools::NetUtils::inetNtoa[abi:cxx11](
      (std::string *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
      *(_DWORD *)(p_M_single_bucket + 80));
    std::string::operator=(
      p_M_single_bucket + 224,
      &context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    std::string::~string(&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/login_handler.cpp",
      "playerLogin",
      300);
    v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
            (const char (*)[22])off_25AC7E80);
    val = proto::PlayerLoginReq::cloud_client_ip(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" tmp_ip: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v19,
            (const unsigned int *)(p_M_single_bucket + 80));
    v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v21,
      (const std::string *)(p_M_single_bucket + 224));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/login_handler.cpp",
    "playerLogin",
    303);
  v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[27])"[TEST_IP] playerLogin, ip:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    v22,
    (const std::string *)(p_M_single_bucket + 224));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&context.online_player_map_._M_h._M_rehash_policy);
  v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context.online_player_map_._M_h._M_rehash_policy);
  isStopServerConfig = Config::isStopServerConfig(v23, (const std::string *)(p_M_single_bucket + 224));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context.online_player_map_._M_h._M_rehash_policy);
  if ( !isStopServerConfig )
  {
    version = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&context.online_player_map_._M_h._M_rehash_policy);
    v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context.online_player_map_._M_h._M_rehash_policy);
    v31 = proto::PlayerLoginReq::sub_channel_id(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
    v32 = proto::PlayerLoginReq::channel_id(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
    LOBYTE(v30) = Config::isStopVersionConfig(v30, version, v32, v31, (const std::string *)(p_M_single_bucket + 224));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context.online_player_map_._M_h._M_rehash_policy);
    if ( (_BYTE)v30 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        315);
      v33 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[46])"refuse login because StopVersionConfig, uid: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v33,
              (const unsigned int *)(p_M_single_bucket + 48));
      v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v34, (const char (*)[17])" client_ip_str: ");
      v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v35,
              (const std::string *)(p_M_single_bucket + 224));
      v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v36,
              (const char (*)[19])" cloud_client_ip: ");
      *(_DWORD *)(p_M_single_bucket + 64) = proto::PlayerLoginReq::cloud_client_ip(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v37,
              (const unsigned int *)(p_M_single_bucket + 64));
      v39 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v38, (const char (*)[2])" ");
      v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, version);
      v41 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v40, (const char (*)[2])",");
      *(_DWORD *)(p_M_single_bucket + 80) = proto::PlayerLoginReq::channel_id(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v41,
              (const unsigned int *)(p_M_single_bucket + 80));
      v43 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v42, (const char (*)[2])",");
      val = proto::PlayerLoginReq::sub_channel_id(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      *(_DWORD *)(p_M_single_bucket + 32) = 11;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_79;
    }
    if ( !LoginHandler::checkChecksumValid(
            (LoginHandler *const)v133._M_invoker,
            *(_DWORD *)(p_M_single_bucket + 48),
            *(const proto::PlayerLoginReq **)&v133._M_functor._M_pod_data[8]) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        323);
      v44 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[23])"checksum invalid, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v44,
        (const unsigned int *)(p_M_single_bucket + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      Player::printForbidLoginAntiCheatLog(*(_DWORD *)(p_M_single_bucket + 48), 1u);
      *(_DWORD *)(p_M_single_bucket + 32) = 31;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_79;
    }
    if ( !LoginHandler::isEnvironmentErrorAllowLogin(
            (LoginHandler *const)v133._M_invoker,
            *(_DWORD *)(p_M_single_bucket + 48),
            *(const proto::PlayerLoginReq **)&v133._M_functor._M_pod_data[8]) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        331);
      v45 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[46])"isEnvironmentErrorAllowLogin check fail, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v45,
        (const unsigned int *)(p_M_single_bucket + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      Player::printForbidLoginAntiCheatLog(*(_DWORD *)(p_M_single_bucket + 48), 3u);
      *(_DWORD *)(p_M_single_bucket + 32) = 39;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_79;
    }
    if ( !LoginHandler::isSecurityLibraryMd5Valid(
            (LoginHandler *const)v133._M_invoker,
            *(_DWORD *)(p_M_single_bucket + 48),
            *(const proto::PlayerLoginReq **)&v133._M_functor._M_pod_data[8]) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        339);
      v46 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[43])"isSecurityLibraryMd5Valid check fail, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v46,
        (const unsigned int *)(p_M_single_bucket + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      Player::printForbidLoginAntiCheatLog(*(_DWORD *)(p_M_single_bucket + 48), 4u);
      *(_DWORD *)(p_M_single_bucket + 32) = 42;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_79;
    }
    v47 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v47);
    PlayerMgr::findSaveWaitPlayer(&context, GameThreadLocal + 16);
    v49 = std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)&context, 0LL);
    std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)&context);
    if ( v49 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        347);
      v50 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[7])" uid: ");
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v50,
              (const unsigned int *)(p_M_single_bucket + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v51, (const char (*)[15])off_25AC8B80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    }
    v52 = ServiceBox::findService<GameserverService>();
    v53 = (unsigned int)GameserverService::getGameThreadLocal(v52);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(p_M_single_bucket + 96), v53 + 16);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(p_M_single_bucket + 96), 0LL) )
    {
      v54 = ServiceBox::findService<GameserverService>();
      GameserverService::findPlayerSession(
        (GameserverService *const)(p_M_single_bucket + 192),
        (__int64)v54,
        *(_DWORD *)(p_M_single_bucket + 48));
      if ( std::operator==<PlayerSessionProxy>(
             (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 192),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          357);
        v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                (const char (*)[21])"session is null,uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v55,
          (const unsigned int *)(p_M_single_bucket + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
      }
      else
      {
        v56 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
        ThreadIndex = PlayerSessionProxy::getThreadIndex(v56);
        v58 = ZTWN11ThreadLocal17work_thread_indexE(v56, 0LL);
        if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) != 0 && (char)((v58 & 7) + 3) >= *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
          __asan_report_load4();
        if ( ThreadIndex == *(_DWORD *)v58 )
        {
          std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
          Player::getSession((const Player *const)&context.online_player_map_._M_h._M_rehash_policy);
          v66 = LoginHandler::isFromSameClientSession(
                  (LoginHandler *const)v133._M_invoker,
                  (const PlayerSessionProxyPtr *)&context.online_player_map_._M_h._M_rehash_policy,
                  (const common::minet::PacketPtr *)v133._M_manager);
          std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy);
          if ( v66 )
          {
            *(_DWORD *)(p_M_single_bucket + 32) = 14;
            v12 = *(_DWORD *)(p_M_single_bucket + 32);
          }
          else
          {
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)&context.online_player_map_._M_h._M_rehash_policy,
              (const std::shared_ptr<common::minet::Packet> *)v133._M_manager);
            std::shared_ptr<Player>::shared_ptr(
              (std::shared_ptr<Player> *const)&context.online_player_map_._M_h._M_before_begin,
              (const std::shared_ptr<Player> *)(p_M_single_bucket + 96));
            v67 = LoginHandler::disconnectClientAndLogin(
                    (LoginHandler *const)v133._M_invoker,
                    (PlayerPtr *)&context.online_player_map_._M_h._M_before_begin,
                    (common::minet::PacketPtr *)&context.online_player_map_._M_h._M_rehash_policy,
                    *(const proto::PlayerLoginReq **)&v133._M_functor._M_pod_data[8]) != 0;
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&context.online_player_map_._M_h._M_before_begin);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&context.online_player_map_._M_h._M_rehash_policy);
            if ( v67 )
            {
              *(_DWORD *)(p_M_single_bucket + 32) = -1;
            }
            else
            {
              v68 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
              v69 = proto::PlayerLoginReq::country_code[abi:cxx11](*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
              Player::setCountryCode(v68, v69);
              v70 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
              v71 = proto::PlayerLoginReq::birthday[abi:cxx11](*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
              Player::setBirthday(v70, v71);
              *(_DWORD *)(p_M_single_bucket + 32) = 0;
            }
            v12 = *(_DWORD *)(p_M_single_bucket + 32);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "playerLogin",
            363);
          v59 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                  (const char (*)[42])"another thread create session already,uid");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v59,
                  (const unsigned int *)(p_M_single_bucket + 48));
          v61 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v60,
                  (const char (*)[14])" this thread:");
          v62 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v60, " this thread:");
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, v62);
          v64 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v63,
                  (const char (*)[17])" another thread:");
          v65 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
          val = PlayerSessionProxy::getThreadIndex(v65);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
          *(_DWORD *)(p_M_single_bucket + 32) = -1;
          v12 = *(_DWORD *)(p_M_single_bucket + 32);
        }
      }
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(p_M_single_bucket
                                                                                                  + 192));
      goto LABEL_78;
    }
    v72 = ServiceBox::findService<GameserverService>();
    *(_DWORD *)(p_M_single_bucket + 64) = GameserverService::getOnlinePlayerNum(v72);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_single_bucket + 192));
    v73 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
    if ( *(_BYTE *)(((unsigned __int64)&v73->max_online_player >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v73->max_online_player >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v74 = v73->max_online_player <= *(_DWORD *)(p_M_single_bucket + 64);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_single_bucket + 192));
    if ( v74 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        390);
      v75 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[18])"OnlinePlayerNum: ");
      v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v75,
              (const unsigned int *)(p_M_single_bucket + 64));
      v77 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v76,
              (const char (*)[30])" stop new player login, uid: ");
      v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v77,
              (const unsigned int *)(p_M_single_bucket + 48));
      v79 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v78,
              (const char (*)[20])" max_online_player:");
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&context.online_player_map_._M_h._M_rehash_policy);
      v80 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context.online_player_map_._M_h._M_rehash_policy);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &v80->max_online_player);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context.online_player_map_._M_h._M_rehash_policy);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      *(_DWORD *)(p_M_single_bucket + 32) = 25;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
LABEL_78:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_single_bucket + 96));
      goto LABEL_79;
    }
    v81 = ServiceBox::findService<GameserverService>();
    v82 = GameserverService::getGameThreadLocal(v81);
    *(_DWORD *)(p_M_single_bucket + 80) = PlayerMgr::getOnlinePlayerNum(&v82->player_mgr);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&context.online_player_map_._M_h._M_before_begin);
    v83 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context.online_player_map_._M_h._M_before_begin);
    if ( *(_BYTE *)(((unsigned __int64)&v83->max_online_player_per_thread >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v83->max_online_player_per_thread >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v84 = v83->max_online_player_per_thread < *(_DWORD *)(p_M_single_bucket + 80);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context.online_player_map_._M_h._M_before_begin);
    if ( v84 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        397);
      v85 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[27])"OnlinePlayerNumPerThread: ");
      v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v85,
              (const unsigned int *)(p_M_single_bucket + 80));
      v87 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v86,
              (const char (*)[30])" stop new player login, uid: ");
      v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v87,
              (const unsigned int *)(p_M_single_bucket + 48));
      v89 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v88,
              (const char (*)[31])" max_online_player_per_thread:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v89,
        (const unsigned int *)(p_M_single_bucket + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      *(_DWORD *)(p_M_single_bucket + 32) = 25;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_78;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&context.online_player_map_._M_h._M_rehash_policy);
    v90 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context.online_player_map_._M_h._M_rehash_policy);
    if ( *(_BYTE *)(((unsigned __int64)&v90->rate_limit_login >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v90 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v90->rate_limit_login >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v94 = 0;
    if ( v90->rate_limit_login )
    {
      v91 = ServiceBox::findService<GameserverService>();
      if ( std::__shared_ptr<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2>::operator bool(&v91->global_rate_limiter_mgr.login_rate_limiter_ptr_) )
      {
        v92 = ServiceBox::findService<GameserverService>();
        v93 = std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v92->global_rate_limiter_mgr);
        if ( !common::tools::ConcurrentRateLimiter::acquire(v93, 1u) )
          v94 = 1;
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context.online_player_map_._M_h._M_rehash_policy);
    if ( v94 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        407);
      v95 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
              (const char (*)[42])"login_rate_limiter acquire refused, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v95,
        (const unsigned int *)(p_M_single_bucket + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      *(_DWORD *)(p_M_single_bucket + 32) = 25;
      v12 = *(_DWORD *)(p_M_single_bucket + 32);
      goto LABEL_78;
    }
    v96 = ServiceBox::findService<GameserverService>();
    GameserverService::findPlayerSession(
      (GameserverService *const)(p_M_single_bucket + 128),
      (__int64)v96,
      *(_DWORD *)(p_M_single_bucket + 48));
    if ( std::operator!=<PlayerSessionProxy>(
           (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 128),
           0LL) )
    {
      v97 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      v98 = PlayerSessionProxy::getThreadIndex(v97);
      v99 = ZTWN11ThreadLocal17work_thread_indexE(v97, 0LL);
      if ( *(_BYTE *)((v99 >> 3) + 0x7FFF8000) != 0 && (char)((v99 & 7) + 3) >= *(_BYTE *)((v99 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      if ( v98 != *(_DWORD *)v99 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          418);
        v100 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                 (const char (*)[42])"another thread create session already,uid");
        v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v100,
                 (const unsigned int *)(p_M_single_bucket + 48));
        v102 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v101,
                 (const char (*)[14])" this thread:");
        v103 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v101, " this thread:");
        v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v102, v103);
        v105 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 v104,
                 (const char (*)[17])" another thread:");
        v106 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
        val = PlayerSessionProxy::getThreadIndex(v106);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
LABEL_77:
        std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(p_M_single_bucket + 128));
        goto LABEL_78;
      }
      std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      PlayerSessionProxy::getPlayer((PlayerSessionProxy *const)&context.online_player_map_._M_h._M_rehash_policy);
      v107 = std::operator!=<Player>(
               (const std::shared_ptr<Player> *)&context.online_player_map_._M_h._M_rehash_policy,
               0LL);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&context.online_player_map_._M_h._M_rehash_policy);
      if ( v107 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          425);
        v108 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                 (const char (*)[29])"It should not happened uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v108,
          (const unsigned int *)(p_M_single_bucket + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
      if ( LoginHandler::isFromSameClientSession(
             (LoginHandler *const)v133._M_invoker,
             (const PlayerSessionProxyPtr *)(p_M_single_bucket + 128),
             (const common::minet::PacketPtr *)v133._M_manager) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          433);
        v109 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                 (const char (*)[23])"RET_REPEAT_LOGIN uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v109,
          (const unsigned int *)(p_M_single_bucket + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = 14;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
      std::shared_ptr<PlayerSessionProxy>::shared_ptr(
        (std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy,
        (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 128));
      v110 = LoginHandler::forceInterruptLogin(
               (LoginHandler *const)v133._M_invoker,
               (PlayerSessionProxyPtr *)&context.online_player_map_._M_h._M_rehash_policy) != 0;
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy);
      if ( v110 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          440);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[28])" forceInterruptLogin failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
      v111 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<PlayerSessionProxy>::shared_ptr(
        (std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy,
        (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 128));
      LOBYTE(v111) = GameserverService::bindPlayerSession(
                       v111,
                       (PlayerSessionProxyPtr *)&context.online_player_map_._M_h._M_rehash_policy,
                       (const common::minet::PacketPtr *)v133._M_manager,
                       *(const proto::PlayerLoginReq **)&v133._M_functor._M_pod_data[8]) != 0;
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy);
      if ( (_BYTE)v111 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          460);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[26])" bindPlayerSession failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
    }
    else
    {
      v112 = ServiceBox::findService<GameserverService>();
      GameserverService::createPlayerSession(
        (GameserverService *const)&context.online_player_map_._M_h._M_rehash_policy,
        (const common::minet::PacketPtr *)v112,
        (const proto::PlayerLoginReq *)v133._M_manager);
      std::shared_ptr<PlayerSessionProxy>::operator=(
        (std::shared_ptr<PlayerSessionProxy> *const)(p_M_single_bucket + 128),
        (std::shared_ptr<PlayerSessionProxy> *)&context.online_player_map_._M_h._M_rehash_policy);
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&context.online_player_map_._M_h._M_rehash_policy);
      if ( std::operator==<PlayerSessionProxy>(
             0LL,
             (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          469);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[27])"createPlayerSession failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
      v113 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      if ( PlayerSessionProxy::genNewLoginRand(v113) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLogin",
          475);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[23])"genNewLoginRand failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
        *(_DWORD *)(p_M_single_bucket + 32) = -1;
        v12 = *(_DWORD *)(p_M_single_bucket + 32);
        goto LABEL_77;
      }
    }
    LODWORD(context.save_player_queue_.save_info_map_._M_h._M_buckets) = *(_DWORD *)(p_M_single_bucket + 48);
    v114 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
    context.save_player_queue_.save_info_map_._M_h._M_bucket_count = PlayerSessionProxy::getLastLoginRand(v114);
    v115 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
    context.save_player_queue_.save_info_map_._M_h._M_before_begin._M_nxt = (std::__detail::_Hash_node_base *)PlayerSessionProxy::getCurLoginRand(v115);
    context.save_player_queue_.save_info_map_._M_h._M_element_count = 0LL;
    context.save_player_queue_.save_info_map_._M_h._M_rehash_policy._M_max_load_factor = 0.0;
    common::tools::perf::make_shared<ModifyPlayerStatusContext,ModifyPlayerStatusContext>(
      (ModifyPlayerStatusContext *)(p_M_single_bucket + 160),
      (ModifyPlayerStatusContext *)&context.save_player_queue_.save_info_map_);
    v116 = ServiceBox::findService<GameserverService>();
    std::any::any<std::shared_ptr<ModifyPlayerStatusContext> &,std::shared_ptr<ModifyPlayerStatusContext>,std::any::_Manager_external<std::shared_ptr<ModifyPlayerStatusContext>>,true,true>(
      (std::any *const)&context.online_player_map_._M_h._M_rehash_policy,
      (std::shared_ptr<ModifyPlayerStatusContext> *)(p_M_single_bucket + 160));
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&context.online_player_map_._M_h._M_before_begin,
      (const std::shared_ptr<common::minet::Packet> *)v133._M_manager);
    M_invoker = (LoginHandler *)v133._M_invoker;
    v132._M_functor._M_unused._M_object = LoginHandler::asyncModifyPlayerStatusCallback;
    *(_QWORD *)&v132._M_functor._M_pod_data[8] = 0LL;
    *(__m128i *)(p_M_single_bucket + 192) = _mm_load_si128((const __m128i *)&v132);
    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
      (std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&,const std::_Placeholder<3>&>::type *)&context.save_wait_player_map_._M_h._M_element_count,
      (int (**)(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any, int))(p_M_single_bucket + 192),
      &M_invoker,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      (const std::_Placeholder<2> *)&std::placeholders::_2,
      (const std::_Placeholder<3> *)&std::placeholders::_3,
      (LoginHandler **)v132._M_functor._M_unused._M_object,
      *(const std::_Placeholder<1> **)&v132._M_functor._M_pod_data[8],
      (const std::_Placeholder<2> *)v132._M_manager,
      (const std::_Placeholder<3> *)v132._M_invoker);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
      (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
      (std::_Bind<int (LoginHandler::*(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>))(std::shared_ptr<common::minet::Packet>,std::any,int)> *)&context.save_wait_player_map_._M_h._M_element_count);
    LastLoginRand = (LoginHandler *)v133._M_invoker;
    v132._M_manager = (std::_Function_base::_Manager_type)LoginHandler::asyncModifyPlayerStatus;
    v132._M_invoker = 0LL;
    *(__m128i *)&context.online_player_map_._M_h._M_buckets = _mm_load_si128((const __m128i *)&v132._M_manager);
    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
      (std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&>::type *)&context.online_player_map_._M_h._M_single_bucket,
      (int (**)(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any))&context,
      &LastLoginRand,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      (const std::_Placeholder<2> *)&std::placeholders::_2,
      v117,
      (const std::_Placeholder<1> *)v132._M_functor._M_unused._M_object,
      *(const std::_Placeholder<2> **)&v132._M_functor._M_pod_data[8]);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
      (std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> *const)&context.last_check_save_wait_time_,
      (std::_Bind<int (LoginHandler::*(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> *)&context.online_player_map_._M_h._M_single_bucket);
    *(_DWORD *)(p_M_single_bucket + 32) = ServiceBase::pushAsyncTask(
                                            v116,
                                            v132,
                                            v133,
                                            (common::minet::PacketPtr)__PAIR128__(
                                                                        (PlayerMgr *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
                                                                        (PlayerMgr *)&context.last_check_save_wait_time_),
                                            (std::any)__PAIR128__(
                                                        (PlayerMgr *)&context.online_player_map_._M_h._M_rehash_policy,
                                                        (PlayerMgr *)&context.online_player_map_._M_h._M_before_begin));
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> *const)&context.last_check_save_wait_time_);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&context.online_player_map_._M_h._M_before_begin);
    std::any::~any((std::any *const)&context.online_player_map_._M_h._M_rehash_policy);
    if ( *(_DWORD *)(p_M_single_bucket + 32) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        500);
      v118 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
               (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
               (const char (*)[7])" uid: ");
      v119 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v118,
               (const unsigned int *)(p_M_single_bucket + 48));
      v120 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               v119,
               (const char (*)[27])", doAsyncTask fails, ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v120, (const int *)(p_M_single_bucket + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/handler/login_handler.cpp",
        "playerLogin",
        504);
      v121 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
               (const char (*)[19])" playerLogin uid: ");
      v122 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v121,
               (const unsigned int *)(p_M_single_bucket + 48));
      v123 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v122,
               (const char (*)[19])" last_login_rand: ");
      v124 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      LastLoginRand = (LoginHandler *)PlayerSessionProxy::getLastLoginRand(v124);
      v125 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v123,
               (const unsigned __int64 *)&LastLoginRand);
      v126 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v125,
               (const char (*)[18])" cur_login_rand: ");
      v127 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      M_invoker = (LoginHandler *)PlayerSessionProxy::getCurLoginRand(v127);
      v128 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v126,
               (const unsigned __int64 *)&M_invoker);
      v129 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               v128,
               (const char (*)[17])" gameserver_id: ");
      v130 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v133._M_manager);
      val = common::minet::Packet::getServiceAppId(v130, 3u);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v129, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
      *(_DWORD *)(p_M_single_bucket + 32) = 0;
    }
    v12 = *(_DWORD *)(p_M_single_bucket + 32);
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)(p_M_single_bucket + 160));
    goto LABEL_77;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/login_handler.cpp",
    "playerLogin",
    306);
  v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          (common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count,
          (const char (*)[45])"refuse login because StopServerConfig, uid: ");
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v25,
          (const unsigned int *)(p_M_single_bucket + 48));
  v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])" client_ip_str: ");
  v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v27,
          (const std::string *)(p_M_single_bucket + 224));
  v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v28, (const char (*)[19])" cloud_client_ip: ");
  val = proto::PlayerLoginReq::cloud_client_ip(*(const proto::PlayerLoginReq *const *)&v133._M_functor._M_pod_data[8]);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&context.save_player_queue_.need_save_player_set_._M_h._M_element_count);
  *(_DWORD *)(p_M_single_bucket + 32) = 11;
  v12 = *(_DWORD *)(p_M_single_bucket + 32);
LABEL_79:
  std::string::~string((void *)(p_M_single_bucket + 224));
LABEL_80:
  SpanProxy::~SpanProxy((SpanProxy *const)(p_M_single_bucket + 288));
  result = v12;
  if ( v133._M_functor._M_unused._M_object == (void *)p_M_single_bucket )
  {
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_single_bucket = 1172321806LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 513: range 0000000016008BEE-00000000160094B8
int32_t __cdecl LoginHandler::asyncModifyPlayerStatus(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TracingMgr *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::size_t v11; // r14
  const std::type_info *v12; // rax
  const char *v13; // r14
  const std::type_info *v14; // rax
  const char *v15; // rax
  int32_t v16; // r14d
  common::milog::MiLogStream *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  common::minet::Packet *v20; // rax
  uint32_t ServiceAppId; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  int32_t result; // eax
  unsigned int v30; // [rsp+2Ch] [rbp-1C4h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-1C0h] BYREF
  uint64_t last_login_rand; // [rsp+40h] [rbp-1B0h]
  uint64_t cur_login_rand; // [rsp+48h] [rbp-1A8h]
  opentracing::v3::string_view operation_name; // [rsp+50h] [rbp-1A0h] BYREF
  std::string in_str; // [rsp+60h] [rbp-190h] BYREF
  char v36[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 ret:514 64 4 7 uid:518 80 8 17 root_span_ctx:515 112 16 15 context_ptr:521 144 40 19 ne"
                        "w_status_data:531 224 56 14 span_proxy:516";
  *(_QWORD *)(v3 + 16) = LoginHandler::asyncModifyPlayerStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = 0;
  v6 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v7);
  TracingMgr::extract(v6, &in_str);
  std::string::~string(&in_str);
  v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v3 + 80));
  opentracing::v3::string_view::string_view(&operation_name, "asyncModifyPlayerStatus");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v3 + 224), v9, operation_name, v8, 0, (const int *)(v3 + 48));
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 64) = common::minet::Packet::getUserId(v10);
  v11 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
  v12 = std::any::type(p_context);
  if ( v11 == std::type_info::hash_code(v12) )
  {
    std::shared_ptr<ModifyPlayerStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112),
      0LL);
    std::any_cast<std::shared_ptr<ModifyPlayerStatusContext>>((std::any *)&operation_name);
    std::shared_ptr<ModifyPlayerStatusContext>::operator=(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112),
      (std::shared_ptr<ModifyPlayerStatusContext> *)&operation_name);
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)&operation_name);
    if ( std::operator==<ModifyPlayerStatusContext>(0LL, (const std::shared_ptr<ModifyPlayerStatusContext> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncModifyPlayerStatus",
        524);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[29])"context_ptr is nullptr, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v3 + 48) = -1;
      v16 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v18 = (__int64)std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      last_login_rand = *(_QWORD *)(v18 + 8);
      v19 = (__int64)std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)(v19 + 16) >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      cur_login_rand = *(_QWORD *)(v19 + 16);
      proto::PlayerStatusRedisData::PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v3 + 144));
      proto::PlayerStatusRedisData::set_status((proto::PlayerStatusRedisData *const)(v3 + 144), PLAYER_STATUS_ONLINE);
      v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      ServiceAppId = common::minet::Packet::getServiceAppId(v20, 3u);
      proto::PlayerStatusRedisData::set_gameserver_id((proto::PlayerStatusRedisData *const)(v3 + 144), ServiceAppId);
      proto::PlayerStatusRedisData::set_login_rand((proto::PlayerStatusRedisData *const)(v3 + 144), cur_login_rand);
      if ( RedisOpPlayerStatus::compareAndModifyPlayerStatus(
             *(_DWORD *)(v3 + 64),
             last_login_rand,
             (const proto::PlayerStatusRedisData *)(v3 + 144)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncModifyPlayerStatus",
          537);
        v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[41])"compareAndModifyPlayerStatus fails, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v3 + 48) = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/handler/login_handler.cpp",
          "asyncModifyPlayerStatus",
          541);
        v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[21])"[LOGIN] modify uid: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 64));
        v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" login_rand: ");
        val = proto::PlayerStatusRedisData::login_rand((const proto::PlayerStatusRedisData *const)(v3 + 144));
        v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v25, &val);
        v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" game_id: ");
        v30 = proto::PlayerStatusRedisData::gameserver_id((const proto::PlayerStatusRedisData *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &v30);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v3 + 48) = 0;
      }
      v16 = *(_DWORD *)(v3 + 48);
      proto::PlayerStatusRedisData::~PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v3 + 144));
    }
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "asyncModifyPlayerStatus",
      521);
    v13 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
    v14 = std::any::type(p_context);
    v15 = std::type_info::name(v14);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC9220, v15, v13);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v16 = -1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 224));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v3 + 80));
  result = v16;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 549: range 00000000160094BA-000000001600A343
__int64 __fastcall LoginHandler::asyncModifyPlayerStatusCallback(
        LoginHandler *const this,
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *p_packet_ptr,
        std::any *p_,
        int32_t retcode)
{
  unsigned int v4; // r14d
  unsigned __int64 p_M_single_bucket; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  TracingMgr *v8; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const jaegertracing::SpanContext *v10; // r15
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v11; // rax
  opentracing::v3::string_view v12; // rdx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GameserverService *v14; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerSessionProxy *v17; // rdi
  uint32_t ThreadIndex; // r15d
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdi
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  PlayerSessionProxy *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r15
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  const std::string *v32; // rax
  GameserverService *v33; // rax
  unsigned int GameThreadLocal; // eax
  bool v35; // r15
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  const proto::PlayerLoginReq *LoginReq; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint64_t CurLoginRand; // rax
  common::minet::Packet *v43; // r15
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  const proto::PacketHead *LoginPacketHead; // rax
  GameserverService *v46; // r15
  unsigned __int64 v47; // rdx
  GameserverService *v48; // r15
  NetworkMgrBase *v49; // r15
  uint32_t v50; // r8d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  PlayerSessionProxy *v55; // rax
  int v56; // r15d
  unsigned int val; // [rsp+3Ch] [rbp-4C4h] BYREF
  PlayerMgr operation_name[2]; // [rsp+40h] [rbp-4C0h] BYREF

  p_M_single_bucket = (unsigned __int64)&operation_name[0].online_player_map_._M_h._M_single_bucket;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1120LL);
    if ( v6 )
      p_M_single_bucket = v6;
  }
  *(_QWORD *)p_M_single_bucket = 1102416563LL;
  *(_QWORD *)(p_M_single_bucket + 8) = "10 48 4 7 ret:550 64 4 7 uid:554 80 4 11 retcode:548 96 8 17 root_span_ctx:551 12"
                                       "8 8 18 cur_login_rand:629 160 16 15 session_ptr:557 192 16 20 login_packet_ptr:60"
                                       "6 224 56 14 span_proxy:552 320 280 13 login_req:603 672 376 13 login_rsp:637";
  *(_QWORD *)(p_M_single_bucket + 16) = LoginHandler::asyncModifyPlayerStatusCallback;
  v7 = (_DWORD *)(p_M_single_bucket >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862738] = -234881024;
  v7[536862739] = -218959118;
  v7[536862740] = -218959118;
  v7[536862752] = -218103808;
  v7[536862753] = -202116109;
  v7[536862754] = -202116109;
  *(_DWORD *)(p_M_single_bucket + 80) = retcode;
  *(_DWORD *)(p_M_single_bucket + 48) = 0;
  v8 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](
    (std::string *)&operation_name[0].online_player_map_._M_h._M_before_begin,
    v9);
  TracingMgr::extract(v8, (const std::string *)&operation_name[0].online_player_map_._M_h._M_before_begin);
  std::string::~string(&operation_name[0].online_player_map_._M_h._M_before_begin);
  v10 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(p_M_single_bucket + 96));
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)operation_name,
    "asyncModifyPlayerStatusCallback");
  v11 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  v12.length_ = operation_name[0].online_player_map_._M_h._M_bucket_count;
  v12.data_ = (const char *)operation_name[0].online_player_map_._M_h._M_buckets;
  SpanProxy::SpanProxy(
    (SpanProxy *const)(p_M_single_bucket + 224),
    v11,
    v12,
    v10,
    0,
    (const int *)(p_M_single_bucket + 48));
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
  *(_DWORD *)(p_M_single_bucket + 64) = common::minet::Packet::getUserId(v13);
  v14 = ServiceBox::findService<GameserverService>();
  GameserverService::findPlayerSession(
    (GameserverService *const)(p_M_single_bucket + 160),
    (__int64)v14,
    *(_DWORD *)(p_M_single_bucket + 64));
  if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(p_M_single_bucket + 160))
    || (v15 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160)),
        !PlayerSessionProxy::isConnected(v15)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "asyncModifyPlayerStatusCallback",
      560);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
      (const char (*)[38])"session_ptr is null or not connected!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
    *(_DWORD *)(p_M_single_bucket + 48) = -1;
    v4 = *(_DWORD *)(p_M_single_bucket + 48);
  }
  else
  {
    v17 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
    ThreadIndex = PlayerSessionProxy::getThreadIndex(v17);
    v19 = ZTWN11ThreadLocal17work_thread_indexE(v17, p_M_single_bucket + 160);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    if ( ThreadIndex == *(_DWORD *)v19 )
    {
      if ( *(_DWORD *)(p_M_single_bucket + 80) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncModifyPlayerStatusCallback",
          575);
        v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                (const char (*)[7])" uid: ");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(p_M_single_bucket + 64));
        v29 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v28,
                (const char (*)[47])", compareAndModifyPlayerStatus fails, retcode:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(p_M_single_bucket + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
      }
      else if ( !LoginHandler::isFromSameClientSession(
                   this,
                   (const PlayerSessionProxyPtr *)(p_M_single_bucket + 160),
                   (const common::minet::PacketPtr *)p_packet_ptr) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncModifyPlayerStatusCallback",
          583);
        v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                (const char (*)[42])"[LOGIN] redis_rsp not from same session: ");
        v31 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
        v32 = PlayerSessionProxy::getFlagStr[abi:cxx11](v31);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, v32);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
        *(_DWORD *)(p_M_single_bucket + 80) = -1;
      }
      else
      {
        v33 = ServiceBox::findService<GameserverService>();
        GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v33);
        PlayerMgr::findSaveWaitPlayer(operation_name, GameThreadLocal + 16);
        v35 = std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)operation_name, 0LL);
        std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)operation_name);
        if ( v35 )
        {
          v36 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
          if ( LoginHandler::loadPlayerDataFromSaveWait(this, v36) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "asyncModifyPlayerStatusCallback",
              592);
            v37 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                    (const char (*)[47])"[LOGIN] loadPlayerDataFromSaveWait failed,uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v37,
              (const unsigned int *)(p_M_single_bucket + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
            *(_DWORD *)(p_M_single_bucket + 80) = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/login_handler.cpp",
              "asyncModifyPlayerStatusCallback",
              597);
            v38 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                    (const char (*)[45])"[LOGIN] load player data from save wait,uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v38,
              (const unsigned int *)(p_M_single_bucket + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
          }
        }
        else
        {
          v39 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
          LoginReq = PlayerSessionProxy::getLoginReq(v39);
          proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(p_M_single_bucket + 320), LoginReq);
          v41 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
          CurLoginRand = PlayerSessionProxy::getCurLoginRand(v41);
          proto::PlayerLoginReq::set_login_rand((proto::PlayerLoginReq *const)(p_M_single_bucket + 320), CurLoginRand);
          common::minet::PacketUtils::createPacket<proto::PlayerLoginReq>((const proto::PlayerLoginReq *)(p_M_single_bucket + 192));
          if ( std::operator==<common::minet::Packet>(
                 0LL,
                 (const std::shared_ptr<common::minet::Packet> *)(p_M_single_bucket + 192)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "asyncModifyPlayerStatusCallback",
              609);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
              (const char (*)[21])"create packet failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
            *(_DWORD *)(p_M_single_bucket + 80) = -1;
          }
          else
          {
            v43 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 192));
            v44 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
            LoginPacketHead = PlayerSessionProxy::getLoginPacketHead(v44);
            if ( common::minet::Packet::copyHead(v43, LoginPacketHead) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/login_handler.cpp",
                "asyncModifyPlayerStatusCallback",
                615);
              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                (const char (*)[15])"copyHead fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
              *(_DWORD *)(p_M_single_bucket + 80) = -1;
            }
            else
            {
              v46 = ServiceBox::findService<GameserverService>();
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(p_M_single_bucket + 192));
              ServiceBase::setPacketSource(v46, (common::minet::PacketPtr)__PAIR128__(v47, operation_name));
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)operation_name);
              v48 = ServiceBox::findService<GameserverService>();
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(p_M_single_bucket + 192));
              GameserverService::setPacketGameThreadIndex(v48, (common::minet::PacketPtr *)operation_name);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)operation_name);
              v49 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(p_M_single_bucket + 192));
              LOBYTE(v49) = NetworkMgrBase::sendPacketToTargetService(
                              v49,
                              (common::minet::PacketPtr)__PAIR128__(5LL, operation_name),
                              0,
                              v50) != 0;
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)operation_name);
              if ( (_BYTE)v49 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/login_handler.cpp",
                  "asyncModifyPlayerStatusCallback",
                  624);
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                  (const char (*)[33])"sendPacketToTargetService failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
                *(_DWORD *)(p_M_single_bucket + 80) = -1;
              }
              else
              {
                v51 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
                *(_QWORD *)(p_M_single_bucket + 128) = PlayerSessionProxy::getCurLoginRand(v51);
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
                  &common::milog::MiLogDefault::default_log_obj_,
                  5u,
                  "./src/handler/login_handler.cpp",
                  "asyncModifyPlayerStatusCallback",
                  630);
                v52 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
                        (const char (*)[29])" send LoginReq to node uid: ");
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v52,
                        (const unsigned int *)(p_M_single_bucket + 64));
                v54 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v53,
                        (const char (*)[18])" cur_login_rand: ");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v54,
                  (const unsigned __int64 *)(p_M_single_bucket + 128));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
              }
            }
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(p_M_single_bucket + 192));
          proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(p_M_single_bucket + 320));
        }
      }
      if ( !*(_DWORD *)(p_M_single_bucket + 80) )
        goto LABEL_35;
      proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(p_M_single_bucket + 672));
      proto::PlayerLoginRsp::set_retcode(
        (proto::PlayerLoginRsp *const)(p_M_single_bucket + 672),
        *(_DWORD *)(p_M_single_bucket + 80));
      v55 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
      if ( PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>(
             v55,
             (const proto::PlayerLoginRsp *)(p_M_single_bucket + 672),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncModifyPlayerStatusCallback",
          641);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
          (const char (*)[30])"session_ptr->sendProto failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
        v4 = -1;
        v56 = 0;
      }
      else
      {
        v56 = 1;
      }
      proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(p_M_single_bucket + 672));
      if ( v56 == 1 )
      {
LABEL_35:
        *(_DWORD *)(p_M_single_bucket + 48) = *(_DWORD *)(p_M_single_bucket + 80);
        v4 = *(_DWORD *)(p_M_single_bucket + 48);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&operation_name[0].online_player_map_._M_h._M_before_begin,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncModifyPlayerStatusCallback",
        566);
      v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin,
              (const char (*)[42])"another thread create session already,uid");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              (const unsigned int *)(p_M_single_bucket + 64));
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" this thread:");
      v23 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v21, " this thread:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
      v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])" another thread:");
      v26 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 160));
      val = PlayerSessionProxy::getThreadIndex(v26);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name[0].online_player_map_._M_h._M_before_begin);
      *(_DWORD *)(p_M_single_bucket + 48) = -1;
      v4 = *(_DWORD *)(p_M_single_bucket + 48);
    }
  }
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(p_M_single_bucket + 160));
  SpanProxy::~SpanProxy((SpanProxy *const)(p_M_single_bucket + 224));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(p_M_single_bucket + 96));
  if ( &operation_name[0].online_player_map_._M_h._M_single_bucket == (std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<Player> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<Player> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__bucket_type *)p_M_single_bucket )
  {
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8088) = 0;
  }
  else
  {
    *(_QWORD *)p_M_single_bucket = 1172321806LL;
    __asan_stack_free_5(p_M_single_bucket, 1120LL, &operation_name[0].online_player_map_._M_h._M_single_bucket);
  }
  return v4;
};

// Line 649: range 000000001600A344-000000001600B1C6
void __cdecl fillLoginRsp(bool is_relogin, PlayerPtr *p_player_ptr, uint32_t platform, proto::PlayerLoginRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_ability_use_hash; // rax
  google::protobuf::RepeatedPtrField<proto::ShortAbilityHashPair> *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const std::vector<std::pair<int,int>> *AbilityHashVec; // rax
  int v13; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::pair<int,int> *v15; // rax
  std::pair<int,int> *v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  proto::ResVersionConfig *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  proto::ResVersionConfig *res_version_config; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  unsigned __int64 v27; // rax
  _BYTE *v28; // rdx
  char v29; // al
  const std::string *v30; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  bool *p_is_sec_channel_open; // rax
  Player *v36; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  const std::string *v39; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  Player *v42; // rax
  PlayerBasicComp *v43; // rax
  double ClientTotalTickTime; // xmm0_8
  common::milog::MiLogStream *v45; // r14
  int val; // [rsp+20h] [rbp-250h] BYREF
  int32_t ability_hash_code; // [rsp+24h] [rbp-24Ch]
  std::vector<std::pair<int,int>>::const_iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::vector<std::pair<int,int>>::const_iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  const std::vector<std::pair<int,int>> *__for_range; // [rsp+38h] [rbp-238h]
  const proto::ResVersionConfig *res_config_ptr; // [rsp+40h] [rbp-230h]
  const proto::ResVersionConfig *next_res_config_ptr; // [rsp+48h] [rbp-228h]
  const std::string *region_name; // [rsp+50h] [rbp-220h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+58h] [rbp-218h]
  std::tuple_element<0,std::pair<int,int> >::type *ability_name_hash; // [rsp+60h] [rbp-210h]
  std::tuple_element<1,std::pair<int,int> >::type *ability_config_hash; // [rsp+68h] [rbp-208h]
  proto::ShortAbilityHashPair *short_ability_hash_pair; // [rsp+70h] [rbp-200h]
  std::pair<int,int> __in; // [rsp+78h] [rbp-1F8h] BYREF
  std::shared_ptr<Config> v61; // [rsp+80h] [rbp-1F0h] BYREF
  std::shared_ptr<Config> v62; // [rsp+90h] [rbp-1E0h] BYREF
  std::shared_ptr<Config> v63; // [rsp+A0h] [rbp-1D0h] BYREF
  std::shared_ptr<Config> v64; // [rsp+B0h] [rbp-1C0h] BYREF
  std::string value; // [rsp+C0h] [rbp-1B0h] BYREF
  char v66[400]; // [rsp+E0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 client_version:670 48 4 26 client_silence_version:670 64 16 14 config_ptr:653 96 32 14"
                        " client_md5:671 160 32 22 client_silence_md5:671 224 32 16 resource_url:697 288 32 15 next_branch:702";
  *(_QWORD *)(v4 + 16) = fillLoginRsp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -202116109;
  if ( !std::operator==<Player>(p_player_ptr, 0LL) )
  {
    proto::PlayerLoginRsp::set_retcode(rsp_0, 0);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v61);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
    ability_hash_code = JsonConfigMgr::getAbilityHashCode(&v7->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v61);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_is_ability_use_hash = &v8->is_ability_use_hash;
    if ( *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_ability_use_hash & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_ability_use_hash);
    }
    proto::PlayerLoginRsp::set_is_use_ability_hash(rsp_0, v8->is_ability_use_hash);
    proto::PlayerLoginRsp::set_ability_hash_code(rsp_0, ability_hash_code);
    v10 = proto::PlayerLoginRsp::mutable_short_ability_hash_map(rsp_0);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v64);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
    AbilityHashVec = JsonConfigMgr::getAbilityHashVec(&v11->design_config.json_config_mgr);
    v13 = std::vector<std::pair<int,int>>::size(AbilityHashVec);
    google::protobuf::RepeatedPtrField<proto::ShortAbilityHashPair>::Reserve(v10, v13);
    std::shared_ptr<Config>::~shared_ptr(&v64);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v62);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
    __for_range = JsonConfigMgr::getAbilityHashVec(&v14->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v62);
    __for_begin._M_current = std::vector<std::pair<int,int>>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::pair<int,int>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<int,int> const*,std::vector<std::pair<int,int>>>(&__for_begin, &__for_end) )
    {
      v15 = (std::pair<int,int> *)__gnu_cxx::__normal_iterator<std::pair<int,int> const*,std::vector<std::pair<int,int>>>::operator*(&__for_begin);
      v16 = v15;
      if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v15, 8LL);
      }
      __in = *v16;
      ability_name_hash = std::get<0ul,int,int>(&__in);
      ability_config_hash = std::get<1ul,int,int>(&__in);
      short_ability_hash_pair = proto::PlayerLoginRsp::add_short_ability_hash_map(rsp_0);
      if ( *(_BYTE *)(((unsigned __int64)ability_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ability_name_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_name_hash >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ShortAbilityHashPair::set_ability_name_hash(short_ability_hash_pair, *ability_name_hash);
      if ( *(_BYTE *)(((unsigned __int64)ability_config_hash >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ability_config_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_config_hash >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ShortAbilityHashPair::set_ability_config_hash(short_ability_hash_pair, *ability_config_hash);
      __gnu_cxx::__normal_iterator<std::pair<int,int> const*,std::vector<std::pair<int,int>>>::operator++(&__for_begin);
    }
    proto::PlayerLoginRsp::set_is_relogin(rsp_0, is_relogin);
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    std::string::basic_string(v4 + 96);
    std::string::basic_string(v4 + 160);
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    ClientVersionConfig::findClientVersionMd5(
      &v17->design_config.version_config,
      platform,
      (uint32_t *)(v4 + 32),
      (std::string *)(v4 + 96));
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    ClientVersionConfig::findClientSilenceVersionMd5(
      &v18->design_config.version_config,
      platform,
      (uint32_t *)(v4 + 48),
      (std::string *)(v4 + 160));
    proto::PlayerLoginRsp::set_client_data_version(rsp_0, *(_DWORD *)(v4 + 32));
    proto::PlayerLoginRsp::set_client_md5(rsp_0, (const std::string *)(v4 + 96));
    proto::PlayerLoginRsp::set_client_silence_data_version(rsp_0, *(_DWORD *)(v4 + 48));
    proto::PlayerLoginRsp::set_client_silence_md5(rsp_0, (const std::string *)(v4 + 160));
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    ClientVersionConfig::getClientVersionSuffix[abi:cxx11](&value, &v19->design_config.version_config);
    proto::PlayerLoginRsp::set_client_version_suffix(rsp_0, &value);
    std::string::~string(&value);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    ClientVersionConfig::getClientSilenceVersionSuffix[abi:cxx11](&value, &v20->design_config.version_config);
    proto::PlayerLoginRsp::set_client_silence_version_suffix(rsp_0, &value);
    std::string::~string(&value);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    res_config_ptr = ClientVersionConfig::findResVersionConfig(&v21->design_config.version_config, platform);
    if ( res_config_ptr )
    {
      v22 = proto::PlayerLoginRsp::mutable_res_version_config(rsp_0);
      proto::ResVersionConfig::operator=(v22, res_config_ptr);
    }
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    next_res_config_ptr = ClientVersionConfig::findNextResVersionConfig(&v23->design_config.version_config, platform);
    if ( next_res_config_ptr )
    {
      res_version_config = proto::PlayerLoginRsp::mutable_next_res_version_config(rsp_0);
      proto::ResVersionConfig::operator=(res_version_config, next_res_config_ptr);
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      region_name = ConfigBase::getRegionName[abi:cxx11](v25);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v64);
      v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
      region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                            &v26->design_config.db_config_mgr.db_deploy_config_mgr,
                            region_name);
      std::shared_ptr<Config>::~shared_ptr(&v64);
      if ( region_config_ptr )
      {
        std::string::basic_string(v4 + 224, &region_config_ptr->resource_url);
        if ( (unsigned __int8)std::string::empty(v4 + 224) == 1 )
          goto LABEL_25;
        v27 = std::string::back(v4 + 224);
        v28 = (_BYTE *)v27;
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0 && (char)(v27 & 7) >= *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          __asan_report_load1(v27);
        if ( *v28 == 47 )
LABEL_25:
          v29 = 0;
        else
          v29 = 1;
        if ( v29 )
          std::string::operator+=(v4 + 224, "/");
        v30 = proto::ResVersionConfig::branch[abi:cxx11](next_res_config_ptr);
        std::string::basic_string(v4 + 288, v30);
        if ( (unsigned __int8)std::string::empty(v4 + 288) != 1 )
        {
          std::operator+<char>(&value, (const std::string *)(v4 + 224), (const std::string *)(v4 + 288));
          proto::PlayerLoginRsp::set_next_resource_url(rsp_0, &value);
          std::string::~string(&value);
        }
        std::string::~string((void *)(v4 + 288));
        std::string::~string((void *)(v4 + 224));
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v64);
    v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
    Config::findRegionGameBiz[abi:cxx11](&value, v31);
    proto::PlayerLoginRsp::set_game_biz(rsp_0, &value);
    std::string::~string(&value);
    std::shared_ptr<Config>::~shared_ptr(&v64);
    v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Player::getSecurityChannelStr[abi:cxx11](&value, v32);
    proto::PlayerLoginRsp::set_sc_info(rsp_0, &value);
    std::string::~string(&value);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
    if ( *(_BYTE *)(((unsigned __int64)&v33->is_audit >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v33 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v33->is_audit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&v33->is_audit);
    }
    proto::PlayerLoginRsp::set_is_audit(rsp_0, v33->is_audit);
    std::shared_ptr<Config>::~shared_ptr(&v63);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v64);
    v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
    p_is_sec_channel_open = &v34->security_config.is_sec_channel_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_sec_channel_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_sec_channel_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_sec_channel_open >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_sec_channel_open);
    }
    proto::PlayerLoginRsp::set_is_sc_open(rsp_0, v34->security_config.is_sec_channel_open);
    std::shared_ptr<Config>::~shared_ptr(&v64);
    v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    BasicComp = Player::getBasicComp(v36);
    PlayerBasicComp::getRegisterCps[abi:cxx11](&value, BasicComp);
    proto::PlayerLoginRsp::set_register_cps(rsp_0, &value);
    std::string::~string(&value);
    v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v39 = Player::getCountryCode[abi:cxx11](v38);
    proto::PlayerLoginRsp::set_country_code(rsp_0, v39);
    v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Player::getBirthday[abi:cxx11](&value, v40);
    proto::PlayerLoginRsp::set_birthday(rsp_0, &value);
    std::string::~string(&value);
    v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(char *)(((unsigned __int64)&v41->security_config.is_enable_client_hash_debug >> 3) + 0x7FFF8000) < 0 )
      v41 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v41->security_config.is_enable_client_hash_debug);
    proto::PlayerLoginRsp::set_is_enable_client_hash_debug(rsp_0, v41->security_config.is_enable_client_hash_debug);
    v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v43 = Player::getBasicComp(v42);
    ClientTotalTickTime = PlayerBasicComp::getClientTotalTickTime(v43);
    proto::PlayerLoginRsp::set_total_tick_time(rsp_0, ClientTotalTickTime);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&value,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/login_handler.cpp",
      "fillLoginRsp",
      722);
    v45 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
            (common::milog::MiLogStream *const)&value,
            (const char (*)[10])off_25AC9920);
    val = google::protobuf::MessageLite::ByteSize(rsp_0);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v45, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
    std::string::~string((void *)(v4 + 160));
    std::string::~string((void *)(v4 + 96));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  }
  if ( v66 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 726: range 000000001600B1C7-000000001600B38F
void __cdecl sendLoginRspToPlayer(PlayerPtr *p_player_ptr, uint32_t platform, const jaegertracing::SpanContext *sc_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  Player *v7; // r14
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 client_rsp_ptr:729";
  *(_QWORD *)(v3 + 16) = sendLoginRspToPlayer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::tools::perf::make_shared<proto::PlayerLoginRsp>();
    v6 = std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::shared_ptr<Player>::shared_ptr(&v9, p_player_ptr);
    fillLoginRsp(0, &v9, platform, v6);
    std::shared_ptr<Player>::~shared_ptr(&v9);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerLoginRsp>((const std::shared_ptr<proto::PlayerLoginRsp> *)&v9);
    Player::sendMessage(v7, (common::minet::ConstMessagePtr *)&v9, sc_ptr);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v9);
    std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)(v3 + 32));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 737: range 000000001600B390-000000001600BE3D
int32_t __cdecl LoginHandler::disconnectClientAndLogin(
        LoginHandler *const this,
        PlayerPtr *p_player_ptr,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::PlayerLoginReq *req)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rax
  int32_t v9; // r14d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GameserverService *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int Uid; // eax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  GameserverService *v27; // r14
  PlayerSessionProxy *v28; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint64_t LoginRand; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *v33; // r14
  PlayerSessionProxy *v34; // r14
  Player *v35; // r14
  uint32_t v36; // r15d
  uint32_t v37; // eax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  const std::string *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  const proto::PlayerLoginReq *LoginReq; // rax
  const std::string *v53; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  int32_t result; // eax
  bool is_client_relogin; // [rsp+33h] [rbp-13Dh]
  unsigned int val; // [rsp+34h] [rbp-13Ch] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-138h] BYREF
  std::shared_ptr<PlayerSessionProxy> __b; // [rsp+40h] [rbp-130h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v63; // [rsp+60h] [rbp-110h] BYREF
  char v64[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 ret:738 64 16 19 cur_session_ptr:745 96 56 14 span_proxy:739";
  *(_QWORD *)(v4 + 16) = LoginHandler::disconnectClientAndLogin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "disconnectClientAndLogin");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 96), v7, operation_name, 0LL, 0, (const int *)(v4 + 48));
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) || std::operator==<Player>(0LL, p_player_ptr) )
  {
    *(_DWORD *)(v4 + 48) = -1;
    v9 = *(_DWORD *)(v4 + 48);
    goto LABEL_32;
  }
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  Player::getSession((const Player *const)(v4 + 64));
  if ( !std::operator!=<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64), 0LL)
    || (v10 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
        !PlayerSessionProxy::isConnected(v10)) )
  {
    v20 = ServiceBox::findService<GameserverService>();
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v21);
    GameserverService::findPlayerSession((GameserverService *const)&operation_name, (__int64)v20, Uid);
    std::shared_ptr<PlayerSessionProxy>::operator=(
      (std::shared_ptr<PlayerSessionProxy> *const)(v4 + 64),
      (std::shared_ptr<PlayerSessionProxy> *)&operation_name);
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&operation_name);
LABEL_19:
    if ( std::operator==<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64), 0LL)
      || (v23 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
          PlayerSessionProxy::isConnected(v23)) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "disconnectClientAndLogin",
        777);
      v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v63,
              (const char (*)[31])"cur_session_ptr not right,uid:");
      v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      val = Player::getUid(v26);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream(&v63);
      *(_DWORD *)(v4 + 48) = -1;
      v9 = *(_DWORD *)(v4 + 48);
    }
    else
    {
      v27 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<PlayerSessionProxy>::shared_ptr(
        (std::shared_ptr<PlayerSessionProxy> *const)&operation_name,
        (const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64));
      LOBYTE(v27) = GameserverService::bindPlayerSession(
                      v27,
                      (PlayerSessionProxyPtr *)&operation_name,
                      p_packet_ptr,
                      req) != 0;
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&operation_name);
      if ( (_BYTE)v27 )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "disconnectClientAndLogin",
          783);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v63,
          (const char (*)[26])" bindPlayerSession failed");
        common::milog::MiLogStream::~MiLogStream(&v63);
        *(_DWORD *)(v4 + 48) = -1;
        v9 = *(_DWORD *)(v4 + 48);
      }
      else
      {
        v28 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        LoginRand = Player::getLoginRand(v29);
        PlayerSessionProxy::setCurLoginRand(v28, LoginRand);
        v31 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        LODWORD(v28) = PlayerSessionProxy::getClientToken(v31);
        v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        is_client_relogin = (_DWORD)v28 == Player::getClientToken(v32);
        v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        std::shared_ptr<PlayerSessionProxy>::shared_ptr(
          (std::shared_ptr<PlayerSessionProxy> *const)&operation_name,
          (const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64));
        Player::setSession(v33, (PlayerSessionProxyPtr *)&operation_name, 1);
        std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&operation_name);
        v34 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&operation_name, p_player_ptr);
        PlayerSessionProxy::setPlayer(v34, (PlayerPtr *)&operation_name);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&operation_name);
        v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        v36 = proto::PlayerLoginReq::target_home_owner_uid(req);
        v37 = proto::PlayerLoginReq::target_uid(req);
        if ( Player::login(v35, 0, 1, v37, v36, is_client_relogin) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "disconnectClientAndLogin",
            800);
          v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v63,
                  (const char (*)[13])" login fails");
          v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          operator<<(v38, v39);
          common::milog::MiLogStream::~MiLogStream(&v63);
          *(_DWORD *)(v4 + 48) = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/handler/login_handler.cpp",
            "disconnectClientAndLogin",
            804);
          v40 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v63,
                  (const char (*)[42])"[LOGIN] disconnectClientAndLogin OK uid: ");
          v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          val = Player::getUid(v41);
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
          v43 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v42,
                  (const char (*)[21])" player login_rand: ");
          v44 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          v60 = Player::getLoginRand(v44);
          v45 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v43, &v60);
          v46 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v45,
                  (const char (*)[19])" new gatesession: ");
          v47 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v48 = PlayerSessionProxy::getFlagStr[abi:cxx11](v47);
          v49 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, v48);
          v50 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v49,
                  (const char (*)[14])" new device: ");
          v51 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          LoginReq = PlayerSessionProxy::getLoginReq(v51);
          v53 = proto::PlayerLoginReq::device_name[abi:cxx11](LoginReq);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, v53);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v54 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          LODWORD(v50) = PlayerSessionProxy::getPlatformType(v54);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&operation_name, p_player_ptr);
          sendLoginRspToPlayer((PlayerPtr *)&operation_name, (uint32_t)v50, 0LL);
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&operation_name);
          *(_DWORD *)(v4 + 48) = 0;
        }
        v9 = *(_DWORD *)(v4 + 48);
      }
    }
    goto LABEL_31;
  }
  v12 = ServiceBox::findService<GameserverService>();
  v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  v14 = Player::getUid(v13);
  GameserverService::findPlayerSession((GameserverService *const)&__b, (__int64)v12, v14);
  LOBYTE(v12) = std::operator!=<PlayerSessionProxy,PlayerSessionProxy>(
                  (const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64),
                  &__b);
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr(&__b);
  if ( !(_BYTE)v12 )
  {
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Player::disconnectSession(v17, 4u);
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/login_handler.cpp",
      "disconnectClientAndLogin",
      768);
    v18 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v63,
            (const char (*)[52])"disconnectSession proto::ENET_SERVER_RELOGIN, uid: ");
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    val = Player::getUid(v19);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    common::milog::MiLogStream::~MiLogStream(&v63);
    goto LABEL_19;
  }
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/handler/login_handler.cpp",
    "disconnectClientAndLogin",
    763);
  v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v63,
          (const char (*)[22])"session not same,uid:");
  v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  val = Player::getUid(v16);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v63);
  *(_DWORD *)(v4 + 48) = -1;
  v9 = *(_DWORD *)(v4 + 48);
LABEL_31:
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v4 + 64));
LABEL_32:
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 96));
  result = v9;
  if ( v64 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 817: range 000000001600BE3E-000000001600C304
int32_t __cdecl LoginHandler::forceInterruptLogin(LoginHandler *const this, PlayerSessionProxyPtr *p_session_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v7; // r14d
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const std::string *v18; // rax
  PlayerSessionProxy *v19; // r14
  const jaegertracing::SpanContext *v20; // rax
  GameserverService *v21; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-2E8h] BYREF
  unsigned int GateserverId; // [rsp+1Ch] [rbp-2E4h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+20h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-2D0h] BYREF
  char v27[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 ret:823 64 8 24 session_span_ctx_ptr:824 96 56 14 span_proxy:825 192 376 7 rsp:832";
  *(_QWORD *)(v2 + 16) = LoginHandler::forceInterruptLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  if ( std::operator==<PlayerSessionProxy>(0LL, p_session_ptr)
    || (v5 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr),
        !PlayerSessionProxy::isConnected(v5)) )
  {
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 48) = 0;
    std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    PlayerSessionProxy::getSpanContext((PlayerSessionProxy *const)(v2 + 64));
    v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
    opentracing::v3::string_view::string_view(&operation_name, "forceInterruptLogin");
    v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
    SpanProxy::SpanProxy((SpanProxy *const)(v2 + 96), v9, operation_name, v8, 0, (const int *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/login_handler.cpp",
      "forceInterruptLogin",
      827);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v26,
            (const char (*)[34])"[LOGIN] forceInterruptLogin uid: ");
    v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    val = PlayerSessionProxy::getUid(v11);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" gate_id: ");
    v14 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    GateserverId = PlayerSessionProxy::getGateserverId(v14);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &GateserverId);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" gate_session: ");
    v17 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    v18 = PlayerSessionProxy::getFlagStr[abi:cxx11](v17);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v18);
    common::milog::MiLogStream::~MiLogStream(&v26);
    proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 192));
    proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v2 + 192), 19);
    v19 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    v20 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
    PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>(v19, (const proto::PlayerLoginRsp *)(v2 + 192), v20);
    v21 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<PlayerSessionProxy>::shared_ptr(
      (std::shared_ptr<PlayerSessionProxy> *const)&operation_name,
      p_session_ptr);
    GameserverService::disconnectPlayerSession(v21, (PlayerSessionProxyPtr *)&operation_name);
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&operation_name);
    *(_DWORD *)(v2 + 48) = 0;
    v7 = *(_DWORD *)(v2 + 48);
    proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 192));
    SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 96));
    std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  }
  result = v7;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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
  }
  return result;
};

// Line 842: range 00000000160564EA-00000000160565FF
bool __cdecl LoginHandler::isFromSameClientSession(
        LoginHandler *const this,
        const PlayerSessionProxyPtr *session_ptr,
        const common::minet::PacketPtr *packet_ptr)
{
  PlayerSessionProxy *v3; // rdi
  uint32_t ThreadIndex; // ebx
  unsigned __int64 v5; // rdx
  common::minet::Packet *v6; // rax
  uint32_t ServiceAppId; // ebx
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t UserSessionId; // ebx
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax

  if ( !std::operator!=<PlayerSessionProxy>(session_ptr, 0LL)
    || !std::operator!=<common::minet::Packet>(packet_ptr, 0LL) )
  {
    return 0;
  }
  v3 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
  ThreadIndex = PlayerSessionProxy::getThreadIndex(v3);
  v5 = ZTWN11ThreadLocal17work_thread_indexE(v3, 0LL);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  if ( ThreadIndex == *(_DWORD *)v5
    && (v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr),
        ServiceAppId = common::minet::Packet::getServiceAppId(v6, 2u),
        v8 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr),
        ServiceAppId == PlayerSessionProxy::getGateserverId(v8))
    && (v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr),
        UserSessionId = common::minet::Packet::getUserSessionId(v9),
        v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr),
        UserSessionId == PlayerSessionProxy::getGateserverSessionId(v11)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 851: range 000000001600C306-000000001600C94B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl LoginHandler::cleanPlayerStatus(
        common::minet::PacketPtr *p_packet_ptr,
        PlayerSaveWaitDataPtr *p_save_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t M_invoker_high; // r14d
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  GameThreadLocal *GameThreadLocal; // rax
  common::milog::MiLogStream *v9; // rax
  GameserverService *v10; // rax
  GameserverService *v11; // r14
  __int64 v12; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GameserverService *v16; // r14
  const std::_Placeholder<2> *v17; // r9
  const std::_Placeholder<2> *v18; // r8
  int32_t result; // eax
  AsyncTaskFunc p_save_ptra; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  AsyncTaskCallbackFunc v21; // [rsp+20h] [rbp-140h] BYREF
  std::shared_ptr<common::minet::Packet> v22; // [rsp+40h] [rbp-120h] BYREF
  std::any context; // [rsp+50h] [rbp-110h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v24; // [rsp+60h] [rbp-100h] BYREF
  std::string packet_ptr; // [rsp+80h] [rbp-E0h] BYREF
  ModifyPlayerStatusContext __args_0; // [rsp+A0h] [rbp-C0h] BYREF
  char v27[144]; // [rsp+D0h] [rbp-90h] BYREF

  *(_QWORD *)&p_save_ptra._M_functor._M_pod_data[8] = p_packet_ptr;
  p_save_ptra._M_functor._M_unused._M_object = p_save_ptr;
  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:858 64 16 15 context_ptr:870";
  *(_QWORD *)(v2 + 16) = LoginHandler::cleanPlayerStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<PlayerSaveWaitData>(
         (const std::shared_ptr<PlayerSaveWaitData> *)p_save_ptra._M_functor._M_unused._M_object,
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "cleanPlayerStatus",
      854);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&packet_ptr,
      (const char (*)[17])"save ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    M_invoker_high = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptra._M_functor._M_unused._M_object);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = v6->uid;
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = GameserverService::getGameThreadLocal(v7);
    PlayerMgr::delSaveWaitPlayer(&GameThreadLocal->player_mgr, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/handler/login_handler.cpp",
      "cleanPlayerStatus",
      862);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&packet_ptr,
           (const char (*)[32])"[LOGOUT] delSaveWaitPlayer uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    v10 = ServiceBox::findService<GameserverService>();
    GameserverService::removePlayerSession(v10, *(_DWORD *)(v2 + 48));
    v11 = ServiceBox::findService<GameserverService>();
    std::allocator<char>::allocator((char *)&p_save_ptra._M_invoker + 3);
    std::string::basic_string<std::allocator<char>>(
      &packet_ptr,
      "ZZ",
      (const std::allocator<char> *)&p_save_ptra._M_invoker + 3);
    GameserverService::updatePlayerOnlineStatus(
      v11,
      *(_DWORD *)(v2 + 48),
      PlayerOnlineStatusInfo_StatusType_OFFLINE,
      0,
      0,
      &packet_ptr);
    std::string::~string(&packet_ptr);
    std::allocator<char>::~allocator((char *)&p_save_ptra._M_invoker + 3);
    __args_0.uid = *(_DWORD *)(v2 + 48);
    v12 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptra._M_functor._M_unused._M_object);
    if ( *(_BYTE *)(((unsigned __int64)(v12 + 168) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    __args_0.last_login_rand = *(_QWORD *)(v12 + 168);
    __args_0.cur_login_rand = 0LL;
    v13 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptra._M_functor._M_unused._M_object);
    if ( *(_BYTE *)(((unsigned __int64)&v13->transfer_target_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->transfer_target_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __args_0.transfer_target_uid = v13->transfer_target_uid;
    v14 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptra._M_functor._M_unused._M_object);
    if ( *(_BYTE *)(((unsigned __int64)&v14->transfer_target_home_owner_uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v14 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->transfer_target_home_owner_uid >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    __args_0.transfer_target_home_owner_uid = v14->transfer_target_home_owner_uid;
    v15 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptra._M_functor._M_unused._M_object);
    if ( *(_BYTE *)(((unsigned __int64)&v15->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __args_0.transfer_target_home_gameserver_id = v15->transfer_target_home_gameserver_id;
    common::tools::perf::make_shared<ModifyPlayerStatusContext,ModifyPlayerStatusContext>(
      (ModifyPlayerStatusContext *)(v2 + 64),
      &__args_0);
    v16 = ServiceBox::findService<GameserverService>();
    std::any::any<std::shared_ptr<ModifyPlayerStatusContext> &,std::shared_ptr<ModifyPlayerStatusContext>,std::any::_Manager_external<std::shared_ptr<ModifyPlayerStatusContext>>,true,true>(
      &context,
      (std::shared_ptr<ModifyPlayerStatusContext> *)(v2 + 64));
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &v22,
      *(const std::shared_ptr<common::minet::Packet> **)&p_save_ptra._M_functor._M_pod_data[8]);
    std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any,int),std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
      (int (*)(std::shared_ptr<common::minet::Packet>, std::any, int))&v21._M_manager,
      (const std::_Placeholder<1> *)LoginHandler::asyncDelPlayerStatusCallback,
      (const std::_Placeholder<2> *)&std::placeholders::_1,
      (const std::_Placeholder<3> *)&std::placeholders::_2,
      (const std::_Placeholder<1> *)&std::placeholders::_3,
      v17,
      (const std::_Placeholder<3> *)p_save_ptra._M_functor._M_unused._M_object);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
      (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
      (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>))(std::shared_ptr<common::minet::Packet>,std::any,int)> *)&v21._M_manager);
    std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any),std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
      (int (*)(std::shared_ptr<common::minet::Packet>, std::any))&v21,
      (const std::_Placeholder<1> *)LoginHandler::asyncDelPlayerStatus,
      (const std::_Placeholder<2> *)&std::placeholders::_1,
      (const std::_Placeholder<1> *)&std::placeholders::_2,
      v18);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any) ()(std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
      &v24,
      (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> *)&v21);
    HIDWORD(p_save_ptra._M_invoker) = ServiceBase::pushAsyncTask(
                                        v16,
                                        p_save_ptra,
                                        v21,
                                        (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v24),
                                        (std::any)__PAIR128__(&context, &v22));
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v24);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v22);
    std::any::~any(&context);
    M_invoker_high = HIDWORD(p_save_ptra._M_invoker);
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)(v2 + 64));
  }
  result = M_invoker_high;
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

// Line 892: range 000000001600C94C-000000001600C9CE
void __cdecl LoginHandler::findMultiLangText(
        LoginHandler *const this,
        uint32_t lang,
        uint32_t text_id,
        std::string *content)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  DbDeployConfigMgr::findDeployTextmap(&v4->design_config.db_config_mgr.db_deploy_config_mgr, text_id, lang, content);
  std::shared_ptr<Config>::~shared_ptr(v7);
};

// Line 897: range 000000001600C9D0-000000001600D32D
int32_t __cdecl LoginHandler::loadPlayerDataFromSaveWait(LoginHandler *const this, const PlayerSessionProxy *session)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rax
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  google::protobuf::uint32 v10; // eax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint64_t CurLoginRand; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  const std::string *v15; // rax
  const std::string *v16; // rax
  google::protobuf::uint32 v17; // eax
  proto::BlockInfo *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::minet::Packet *v20; // rax
  common::minet::Packet *v21; // r14
  uint32_t GateserverSessionId; // eax
  common::minet::Packet *v23; // r14
  const proto::PacketHead *LoginPacketHead; // rax
  const std::string *v25; // rax
  common::minet::Packet *v26; // r14
  uint32_t GateserverId; // eax
  GameserverService *v28; // r14
  common::minet::PacketPtr v29; // rdi
  int32_t result; // eax
  std::map<unsigned int,proto::BlockInfo>::iterator __for_begin; // [rsp+18h] [rbp-348h] BYREF
  std::map<unsigned int,proto::BlockInfo>::iterator __for_end; // [rsp+20h] [rbp-340h] BYREF
  const proto::PlayerLoginReq *req; // [rsp+28h] [rbp-338h]
  std::string *proto_str; // [rsp+30h] [rbp-330h]
  google::protobuf::Map<unsigned int,proto::BlockInfo> *block_info_map; // [rsp+38h] [rbp-328h]
  std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+40h] [rbp-320h]
  std::pair<unsigned int const,proto::BlockInfo> *__in; // [rsp+48h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+50h] [rbp-310h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+58h] [rbp-308h]
  opentracing::v3::string_view operation_name; // [rsp+60h] [rbp-300h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-2F0h] BYREF
  char v42[720]; // [rsp+90h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:898 48 4 7 uid:901 64 16 19 player_data_ptr:903 96 16 18 rsp_packet_ptr:936 128 56 "
                        "14 span_proxy:899 224 376 7 rsp:911";
  *(_QWORD *)(v2 + 16) = LoginHandler::loadPlayerDataFromSaveWait;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "loadPlayerDataFromSaveWait");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 128), v5, operation_name, 0LL, 0, (const int *)(v2 + 32));
  *(_DWORD *)(v2 + 48) = PlayerSessionProxy::getUid(session);
  req = PlayerSessionProxy::getLoginReq(session);
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
  if ( std::operator==<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "loadPlayerDataFromSaveWait",
      906);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v41,
           (const char (*)[32])"player_data_ptr is nullptr,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    *(_DWORD *)(v2 + 32) = -1;
    v9 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 224));
    proto::PlayerLoginRsp::set_is_login_rsp_split((proto::PlayerLoginRsp *const)(v2 + 224), 0);
    proto::PlayerLoginRsp::set_is_new_player((proto::PlayerLoginRsp *const)(v2 + 224), 0);
    v10 = proto::PlayerLoginReq::target_uid(req);
    proto::PlayerLoginRsp::set_target_uid((proto::PlayerLoginRsp *const)(v2 + 224), v10);
    proto_str = proto::PlayerLoginRsp::mutable_player_data[abi:cxx11]((proto::PlayerLoginRsp *const)(v2 + 224));
    v11 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( !google::protobuf::MessageLite::SerializeToString(&v11->bin_data, proto_str) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "loadPlayerDataFromSaveWait",
        919);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v41,
              (const char (*)[39])"[LOGIN] SerializeToString failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      *(_DWORD *)(v2 + 32) = -1;
      v9 = *(_DWORD *)(v2 + 32);
    }
    else
    {
      CurLoginRand = PlayerSessionProxy::getCurLoginRand(session);
      proto::PlayerLoginRsp::set_login_rand((proto::PlayerLoginRsp *const)(v2 + 224), CurLoginRand);
      proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v2 + 224), 0);
      v14 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v14->data_version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v14 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->data_version >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::PlayerLoginRsp::set_player_data_version((proto::PlayerLoginRsp *const)(v2 + 224), v14->data_version);
      v15 = proto::PlayerLoginReq::country_code[abi:cxx11](req);
      proto::PlayerLoginRsp::set_country_code((proto::PlayerLoginRsp *const)(v2 + 224), v15);
      v16 = proto::PlayerLoginReq::birthday[abi:cxx11](req);
      proto::PlayerLoginRsp::set_birthday((proto::PlayerLoginRsp *const)(v2 + 224), v16);
      v17 = proto::PlayerLoginReq::target_home_owner_uid(req);
      proto::PlayerLoginRsp::set_target_home_owner_uid((proto::PlayerLoginRsp *const)(v2 + 224), v17);
      block_info_map = proto::PlayerLoginRsp::mutable_block_info_map((proto::PlayerLoginRsp *const)(v2 + 224));
      __for_range = &std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->block_info_map;
      __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
        block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(__in);
        block_info = std::get<1ul,unsigned int const,proto::BlockInfo>(__in);
        v18 = google::protobuf::Map<unsigned int,proto::BlockInfo>::operator[](block_info_map, block_id);
        proto::BlockInfo::CopyFrom(v18, block_info);
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
      }
      common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>((const proto::PlayerLoginRsp *)(v2 + 96));
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "loadPlayerDataFromSaveWait",
          939);
        v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v41,
                (const char (*)[26])"createPacket failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        *(_DWORD *)(v2 + 32) = -1;
        v9 = *(_DWORD *)(v2 + 32);
      }
      else
      {
        v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        common::minet::Packet::setUserId(v20, *(_DWORD *)(v2 + 48));
        v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        GateserverSessionId = PlayerSessionProxy::getGateserverSessionId(session);
        common::minet::Packet::setUserSessionId(v21, GateserverSessionId);
        v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LoginPacketHead = PlayerSessionProxy::getLoginPacketHead(session);
        v25 = proto::PacketHead::span_context_str[abi:cxx11](LoginPacketHead);
        std::string::basic_string(&v41, v25);
        common::minet::Packet::setSpanContextStr(v23, (std::string *)&v41);
        std::string::~string(&v41);
        v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        GateserverId = PlayerSessionProxy::getGateserverId(session);
        common::minet::Packet::setServiceAppId(v26, 2u, GateserverId);
        v28 = ServiceBox::findService<GameserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        GameserverService::setPacketGameThreadIndex(v28, (common::minet::PacketPtr *)&operation_name);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        v29._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 96);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        v29._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&operation_name;
        *(_DWORD *)(v2 + 32) = ServiceBox::pushPacketToService(v29);
        v9 = *(_DWORD *)(v2 + 32);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
    }
    proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 224));
  }
  std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 64));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 128));
  result = v9;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 953: range 000000001600D32E-000000001600D909
int32_t __cdecl LoginHandler::onPlayerLoginRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GameserverService *v10; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r14d
  PlayerSessionProxy *v16; // rax
  int32_t result; // eax
  opentracing::v3::string_view operation_name; // [rsp+10h] [rbp-300h] BYREF
  std::string in_str; // [rsp+20h] [rbp-2F0h] BYREF
  char v20[720]; // [rsp+40h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:954 48 4 7 uid:958 64 8 17 root_span_ctx:955 96 16 15 session_ptr:959 128 56 14 spa"
                        "n_proxy:956 224 376 7 rsp:973";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLoginRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v6);
  TracingMgr::extract(v5, &in_str);
  std::string::~string(&in_str);
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onPlayerLoginRsp");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 128), v8, operation_name, v7, 0, (const int *)(v2 + 32));
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v9);
  v10 = ServiceBox::findService<GameserverService>();
  GameserverService::findPlayerSession((GameserverService *const)(v2 + 96), (__int64)v10, *(_DWORD *)(v2 + 48));
  if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96))
    || (v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
        !PlayerSessionProxy::isConnected(v11)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlayerLoginRsp",
      962);
    v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&in_str,
            (const char (*)[25])"findPlayerSession  uid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v14,
      (const char (*)[36])" failed,or session is not connected");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    *(_DWORD *)(v2 + 32) = -1;
    v15 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(v2 + 32) = LoginHandler::playerLoginResult(
                             this,
                             *(_DWORD *)(v2 + 48),
                             (common::minet::PacketPtr *)&operation_name);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    if ( *(_DWORD *)(v2 + 32) )
    {
      proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 224));
      proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v2 + 224), *(_DWORD *)(v2 + 32));
      v16 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>(v16, (const proto::PlayerLoginRsp *)(v2 + 224), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "onPlayerLoginRsp",
          977);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)&in_str,
          (const char (*)[30])"session_ptr->sendProto failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        v15 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = proto::PlayerLoginRsp::retcode((const proto::PlayerLoginRsp *const)(v2 + 224));
        v15 = *(_DWORD *)(v2 + 32);
      }
      proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 224));
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      v15 = *(_DWORD *)(v2 + 32);
    }
  }
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 128));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v15;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 983: range 00000000161765F0-000000001617660A
void __cdecl PlayerLoginInitContext::PlayerLoginInitContext(PlayerLoginInitContext *const this)
{
  std::shared_ptr<Player>::shared_ptr(&this->player_ptr);
};

// Line 983: range 000000001619E7D0-000000001619E7EA
void __cdecl PlayerLoginInitContext::~PlayerLoginInitContext(PlayerLoginInitContext *const this)
{
  std::shared_ptr<Player>::~shared_ptr(&this->player_ptr);
};

// Line 989: range 000000001600D90A-000000001600ED77
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall LoginHandler::playerLoginResult(
        LoginHandler *const this,
        uint32_t uid,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rax
  unsigned int v7; // r13d
  GameserverService *v8; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  PlayerSessionProxy *v11; // rdi
  uint32_t ThreadIndex; // r13d
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdi
  common::milog::MiLogStream *v16; // r13
  const unsigned int *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  PlayerSessionProxy *v20; // rax
  common::milog::MiLogStream *v21; // r13
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  GameserverService *v24; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  GameserverService *v28; // rax
  unsigned int v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  google::protobuf::uint32 v32; // r13d
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  common::milog::MiLogStream *v34; // r13
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r13
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint64_t CurLoginRand; // r13
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r13
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r13
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // r13
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r13
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  uint64_t BlockInfoLoginRand; // r13
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r13
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r13
  proto::BlockInfo *v61; // rax
  PlayerSessionProxy *v62; // rax
  GameserverService *v63; // r13
  LoginHandler **v64; // r9
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r13
  bool is_login_rsp_split; // al
  common::milog::MiLogStream *v73; // r13
  __int64 result; // rax
  AsyncTaskFunc v75; // [rsp+0h] [rbp-2E0h] BYREF
  AsyncTaskCallbackFunc v76; // [rsp+20h] [rbp-2C0h] OVERLAPPED
  unsigned int val; // [rsp+44h] [rbp-29Ch] BYREF
  std::map<unsigned int,proto::BlockInfo>::const_iterator __for_begin; // [rsp+48h] [rbp-298h] BYREF
  std::map<unsigned int,proto::BlockInfo>::const_iterator __for_end; // [rsp+50h] [rbp-290h] BYREF
  proto::PlayerLoginRsp *rsp_0; // [rsp+58h] [rbp-288h]
  const std::map<unsigned int,proto::BlockInfo> *session_block_info_map; // [rsp+60h] [rbp-280h]
  google::protobuf::Map<unsigned int,proto::BlockInfo> *block_info_map; // [rsp+68h] [rbp-278h]
  const std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+70h] [rbp-270h]
  const std::pair<unsigned int const,proto::BlockInfo> *v84; // [rsp+78h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+80h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+88h] [rbp-258h]
  int (*v87[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any); // [rsp+90h] [rbp-250h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any, int); // [rsp+A0h] [rbp-240h] BYREF
  std::shared_ptr<common::minet::Packet> v89; // [rsp+B0h] [rbp-230h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+C0h] [rbp-220h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&>::type v91; // [rsp+D0h] [rbp-210h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&,const std::_Placeholder<3>&>::type p___f; // [rsp+F0h] [rbp-1F0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v93; // [rsp+110h] [rbp-1D0h] BYREF
  common::milog::MiLogStream packet_ptr; // [rsp+130h] [rbp-1B0h] BYREF
  char v95[400]; // [rsp+150h] [rbp-190h] BYREF

  v76._M_invoker = (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)>::_Invoker_type)this;
  HIDWORD(v76._M_manager) = uid;
  *(_QWORD *)&v76._M_functor._M_pod_data[8] = p_packet_ptr;
  v3 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 7 ret:990 48 4 7 uid:988 64 16 9 timer:993 96 16 11 rsp_ptr:994 128 16 15 session_ptr:996"
                        " 160 16 15 player_ptr:1016 192 16 13 save_ptr:1023 224 16 16 context_ptr:1082 256 56 14 span_proxy:991";
  *(_QWORD *)(v3 + 16) = LoginHandler::playerLoginResult;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 48) = HIDWORD(v76._M_manager);
  *(_DWORD *)(v3 + 32) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "playerLoginResult");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v3 + 256), v6, operation_name, 0LL, 0, (const int *)(v3 + 32));
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(*(const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const *)&v76._M_functor._M_pod_data[8]);
  common::minet::Packet::getProto<proto::PlayerLoginRsp>((common::minet::Packet *const)(v3 + 96));
  if ( std::operator==<proto::PlayerLoginRsp>((const std::shared_ptr<proto::PlayerLoginRsp> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "playerLoginResult",
      994);
    common::milog::MiLogStream::operator()(&packet_ptr, off_25ACA360);
    common::milog::MiLogStream::~MiLogStream(&packet_ptr);
    v7 = -1;
    goto LABEL_44;
  }
  rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::findPlayerSession((GameserverService *const)(v3 + 128), (__int64)v8, *(_DWORD *)(v3 + 48));
  if ( !std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v3 + 128)) )
  {
    v9 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( PlayerSessionProxy::isConnected(v9) )
    {
      v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      ThreadIndex = PlayerSessionProxy::getThreadIndex(v11);
      v13 = ZTWN11ThreadLocal17work_thread_indexE(v11, v3 + 128);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      if ( ThreadIndex != *(_DWORD *)v13 )
      {
        common::milog::MiLogStream::create(
          &packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLoginResult",
          1005);
        v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &packet_ptr,
                (const char (*)[42])"another thread create session already,uid");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" this thread:");
        v17 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v15, " this thread:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, v17);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])" another thread:");
        v20 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        val = PlayerSessionProxy::getThreadIndex(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&packet_ptr);
        *(_DWORD *)(v3 + 32) = -1;
        v7 = *(_DWORD *)(v3 + 32);
        goto LABEL_43;
      }
      if ( proto::PlayerLoginRsp::retcode(rsp_0) )
      {
        common::milog::MiLogStream::create(
          &packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLoginResult",
          1012);
        v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &packet_ptr,
                (const char (*)[21])"PlayerLoginRsp ret: ");
        val = proto::PlayerLoginRsp::retcode(rsp_0);
        v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)&val);
        v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])", uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&packet_ptr);
        *(_DWORD *)(v3 + 32) = proto::PlayerLoginRsp::retcode(rsp_0);
        v7 = *(_DWORD *)(v3 + 32);
        goto LABEL_43;
      }
      v24 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v24);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 160), GameThreadLocal + 16);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "playerLoginResult",
          1019);
        v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&packet_ptr, (const char (*)[7])" uid: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v27,
          (const char (*)[23])" player is still exist");
        common::milog::MiLogStream::~MiLogStream(&packet_ptr);
        *(_DWORD *)(v3 + 32) = -1;
        v7 = *(_DWORD *)(v3 + 32);
LABEL_42:
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
        goto LABEL_43;
      }
      v28 = ServiceBox::findService<GameserverService>();
      v29 = (unsigned int)GameserverService::getGameThreadLocal(v28);
      PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v3 + 192), v29 + 16);
      if ( !std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v3 + 192), 0LL) )
        goto LABEL_25;
      common::milog::MiLogStream::create(
        &packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "playerLoginResult",
        1026);
      v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&packet_ptr, (const char (*)[7])" uid: ");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v31,
        (const char (*)[27])" player is in saving state");
      common::milog::MiLogStream::~MiLogStream(&packet_ptr);
      v32 = proto::PlayerLoginRsp::player_data_version(rsp_0);
      v33 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&v33->data_version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v33 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->data_version >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v32 == v33->data_version )
      {
LABEL_25:
        v38 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        CurLoginRand = PlayerSessionProxy::getCurLoginRand(v38);
        if ( CurLoginRand == proto::PlayerLoginRsp::login_rand(rsp_0) )
        {
          common::milog::MiLogStream::create(
            &packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/login_handler.cpp",
            "playerLoginResult",
            1042);
          v46 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &packet_ptr,
                  (const char (*)[26])"[PERF]:player check cost:");
          val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 64));
          common::milog::MiLogStream::operator<<<int,(int *)0>(v46, (const int *)&val);
          common::milog::MiLogStream::~MiLogStream(&packet_ptr);
          if ( proto::PlayerLoginRsp::is_login_rsp_split(rsp_0) )
          {
            if ( proto::PlayerLoginRsp::block_info_map_size(rsp_0) )
            {
              common::milog::MiLogStream::create(
                &packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/login_handler.cpp",
                "playerLoginResult",
                1050);
              v47 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      &packet_ptr,
                      (const char (*)[6])" uid:");
              v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v47,
                      (const unsigned int *)(v3 + 48));
              v49 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      v48,
                      (const char (*)[46])" rsp split but block info map not empty size:");
              val = proto::PlayerLoginRsp::block_info_map_size(rsp_0);
              common::milog::MiLogStream::operator<<<int,(int *)0>(v49, (const int *)&val);
              common::milog::MiLogStream::~MiLogStream(&packet_ptr);
              *(_DWORD *)(v3 + 32) = -1;
              v7 = *(_DWORD *)(v3 + 32);
              goto LABEL_41;
            }
            v50 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            session_block_info_map = PlayerSessionProxy::getBlockInfoMap(v50);
            if ( std::map<unsigned int,proto::BlockInfo>::empty(session_block_info_map) )
            {
              common::milog::MiLogStream::create(
                &packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/login_handler.cpp",
                "playerLoginResult",
                1057);
              v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      &packet_ptr,
                      (const char (*)[6])" uid:");
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                v52,
                (const char (*)[52])" rsp split but player session block info map empty!");
              common::milog::MiLogStream::~MiLogStream(&packet_ptr);
              *(_DWORD *)(v3 + 32) = -1;
              v7 = *(_DWORD *)(v3 + 32);
              goto LABEL_41;
            }
            v53 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            BlockInfoLoginRand = PlayerSessionProxy::getBlockInfoLoginRand(v53);
            if ( BlockInfoLoginRand != proto::PlayerLoginRsp::login_rand(rsp_0) )
            {
              common::milog::MiLogStream::create(
                &packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/login_handler.cpp",
                "playerLoginResult",
                1065);
              v55 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      &packet_ptr,
                      (const char (*)[6])" uid:");
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v55,
                      (const unsigned int *)(v3 + 48));
              v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v56,
                      (const char (*)[32])" session block info login rand:");
              v58 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)PlayerSessionProxy::getBlockInfoLoginRand(v58);
              v59 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v57,
                      (const unsigned __int64 *)&__for_begin);
              v60 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v59,
                      (const char (*)[29])off_25ACA740);
              __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)proto::PlayerLoginRsp::login_rand(rsp_0);
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v60,
                (const unsigned __int64 *)&__for_end);
              common::milog::MiLogStream::~MiLogStream(&packet_ptr);
              *(_DWORD *)(v3 + 32) = -1;
              v7 = *(_DWORD *)(v3 + 32);
              goto LABEL_41;
            }
            block_info_map = proto::PlayerLoginRsp::mutable_block_info_map(rsp_0);
            __for_range = session_block_info_map;
            __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(session_block_info_map)._M_node;
            __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              v84 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
              block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(v84);
              block_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::BlockInfo> >::type *)std::get<1ul,unsigned int const,proto::BlockInfo>(v84);
              v61 = google::protobuf::Map<unsigned int,proto::BlockInfo>::operator[](block_info_map, block_id);
              proto::BlockInfo::CopyFrom(v61, block_info);
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
            }
          }
          v62 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          PlayerSessionProxy::clearBlockInfoMap(v62);
          common::tools::perf::make_shared<PlayerLoginInitContext>();
          v63 = ServiceBox::findService<GameserverService>();
          std::any::any<std::shared_ptr<PlayerLoginInitContext> &,std::shared_ptr<PlayerLoginInitContext>,std::any::_Manager_external<std::shared_ptr<PlayerLoginInitContext>>,true,true>(
            (std::any *const)&operation_name,
            (std::shared_ptr<PlayerLoginInitContext> *)(v3 + 224));
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v89,
            *(const std::shared_ptr<common::minet::Packet> **)&v76._M_functor._M_pod_data[8]);
          __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)v76._M_invoker;
          v75._M_functor._M_unused._M_object = LoginHandler::asyncPlayerLoginInitCallback;
          *(_QWORD *)&v75._M_functor._M_pod_data[8] = 0LL;
          *(__m128i *)__f = _mm_load_si128((const __m128i *)&v75);
          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
            &p___f,
            __f,
            (LoginHandler **)&__for_end,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            (const std::_Placeholder<2> *)&std::placeholders::_2,
            (const std::_Placeholder<3> *)&std::placeholders::_3,
            (LoginHandler **)LoginHandler::asyncPlayerLoginInitCallback,
            0LL,
            (const std::_Placeholder<2> *)v75._M_manager,
            (const std::_Placeholder<3> *)v75._M_invoker);
          std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
            (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
            &p___f);
          __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)v76._M_invoker;
          v75._M_manager = (std::_Function_base::_Manager_type)LoginHandler::asyncPlayerLoginInit;
          v75._M_invoker = 0LL;
          *(__m128i *)v87 = _mm_load_si128((const __m128i *)&v75._M_manager);
          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
            &v91,
            v87,
            (LoginHandler **)&__for_begin,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            (const std::_Placeholder<2> *)&std::placeholders::_2,
            v64,
            (const std::_Placeholder<1> *)v75._M_functor._M_unused._M_object,
            *(const std::_Placeholder<2> **)&v75._M_functor._M_pod_data[8]);
          std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
            &v93,
            &v91);
          *(_DWORD *)(v3 + 32) = ServiceBase::pushAsyncTask(
                                   v63,
                                   v75,
                                   v76,
                                   (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v93),
                                   (std::any)__PAIR128__(&operation_name, &v89));
          std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v93);
          std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v89);
          std::any::~any((std::any *const)&operation_name);
          if ( *(_DWORD *)(v3 + 32) )
          {
            common::milog::MiLogStream::create(
              &packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              6u,
              "./src/handler/login_handler.cpp",
              "playerLoginResult",
              1093);
            v65 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                    &packet_ptr,
                    (const char (*)[7])" uid: ");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v3 + 48));
            v67 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v66,
                    (const char (*)[27])", doAsyncTask fails, ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v67, (const int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&packet_ptr);
            v7 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "./src/handler/login_handler.cpp",
              "playerLoginResult",
              1097);
            v68 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &packet_ptr,
                    (const char (*)[25])" playerLoginResult uid: ");
            v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v68,
                    (const unsigned int *)(v3 + 48));
            v70 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v69,
                    (const char (*)[18])" asyncPlayerLogin");
            v71 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v70,
                    (const char (*)[21])" is_login_rsp_split:");
            is_login_rsp_split = proto::PlayerLoginRsp::is_login_rsp_split(rsp_0);
            common::milog::MiLogStream::operator<<(v71, is_login_rsp_split);
            common::milog::MiLogStream::~MiLogStream(&packet_ptr);
            common::milog::MiLogStream::create(
              &packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/login_handler.cpp",
              "playerLoginResult",
              1099);
            v73 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &packet_ptr,
                    (const char (*)[40])"[PERF]:player push to async queue cost:");
            val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 64));
            common::milog::MiLogStream::operator<<<int,(int *)0>(v73, (const int *)&val);
            common::milog::MiLogStream::~MiLogStream(&packet_ptr);
            *(_DWORD *)(v3 + 32) = 0;
            v7 = *(_DWORD *)(v3 + 32);
          }
          std::shared_ptr<PlayerLoginInitContext>::~shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)(v3 + 224));
          goto LABEL_41;
        }
        common::milog::MiLogStream::create(
          &packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "playerLoginResult",
          1037);
        v40 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&packet_ptr, (const char (*)[7])" uid: ");
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v40,
                (const unsigned int *)(v3 + 48));
        v42 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v41,
                (const char (*)[18])" rsp login_rand: ");
        __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)proto::PlayerLoginRsp::login_rand(rsp_0);
        v43 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v42,
                (const unsigned __int64 *)&__for_begin);
        v44 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v43, (const char (*)[10])" expect: ");
        v45 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Base_ptr)PlayerSessionProxy::getCurLoginRand(v45);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v44,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream(&packet_ptr);
        *(_DWORD *)(v3 + 32) = -1;
        v7 = *(_DWORD *)(v3 + 32);
      }
      else
      {
        common::milog::MiLogStream::create(
          &packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          6u,
          "./src/handler/login_handler.cpp",
          "playerLoginResult",
          1029);
        v34 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &packet_ptr,
                (const char (*)[28])"data version not save,save:");
        v35 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &v35->data_version);
        v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" packet:");
        val = proto::PlayerLoginRsp::player_data_version(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
        common::milog::MiLogStream::~MiLogStream(&packet_ptr);
        *(_DWORD *)(v3 + 32) = -1;
        v7 = *(_DWORD *)(v3 + 32);
      }
LABEL_41:
      std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v3 + 192));
      goto LABEL_42;
    }
  }
  common::milog::MiLogStream::create(
    &packet_ptr,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/login_handler.cpp",
    "playerLoginResult",
    999);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &packet_ptr,
    (const char (*)[33])"session is null or not connected");
  common::milog::MiLogStream::~MiLogStream(&packet_ptr);
  *(_DWORD *)(v3 + 32) = -1;
  v7 = *(_DWORD *)(v3 + 32);
LABEL_43:
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v3 + 128));
LABEL_44:
  std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)(v3 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 256));
  result = v7;
  if ( v95 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1106: range 000000001600ED78-000000001600F79F
int32_t __cdecl LoginHandler::onPlayerLoginBlockInfoNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GameserverService *v10; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r14d
  PlayerSessionProxy *v16; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdi
  common::milog::MiLogStream *v21; // r14
  const unsigned int *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  PlayerSessionProxy *v25; // rax
  GameserverService *v26; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint64_t CurLoginRand; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  const std::map<unsigned int,proto::BlockInfo> *BlockInfoMap; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  PlayerSessionProxy *v42; // rax
  PlayerSessionProxy *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-18Ch] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-188h] BYREF
  unsigned __int64 v49; // [rsp+20h] [rbp-180h] BYREF
  const proto::PlayerLoginBlockInfoNotify *notify; // [rsp+28h] [rbp-178h]
  std::string in_str; // [rsp+30h] [rbp-170h] BYREF
  char v52[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 8 ret:1107 48 4 8 uid:1111 64 8 18 root_span_ctx:1108 96 16 16 session_ptr:1112 128 16 15"
                        " player_ptr:1125 160 16 15 notify_ptr:1133 192 56 15 span_proxy:1109";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLoginBlockInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v6);
  TracingMgr::extract(v5, &in_str);
  std::string::~string(&in_str);
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v2 + 160),
    "onPlayerLoginBlockInfoNotify");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v2 + 192),
    v8,
    *(opentracing::v3::string_view *)(v2 + 160),
    v7,
    0,
    (const int *)(v2 + 32));
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v9);
  v10 = ServiceBox::findService<GameserverService>();
  GameserverService::findPlayerSession((GameserverService *const)(v2 + 96), (__int64)v10, *(_DWORD *)(v2 + 48));
  if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96))
    || (v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
        !PlayerSessionProxy::isConnected(v11)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlayerLoginBlockInfoNotify",
      1115);
    v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&in_str,
            (const char (*)[25])"findPlayerSession  uid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v14,
      (const char (*)[36])" failed,or session is not connected");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    *(_DWORD *)(v2 + 32) = -1;
    v15 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    v16 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    ThreadIndex = PlayerSessionProxy::getThreadIndex(v16);
    v18 = ZTWN11ThreadLocal17work_thread_indexE(v16, v2 + 96);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    if ( ThreadIndex == *(_DWORD *)v18 )
    {
      v26 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v26);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 128), GameThreadLocal + 16);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "onPlayerLoginBlockInfoNotify",
          1129);
        v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[7])" uid: ");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
          v29,
          (const char (*)[62])" player is still exist but recieve PlayerLoginBlockInfoNotify");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v2 + 32) = -1;
        v15 = *(_DWORD *)(v2 + 32);
      }
      else
      {
        std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::getConstProto<proto::PlayerLoginBlockInfoNotify>((common::minet::Packet *const)(v2 + 160));
        if ( std::operator==<proto::PlayerLoginBlockInfoNotify const>(
               (const std::shared_ptr<const proto::PlayerLoginBlockInfoNotify> *)(v2 + 160),
               0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "onPlayerLoginBlockInfoNotify",
            1133);
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25ACAA00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          v15 = -1;
        }
        else
        {
          notify = std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v30 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          CurLoginRand = PlayerSessionProxy::getCurLoginRand(v30);
          if ( CurLoginRand == proto::PlayerLoginBlockInfoNotify::login_rand(notify) )
          {
            v38 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            BlockInfoMap = PlayerSessionProxy::getBlockInfoMap(v38);
            if ( !std::map<unsigned int,proto::BlockInfo>::empty(BlockInfoMap) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/login_handler.cpp",
                "onPlayerLoginBlockInfoNotify",
                1145);
              v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      (common::milog::MiLogStream *const)&in_str,
                      (const char (*)[6])" uid:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v41,
                (const char (*)[58])" recv PlayerLoginBlockInfoNotify but session set already!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
              v42 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              PlayerSessionProxy::clearBlockInfoMap(v42);
              *(_DWORD *)(v2 + 32) = -1;
            }
            else
            {
              v43 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              PlayerSessionProxy::setBlockInfoMap(v43, notify);
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/handler/login_handler.cpp",
                "onPlayerLoginBlockInfoNotify",
                1152);
              v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      (common::milog::MiLogStream *const)&in_str,
                      (const char (*)[6])" uid:");
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v45,
                (const char (*)[41])" player session setBlockInfoMap success!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            }
            v15 = *(_DWORD *)(v2 + 32);
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "onPlayerLoginBlockInfoNotify",
              1137);
            v32 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                    (common::milog::MiLogStream *const)&in_str,
                    (const char (*)[7])" uid: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v2 + 48));
            v34 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v33,
                    (const char (*)[48])" PlayerLoginBlockInfoNotify notify login_rand: ");
            v48 = proto::PlayerLoginBlockInfoNotify::login_rand(notify);
            v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v34, &v48);
            v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v35, (const char (*)[10])" expect: ");
            v37 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v49 = PlayerSessionProxy::getCurLoginRand(v37);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v36, &v49);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            *(_DWORD *)(v2 + 32) = -1;
            v15 = *(_DWORD *)(v2 + 32);
          }
        }
        std::shared_ptr<proto::PlayerLoginBlockInfoNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginBlockInfoNotify> *const)(v2 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onPlayerLoginBlockInfoNotify",
        1121);
      v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[42])"another thread create session already,uid");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" this thread:");
      v22 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v20, " this thread:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v22);
      v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])" another thread:");
      v25 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = PlayerSessionProxy::getThreadIndex(v25);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v2 + 32) = -1;
      v15 = *(_DWORD *)(v2 + 32);
    }
  }
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 192));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v15;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 1159: range 000000001600F7A0-000000001600FFDC
int32_t __cdecl LoginHandler::onPlayerDisconnectNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerSessionProxy *v11; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdi
  common::milog::MiLogStream *v16; // r14
  const unsigned int *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  PlayerSessionProxy *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::minet::Packet *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  GameserverService *v37; // r14
  common::milog::MiLogStream *v38; // rax
  Player *v39; // r14
  uint32_t v40; // eax
  int32_t result; // eax
  unsigned int ServiceAppId; // [rsp+18h] [rbp-118h] BYREF
  unsigned int UserSessionId; // [rsp+1Ch] [rbp-114h] BYREF
  unsigned int GateserverId; // [rsp+20h] [rbp-110h] BYREF
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  const proto::PlayerDisconnectNotify *notify; // [rsp+28h] [rbp-108h]
  std::shared_ptr<PlayerSessionProxy> p_session_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v49; // [rsp+40h] [rbp-F0h] BYREF
  char v50[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 uid:1162 64 16 15 notify_ptr:1160 96 16 16 session_ptr:1163 128 16 15 player_ptr:1186";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerDisconnectNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerDisconnectNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlayerDisconnectNotify const>(
         (const std::shared_ptr<const proto::PlayerDisconnectNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlayerDisconnectNotify",
      1160);
    common::milog::MiLogStream::operator()(&v49, off_25ACAC20);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PlayerDisconnectNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerDisconnectNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameserverService::findPlayerSession((GameserverService *const)(v2 + 96), (__int64)v7, *(_DWORD *)(v2 + 48));
    if ( std::operator==<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96), 0LL)
      || (v8 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
          !PlayerSessionProxy::isConnected(v8)) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "onPlayerDisconnectNotify",
        1166);
      v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v49,
              (const char (*)[53])"find session failed or session is not connected,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v49);
      v5 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      ThreadIndex = PlayerSessionProxy::getThreadIndex(v11);
      v13 = ZTWN11ThreadLocal17work_thread_indexE(v11, 0LL);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      if ( ThreadIndex == *(_DWORD *)v13 )
      {
        if ( !LoginHandler::isFromSameClientSession(this, (const PlayerSessionProxyPtr *)(v2 + 96), p_packet_ptr) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/login_handler.cpp",
            "onPlayerDisconnectNotify",
            1179);
          v21 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v49,
                  (const char (*)[51])"PlayerDisconnectNotify from other gatesession uid:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v22,
                  (const char (*)[17])" packet_session:");
          v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          ServiceAppId = common::minet::Packet::getServiceAppId(v24, 2u);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &ServiceAppId);
          v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])"-");
          v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          UserSessionId = common::minet::Packet::getUserSessionId(v27);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &UserSessionId);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v28,
                  (const char (*)[16])" proxy_session:");
          v30 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          GateserverId = PlayerSessionProxy::getGateserverId(v30);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &GateserverId);
          v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])"-");
          v33 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          val = PlayerSessionProxy::getGateserverSessionId(v33);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v5 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/handler/login_handler.cpp",
            "onPlayerDisconnectNotify",
            1184);
          v34 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v49,
                  (const char (*)[42])"[LOGIN] recv PlayerDisconnectNotify uid: ");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 48));
          v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])" data: ");
          val = proto::PlayerDisconnectNotify::data(notify);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          PlayerSessionProxy::getPlayer((PlayerSessionProxy *const)(v2 + 128));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
          {
            v37 = ServiceBox::findService<GameserverService>();
            std::shared_ptr<PlayerSessionProxy>::shared_ptr(
              &p_session_ptr,
              (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96));
            GameserverService::disconnectPlayerSession(v37, &p_session_ptr);
            std::shared_ptr<PlayerSessionProxy>::~shared_ptr(&p_session_ptr);
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/login_handler.cpp",
              "onPlayerDisconnectNotify",
              1190);
            v38 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v49,
                    (const char (*)[33])"session_ptr has not player ,uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v49);
            v5 = 0;
          }
          else
          {
            v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v40 = proto::PlayerDisconnectNotify::data(notify);
            v5 = Player::onPlayerDisconnect(v39, v40);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "onPlayerDisconnectNotify",
          1172);
        v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v49,
                (const char (*)[42])"another thread create session already,uid");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" this thread:");
        v17 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v15, " this thread:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, v17);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])" another thread:");
        v20 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = PlayerSessionProxy::getThreadIndex(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v5 = -1;
      }
    }
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96));
  }
  std::shared_ptr<proto::PlayerDisconnectNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerDisconnectNotify> *const)(v2 + 64));
  result = v5;
  if ( v50 == (char *)v2 )
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

// Line 1198: range 000000001600FFDE-00000000160105A1
int32_t __cdecl LoginHandler::onPlayerLogoutReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  GameserverService *v8; // rax
  unsigned int GameThreadLocal; // eax
  Player *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  Player *v13; // r14
  proto::PlayerLogoutReq_Reason v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  GameserverService *v18; // r14
  uint32_t Now; // eax
  GameserverService *v20; // rax
  GameThreadLocal *v21; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerLogoutReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-110h] BYREF
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 uid:1199 64 16 12 req_ptr:1200 96 16 15 player_ptr:1204 128 24 11 notify:1220";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLogoutReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v5);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerLogoutReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlayerLogoutReq const>(
         (const std::shared_ptr<const proto::PlayerLogoutReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlayerLogoutReq",
      1200);
    common::milog::MiLogStream::operator()(&v24, off_25ACAF60);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PlayerLogoutReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLogoutReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/handler/login_handler.cpp",
      "onPlayerLogoutReq",
      1202);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v24,
           (const char (*)[24])"onPlayerLogoutReq, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v8);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 96), GameThreadLocal + 16);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "onPlayerLogoutReq",
        1207);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v24,
        (const char (*)[23])"findOnlinePlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( Player::blockStopCoroutine(v10) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "onPlayerLogoutReq",
          1214);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v24,
                (const char (*)[33])"blockStopCoroutine failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      if ( proto::PlayerLogoutReq::reason(req) == PlayerLogoutReq_Reason_CLIENT_REQ )
      {
        proto::DisconnectClientNotify::DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 128));
        proto::DisconnectClientNotify::set_data((proto::DisconnectClientNotify *const)(v2 + 128), 1u);
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Player::sendProto(v12, (const google::protobuf::Message *)(v2 + 128));
        proto::DisconnectClientNotify::~DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 128));
      }
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v14 = proto::PlayerLogoutReq::reason(req);
      if ( Player::logout(v13, v14) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "onPlayerLogoutReq",
          1229);
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v24, (const char (*)[7])off_25ACB080);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" logout failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( Player::getTransferTargetUid(v17) )
      {
        v18 = ServiceBox::findService<GameserverService>();
        Now = common::tools::TimeUtils::getNow();
        GameserverService::addTransferPlayer(v18, *(_DWORD *)(v2 + 48), Now);
      }
      v20 = ServiceBox::findService<GameserverService>();
      v21 = GameserverService::getGameThreadLocal(v20);
      PlayerMgr::mvOnlinePlayerToSaveWait(&v21->player_mgr, *(_DWORD *)(v2 + 48));
      v6 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<proto::PlayerLogoutReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLogoutReq> *const)(v2 + 64));
  result = v6;
  if ( v25 == (char *)v2 )
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

// Line 1245: range 00000000160105A2-00000000160109DB
int32_t __cdecl LoginHandler::onKickoutPlayerNotify(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  Player *v12; // r14
  uint32_t v13; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const proto::KickoutPlayerNotify *notify; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 uid:1247 64 16 15 notify_ptr:1246 96 16 15 player_ptr:1248 128 16 16 session_ptr:1254";
  *(_QWORD *)(v2 + 16) = LoginHandler::onKickoutPlayerNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::KickoutPlayerNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::KickoutPlayerNotify const>(
         (const std::shared_ptr<const proto::KickoutPlayerNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onKickoutPlayerNotify",
      1246);
    common::milog::MiLogStream::operator()(&v17, off_25ACB1A0);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::KickoutPlayerNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::KickoutPlayerNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 96), GameThreadLocal + 16);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onKickoutPlayerNotify",
        1251);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v17,
        (const char (*)[23])"findOnlinePlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = -1;
    }
    else
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Player::getSession((const Player *const)(v2 + 128));
      if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 128)) )
      {
        v5 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/handler/login_handler.cpp",
          "onKickoutPlayerNotify",
          1260);
        v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v17,
               (const char (*)[39])"[LOGIN] recv KickoutPlayerNotify uid: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])", reason:");
        val = proto::KickoutPlayerNotify::reason(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v17);
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v13 = proto::KickoutPlayerNotify::reason(notify);
        v5 = Player::disconnectSession(v12, v13);
      }
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 128));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<proto::KickoutPlayerNotify const>::~shared_ptr((std::shared_ptr<const proto::KickoutPlayerNotify> *const)(v2 + 64));
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

// Line 1266: range 00000000160109DC-0000000016010EBC
int32_t __cdecl LoginHandler::onPlatformAntiAddictNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  google::protobuf::int32 v10; // eax
  const std::string *v11; // rax
  const std::string *v12; // rax
  Player *v13; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlatformAntiAddictNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-130h] BYREF
  char v17[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 8 uid:1267 48 16 15 player_ptr:1268 80 16 16 session_ptr:1274 112 16 15 notify_ptr:1282 1"
                        "44 40 16 anti_notify:1283";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlatformAntiAddictNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v5);
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 48), GameThreadLocal + 16);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onPlatformAntiAddictNotify",
      1271);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v16, (const char (*)[23])"findOnlinePlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Player::getSession((const Player *const)(v2 + 80));
    if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 80)) )
    {
      v8 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/login_handler.cpp",
        "onPlatformAntiAddictNotify",
        1280);
      v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v16,
             (const char (*)[44])"[LOGIN] recv PlatformAntiAddictNotify uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::PlatformAntiAddictNotify>((common::minet::Packet *const)(v2 + 112));
      if ( std::operator==<proto::PlatformAntiAddictNotify const>(
             (const std::shared_ptr<const proto::PlatformAntiAddictNotify> *)(v2 + 112),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "onPlatformAntiAddictNotify",
          1282);
        common::milog::MiLogStream::operator()(&v16, off_25ACB3A0);
        common::milog::MiLogStream::~MiLogStream(&v16);
        v8 = -1;
      }
      else
      {
        notify = std::__shared_ptr_access<proto::PlatformAntiAddictNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlatformAntiAddictNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        proto::AntiAddictNotify::AntiAddictNotify((proto::AntiAddictNotify *const)(v2 + 144));
        v10 = proto::PlatformAntiAddictNotify::msg_type(notify);
        proto::AntiAddictNotify::set_msg_type((proto::AntiAddictNotify *const)(v2 + 144), v10);
        v11 = proto::PlatformAntiAddictNotify::msg[abi:cxx11](notify);
        proto::AntiAddictNotify::set_msg((proto::AntiAddictNotify *const)(v2 + 144), v11);
        v12 = proto::PlatformAntiAddictNotify::level[abi:cxx11](notify);
        proto::AntiAddictNotify::set_level((proto::AntiAddictNotify *const)(v2 + 144), v12);
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v8 = Player::sendProto(v13, (const google::protobuf::Message *)(v2 + 144));
        proto::AntiAddictNotify::~AntiAddictNotify((proto::AntiAddictNotify *const)(v2 + 144));
      }
      std::shared_ptr<proto::PlatformAntiAddictNotify const>::~shared_ptr((std::shared_ptr<const proto::PlatformAntiAddictNotify> *const)(v2 + 112));
    }
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 80));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
  result = v8;
  if ( v17 == (char *)v2 )
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

// Line 1293: range 0000000016010EBE-0000000016011666
int32_t __cdecl LoginHandler::onSavePlayerDataRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  google::protobuf::uint32 v7; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  google::protobuf::uint32 v9; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // rax
  unsigned int GameThreadLocal; // eax
  uint32_t v13; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // r14
  uint32_t v16; // eax
  Player *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v19; // r14
  GameserverService *v20; // rax
  unsigned int v21; // eax
  google::protobuf::uint32 v22; // r14d
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  PlayerSaveWaitData *v25; // r14
  PlayerSaveWaitData *v26; // rax
  int32_t result; // eax
  std::string p_packet_ptra; // [rsp+0h] [rbp-150h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-110h] BYREF
  char v32[240]; // [rsp+60h] [rbp-F0h] BYREF

  p_packet_ptra._M_string_length = (std::string::size_type)this;
  p_packet_ptra._M_dataplus._M_p = (std::string::pointer)p_packet_ptr;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 holder:1318 64 16 12 rsp_ptr:1295 96 16 12 log_ptr:1302 128 16 15 player_ptr:1308 160 "
                        "16 13 save_ptr:1324";
  *(_QWORD *)(v2 + 16) = LoginHandler::onSavePlayerDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SavePlayerDataRsp>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SavePlayerDataRsp const>(
         (const std::shared_ptr<const proto::SavePlayerDataRsp> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onSavePlayerDataRsp",
      1295);
    common::milog::MiLogStream::operator()(&v31, off_25ACB4C0);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v5 = -1;
  }
  else
  {
    *(&p_packet_ptra._anon_0._M_allocated_capacity + 1) = (std::string::size_type)std::__shared_ptr_access<proto::SavePlayerDataRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SavePlayerDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( proto::SavePlayerDataRsp::retcode(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                           + 1)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onSavePlayerDataRsp",
        1298);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v31,
        (const char (*)[23])"save player data fails");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v5 = -1;
    }
    else
    {
      common::tools::perf::make_shared<proto_log::PlayerLogBodySaveSuccess>();
      v6 = std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v7 = proto::SavePlayerDataRsp::save_stat_id(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                  + 1));
      proto_log::PlayerLogBodySaveSuccess::set_save_stat_id(v6, v7);
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySaveSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v9 = proto::SavePlayerDataRsp::data_version(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                  + 1));
      proto_log::PlayerLogBodySaveSuccess::set_data_version(v8, v9);
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      HIDWORD(p_packet_ptra._anon_0._M_allocated_capacity) = common::minet::Packet::getUserId(v10);
      v11 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v11);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 128), GameThreadLocal + 16);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        v13 = proto::SavePlayerDataRsp::data_version(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                     + 1));
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( v13 > Player::getLastSuccDataVersion(v14) )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v16 = proto::SavePlayerDataRsp::data_version(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                       + 1));
          Player::setLastSuccDataVersion(v15, v16);
        }
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        BasicComp = Player::getBasicComp(v17);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x461u, p_packet_ptra);
        std::string::~string(&v31);
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySaveSuccess,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodySaveSuccess> *)(v2 + 96));
        Player::printStatLog(v19, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        v5 = 0;
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      else
      {
        v20 = ServiceBox::findService<GameserverService>();
        v21 = (unsigned int)GameserverService::getGameThreadLocal(v20);
        PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v2 + 160), v21 + 16);
        if ( std::operator==<PlayerSaveWaitData>(0LL, (const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 160)) )
        {
          v5 = 0;
        }
        else
        {
          v22 = proto::SavePlayerDataRsp::data_version(*((const proto::SavePlayerDataRsp *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                       + 1));
          v23 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v23->data_version >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v23 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->data_version >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v22 == v23->data_version )
          {
            v24 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v24->is_player_data_dirty >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v24 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&v24->is_player_data_dirty >> 3)
                                                               + 0x7FFF8000) )
            {
              __asan_report_store1(&v24->is_player_data_dirty);
            }
            v24->is_player_data_dirty = 0;
            v25 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySaveSuccess,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodySaveSuccess> *)(v2 + 96));
            PlayerSaveWaitData::printStatLog(v25, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
            v26 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( PlayerSaveWaitData::isDirty(v26) )
            {
              v5 = 0;
            }
            else
            {
              std::shared_ptr<PlayerSaveWaitData>::shared_ptr(
                (std::shared_ptr<PlayerSaveWaitData> *const)&p_body_ext_ptr,
                (const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 160));
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)&p_body_ptr,
                p_packet_ptr);
              v5 = LoginHandler::cleanPlayerStatus(
                     (common::minet::PacketPtr *)&p_body_ptr,
                     (PlayerSaveWaitDataPtr *)&p_body_ext_ptr);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&p_body_ptr);
              std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)&p_body_ext_ptr);
            }
          }
          else
          {
            v5 = 0;
          }
        }
        std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
      std::shared_ptr<proto_log::PlayerLogBodySaveSuccess>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySaveSuccess> *const)(v2 + 96));
    }
  }
  std::shared_ptr<proto::SavePlayerDataRsp const>::~shared_ptr((std::shared_ptr<const proto::SavePlayerDataRsp> *const)(v2 + 64));
  result = v5;
  if ( v32 == (char *)v2 )
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

// Line 1351: range 0000000016011668-0000000016011D03
int32_t __cdecl LoginHandler::onSaveBlockDataRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  Player *v9; // rax
  uint32_t second; // esi
  GameserverService *v11; // rax
  unsigned int v12; // eax
  PlayerSaveWaitData *p_gate_session; // rdi
  uint32_t first; // ecx
  PlayerSaveWaitData *v15; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SaveBlockDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-160h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-158h]
  PlayerSaveWaitData *p_block_id_0; // [rsp+30h] [rbp-150h]
  BlockDataMgr *block_data_mgr; // [rsp+38h] [rbp-148h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_block_id; // [rsp+48h] [rbp-138h]
  std::shared_ptr<common::minet::Packet> v23; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<PlayerSaveWaitData> p_save_ptr; // [rsp+60h] [rbp-120h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+70h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+90h] [rbp-F0h] BYREF
  common::milog::MiLogStream v27; // [rsp+B0h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 rsp_ptr:1353 64 16 15 player_ptr:1362 96 16 13 save_ptr:1374";
  *(_QWORD *)(v2 + 16) = LoginHandler::onSaveBlockDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveBlockDataRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SaveBlockDataRsp const>(
         (const std::shared_ptr<const proto::SaveBlockDataRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onSaveBlockDataRsp",
      1353);
    common::milog::MiLogStream::operator()(&v27, off_25ACB5E0);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::SaveBlockDataRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveBlockDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::SaveBlockDataRsp::retcode(rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onSaveBlockDataRsp",
        1356);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v27, (const char (*)[22])"save block data fails");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getUserId(v6);
      v7 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        block_data_mgr = Player::getBlockDataMgr(v9);
        __for_range = proto::SaveBlockDataRsp::block_succ_save_map(rsp_0);
        google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
        google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
        while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
        {
          p_block_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&p_block_id->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p_block_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_block_id->second >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          second = p_block_id->second;
          if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_block_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          BlockDataMgr::onSaveSucc(block_data_mgr, p_block_id->first, second);
          google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
        }
        v5 = 0;
      }
      else
      {
        v11 = ServiceBox::findService<GameserverService>();
        v12 = (unsigned int)GameserverService::getGameThreadLocal(v11);
        PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v2 + 96), v12 + 16);
        if ( std::operator==<PlayerSaveWaitData>(0LL, (const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 96)) )
        {
          v5 = 0;
        }
        else
        {
          __for_range_0 = proto::SaveBlockDataRsp::block_succ_save_map(rsp_0);
          google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_0);
          google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_0);
          while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
          {
            p_block_id_0 = (PlayerSaveWaitData *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
            p_gate_session = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&p_block_id_0->gate_session >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)p_block_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_block_id_0->gate_session >> 3)
                                                                         + 0x7FFF8000) )
            {
              p_gate_session = (PlayerSaveWaitData *)&p_block_id_0->gate_session;
              __asan_report_load4();
            }
            first = p_block_id_0->gate_session.first;
            if ( *(_BYTE *)(((unsigned __int64)p_block_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_block_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_block_id_0 >> 3)
                                                                             + 0x7FFF8000) )
            {
              p_gate_session = p_block_id_0;
              __asan_report_load4();
            }
            PlayerSaveWaitData::onSaveBlockSucc(p_gate_session, p_block_id_0->uid, first);
            google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
          }
          v15 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( PlayerSaveWaitData::isDirty(v15) )
          {
            v5 = 0;
          }
          else
          {
            std::shared_ptr<PlayerSaveWaitData>::shared_ptr(
              &p_save_ptr,
              (const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 96));
            std::shared_ptr<common::minet::Packet>::shared_ptr(&v23, p_packet_ptr);
            v5 = LoginHandler::cleanPlayerStatus(&v23, &p_save_ptr);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
            std::shared_ptr<PlayerSaveWaitData>::~shared_ptr(&p_save_ptr);
          }
        }
        std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::SaveBlockDataRsp const>::~shared_ptr((std::shared_ptr<const proto::SaveBlockDataRsp> *const)(v2 + 32));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 1396: range 0000000016011D04-0000000016012208
int32_t __cdecl LoginHandler::asyncDelPlayerStatus(common::minet::PacketPtr *p_packet_ptr, std::any *p_context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::size_t v5; // r14
  const std::type_info *v6; // rax
  const char *v7; // rbx
  const std::type_info *v8; // rax
  const char *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::any __any; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1404 64 16 16 context_ptr:1398";
  *(_QWORD *)(v2 + 16) = LoginHandler::asyncDelPlayerStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  v5 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
  v6 = std::any::type(p_context);
  if ( v5 == std::type_info::hash_code(v6) )
  {
    std::shared_ptr<ModifyPlayerStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v2 + 64),
      0LL);
    std::any_cast<std::shared_ptr<ModifyPlayerStatusContext>>(&__any);
    std::shared_ptr<ModifyPlayerStatusContext>::operator=(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v2 + 64),
      (std::shared_ptr<ModifyPlayerStatusContext> *)&__any);
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)&__any);
    if ( std::operator==<ModifyPlayerStatusContext>(0LL, (const std::shared_ptr<ModifyPlayerStatusContext> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncDelPlayerStatus",
        1401);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v16,
        (const char (*)[23])"context_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = v11->uid;
      v12 = (__int64)std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      if ( RedisOpPlayerStatus::compareAndDeletePlayerStatus(*(_DWORD *)(v2 + 48), *(_QWORD *)(v12 + 8)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncDelPlayerStatus",
          1410);
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v16,
                (const char (*)[41])"compareAndDeletePlayerStatus fails, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v16);
        v10 = -1;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "asyncDelPlayerStatus",
      1398);
    v7 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
    v8 = std::any::type(p_context);
    v9 = std::type_info::name(v8);
    common::milog::MiLogStream::operator()(&v16, off_25AC9220, v9, v7);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  result = v10;
  if ( v17 == (char *)v2 )
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

// Line 1417: range 000000001601220A-0000000016012CBF
__int64 __fastcall LoginHandler::asyncDelPlayerStatusCallback(
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::size_t v6; // r14
  const std::type_info *v7; // rax
  const char *v8; // rbx
  const std::type_info *v9; // rax
  const char *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 v13; // rax
  std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::minet::Packet *v24; // rax
  common::minet::Packet *v25; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t UserSessionId; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  NetworkMgrBase *v35; // r14
  common::minet::Packet *v36; // rax
  uint32_t ServiceAppId; // r15d
  uint32_t v38; // r8d
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-1A8h] BYREF
  uint32_t transfer_target_home_gameserver_id; // [rsp+2Ch] [rbp-1A4h]
  uint64_t last_login_rand; // [rsp+38h] [rbp-198h]
  std::any __any; // [rsp+40h] [rbp-190h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v46; // [rsp+60h] [rbp-170h] BYREF
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-150h] BYREF
  char v48[304]; // [rsp+A0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 8 uid:1425 64 4 24 transfer_target_uid:1427 80 4 35 transfer_target_home_owner_uid:1428 9"
                        "6 4 12 retcode:1416 112 16 16 context_ptr:1419 144 16 20 tran_packet_ptr:1446 176 40 20 transfer_notify:1440";
  *(_QWORD *)(v3 + 16) = LoginHandler::asyncDelPlayerStatusCallback;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 96) = retcode;
  v6 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
  v7 = std::any::type(p_context);
  if ( v6 == std::type_info::hash_code(v7) )
  {
    std::shared_ptr<ModifyPlayerStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112),
      0LL);
    std::any_cast<std::shared_ptr<ModifyPlayerStatusContext>>(&__any);
    std::shared_ptr<ModifyPlayerStatusContext>::operator=(
      (std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112),
      (std::shared_ptr<ModifyPlayerStatusContext> *)&__any);
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)&__any);
    if ( std::operator==<ModifyPlayerStatusContext>(0LL, (const std::shared_ptr<ModifyPlayerStatusContext> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncDelPlayerStatusCallback",
        1422);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v47,
        (const char (*)[23])"context_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v11 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v12->uid;
      v13 = (__int64)std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      last_login_rand = *(_QWORD *)(v13 + 8);
      v14 = std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v14->transfer_target_uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->transfer_target_uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = v14->transfer_target_uid;
      v15 = std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v15->transfer_target_home_owner_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v15 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->transfer_target_home_owner_uid >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 80) = v15->transfer_target_home_owner_uid;
      v16 = std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyPlayerStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v16->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->transfer_target_home_gameserver_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      transfer_target_home_gameserver_id = v16->transfer_target_home_gameserver_id;
      if ( *(_DWORD *)(v3 + 96) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "asyncDelPlayerStatusCallback",
          1433);
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v47,
                (const char (*)[15])"[LOGOUT] uid: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                v18,
                (const char (*)[43])" compareAndDeletePlayerStatus fails, ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v11 = *(_DWORD *)(v3 + 96);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/handler/login_handler.cpp",
          "asyncDelPlayerStatusCallback",
          1436);
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v47,
                (const char (*)[15])"[LOGOUT] uid: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v21,
                (const char (*)[40])" offline and del redis succ,session_id:");
        v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
        val = common::minet::Packet::getUserSessionId(v23);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v47);
        if ( *(_DWORD *)(v3 + 64) || *(_DWORD *)(v3 + 80) )
        {
          proto::PlayerTransferNotify::PlayerTransferNotify((proto::PlayerTransferNotify *const)(v3 + 176));
          proto::PlayerTransferNotify::set_transfer_uid(
            (proto::PlayerTransferNotify *const)(v3 + 176),
            *(_DWORD *)(v3 + 48));
          proto::PlayerTransferNotify::set_target_uid(
            (proto::PlayerTransferNotify *const)(v3 + 176),
            *(_DWORD *)(v3 + 64));
          proto::PlayerTransferNotify::set_target_home_owner_uid(
            (proto::PlayerTransferNotify *const)(v3 + 176),
            *(_DWORD *)(v3 + 80));
          proto::PlayerTransferNotify::set_target_home_gameserver_id(
            (proto::PlayerTransferNotify *const)(v3 + 176),
            transfer_target_home_gameserver_id);
          common::minet::PacketUtils::createPacket<proto::PlayerTransferNotify>((const proto::PlayerTransferNotify *)(v3 + 144));
          if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 144)) )
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "asyncDelPlayerStatusCallback",
              1449);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v47,
              (const char (*)[21])"create packet failed");
            common::milog::MiLogStream::~MiLogStream(&v47);
            v11 = -1;
          }
          else
          {
            v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            common::minet::Packet::setUserId(v24, *(_DWORD *)(v3 + 48));
            v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
            UserSessionId = common::minet::Packet::getUserSessionId(v26);
            common::minet::Packet::setUserSessionId(v25, UserSessionId);
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "./src/handler/login_handler.cpp",
              "asyncDelPlayerStatusCallback",
              1455);
            v28 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v46,
                    (const char (*)[38])"[TRANSFER] send transfer notify, uid:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v3 + 48));
            v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v29,
                    (const char (*)[13])" target_uid:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v3 + 64));
            v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v31,
                    (const char (*)[18])" target_home_uid:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v3 + 80));
            v34 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v33,
                    (const char (*)[24])" target_home_gs_app_id:");
            common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v47, transfer_target_home_gameserver_id);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)&v47);
            std::string::~string(&v47);
            common::milog::MiLogStream::~MiLogStream(&v46);
            v35 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
            v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
            ServiceAppId = common::minet::Packet::getServiceAppId(v36, 2u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &packet_ptr,
              (const std::shared_ptr<common::minet::Packet> *)(v3 + 144));
            v11 = NetworkMgrBase::sendPacketToTargetService(
                    v35,
                    (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
                    ServiceAppId,
                    v38);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 144));
          proto::PlayerTransferNotify::~PlayerTransferNotify((proto::PlayerTransferNotify *const)(v3 + 176));
        }
        else
        {
          v11 = 0;
        }
      }
    }
    std::shared_ptr<ModifyPlayerStatusContext>::~shared_ptr((std::shared_ptr<ModifyPlayerStatusContext> *const)(v3 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "asyncDelPlayerStatusCallback",
      1419);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyPlayerStatusContext>);
    v9 = std::any::type(p_context);
    v10 = std::type_info::name(v9);
    common::milog::MiLogStream::operator()(&v47, off_25AC9220, v10, v8);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v11 = -1;
  }
  result = v11;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1465: range 0000000016012CC0-0000000016013D21
int32_t __cdecl LoginHandler::asyncPlayerLoginInit(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TracingMgr *v7; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const jaegertracing::SpanContext *v9; // r15
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v10; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::size_t v12; // r15
  const std::type_info *v13; // rax
  const char *v14; // r14
  const std::type_info *v15; // rax
  const char *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v20; // rax
  int v21; // r15d
  const std::string *v22; // rax
  Player *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const std::string *v25; // rax
  std::remove_reference<const proto::BlockInfo&>::type *v26; // r14
  proto::BlockInfo *v27; // rax
  Player *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v30; // rax
  Player *v31; // rax
  MonitorReport *v32; // r14
  MonitorReport *v33; // r14
  MonitorReport *v34; // r14
  Player *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int32_t result; // eax
  std::string v38; // [rsp+0h] [rbp-350h]
  std::string v39; // [rsp+0h] [rbp-350h]
  std::string v40; // [rsp+0h] [rbp-350h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-325h] BYREF
  uint32_t block_bin_size; // [rsp+2Ch] [rbp-324h]
  uint32_t player_bin_size; // [rsp+30h] [rbp-320h]
  uint32_t bin_sum_size; // [rsp+34h] [rbp-31Ch]
  google::protobuf::RepeatedPtrField<proto::FeatureBlockInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-318h] BYREF
  google::protobuf::RepeatedPtrField<proto::FeatureBlockInfo>::const_iterator __for_end_0; // [rsp+40h] [rbp-310h] BYREF
  const proto::PlayerLoginRsp *rsp_0; // [rsp+50h] [rbp-300h]
  const std::string *player_data_str; // [rsp+58h] [rbp-2F8h]
  const google::protobuf::Map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+60h] [rbp-2F0h]
  const google::protobuf::RepeatedPtrField<proto::FeatureBlockInfo> *__for_range_0; // [rsp+68h] [rbp-2E8h]
  const proto::FeatureBlockInfo *feature_block_info; // [rsp+70h] [rbp-2E0h]
  const unsigned int *p_block_id; // [rsp+78h] [rbp-2D8h]
  std::any __any; // [rsp+80h] [rbp-2D0h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+90h] [rbp-2C0h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_begin; // [rsp+A0h] [rbp-2B0h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_end; // [rsp+C0h] [rbp-290h] BYREF
  std::string in_str; // [rsp+E0h] [rbp-270h] BYREF
  char v58[592]; // [rsp+100h] [rbp-250h] BYREF

  *(&v38._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v38._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v38._M_string_length = (std::string::size_type)p_context;
  v4 = (unsigned __int64)v58;
  v38._M_dataplus._M_p = v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 8 ret:1466 64 4 8 uid:1470 80 8 18 root_span_ctx:1467 112 16 16 context_ptr:1473 144 16 "
                        "15 player_ptr:1480 176 16 12 rsp_ptr:1488 208 16 20 perf_span_proxy:1523 240 48 19 block_info_ma"
                        "p:1508 320 56 15 span_proxy:1468 416 96 16 player_data:1489";
  *(_QWORD *)(v4 + 16) = LoginHandler::asyncPlayerLoginInit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862729] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862736] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v8);
  TracingMgr::extract(v7, &in_str);
  std::string::~string(&in_str);
  v9 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 80));
  opentracing::v3::string_view::string_view(&operation_name, "asyncPlayerLoginInit");
  v10 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 320), v10, operation_name, v9, 0, (const int *)(v4 + 48));
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v4 + 64) = common::minet::Packet::getUserId(v11);
  v12 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<PlayerLoginInitContext>);
  v13 = std::any::type((const std::any *const)v38._M_string_length);
  if ( v12 == std::type_info::hash_code(v13) )
  {
    std::shared_ptr<PlayerLoginInitContext>::shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 112), 0LL);
    std::any_cast<std::shared_ptr<PlayerLoginInitContext>>(&__any);
    std::shared_ptr<PlayerLoginInitContext>::operator=(
      (std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 112),
      (std::shared_ptr<PlayerLoginInitContext> *)&__any);
    std::shared_ptr<PlayerLoginInitContext>::~shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)&__any);
    if ( std::operator==<PlayerLoginInitContext>(0LL, (const std::shared_ptr<PlayerLoginInitContext> *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncPlayerLoginInit",
        1476);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[29])"context_ptr is nullptr, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      v3 = -1;
    }
    else
    {
      PlayerMgr::createPlayer(v4 + 144);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/login_handler.cpp",
          "asyncPlayerLoginInit",
          1483);
        v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[28])"player_ptr is nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v4 + 48) = -1;
        v3 = *(_DWORD *)(v4 + 48);
      }
      else
      {
        v19 = std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        std::shared_ptr<Player>::operator=(&v19->player_ptr, (const std::shared_ptr<Player> *)(v4 + 144));
        std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::getConstProto<proto::PlayerLoginRsp>((common::minet::Packet *const)(v4 + 176));
        if ( std::operator==<proto::PlayerLoginRsp const>(
               (const std::shared_ptr<const proto::PlayerLoginRsp> *)(v4 + 176),
               0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "asyncPlayerLoginInit",
            1488);
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25ACA360);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          v3 = -1;
        }
        else
        {
          rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
          proto::PlayerData::PlayerData((proto::PlayerData *const)(v4 + 416));
          player_data_str = proto::PlayerLoginRsp::player_data[abi:cxx11](rsp_0);
          opentracing::v3::string_view::string_view(&operation_name, "player_data.ParseFromString");
          v20 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
          PerfSpanProxy::PerfSpanProxy((PerfSpanProxy *const)(v4 + 208), v20, operation_name);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 416, player_data_str) != 1 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              6u,
              "./src/handler/login_handler.cpp",
              "asyncPlayerLoginInit",
              1495);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[22])"ParseFromString fails");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            *(_DWORD *)(v4 + 48) = -1;
            v3 = *(_DWORD *)(v4 + 48);
            v21 = 0;
          }
          else
          {
            v21 = 1;
          }
          PerfSpanProxy::~PerfSpanProxy((PerfSpanProxy *const)(v4 + 208));
          if ( v21 == 1 )
          {
            v22 = proto::PlayerData::bin[abi:cxx11]((const proto::PlayerData *const)(v4 + 416));
            player_bin_size = std::string::size(v22);
            v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
            if ( Player::fromBin(v23, (const proto::PlayerData *)(v4 + 416)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                6u,
                "./src/handler/login_handler.cpp",
                "asyncPlayerLoginInit",
                1503);
              v24 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      (common::milog::MiLogStream *const)&in_str,
                      (const char (*)[21])"fromBin fails, uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
              *(_DWORD *)(v4 + 48) = 22;
              v3 = *(_DWORD *)(v4 + 48);
            }
            else
            {
              block_bin_size = 0;
              std::map<unsigned int,proto::BlockInfo>::map((std::map<unsigned int,proto::BlockInfo> *const)(v4 + 240));
              __for_range = proto::PlayerLoginRsp::block_info_map(rsp_0);
              google::protobuf::Map<unsigned int,proto::BlockInfo>::begin(&__for_begin, __for_range);
              google::protobuf::Map<unsigned int,proto::BlockInfo>::end(&__for_end, __for_range);
              while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
              {
                p_block_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator*(&__for_begin);
                v25 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id + 2));
                block_bin_size += std::string::size(v25);
                v26 = std::move<proto::BlockInfo const&>((const proto::BlockInfo *)(p_block_id + 2));
                v27 = std::map<unsigned int,proto::BlockInfo>::operator[](
                        (std::map<unsigned int,proto::BlockInfo> *const)(v4 + 240),
                        p_block_id);
                proto::BlockInfo::operator=(v27, v26);
                google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator++(&__for_begin);
              }
              v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              if ( Player::fromBlockBin(v28, (std::map<unsigned int,proto::BlockInfo> *)(v4 + 240)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&in_str,
                  &common::milog::MiLogDefault::default_log_obj_,
                  6u,
                  "./src/handler/login_handler.cpp",
                  "asyncPlayerLoginInit",
                  1517);
                v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        (common::milog::MiLogStream *const)&in_str,
                        (const char (*)[26])"fromBlockBin fails, uid: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v4 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                *(_DWORD *)(v4 + 48) = 22;
                v3 = *(_DWORD *)(v4 + 48);
              }
              else
              {
                opentracing::v3::string_view::string_view(&operation_name, "Player.fromFeatureBlockBin");
                v30 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
                PerfSpanProxy::PerfSpanProxy((PerfSpanProxy *const)(v4 + 208), v30, operation_name);
                __for_range_0 = proto::PlayerLoginRsp::feature_block_info_list(rsp_0);
                __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::FeatureBlockInfo>::begin(__for_range_0).it_;
                __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::FeatureBlockInfo>::end(__for_range_0).it_;
                while ( google::protobuf::internal::RepeatedPtrIterator<proto::FeatureBlockInfo const>::operator!=(
                          &__for_begin_0,
                          &__for_end_0) )
                {
                  feature_block_info = google::protobuf::internal::RepeatedPtrIterator<proto::FeatureBlockInfo const>::operator*(&__for_begin_0);
                  v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                  Player::fromFeatureBlockBin(v31, feature_block_info);
                  google::protobuf::internal::RepeatedPtrIterator<proto::FeatureBlockInfo const>::operator++(&__for_begin_0);
                }
                PerfSpanProxy::~PerfSpanProxy((PerfSpanProxy *const)(v4 + 208));
                bin_sum_size = player_bin_size + block_bin_size;
                v32 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>(&in_str, byte_25A50A60, &__a);
                MonitorReport::addValue(v32, MONITOR_BIN_PLAYER_SIZE, player_bin_size, v38);
                std::string::~string(&in_str);
                std::allocator<char>::~allocator(&__a);
                v33 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>(&in_str, byte_25A50A60, &__a);
                MonitorReport::addValue(v33, MONITOR_BIN_BLOCK_SIZE, block_bin_size, v39);
                std::string::~string(&in_str);
                std::allocator<char>::~allocator(&__a);
                v34 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>(&in_str, byte_25A50A60, &__a);
                MonitorReport::addValue(v34, MONITOR_BIN_SUM_SIZE, bin_sum_size, v40);
                std::string::~string(&in_str);
                std::allocator<char>::~allocator(&__a);
                v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                if ( Player::init(v35) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&in_str,
                    &common::milog::MiLogDefault::default_log_obj_,
                    6u,
                    "./src/handler/login_handler.cpp",
                    "asyncPlayerLoginInit",
                    1540);
                  v36 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          (common::milog::MiLogStream *const)&in_str,
                          (const char (*)[24])"player init fails, uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v4 + 64));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                  *(_DWORD *)(v4 + 48) = 23;
                }
                else
                {
                  *(_DWORD *)(v4 + 48) = 0;
                }
                v3 = *(_DWORD *)(v4 + 48);
              }
              std::map<unsigned int,proto::BlockInfo>::~map((std::map<unsigned int,proto::BlockInfo> *const)(v4 + 240));
            }
          }
          proto::PlayerData::~PlayerData((proto::PlayerData *const)(v4 + 416));
        }
        std::shared_ptr<proto::PlayerLoginRsp const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginRsp> *const)(v4 + 176));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 144));
    }
    std::shared_ptr<PlayerLoginInitContext>::~shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "asyncPlayerLoginInit",
      1473);
    v14 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<PlayerLoginInitContext>);
    v15 = std::any::type((const std::any *const)v38._M_string_length);
    v16 = std::type_info::name(v15);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC9220, v16, v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v3 = -1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 320));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 80));
  result = v3;
  if ( v38._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1548: range 0000000016013D22-0000000016014F24
int32_t __cdecl LoginHandler::asyncPlayerLoginInitCallback(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TracingMgr *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const jaegertracing::SpanContext *v9; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v10; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::size_t v12; // r14
  const std::type_info *v13; // rax
  const char *v14; // r14
  const std::type_info *v15; // rax
  const char *v16; // rax
  int32_t v17; // r14d
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *v21; // r14
  const std::string *v22; // rax
  Player *v23; // r14
  const std::string *v24; // rax
  GameserverService *v25; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  PlayerSessionProxy *v30; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdi
  common::milog::MiLogStream *v35; // r14
  const unsigned int *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  PlayerSessionProxy *v39; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint64_t CurLoginRand; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  PlayerSessionProxy *v50; // rax
  GameserverService *v51; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  const std::string *v53; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t PlatformType; // eax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  const std::string *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  const proto::PlayerLoginReq *LoginReq; // rax
  const std::string *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  int32_t result; // eax
  bool is_sub_account; // [rsp+10h] [rbp-3D0h]
  unsigned int val; // [rsp+3Ch] [rbp-3A4h] BYREF
  unsigned __int64 LastLoginRand; // [rsp+40h] [rbp-3A0h] BYREF
  unsigned __int64 v82; // [rsp+48h] [rbp-398h] BYREF
  const proto::PlayerLoginRsp *rsp_0; // [rsp+58h] [rbp-388h]
  std::any __any; // [rsp+60h] [rbp-380h] BYREF
  std::shared_ptr<PlayerSessionProxy> p_session_ptr; // [rsp+70h] [rbp-370h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+80h] [rbp-360h] BYREF
  std::string in_str; // [rsp+90h] [rbp-350h] BYREF
  char v88[816]; // [rsp+B0h] [rbp-330h] BYREF

  v4 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(768LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 8 ret:1549 48 4 8 uid:1553 64 8 18 root_span_ctx:1550 96 16 16 context_ptr:1556 128 16 15"
                        " player_ptr:1563 160 16 12 rsp_ptr:1570 192 16 16 session_ptr:1574 224 56 15 span_proxy:1551 320"
                        " 376 15 client_rsp:1605";
  *(_QWORD *)(v4 + 16) = LoginHandler::asyncPlayerLoginInitCallback;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862741] = -218103808;
  v6[536862742] = -202116109;
  v6[536862743] = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v8);
  TracingMgr::extract(v7, &in_str);
  std::string::~string(&in_str);
  v9 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "asyncPlayerLoginInitCallback");
  v10 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 224), v10, operation_name, v9, 0, (const int *)(v4 + 32));
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v4 + 48) = common::minet::Packet::getUserId(v11);
  v12 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<PlayerLoginInitContext>);
  v13 = std::any::type(p_context);
  if ( v12 == std::type_info::hash_code(v13) )
  {
    std::shared_ptr<PlayerLoginInitContext>::shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 96), 0LL);
    std::any_cast<std::shared_ptr<PlayerLoginInitContext>>(&__any);
    std::shared_ptr<PlayerLoginInitContext>::operator=(
      (std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 96),
      (std::shared_ptr<PlayerLoginInitContext> *)&__any);
    std::shared_ptr<PlayerLoginInitContext>::~shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)&__any);
    if ( std::operator==<PlayerLoginInitContext>(0LL, (const std::shared_ptr<PlayerLoginInitContext> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "asyncPlayerLoginInitCallback",
        1559);
      v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[29])"context_ptr is nullptr, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      v17 = -1;
    }
    else
    {
      v19 = std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerLoginInitContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 128), &v19->player_ptr);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          6u,
          "./src/handler/login_handler.cpp",
          "asyncPlayerLoginInitCallback",
          1566);
        v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[28])"player_ptr is nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v4 + 32) = -1;
        v17 = *(_DWORD *)(v4 + 32);
      }
      else
      {
        std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::getConstProto<proto::PlayerLoginRsp>((common::minet::Packet *const)(v4 + 160));
        if ( std::operator==<proto::PlayerLoginRsp const>(
               (const std::shared_ptr<const proto::PlayerLoginRsp> *)(v4 + 160),
               0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "asyncPlayerLoginInitCallback",
            1570);
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25ACA360);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          v17 = -1;
        }
        else
        {
          rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v22 = proto::PlayerLoginRsp::country_code[abi:cxx11](rsp_0);
          Player::setCountryCode(v21, v22);
          v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v24 = proto::PlayerLoginRsp::birthday[abi:cxx11](rsp_0);
          Player::setBirthday(v23, v24);
          v25 = ServiceBox::findService<GameserverService>();
          GameserverService::findPlayerSession((GameserverService *const)(v4 + 192), (__int64)v25, *(_DWORD *)(v4 + 48));
          if ( std::operator==<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v4 + 192), 0LL)
            || (v26 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
                !PlayerSessionProxy::isConnected(v26)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&in_str,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "asyncPlayerLoginInitCallback",
              1577);
            v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    (common::milog::MiLogStream *const)&in_str,
                    (const char (*)[24])"findPlayerSession uid: ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v29, (const char (*)[31])off_25ACBF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
            *(_DWORD *)(v4 + 32) = -1;
            v17 = *(_DWORD *)(v4 + 32);
          }
          else
          {
            v30 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            ThreadIndex = PlayerSessionProxy::getThreadIndex(v30);
            v32 = ZTWN11ThreadLocal17work_thread_indexE(v30, 0LL);
            if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) != 0
              && (char)((v32 & 7) + 3) >= *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( ThreadIndex == *(_DWORD *)v32 )
            {
              v40 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              CurLoginRand = PlayerSessionProxy::getCurLoginRand(v40);
              if ( CurLoginRand == proto::PlayerLoginRsp::login_rand(rsp_0) )
              {
                if ( !LoginHandler::isFromSameClientSession(
                        this,
                        (const PlayerSessionProxyPtr *)(v4 + 192),
                        p_packet_ptr) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&in_str,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/login_handler.cpp",
                    "asyncPlayerLoginInitCallback",
                    1597);
                  v48 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          (common::milog::MiLogStream *const)&in_str,
                          (const char (*)[38])"isFromSameClientSession failed, uid: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v4 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                  *(_DWORD *)(v4 + 32) = -1;
                  v17 = *(_DWORD *)(v4 + 32);
                }
                else
                {
                  std::shared_ptr<Player>::shared_ptr(
                    (std::shared_ptr<Player> *const)&operation_name,
                    (const std::shared_ptr<Player> *)(v4 + 128));
                  std::shared_ptr<PlayerSessionProxy>::shared_ptr(
                    &p_session_ptr,
                    (const std::shared_ptr<PlayerSessionProxy> *)(v4 + 192));
                  *(_DWORD *)(v4 + 32) = LoginHandler::addPlayerToOnlineMap(
                                           this,
                                           &p_session_ptr,
                                           (PlayerPtr *)&operation_name,
                                           rsp_0,
                                           retcode);
                  std::shared_ptr<PlayerSessionProxy>::~shared_ptr(&p_session_ptr);
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&operation_name);
                  if ( *(_DWORD *)(v4 + 32) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&in_str,
                      &common::milog::MiLogDefault::default_log_obj_,
                      6u,
                      "./src/handler/login_handler.cpp",
                      "asyncPlayerLoginInitCallback",
                      1604);
                    v49 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            (common::milog::MiLogStream *const)&in_str,
                            (const char (*)[33])"addPlayerToOnlineMap failed,uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v4 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                    proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v4 + 320));
                    proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v4 + 320), retcode);
                    v50 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    if ( PlayerSessionProxy::sendProto<proto::PlayerLoginRsp>(
                           v50,
                           (const proto::PlayerLoginRsp *)(v4 + 320),
                           0LL) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&in_str,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/login_handler.cpp",
                        "asyncPlayerLoginInitCallback",
                        1609);
                      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        (common::milog::MiLogStream *const)&in_str,
                        (const char (*)[30])"session_ptr->sendProto failed");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                      v17 = -1;
                    }
                    else
                    {
                      v17 = *(_DWORD *)(v4 + 32);
                    }
                    proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v4 + 320));
                  }
                  else
                  {
                    v51 = ServiceBox::findService<GameserverService>();
                    v52 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    v53 = Player::getCountryCode[abi:cxx11](v52);
                    v54 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    is_sub_account = Player::isSubAccount(v54);
                    v55 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    PlatformType = Player::getPlatformType(v55);
                    GameserverService::updatePlayerOnlineStatus(
                      v51,
                      *(_DWORD *)(v4 + 48),
                      PlayerOnlineStatusInfo_StatusType_ONLINE,
                      PlatformType,
                      is_sub_account,
                      v53);
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&in_str,
                      &common::milog::MiLogDefault::default_log_obj_,
                      5u,
                      "./src/handler/login_handler.cpp",
                      "asyncPlayerLoginInitCallback",
                      1618);
                    v57 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            (common::milog::MiLogStream *const)&in_str,
                            (const char (*)[29])"[LOGIN] NormalLogin OK uid: ");
                    v58 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    val = Player::getUid(v58);
                    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &val);
                    v60 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v59,
                            (const char (*)[15])" gatesession: ");
                    v61 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    v62 = PlayerSessionProxy::getFlagStr[abi:cxx11](v61);
                    v63 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, v62);
                    v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v63,
                            (const char (*)[10])" device: ");
                    v65 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    LoginReq = PlayerSessionProxy::getLoginReq(v65);
                    v67 = proto::PlayerLoginReq::device_name[abi:cxx11](LoginReq);
                    v68 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v67);
                    v69 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            v68,
                            (const char (*)[19])" last_login_rand: ");
                    v70 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    LastLoginRand = PlayerSessionProxy::getLastLoginRand(v70);
                    v71 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v69, &LastLoginRand);
                    v72 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                            v71,
                            (const char (*)[18])" cur_login_rand: ");
                    v73 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    v82 = PlayerSessionProxy::getCurLoginRand(v73);
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v72, &v82);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                    v74 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    LODWORD(v72) = PlayerSessionProxy::getPlatformType(v74);
                    std::shared_ptr<Player>::shared_ptr(
                      (std::shared_ptr<Player> *const)&operation_name,
                      (const std::shared_ptr<Player> *)(v4 + 128));
                    sendLoginRspToPlayer((PlayerPtr *)&operation_name, (uint32_t)v72, 0LL);
                    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&operation_name);
                    *(_DWORD *)(v4 + 32) = 0;
                    v17 = *(_DWORD *)(v4 + 32);
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&in_str,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/login_handler.cpp",
                  "asyncPlayerLoginInitCallback",
                  1590);
                v42 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                        (common::milog::MiLogStream *const)&in_str,
                        (const char (*)[7])" uid: ");
                v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v42,
                        (const unsigned int *)(v4 + 48));
                v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v43,
                        (const char (*)[18])" rsp login_rand: ");
                LastLoginRand = proto::PlayerLoginRsp::login_rand(rsp_0);
                v45 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v44, &LastLoginRand);
                v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v45,
                        (const char (*)[15])" cur session: ");
                v47 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                v82 = PlayerSessionProxy::getCurLoginRand(v47);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v46, &v82);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
                *(_DWORD *)(v4 + 32) = -1;
                v17 = *(_DWORD *)(v4 + 32);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/login_handler.cpp",
                "asyncPlayerLoginInitCallback",
                1583);
              v33 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&in_str,
                      (const char (*)[42])"another thread create session already,uid");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v4 + 48));
              v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v34,
                      (const char (*)[14])" this thread:");
              v36 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v34, " this thread:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, v36);
              v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v37,
                      (const char (*)[17])" another thread:");
              v39 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              val = PlayerSessionProxy::getThreadIndex(v39);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
              *(_DWORD *)(v4 + 32) = -1;
              v17 = *(_DWORD *)(v4 + 32);
            }
          }
          std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v4 + 192));
        }
        std::shared_ptr<proto::PlayerLoginRsp const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginRsp> *const)(v4 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
    }
    std::shared_ptr<PlayerLoginInitContext>::~shared_ptr((std::shared_ptr<PlayerLoginInitContext> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/login_handler.cpp",
      "asyncPlayerLoginInitCallback",
      1556);
    v14 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<PlayerLoginInitContext>);
    v15 = std::any::type(p_context);
    v16 = std::type_info::name(v15);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, off_25AC9220, v16, v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v17 = -1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 224));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 64));
  result = v17;
  if ( v88 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1629: range 0000000016014F26-0000000016015797
int32_t __cdecl LoginHandler::addPlayerToOnlineMap(
        LoginHandler *const this,
        PlayerSessionProxyPtr *p_session_ptr,
        PlayerPtr *p_player_ptr,
        const proto::PlayerLoginRsp *rsp_0,
        int32_t retcode)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // rax
  unsigned int GameThreadLocal; // eax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint64_t CurLoginRand; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r12
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r12
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *v24; // r14
  Player *v25; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint64_t v27; // rax
  PlayerSessionProxy *v28; // r14
  Player *v29; // rax
  common::milog::MiLogStream *v30; // rax
  Player *v31; // r14
  uint32_t v32; // r15d
  bool is_new_player; // al
  common::milog::MiLogStream *v34; // rax
  GameserverService *v35; // rax
  unsigned int v36; // eax
  bool v37; // r14
  GameserverService *v38; // rax
  GameThreadLocal *v39; // rax
  common::milog::MiLogStream *v40; // rax
  GameserverService *v41; // rax
  PlayerMgr *p_player_mgr; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  google::protobuf::uint32 target_home_owner_uid; // [rsp+8h] [rbp-D8h]
  unsigned __int64 val; // [rsp+30h] [rbp-B0h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-A8h] BYREF
  std::shared_ptr<Player> __a; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-90h] BYREF
  char v53[112]; // [rsp+70h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 8 uid:1633";
  *(_QWORD *)(v5 + 16) = LoginHandler::addPlayerToOnlineMap;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( std::operator==<PlayerSessionProxy>(p_session_ptr, 0LL) || std::operator==<Player>(p_player_ptr, 0LL) )
  {
    result = -1;
  }
  else if ( retcode )
  {
    result = retcode;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    *(_DWORD *)(v5 + 32) = Player::getUid(v10);
    v11 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v11);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)&__a, GameThreadLocal + 16);
    v13 = std::operator!=<Player>(&__a, 0LL);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/login_handler.cpp",
        "addPlayerToOnlineMap",
        1637);
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v52, (const char (*)[7])" uid: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v15, (const char (*)[23])" player is still exist");
      common::milog::MiLogStream::~MiLogStream(&v52);
      result = -1;
    }
    else
    {
      v16 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
      CurLoginRand = PlayerSessionProxy::getCurLoginRand(v16);
      if ( CurLoginRand == proto::PlayerLoginRsp::login_rand(rsp_0) )
      {
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&__a, p_session_ptr);
        Player::setSession(v24, (PlayerSessionProxyPtr *)&__a, 0);
        std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)&__a);
        v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        v26 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
        v27 = PlayerSessionProxy::getCurLoginRand(v26);
        Player::setLoginRand(v25, v27);
        v28 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
        std::shared_ptr<Player>::shared_ptr(&__a, p_player_ptr);
        PlayerSessionProxy::setPlayer(v28, &__a);
        std::shared_ptr<Player>::~shared_ptr(&__a);
        v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        if ( Player::start(v29) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/login_handler.cpp",
            "addPlayerToOnlineMap",
            1656);
          v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v52,
                  (const char (*)[19])"start failes, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v52);
          result = -1;
        }
        else
        {
          v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          target_home_owner_uid = proto::PlayerLoginRsp::target_home_owner_uid(rsp_0);
          v32 = proto::PlayerLoginRsp::target_uid(rsp_0);
          is_new_player = proto::PlayerLoginRsp::is_new_player(rsp_0);
          if ( Player::login(v31, is_new_player, 0, v32, target_home_owner_uid, 0) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/login_handler.cpp",
              "addPlayerToOnlineMap",
              1663);
            v34 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v52,
                    (const char (*)[18])"login fails, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::~MiLogStream(&v52);
            result = -1;
          }
          else
          {
            v35 = ServiceBox::findService<GameserverService>();
            v36 = (unsigned int)GameserverService::getGameThreadLocal(v35);
            PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)&__a, v36 + 16);
            v37 = std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)&__a, 0LL);
            std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)&__a);
            if ( v37 )
            {
              v38 = ServiceBox::findService<GameserverService>();
              v39 = GameserverService::getGameThreadLocal(v38);
              PlayerMgr::delSaveWaitPlayer(&v39->player_mgr, *(_DWORD *)(v5 + 32));
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/login_handler.cpp",
                "addPlayerToOnlineMap",
                1671);
              v40 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v52,
                      (const char (*)[21])off_25ACC200);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v40,
                (const unsigned int *)(v5 + 32));
              common::milog::MiLogStream::~MiLogStream(&v52);
            }
            v41 = ServiceBox::findService<GameserverService>();
            p_player_mgr = &GameserverService::getGameThreadLocal(v41)->player_mgr;
            std::shared_ptr<Player>::shared_ptr(&__a, p_player_ptr);
            LOBYTE(p_player_mgr) = PlayerMgr::addOnlinePlayer(p_player_mgr, &__a) != 0;
            std::shared_ptr<Player>::~shared_ptr(&__a);
            if ( (_BYTE)p_player_mgr )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/login_handler.cpp",
                "addPlayerToOnlineMap",
                1678);
              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      &v52,
                      (const char (*)[16])off_25ACC240);
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v43,
                      (const unsigned int *)(v5 + 32));
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v44, (const char (*)[8])" failed");
              common::milog::MiLogStream::~MiLogStream(&v52);
              result = -1;
            }
            else
            {
              result = 0;
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/login_handler.cpp",
          "addPlayerToOnlineMap",
          1644);
        v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v52, (const char (*)[7])" uid: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v5 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v19,
                (const char (*)[18])" rsp login_rand: ");
        val = proto::PlayerLoginRsp::login_rand(rsp_0);
        v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &val);
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" expect: ");
        v23 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
        v50 = PlayerSessionProxy::getCurLoginRand(v23);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &v50);
        common::milog::MiLogStream::~MiLogStream(&v52);
        result = -1;
      }
    }
  }
  if ( v53 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1686: range 0000000016015798-0000000016015F1E
_BOOL8 __fastcall LoginHandler::checkChecksumValid(
        LoginHandler *const this,
        uint32_t uid,
        const proto::PlayerLoginReq *login_req)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // r14d
  const std::string *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_checksum_version_not_found_forbid_login; // rax
  bool is_checksum_version_not_found_forbid_login; // r14
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  _BOOL4 v17; // r14d
  common::milog::MiLogStream *v18; // r14
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const std::string *v24; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  const std::string *v27; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  const std::string *v29; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  const std::string *v31; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  google::protobuf::uint32 v33; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  const std::string *v35; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  const std::string *v37; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  const std::string *v39; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // r14
  google::protobuf::uint32 v41; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  google::protobuf::uint32 v43; // eax
  common::milog::MiLogStream *v44; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  _BOOL8 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  const DbDeployConfigMgr *conf_mgr; // [rsp+30h] [rbp-F0h]
  const data::DbAntiCheatClientChannelIdConfig *config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> v51; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v53; // [rsp+70h] [rbp-B0h] BYREF
  char v54[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1685 64 16 22 check_sum_log_ptr:1708";
  *(_QWORD *)(v3 + 16) = LoginHandler::checkChecksumValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.db_config_mgr.db_deploy_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
  v6 = proto::PlayerLoginReq::channel_id(login_req);
  v7 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
  config_ptr = DbDeployConfigMgr::findDbAntiCheatClientChannelIdConfig(conf_mgr, v7, v6);
  if ( config_ptr )
  {
    if ( std::set<std::string>::empty(&config_ptr->checksum_set)
      || (v24 = proto::PlayerLoginReq::checksum[abi:cxx11](login_req),
          common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(&config_ptr->checksum_set, v24)) )
    {
      v17 = 1;
    }
    else
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyChecksumInvalid>();
      if ( std::operator!=<proto_log::AntiCheatBodyChecksumInvalid>(
             (const std::shared_ptr<proto_log::AntiCheatBodyChecksumInvalid> *)(v3 + 64),
             0LL) )
      {
        v26 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v27 = proto::PlayerLoginReq::system_version[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_system_version(v26, v27);
        v28 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v29 = proto::PlayerLoginReq::device_uuid[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_device_uuid(v28, v29);
        v30 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v31 = proto::PlayerLoginReq::platform[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_platform(v30, v31);
        v32 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v33 = proto::PlayerLoginReq::account_type(login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_account_type(v32, v33);
        v34 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v35 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_client_version(v34, v35);
        v36 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v37 = proto::PlayerLoginReq::device_name[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_device_name(v36, v37);
        v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v39 = proto::PlayerLoginReq::checksum[abi:cxx11](login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_checksum(v38, v39);
        v40 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v41 = proto::PlayerLoginReq::channel_id(login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_channel_id(v40, v41);
        v42 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v43 = proto::PlayerLoginReq::sub_channel_id(login_req);
        proto_log::AntiCheatBodyChecksumInvalid::set_sub_channel_id(v42, v43);
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/login_handler.cpp",
          "checkChecksumValid",
          1720);
        v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v52, (const char (*)[13])"[AntiCheat] ");
        v45 = std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyChecksumInvalid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v53, v45);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, (const std::string *)&v53);
        std::string::~string(&v53);
        common::milog::MiLogStream::~MiLogStream(&v52);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyChecksumInvalid,void>(
          &v51,
          (const std::shared_ptr<proto_log::AntiCheatBodyChecksumInvalid> *)(v3 + 64));
        Player::printAntiCheatLogWithoutPlayerData(ANTI_CHEAT_ACTION_CHECKSUM_INVALID, *(_DWORD *)(v3 + 48), &v51);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v51);
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_forbid_login >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_ptr + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_forbid_login >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&config_ptr->is_forbid_login);
      }
      v17 = !config_ptr->is_forbid_login;
      std::shared_ptr<proto_log::AntiCheatBodyChecksumInvalid>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyChecksumInvalid> *const)(v3 + 64));
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v51);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
    p_is_checksum_version_not_found_forbid_login = &v8->security_config.is_checksum_version_not_found_forbid_login;
    if ( *(_BYTE *)(((unsigned __int64)p_is_checksum_version_not_found_forbid_login >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_checksum_version_not_found_forbid_login & 7) >= *(_BYTE *)(((unsigned __int64)p_is_checksum_version_not_found_forbid_login >> 3)
                                                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_checksum_version_not_found_forbid_login);
    }
    is_checksum_version_not_found_forbid_login = v8->security_config.is_checksum_version_not_found_forbid_login;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
    if ( is_checksum_version_not_found_forbid_login )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "checkChecksumValid",
        1697);
      v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v53,
              (const char (*)[58])"version not found, forbid login! checksum_client_version:");
      v12 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" channel_id:");
      val = proto::PlayerLoginReq::channel_id(login_req);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v53);
      v17 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "checkChecksumValid",
        1700);
      v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v53,
              (const char (*)[61])"version not found, but allow login. checksum_client_version:");
      v19 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
      v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" channel_id:");
      val = proto::PlayerLoginReq::channel_id(login_req);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v53);
      v17 = 1;
    }
  }
  result = v17;
  if ( v54 == (char *)v3 )
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

// Line 1730: range 0000000016015F20-00000000160166A9
_BOOL8 __fastcall LoginHandler::isEnvironmentErrorAllowLogin(
        LoginHandler *const this,
        uint32_t uid,
        const proto::PlayerLoginReq *login_req)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r14d
  std::regex *p_white_regex; // r14
  const std::string *v11; // rax
  std::regex *p_black_regex; // r14
  const std::string *v13; // rax
  char v14; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool isEnvironmentErrorKickClosed; // r14
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  _BOOL8 result; // rax
  bool is_kick; // [rsp+2Ah] [rbp-166h]
  bool is_ok; // [rsp+2Bh] [rbp-165h]
  int val; // [rsp+2Ch] [rbp-164h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,EnvironmentErrorConfig> >::_Self __y; // [rsp+30h] [rbp-160h] BYREF
  const SecurityConfig *security_config; // [rsp+38h] [rbp-158h]
  const EnvironmentErrorConfig *config; // [rsp+40h] [rbp-150h]
  const std::string *full_code_str; // [rsp+48h] [rbp-148h]
  std::shared_ptr<google::protobuf::Message> v36; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-130h] BYREF
  char v38[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 18 platform_type:1733 48 4 8 uid:1729 64 8 9 iter:1734 96 16 10 timer:1747 128 16 12 log_"
                        "ptr:1775 160 32 13 code_str:1769";
  *(_QWORD *)(v3 + 16) = LoginHandler::isEnvironmentErrorAllowLogin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->security_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
  *(_DWORD *)(v3 + 32) = proto::PlayerLoginReq::platform_type(login_req);
  *(std::map<unsigned int,EnvironmentErrorConfig>::const_iterator *)(v3 + 64) = std::map<unsigned int,EnvironmentErrorConfig>::find(
                                                                                  &security_config->environment_config_map,
                                                                                  (const std::map<unsigned int,EnvironmentErrorConfig>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,EnvironmentErrorConfig>::end(&security_config->environment_config_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,EnvironmentErrorConfig> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/login_handler.cpp",
      "isEnvironmentErrorAllowLogin",
      1737);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v37, (const char (*)[15])"platform_type:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           v7,
           (const char (*)[36])" environment_config not found! uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v9 = 1;
  }
  else
  {
    config = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,EnvironmentErrorConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,EnvironmentErrorConfig> > *const)(v3 + 64))->second;
    if ( *(char *)(((unsigned __int64)config >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(config);
    if ( !config->is_open )
    {
      v9 = 1;
    }
    else
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 96));
      p_white_regex = &config->white_regex;
      v11 = proto::PlayerLoginReq::environment_error_code[abi:cxx11](login_req);
      is_ok = std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
                v11,
                p_white_regex,
                (std::regex_constants::match_flag_type)0);
      if ( is_ok )
        goto LABEL_16;
      if ( *(char *)(((unsigned __int64)&config->is_check_black_regex >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_check_black_regex);
      if ( config->is_check_black_regex
        && (p_black_regex = &config->black_regex,
            v13 = proto::PlayerLoginReq::environment_error_code[abi:cxx11](login_req),
            std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
              v13,
              p_black_regex,
              (std::regex_constants::match_flag_type)0)) )
      {
        v14 = 1;
      }
      else
      {
LABEL_16:
        v14 = 0;
      }
      is_kick = v14;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
      isEnvironmentErrorKickClosed = FeatureSwitchMgr::isEnvironmentErrorKickClosed(&v15->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
      if ( isEnvironmentErrorKickClosed )
        is_kick = 0;
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/login_handler.cpp",
        "isEnvironmentErrorAllowLogin",
        1760);
      v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v37,
              (const char (*)[40])"environment_error_code check time cost:");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 96));
      v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])off_25ACC620);
      v20 = common::milog::MiLogStream::operator<<(v19, is_ok);
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" is_kick:");
      v22 = common::milog::MiLogStream::operator<<(v21, is_kick);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      if ( is_ok )
      {
        v9 = 1;
      }
      else
      {
        full_code_str = proto::PlayerLoginReq::environment_error_code[abi:cxx11](login_req);
        std::string::basic_string(v3 + 160);
        if ( (unsigned __int64)std::string::size(full_code_str) > 2 )
        {
          std::string::substr(&v37, full_code_str, 2LL, 2LL);
          std::string::operator=(v3 + 160, &v37);
          std::string::~string(&v37);
        }
        common::tools::perf::make_shared<proto_log::AntiCheatBodyEnvironmentError>();
        v24 = std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::AntiCheatBodyEnvironmentError::set_code_str(v24, (const std::string *)(v3 + 160));
        v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::AntiCheatBodyEnvironmentError::set_is_kick(v25, is_kick);
        v26 = std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEnvironmentError,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v37,
          &login_req->google::protobuf::Message);
        proto_log::AntiCheatBodyEnvironmentError::set_player_login_req_str(v26, (std::string *)&v37);
        std::string::~string(&v37);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyEnvironmentError,void>(
          &v36,
          (const std::shared_ptr<proto_log::AntiCheatBodyEnvironmentError> *)(v3 + 128));
        Player::printAntiCheatLogWithoutPlayerData(ANTI_CHEAT_ACTION_ENVIRONMENT_ERROR, *(_DWORD *)(v3 + 48), &v36);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v36);
        v9 = !is_kick;
        std::shared_ptr<proto_log::AntiCheatBodyEnvironmentError>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyEnvironmentError> *const)(v3 + 128));
        std::string::~string((void *)(v3 + 160));
      }
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 96));
    }
  }
  result = v9;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1791: range 00000000160166AA-0000000016016A33
bool __cdecl LoginHandler::isSecurityLibraryMd5Valid(
        LoginHandler *const this,
        uint32_t uid,
        const proto::PlayerLoginReq *login_req)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  bool v8; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool result; // al
  bool is_kick; // [rsp+2Bh] [rbp-A5h]
  google::protobuf::uint32 platform_type; // [rsp+2Ch] [rbp-A4h]
  data::DbSecurityLibraryConfigMgr *security_library_config_mgr; // [rsp+30h] [rbp-A0h]
  const std::string *version_str; // [rsp+38h] [rbp-98h]
  const std::string *md5_str; // [rsp+40h] [rbp-90h]
  const data::DbSecurityLibraryConfig *db_config_ptr; // [rsp+48h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+50h] [rbp-80h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 log_ptr:1817";
  *(_QWORD *)(v3 + 16) = LoginHandler::isSecurityLibraryMd5Valid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v7 = FeatureSwitchMgr::isSecurityLibraryMd5CheckClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( v7 )
  {
    v8 = 1;
    goto LABEL_15;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  security_library_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.db_config_mgr.db_local_config_mgr.security_library_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  platform_type = proto::PlayerLoginReq::platform_type(login_req);
  if ( !data::DbSecurityLibraryConfigMgr::isPlatformTypeEnableCheck(security_library_config_mgr, platform_type) )
  {
    v8 = 1;
    goto LABEL_15;
  }
  version_str = proto::PlayerLoginReq::security_library_version[abi:cxx11](login_req);
  md5_str = proto::PlayerLoginReq::security_library_md5[abi:cxx11](login_req);
  is_kick = 0;
  db_config_ptr = data::DbSecurityLibraryConfigMgr::findDbSecurityLibraryConfig(
                    security_library_config_mgr,
                    platform_type,
                    version_str);
  if ( db_config_ptr )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
           &db_config_ptr->md5_set,
           md5_str) )
    {
      v8 = 1;
      goto LABEL_15;
    }
    if ( *(char *)(((unsigned __int64)&db_config_ptr->is_forbid_login >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&db_config_ptr->is_forbid_login);
    is_kick = db_config_ptr->is_forbid_login;
  }
  common::tools::perf::make_shared<proto_log::AntiCheatBodySecurityLibraryMd5Error>();
  v9 = std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::AntiCheatBodySecurityLibraryMd5Error::set_is_kick(v9, is_kick);
  v10 = std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::AntiCheatBodySecurityLibraryMd5Error::set_report_version_str(v10, version_str);
  v11 = std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySecurityLibraryMd5Error,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::AntiCheatBodySecurityLibraryMd5Error::set_report_md5_str(v11, md5_str);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodySecurityLibraryMd5Error,void>(
    &v20,
    (const std::shared_ptr<proto_log::AntiCheatBodySecurityLibraryMd5Error> *)(v3 + 32));
  Player::printAntiCheatLogWithoutPlayerData(ANTI_CHEAT_ACTION_SECURITY_LIBRARY_MD5_ERROR, uid, &v20);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
  v8 = !is_kick;
  std::shared_ptr<proto_log::AntiCheatBodySecurityLibraryMd5Error>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodySecurityLibraryMd5Error> *const)(v3 + 32));
LABEL_15:
  result = v8;
  if ( v21 == (char *)v3 )
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

// Line 1832: range 0000000016016A34-0000000016017117
int32_t __cdecl LoginHandler::onCheckOnlinePlayerReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 v8; // eax
  common::minet::Packet *v9; // rax
  uint32_t ServiceAppId; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GameserverService *v12; // rax
  unsigned int GameThreadLocal; // eax
  GameserverService *v14; // rax
  unsigned int v15; // eax
  bool v16; // r14
  GameserverApp *v17; // rax
  uint32_t AppId; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint64_t LoginRand; // rax
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t CurLoginTime; // eax
  GameserverApp *v24; // rax
  uint32_t v25; // r14d
  std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  GameserverApp *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  bool is_wait_save; // al
  GameserverService *v37; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  unsigned int v40; // [rsp+18h] [rbp-138h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  const proto::CheckOnlinePlayerReq *req; // [rsp+20h] [rbp-130h]
  proto::CheckOnlinePlayerRsp *rsp_0; // [rsp+28h] [rbp-128h]
  proto::CheckOnlinePlayerRsp_NodeStatus *node_status; // [rsp+30h] [rbp-120h]
  proto::CheckOnlinePlayerRsp_GameStatus *game_status; // [rsp+38h] [rbp-118h]
  std::shared_ptr<proto::CheckOnlinePlayerRsp> p_rsp_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<PlayerSaveWaitData> __a; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-F0h] BYREF
  char v49[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 uid:1845 64 16 12 req_ptr:1834 96 16 12 rsp_ptr:1834 128 16 15 player_ptr:1846";
  *(_QWORD *)(v2 + 16) = LoginHandler::onCheckOnlinePlayerReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckOnlinePlayerReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::CheckOnlinePlayerReq const>(
         (const std::shared_ptr<const proto::CheckOnlinePlayerReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onCheckOnlinePlayerReq",
      1834);
    common::milog::MiLogStream::operator()(&v48, off_25AC86E0);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::CheckOnlinePlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::CheckOnlinePlayerRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckOnlinePlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckOnlinePlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::CheckOnlinePlayerRsp::set_retcode(rsp_0, -1);
    proto::CheckOnlinePlayerRsp::set_retcode(rsp_0, 0);
    v6 = std::__shared_ptr_access<proto::CheckOnlinePlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( proto::CheckOnlinePlayerReq::ns_gameserver_id(v6) )
    {
      node_status = proto::CheckOnlinePlayerRsp::mutable_node_status(rsp_0);
      v7 = std::__shared_ptr_access<proto::CheckOnlinePlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v8 = proto::CheckOnlinePlayerReq::ns_gameserver_id(v7);
      proto::CheckOnlinePlayerRsp_NodeStatus::set_gameserver_id(node_status, v8);
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      ServiceAppId = common::minet::Packet::getServiceAppId(v9, 4u);
      proto::CheckOnlinePlayerRsp_NodeStatus::set_nodeserver_id(node_status, ServiceAppId);
    }
    game_status = proto::CheckOnlinePlayerRsp::mutable_game_status(rsp_0);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v11);
    v12 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v12);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 128), GameThreadLocal + 16);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      v14 = ServiceBox::findService<GameserverService>();
      v15 = (unsigned int)GameserverService::getGameThreadLocal(v14);
      PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)&__a, v15 + 16);
      v16 = std::operator!=<PlayerSaveWaitData>(&__a, 0LL);
      std::shared_ptr<PlayerSaveWaitData>::~shared_ptr(&__a);
      if ( v16 )
        proto::CheckOnlinePlayerRsp_GameStatus::set_is_wait_save(game_status, 1);
    }
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
    {
      v17 = Singleton<GameserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v17);
      proto::CheckOnlinePlayerRsp_GameStatus::set_gameserver_id(game_status, AppId);
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      LoginRand = Player::getLoginRand(v19);
      proto::CheckOnlinePlayerRsp_GameStatus::set_login_rand(game_status, LoginRand);
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      BasicComp = Player::getBasicComp(v21);
      CurLoginTime = PlayerBasicComp::getCurLoginTime(BasicComp);
      proto::CheckOnlinePlayerRsp_GameStatus::set_login_time(game_status, CurLoginTime);
    }
    v24 = Singleton<GameserverApp>::instance();
    v25 = AppBase::getAppId((AppBase *const)v24);
    v26 = std::__shared_ptr_access<proto::CheckOnlinePlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( v25 != proto::CheckOnlinePlayerReq::ns_gameserver_id(v26) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onCheckOnlinePlayerReq",
        1863);
      v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v48, (const char (*)[6])"uid: ");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v28,
              (const char (*)[20])" ns_gameserver_id: ");
      v30 = std::__shared_ptr_access<proto::CheckOnlinePlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::CheckOnlinePlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = proto::CheckOnlinePlayerReq::ns_gameserver_id(v30);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
      v32 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v31,
              (const char (*)[22])" curr gameserver_ip: ");
      v33 = Singleton<GameserverApp>::instance();
      v40 = AppBase::getAppId((AppBase *const)v33);
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &v40);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" is_wait_save: ");
      is_wait_save = proto::CheckOnlinePlayerRsp_GameStatus::is_wait_save(game_status);
      common::milog::MiLogStream::operator<<(v35, is_wait_save);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    v37 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__a,
      p_packet_ptr);
    std::shared_ptr<proto::CheckOnlinePlayerRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::CheckOnlinePlayerRsp> *)(v2 + 96));
    ret = ServiceBase::sendRsp<proto::CheckOnlinePlayerRsp>(v37, &p_rsp_ptr, (common::minet::PacketPtr *)&__a);
    std::shared_ptr<proto::CheckOnlinePlayerRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__a);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/login_handler.cpp",
        "onCheckOnlinePlayerReq",
        1871);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v48,
        (const char (*)[35])"network_mgr_ptr->sendPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    v5 = ret;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    std::shared_ptr<proto::CheckOnlinePlayerRsp>::~shared_ptr((std::shared_ptr<proto::CheckOnlinePlayerRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::CheckOnlinePlayerReq const>::~shared_ptr((std::shared_ptr<const proto::CheckOnlinePlayerReq> *const)(v2 + 64));
  result = v5;
  if ( v49 == (char *)v2 )
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

// Line 1879: range 0000000016017118-0000000016017380
int32_t __cdecl LoginHandler::onNodeserverConnectedAndRegisteredNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  uint32_t v8; // eax
  GameserverService *v9; // r14
  uint32_t v10; // eax
  GameserverService *v11; // r14
  uint32_t v12; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1880";
  *(_QWORD *)(v2 + 16) = LoginHandler::onNodeserverConnectedAndRegisteredNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::NodeserverConnectedAndRegisteredNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::NodeserverConnectedAndRegisteredNotify const>(
         (const std::shared_ptr<const proto::NodeserverConnectedAndRegisteredNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/login_handler.cpp",
      "onNodeserverConnectedAndRegisteredNotify",
      1880);
    common::milog::MiLogStream::operator()(&v15, off_25ACC900);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::NodeserverConnectedAndRegisteredNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = ZTWN11ThreadLocal17work_thread_indexE(v2 + 32, 0LL);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    if ( !*(_DWORD *)v6 )
    {
      v7 = ServiceBox::findService<GameserverService>();
      v8 = proto::NodeserverConnectedAndRegisteredNotify::nodeserver_id(notify);
      GameserverService::sendVersionConfigSyncNotify(v7, v8);
    }
    v9 = ServiceBox::findService<GameserverService>();
    v10 = proto::NodeserverConnectedAndRegisteredNotify::nodeserver_id(notify);
    GameserverService::updateAllPlayerOnlineStatus(v9, v10);
    v11 = ServiceBox::findService<GameserverService>();
    v12 = proto::NodeserverConnectedAndRegisteredNotify::nodeserver_id(notify);
    GameserverService::updateAllHomeOnlineStatus(v11, v12);
    v5 = 0;
  }
  std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify const>::~shared_ptr((std::shared_ptr<const proto::NodeserverConnectedAndRegisteredNotify> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 1895: range 0000000016017382-0000000016017BBB
int32_t __cdecl LoginHandler::onStopServerConfigNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  GameThreadLocal *GameThreadLocal; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  GameserverService *v8; // rax
  unsigned int v9; // eax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t CloudClientIp; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  char v24; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *v33; // rax
  int32_t result; // eax
  bool v35; // [rsp+Fh] [rbp-1A1h]
  unsigned int val; // [rsp+20h] [rbp-190h] BYREF
  uint32_t platform_type; // [rsp+24h] [rbp-18Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v41; // [rsp+40h] [rbp-170h] BYREF
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-150h] BYREF
  char v44[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 8 uid:1905 48 4 11 tmp_ip:1926 64 16 15 player_ptr:1907 96 16 20 cur_session_ptr:1912 128"
                        " 24 12 uid_vec:1898 192 32 18 client_ip_str:1917";
  *(_QWORD *)(v2 + 16) = LoginHandler::onStopServerConfigNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/login_handler.cpp",
    "onStopServerConfigNotify",
    1896);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v43,
    (const char (*)[28])"onStopServerConfigNotify...");
  common::milog::MiLogStream::~MiLogStream(&v43);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  v5 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v5);
  PlayerMgr::getOnlinePlayerUidVec(&GameThreadLocal->player_mgr, (std::vector<unsigned int> *)(v2 + 128));
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
  {
    __for_range = (std::vector<unsigned int> *)(v2 + 128);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v7;
      v8 = ServiceBox::findService<GameserverService>();
      v9 = (unsigned int)GameserverService::getGameThreadLocal(v8);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), v9 + 16);
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
      {
        std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Player::getSession((const Player *const)(v2 + 96));
        if ( !std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96)) )
        {
          v10 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v11 = PlayerSessionProxy::getClientIpStr[abi:cxx11](v10);
          std::string::basic_string(v2 + 192, v11);
          v12 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          platform_type = PlayerSessionProxy::getPlatformType(v12);
          if ( TxtConfigMgr::isCloudPlatform(platform_type) )
          {
            v13 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( PlayerSessionProxy::getCloudClientIp(v13) )
            {
              v14 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              CloudClientIp = PlayerSessionProxy::getCloudClientIp(v14);
              *(_DWORD *)(v2 + 48) = htonl(CloudClientIp);
              common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&v43, *(_DWORD *)(v2 + 48));
              std::string::operator=(v2 + 192, &v43);
              std::string::~string(&v43);
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/handler/login_handler.cpp",
                "onStopServerConfigNotify",
                1928);
              v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v43, (const char (*)[6])"uid: ");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 32));
              v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v17,
                      (const char (*)[21])" getCloudClientIp():");
              v19 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              val = PlayerSessionProxy::getCloudClientIp(v19);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v20,
                      (const char (*)[10])" tmp_ip: ");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 48));
              v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v22,
                      (const char (*)[17])" client_ip_str: ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v2 + 192));
              common::milog::MiLogStream::~MiLogStream(&v43);
            }
          }
          v24 = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v41);
          v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
          v35 = 1;
          if ( !DbDeployConfigMgr::isLoginWhiteIp(
                  &v25->design_config.db_config_mgr.db_deploy_config_mgr,
                  (const std::string *)(v2 + 192)) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v42);
            v24 = 1;
            v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
            if ( !data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
                    &v26->design_config.db_config_mgr.db_local_config_mgr.stop_server_login_white_ip_config_mgr,
                    (const std::string *)(v2 + 192)) )
              v35 = 0;
          }
          if ( v24 )
            std::shared_ptr<Config>::~shared_ptr(&v42);
          std::shared_ptr<Config>::~shared_ptr(&v41);
          if ( v35 )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/login_handler.cpp",
              "onStopServerConfigNotify",
              1935);
            v27 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v43,
                    (const char (*)[25])"is login white ip, uid: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v2 + 32));
            v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v28,
                    (const char (*)[17])" client_ip_str: ");
            v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v29,
                    (const std::string *)(v2 + 192));
            v31 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v30,
                    (const char (*)[19])" cloud_client_ip: ");
            v32 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            val = PlayerSessionProxy::getCloudClientIp(v32);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
            common::milog::MiLogStream::~MiLogStream(&v43);
          }
          else
          {
            v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            Player::disconnectSession(v33, 6u);
          }
          std::string::~string((void *)(v2 + 192));
        }
        std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  result = 0;
  if ( v44 == (char *)v2 )
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

// Line 1946: range 0000000016017BBC-0000000016017D92
int32_t __cdecl LoginHandler::onReloadConfigNotify(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  std::shared_ptr<ConfigBase> *v4; // rax
  GameserverService *v5; // rax
  GameThreadLocal *GameThreadLocal; // rax
  GameserverService *v7; // rax
  GameThreadLocal *v8; // rax
  GameserverService *v9; // rax
  HomeMgr *p_home_mgr; // rdi
  unsigned __int64 v11; // rdx
  GameserverService *v12; // rax
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/login_handler.cpp",
    "onReloadConfigNotify",
    1947);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v15, (const char (*)[24])"onReloadConfigNotify...");
  common::milog::MiLogStream::~MiLogStream(&v15);
  v2 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(_QWORD *)v2 + 32LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v3)(&__r, v2);
  v4 = (std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(&__r);
  std::shared_ptr<ConfigBase>::operator=(v4, &__r);
  std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  v5 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v5);
  GlobalActivityMgr::onReloadConfig(&GameThreadLocal->global_activity_mgr);
  v7 = ServiceBox::findService<GameserverService>();
  v8 = GameserverService::getGameThreadLocal(v7);
  PlayerMgr::onReloadConfig(&v8->player_mgr);
  v9 = ServiceBox::findService<GameserverService>();
  p_home_mgr = &GameserverService::getGameThreadLocal(v9)->home_mgr;
  HomeMgr::onReloadConfig(p_home_mgr);
  v11 = ZTWN11ThreadLocal17work_thread_indexE(p_home_mgr, &__r);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  if ( !*(_DWORD *)v11 )
  {
    v12 = ServiceBox::findService<GameserverService>();
    GlobalRateLimiterMgr::onReloadConfig(&v12->global_rate_limiter_mgr);
  }
  return 0;
};
