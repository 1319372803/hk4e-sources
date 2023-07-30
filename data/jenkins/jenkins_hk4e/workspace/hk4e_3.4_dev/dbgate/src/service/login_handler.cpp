// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/login_handler.cpp

// Line 38: range 000000000C5D8FD8-000000000C5DA149
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
  __m128i v41; // [rsp+0h] [rbp-160h] BYREF
  __m128i v42; // [rsp+10h] [rbp-150h] BYREF
  __m128i v43; // [rsp+20h] [rbp-140h] BYREF
  __m128i v44; // [rsp+30h] [rbp-130h] BYREF
  __m128i v45; // [rsp+40h] [rbp-120h] BYREF
  __m128i v46; // [rsp+50h] [rbp-110h] BYREF
  __m128i v47; // [rsp+60h] [rbp-100h] BYREF
  __m128i v48; // [rsp+70h] [rbp-F0h] BYREF
  __m128i v49; // [rsp+80h] [rbp-E0h] BYREF
  __m128i v50; // [rsp+90h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+A0h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+A8h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+B0h] [rbp-B0h]
  LoginHandler *thisa; // [rsp+B8h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+CCh] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v56; // [rsp+D0h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+D8h] [rbp-88h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+E0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,const std::_Placeholder<1>&>::type v59; // [rsp+F0h] [rbp-70h] BYREF
  common::milog::MiLogStream v60; // [rsp+110h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10198;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  push_packet_func_map,
                  &__x)._M_node;
  v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(push_packet_func_map)._M_node;
  if ( std::operator!=(&v56, &__y) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "addPacketFuncToMap",
      40);
    common::milog::MiLogStream::operator()(&v60, "can not add repeat push func for cmd_id=%u", 10198LL);
    common::milog::MiLogStream::~MiLogStream(&v60);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onPushSavePlayerDataReq;
    __f[1] = 0LL;
    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
      &v59,
      __f,
      (LoginHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10198;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           push_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
      v7,
      &v59);
    __x = 12012;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    push_packet_func_mapa,
                    &__x)._M_node;
    v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(push_packet_func_mapa)._M_node;
    if ( std::operator!=(&v56, &__y) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "addPacketFuncToMap",
        41);
      common::milog::MiLogStream::operator()(&v60, "can not add repeat push func for cmd_id=%u", 12012LL);
      common::milog::MiLogStream::~MiLogStream(&v60);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onPushSaveHomeDataReq;
      __f[1] = 0LL;
      std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
        &v59,
        __f,
        (LoginHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 12012;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              push_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
        v10,
        &v59);
      __x = 172;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      push_fail_packet_func_mapa,
                      &__x)._M_node;
      v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(push_fail_packet_func_mapa)._M_node;
      if ( std::operator!=(&v56, &__y) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "addPacketFuncToMap",
          42);
        common::milog::MiLogStream::operator()(&v60, "can not add repeat push func for cmd_id=%u", 172LL);
        common::milog::MiLogStream::~MiLogStream(&v60);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v41.m128i_i64[0] = (__int64)LoginHandler::onPushFailGetPlayerTokenReq;
        v41.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v41);
        std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
          &v59,
          __f,
          (LoginHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 172;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                push_fail_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
          v13,
          &v59);
        __x = 112;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        push_fail_packet_func_mapa,
                        &__x)._M_node;
        v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(push_fail_packet_func_mapa)._M_node;
        if ( std::operator!=(&v56, &__y) )
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "addPacketFuncToMap",
            43);
          common::milog::MiLogStream::operator()(&v60, "can not add repeat push func for cmd_id=%u", 112LL);
          common::milog::MiLogStream::~MiLogStream(&v60);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v42.m128i_i64[0] = (__int64)LoginHandler::onPushFailPlayerLoginReq;
          v42.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v42);
          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
            &v59,
            __f,
            (LoginHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 112;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  push_fail_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
            v16,
            &v59);
          __x = 12072;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          push_fail_packet_func_mapa,
                          &__x)._M_node;
          v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(push_fail_packet_func_mapa)._M_node;
          if ( std::operator!=(&v56, &__y) )
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/service/login_handler.cpp",
              "addPacketFuncToMap",
              44);
            common::milog::MiLogStream::operator()(&v60, "can not add repeat push func for cmd_id=%u", 12072LL);
            common::milog::MiLogStream::~MiLogStream(&v60);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v43.m128i_i64[0] = (__int64)LoginHandler::onPushFailGetHomeDataReq;
            v43.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v43);
            std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
              &v59,
              __f,
              (LoginHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 12072;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    push_fail_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
              v19,
              &v59);
            __x = 172;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v56, &__y) )
            {
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/login_handler.cpp",
                "addPacketFuncToMap",
                47);
              common::milog::MiLogStream::operator()(&v60, "can not add repeat process func for cmd_id=%u", 172LL);
              common::milog::MiLogStream::~MiLogStream(&v60);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v44.m128i_i64[0] = (__int64)LoginHandler::onGetPlayerTokenReq;
              v44.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v44);
              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                &v59,
                __f,
                (LoginHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 172;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                v22,
                &v59);
              __x = 112;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v56, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/service/login_handler.cpp",
                  "addPacketFuncToMap",
                  48);
                common::milog::MiLogStream::operator()(&v60, "can not add repeat process func for cmd_id=%u", 112LL);
                common::milog::MiLogStream::~MiLogStream(&v60);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v45.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginReq;
                v45.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v45);
                std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                  &v59,
                  __f,
                  (LoginHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 112;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v59);
                __x = 10198;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v56, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/service/login_handler.cpp",
                    "addPacketFuncToMap",
                    49);
                  common::milog::MiLogStream::operator()(&v60, "can not add repeat process func for cmd_id=%u", 10198LL);
                  common::milog::MiLogStream::~MiLogStream(&v60);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v46.m128i_i64[0] = (__int64)LoginHandler::onSavePlayerDataReq;
                  v46.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v46);
                  std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                    &v59,
                    __f,
                    (LoginHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10198;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v59);
                  __x = 10148;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v56, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v60,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/service/login_handler.cpp",
                      "addPacketFuncToMap",
                      50);
                    common::milog::MiLogStream::operator()(
                      &v60,
                      "can not add repeat process func for cmd_id=%u",
                      10148LL);
                    common::milog::MiLogStream::~MiLogStream(&v60);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v47.m128i_i64[0] = (__int64)LoginHandler::onSavePlayerExtraBinDataNotify;
                    v47.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v47);
                    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                      &v59,
                      __f,
                      (LoginHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 10148;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v59);
                    __x = 10131;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v56, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v60,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/service/login_handler.cpp",
                        "addPacketFuncToMap",
                        51);
                      common::milog::MiLogStream::operator()(
                        &v60,
                        "can not add repeat process func for cmd_id=%u",
                        10131LL);
                      common::milog::MiLogStream::~MiLogStream(&v60);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v48.m128i_i64[0] = (__int64)LoginHandler::onSaveBlockDataReq;
                      v48.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v48);
                      std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                        &v59,
                        __f,
                        (LoginHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 10131;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v59);
                      __x = 12072;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v56, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v60,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/service/login_handler.cpp",
                          "addPacketFuncToMap",
                          52);
                        common::milog::MiLogStream::operator()(
                          &v60,
                          "can not add repeat process func for cmd_id=%u",
                          12072LL);
                        common::milog::MiLogStream::~MiLogStream(&v60);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v49.m128i_i64[0] = (__int64)LoginHandler::onGetHomeDataReq;
                        v49.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v49);
                        std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                          &v59,
                          __f,
                          (LoginHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 12072;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v59);
                        __x = 12012;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v56._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v56, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v60,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/service/login_handler.cpp",
                            "addPacketFuncToMap",
                            53);
                          common::milog::MiLogStream::operator()(
                            &v60,
                            "can not add repeat process func for cmd_id=%u",
                            12012LL);
                          common::milog::MiLogStream::~MiLogStream(&v60);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v50.m128i_i64[0] = (__int64)LoginHandler::onSaveHomeDataReq;
                          v50.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v50);
                          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                            &v59,
                            __f,
                            (LoginHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 12012;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v59);
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
};

// Line 64: range 000000000C5DA14A-000000000C5DA421
int32_t __cdecl LoginHandler::onPushSavePlayerDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  proto::SavePlayerDataReq *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::minet::Packet *v5; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // eax
  int32_t v8; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // eax
  uint32_t v11; // r15d
  uint32_t v12; // eax
  int32_t result; // eax
  const proto::PlayerData *player_data; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (proto::SavePlayerDataReq *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::SavePlayerDataReq *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 6 req:65";
  v2->player_data_ = (proto::PlayerData *)LoginHandler::onPushSavePlayerDataReq;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::SavePlayerDataReq::SavePlayerDataReq(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::SavePlayerDataReq>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPushSavePlayerDataReq",
      68);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    common::milog::MiLogStream::operator()(&v15, "get proto for uid=%u save data failed", UserId);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  else
  {
    player_data = proto::SavePlayerDataReq::player_data(v2 + 1);
    if ( proto::PlayerData::ByteSizeLong(player_data) )
    {
      v11 = proto::PlayerData::data_version(player_data);
      v12 = proto::PlayerData::uid(player_data);
      DataVersionMgr::updateDataVersion(this->data_version_mgr_, v12, v11);
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPushSavePlayerDataReq",
        76);
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v10 = common::minet::Packet::getUserId(v9);
      common::milog::MiLogStream::operator()(&v15, "uid=%u, player_data is empty", v10);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v8 = -1;
    }
  }
  proto::SavePlayerDataReq::~SavePlayerDataReq(v2 + 1);
  result = v8;
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 86: range 000000000C5DA422-000000000C5DA6F9
int32_t __cdecl LoginHandler::onPushSaveHomeDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  proto::SaveHomeDataReq *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::minet::Packet *v5; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // eax
  int32_t v8; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // eax
  uint32_t v11; // r15d
  uint32_t v12; // eax
  int32_t result; // eax
  const proto::HomeData *home_data; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (proto::SaveHomeDataReq *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::SaveHomeDataReq *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 6 req:87";
  v2->home_data_ = (proto::HomeData *)LoginHandler::onPushSaveHomeDataReq;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::SaveHomeDataReq::SaveHomeDataReq(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::SaveHomeDataReq>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPushSaveHomeDataReq",
      90);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    common::milog::MiLogStream::operator()(&v15, "get proto for uid=%u save data failed", UserId);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  else
  {
    home_data = proto::SaveHomeDataReq::home_data(v2 + 1);
    if ( proto::HomeData::ByteSizeLong(home_data) )
    {
      v11 = proto::HomeData::data_version(home_data);
      v12 = proto::HomeData::uid(home_data);
      DataVersionMgr::updateDataVersion(&this->data_version_mgr_[1], v12, v11);
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPushSaveHomeDataReq",
        98);
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v10 = common::minet::Packet::getUserId(v9);
      common::milog::MiLogStream::operator()(&v15, "uid=%u, home_data is empty", v10);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v8 = -1;
    }
  }
  proto::SaveHomeDataReq::~SaveHomeDataReq(v2 + 1);
  result = v8;
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 107: range 000000000C5DA6FA-000000000C5DABFB
int32_t __cdecl LoginHandler::onPushFailGetPlayerTokenReq(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  DbgateService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const std::string *v15; // rax
  DbgateService *v16; // r14
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::GetPlayerTokenReq *req; // [rsp+20h] [rbp-E0h]
  proto::GetPlayerTokenRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::GetPlayerTokenRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:108 64 16 11 rsp_ptr:108";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPushFailGetPlayerTokenReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerTokenReq const>(
         (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPushFailGetPlayerTokenReq",
      108);
    common::milog::MiLogStream::operator()(&v31, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetPlayerTokenRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetPlayerTokenRsp::set_retcode(rsp_0, -1);
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "onPushFailGetPlayerTokenReq",
      110);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v31,
           (const char (*)[42])"GetPlayerTokenReq reject, max queue size:");
    v7 = ServiceBox::findService<DbgateService>();
    val = ServiceBase::getPacketQueueMaxSize(v7);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" account_type:");
    v26 = proto::GetPlayerTokenReq::account_type(req);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v26);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" account_uid:");
    v12 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])"account_token: ");
    v15 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
    common::milog::MiLogStream::~MiLogStream(&v31);
    proto::GetPlayerTokenRsp::set_retcode(rsp_0, 25);
    v16 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetPlayerTokenRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetPlayerTokenRsp> *)(v2 + 64));
    LOBYTE(v16) = ServiceBase::sendRsp<proto::GetPlayerTokenRsp>(v16, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v16 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPushFailGetPlayerTokenReq",
        117);
      v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v31,
              (const char (*)[38])"[LOGIN] sendRsp failed, account_type:");
      v26 = proto::GetPlayerTokenReq::account_type(req);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v26);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" account_uid:");
      v20 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])"account_token: ");
      v23 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v2 + 32));
  result = v5;
  if ( v32 == (char *)v2 )
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

// Line 126: range 000000000C5DABFC-000000000C5DB05D
int32_t __cdecl LoginHandler::onPushFailPlayerLoginReq(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  DbgateService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  DbgateService *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int UserId; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::PlayerLoginReq *req; // [rsp+20h] [rbp-E0h]
  proto::PlayerLoginRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::PlayerLoginRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:127 64 16 11 rsp_ptr:127";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPushFailPlayerLoginReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerLoginReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerLoginReq const>(
         (const std::shared_ptr<const proto::PlayerLoginReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPushFailPlayerLoginReq",
      127);
    common::milog::MiLogStream::operator()(&v21, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PlayerLoginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerLoginRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerLoginRsp::set_retcode(rsp_0, -1);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "onPushFailPlayerLoginReq",
      129);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v21,
           (const char (*)[39])"PlayerLoginReq reject, max queue size:");
    v7 = ServiceBox::findService<DbgateService>();
    val = ServiceBase::getPacketQueueMaxSize(v7);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &UserId);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::PlayerLoginRsp::set_retcode(rsp_0, 25);
    v11 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::PlayerLoginRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::PlayerLoginRsp> *)(v2 + 64));
    LOBYTE(v11) = ServiceBase::sendRsp<proto::PlayerLoginRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v11 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPushFailPlayerLoginReq",
        134);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v21,
              (const char (*)[29])"[LOGIN] sendRsp failed, uid:");
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserId = common::minet::Packet::getUserId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &UserId);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerLoginReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginReq> *const)(v2 + 32));
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

// Line 141: range 000000000C5DB05E-000000000C5DB4BF
int32_t __cdecl LoginHandler::onPushFailGetHomeDataReq(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  DbgateService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  DbgateService *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int HomeUserId; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::GetHomeDataReq *req; // [rsp+20h] [rbp-E0h]
  proto::GetHomeDataRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::GetHomeDataRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:142 64 16 11 rsp_ptr:142";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPushFailGetHomeDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetHomeDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetHomeDataReq const>(
         (const std::shared_ptr<const proto::GetHomeDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPushFailGetHomeDataReq",
      142);
    common::milog::MiLogStream::operator()(&v21, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetHomeDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHomeDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetHomeDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetHomeDataRsp::set_retcode(rsp_0, -1);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "onPushFailGetHomeDataReq",
      144);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v21,
           (const char (*)[39])"GetHomeDataReq reject, max queue size:");
    v7 = ServiceBox::findService<DbgateService>();
    val = ServiceBase::getPacketQueueMaxSize(v7);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    HomeUserId = common::minet::Packet::getHomeUserId(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &HomeUserId);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::GetHomeDataRsp::set_retcode(rsp_0, 6);
    v11 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetHomeDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetHomeDataRsp> *)(v2 + 64));
    LOBYTE(v11) = ServiceBase::sendRsp<proto::GetHomeDataRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::GetHomeDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v11 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPushFailGetHomeDataReq",
        149);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v21,
              (const char (*)[29])"[LOGIN] sendRsp failed, uid:");
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      HomeUserId = common::minet::Packet::getUserId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &HomeUserId);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::shared_ptr<proto::GetHomeDataRsp>::~shared_ptr((std::shared_ptr<proto::GetHomeDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetHomeDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetHomeDataReq> *const)(v2 + 32));
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

// Line 157: range 000000000C5DB6F0-000000000C5DD8A9
int32_t __cdecl LoginHandler::onGetPlayerTokenReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 p_next_packet_queue_index; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  opentracing::v3::string_view v9; // rdx
  DbgateApp *v10; // rax
  uint32_t AppId; // eax
  int32_t v12; // r14d
  const std::string *v13; // rax
  const std::string *v14; // rax
  google::protobuf::uint32 v15; // eax
  const std::string *v16; // rax
  const std::string *v17; // rax
  google::protobuf::uint32 v18; // eax
  DbgateService *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // r14
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const std::string *v33; // r14
  uint32_t v34; // eax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const std::string *v38; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t UserIp; // eax
  bool v42; // r15
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // r14d
  google::protobuf::uint32 v47; // eax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int v53; // r14d
  bool is_proficient_player; // al
  size_t v56; // r14
  const char *v57; // rax
  common::milog::MiLogStream *v59; // rax
  google::protobuf::uint32 v60; // eax
  common::milog::MiLogStream *v61; // r14
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  const std::string *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  uint32_t v69; // eax
  bool v70; // r15
  RegisterRateMgr *p_register_rate_mgr; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  uint32_t v73; // eax
  common::milog::MiLogStream *v74; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  uint32_t v76; // eax
  uint32_t v77; // r15d
  const std::string *v78; // r14
  uint32_t v79; // eax
  uint32_t v80; // eax
  const std::string *v81; // rax
  const std::string *v82; // rax
  const std::string *v84; // rax
  const std::string *v85; // rax
  int v86; // r14d
  common::milog::MiLogStream *v87; // r14
  const std::string *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // r14
  const std::string *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // r14
  const std::string *v94; // rax
  google::protobuf::uint32 v95; // eax
  const std::string *v96; // rax
  google::protobuf::uint32 v97; // eax
  bool is_guest; // al
  google::protobuf::uint32 v99; // eax
  google::protobuf::uint32 v100; // eax
  const std::string *v101; // rax
  DbgateService *v102; // r14
  common::milog::MiLogStream *v103; // r14
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r14
  const std::string *v106; // rax
  common::milog::MiLogStream *v107; // r14
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r14
  common::milog::MiLogStream *v110; // r14
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // r14
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // r14
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // r14
  const std::string *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // r14
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // r14
  const std::string *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // r14
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v130; // rax
  uint32_t v131; // eax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // r14
  int32_t result; // eax
  int v135; // [rsp+0h] [rbp-460h]
  std::atomic<long unsigned int> *v136; // [rsp+8h] [rbp-458h]
  const std::shared_ptr<common::minet::Packet> *p_packet_ptra; // [rsp+10h] [rbp-450h]
  LoginHandler *thisa; // [rsp+18h] [rbp-448h]
  int v139; // [rsp+20h] [rbp-440h]
  void *v140; // [rsp+28h] [rbp-438h] BYREF
  unsigned int v141; // [rsp+30h] [rbp-430h] BYREF
  unsigned int v142; // [rsp+34h] [rbp-42Ch] BYREF
  unsigned int v143; // [rsp+38h] [rbp-428h] BYREF
  unsigned int v144; // [rsp+3Ch] [rbp-424h] BYREF
  unsigned int v145; // [rsp+40h] [rbp-420h] BYREF
  unsigned int val; // [rsp+44h] [rbp-41Ch] BYREF
  int32_t idx; // [rsp+48h] [rbp-418h]
  int size; // [rsp+4Ch] [rbp-414h]
  char *v149; // [rsp+50h] [rbp-410h] BYREF
  const proto::GetPlayerTokenReq *req; // [rsp+58h] [rbp-408h]
  proto::GetPlayerTokenRsp *rsp_0; // [rsp+60h] [rbp-400h]
  const char *data; // [rsp+68h] [rbp-3F8h]
  std::shared_ptr<proto::GetPlayerTokenRsp> p_rsp_ptr; // [rsp+70h] [rbp-3F0h] BYREF
  DbgateService operation_name; // [rsp+80h] [rbp-3E0h] BYREF

  thisa = this;
  p_packet_ptra = p_packet_ptr;
  p_next_packet_queue_index = (unsigned __int64)&operation_name.next_packet_queue_index;
  v136 = &operation_name.next_packet_queue_index;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      p_next_packet_queue_index = v3;
  }
  *(_QWORD *)p_next_packet_queue_index = 1102416563LL;
  *(_QWORD *)(p_next_packet_queue_index + 8) = "14 48 1 20 is_account_exist:187 64 1 19 is_player_exist:249 80 1 10 optio"
                                               "n:262 96 4 11 retcode:158 112 8 17 root_span_ctx:159 144 16 11 req_ptr:17"
                                               "3 176 16 11 rsp_ptr:173 208 24 23 proto_ext_json_data:235 272 24 19 proto"
                                               "_json_data:258 336 40 10 status:261 416 40 32 player_before_login_bin_dat"
                                               "a:281 496 56 14 span_proxy:160 592 80 18 psn_online_row:368 704 120 7 row:186";
  *(_QWORD *)(p_next_packet_queue_index + 16) = LoginHandler::onGetPlayerTokenReq;
  v4 = (_DWORD *)(p_next_packet_queue_index >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862734] = -218959360;
  v4[536862735] = 62194;
  v4[536862737] = -218959360;
  v4[536862738] = 62194;
  v4[536862741] = -218959118;
  v4[536862745] = -218103808;
  v4[536862746] = -202116109;
  *(_DWORD *)(p_next_packet_queue_index + 96) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11]((std::string *)&operation_name.loop_func_interval_, v6);
  TracingMgr::extract(
    p_next_packet_queue_index + 112,
    v5,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&operation_name.loop_func_interval_);
  std::string::~string(&operation_name.loop_func_interval_);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::onGetPlayerTokenReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&operation_name.loop_func_interval_,
    (LoginHandler::onGetPlayerTokenReq::<lambda(SpanPtr&)>)(p_next_packet_queue_index + 96));
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(p_next_packet_queue_index + 112));
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)&operation_name, "onGetPlayerTokenReq");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  v9.length_ = (size_t)operation_name.name_._M_dataplus._M_p;
  v9.data_ = (const char *)operation_name._vptr_ServiceBase;
  SpanProxy::SpanProxy(
    (SpanProxy *const)(p_next_packet_queue_index + 496),
    v8,
    v9,
    v7,
    0,
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)&operation_name.loop_func_interval_);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function((std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&operation_name.loop_func_interval_);
  v10 = Singleton<DbgateApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v10);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&operation_name.loop_func_interval_, AppId);
  opentracing::v3::Value::Value(
    (opentracing::v3::Value *const)(p_next_packet_queue_index + 416),
    (std::string *)&operation_name.loop_func_interval_);
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)&operation_name, "app_id");
  SpanProxy::SetTag(
    (SpanProxy *const)(p_next_packet_queue_index + 496),
    *(opentracing::v3::string_view *)&operation_name._vptr_ServiceBase,
    (const opentracing::v3::Value *)(p_next_packet_queue_index + 416));
  opentracing::v3::Value::~Value((opentracing::v3::Value *const)(p_next_packet_queue_index + 416));
  std::string::~string(&operation_name.loop_func_interval_);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(p_next_packet_queue_index
                                                                                              + 144));
  if ( std::operator==<proto::GetPlayerTokenReq const>(
         (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(p_next_packet_queue_index + 144),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenReq",
      173);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
      "get proto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
    v12 = -1;
    goto LABEL_95;
  }
  req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_next_packet_queue_index + 144));
  common::tools::perf::make_shared<proto::GetPlayerTokenRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_next_packet_queue_index + 176));
  proto::GetPlayerTokenRsp::set_retcode(rsp_0, -1);
  v13 = proto::GetPlayerTokenReq::country_code[abi:cxx11](req);
  proto::GetPlayerTokenRsp::set_country_code(rsp_0, v13);
  v14 = proto::GetPlayerTokenReq::birthday[abi:cxx11](req);
  proto::GetPlayerTokenRsp::set_birthday(rsp_0, v14);
  v15 = proto::GetPlayerTokenReq::minors_reg_min_age(req);
  proto::GetPlayerTokenRsp::set_minors_reg_min_age(rsp_0, v15);
  v16 = proto::GetPlayerTokenReq::client_ip_str[abi:cxx11](req);
  proto::GetPlayerTokenRsp::set_client_ip_str(rsp_0, v16);
  v17 = proto::GetPlayerTokenReq::client_rand_key[abi:cxx11](req);
  proto::GetPlayerTokenRsp::set_server_rand_key(rsp_0, v17);
  v18 = proto::GetPlayerTokenReq::key_id(req);
  proto::GetPlayerTokenRsp::set_key_id(rsp_0, v18);
  v19 = ServiceBox::findService<DbgateService>();
  ExternalMonitorReportMgr::addGetTokenValue(&v19->external_monitor_report_mgr);
  TablePlayerUid::TablePlayerUid((TablePlayerUid *const)(p_next_packet_queue_index + 704));
  *(_BYTE *)(p_next_packet_queue_index + 48) = 0;
  if ( proto::GetPlayerTokenReq::uid(req) )
  {
    ServiceBox::findService<DbgateService>();
    DbgateService::getConfig(&operation_name);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
    v21 = !Config::isDevSdkAccount(v20);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
    if ( v21 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "onGetPlayerTokenReq",
        195);
      v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
              (const char (*)[32])"isDevSdkAccount is false, uid: ");
      val = proto::GetPlayerTokenReq::uid(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
      goto LABEL_74;
    }
    v23 = proto::GetPlayerTokenReq::uid(req);
    *(_DWORD *)(p_next_packet_queue_index + 96) = MysqlOpPlayerData::selectPlayerUidByUid(
                                                    v23,
                                                    (TablePlayerUid *)(p_next_packet_queue_index + 704),
                                                    (bool *)(p_next_packet_queue_index + 48));
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(p_next_packet_queue_index + 96) = LoginHandler::checkLoginAccountCondition(
                                                    this,
                                                    (common::minet::PacketPtr *)&operation_name,
                                                    req);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    if ( *(_DWORD *)(p_next_packet_queue_index + 96) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onGetPlayerTokenReq",
        208);
      v24 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
              (const char (*)[52])"[LOGIN] checkAccountCondition failed, account_type:");
      val = proto::GetPlayerTokenReq::account_type(req);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v25, (const char (*)[14])" account_uid:");
      v27 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])"account_token: ");
      v30 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
      v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, v30);
      v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" retcode:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(p_next_packet_queue_index + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
      proto::GetPlayerTokenRsp::set_retcode(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 96));
      goto LABEL_74;
    }
    v33 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    v34 = proto::GetPlayerTokenReq::account_type(req);
    *(_DWORD *)(p_next_packet_queue_index + 96) = MysqlOpPlayerData::selectPlayerUidByAccount(
                                                    v34,
                                                    v33,
                                                    (TablePlayerUid *)(p_next_packet_queue_index + 704),
                                                    (bool *)(p_next_packet_queue_index + 48));
  }
  if ( *(_DWORD *)(p_next_packet_queue_index + 96) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenReq",
      220);
    v35 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
            (const char (*)[47])"[LOGIN] onGetPlayerToken failed, account_type:");
    val = proto::GetPlayerTokenReq::account_type(req);
    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
    v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])" account_uid:");
    v38 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, v38);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
    proto::GetPlayerTokenRsp::set_retcode(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 96));
  }
  else if ( *(_BYTE *)(p_next_packet_queue_index + 48) )
  {
    ServiceBox::findService<DbgateService>();
    DbgateService::getConfig(&operation_name);
    v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
    v42 = 0;
    if ( Config::isCheckLoginBlackIp(v39) )
    {
      v40 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserIp = common::minet::Packet::getUserIp(v40);
      if ( !LoginHandler::isAllowIpLogin(this, UserIp) )
        v42 = 1;
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
    if ( v42 )
    {
      proto::GetPlayerTokenRsp::set_retcode(rsp_0, 37);
    }
    else
    {
      proto::PlayerExtJsonData::PlayerExtJsonData((proto::PlayerExtJsonData *const)(p_next_packet_queue_index + 208));
      if ( (unsigned __int8)std::string::empty(p_next_packet_queue_index + 776) == 1 )
        goto LABEL_27;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 336));
      google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(p_next_packet_queue_index + 80));
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(p_next_packet_queue_index + 416),
        v135,
        (int)&operation_name.next_packet_queue_index,
        (int)p_packet_ptr,
        (int)this,
        v139,
        v140,
        v141,
        v143);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)(p_next_packet_queue_index + 336),
        (const google::protobuf::util::Status *)(p_next_packet_queue_index + 416));
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 416));
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(p_next_packet_queue_index
                                                                                           + 336)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onGetPlayerTokenReq",
          243);
        v43 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
                (const char (*)[41])"[LOGIN] JsonStringToMessage failed, uid:");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(p_next_packet_queue_index + 704));
        v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" ext:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v45,
          (const std::string *)(p_next_packet_queue_index + 776));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
        v46 = 0;
      }
      else
      {
        v47 = proto::PlayerExtJsonData::reg_platform((const proto::PlayerExtJsonData *const)(p_next_packet_queue_index
                                                                                           + 208));
        proto::GetPlayerTokenRsp::set_reg_platform(rsp_0, v47);
        v46 = 1;
      }
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 336));
      if ( v46 == 1 )
      {
LABEL_27:
        *(_BYTE *)(p_next_packet_queue_index + 64) = 0;
        TablePlayerJsonAndExtraBinData::TablePlayerJsonAndExtraBinData((TablePlayerJsonAndExtraBinData *const)(p_next_packet_queue_index + 592));
        *(_DWORD *)(p_next_packet_queue_index + 96) = MysqlOpPlayerData::selectPlayerJsonAndExtraBinDataByUid(
                                                        *(_DWORD *)(p_next_packet_queue_index + 704),
                                                        (TablePlayerJsonAndExtraBinData *)(p_next_packet_queue_index
                                                                                         + 592),
                                                        (bool *)(p_next_packet_queue_index + 64));
        if ( *(_DWORD *)(p_next_packet_queue_index + 96) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onGetPlayerTokenReq",
            254);
          v48 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
                  (const char (*)[58])"[LOGIN] selectPlayerJsonAndExtraBinDataByUid failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v48,
            (const unsigned int *)(p_next_packet_queue_index + 704));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
        }
        else
        {
          proto::PlayerJsonData::PlayerJsonData((proto::PlayerJsonData *const)(p_next_packet_queue_index + 272));
          if ( !*(_BYTE *)(p_next_packet_queue_index + 64)
            || (unsigned __int8)std::string::empty(p_next_packet_queue_index + 600) == 1 )
          {
            goto LABEL_38;
          }
          google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 336));
          google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(p_next_packet_queue_index + 80));
          google::protobuf::util::JsonStringToMessage(
            (google::protobuf::util::Status *)(p_next_packet_queue_index + 416),
            v135,
            (int)v136,
            (int)p_packet_ptra,
            (int)thisa,
            v139,
            v140,
            v141,
            v143);
          google::protobuf::util::Status::operator=(
            (google::protobuf::util::Status *const)(p_next_packet_queue_index + 336),
            (const google::protobuf::util::Status *)(p_next_packet_queue_index + 416));
          google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 416));
          if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(p_next_packet_queue_index
                                                                                               + 336)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onGetPlayerTokenReq",
              266);
            v50 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
                    (const char (*)[41])"[LOGIN] JsonStringToMessage failed, uid:");
            v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    (const unsigned int *)(p_next_packet_queue_index + 704));
            v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v51,
                    (const char (*)[12])" json_data:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v52,
              (const std::string *)(p_next_packet_queue_index + 600));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
            v53 = 0;
          }
          else
          {
            v53 = 1;
          }
          google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(p_next_packet_queue_index + 336));
          if ( v53 == 1 )
          {
LABEL_38:
            proto::GetPlayerTokenRsp::set_uid(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 704));
            is_proficient_player = proto::PlayerJsonData::is_proficient_player((const proto::PlayerJsonData *const)(p_next_packet_queue_index + 272));
            proto::GetPlayerTokenRsp::set_is_proficient_player(rsp_0, is_proficient_player);
            if ( !mysqlpp::String::is_null((const mysqlpp::String *const)(p_next_packet_queue_index + 632))
              && mysqlpp::String::data((const mysqlpp::String *const)(p_next_packet_queue_index + 632)) )
            {
              v56 = mysqlpp::String::length((const mysqlpp::String *const)(p_next_packet_queue_index + 632));
              v57 = mysqlpp::String::c_str((const mysqlpp::String *const)(p_next_packet_queue_index + 632));
              proto::GetPlayerTokenRsp::set_extra_bin_data(rsp_0, v57, v56);
            }
            if ( !mysqlpp::String::is_null((const mysqlpp::String *const)(p_next_packet_queue_index + 648))
              && mysqlpp::String::data((const mysqlpp::String *const)(p_next_packet_queue_index + 648)) )
            {
              proto::PlayerBeforeLoginBinData::PlayerBeforeLoginBinData((proto::PlayerBeforeLoginBinData *const)(p_next_packet_queue_index + 416));
              data = mysqlpp::String::data((const mysqlpp::String *const)(p_next_packet_queue_index + 648));
              size = mysqlpp::String::length((const mysqlpp::String *const)(p_next_packet_queue_index + 648));
              if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromArray(
                                      (google::protobuf::MessageLite *)(p_next_packet_queue_index + 416),
                                      data,
                                      size) != 1 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/service/login_handler.cpp",
                  "onGetPlayerTokenReq",
                  289);
                v59 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                        (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
                        (const char (*)[59])"proto::PlayerBeforeLoginBinData ParseFromArray fails, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v59,
                  (const unsigned int *)(p_next_packet_queue_index + 704));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
              }
              else
              {
                for ( idx = 0;
                      idx < proto::PlayerBeforeLoginBinData::finish_quest_res_collection_size((const proto::PlayerBeforeLoginBinData *const)(p_next_packet_queue_index + 416));
                      ++idx )
                {
                  v60 = proto::PlayerBeforeLoginBinData::finish_quest_res_collection(
                          (const proto::PlayerBeforeLoginBinData *const)(p_next_packet_queue_index + 416),
                          idx);
                  proto::GetPlayerTokenRsp::add_finish_collection_id_list(rsp_0, v60);
                }
              }
              proto::PlayerBeforeLoginBinData::~PlayerBeforeLoginBinData((proto::PlayerBeforeLoginBinData *const)(p_next_packet_queue_index + 416));
            }
            proto::GetPlayerTokenRsp::set_tag(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 808));
            proto::GetPlayerTokenRsp::set_retcode(rsp_0, 0);
          }
          proto::PlayerJsonData::~PlayerJsonData((proto::PlayerJsonData *const)(p_next_packet_queue_index + 272));
        }
        TablePlayerJsonAndExtraBinData::~TablePlayerJsonAndExtraBinData((TablePlayerJsonAndExtraBinData *const)(p_next_packet_queue_index + 592));
      }
      proto::PlayerExtJsonData::~PlayerExtJsonData((proto::PlayerExtJsonData *const)(p_next_packet_queue_index + 208));
    }
  }
  else if ( proto::GetPlayerTokenReq::uid(req) )
  {
    proto::GetPlayerTokenRsp::set_retcode(rsp_0, 17);
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(p_next_packet_queue_index + 96) = LoginHandler::checkRegisterAccountCondition(
                                                    this,
                                                    (common::minet::PacketPtr *)&operation_name,
                                                    req);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    if ( *(_DWORD *)(p_next_packet_queue_index + 96) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onGetPlayerTokenReq",
        320);
      v61 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
              (const char (*)[60])"[LOGIN] checkRegisterAccountCondition failed, account_type:");
      val = proto::GetPlayerTokenReq::account_type(req);
      v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &val);
      v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v62, (const char (*)[14])" account_uid:");
      v64 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v65 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, v64);
      v66 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v65, (const char (*)[10])" retcode:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v66, (const int *)(p_next_packet_queue_index + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
      proto::GetPlayerTokenRsp::set_retcode(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 96));
    }
    else
    {
      ServiceBox::findService<DbgateService>();
      DbgateService::getConfig(&operation_name);
      v67 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
      v70 = 0;
      if ( Config::isCheckRegisterBlackIp(v67) )
      {
        v68 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        v69 = common::minet::Packet::getUserIp(v68);
        if ( !LoginHandler::isAllowIpLogin(this, v69) )
          v70 = 1;
      }
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
      if ( v70 )
      {
        proto::GetPlayerTokenRsp::set_retcode(rsp_0, 32);
      }
      else
      {
        p_register_rate_mgr = &ServiceBox::findService<DbgateService>()->register_rate_mgr;
        v72 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        v73 = common::minet::Packet::getUserIp(v72);
        if ( !RegisterRateMgr::isAllowRegister(p_register_rate_mgr, v73) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&operation_name.name_._M_string_length,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onGetPlayerTokenReq",
            336);
          v74 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)&operation_name.name_._M_string_length,
                  (const char (*)[39])"[LOGIN] client exceeds register rate: ");
          v75 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          v76 = common::minet::Packet::getUserIp(v75);
          common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&operation_name.loop_func_interval_, v76);
          v149 = (char *)std::string::c_str(&operation_name.loop_func_interval_);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v74, (const char *const *)&v149);
          std::string::~string(&operation_name.loop_func_interval_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.name_._M_string_length);
          proto::GetPlayerTokenRsp::set_retcode(rsp_0, 33);
        }
        else
        {
          v77 = proto::GetPlayerTokenReq::platform_type(req);
          v78 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
          v79 = proto::GetPlayerTokenReq::account_type(req);
          if ( MysqlOpPlayerData::insertPlayerUidByAccount(
                 v79,
                 v78,
                 v77,
                 (TablePlayerUid *)(p_next_packet_queue_index + 704)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onGetPlayerTokenReq",
              344);
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
              "[LOGIN] insert t_user_id failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
          }
          else
          {
            proto::GetPlayerTokenRsp::set_uid(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 704));
            proto::GetPlayerTokenRsp::set_tag(rsp_0, *(_DWORD *)(p_next_packet_queue_index + 808));
            proto::GetPlayerTokenRsp::set_retcode(rsp_0, 0);
          }
        }
      }
    }
  }
LABEL_74:
  TablePlayerUid::~TablePlayerUid((TablePlayerUid *const)(p_next_packet_queue_index + 704));
  LoginHandler::checkBlackUidList(thisa, rsp_0);
  if ( !proto::GetPlayerTokenRsp::retcode(rsp_0) )
  {
    v80 = proto::GetPlayerTokenReq::platform_type(req);
    if ( TxtConfigMgr::isPsnPlatform(v80) )
    {
      v81 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
      if ( (unsigned __int8)std::string::empty(v81) != 1
        && (v82 = proto::GetPlayerTokenReq::online_id[abi:cxx11](req), (unsigned __int8)std::string::empty(v82) ^ 1)
        && proto::GetPlayerTokenRsp::uid(rsp_0) )
      {
        TablePlayerPsnOnlineIdData::TablePlayerPsnOnlineIdData((TablePlayerPsnOnlineIdData *const)(p_next_packet_queue_index
                                                                                                 + 592));
        v84 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
        std::string::operator=(p_next_packet_queue_index + 592, v84);
        v85 = proto::GetPlayerTokenReq::online_id[abi:cxx11](req);
        std::string::operator=(p_next_packet_queue_index + 624, v85);
        *(_DWORD *)(p_next_packet_queue_index + 656) = proto::GetPlayerTokenRsp::uid(rsp_0);
        if ( MysqlOpPlayerPsnOnlineIdData::insertOrUpdateOrReplacePlayerPsnOnlineIdData((const TablePlayerPsnOnlineIdData *)(p_next_packet_queue_index + 592)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onGetPlayerTokenReq",
            374);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
            "[LOGIN] insertOrUpdateOrReplacePlayerPsnOnlineIdData failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
          proto::GetPlayerTokenRsp::set_retcode(rsp_0, -1);
          v86 = 0;
        }
        else
        {
          v86 = 1;
        }
        TablePlayerPsnOnlineIdData::~TablePlayerPsnOnlineIdData((TablePlayerPsnOnlineIdData *const)(p_next_packet_queue_index
                                                                                                  + 592));
        if ( v86 != 1 )
          goto LABEL_89;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onGetPlayerTokenReq",
          381);
        v87 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
                (const char (*)[8])"psn_id:");
        v88 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
        v89 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v87, v88);
        v90 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v89, (const char (*)[12])" online_id:");
        v91 = proto::GetPlayerTokenReq::online_id[abi:cxx11](req);
        v92 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v90, v91);
        v93 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v92, (const char (*)[6])" uid:");
        val = proto::GetPlayerTokenRsp::uid(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
      }
    }
    v94 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
    proto::GetPlayerTokenRsp::set_token(rsp_0, v94);
    v95 = proto::GetPlayerTokenReq::account_type(req);
    proto::GetPlayerTokenRsp::set_account_type(rsp_0, v95);
    v96 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    proto::GetPlayerTokenRsp::set_account_uid(rsp_0, v96);
    v97 = proto::GetPlayerTokenReq::platform_type(req);
    proto::GetPlayerTokenRsp::set_platform_type(rsp_0, v97);
    is_guest = proto::GetPlayerTokenReq::is_guest(req);
    proto::GetPlayerTokenRsp::set_is_guest(rsp_0, is_guest);
    v99 = proto::GetPlayerTokenReq::channel_id(req);
    proto::GetPlayerTokenRsp::set_channel_id(rsp_0, v99);
    v100 = proto::GetPlayerTokenReq::sub_channel_id(req);
    proto::GetPlayerTokenRsp::set_sub_channel_id(rsp_0, v100);
    v101 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
    proto::GetPlayerTokenRsp::set_psn_id(rsp_0, v101);
  }
LABEL_89:
  v102 = ServiceBox::findService<DbgateService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)&operation_name,
    p_packet_ptra);
  std::shared_ptr<proto::GetPlayerTokenRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::GetPlayerTokenRsp> *)(p_next_packet_queue_index + 176));
  LOBYTE(v102) = ServiceBase::sendRsp<proto::GetPlayerTokenRsp>(
                   v102,
                   &p_rsp_ptr,
                   (common::minet::PacketPtr *)&operation_name) != 0;
  std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
  if ( (_BYTE)v102 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenReq",
      399);
    v103 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
             (const char (*)[38])"[LOGIN] sendRsp failed, account_type:");
    val = proto::GetPlayerTokenReq::account_type(req);
    v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &val);
    v105 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v104, (const char (*)[14])" account_uid:");
    v106 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, v106);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
    *(_DWORD *)(p_next_packet_queue_index + 96) = -1;
    v12 = *(_DWORD *)(p_next_packet_queue_index + 96);
  }
  else
  {
    if ( proto::GetPlayerTokenRsp::retcode(rsp_0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&operation_name.loop_func_interval_,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onGetPlayerTokenReq",
        405);
      v107 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               (common::milog::MiLogStream *const)&operation_name.loop_func_interval_,
               (const char (*)[34])"[LOGIN] OnGetPlayerToken retcode:");
      v145 = proto::GetPlayerTokenRsp::retcode(rsp_0);
      v108 = common::milog::MiLogStream::operator<<<int,(int *)0>(v107, (const int *)&v145);
      v109 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v108, (const char (*)[6])" uid:");
      val = proto::GetPlayerTokenRsp::uid(rsp_0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.loop_func_interval_);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&operation_name.name_._M_string_length,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenReq",
      408);
    v110 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)&operation_name.name_._M_string_length,
             (const char (*)[38])"[LOGIN] OnGetPlayerToken, channel_id:");
    HIDWORD(v140) = proto::GetPlayerTokenReq::channel_id(req);
    v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, (const unsigned int *)&v140 + 1);
    v112 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v111, (const char (*)[17])" sub_channel_id:");
    v141 = proto::GetPlayerTokenReq::sub_channel_id(req);
    v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v112, &v141);
    v114 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v113, (const char (*)[15])" account_type:");
    v142 = proto::GetPlayerTokenReq::account_type(req);
    v115 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, &v142);
    v116 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v115, (const char (*)[14])" account_uid:");
    v117 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
    v118 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v116, v117);
    v119 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v118, (const char (*)[7])" tag: ");
    v143 = proto::GetPlayerTokenRsp::tag(rsp_0);
    v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v119, &v143);
    v121 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v120, (const char (*)[16])" country_code: ");
    v122 = proto::GetPlayerTokenRsp::country_code[abi:cxx11](rsp_0);
    v123 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v121, v122);
    v124 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v123, (const char (*)[6])" uid:");
    v144 = proto::GetPlayerTokenRsp::uid(rsp_0);
    v125 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v124, &v144);
    v126 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v125, (const char (*)[5])" ip:");
    v127 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
    v145 = common::minet::Packet::getUserIp(v127);
    v128 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v126, &v145);
    v129 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v128, (const char (*)[2])"|");
    v130 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
    v131 = common::minet::Packet::getUserIp(v130);
    common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&operation_name.loop_func_interval_, v131);
    v149 = (char *)std::string::c_str(&operation_name.loop_func_interval_);
    v132 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v129, (const char *const *)&v149);
    v133 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v132, (const char (*)[10])" retcode:");
    val = proto::GetPlayerTokenRsp::retcode(rsp_0);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v133, (const int *)&val);
    std::string::~string(&operation_name.loop_func_interval_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&operation_name.name_._M_string_length);
    *(_DWORD *)(p_next_packet_queue_index + 96) = proto::GetPlayerTokenRsp::retcode(rsp_0);
    v12 = *(_DWORD *)(p_next_packet_queue_index + 96);
  }
  std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(p_next_packet_queue_index + 176));
LABEL_95:
  std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(p_next_packet_queue_index + 144));
  SpanProxy::~SpanProxy((SpanProxy *const)(p_next_packet_queue_index + 496));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(p_next_packet_queue_index + 112));
  result = v12;
  if ( v136 == (std::atomic<long unsigned int> *)p_next_packet_queue_index )
  {
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)p_next_packet_queue_index = 1172321806LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_next_packet_queue_index >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 161: range 000000000C5DB4C0-000000000C5DB6EE
void __cdecl LoginHandler::onGetPlayerTokenReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::onGetPlayerTokenReq::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int32_t *retcode; // rdx
  int32_t *v3; // rdx
  int32_t *v4; // rdx
  int32_t *v5; // rdx
  int32_t *v6; // rdx
  char v7; // al
  TracingMgr *v8; // rdi
  int *v9; // rdx
  bool is_error; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  retcode = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__retcode);
  }
  if ( !*retcode )
    goto LABEL_19;
  v3 = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__retcode);
  }
  if ( *v3 == 17 )
    goto LABEL_19;
  v4 = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__retcode);
  }
  if ( *v4 == 32 )
    goto LABEL_19;
  v5 = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__retcode);
  }
  if ( *v5 == 37 )
    goto LABEL_19;
  v6 = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__retcode);
  }
  if ( *v6 == 33 )
LABEL_19:
    v7 = 0;
  else
    v7 = 1;
  is_error = v7;
  v8 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    v8 = (TracingMgr *)__closure;
    __asan_report_load8(__closure);
  }
  v9 = __closure->__retcode;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__retcode >> 3)
                                                                   + 0x7FFF8000) )
  {
    v8 = (TracingMgr *)__closure->__retcode;
    __asan_report_load4(__closure->__retcode);
  }
  TracingMgr::finishSpan(v8, span_ptr, *v9, is_error);
};

// Line 416: range 000000000C5DD8AA-000000000C5DD96C
int32_t __cdecl LoginHandler::checkLoginAccountCondition(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::GetPlayerTokenReq *req)
{
  const std::string *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const std::string *v5; // rax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  v3 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
  if ( !(unsigned __int8)std::string::empty(v3) )
    return 0;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/login_handler.cpp",
    "checkLoginAccountCondition",
    419);
  v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v8,
         (const char (*)[35])"req.account_uid is empty() token: ");
  v5 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, v5);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return -1;
};

// Line 430: range 000000000C5DD96E-000000000C5DDE6A
int32_t __cdecl LoginHandler::checkRegisterAccountCondition(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::GetPlayerTokenReq *req)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DbDeployConfigMgr *p_db_deploy_config_mgr; // rdx
  const google::protobuf::Timestamp *v8; // rax
  const google::protobuf::Timestamp *v9; // rax
  int32_t v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::string *v14; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int32_t result; // eax
  uint32_t now; // [rsp+20h] [rbp-D0h]
  signed int age; // [rsp+24h] [rbp-CCh]
  const std::string *cur_region_name; // [rsp+28h] [rbp-C8h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+30h] [rbp-C0h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 uid_count:451 64 16 14 config_ptr:432";
  *(_QWORD *)(v3 + 16) = LoginHandler::checkRegisterAccountCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  ServiceBox::findService<DbgateService>();
  DbgateService::getConfig((DbgateService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  cur_region_name = ConfigBase::getRegionName[abi:cxx11](v6);
  p_db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->db_config_mgr.db_deploy_config_mgr;
  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(p_db_deploy_config_mgr, cur_region_name);
  now = common::tools::TimeUtils::getNow();
  if ( region_config_ptr )
  {
    v8 = proto::StopRegisterConfig::begin_time(&region_config_ptr->stop_register_config);
    if ( google::protobuf::Timestamp::seconds(v8) <= now )
    {
      v9 = proto::StopRegisterConfig::end_time(&region_config_ptr->stop_register_config);
      if ( now <= google::protobuf::Timestamp::seconds(v9) )
      {
        v11 = 10;
        goto LABEL_27;
      }
    }
  }
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v12->max_register_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->max_register_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->max_register_);
  }
  if ( !v12->max_register_ )
    goto LABEL_20;
  *(_DWORD *)(v3 + 48) = 0;
  if ( MysqlOpPlayerData::getPlayerUidCount((uint32_t *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "checkRegisterAccountCondition",
      454);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v29,
      (const char (*)[25])"getPlayerUidCount failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v11 = 30;
    goto LABEL_27;
  }
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_register_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->max_register_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->max_register_);
  }
  if ( v13->max_register_ <= *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "checkRegisterAccountCondition",
      460);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v29, (const char (*)[21])"register uid is full");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v11 = 30;
  }
  else
  {
LABEL_20:
    v14 = proto::GetPlayerTokenReq::birthday[abi:cxx11](req);
    age = common::tools::TimeUtils::getAgeByTimeStr(v14);
    if ( age >= 0 && proto::GetPlayerTokenReq::minors_reg_min_age(req) > age )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "checkRegisterAccountCondition",
        475);
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])" account_uid:");
      v17 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" birthday:");
      v20 = proto::GetPlayerTokenReq::birthday[abi:cxx11](req);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" under age:");
      *(_DWORD *)(v3 + 48) = proto::GetPlayerTokenReq::minors_reg_min_age(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v11 = 41;
    }
    else
    {
      v11 = 0;
    }
  }
LABEL_27:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  result = v11;
  if ( v30 == (char *)v3 )
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

// Line 484: range 000000000C5DDE6C-000000000C5DE200
void __cdecl LoginHandler::checkBlackUidList(LoginHandler *const this, proto::GetPlayerTokenRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t begin_time; // [rsp+14h] [rbp-11Ch]
  uint32_t end_time; // [rsp+18h] [rbp-118h]
  uint32_t now; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-110h] BYREF
  char v13[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 1 12 is_exist:490 48 112 16 black_config:489";
  *(_QWORD *)(v2 + 16) = LoginHandler::checkBlackUidList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862725] = -202116109;
  if ( !proto::GetPlayerTokenRsp::retcode(rsp_0) )
  {
    TableLoginBlackUidConfig::TableLoginBlackUidConfig((TableLoginBlackUidConfig *const)(v2 + 48));
    *(_BYTE *)(v2 + 32) = 0;
    v5 = proto::GetPlayerTokenRsp::uid(rsp_0);
    if ( (unsigned int)MysqlOpMisc::selectLoginBlackUidConfig(v5, (TableLoginBlackUidConfig *)(v2 + 48), v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "checkBlackUidList",
        493);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v12,
        (const char (*)[33])"selectLoginBlackUidConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else if ( *(_BYTE *)(v2 + 32) == 1 )
    {
      begin_time = common::tools::TimeUtils::getTimeByStr((const std::string *)(v2 + 56));
      end_time = common::tools::TimeUtils::getTimeByStr((const std::string *)(v2 + 88));
      if ( !begin_time || !end_time )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "checkBlackUidList",
          505);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               &v12,
               (const char (*)[16])" invalid_time: ");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 56));
        v8 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v7, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 88));
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      now = common::tools::TimeUtils::getNow();
      if ( begin_time <= now && now <= end_time )
      {
        proto::GetPlayerTokenRsp::set_retcode(rsp_0, 21);
        proto::GetPlayerTokenRsp::set_black_uid_end_time(rsp_0, end_time);
        proto::GetPlayerTokenRsp::set_msg(rsp_0, (const std::string *)(v2 + 120));
      }
    }
    TableLoginBlackUidConfig::~TableLoginBlackUidConfig((TableLoginBlackUidConfig *const)(v2 + 48));
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 518: range 000000000C5DE202-000000000C5DFC89
int32_t __cdecl LoginHandler::onPlayerLoginReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 p_M_finish; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TracingMgr *v6; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const jaegertracing::SpanContext *v8; // r15
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  DbgateApp *v10; // rax
  uint32_t AppId; // eax
  const std::string *v12; // rax
  const std::string *v13; // rax
  DbgateService *v14; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t UserId; // eax
  common::milog::MiLogStream *v17; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool is_judge_user_db_delete; // r15
  common::milog::MiLogStream *v21; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  size_t v26; // r15
  const char *v27; // rax
  size_t v29; // r15
  const char *v30; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t v32; // eax
  google::protobuf::uint32 v33; // eax
  google::protobuf::uint32 v34; // eax
  common::milog::MiLogStream *v35; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  google::protobuf::uint64 v37; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // eax
  common::milog::MiLogStream *v40; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // r15
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r15
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  size_t v48; // r15
  const char *v49; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  uint32_t v51; // eax
  common::milog::MiLogStream *v52; // rax
  time_t v53; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r15
  google::protobuf::uint64 v57; // rax
  std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  google::protobuf::Map<unsigned int,proto::BlockInfo> *v59; // r15
  google::protobuf::Map<unsigned int,proto::BlockInfo> *v60; // rax
  DbgateService *v61; // r15
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  int v64; // r15d
  DbgateService *v65; // r14
  common::milog::MiLogStream *v66; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  bool v69; // r14
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  common::milog::MiLogStream *v74; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r14
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r14
  const std::string *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  int32_t result; // eax
  char v86; // [rsp+Eh] [rbp-492h]
  char v87; // [rsp+Fh] [rbp-491h]
  bool is_login_rsp_split; // [rsp+2Bh] [rbp-475h]
  unsigned int v89; // [rsp+2Ch] [rbp-474h] BYREF
  int v90; // [rsp+30h] [rbp-470h] BYREF
  unsigned int val; // [rsp+34h] [rbp-46Ch] BYREF
  uint32_t end_time; // [rsp+38h] [rbp-468h]
  std::vector<TableBlockData>::iterator __for_begin; // [rsp+40h] [rbp-460h] BYREF
  std::vector<TableBlockData>::iterator __for_end; // [rsp+48h] [rbp-458h] BYREF
  const proto::PlayerLoginReq *req; // [rsp+50h] [rbp-450h]
  proto::PlayerLoginRsp *rsp_0; // [rsp+58h] [rbp-448h]
  std::string *proto_str; // [rsp+60h] [rbp-440h]
  google::protobuf::Map<unsigned int,proto::BlockInfo> *block_info_map; // [rsp+68h] [rbp-438h]
  std::vector<TableBlockData> *__for_range; // [rsp+70h] [rbp-430h]
  std::vector<std::pair<unsigned int,std::string >> *__for_range_0; // [rsp+78h] [rbp-428h]
  std::pair<unsigned int,std::string > *__in; // [rsp+80h] [rbp-420h]
  std::tuple_element<0,std::pair<unsigned int,std::string > >::type *feature_type; // [rsp+88h] [rbp-418h]
  std::tuple_element<1,std::pair<unsigned int,std::string > >::type *end_time_str; // [rsp+90h] [rbp-410h]
  proto::FeatureBlockInfo *block_info_0; // [rsp+98h] [rbp-408h]
  TableBlockData *row; // [rsp+A0h] [rbp-400h]
  proto::BlockInfo *block_info; // [rsp+A8h] [rbp-3F8h]
  DbgateService v108; // [rsp+B0h] [rbp-3F0h] BYREF

  p_M_finish = (unsigned __int64)&v108.thread_group_.thread_vec_._M_impl._M_finish;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      p_M_finish = v4;
  }
  *(_QWORD *)p_M_finish = 1102416563LL;
  *(_QWORD *)(p_M_finish + 8) = "13 48 1 12 is_exist:532 64 4 11 retcode:519 80 4 11 rsp_len:631 96 8 17 root_span_ctx:52"
                                "0 128 16 11 req_ptr:524 160 16 11 rsp_ptr:524 192 16 14 notify_ptr:642 224 16 9 timer:58"
                                "7 256 24 24 table_block_data_vec:588 320 24 21 feature_block_vec:608 384 56 14 span_prox"
                                "y:521 480 96 15 player_data:543 608 192 7 row:533";
  *(_QWORD *)(p_M_finish + 16) = LoginHandler::onPlayerLoginReq;
  v5 = (_DWORD *)(p_M_finish >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862738] = -218959118;
  v5[536862745] = -202116109;
  v5[536862746] = -202116109;
  *(_DWORD *)(p_M_finish + 64) = -1;
  v6 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11]((std::string *)&v108.name_._M_string_length, v7);
  TracingMgr::extract(
    p_M_finish + 96,
    v6,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&v108.name_._M_string_length);
  std::string::~string(&v108.name_._M_string_length);
  v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(p_M_finish + 96));
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(p_M_finish + 224), "onPlayerLoginReq");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(p_M_finish + 384),
    v9,
    *(opentracing::v3::string_view *)(p_M_finish + 224),
    v8,
    0,
    (const int *)(p_M_finish + 64));
  v10 = Singleton<DbgateApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v10);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v108.name_._M_string_length, AppId);
  opentracing::v3::Value::Value(
    (opentracing::v3::Value *const)&v108.loop_func_interval_,
    (std::string *)&v108.name_._M_string_length);
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(p_M_finish + 224), "app_id");
  SpanProxy::SetTag(
    (SpanProxy *const)(p_M_finish + 384),
    *(opentracing::v3::string_view *)(p_M_finish + 224),
    (const opentracing::v3::Value *)&v108.loop_func_interval_);
  opentracing::v3::Value::~Value((opentracing::v3::Value *const)&v108.loop_func_interval_);
  std::string::~string(&v108.name_._M_string_length);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerLoginReq>((common::minet::Packet *const)(p_M_finish + 128));
  if ( std::operator==<proto::PlayerLoginReq const>(
         (const std::shared_ptr<const proto::PlayerLoginReq> *)(p_M_finish + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v108.name_._M_string_length,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPlayerLoginReq",
      524);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v108.name_._M_string_length,
      "get proto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
    v2 = -1;
    goto LABEL_70;
  }
  req = std::__shared_ptr_access<proto::PlayerLoginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 128));
  common::tools::perf::make_shared<proto::PlayerLoginRsp>();
  rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 160));
  proto::PlayerLoginRsp::set_retcode(rsp_0, -1);
  v12 = proto::PlayerLoginReq::country_code[abi:cxx11](req);
  proto::PlayerLoginRsp::set_country_code(rsp_0, v12);
  v13 = proto::PlayerLoginReq::birthday[abi:cxx11](req);
  proto::PlayerLoginRsp::set_birthday(rsp_0, v13);
  v14 = ServiceBox::findService<DbgateService>();
  ExternalMonitorReportMgr::addLoginValue(&v14->external_monitor_report_mgr);
  *(_BYTE *)(p_M_finish + 48) = 0;
  TablePlayerData::TablePlayerData((TablePlayerData *const)(p_M_finish + 608));
  v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  UserId = common::minet::Packet::getUserId(v15);
  *(_DWORD *)(p_M_finish + 64) = MysqlOpPlayerData::selectPlayerDataByUid(
                                   UserId,
                                   (TablePlayerData *)(p_M_finish + 608),
                                   p_M_finish + 48);
  if ( !*(_DWORD *)(p_M_finish + 64) )
  {
    proto::PlayerData::PlayerData((proto::PlayerData *const)(p_M_finish + 480));
    if ( *(_BYTE *)(p_M_finish + 48) )
    {
      ServiceBox::findService<DbgateService>();
      DbgateService::getConfig(&v108);
      v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v108);
      if ( *(_BYTE *)(((unsigned __int64)&v19->is_judge_user_db_delete_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v19 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&v19->is_judge_user_db_delete_ >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(&v19->is_judge_user_db_delete_);
      }
      is_judge_user_db_delete = v19->is_judge_user_db_delete_;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v108);
      if ( is_judge_user_db_delete
        && mysqlpp::tiny_int<signed char>::operator bool((const mysqlpp::tiny_int<signed char> *const)(p_M_finish + 768)) )
      {
        *(_DWORD *)(p_M_finish + 64) = -1;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v108.name_._M_string_length,
          &common::milog::MiLogDefault::default_log_obj_,
          6u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginReq",
          552);
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&v108.name_._M_string_length,
                (const char (*)[13])"[LOGIN] uid:");
        v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v22);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" is_delete:");
        v25 = common::milog::MiLogStream::operator<<<mysqlpp::tiny_int<signed char>,(mysqlpp::tiny_int<signed char>*)0>(
                v24,
                (const mysqlpp::tiny_int<signed char> *)(p_M_finish + 768));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" login err!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
        proto::PlayerLoginRsp::set_retcode(rsp_0, *(_DWORD *)(p_M_finish + 64));
LABEL_45:
        proto::PlayerData::~PlayerData((proto::PlayerData *const)(p_M_finish + 480));
        goto LABEL_46;
      }
      proto::PlayerData::set_uid((proto::PlayerData *const)(p_M_finish + 480), *(_DWORD *)(p_M_finish + 608));
      proto::PlayerData::set_nickname(
        (proto::PlayerData *const)(p_M_finish + 480),
        (const std::string *)(p_M_finish + 616));
      v26 = mysqlpp::String::length((const mysqlpp::String *const)(p_M_finish + 696));
      v27 = mysqlpp::String::c_str((const mysqlpp::String *const)(p_M_finish + 696));
      proto::PlayerData::set_bin((proto::PlayerData *const)(p_M_finish + 480), v27, v26);
      proto::PlayerData::set_data_version((proto::PlayerData *const)(p_M_finish + 480), *(_DWORD *)(p_M_finish + 728));
      if ( !mysqlpp::String::is_null((const mysqlpp::String *const)(p_M_finish + 712))
        && mysqlpp::String::data((const mysqlpp::String *const)(p_M_finish + 712)) )
      {
        v29 = mysqlpp::String::length((const mysqlpp::String *const)(p_M_finish + 712));
        v30 = mysqlpp::String::c_str((const mysqlpp::String *const)(p_M_finish + 712));
        proto::PlayerData::set_extra_bin_data((proto::PlayerData *const)(p_M_finish + 480), v30, v29);
      }
      proto::PlayerData::set_json_data(
        (proto::PlayerData *const)(p_M_finish + 480),
        (const std::string *)(p_M_finish + 664));
      proto::PlayerLoginRsp::set_player_data_version(rsp_0, *(_DWORD *)(p_M_finish + 728));
    }
    else
    {
      v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v32 = common::minet::Packet::getUserId(v31);
      proto::PlayerData::set_uid((proto::PlayerData *const)(p_M_finish + 480), v32);
    }
    proto::PlayerLoginRsp::set_is_new_player(rsp_0, *(_BYTE *)(p_M_finish + 48) != 1);
    v33 = proto::PlayerLoginReq::target_uid(req);
    proto::PlayerLoginRsp::set_target_uid(rsp_0, v33);
    v34 = proto::PlayerLoginReq::target_home_owner_uid(req);
    proto::PlayerLoginRsp::set_target_home_owner_uid(rsp_0, v34);
    proto_str = proto::PlayerLoginRsp::mutable_player_data[abi:cxx11](rsp_0);
    if ( !google::protobuf::MessageLite::SerializeToString(
            (const google::protobuf::MessageLite *const)(p_M_finish + 480),
            proto_str) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v108.name_._M_string_length,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPlayerLoginReq",
        581);
      v35 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&v108.name_._M_string_length,
              (const char (*)[39])"[LOGIN] SerializeToString failed, uid:");
      v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v36);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
    }
    else
    {
      v37 = proto::PlayerLoginReq::login_rand(req);
      proto::PlayerLoginRsp::set_login_rand(rsp_0, v37);
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(p_M_finish + 224));
      std::vector<TableBlockData>::vector((std::vector<TableBlockData> *const)(p_M_finish + 256));
      v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v39 = common::minet::Packet::getUserId(v38);
      *(_DWORD *)(p_M_finish + 64) = MysqlOpPlayerData::selectAllBlockData(
                                       v39,
                                       (std::vector<TableBlockData> *)(p_M_finish + 256));
      if ( *(_DWORD *)(p_M_finish + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v108.name_._M_string_length,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginReq",
          592);
        v40 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)&v108.name_._M_string_length,
                (const char (*)[40])"[BLOCK]:selectAllBlockData failed, uid:");
        v41 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v41);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
        proto::PlayerLoginRsp::set_retcode(rsp_0, *(_DWORD *)(p_M_finish + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v108.name_._M_string_length,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginReq",
          596);
        v42 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&v108.name_._M_string_length,
                (const char (*)[36])"[BLOCK]:selectBlockData block_size:");
        __for_end._M_current = (TableBlockData *)std::vector<TableBlockData>::size((const std::vector<TableBlockData> *const)(p_M_finish + 256));
        v43 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v42,
                (const unsigned __int64 *)&__for_end);
        v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v43, (const char (*)[13])", time_cost:");
        v90 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(p_M_finish + 224));
        v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v44, &v90);
        v46 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v45, (const char (*)[7])", uid:");
        v47 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v47);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
        block_info_map = proto::PlayerLoginRsp::mutable_block_info_map(rsp_0);
        __for_range = (std::vector<TableBlockData> *)(p_M_finish + 256);
        __for_begin._M_current = std::vector<TableBlockData>::begin((std::vector<TableBlockData> *const)(p_M_finish + 256))._M_current;
        __for_end._M_current = std::vector<TableBlockData>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<TableBlockData *,std::vector<TableBlockData>>(&__for_begin, &__for_end) )
        {
          row = __gnu_cxx::__normal_iterator<TableBlockData *,std::vector<TableBlockData>>::operator*(&__for_begin);
          block_info = google::protobuf::Map<unsigned int,proto::BlockInfo>::operator[](block_info_map, &row->block_id);
          if ( *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&row->block_id);
          }
          proto::BlockInfo::set_block_id(block_info, row->block_id);
          if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->data_version);
          }
          proto::BlockInfo::set_data_version(block_info, row->data_version);
          v48 = mysqlpp::String::length(&row->bin_data);
          v49 = mysqlpp::String::c_str(&row->bin_data);
          proto::BlockInfo::set_bin_data(block_info, v49, v48);
          __gnu_cxx::__normal_iterator<TableBlockData *,std::vector<TableBlockData>>::operator++(&__for_begin);
        }
        v50 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        v51 = common::minet::Packet::getUserId(v50);
        MysqlOpMisc::selectPlayerAllFeatureBlockEndTime[abi:cxx11](
          (std::vector<std::pair<unsigned int,std::string >> *)(p_M_finish + 320),
          v51);
        __for_range_0 = (std::vector<std::pair<unsigned int,std::string >> *)(p_M_finish + 320);
        __for_begin._M_current = (TableBlockData *)std::vector<std::pair<unsigned int,std::string>>::begin((std::vector<std::pair<unsigned int,std::string >> *const)(p_M_finish + 320))._M_current;
        __for_end._M_current = (TableBlockData *)std::vector<std::pair<unsigned int,std::string>>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<std::pair<unsigned int,std::string> *,std::vector<std::pair<unsigned int,std::string>>>(
                  (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string >*,std::vector<std::pair<unsigned int,std::string >> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string >*,std::vector<std::pair<unsigned int,std::string >> > *)&__for_end) )
        {
          __in = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string> *,std::vector<std::pair<unsigned int,std::string>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string >*,std::vector<std::pair<unsigned int,std::string >> > *const)&__for_begin);
          feature_type = std::get<0ul,unsigned int,std::string>(__in);
          end_time_str = std::get<1ul,unsigned int,std::string>(__in);
          if ( (unsigned __int8)std::string::empty(end_time_str) != 1 )
          {
            end_time = common::tools::TimeUtils::getTimeByStr(end_time_str);
            if ( !end_time )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v108.name_._M_string_length,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "onPlayerLoginReq",
                616);
              v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)&v108.name_._M_string_length,
                      (const char (*)[16])" invalid_time: ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, end_time_str);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
            }
            v53 = end_time;
            if ( v53 > common::tools::TimeUtils::getNow() )
            {
              block_info_0 = proto::PlayerLoginRsp::add_feature_block_info_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)feature_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)feature_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)feature_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(feature_type);
              }
              proto::FeatureBlockInfo::set_feature_type(block_info_0, *feature_type);
              proto::FeatureBlockInfo::set_end_time(block_info_0, end_time);
            }
          }
          __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string> *,std::vector<std::pair<unsigned int,std::string>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::string >*,std::vector<std::pair<unsigned int,std::string >> > *const)&__for_begin);
        }
        proto::PlayerLoginRsp::set_retcode(rsp_0, 0);
        std::vector<std::pair<unsigned int,std::string>>::~vector((std::vector<std::pair<unsigned int,std::string >> *const)(p_M_finish + 320));
      }
      std::vector<TableBlockData>::~vector((std::vector<TableBlockData> *const)(p_M_finish + 256));
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(p_M_finish + 224));
    }
    goto LABEL_45;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v108.name_._M_string_length,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/login_handler.cpp",
    "onPlayerLoginReq",
    537);
  v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)&v108.name_._M_string_length,
          (const char (*)[43])"[LOGIN] selectPlayerDataByUid failed, uid:");
  v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  val = common::minet::Packet::getUserId(v18);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
  proto::PlayerLoginRsp::set_retcode(rsp_0, *(_DWORD *)(p_M_finish + 64));
LABEL_46:
  TablePlayerData::~TablePlayerData((TablePlayerData *const)(p_M_finish + 608));
  *(_DWORD *)(p_M_finish + 80) = google::protobuf::MessageLite::ByteSize(rsp_0);
  is_login_rsp_split = 0;
  v87 = 0;
  ServiceBox::findService<DbgateService>();
  DbgateService::getConfig(&v108);
  v54 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v108);
  if ( *(_BYTE *)(((unsigned __int64)&v54->is_login_rsp_split_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v54 - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&v54->is_login_rsp_split_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v54->is_login_rsp_split_);
  }
  if ( !v54->is_login_rsp_split_ )
    goto LABEL_53;
  ServiceBox::findService<DbgateService>();
  DbgateService::getConfig((DbgateService *const)(p_M_finish + 224));
  v87 = 1;
  v55 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 224));
  if ( *(_BYTE *)(((unsigned __int64)&v55->login_rsp_split_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->login_rsp_split_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->login_rsp_split_size_);
  }
  if ( v55->login_rsp_split_size_ <= *(_DWORD *)(p_M_finish + 80) )
    v86 = 1;
  else
LABEL_53:
    v86 = 0;
  if ( v87 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_finish + 224));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v108);
  if ( !v86 )
    goto LABEL_62;
  if ( !proto::PlayerLoginRsp::block_info_map_size(rsp_0) )
    goto LABEL_62;
  is_login_rsp_split = 1;
  common::tools::perf::make_shared<proto::PlayerLoginBlockInfoNotify>();
  v56 = std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 192));
  v57 = proto::PlayerLoginReq::login_rand(req);
  proto::PlayerLoginBlockInfoNotify::set_login_rand(v56, v57);
  v58 = std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerLoginBlockInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 192));
  v59 = proto::PlayerLoginBlockInfoNotify::mutable_block_info_map(v58);
  v60 = proto::PlayerLoginRsp::mutable_block_info_map(rsp_0);
  google::protobuf::Map<unsigned int,proto::BlockInfo>::swap(v59, v60);
  v61 = ServiceBox::findService<DbgateService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(p_M_finish + 224),
    p_packet_ptr);
  std::shared_ptr<proto::PlayerLoginBlockInfoNotify>::shared_ptr(
    (std::shared_ptr<proto::PlayerLoginBlockInfoNotify> *const)&v108,
    (const std::shared_ptr<proto::PlayerLoginBlockInfoNotify> *)(p_M_finish + 192));
  LOBYTE(v61) = ServiceBase::sendRsp<proto::PlayerLoginBlockInfoNotify>(
                  v61,
                  (std::shared_ptr<proto::PlayerLoginBlockInfoNotify> *)&v108,
                  (common::minet::PacketPtr *)(p_M_finish + 224)) != 0;
  std::shared_ptr<proto::PlayerLoginBlockInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerLoginBlockInfoNotify> *const)&v108);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(p_M_finish + 224));
  if ( (_BYTE)v61 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v108.name_._M_string_length,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPlayerLoginReq",
      652);
    v62 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)&v108.name_._M_string_length,
            (const char (*)[42])"[LOGIN] sendRsp block notify failed, uid:");
    v63 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v63);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
    *(_DWORD *)(p_M_finish + 64) = -1;
    v2 = *(_DWORD *)(p_M_finish + 64);
    v64 = 0;
  }
  else
  {
    v64 = 1;
  }
  std::shared_ptr<proto::PlayerLoginBlockInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerLoginBlockInfoNotify> *const)(p_M_finish + 192));
  if ( v64 == 1 )
  {
LABEL_62:
    proto::PlayerLoginRsp::set_is_login_rsp_split(rsp_0, is_login_rsp_split);
    v65 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(p_M_finish + 224),
      p_packet_ptr);
    std::shared_ptr<proto::PlayerLoginRsp>::shared_ptr(
      (std::shared_ptr<proto::PlayerLoginRsp> *const)&v108,
      (const std::shared_ptr<proto::PlayerLoginRsp> *)(p_M_finish + 160));
    LOBYTE(v65) = ServiceBase::sendRsp<proto::PlayerLoginRsp>(
                    v65,
                    (std::shared_ptr<proto::PlayerLoginRsp> *)&v108,
                    (common::minet::PacketPtr *)(p_M_finish + 224)) != 0;
    std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)&v108);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(p_M_finish + 224));
    if ( (_BYTE)v65 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v108.name_._M_string_length,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPlayerLoginReq",
        662);
      v66 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&v108.name_._M_string_length,
              (const char (*)[39])"[LOGIN] sendRsp login rsp failed, uid:");
      v67 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v67);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
      *(_DWORD *)(p_M_finish + 64) = -1;
      v2 = *(_DWORD *)(p_M_finish + 64);
    }
    else
    {
      ServiceBox::findService<DbgateService>();
      DbgateService::getConfig((DbgateService *const)(p_M_finish + 224));
      v68 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 224));
      if ( *(_BYTE *)(((unsigned __int64)&v68->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v68->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v68->login_rsp_proto_max_size_);
      }
      v69 = v68->login_rsp_proto_max_size_ < *(_DWORD *)(p_M_finish + 80);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_finish + 224));
      if ( v69 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v108.name_._M_string_length,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginReq",
          668);
        v70 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&v108.name_._M_string_length,
                (const char (*)[28])"player bin too long, size: ");
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v70,
                (const unsigned int *)(p_M_finish + 80));
        v72 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v71, (const char (*)[6])" uid:");
        v73 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v73);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v108.name_._M_string_length,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/login_handler.cpp",
        "onPlayerLoginReq",
        671);
      v74 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v108.name_._M_string_length,
              (const char (*)[30])"[LOGIN] onPlayerLoginReq uid:");
      v75 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v89 = common::minet::Packet::getUserId(v75);
      v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &v89);
      v77 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v76, (const char (*)[10])" retcode:");
      v90 = proto::PlayerLoginRsp::retcode(rsp_0);
      v78 = common::milog::MiLogStream::operator<<<int,(int *)0>(v77, &v90);
      v79 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v78, (const char (*)[15])" data_version:");
      val = proto::PlayerLoginRsp::player_data_version(rsp_0);
      v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &val);
      v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v80, (const char (*)[16])" country code: ");
      v82 = proto::PlayerLoginRsp::country_code[abi:cxx11](rsp_0);
      v83 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v81, v82);
      v84 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v83,
              (const char (*)[21])" is_login_rsp_split:");
      common::milog::MiLogStream::operator<<(v84, is_login_rsp_split);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v108.name_._M_string_length);
      *(_DWORD *)(p_M_finish + 64) = proto::PlayerLoginRsp::retcode(rsp_0);
      v2 = *(_DWORD *)(p_M_finish + 64);
    }
  }
  std::shared_ptr<proto::PlayerLoginRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginRsp> *const)(p_M_finish + 160));
LABEL_70:
  std::shared_ptr<proto::PlayerLoginReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginReq> *const)(p_M_finish + 128));
  SpanProxy::~SpanProxy((SpanProxy *const)(p_M_finish + 384));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(p_M_finish + 96));
  result = v2;
  if ( &v108.thread_group_.thread_vec_._M_impl._M_finish == (std::_Vector_base<std::thread>::pointer *)p_M_finish )
  {
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_finish = 1172321806LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 678: range 000000000C5DFC8A-000000000C5E09F3
int32_t __cdecl LoginHandler::onSavePlayerDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // eax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  int v10; // r15d
  google::protobuf::uint32 v11; // r14d
  google::protobuf::uint32 v12; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::string *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rax
  mysqlpp::String::size_type v19; // r15
  const std::string *v20; // rax
  const char *v21; // rax
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rax
  google::protobuf::uint32 v25; // r14d
  google::protobuf::uint32 v26; // eax
  int v27; // r15d
  common::milog::MiLogStream *v28; // r15
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r15
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r15
  const std::string *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  const std::string *v40; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r15
  const std::string *v42; // rax
  const std::string *v43; // rax
  const std::string *v44; // rax
  int v45; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r15
  uint32_t v47; // eax
  google::protobuf::uint32 v48; // eax
  DbgateService *v49; // r14
  int32_t result; // eax
  bool data_version; // [rsp+Ch] [rbp-274h]
  google::protobuf::uint32 data_versiona; // [rsp+Ch] [rbp-274h]
  mysqlpp::mysql_type_info p_type; // [rsp+2Bh] [rbp-255h] BYREF
  unsigned int v54; // [rsp+2Ch] [rbp-254h] BYREF
  unsigned int val; // [rsp+30h] [rbp-250h] BYREF
  uint32_t cur_data_version; // [rsp+34h] [rbp-24Ch]
  uint32_t before_login_bin_data_sz; // [rsp+38h] [rbp-248h]
  uint32_t sum_size; // [rsp+3Ch] [rbp-244h]
  unsigned __int64 v59; // [rsp+40h] [rbp-240h] BYREF
  const proto::SavePlayerDataReq *req; // [rsp+48h] [rbp-238h]
  proto::SavePlayerDataRsp *rsp_0; // [rsp+50h] [rbp-230h]
  const proto::PlayerData *player_data; // [rsp+58h] [rbp-228h]
  std::shared_ptr<common::minet::Packet> v63; // [rsp+60h] [rbp-220h] BYREF
  common::milog::MiLogStream v64; // [rsp+70h] [rbp-210h] BYREF
  char v65[496]; // [rsp+90h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL, p_packet_ptr);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 26 find_data_version_cost:686 64 4 18 make_data_cost:687 80 4 14 mysql_cost:688 96 16 11 "
                        "req_ptr:679 128 16 11 rsp_ptr:679 160 16 9 timer:685 192 192 7 row:719";
  *(_QWORD *)(v3 + 16) = LoginHandler::onSavePlayerDataReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862732] = -202116109;
  v5[536862733] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SavePlayerDataReq>((common::minet::Packet *const)(v3 + 96));
  if ( std::operator==<proto::SavePlayerDataReq const>(
         (const std::shared_ptr<const proto::SavePlayerDataReq> *)(v3 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onSavePlayerDataReq",
      679);
    common::milog::MiLogStream::operator()(&v64, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v64);
    v2 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SavePlayerDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SavePlayerDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    common::tools::perf::make_shared<proto::SavePlayerDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SavePlayerDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SavePlayerDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    proto::SavePlayerDataRsp::set_retcode(rsp_0, -1);
    player_data = proto::SavePlayerDataReq::player_data(req);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 160));
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 80) = 0;
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    cur_data_version = DataVersionMgr::findDataVersion(this->data_version_mgr_, UserId);
    *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 160));
    v8 = proto::SavePlayerDataReq::save_stat_id(req);
    proto::SavePlayerDataRsp::set_save_stat_id(rsp_0, v8);
    if ( cur_data_version )
    {
      if ( cur_data_version <= proto::PlayerData::data_version(player_data) )
      {
        ServiceBox::findService<DbgateService>();
        DbgateService::getConfig((DbgateService *const)&v63);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
        data_version = 0;
        if ( Config::isCheckUncompressValid(v13) )
        {
          v14 = proto::PlayerData::bin[abi:cxx11](player_data);
          if ( !LoginHandler::isUncompressValid(this, v14) )
            data_version = 1;
        }
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
        if ( data_version )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "onSavePlayerDataReq",
            714);
          v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v64, (const char (*)[5])"uid:");
          val = proto::PlayerData::uid(player_data);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v16,
            (const char (*)[25])" isUncompressValid fails");
          common::milog::MiLogStream::~MiLogStream(&v64);
          v2 = -1;
          v10 = 1;
        }
        else
        {
          TablePlayerData::TablePlayerData((TablePlayerData *const)(v3 + 192));
          *(_DWORD *)(v3 + 192) = proto::PlayerData::uid(player_data);
          v17 = proto::PlayerData::nickname[abi:cxx11](player_data);
          std::string::operator=(v3 + 200, v17);
          *(_DWORD *)(v3 + 232) = proto::PlayerData::level(player_data);
          *(_DWORD *)(v3 + 236) = proto::PlayerData::exp(player_data);
          mysqlpp::mysql_type_info::mysql_type_info(&p_type, MYSQL_TYPE_STRING, 0, 0);
          v18 = proto::PlayerData::bin[abi:cxx11](player_data);
          v19 = std::string::length(v18);
          v20 = proto::PlayerData::bin[abi:cxx11](player_data);
          v21 = (const char *)std::string::c_str(v20);
          mysqlpp::String::assign((mysqlpp::String *const)(v3 + 280), v21, v19, &p_type, 0);
          v22 = proto::PlayerData::extra_bin_data[abi:cxx11](player_data);
          mysqlpp::String::operator=((mysqlpp::String *const)(v3 + 296), v22);
          *(_DWORD *)(v3 + 312) = proto::PlayerData::data_version(player_data);
          v23 = proto::PlayerData::json_data[abi:cxx11](player_data);
          std::string::operator=(v3 + 248, v23);
          v24 = proto::PlayerData::before_login_bin_data[abi:cxx11](player_data);
          mysqlpp::String::operator=((mysqlpp::String *const)(v3 + 360), v24);
          *(_DWORD *)(v3 + 240) = 0;
          *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 160));
          if ( MysqlOpPlayerData::insertOrUpdatePlayerData((const TablePlayerData *)(v3 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onSavePlayerDataReq",
              738);
            v25 = proto::PlayerData::data_version(player_data);
            v26 = proto::PlayerData::uid(player_data);
            common::milog::MiLogStream::operator()(
              &v64,
              "[NETWORK]insertOrUpdatePlayerData fails for uid=%u, data_version=%u",
              v26,
              v25);
            common::milog::MiLogStream::~MiLogStream(&v64);
            v2 = -1;
            v27 = 0;
          }
          else
          {
            *(_DWORD *)(v3 + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 160));
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/service/login_handler.cpp",
              "onSavePlayerDataReq",
              744);
            v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v64,
                    (const char (*)[33])"[SAVE] SavePlayerData succ, uid:");
            v54 = proto::PlayerData::uid(player_data);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &v54);
            v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v29,
                    (const char (*)[15])" data_version:");
            val = proto::PlayerData::data_version(player_data);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
            v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v31,
                    (const char (*)[13])" bin_length:");
            v33 = proto::PlayerData::bin[abi:cxx11](player_data);
            v59 = std::string::length(v33);
            v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v32, &v59);
            v35 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v34,
                    (const char (*)[25])" find_data_version_cost:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v3 + 48));
            v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v36,
                    (const char (*)[17])" make_data_cost:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 64));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])" mysql_cost:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v64);
            v40 = proto::PlayerData::before_login_bin_data[abi:cxx11](player_data);
            before_login_bin_data_sz = std::string::size(v40);
            v41 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
            std::allocator<char>::allocator(&p_type);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)&v64,
              byte_19D3D6A0,
              (const std::allocator<char> *)&p_type);
            MonitorReport::addValue(v41, (char *)0x31, before_login_bin_data_sz, (unsigned __int64)&v64);
            std::string::~string(&v64);
            std::allocator<char>::~allocator(&p_type);
            v42 = proto::PlayerData::bin[abi:cxx11](player_data);
            LODWORD(v41) = std::string::size(v42);
            v43 = proto::PlayerData::extra_bin_data[abi:cxx11](player_data);
            LODWORD(v41) = std::string::size(v43) + (_DWORD)v41;
            v44 = proto::PlayerData::json_data[abi:cxx11](player_data);
            v45 = std::string::size(v44);
            sum_size = (_DWORD)v41 + v45 + before_login_bin_data_sz;
            v46 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
            std::allocator<char>::allocator(&p_type);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)&v64,
              byte_19D3D6A0,
              (const std::allocator<char> *)&p_type);
            MonitorReport::addValue(v46, (char *)0x32, sum_size, (unsigned __int64)&v64);
            std::string::~string(&v64);
            std::allocator<char>::~allocator(&p_type);
            data_versiona = proto::PlayerData::data_version(player_data);
            v47 = proto::PlayerData::uid(player_data);
            DataVersionMgr::delDataVersion(this->data_version_mgr_, v47, data_versiona);
            proto::SavePlayerDataRsp::set_retcode(rsp_0, 0);
            v48 = proto::PlayerData::data_version(player_data);
            proto::SavePlayerDataRsp::set_data_version(rsp_0, v48);
            v27 = 1;
          }
          TablePlayerData::~TablePlayerData((TablePlayerData *const)(v3 + 192));
          if ( v27 == 1 )
            v10 = 2;
          else
            v10 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/login_handler.cpp",
          "onSavePlayerDataReq",
          707);
        v11 = proto::PlayerData::data_version(player_data);
        v12 = proto::PlayerData::uid(player_data);
        common::milog::MiLogStream::operator()(
          &v64,
          "skip save req for uid=%u, data_version=%u, becaust cur_data_version in queue is %u",
          v12,
          v11,
          cur_data_version);
        common::milog::MiLogStream::~MiLogStream(&v64);
        v2 = 0;
        v10 = 1;
      }
    }
    else
    {
      proto::SavePlayerDataRsp::set_retcode(rsp_0, 0);
      v9 = proto::PlayerData::data_version(player_data);
      proto::SavePlayerDataRsp::set_data_version(rsp_0, v9);
      v10 = 0;
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 160));
    if ( !v10 || v10 == 2 )
    {
      v49 = ServiceBox::findService<DbgateService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v63, p_packet_ptr);
      std::shared_ptr<proto::SavePlayerDataRsp>::shared_ptr(
        (std::shared_ptr<proto::SavePlayerDataRsp> *const)(v3 + 160),
        (const std::shared_ptr<proto::SavePlayerDataRsp> *)(v3 + 128));
      LOBYTE(v49) = ServiceBase::sendRsp<proto::SavePlayerDataRsp>(
                      v49,
                      (std::shared_ptr<proto::SavePlayerDataRsp> *)(v3 + 160),
                      &v63) != 0;
      std::shared_ptr<proto::SavePlayerDataRsp>::~shared_ptr((std::shared_ptr<proto::SavePlayerDataRsp> *const)(v3 + 160));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v63);
      if ( (_BYTE)v49 )
        v2 = -1;
      else
        v2 = proto::SavePlayerDataRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::SavePlayerDataRsp>::~shared_ptr((std::shared_ptr<proto::SavePlayerDataRsp> *const)(v3 + 128));
  }
  std::shared_ptr<proto::SavePlayerDataReq const>::~shared_ptr((std::shared_ptr<const proto::SavePlayerDataReq> *const)(v3 + 96));
  result = v2;
  if ( v65 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 775: range 000000000C5E09F4-000000000C5E146B
int32_t __cdecl LoginHandler::onSaveBlockDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  const std::string *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::string *v14; // rax
  mysqlpp::String::size_type v15; // r14
  const std::string *v16; // rax
  const char *v17; // rax
  google::protobuf::uint32 v18; // r14d
  const unsigned int *v19; // rsi
  unsigned int *v20; // rax
  google::protobuf::uint32 *v21; // rdx
  char v22; // cl
  const std::string *v23; // rax
  int v24; // r14d
  const unsigned int *v25; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  _DWORD *v27; // rdx
  char v28; // cl
  const std::string *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  DbgateService *v39; // r14
  int32_t result; // eax
  mysqlpp::mysql_type_info p_type; // [rsp+1Bh] [rbp-235h] BYREF
  int val; // [rsp+1Ch] [rbp-234h] BYREF
  unsigned __int64 v44; // [rsp+20h] [rbp-230h] BYREF
  const proto::SaveBlockDataReq *req; // [rsp+28h] [rbp-228h]
  proto::SaveBlockDataRsp *rsp_0; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,unsigned int> *block_succ_save_map; // [rsp+38h] [rbp-218h]
  const google::protobuf::Map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+40h] [rbp-210h]
  const unsigned int *p_block_id; // [rsp+48h] [rbp-208h]
  const google::protobuf::Map<unsigned int,proto::BlockInfo> *__for_range_0; // [rsp+50h] [rbp-200h]
  const unsigned int *p_block_id_0; // [rsp+58h] [rbp-1F8h]
  std::shared_ptr<proto::SaveBlockDataRsp> p_rsp_ptr; // [rsp+60h] [rbp-1F0h] BYREF
  std::shared_ptr<common::minet::Packet> v53; // [rsp+70h] [rbp-1E0h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_begin; // [rsp+80h] [rbp-1D0h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator __for_end; // [rsp+A0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v56; // [rsp+C0h] [rbp-190h] BYREF
  char v57[368]; // [rsp+E0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL, p_packet_ptr);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 7 uid:777 48 4 16 total_length:781 64 16 11 req_ptr:776 96 16 11 rsp_ptr:776 128 16 9 tim"
                        "er:778 160 40 7 row:799 240 48 20 block_length_map:779";
  *(_QWORD *)(v2 + 16) = LoginHandler::onSaveBlockDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveBlockDataReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SaveBlockDataReq const>(
         (const std::shared_ptr<const proto::SaveBlockDataReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onSaveBlockDataReq",
      776);
    common::milog::MiLogStream::operator()(&v56, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SaveBlockDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveBlockDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::SaveBlockDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveBlockDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveBlockDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::SaveBlockDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
    block_succ_save_map = proto::SaveBlockDataRsp::mutable_block_succ_save_map(rsp_0);
    *(_DWORD *)(v2 + 48) = 0;
    ServiceBox::findService<DbgateService>();
    DbgateService::getConfig((DbgateService *const)&v53);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
    v8 = Config::isCheckUncompressValid(v7);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( v8 )
    {
      __for_range = proto::SaveBlockDataReq::block_info_map(req);
      google::protobuf::Map<unsigned int,proto::BlockInfo>::begin(&__for_begin, __for_range);
      google::protobuf::Map<unsigned int,proto::BlockInfo>::end(&__for_end, __for_range);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_block_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator*(&__for_begin);
        v9 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id + 2));
        if ( !LoginHandler::isUncompressValid(this, v9) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "onSaveBlockDataReq",
            790);
          v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v56, (const char (*)[5])"uid:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 32));
          v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" block_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, p_block_id);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v13,
            (const char (*)[25])" isUncompressValid fails");
          common::milog::MiLogStream::~MiLogStream(&v56);
          v5 = -1;
          goto LABEL_25;
        }
        google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator++(&__for_begin);
      }
    }
    __for_range_0 = proto::SaveBlockDataReq::block_info_map(req);
    google::protobuf::Map<unsigned int,proto::BlockInfo>::begin(&__for_begin, __for_range_0);
    google::protobuf::Map<unsigned int,proto::BlockInfo>::end(&__for_end, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_block_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator*(&__for_begin);
      TableBlockData::TableBlockData((TableBlockData *const)(v2 + 160));
      *(_DWORD *)(v2 + 160) = *(_DWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 164) = proto::BlockInfo::block_id((const proto::BlockInfo *const)(p_block_id_0 + 2));
      *(_DWORD *)(v2 + 168) = proto::BlockInfo::data_version((const proto::BlockInfo *const)(p_block_id_0 + 2));
      mysqlpp::mysql_type_info::mysql_type_info(&p_type, MYSQL_TYPE_STRING, 0, 0);
      v14 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id_0 + 2));
      v15 = std::string::length(v14);
      v16 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id_0 + 2));
      v17 = (const char *)std::string::c_str(v16);
      mysqlpp::String::assign((mysqlpp::String *const)(v2 + 176), v17, v15, &p_type, 0);
      if ( MysqlOpPlayerData::insertOrUpdateBlockData((const TableBlockData *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onSaveBlockDataReq",
          808);
        common::milog::MiLogStream::operator()(
          &v56,
          "[BLOCK][NETWORK]:insertOrUpdateBlockData fails for uid=%u, block_id=%u,data_version=%u",
          *(unsigned int *)(v2 + 160),
          *(unsigned int *)(v2 + 164),
          *(unsigned int *)(v2 + 168));
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
      else
      {
        v18 = proto::BlockInfo::data_version((const proto::BlockInfo *const)(p_block_id_0 + 2));
        v19 = p_block_id_0;
        v20 = google::protobuf::Map<unsigned int,unsigned int>::operator[](block_succ_save_map, p_block_id_0);
        v21 = v20;
        v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
        if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
        {
          LOBYTE(v19) = v22 != 0;
          __asan_report_store4(v20, v19);
        }
        *v21 = v18;
        v23 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id_0 + 2));
        v24 = std::string::length(v23);
        v25 = p_block_id_0;
        v26 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v2 + 240),
                p_block_id_0);
        v27 = v26;
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
        {
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(v26, v25);
        }
        *v27 = v24;
        v29 = proto::BlockInfo::bin_data[abi:cxx11]((const proto::BlockInfo *const)(p_block_id_0 + 2));
        *(_DWORD *)(v2 + 48) += std::string::length(v29);
      }
      TableBlockData::~TableBlockData((TableBlockData *const)(v2 + 160));
      google::protobuf::Map<unsigned int,proto::BlockInfo>::const_iterator::operator++(&__for_begin);
    }
    proto::SaveBlockDataRsp::set_retcode(rsp_0, 0);
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "onSaveBlockDataReq",
      816);
    v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v56,
            (const char (*)[27])"[BLOCK]:SaveBlockData uid:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 32));
    v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])", block_list:");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v32,
            (const std::map<unsigned int,unsigned int> *)(v2 + 240));
    v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])", time_cost:");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 128));
    v35 = common::milog::MiLogStream::operator<<<int,(int *)0>(v34, &val);
    v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])", size:");
    v44 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 240));
    v37 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v36, &v44);
    v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v37, (const char (*)[13])", total_len:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v39 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v53, p_packet_ptr);
    std::shared_ptr<proto::SaveBlockDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SaveBlockDataRsp> *)(v2 + 96));
    LOBYTE(v39) = ServiceBase::sendRsp<proto::SaveBlockDataRsp>(v39, &p_rsp_ptr, &v53) != 0;
    std::shared_ptr<proto::SaveBlockDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v53);
    if ( (_BYTE)v39 )
      v5 = -1;
    else
      v5 = proto::SaveBlockDataRsp::retcode(rsp_0);
LABEL_25:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    std::shared_ptr<proto::SaveBlockDataRsp>::~shared_ptr((std::shared_ptr<proto::SaveBlockDataRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::SaveBlockDataReq const>::~shared_ptr((std::shared_ptr<const proto::SaveBlockDataReq> *const)(v2 + 64));
  result = v5;
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 828: range 000000000C5E146C-000000000C5E16B8
bool __cdecl LoginHandler::isUncompressValid(LoginHandler *const this, const std::string *bin_str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 14 uncomp_str:833";
  *(_QWORD *)(v2 + 16) = LoginHandler::isUncompressValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( common::tools::ZlibUtil::isCompressWithPad(bin_str) )
  {
    common::tools::ZlibUtil::uncompressWithPad((std::string *)(v2 + 32), bin_str);
    std::string::~string((void *)(v2 + 32));
  }
  result = 1;
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 845: range 000000000C5E16BA-000000000C5E1939
bool __cdecl LoginHandler::isAllowIpLogin(LoginHandler *const this, uint32_t ip_int)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const char *v7; // rax
  bool v8; // r15
  bool result; // al
  int retcode; // [rsp+1Ch] [rbp-104h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-F0h] BYREF
  std::string v13; // [rsp+50h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 14 span_proxy:846";
  *(_QWORD *)(v2 + 16) = LoginHandler::isAllowIpLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  retcode = 0;
  opentracing::v3::string_view::string_view(&operation_name, "isAllowIpLogin");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 32), v5, operation_name, 0LL, 0, &retcode);
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( !data::DbLoginBlackIpConfigMgr::checkLoginBlackList(v6, ip_int) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "isAllowIpLogin",
      850);
    common::tools::NetUtils::inetNtoa[abi:cxx11](&v13, ip_int);
    v7 = (const char *)std::string::c_str(&v13);
    common::milog::MiLogStream::operator()(&v12, "refuse login from ip=%s", v7);
    std::string::~string(&v13);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 32));
  result = v8;
  if ( v14 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 858: range 000000000C5E193A-000000000C5E1C25
int32_t __cdecl LoginHandler::onSavePlayerExtraBinDataNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const std::string *v6; // rax
  google::protobuf::uint32 v7; // eax
  int32_t result; // eax
  std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:859 64 32 7 row:860";
  *(_QWORD *)(v2 + 16) = LoginHandler::onSavePlayerExtraBinDataNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::SavePlayerExtraBinDataNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SavePlayerExtraBinDataNotify>(
         (const std::shared_ptr<proto::SavePlayerExtraBinDataNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onSavePlayerExtraBinDataNotify",
      859);
    common::milog::MiLogStream::operator()(&v10, "get SavePlayerExtraBinDataNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SavePlayerExtraBinDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    TablePlayerExtraBinData::TablePlayerExtraBinData((TablePlayerExtraBinData *const)(v2 + 64));
    *(_DWORD *)(v2 + 64) = proto::SavePlayerExtraBinDataNotify::uid(notify);
    v6 = proto::SavePlayerExtraBinDataNotify::player_extra_bin_data[abi:cxx11](notify);
    mysqlpp::String::operator=((mysqlpp::String *const)(v2 + 72), v6);
    if ( MysqlOpPlayerData::updatePlayerExtraBinData((const TablePlayerExtraBinData *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "onSavePlayerExtraBinDataNotify",
        866);
      v7 = proto::SavePlayerExtraBinDataNotify::uid(notify);
      common::milog::MiLogStream::operator()(&v10, "updatePlayerExtraBinData fails for uid=%u", v7);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    TablePlayerExtraBinData::~TablePlayerExtraBinData((TablePlayerExtraBinData *const)(v2 + 64));
  }
  std::shared_ptr<proto::SavePlayerExtraBinDataNotify>::~shared_ptr((std::shared_ptr<proto::SavePlayerExtraBinDataNotify> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 875: range 000000000C5E1C26-000000000C5E2A5F
int32_t __cdecl LoginHandler::onGetHomeDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 rand; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const unsigned int *v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  bool is_judge_user_db_delete; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  size_t v27; // r14
  const char *v28; // rax
  common::milog::MiLogStream *v29; // rax
  DbgateService *v30; // r14
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  const proto::HomeData *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-1F8h] BYREF
  int v53; // [rsp+1Ch] [rbp-1F4h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-1F0h] BYREF
  int32_t retcode; // [rsp+24h] [rbp-1ECh]
  const proto::GetHomeDataReq *req; // [rsp+28h] [rbp-1E8h]
  proto::GetHomeDataRsp *rsp_0; // [rsp+30h] [rbp-1E0h]
  proto::HomeData *home_data; // [rsp+38h] [rbp-1D8h]
  std::shared_ptr<proto::GetHomeDataRsp> p_rsp_ptr; // [rsp+40h] [rbp-1D0h] BYREF
  std::shared_ptr<common::minet::Packet> v60; // [rsp+50h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v61; // [rsp+60h] [rbp-1B0h] BYREF
  char v62[400]; // [rsp+80h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL, p_packet_ptr);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 12 is_exist:886 48 4 12 home_uid:880 64 4 11 rsp_len:944 80 4 18 block_end_time:898 96 4 "
                        "23 home_block_end_time:899 112 16 11 req_ptr:878 144 16 11 rsp_ptr:878 176 32 16 end_time_str:89"
                        "7 240 80 7 row:887";
  *(_QWORD *)(v2 + 16) = LoginHandler::onGetHomeDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862730] = -202116109;
  retcode = -1;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetHomeDataReq>((common::minet::Packet *const)(v2 + 112));
  if ( std::operator==<proto::GetHomeDataReq const>(
         (const std::shared_ptr<const proto::GetHomeDataReq> *)(v2 + 112),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetHomeDataReq",
      878);
    common::milog::MiLogStream::operator()(&v61, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetHomeDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHomeDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    common::tools::perf::make_shared<proto::GetHomeDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    proto::GetHomeDataRsp::set_retcode(rsp_0, -1);
    *(_DWORD *)(v2 + 48) = proto::GetHomeDataReq::home_uid(req);
    proto::GetHomeDataRsp::set_home_uid(rsp_0, *(_DWORD *)(v2 + 48));
    rand = proto::GetHomeDataReq::load_rand(req);
    proto::GetHomeDataRsp::set_load_rand(rsp_0, rand);
    *(_BYTE *)(v2 + 32) = 0;
    TableHomeData::TableHomeData((TableHomeData *const)(v2 + 240));
    retcode = MysqlOpHomeData::selectHomeDataByUid(*(_DWORD *)(v2 + 48), (TableHomeData *)(v2 + 240), v2 + 32);
    if ( retcode )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onGetHomeDataReq",
        891);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v61,
             (const char (*)[45])"[HOME] selectHomeDataByUid failed, home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
      proto::GetHomeDataRsp::set_retcode(rsp_0, retcode);
    }
    else
    {
      MysqlOpMisc::selectPlayerFeatureBlockEndTime[abi:cxx11]((std::string *)(v2 + 176), *(_DWORD *)(v2 + 48), 4u);
      *(_DWORD *)(v2 + 80) = common::tools::TimeUtils::getTimeByStr((const std::string *)(v2 + 176));
      *(_DWORD *)(v2 + 96) = common::tools::TimeUtils::getTimeByStr((const std::string *)(v2 + 272));
      if ( !*(_DWORD *)(v2 + 80) || !*(_DWORD *)(v2 + 96) )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/login_handler.cpp",
          "onGetHomeDataReq",
          902);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               &v61,
               (const char (*)[16])" invalid_time: ");
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 176));
        v10 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v9, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 272));
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onGetHomeDataReq",
        904);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v61, (const char (*)[12])" block_end:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"; home_end:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v61);
      v14 = std::max<unsigned int>((const unsigned int *)(v2 + 80), (const unsigned int *)(v2 + 96));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v2 + 80) = *v15;
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onGetHomeDataReq",
        906);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v61, (const char (*)[16])" block_end_str:");
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v2 + 176));
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])"; home_end_str:");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v2 + 272));
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", end_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v61);
      proto::GetHomeDataRsp::set_retcode(rsp_0, 0);
      proto::GetHomeDataRsp::set_is_new_home(rsp_0, *(_BYTE *)(v2 + 32) ^ 1);
      if ( *(_BYTE *)(v2 + 32) )
      {
        ServiceBox::findService<DbgateService>();
        DbgateService::getConfig((DbgateService *const)&v60);
        v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60);
        if ( *(_BYTE *)(((unsigned __int64)&v21->is_judge_user_db_delete_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v21 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&v21->is_judge_user_db_delete_ >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&v21->is_judge_user_db_delete_);
        }
        is_judge_user_db_delete = v21->is_judge_user_db_delete_;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v60);
        if ( is_judge_user_db_delete
          && mysqlpp::tiny_int<signed char>::operator bool((const mysqlpp::tiny_int<signed char> *const)(v2 + 304)) )
        {
          retcode = -1;
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            6u,
            "./src/service/login_handler.cpp",
            "onGetHomeDataReq",
            919);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v61, (const char (*)[12])"[HOME] uid:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" is_delete:");
          v26 = common::milog::MiLogStream::operator<<<mysqlpp::tiny_int<signed char>,(mysqlpp::tiny_int<signed char>*)0>(
                  v25,
                  (const mysqlpp::tiny_int<signed char> *)(v2 + 304));
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v26,
            (const char (*)[26])" selectHomeDataByUid err!");
          common::milog::MiLogStream::~MiLogStream(&v61);
          proto::GetHomeDataRsp::set_retcode(rsp_0, -1);
        }
        else
        {
          proto::GetHomeDataRsp::set_data_version(rsp_0, *(_DWORD *)(v2 + 264));
          home_data = proto::GetHomeDataRsp::mutable_home_data(rsp_0);
          proto::HomeData::set_uid(home_data, *(_DWORD *)(v2 + 48));
          v27 = mysqlpp::String::length((const mysqlpp::String *const)(v2 + 248));
          v28 = mysqlpp::String::c_str((const mysqlpp::String *const)(v2 + 248));
          proto::HomeData::set_bin_data(home_data, v28, v27);
          proto::HomeData::set_data_version(home_data, *(_DWORD *)(v2 + 264));
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/login_handler.cpp",
            "onGetHomeDataReq",
            931);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v61,
                  (const char (*)[16])"block_end_time:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v2 + 272));
          common::milog::MiLogStream::~MiLogStream(&v61);
          proto::HomeData::set_block_end_time(home_data, *(_DWORD *)(v2 + 80));
        }
      }
      std::string::~string((void *)(v2 + 176));
    }
    TableHomeData::~TableHomeData((TableHomeData *const)(v2 + 240));
    v30 = ServiceBox::findService<DbgateService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v60, p_packet_ptr);
    std::shared_ptr<proto::GetHomeDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetHomeDataRsp> *)(v2 + 144));
    LOBYTE(v30) = ServiceBase::sendRsp<proto::GetHomeDataRsp>(v30, &p_rsp_ptr, &v60) != 0;
    std::shared_ptr<proto::GetHomeDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v60);
    if ( (_BYTE)v30 )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onGetHomeDataReq",
        940);
      v31 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v61,
              (const char (*)[28])"[HOME] sendRsp failed, uid:");
      v32 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v2 + 96) = common::minet::Packet::getUserId(v32);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 96));
      v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
      retcode = -1;
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 64) = google::protobuf::MessageLite::ByteSize(rsp_0);
      if ( *(_DWORD *)(v2 + 64) > 0x64000u )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onGetHomeDataReq",
          948);
        v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v61,
                (const char (*)[28])"player bin too long, size: ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v2 + 64));
        v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/login_handler.cpp",
        "onGetHomeDataReq",
        951);
      v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v61, (const char (*)[12])"[HOME] uid:");
      v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v39);
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
      v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])" get home_uid:");
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 48));
      v43 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v42,
              (const char (*)[21])" home data. retcode:");
      v53 = proto::GetHomeDataRsp::retcode(rsp_0);
      v44 = common::milog::MiLogStream::operator<<<int,(int *)0>(v43, &v53);
      v45 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v44, (const char (*)[15])" data_version:");
      v54 = proto::GetHomeDataRsp::data_version(rsp_0);
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &v54);
      v47 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v46, (const char (*)[17])" block_end_time:");
      v48 = proto::GetHomeDataRsp::home_data(rsp_0);
      *(_DWORD *)(v2 + 80) = proto::HomeData::block_end_time(v48);
      v49 = common::milog::MiLogStream::operator<<<int,(int *)0>(v47, (const int *)(v2 + 80));
      v50 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v49, (const char (*)[14])" is_new_home:");
      *(_DWORD *)(v2 + 96) = proto::GetHomeDataRsp::is_new_home(rsp_0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v61);
      retcode = proto::GetHomeDataRsp::retcode(rsp_0);
      v5 = retcode;
    }
    std::shared_ptr<proto::GetHomeDataRsp>::~shared_ptr((std::shared_ptr<proto::GetHomeDataRsp> *const)(v2 + 144));
  }
  std::shared_ptr<proto::GetHomeDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetHomeDataReq> *const)(v2 + 112));
  result = v5;
  if ( v62 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 958: range 000000000C5E2A60-000000000C5E3507
int32_t __cdecl LoginHandler::onSaveHomeDataReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::string *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  mysqlpp::String::size_type v12; // r15
  const std::string *v13; // rax
  const char *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r15
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  DbgateService *v31; // r14
  int32_t result; // eax
  bool v33; // [rsp+Fh] [rbp-1E1h]
  mysqlpp::mysql_type_info p_type; // [rsp+27h] [rbp-1C9h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-1C8h] BYREF
  uint32_t cur_data_version; // [rsp+2Ch] [rbp-1C4h]
  unsigned __int64 val; // [rsp+30h] [rbp-1C0h] BYREF
  const proto::SaveHomeDataReq *req; // [rsp+38h] [rbp-1B8h]
  proto::SaveHomeDataRsp *rsp_0; // [rsp+40h] [rbp-1B0h]
  const proto::HomeData *home_data; // [rsp+48h] [rbp-1A8h]
  std::shared_ptr<common::minet::Packet> v41; // [rsp+50h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-190h] BYREF
  char v43[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL, p_packet_ptr);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 26 find_data_version_cost:966 48 4 18 make_data_cost:967 64 4 14 mysql_cost:968 80 4 12 h"
                        "ome_uid:969 96 4 16 data_version:970 112 16 11 req_ptr:959 144 16 11 rsp_ptr:959 176 16 9 timer:"
                        "965 208 80 8 row:1000";
  *(_QWORD *)(v3 + 16) = LoginHandler::onSaveHomeDataReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveHomeDataReq>((common::minet::Packet *const)(v3 + 112));
  if ( std::operator==<proto::SaveHomeDataReq const>(
         (const std::shared_ptr<const proto::SaveHomeDataReq> *)(v3 + 112),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onSaveHomeDataReq",
      959);
    common::milog::MiLogStream::operator()(&v42, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v2 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SaveHomeDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveHomeDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    common::tools::perf::make_shared<proto::SaveHomeDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveHomeDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    proto::SaveHomeDataRsp::set_retcode(rsp_0, -1);
    home_data = proto::SaveHomeDataReq::home_data(req);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 176));
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 80) = proto::HomeData::uid(home_data);
    *(_DWORD *)(v3 + 96) = proto::HomeData::data_version(home_data);
    cur_data_version = DataVersionMgr::findDataVersion(&this->data_version_mgr_[1], *(_DWORD *)(v3 + 80));
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 176));
    if ( cur_data_version )
    {
      if ( cur_data_version <= *(_DWORD *)(v3 + 96) )
      {
        ServiceBox::findService<DbgateService>();
        DbgateService::getConfig((DbgateService *const)&v41);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
        v33 = 0;
        if ( Config::isCheckUncompressValid(v7) )
        {
          v8 = proto::HomeData::bin_data[abi:cxx11](home_data);
          if ( !LoginHandler::isUncompressValid(this, v8) )
            v33 = 1;
        }
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
        if ( v33 )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "onSaveHomeDataReq",
            995);
          v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v42, (const char (*)[5])"uid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v10,
            (const char (*)[34])" home bin isUncompressValid fails");
          common::milog::MiLogStream::~MiLogStream(&v42);
          v2 = -1;
          v6 = 1;
        }
        else
        {
          TableHomeData::TableHomeData((TableHomeData *const)(v3 + 208));
          *(_DWORD *)(v3 + 208) = *(_DWORD *)(v3 + 80);
          mysqlpp::mysql_type_info::mysql_type_info(&p_type, MYSQL_TYPE_STRING, 0, 0);
          v11 = proto::HomeData::bin_data[abi:cxx11](home_data);
          v12 = std::string::length(v11);
          v13 = proto::HomeData::bin_data[abi:cxx11](home_data);
          v14 = (const char *)std::string::c_str(v13);
          mysqlpp::String::assign((mysqlpp::String *const)(v3 + 216), v14, v12, &p_type, 0);
          *(_DWORD *)(v3 + 232) = *(_DWORD *)(v3 + 96);
          *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 176));
          if ( MysqlOpHomeData::insertOrUpdateHomeData((const TableHomeData *)(v3 + 208)) )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onSaveHomeDataReq",
              1010);
            common::milog::MiLogStream::operator()(
              &v42,
              "[NETWORK]insertOrUpdateHomeData fails for home_uid=%u, data_version=%u",
              *(unsigned int *)(v3 + 80),
              *(unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v42);
            v2 = -1;
            v15 = 0;
          }
          else
          {
            *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 176));
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/service/login_handler.cpp",
              "onSaveHomeDataReq",
              1016);
            v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v42,
                    (const char (*)[36])"[HOME] SaveHomeData succ, home_uid:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 80));
            v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v17,
                    (const char (*)[15])" data_version:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v3 + 96));
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])" bin_length:");
            v21 = proto::HomeData::bin_data[abi:cxx11](home_data);
            val = std::string::length(v21);
            v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &val);
            v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v22,
                    (const char (*)[25])" find_data_version_cost:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 32));
            v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v24,
                    (const char (*)[17])" make_data_cost:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])" mysql_cost:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v42);
            if ( (unsigned int)(*(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 48)) > 0x7A120 )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "onSaveHomeDataReq",
                1022);
              v28 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      &v42,
                      (const char (*)[57])"mysql insert or update home data cost too long,home_uid:");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v3 + 80));
              v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v29,
                      (const char (*)[12])" cost_time:");
              v35 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 48);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v35);
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
            DataVersionMgr::delDataVersion(&this->data_version_mgr_[1], *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 96));
            proto::SaveHomeDataRsp::set_retcode(rsp_0, 0);
            proto::SaveHomeDataRsp::set_data_version(rsp_0, *(_DWORD *)(v3 + 96));
            v15 = 1;
          }
          TableHomeData::~TableHomeData((TableHomeData *const)(v3 + 208));
          if ( v15 == 1 )
            v6 = 2;
          else
            v6 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/login_handler.cpp",
          "onSaveHomeDataReq",
          988);
        common::milog::MiLogStream::operator()(
          &v42,
          "skip save req for home_uid=%u, data_version=%u, because cur_data_version in queue is %u",
          *(unsigned int *)(v3 + 80),
          *(unsigned int *)(v3 + 96),
          cur_data_version);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v2 = 0;
        v6 = 1;
      }
    }
    else
    {
      proto::SaveHomeDataRsp::set_retcode(rsp_0, 0);
      proto::SaveHomeDataRsp::set_data_version(rsp_0, *(_DWORD *)(v3 + 96));
      v6 = 0;
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 176));
    if ( !v6 || v6 == 2 )
    {
      v31 = ServiceBox::findService<DbgateService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v41, p_packet_ptr);
      std::shared_ptr<proto::SaveHomeDataRsp>::shared_ptr(
        (std::shared_ptr<proto::SaveHomeDataRsp> *const)(v3 + 176),
        (const std::shared_ptr<proto::SaveHomeDataRsp> *)(v3 + 144));
      LOBYTE(v31) = ServiceBase::sendRsp<proto::SaveHomeDataRsp>(
                      v31,
                      (std::shared_ptr<proto::SaveHomeDataRsp> *)(v3 + 176),
                      &v41) != 0;
      std::shared_ptr<proto::SaveHomeDataRsp>::~shared_ptr((std::shared_ptr<proto::SaveHomeDataRsp> *const)(v3 + 176));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v41);
      if ( (_BYTE)v31 )
        v2 = -1;
      else
        v2 = proto::SaveHomeDataRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::SaveHomeDataRsp>::~shared_ptr((std::shared_ptr<proto::SaveHomeDataRsp> *const)(v3 + 144));
  }
  std::shared_ptr<proto::SaveHomeDataReq const>::~shared_ptr((std::shared_ptr<const proto::SaveHomeDataReq> *const)(v3 + 112));
  result = v2;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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
