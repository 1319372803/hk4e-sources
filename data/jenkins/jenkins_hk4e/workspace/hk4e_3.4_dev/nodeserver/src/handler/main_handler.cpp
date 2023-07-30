// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/handler/main_handler.cpp

// Line 32: range 000000000384631C-0000000003848A1D
int32_t __cdecl MainHandler::addPacketFuncToMap(
        MainHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  MainHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  MainHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MainHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  MainHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  MainHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  MainHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  MainHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  MainHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  MainHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  MainHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  MainHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  MainHandler **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  MainHandler **v41; // r8
  const std::_Placeholder<1> *v42; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  MainHandler **v44; // r8
  const std::_Placeholder<1> *v45; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  MainHandler **v47; // r8
  const std::_Placeholder<1> *v48; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v49; // rax
  MainHandler **v50; // r8
  const std::_Placeholder<1> *v51; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v52; // rax
  MainHandler **v53; // r8
  const std::_Placeholder<1> *v54; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v55; // rax
  MainHandler **v56; // r8
  const std::_Placeholder<1> *v57; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v58; // rax
  MainHandler **v59; // r8
  const std::_Placeholder<1> *v60; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  MainHandler **v62; // r8
  const std::_Placeholder<1> *v63; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  MainHandler **v65; // r8
  const std::_Placeholder<1> *v66; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v67; // rax
  MainHandler **v68; // r8
  const std::_Placeholder<1> *v69; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v70; // rax
  MainHandler **v71; // r8
  const std::_Placeholder<1> *v72; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v73; // rax
  MainHandler **v74; // r8
  const std::_Placeholder<1> *v75; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v76; // rax
  MainHandler **v77; // r8
  const std::_Placeholder<1> *v78; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v79; // rax
  MainHandler **v80; // r8
  const std::_Placeholder<1> *v81; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v82; // rax
  MainHandler **v83; // r8
  const std::_Placeholder<1> *v84; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v85; // rax
  __m128i v86; // [rsp+0h] [rbp-250h] BYREF
  __m128i v87; // [rsp+10h] [rbp-240h] BYREF
  __m128i v88; // [rsp+20h] [rbp-230h] BYREF
  __m128i v89; // [rsp+30h] [rbp-220h] BYREF
  __m128i v90; // [rsp+40h] [rbp-210h] BYREF
  __m128i v91; // [rsp+50h] [rbp-200h] BYREF
  __m128i v92; // [rsp+60h] [rbp-1F0h] BYREF
  __m128i v93; // [rsp+70h] [rbp-1E0h] BYREF
  __m128i v94; // [rsp+80h] [rbp-1D0h] BYREF
  __m128i v95; // [rsp+90h] [rbp-1C0h] BYREF
  __m128i v96; // [rsp+A0h] [rbp-1B0h] BYREF
  __m128i v97; // [rsp+B0h] [rbp-1A0h] BYREF
  __m128i v98; // [rsp+C0h] [rbp-190h] BYREF
  __m128i v99; // [rsp+D0h] [rbp-180h] BYREF
  __m128i v100; // [rsp+E0h] [rbp-170h] BYREF
  __m128i v101; // [rsp+F0h] [rbp-160h] BYREF
  __m128i v102; // [rsp+100h] [rbp-150h] BYREF
  __m128i v103; // [rsp+110h] [rbp-140h] BYREF
  __m128i v104; // [rsp+120h] [rbp-130h] BYREF
  __m128i v105; // [rsp+130h] [rbp-120h] BYREF
  __m128i v106; // [rsp+140h] [rbp-110h] BYREF
  __m128i v107; // [rsp+150h] [rbp-100h] BYREF
  __m128i v108; // [rsp+160h] [rbp-F0h] BYREF
  __m128i v109; // [rsp+170h] [rbp-E0h] BYREF
  __m128i v110; // [rsp+180h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+190h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+198h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+1A0h] [rbp-B0h]
  MainHandler *thisa; // [rsp+1A8h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1BCh] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v116; // [rsp+1C0h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+1C8h] [rbp-88h] BYREF
  int (*__f[2])(MainHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+1D0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,const std::_Placeholder<1>&>::type v119; // [rsp+1E0h] [rbp-70h] BYREF
  common::milog::MiLogStream v120; // [rsp+200h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10135;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v116, &__y) )
  {
    common::milog::MiLogStream::create(
      &v120,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/main_handler.cpp",
      "addPacketFuncToMap",
      34);
    common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10135LL);
    common::milog::MiLogStream::~MiLogStream(&v120);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(MainHandler *, std::shared_ptr<common::minet::Packet>))MainHandler::onPlayerOnlineStatusNotify;
    __f[1] = 0LL;
    std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
      &v119,
      __f,
      (MainHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10135;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
      v7,
      &v119);
    __x = 10272;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v116, &__y) )
    {
      common::milog::MiLogStream::create(
        &v120,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/main_handler.cpp",
        "addPacketFuncToMap",
        35);
      common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10272LL);
      common::milog::MiLogStream::~MiLogStream(&v120);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(MainHandler *, std::shared_ptr<common::minet::Packet>))MainHandler::onOnlinePlayerNumReq;
      __f[1] = 0LL;
      std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
        &v119,
        __f,
        (MainHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10272;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
        v10,
        &v119);
      __x = 10239;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v116, &__y) )
      {
        common::milog::MiLogStream::create(
          &v120,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/main_handler.cpp",
          "addPacketFuncToMap",
          36);
        common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10239LL);
        common::milog::MiLogStream::~MiLogStream(&v120);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v86.m128i_i64[0] = (__int64)MainHandler::onPlayerLoginPerSecondReq;
        v86.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v86);
        std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
          &v119,
          __f,
          (MainHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10239;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
          v13,
          &v119);
        __x = 10235;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v116, &__y) )
        {
          common::milog::MiLogStream::create(
            &v120,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/main_handler.cpp",
            "addPacketFuncToMap",
            37);
          common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10235LL);
          common::milog::MiLogStream::~MiLogStream(&v120);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v87.m128i_i64[0] = (__int64)MainHandler::onCheckOnlinePlayerReq;
          v87.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v87);
          std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
            &v119,
            __f,
            (MainHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10235;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
            v16,
            &v119);
          __x = 10073;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v116, &__y) )
          {
            common::milog::MiLogStream::create(
              &v120,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/main_handler.cpp",
              "addPacketFuncToMap",
              38);
            common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10073LL);
            common::milog::MiLogStream::~MiLogStream(&v120);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v88.m128i_i64[0] = (__int64)MainHandler::onClientVersionSyncNotify;
            v88.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v88);
            std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
              &v119,
              __f,
              (MainHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10073;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
              v19,
              &v119);
            __x = 10290;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v116, &__y) )
            {
              common::milog::MiLogStream::create(
                &v120,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/main_handler.cpp",
                "addPacketFuncToMap",
                39);
              common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10290LL);
              common::milog::MiLogStream::~MiLogStream(&v120);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v89.m128i_i64[0] = (__int64)MainHandler::onCheckGameVersionReq;
              v89.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v89);
              std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                &v119,
                __f,
                (MainHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10290;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                v22,
                &v119);
              __x = 10299;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v116, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v120,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/main_handler.cpp",
                  "addPacketFuncToMap",
                  40);
                common::milog::MiLogStream::operator()(&v120, "can not add repeat process func for cmd_id=%u", 10299LL);
                common::milog::MiLogStream::~MiLogStream(&v120);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v90.m128i_i64[0] = (__int64)MainHandler::onPlatformPlayerNumReq;
                v90.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v90);
                std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                  &v119,
                  __f,
                  (MainHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10299;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v119);
                __x = 10275;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v116, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v120,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/main_handler.cpp",
                    "addPacketFuncToMap",
                    41);
                  common::milog::MiLogStream::operator()(
                    &v120,
                    "can not add repeat process func for cmd_id=%u",
                    10275LL);
                  common::milog::MiLogStream::~MiLogStream(&v120);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v91.m128i_i64[0] = (__int64)MainHandler::onQueryPlayerMemDataByMuipReq;
                  v91.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v91);
                  std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                    &v119,
                    __f,
                    (MainHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10275;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v119);
                  __x = 198;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v116, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v120,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/main_handler.cpp",
                      "addPacketFuncToMap",
                      42);
                    common::milog::MiLogStream::operator()(
                      &v120,
                      "can not add repeat process func for cmd_id=%u",
                      198LL);
                    common::milog::MiLogStream::~MiLogStream(&v120);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v92.m128i_i64[0] = (__int64)MainHandler::onGetPlayerTokenRsp;
                    v92.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v92);
                    std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                      &v119,
                      __f,
                      (MainHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 198;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v119);
                    __x = 10297;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v116, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v120,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/main_handler.cpp",
                        "addPacketFuncToMap",
                        43);
                      common::milog::MiLogStream::operator()(
                        &v120,
                        "can not add repeat process func for cmd_id=%u",
                        10297LL);
                      common::milog::MiLogStream::~MiLogStream(&v120);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v93.m128i_i64[0] = (__int64)MainHandler::onBindGmUidNotify;
                      v93.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v93);
                      std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                        &v119,
                        __f,
                        (MainHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 10297;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v119);
                      __x = 10281;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v116, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v120,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/main_handler.cpp",
                          "addPacketFuncToMap",
                          44);
                        common::milog::MiLogStream::operator()(
                          &v120,
                          "can not add repeat process func for cmd_id=%u",
                          10281LL);
                        common::milog::MiLogStream::~MiLogStream(&v120);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v94.m128i_i64[0] = (__int64)MainHandler::onUnbindGmUidNotify;
                        v94.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v94);
                        std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                          &v119,
                          __f,
                          (MainHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 10281;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v119);
                        __x = 10205;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v116, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v120,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/main_handler.cpp",
                            "addPacketFuncToMap",
                            45);
                          common::milog::MiLogStream::operator()(
                            &v120,
                            "can not add repeat process func for cmd_id=%u",
                            10205LL);
                          common::milog::MiLogStream::~MiLogStream(&v120);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v95.m128i_i64[0] = (__int64)MainHandler::onGetBindGmUidReq;
                          v95.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v95);
                          std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                            &v119,
                            __f,
                            (MainHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 10205;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v119);
                          __x = 10839;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v116, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v120,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/main_handler.cpp",
                              "addPacketFuncToMap",
                              46);
                            common::milog::MiLogStream::operator()(
                              &v120,
                              "can not add repeat process func for cmd_id=%u",
                              10839LL);
                            common::milog::MiLogStream::~MiLogStream(&v120);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v96.m128i_i64[0] = (__int64)MainHandler::onServerGetPlayerFriendBriefRsp;
                            v96.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v96);
                            std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                              &v119,
                              __f,
                              (MainHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v41,
                              v42);
                            __x = 10839;
                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                              v43,
                              &v119);
                            __x = 10870;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v116, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v120,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/main_handler.cpp",
                                "addPacketFuncToMap",
                                47);
                              common::milog::MiLogStream::operator()(
                                &v120,
                                "can not add repeat process func for cmd_id=%u",
                                10870LL);
                              common::milog::MiLogStream::~MiLogStream(&v120);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v97.m128i_i64[0] = (__int64)MainHandler::onServerGetAskFriendBriefRsp;
                              v97.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v97);
                              std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                &v119,
                                __f,
                                (MainHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v44,
                                v45);
                              __x = 10870;
                              v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                v46,
                                &v119);
                              __x = 10947;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v116, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v120,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/main_handler.cpp",
                                  "addPacketFuncToMap",
                                  48);
                                common::milog::MiLogStream::operator()(
                                  &v120,
                                  "can not add repeat process func for cmd_id=%u",
                                  10947LL);
                                common::milog::MiLogStream::~MiLogStream(&v120);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v98.m128i_i64[0] = (__int64)MainHandler::onMatchserverWorkloadInfoNotify;
                                v98.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v98);
                                std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                  &v119,
                                  __f,
                                  (MainHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v47,
                                  v48);
                                __x = 10947;
                                v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                  v49,
                                  &v119);
                                __x = 10926;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v116, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v120,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/main_handler.cpp",
                                    "addPacketFuncToMap",
                                    49);
                                  common::milog::MiLogStream::operator()(
                                    &v120,
                                    "can not add repeat process func for cmd_id=%u",
                                    10926LL);
                                  common::milog::MiLogStream::~MiLogStream(&v120);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v99.m128i_i64[0] = (__int64)MainHandler::onAddMatchUnitReq;
                                  v99.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v99);
                                  std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                    &v119,
                                    __f,
                                    (MainHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v50,
                                    v51);
                                  __x = 10926;
                                  v52 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                    v52,
                                    &v119);
                                  __x = 10942;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v116, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v120,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/main_handler.cpp",
                                      "addPacketFuncToMap",
                                      50);
                                    common::milog::MiLogStream::operator()(
                                      &v120,
                                      "can not add repeat process func for cmd_id=%u",
                                      10942LL);
                                    common::milog::MiLogStream::~MiLogStream(&v120);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v100.m128i_i64[0] = (__int64)MainHandler::onSyncMatchUnitReq;
                                    v100.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v100);
                                    std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                      &v119,
                                      __f,
                                      (MainHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v53,
                                      v54);
                                    __x = 10942;
                                    v55 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                      v55,
                                      &v119);
                                    __x = 10826;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v116, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v120,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/main_handler.cpp",
                                        "addPacketFuncToMap",
                                        51);
                                      common::milog::MiLogStream::operator()(
                                        &v120,
                                        "can not add repeat process func for cmd_id=%u",
                                        10826LL);
                                      common::milog::MiLogStream::~MiLogStream(&v120);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v101.m128i_i64[0] = (__int64)MainHandler::onServerGetRecentMpPlayerListRsp;
                                      v101.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v101);
                                      std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                        &v119,
                                        __f,
                                        (MainHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v56,
                                        v57);
                                      __x = 10826;
                                      v58 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                        v58,
                                        &v119);
                                      __x = 10895;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v116, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v120,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/main_handler.cpp",
                                          "addPacketFuncToMap",
                                          52);
                                        common::milog::MiLogStream::operator()(
                                          &v120,
                                          "can not add repeat process func for cmd_id=%u",
                                          10895LL);
                                        common::milog::MiLogStream::~MiLogStream(&v120);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v102.m128i_i64[0] = (__int64)MainHandler::onServerGetPlayerBlacklistRsp;
                                        v102.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v102);
                                        std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                          &v119,
                                          __f,
                                          (MainHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v59,
                                          v60);
                                        __x = 10895;
                                        v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                          v61,
                                          &v119);
                                        __x = 10222;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v116, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v120,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/main_handler.cpp",
                                            "addPacketFuncToMap",
                                            53);
                                          common::milog::MiLogStream::operator()(
                                            &v120,
                                            "can not add repeat process func for cmd_id=%u",
                                            10222LL);
                                          common::milog::MiLogStream::~MiLogStream(&v120);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v103.m128i_i64[0] = (__int64)MainHandler::onFineGrainedPlayerNumReq;
                                          v103.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v103);
                                          std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                            &v119,
                                            __f,
                                            (MainHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v62,
                                            v63);
                                          __x = 10222;
                                          v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                            v64,
                                            &v119);
                                          __x = 10204;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v116, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v120,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/main_handler.cpp",
                                              "addPacketFuncToMap",
                                              54);
                                            common::milog::MiLogStream::operator()(
                                              &v120,
                                              "can not add repeat process func for cmd_id=%u",
                                              10204LL);
                                            common::milog::MiLogStream::~MiLogStream(&v120);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            v104.m128i_i64[0] = (__int64)MainHandler::onCheckGameCrcVersionReq;
                                            v104.m128i_i64[1] = 0LL;
                                            *(__m128i *)__f = _mm_load_si128(&v104);
                                            std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                              &v119,
                                              __f,
                                              (MainHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v65,
                                              v66);
                                            __x = 10204;
                                            v67 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                              v67,
                                              &v119);
                                            __x = 12099;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v116, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v120,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/main_handler.cpp",
                                                "addPacketFuncToMap",
                                                55);
                                              common::milog::MiLogStream::operator()(
                                                &v120,
                                                "can not add repeat process func for cmd_id=%u",
                                                12099LL);
                                              common::milog::MiLogStream::~MiLogStream(&v120);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              v105.m128i_i64[0] = (__int64)MainHandler::onHomeOnlineStatusNotify;
                                              v105.m128i_i64[1] = 0LL;
                                              *(__m128i *)__f = _mm_load_si128(&v105);
                                              std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                &v119,
                                                __f,
                                                (MainHandler **)&__y,
                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                v68,
                                                v69);
                                              __x = 12099;
                                              v70 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                v70,
                                                &v119);
                                              __x = 12047;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v116, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v120,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/main_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  56);
                                                common::milog::MiLogStream::operator()(
                                                  &v120,
                                                  "can not add repeat process func for cmd_id=%u",
                                                  12047LL);
                                                common::milog::MiLogStream::~MiLogStream(&v120);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                v106.m128i_i64[0] = (__int64)MainHandler::onServerHomeGetOnlineStatusReq;
                                                v106.m128i_i64[1] = 0LL;
                                                *(__m128i *)__f = _mm_load_si128(&v106);
                                                std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                  &v119,
                                                  __f,
                                                  (MainHandler **)&__y,
                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                  v71,
                                                  v72);
                                                __x = 12047;
                                                v73 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                  v73,
                                                  &v119);
                                                __x = 10829;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v116, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v120,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/main_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    57);
                                                  common::milog::MiLogStream::operator()(
                                                    &v120,
                                                    "can not add repeat process func for cmd_id=%u",
                                                    10829LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v120);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  v107.m128i_i64[0] = (__int64)MainHandler::onServerFriendInfoChangeNotify;
                                                  v107.m128i_i64[1] = 0LL;
                                                  *(__m128i *)__f = _mm_load_si128(&v107);
                                                  std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                    &v119,
                                                    __f,
                                                    (MainHandler **)&__y,
                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                    v74,
                                                    v75);
                                                  __x = 10829;
                                                  v76 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                    v76,
                                                    &v119);
                                                  __x = 10226;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v116, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v120,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/main_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      58);
                                                    common::milog::MiLogStream::operator()(
                                                      &v120,
                                                      "can not add repeat process func for cmd_id=%u",
                                                      10226LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v120);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    v108.m128i_i64[0] = (__int64)MainHandler::onQueryConcertProductInfoReq;
                                                    v108.m128i_i64[1] = 0LL;
                                                    *(__m128i *)__f = _mm_load_si128(&v108);
                                                    std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                      &v119,
                                                      __f,
                                                      (MainHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v77,
                                                      v78);
                                                    __x = 10226;
                                                    v79 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                      v79,
                                                      &v119);
                                                    __x = 10294;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v116, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v120,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/main_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        59);
                                                      common::milog::MiLogStream::operator()(
                                                        &v120,
                                                        "can not add repeat process func for cmd_id=%u",
                                                        10294LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v120);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      v109.m128i_i64[0] = (__int64)MainHandler::onSendConcertProductReq;
                                                      v109.m128i_i64[1] = 0LL;
                                                      *(__m128i *)__f = _mm_load_si128(&v109);
                                                      std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                        &v119,
                                                        __f,
                                                        (MainHandler **)&__y,
                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                        v80,
                                                        v81);
                                                      __x = 10294;
                                                      v82 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                        v82,
                                                        &v119);
                                                      __x = 12456;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v116._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v116, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v120,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/main_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          60);
                                                        common::milog::MiLogStream::operator()(
                                                          &v120,
                                                          "can not add repeat process func for cmd_id=%u",
                                                          12456LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v120);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        v110.m128i_i64[0] = (__int64)MainHandler::onServerGCGSyncReq;
                                                        v110.m128i_i64[1] = 0LL;
                                                        *(__m128i *)__f = _mm_load_si128(&v110);
                                                        std::bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>),MainHandler*,std::_Placeholder<1> const&>(
                                                          &v119,
                                                          __f,
                                                          (MainHandler **)&__y,
                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                          v83,
                                                          v84);
                                                        __x = 12456;
                                                        v85 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MainHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MainHandler*,std::_Placeholder<1>)>>(
                                                          v85,
                                                          &v119);
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
};

// Line 68: range 0000000003848A1E-00000000038490A9
int32_t __cdecl MainHandler::onPlayerOnlineStatusNotify(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rax
  char *v7; // rsi
  int v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  google::protobuf::uint32 v12; // r14d
  unsigned __int64 v13; // rax
  char v14; // dl
  uint32_t v15; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  google::protobuf::uint32 v18; // r14d
  __int64 v19; // rax
  char v20; // dl
  bool is_sub_account; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  const std::string *v23; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  PlayerMgr *v25; // r14
  PlayerMgr *p_player_mgr; // r14
  uint32_t v27; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  unsigned int v30; // [rsp+20h] [rbp-F0h] BYREF
  uint32_t gameserver_id; // [rsp+24h] [rbp-ECh]
  google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const proto::PlayerOnlineStatusNotify *notify; // [rsp+38h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo> *__for_range; // [rsp+40h] [rbp-D0h]
  const proto::PlayerOnlineStatusInfo *player_online_info; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Player> p_player_ptr; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 notify_ptr:69 64 16 13 player_ptr:80";
  *(_QWORD *)(v2 + 16) = MainHandler::onPlayerOnlineStatusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerOnlineStatusNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerOnlineStatusNotify const>(
         (const std::shared_ptr<const proto::PlayerOnlineStatusNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onPlayerOnlineStatusNotify",
      69);
    common::milog::MiLogStream::operator()(&v38, "get PlayerOnlineStatusNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v38);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PlayerOnlineStatusNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerOnlineStatusNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    gameserver_id = common::minet::Packet::getServiceAppId(v6, 3u);
    if ( !gameserver_id )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onPlayerOnlineStatusNotify",
        74);
      common::milog::MiLogStream::operator()(&v38, "gameserver_id is 0");
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    __for_range = proto::PlayerOnlineStatusNotify::player_info_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOnlineStatusInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      player_online_info = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOnlineStatusInfo const>::operator*(&__for_begin);
      if ( proto::PlayerOnlineStatusInfo::online_status(player_online_info) )
      {
        if ( proto::PlayerOnlineStatusInfo::online_status(player_online_info) == PlayerOnlineStatusInfo_StatusType_OFFLINE )
        {
          p_player_mgr = &ServiceBox::findService<NodeserverService>()->player_mgr;
          v27 = proto::PlayerOnlineStatusInfo::uid(player_online_info);
          PlayerMgr::delPlayer(p_player_mgr, v27);
        }
      }
      else
      {
        common::tools::perf::make_shared<Player>();
        v7 = (char *)(v2 + 64);
        if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
        {
          v8 = proto::PlayerOnlineStatusInfo::platform_type(player_online_info);
          if ( !proto::PlatformType_IsValid(v8) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/main_handler.cpp",
              "onPlayerOnlineStatusNotify",
              87);
            v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                   &v38,
                   (const char (*)[23])"invalid platform_type:");
            val = proto::PlayerOnlineStatusInfo::platform_type(player_online_info);
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
            v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
            v30 = proto::PlayerOnlineStatusInfo::uid(player_online_info);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v30);
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          else
          {
            v12 = proto::PlayerOnlineStatusInfo::uid(player_online_info);
            v13 = (unsigned __int64)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
            if ( v14 != 0 && v14 <= 3 )
            {
              LOBYTE(v7) = v14 != 0;
              v13 = __asan_report_store4(v13, v7);
            }
            *(_DWORD *)v13 = v12;
            v15 = gameserver_id;
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v17 = *(_BYTE *)(((unsigned __int64)&v16->gameserver_id >> 3) + 0x7FFF8000);
            if ( v17 != 0 && (char)((((_BYTE)v16 + 4) & 7) + 3) >= v17 )
            {
              LOBYTE(v7) = v17 != 0;
              __asan_report_store4(&v16->gameserver_id, v7);
            }
            v16->gameserver_id = v15;
            v18 = proto::PlayerOnlineStatusInfo::platform_type(player_online_info);
            v19 = (__int64)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v20 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
            if ( v20 != 0 && v20 <= 3 )
            {
              LOBYTE(v7) = v20 != 0;
              v19 = __asan_report_store4(v19 + 8, v7);
            }
            *(_DWORD *)(v19 + 8) = v18;
            is_sub_account = proto::PlayerOnlineStatusInfo::is_sub_account(player_online_info);
            v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v22->is_sub_account >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v22 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v22->is_sub_account >> 3)
                                                               + 0x7FFF8000) )
            {
              __asan_report_store1(&v22->is_sub_account);
            }
            v22->is_sub_account = is_sub_account;
            v23 = proto::PlayerOnlineStatusInfo::country_code[abi:cxx11](player_online_info);
            v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            std::string::operator=(&v24->country_code, v23);
            v25 = &ServiceBox::findService<NodeserverService>()->player_mgr;
            std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v2 + 64));
            PlayerMgr::addPlayer(v25, &p_player_ptr);
            std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::PlayerOnlineStatusInfo const>::operator++(&__for_begin);
    }
    v5 = 0;
  }
  std::shared_ptr<proto::PlayerOnlineStatusNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerOnlineStatusNotify> *const)(v2 + 32));
  result = v5;
  if ( v39 == (char *)v2 )
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

// Line 107: range 00000000038490AA-0000000003849420
int32_t __cdecl MainHandler::onOnlinePlayerNumReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  NodeserverService *v6; // rax
  NodeserverService *v7; // rax
  PlayerMgr *p_player_mgr; // rdx
  NodeserverService *v9; // r14
  int32_t result; // eax
  google::protobuf::uint32 player_num; // [rsp+10h] [rbp-F0h]
  int32_t sub_account_player_num; // [rsp+14h] [rbp-ECh]
  std::__shared_ptr_access<proto::OnlinePlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-E0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_player_num_map; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::OnlinePlayerNumRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:108 64 16 11 rsp_ptr:108";
  *(_QWORD *)(v2 + 16) = MainHandler::onOnlinePlayerNumReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::OnlinePlayerNumReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::OnlinePlayerNumReq const>(
         (const std::shared_ptr<const proto::OnlinePlayerNumReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onOnlinePlayerNumReq",
      108);
    common::milog::MiLogStream::operator()(&v17, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::OnlinePlayerNumReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::OnlinePlayerNumReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::OnlinePlayerNumRsp>();
    rsp_0 = std::__shared_ptr_access<proto::OnlinePlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::OnlinePlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::OnlinePlayerNumRsp::set_retcode(rsp_0, -1);
    v6 = ServiceBox::findService<NodeserverService>();
    player_num = PlayerMgr::getPlayerNum(&v6->player_mgr);
    v7 = ServiceBox::findService<NodeserverService>();
    sub_account_player_num = PlayerMgr::getSubAccountPlayerNum(&v7->player_mgr);
    proto::OnlinePlayerNumRsp::set_retcode(rsp_0, 0);
    proto::OnlinePlayerNumRsp::set_online_player_num(rsp_0, player_num);
    proto::OnlinePlayerNumRsp::set_online_player_num_except_sub_account(rsp_0, player_num - sub_account_player_num);
    proto_player_num_map = proto::OnlinePlayerNumRsp::mutable_gameserver_player_num_map(rsp_0);
    p_player_mgr = &ServiceBox::findService<NodeserverService>()->player_mgr;
    PlayerMgr::getGameserverPlayerNum(p_player_mgr, proto_player_num_map);
    v9 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::OnlinePlayerNumRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::OnlinePlayerNumRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::OnlinePlayerNumRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::OnlinePlayerNumRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::OnlinePlayerNumRsp>::~shared_ptr((std::shared_ptr<proto::OnlinePlayerNumRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::OnlinePlayerNumReq const>::~shared_ptr((std::shared_ptr<const proto::OnlinePlayerNumReq> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 124: range 0000000003849422-000000000384972C
int32_t __cdecl MainHandler::onPlayerLoginPerSecondReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  NodeserverService *v6; // rax
  NodeserverService *v7; // r14
  int32_t result; // eax
  google::protobuf::uint32 login_per_second; // [rsp+1Ch] [rbp-E4h]
  std::__shared_ptr_access<proto::PlayerLoginPerSecondRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::PlayerLoginPerSecondRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:125 64 16 11 rsp_ptr:125";
  *(_QWORD *)(v2 + 16) = MainHandler::onPlayerLoginPerSecondReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerLoginPerSecondReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerLoginPerSecondReq const>(
         (const std::shared_ptr<const proto::PlayerLoginPerSecondReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onPlayerLoginPerSecondReq",
      125);
    common::milog::MiLogStream::operator()(&v13, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerLoginPerSecondReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginPerSecondReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerLoginPerSecondRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerLoginPerSecondRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginPerSecondRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerLoginPerSecondRsp::set_retcode(rsp_0, -1);
    v6 = ServiceBox::findService<NodeserverService>();
    login_per_second = PlayerMgr::getPlayerLoginPerSecond(&v6->player_mgr);
    proto::PlayerLoginPerSecondRsp::set_retcode(rsp_0, 0);
    proto::PlayerLoginPerSecondRsp::set_player_login_per_second(rsp_0, login_per_second);
    v7 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::PlayerLoginPerSecondRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::PlayerLoginPerSecondRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::PlayerLoginPerSecondRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::PlayerLoginPerSecondRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::PlayerLoginPerSecondRsp>::~shared_ptr((std::shared_ptr<proto::PlayerLoginPerSecondRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerLoginPerSecondReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginPerSecondReq> *const)(v2 + 32));
  result = v5;
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

// Line 136: range 000000000384972E-0000000003849E95
int32_t __cdecl MainHandler::onCheckOnlinePlayerReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  NodeserverService *v8; // rax
  google::protobuf::uint32 v9; // eax
  common::minet::Packet *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::minet::Packet *v12; // r14
  common::minet::Packet *v13; // rax
  uint32_t SourceAppId; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t SourceService; // eax
  common::minet::Packet *v17; // r14
  uint32_t v18; // eax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  __int64 (__fastcall *v22)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  NodeserverApp *v23; // rax
  uint32_t AppId; // edx
  NodeserverService *v25; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+2Ch] [rbp-154h]
  google::protobuf::uint32 ns_gameserver_id; // [rsp+30h] [rbp-150h]
  int32_t ret; // [rsp+34h] [rbp-14Ch]
  proto::CheckOnlinePlayerRsp_NodeStatus *node_status; // [rsp+38h] [rbp-148h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-130h] BYREF
  char v33[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 17 gs_packet_ptr:152 80 32 7 req:137 144 40 7 rsp:173";
  *(_QWORD *)(v2 + 16) = MainHandler::onCheckOnlinePlayerReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::CheckOnlinePlayerReq::CheckOnlinePlayerReq((proto::CheckOnlinePlayerReq *const)(v2 + 80));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::CheckOnlinePlayerReq>(v5, (proto::CheckOnlinePlayerReq *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onCheckOnlinePlayerReq",
      140);
    common::milog::MiLogStream::operator()(&v32, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v7);
    v8 = ServiceBox::findService<NodeserverService>();
    ns_gameserver_id = PlayerMgr::findPlayerGameserverId(&v8->player_mgr, uid);
    if ( ns_gameserver_id != proto::CheckOnlinePlayerReq::gameserver_id((const proto::CheckOnlinePlayerReq *const)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onCheckOnlinePlayerReq",
        147);
      v9 = proto::CheckOnlinePlayerReq::gameserver_id((const proto::CheckOnlinePlayerReq *const)(v2 + 80));
      common::milog::MiLogStream::operator()(
        &v32,
        "uid: %u gameserver_id: %u but req gameserver_id: %u",
        uid,
        ns_gameserver_id,
        v9);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    proto::CheckOnlinePlayerReq::set_ns_gameserver_id((proto::CheckOnlinePlayerReq *const)(v2 + 80), ns_gameserver_id);
    common::minet::PacketUtils::createPacket<proto::CheckOnlinePlayerReq>((const proto::CheckOnlinePlayerReq *)(v2 + 48));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onCheckOnlinePlayerReq",
        155);
      common::milog::MiLogStream::operator()(&v32, "PacketUtils::createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::copyHead(v10, v11) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onCheckOnlinePlayerReq",
          160);
        common::milog::MiLogStream::operator()(&v32, "copyHead failed");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v6 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        SourceAppId = common::minet::Packet::getSourceAppId(v13);
        v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        SourceService = common::minet::Packet::getSourceService(v15);
        common::minet::Packet::setSource(v12, SourceService, SourceAppId);
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v18 = proto::CheckOnlinePlayerReq::gameserver_id((const proto::CheckOnlinePlayerReq *const)(v2 + 80));
        common::minet::Packet::setTarget(v17, 3u, v18);
        v19 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19);
        v21 = (unsigned __int64)(v20->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v20->_vptr_NetworkMgrBase + 8);
        v22 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v21;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &p_req_packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 48));
        ret = v22(v20, &p_req_packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/main_handler.cpp",
            "onCheckOnlinePlayerReq",
            172);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v32,
            (const char (*)[56])"sendPacket to game failed, and response source service!");
          common::milog::MiLogStream::~MiLogStream(&v32);
          proto::CheckOnlinePlayerRsp::CheckOnlinePlayerRsp((proto::CheckOnlinePlayerRsp *const)(v2 + 144));
          proto::CheckOnlinePlayerRsp::set_retcode((proto::CheckOnlinePlayerRsp *const)(v2 + 144), 4);
          if ( ns_gameserver_id )
          {
            node_status = proto::CheckOnlinePlayerRsp::mutable_node_status((proto::CheckOnlinePlayerRsp *const)(v2 + 144));
            proto::CheckOnlinePlayerRsp_NodeStatus::set_gameserver_id(node_status, ns_gameserver_id);
            v23 = Singleton<NodeserverApp>::instance();
            AppId = AppBase::getAppId((AppBase *const)v23);
            proto::CheckOnlinePlayerRsp_NodeStatus::set_nodeserver_id(node_status, AppId);
          }
          v25 = ServiceBox::findService<NodeserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
          ServiceBase::sendRsp<proto::CheckOnlinePlayerRsp>(
            v25,
            (proto::CheckOnlinePlayerRsp *)(v2 + 144),
            &p_req_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
          proto::CheckOnlinePlayerRsp::~CheckOnlinePlayerRsp((proto::CheckOnlinePlayerRsp *const)(v2 + 144));
        }
        v6 = ret;
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 48));
  }
  proto::CheckOnlinePlayerReq::~CheckOnlinePlayerReq((proto::CheckOnlinePlayerReq *const)(v2 + 80));
  result = v6;
  if ( v33 == (char *)v2 )
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

// Line 189: range 0000000003849E96-000000000384A7AF
int32_t __cdecl MainHandler::onClientVersionSyncNotify(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::minet::Packet *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  NodeserverService *v11; // rax
  NodeserverService *v12; // rax
  char *v13; // rsi
  const proto::DataVersionConfig *v14; // rax
  uint32_t v15; // edx
  char v16; // al
  const proto::DataVersionConfig *v17; // rax
  uint32_t v18; // ecx
  char v19; // dl
  const proto::DataVersionConfig *v20; // rax
  uint32_t v21; // edx
  char v22; // al
  google::protobuf::uint32 v23; // r14d
  const unsigned int *v24; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v25; // rax
  google::protobuf::uint32 *v26; // rdx
  char v27; // cl
  google::protobuf::uint32 v28; // r14d
  const unsigned int *v29; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  google::protobuf::uint32 *v31; // rdx
  char v32; // cl
  NodeserverService *v33; // rax
  NodeserverService *v34; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin_0; // [rsp+18h] [rbp-1B8h] BYREF
  const proto::ClientVersionSyncNotify *notify; // [rsp+20h] [rbp-1B0h]
  GameVersionInfo *version_info; // [rsp+28h] [rbp-1A8h]
  const google::protobuf::Map<unsigned int,proto::ResVersionConfig> *__for_range; // [rsp+30h] [rbp-1A0h]
  const google::protobuf::Map<unsigned int,proto::ResVersionConfig> *__for_range_0; // [rsp+38h] [rbp-198h]
  GameCrcVersionInfo *game_crc_version_info; // [rsp+40h] [rbp-190h]
  const google::protobuf::Map<unsigned int,proto::CrcVersionConfig> *__for_range_1; // [rsp+48h] [rbp-188h]
  const unsigned int *p_platform_1; // [rsp+50h] [rbp-180h]
  std::unordered_set<std::string> *client_version_set; // [rsp+58h] [rbp-178h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range_2; // [rsp+60h] [rbp-170h]
  const std::string *client_version_str; // [rsp+68h] [rbp-168h]
  const unsigned int *p_platform_0; // [rsp+70h] [rbp-160h]
  const unsigned int *p_platform; // [rsp+78h] [rbp-158h]
  google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator __for_begin; // [rsp+80h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator __for_end; // [rsp+A0h] [rbp-130h] BYREF
  common::milog::MiLogStream v51; // [rsp+C0h] [rbp-110h] BYREF
  common::milog::MiLogStream v52; // [rsp+E0h] [rbp-F0h] BYREF
  char v53[208]; // [rsp+100h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 17 gameserver_id:192 64 8 8 lock:219 96 8 8 lock:202 128 16 14 notify_ptr:190";
  *(_QWORD *)(v2 + 16) = MainHandler::onClientVersionSyncNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientVersionSyncNotify>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::ClientVersionSyncNotify const>(
         (const std::shared_ptr<const proto::ClientVersionSyncNotify> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onClientVersionSyncNotify",
      190);
    common::milog::MiLogStream::operator()(&v52, "get ClientVersionSyncNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ClientVersionSyncNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientVersionSyncNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getServiceAppId(v6, 3u);
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/main_handler.cpp",
        "onClientVersionSyncNotify",
        199);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v51, (const char (*)[15])"gameserver_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v9,
              (const char (*)[26])" ClientVersionSyncNotify:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v52, &notify->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v52);
      std::string::~string(&v52);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v11 = ServiceBox::findService<NodeserverService>();
      std::lock_guard<std::mutex>::lock_guard(
        (std::lock_guard<std::mutex> *const)(v2 + 96),
        &v11->game_version_map_mutex);
      v12 = ServiceBox::findService<NodeserverService>();
      v13 = (char *)(v2 + 48);
      version_info = std::map<unsigned int,GameVersionInfo>::operator[](
                       &v12->game_version_map,
                       (const std::map<unsigned int,GameVersionInfo>::key_type *)(v2 + 48));
      v14 = proto::ClientVersionSyncNotify::data_version_config(notify);
      v15 = proto::DataVersionConfig::server(v14);
      v16 = *(_BYTE *)(((unsigned __int64)version_info >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(version_info, v13);
      }
      version_info->server_version = v15;
      v17 = proto::ClientVersionSyncNotify::data_version_config(notify);
      v18 = proto::DataVersionConfig::client(v17);
      v19 = *(_BYTE *)(((unsigned __int64)&version_info->client_version >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((((_BYTE)version_info + 4) & 7) + 3) >= v19 )
      {
        LOBYTE(v13) = v19 != 0;
        __asan_report_store4(&version_info->client_version, v13);
      }
      version_info->client_version = v18;
      v20 = proto::ClientVersionSyncNotify::data_version_config(notify);
      v21 = proto::DataVersionConfig::client_silence(v20);
      v22 = *(_BYTE *)(((unsigned __int64)&version_info->client_silence_version >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v13) = v22 != 0;
        __asan_report_store4(&version_info->client_silence_version, v13);
      }
      version_info->client_silence_version = v21;
      __for_range = proto::ClientVersionSyncNotify::res_version_config_map(notify);
      google::protobuf::Map<unsigned int,proto::ResVersionConfig>::begin(&__for_begin, __for_range);
      google::protobuf::Map<unsigned int,proto::ResVersionConfig>::end(&__for_end, __for_range);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_platform = (const unsigned int *)google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator::operator*(&__for_begin);
        v23 = proto::ResVersionConfig::version((const proto::ResVersionConfig *const)(p_platform + 2));
        v24 = p_platform;
        v25 = std::map<unsigned int,unsigned int>::operator[](&version_info->res_version_map, p_platform);
        v26 = v25;
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
        {
          LOBYTE(v24) = v27 != 0;
          __asan_report_store4(v25, v24);
        }
        *v26 = v23;
        google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator::operator++(&__for_begin);
      }
      __for_range_0 = proto::ClientVersionSyncNotify::next_res_version_config_map(notify);
      google::protobuf::Map<unsigned int,proto::ResVersionConfig>::begin(&__for_begin, __for_range_0);
      google::protobuf::Map<unsigned int,proto::ResVersionConfig>::end(&__for_end, __for_range_0);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_platform_0 = (const unsigned int *)google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator::operator*(&__for_begin);
        v28 = proto::ResVersionConfig::version((const proto::ResVersionConfig *const)(p_platform_0 + 2));
        v29 = p_platform_0;
        v30 = std::map<unsigned int,unsigned int>::operator[](&version_info->next_res_version_map, p_platform_0);
        v31 = v30;
        v32 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
        if ( v32 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= v32 )
        {
          LOBYTE(v29) = v32 != 0;
          __asan_report_store4(v30, v29);
        }
        *v31 = v28;
        google::protobuf::Map<unsigned int,proto::ResVersionConfig>::const_iterator::operator++(&__for_begin);
      }
      std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 96));
      v33 = ServiceBox::findService<NodeserverService>();
      std::lock_guard<std::mutex>::lock_guard(
        (std::lock_guard<std::mutex> *const)(v2 + 64),
        &v33->game_crc_version_map_mutex);
      v34 = ServiceBox::findService<NodeserverService>();
      game_crc_version_info = std::map<unsigned int,GameCrcVersionInfo>::operator[](
                                &v34->game_crc_version_map,
                                (const std::map<unsigned int,GameCrcVersionInfo>::key_type *)(v2 + 48));
      std::map<unsigned int,std::unordered_set<std::string>>::clear(&game_crc_version_info->platform_client_version_map);
      __for_range_1 = proto::ClientVersionSyncNotify::crc_version_config_map(notify);
      google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::begin(
        (google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *)&__for_begin,
        __for_range_1);
      google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::end(
        (google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *)&__for_end,
        __for_range_1);
      while ( google::protobuf::operator!=(
                (const google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *)&__for_begin,
                (const google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *)&__for_end) )
      {
        p_platform_1 = (const unsigned int *)google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *const)&__for_begin);
        client_version_set = std::map<unsigned int,std::unordered_set<std::string>>::operator[](
                               &game_crc_version_info->platform_client_version_map,
                               p_platform_1);
        __for_range_2 = proto::CrcVersionConfig::client_version_list[abi:cxx11]((const proto::CrcVersionConfig *const)(p_platform_1 + 2));
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range_2).it_;
        *(google::protobuf::RepeatedPtrField<std::string >::const_iterator *)(v2 + 96) = google::protobuf::RepeatedPtrField<std::string>::end(__for_range_2);
        while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(
                  &__for_begin_0,
                  (const google::protobuf::internal::RepeatedPtrIterator<const std::string >::iterator *)(v2 + 96)) )
        {
          client_version_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin_0);
          std::unordered_set<std::string>::insert(client_version_set, client_version_str);
          google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin_0);
        }
        google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::const_iterator *const)&__for_begin);
      }
      std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64));
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onClientVersionSyncNotify",
        195);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v51,
             (const char (*)[28])"gameserver_id is 0, notify:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v52, &notify->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v52);
      std::string::~string(&v52);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v5 = -1;
    }
  }
  std::shared_ptr<proto::ClientVersionSyncNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientVersionSyncNotify> *const)(v2 + 128));
  result = v5;
  if ( v53 == (char *)v2 )
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

// Line 236: range 000000000384A7B0-000000000384B83D
int32_t __cdecl MainHandler::onCheckGameVersionReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  NodeserverService *v6; // rax
  NodeserverService *v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  uint32_t server_version; // r14d
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
  uint32_t client_version; // r14d
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  uint32_t client_silence_version; // r14d
  google::protobuf::uint32 v17; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v18; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v21; // al
  google::protobuf::uint32 v22; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v23; // rdx
  unsigned int *v24; // rax
  unsigned int v25; // ecx
  char v26; // al
  google::protobuf::uint32 v27; // eax
  NodeserverService *v28; // r14
  int32_t v29; // eax
  std::map<unsigned int,GameVersionInfo>::iterator __for_begin_0; // [rsp+18h] [rbp-2B8h] BYREF
  std::map<unsigned int,GameVersionInfo>::iterator __for_end_0; // [rsp+20h] [rbp-2B0h] BYREF
  const proto::CheckGameVersionReq *req; // [rsp+28h] [rbp-2A8h]
  proto::CheckGameVersionRsp *rsp_0; // [rsp+30h] [rbp-2A0h]
  proto::GameVersionResult *result; // [rsp+38h] [rbp-298h]
  std::map<unsigned int,GameVersionInfo> *__for_range; // [rsp+40h] [rbp-290h]
  const std::pair<unsigned int const,GameVersionInfo> *v36; // [rsp+48h] [rbp-288h]
  std::tuple_element<0,const std::pair<unsigned int const,GameVersionInfo> >::type *app_id; // [rsp+50h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *version_info; // [rsp+58h] [rbp-278h]
  proto::GameVersionResult *result_0; // [rsp+60h] [rbp-270h]
  std::map<unsigned int,GameVersionInfo> *__for_range_0; // [rsp+68h] [rbp-268h]
  const std::pair<unsigned int const,GameVersionInfo> *v41; // [rsp+70h] [rbp-260h]
  std::tuple_element<0,const std::pair<unsigned int const,GameVersionInfo> >::type *app_id_0; // [rsp+78h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *version_info_0; // [rsp+80h] [rbp-250h]
  proto::GameVersionResult *result_1; // [rsp+88h] [rbp-248h]
  std::map<unsigned int,GameVersionInfo> *__for_range_1; // [rsp+90h] [rbp-240h]
  const std::pair<unsigned int const,GameVersionInfo> *v46; // [rsp+98h] [rbp-238h]
  std::tuple_element<0,const std::pair<unsigned int const,GameVersionInfo> >::type *app_id_1; // [rsp+A0h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *version_info_1; // [rsp+A8h] [rbp-228h]
  google::protobuf::Map<unsigned int,proto::GameVersionResult> *res_version_result_map; // [rsp+B0h] [rbp-220h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_2; // [rsp+B8h] [rbp-218h]
  google::protobuf::Map<unsigned int,proto::GameVersionResult> *next_res_version_result_map; // [rsp+C0h] [rbp-210h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_4; // [rsp+C8h] [rbp-208h]
  const unsigned int *p_platform_0; // [rsp+D0h] [rbp-200h]
  proto::GameVersionResult *result_3; // [rsp+D8h] [rbp-1F8h]
  std::map<unsigned int,GameVersionInfo> *__for_range_5; // [rsp+E0h] [rbp-1F0h]
  const std::pair<unsigned int const,GameVersionInfo> *v56; // [rsp+E8h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,GameVersionInfo> >::type *app_id_3; // [rsp+F0h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *version_info_3; // [rsp+F8h] [rbp-1D8h]
  const unsigned int *p_platform; // [rsp+100h] [rbp-1D0h]
  proto::GameVersionResult *result_2; // [rsp+108h] [rbp-1C8h]
  std::map<unsigned int,GameVersionInfo> *__for_range_3; // [rsp+110h] [rbp-1C0h]
  const std::pair<unsigned int const,GameVersionInfo> *v62; // [rsp+118h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,GameVersionInfo> >::type *app_id_2; // [rsp+120h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *version_info_2; // [rsp+128h] [rbp-1A8h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+130h] [rbp-1A0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+140h] [rbp-190h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+160h] [rbp-170h] BYREF
  common::milog::MiLogStream v68; // [rsp+180h] [rbp-150h] BYREF
  char v69[304]; // [rsp+1A0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 8 8 iter:308 80 8 8 lock:241 112 16 11 req_ptr:237 144 16 11 rsp_ptr:237 176 48 24 tmp_game"
                        "_version_map:239";
  *(_QWORD *)(v2 + 16) = MainHandler::onCheckGameVersionReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckGameVersionReq>((common::minet::Packet *const)(v2 + 112));
  if ( std::operator==<proto::CheckGameVersionReq const>(
         (const std::shared_ptr<const proto::CheckGameVersionReq> *)(v2 + 112),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onCheckGameVersionReq",
      237);
    common::milog::MiLogStream::operator()(&v68, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v68);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::CheckGameVersionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckGameVersionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    common::tools::perf::make_shared<proto::CheckGameVersionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckGameVersionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckGameVersionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    proto::CheckGameVersionRsp::set_retcode(rsp_0, -1);
    std::map<unsigned int,GameVersionInfo>::map((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
    v6 = ServiceBox::findService<NodeserverService>();
    std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 80), &v6->game_version_map_mutex);
    v7 = ServiceBox::findService<NodeserverService>();
    std::map<unsigned int,GameVersionInfo>::operator=(
      (std::map<unsigned int,GameVersionInfo> *const)(v2 + 176),
      &v7->game_version_map);
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 80));
    proto::CheckGameVersionRsp::set_retcode(rsp_0, 0);
    v8 = std::map<unsigned int,GameVersionInfo>::size((const std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
    proto::CheckGameVersionRsp::set_total_game(rsp_0, v8);
    if ( proto::CheckGameVersionReq::server_version(req) )
    {
      result = proto::CheckGameVersionRsp::mutable_server_version_result(rsp_0);
      __for_range = (std::map<unsigned int,GameVersionInfo> *)(v2 + 176);
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 48) = std::map<unsigned int,GameVersionInfo>::begin((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 80) = std::map<unsigned int,GameVersionInfo>::end(__for_range);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 48),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 80)) )
      {
        v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
        app_id = std::get<0ul,unsigned int const,GameVersionInfo>(v36);
        version_info = (std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *)std::get<1ul,unsigned int const,GameVersionInfo>(v36);
        v9 = proto::CheckGameVersionReq::server_version(req);
        proto::GameVersionResult::set_version(result, v9);
        if ( *(_BYTE *)(((unsigned __int64)version_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)version_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(version_info);
        }
        server_version = version_info->server_version;
        if ( server_version != proto::CheckGameVersionReq::server_version(req) )
        {
          v11 = proto::GameVersionResult::wrong_num(result);
          proto::GameVersionResult::set_wrong_num(result, v11 + 1);
          if ( proto::GameVersionResult::wrong_name_list_size(result) <= 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(app_id);
            }
            proto::GameVersionResult::add_wrong_name_list(result, *app_id);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
      }
    }
    if ( proto::CheckGameVersionReq::client_version(req) )
    {
      result_0 = proto::CheckGameVersionRsp::mutable_client_version_result(rsp_0);
      __for_range_0 = (std::map<unsigned int,GameVersionInfo> *)(v2 + 176);
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 48) = std::map<unsigned int,GameVersionInfo>::begin((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 80) = std::map<unsigned int,GameVersionInfo>::end(__for_range_0);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 48),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 80)) )
      {
        v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
        app_id_0 = std::get<0ul,unsigned int const,GameVersionInfo>(v41);
        version_info_0 = (std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *)std::get<1ul,unsigned int const,GameVersionInfo>(v41);
        v12 = proto::CheckGameVersionReq::client_version(req);
        proto::GameVersionResult::set_version(result_0, v12);
        if ( *(_BYTE *)(((unsigned __int64)&version_info_0->client_version >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)version_info_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&version_info_0->client_version >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&version_info_0->client_version);
        }
        client_version = version_info_0->client_version;
        if ( client_version != proto::CheckGameVersionReq::client_version(req) )
        {
          v14 = proto::GameVersionResult::wrong_num(result_0);
          proto::GameVersionResult::set_wrong_num(result_0, v14 + 1);
          if ( proto::GameVersionResult::wrong_name_list_size(result_0) <= 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)app_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)app_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(app_id_0);
            }
            proto::GameVersionResult::add_wrong_name_list(result_0, *app_id_0);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
      }
    }
    if ( proto::CheckGameVersionReq::client_silence_version(req) )
    {
      result_1 = proto::CheckGameVersionRsp::mutable_client_silence_version_result(rsp_0);
      __for_range_1 = (std::map<unsigned int,GameVersionInfo> *)(v2 + 176);
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 48) = std::map<unsigned int,GameVersionInfo>::begin((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
      *(std::map<unsigned int,GameVersionInfo>::iterator *)(v2 + 80) = std::map<unsigned int,GameVersionInfo>::end(__for_range_1);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 48),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> >::_Self *)(v2 + 80)) )
      {
        v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
        app_id_1 = std::get<0ul,unsigned int const,GameVersionInfo>(v46);
        version_info_1 = (std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *)std::get<1ul,unsigned int const,GameVersionInfo>(v46);
        v15 = proto::CheckGameVersionReq::client_silence_version(req);
        proto::GameVersionResult::set_version(result_1, v15);
        if ( *(_BYTE *)(((unsigned __int64)&version_info_1->client_silence_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&version_info_1->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&version_info_1->client_silence_version);
        }
        client_silence_version = version_info_1->client_silence_version;
        if ( client_silence_version != proto::CheckGameVersionReq::client_silence_version(req) )
        {
          v17 = proto::GameVersionResult::wrong_num(result_1);
          proto::GameVersionResult::set_wrong_num(result_1, v17 + 1);
          if ( proto::GameVersionResult::wrong_name_list_size(result_1) <= 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)app_id_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)app_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id_1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(app_id_1);
            }
            proto::GameVersionResult::add_wrong_name_list(result_1, *app_id_1);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo> > *const)(v2 + 48));
      }
    }
    res_version_result_map = proto::CheckGameVersionRsp::mutable_res_version_result_map(rsp_0);
    __for_range_2 = proto::CheckGameVersionReq::res_version_map(req);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_2);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_2);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_platform = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      result_2 = google::protobuf::Map<unsigned int,proto::GameVersionResult>::operator[](
                   res_version_result_map,
                   p_platform);
      if ( *(_BYTE *)(((unsigned __int64)(p_platform + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_platform + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_platform + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_platform + 1);
      }
      proto::GameVersionResult::set_version(result_2, p_platform[1]);
      __for_range_3 = (std::map<unsigned int,GameVersionInfo> *)(v2 + 176);
      __for_begin_0._M_node = std::map<unsigned int,GameVersionInfo>::begin((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176))._M_node;
      __for_end_0._M_node = std::map<unsigned int,GameVersionInfo>::end(__for_range_3)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v62 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator*(&__for_begin_0);
        app_id_2 = std::get<0ul,unsigned int const,GameVersionInfo>(v62);
        version_info_2 = (std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *)std::get<1ul,unsigned int const,GameVersionInfo>(v62);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                              &version_info_2->res_version_map,
                                                                              p_platform);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 80) = std::map<unsigned int,unsigned int>::end(&version_info_2->res_version_map);
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 48),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 80)) )
        {
          goto LABEL_51;
        }
        v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 48));
        p_second = &v18->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v18->second;
        if ( *(_BYTE *)(((unsigned __int64)(p_platform + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_platform + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_platform + 1) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(p_platform + 1);
        }
        if ( second == p_platform[1] )
          v21 = 0;
        else
LABEL_51:
          v21 = 1;
        if ( v21 )
        {
          v22 = proto::GameVersionResult::wrong_num(result_2);
          proto::GameVersionResult::set_wrong_num(result_2, v22 + 1);
          if ( proto::GameVersionResult::wrong_name_list_size(result_2) <= 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)app_id_2 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)app_id_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id_2 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(app_id_2);
            }
            proto::GameVersionResult::add_wrong_name_list(result_2, *app_id_2);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator++(&__for_begin_0);
      }
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    next_res_version_result_map = proto::CheckGameVersionRsp::mutable_next_res_version_result_map(rsp_0);
    __for_range_4 = proto::CheckGameVersionReq::next_res_version_map(req);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_4);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_4);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_platform_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      result_3 = google::protobuf::Map<unsigned int,proto::GameVersionResult>::operator[](
                   next_res_version_result_map,
                   p_platform_0);
      if ( *(_BYTE *)(((unsigned __int64)(p_platform_0 + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_platform_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_platform_0 + 1) >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(p_platform_0 + 1);
      }
      proto::GameVersionResult::set_version(result_3, p_platform_0[1]);
      __for_range_5 = (std::map<unsigned int,GameVersionInfo> *)(v2 + 176);
      __for_begin_0._M_node = std::map<unsigned int,GameVersionInfo>::begin((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176))._M_node;
      __for_end_0._M_node = std::map<unsigned int,GameVersionInfo>::end(__for_range_5)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator*(&__for_begin_0);
        app_id_3 = std::get<0ul,unsigned int const,GameVersionInfo>(v56);
        version_info_3 = (std::tuple_element<1,const std::pair<unsigned int const,GameVersionInfo> >::type *)std::get<1ul,unsigned int const,GameVersionInfo>(v56);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 48) = std::map<unsigned int,unsigned int>::find(
                                                                              &version_info_3->next_res_version_map,
                                                                              p_platform_0);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 80) = std::map<unsigned int,unsigned int>::end(&version_info_3->next_res_version_map);
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 48),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 80)) )
        {
          goto LABEL_72;
        }
        v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 48));
        v24 = &v23->second;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v25 = v23->second;
        if ( *(_BYTE *)(((unsigned __int64)(p_platform_0 + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_platform_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_platform_0 + 1) >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(p_platform_0 + 1);
        }
        if ( v25 == p_platform_0[1] )
          v26 = 0;
        else
LABEL_72:
          v26 = 1;
        if ( v26 )
        {
          v27 = proto::GameVersionResult::wrong_num(result_3);
          proto::GameVersionResult::set_wrong_num(result_3, v27 + 1);
          if ( proto::GameVersionResult::wrong_name_list_size(result_3) <= 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)app_id_3 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)app_id_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id_3 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(app_id_3);
            }
            proto::GameVersionResult::add_wrong_name_list(result_3, *app_id_3);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GameVersionInfo>>::operator++(&__for_begin_0);
      }
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    v28 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::CheckGameVersionRsp>(v28, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::map<unsigned int,GameVersionInfo>::~map((std::map<unsigned int,GameVersionInfo> *const)(v2 + 176));
    std::shared_ptr<proto::CheckGameVersionRsp>::~shared_ptr((std::shared_ptr<proto::CheckGameVersionRsp> *const)(v2 + 144));
  }
  std::shared_ptr<proto::CheckGameVersionReq const>::~shared_ptr((std::shared_ptr<const proto::CheckGameVersionReq> *const)(v2 + 112));
  v29 = v5;
  if ( v69 == (char *)v2 )
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
  return v29;
};

// Line 326: range 000000000384B83E-000000000384BDB6
int32_t __cdecl MainHandler::onCheckGameCrcVersionReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const std::string *v7; // rax
  NodeserverService *v8; // rax
  NodeserverService *v9; // rax
  google::protobuf::uint32 v10; // eax
  std::tuple_element<1,const std::pair<unsigned int const,GameCrcVersionInfo> >::type *v11; // r14
  const std::string *v12; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<std::string> > >::pointer v13; // rax
  google::protobuf::uint32 v15; // eax
  NodeserverService *v16; // r14
  int32_t result; // eax
  std::map<unsigned int,std::unordered_set<std::string>>::key_type __x; // [rsp+14h] [rbp-14Ch] BYREF
  std::map<unsigned int,GameCrcVersionInfo>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,GameCrcVersionInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<std::string> > >::_Self __y; // [rsp+28h] [rbp-138h] BYREF
  const proto::CheckGameCrcVersionReq *req; // [rsp+30h] [rbp-130h]
  proto::CheckGameCrcVersionRsp *rsp_0; // [rsp+38h] [rbp-128h]
  std::map<unsigned int,GameCrcVersionInfo> *__for_range; // [rsp+40h] [rbp-120h]
  const std::pair<unsigned int const,GameCrcVersionInfo> *v25; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,GameCrcVersionInfo> >::type *app_id; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,GameCrcVersionInfo> >::type *crc_version_info; // [rsp+58h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 8 lock:333 64 8 8 iter:337 96 16 11 req_ptr:327 128 16 11 rsp_ptr:327";
  *(_QWORD *)(v2 + 16) = MainHandler::onCheckGameCrcVersionReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckGameCrcVersionReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::CheckGameCrcVersionReq const>(
         (const std::shared_ptr<const proto::CheckGameCrcVersionReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onCheckGameCrcVersionReq",
      327);
    common::milog::MiLogStream::operator()(&v29, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::CheckGameCrcVersionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckGameCrcVersionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::CheckGameCrcVersionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckGameCrcVersionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckGameCrcVersionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::CheckGameCrcVersionRsp::set_retcode(rsp_0, -1);
    proto::CheckGameCrcVersionRsp::set_retcode(rsp_0, 0);
    v6 = proto::CheckGameCrcVersionReq::platform(req);
    proto::CheckGameCrcVersionRsp::set_platform(rsp_0, v6);
    v7 = proto::CheckGameCrcVersionReq::client_version_str[abi:cxx11](req);
    proto::CheckGameCrcVersionRsp::set_client_version_str(rsp_0, v7);
    v8 = ServiceBox::findService<NodeserverService>();
    std::lock_guard<std::mutex>::lock_guard(
      (std::lock_guard<std::mutex> *const)(v2 + 32),
      &v8->game_crc_version_map_mutex);
    v9 = ServiceBox::findService<NodeserverService>();
    v10 = std::map<unsigned int,GameCrcVersionInfo>::size(&v9->game_crc_version_map);
    proto::CheckGameCrcVersionRsp::set_total_game(rsp_0, v10);
    __for_range = &ServiceBox::findService<NodeserverService>()->game_crc_version_map;
    __for_begin._M_node = std::map<unsigned int,GameCrcVersionInfo>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,GameCrcVersionInfo>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,GameCrcVersionInfo>>::operator*(&__for_begin);
      app_id = std::get<0ul,unsigned int const,GameCrcVersionInfo>(v25);
      crc_version_info = (std::tuple_element<1,const std::pair<unsigned int const,GameCrcVersionInfo> >::type *)std::get<1ul,unsigned int const,GameCrcVersionInfo>(v25);
      v11 = crc_version_info;
      __x = proto::CheckGameCrcVersionReq::platform(req);
      *(std::map<unsigned int,std::unordered_set<std::string>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_set<std::string>>::find(
                                                                                               &v11->platform_client_version_map,
                                                                                               &__x);
      __y._M_node = std::map<unsigned int,std::unordered_set<std::string>>::end(&crc_version_info->platform_client_version_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<std::string> > >::_Self *)(v2 + 64),
             &__y)
        || (v12 = proto::CheckGameCrcVersionReq::client_version_str[abi:cxx11](req),
            v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<std::string> > > *const)(v2 + 64)),
            !common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(&v13->second, v12)) )
      {
        v15 = proto::CheckGameCrcVersionRsp::wrong_num(rsp_0);
        proto::CheckGameCrcVersionRsp::set_wrong_num(rsp_0, v15 + 1);
        if ( proto::CheckGameCrcVersionRsp::wrong_name_list_size(rsp_0) <= 9 )
        {
          if ( *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(app_id);
          }
          proto::CheckGameCrcVersionRsp::add_wrong_name_list(rsp_0, *app_id);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,GameCrcVersionInfo>>::operator++(&__for_begin);
    }
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
    v16 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::CheckGameCrcVersionRsp>(v16, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::CheckGameCrcVersionRsp>::~shared_ptr((std::shared_ptr<proto::CheckGameCrcVersionRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::CheckGameCrcVersionReq const>::~shared_ptr((std::shared_ptr<const proto::CheckGameCrcVersionReq> *const)(v2 + 96));
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 356: range 000000000384BDB8-000000000384C13A
int32_t __cdecl MainHandler::onPlatformPlayerNumReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  NodeserverService *v6; // rax
  uint32_t PlayerNum; // edx
  NodeserverService *v8; // rax
  uint32_t PlatformPlayerNum; // r14d
  char *v10; // rsi
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  NodeserverService *v14; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::PlatformPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-F0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_platform_player_num_map; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 platform_type:362 64 16 11 req_ptr:357 96 16 11 rsp_ptr:357";
  *(_QWORD *)(v2 + 16) = MainHandler::onPlatformPlayerNumReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlatformPlayerNumReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlatformPlayerNumReq const>(
         (const std::shared_ptr<const proto::PlatformPlayerNumReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onPlatformPlayerNumReq",
      357);
    common::milog::MiLogStream::operator()(&v20, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlatformPlayerNumReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlatformPlayerNumReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::PlatformPlayerNumRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlatformPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlatformPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::PlatformPlayerNumRsp::set_retcode(rsp_0, -1);
    proto::PlatformPlayerNumRsp::set_retcode(rsp_0, 0);
    v6 = ServiceBox::findService<NodeserverService>();
    PlayerNum = PlayerMgr::getPlayerNum(&v6->player_mgr);
    proto::PlatformPlayerNumRsp::set_online_player_num(rsp_0, PlayerNum);
    proto_platform_player_num_map = proto::PlatformPlayerNumRsp::mutable_platform_player_num_map(rsp_0);
    for ( *(_DWORD *)(v2 + 48) = 0; *(_DWORD *)(v2 + 48) <= 0xEu; ++*(_DWORD *)(v2 + 48) )
    {
      v8 = ServiceBox::findService<NodeserverService>();
      PlatformPlayerNum = PlayerMgr::getPlatformPlayerNum(&v8->player_mgr, *(_DWORD *)(v2 + 48));
      v10 = (char *)(v2 + 48);
      v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
              proto_platform_player_num_map,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10);
      }
      *v12 = PlatformPlayerNum;
    }
    v14 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    v5 = ServiceBase::sendRsp<proto::PlatformPlayerNumRsp>(v14, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::PlatformPlayerNumRsp>::~shared_ptr((std::shared_ptr<proto::PlatformPlayerNumRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::PlatformPlayerNumReq const>::~shared_ptr((std::shared_ptr<const proto::PlatformPlayerNumReq> *const)(v2 + 64));
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 372: range 000000000384C13C-000000000384C638
int32_t __cdecl MainHandler::onFineGrainedPlayerNumReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  NodeserverService *v6; // rax
  uint32_t PlayerNum; // edx
  NodeserverService *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  const char *v13; // r14
  unsigned int v14; // eax
  NodeserverService *v15; // r14
  int32_t result; // eax
  uint32_t index; // [rsp+10h] [rbp-140h]
  uint32_t num; // [rsp+14h] [rbp-13Ch]
  std::__shared_ptr_access<proto::FineGrainedPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-130h]
  google::protobuf::Map<std::string,unsigned int> *proto_player_num_map; // [rsp+28h] [rbp-128h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-110h] BYREF
  char v24[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 11 req_ptr:373 64 16 11 rsp_ptr:373 96 16 9 timer:380 128 32 16 category_str:388";
  *(_QWORD *)(v2 + 16) = MainHandler::onFineGrainedPlayerNumReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FineGrainedPlayerNumReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FineGrainedPlayerNumReq const>(
         (const std::shared_ptr<const proto::FineGrainedPlayerNumReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onFineGrainedPlayerNumReq",
      373);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), "get proto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FineGrainedPlayerNumReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FineGrainedPlayerNumReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FineGrainedPlayerNumRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FineGrainedPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FineGrainedPlayerNumRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FineGrainedPlayerNumRsp::set_retcode(rsp_0, -1);
    proto::FineGrainedPlayerNumRsp::set_retcode(rsp_0, 0);
    v6 = ServiceBox::findService<NodeserverService>();
    PlayerNum = PlayerMgr::getPlayerNum(&v6->player_mgr);
    proto::FineGrainedPlayerNumRsp::set_online_player_num(rsp_0, PlayerNum);
    proto_player_num_map = proto::FineGrainedPlayerNumRsp::mutable_fine_grained_player_num_map[abi:cxx11](rsp_0);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 96));
    for ( index = 0; index <= 0x10000; ++index )
    {
      v8 = ServiceBox::findService<NodeserverService>();
      num = PlayerMgr::getFineGrainedPlayerNum(&v8->player_mgr, index);
      if ( num )
      {
        FineGrainedCategory::toString[abi:cxx11]((std::string *)(v2 + 128), index);
        v9 = (char *)(v2 + 128);
        v10 = google::protobuf::Map<std::string,unsigned int>::operator[](
                proto_player_num_map,
                (const google::protobuf::Map<std::string,unsigned int>::key_type *)(v2 + 128));
        v11 = v10;
        v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
        {
          LOBYTE(v9) = v12 != 0;
          __asan_report_store4(v10, v9);
        }
        *v11 = num;
        std::string::~string((void *)(v2 + 128));
      }
    }
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/main_handler.cpp",
      "onFineGrainedPlayerNumReq",
      393);
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 128), rsp_0);
    v13 = (const char *)std::string::c_str(v2 + 128);
    v14 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
    common::milog::MiLogStream::operator()(&v23, "[PERF] cost time[%d]. msg:\n  %s.", v14, v13);
    std::string::~string((void *)(v2 + 128));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v15 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    v5 = ServiceBase::sendRsp<proto::FineGrainedPlayerNumRsp>(v15, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::shared_ptr<proto::FineGrainedPlayerNumRsp>::~shared_ptr((std::shared_ptr<proto::FineGrainedPlayerNumRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FineGrainedPlayerNumReq const>::~shared_ptr((std::shared_ptr<const proto::FineGrainedPlayerNumReq> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 400: range 000000000384C63A-000000000384C934
int32_t __cdecl MainHandler::onQueryPlayerMemDataByMuipReq(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NodeserverService *v6; // rax
  common::minet::Packet *v7; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NodeserverService *v13; // r14
  int32_t v14; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-9Ch]
  uint32_t uid; // [rsp+28h] [rbp-98h]
  uint32_t gameserver_app_id; // [rsp+2Ch] [rbp-94h]
  std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> p_rsp_ptr; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:419";
  *(_QWORD *)(v2 + 16) = MainHandler::onQueryPlayerMemDataByMuipReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v5);
  v6 = ServiceBox::findService<NodeserverService>();
  gameserver_app_id = PlayerMgr::findPlayerGameserverId(&v6->player_mgr, uid);
  if ( gameserver_app_id )
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setTarget(v7, 3u, gameserver_app_id);
    v8 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_NetworkMgrBase + 8);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ret = v11(v9, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  }
  else
  {
    ret = 140;
  }
  if ( ret )
  {
    common::tools::perf::make_shared<proto::QueryPlayerMemDataByMuipRsp>();
    v12 = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::QueryPlayerMemDataByMuipRsp::set_retcode(v12, ret);
    v13 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *)(v2 + 32));
    v14 = ServiceBase::sendRsp<proto::QueryPlayerMemDataByMuipRsp>(v13, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr((std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v2 + 32));
  }
  else
  {
    v14 = 0;
  }
  result = v14;
  if ( v21 == (char *)v2 )
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

// Line 428: range 000000000384C936-000000000384D261
int32_t __cdecl MainHandler::onGetPlayerTokenRsp(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r14
  int32_t v5; // r13d
  NodeserverService *v6; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::minet::Packet *v8; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  NodeserverService *v10; // rax
  NodeserverService *v11; // r13
  unsigned __int64 v12; // rax
  __int64 (__fastcall *v13)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *); // r15
  NodeserverService *v14; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::minet::Packet *v17; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  NodeserverService *v19; // rax
  NodeserverService *v20; // r13
  unsigned __int64 v21; // rax
  __int64 (__fastcall *v22)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *); // r15
  NodeserverService *v23; // rax
  NodeserverService *v24; // r13
  unsigned __int64 v25; // rax
  __int64 (__fastcall *v26)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *); // r15
  int32_t result; // eax
  google::protobuf::uint32 uid; // [rsp+20h] [rbp-F0h]
  uint32_t player_uid; // [rsp+24h] [rbp-ECh]
  std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<proto::GetPlayerTokenRsp> __r; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 rsp_ptr:429 64 16 11 rsp_ptr:437 96 16 18 rsp_packet_ptr:463";
  *(_QWORD *)(v2 + 16) = MainHandler::onGetPlayerTokenRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::GetPlayerTokenRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerTokenRsp>((const std::shared_ptr<proto::GetPlayerTokenRsp> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onGetPlayerTokenRsp",
      429);
    common::milog::MiLogStream::operator()(&v32, "get GetPlayerTokenRsp failed");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
    goto LABEL_34;
  }
  rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  uid = proto::GetPlayerTokenRsp::uid(rsp_0);
  if ( proto::GetPlayerTokenRsp::retcode(rsp_0) )
    goto LABEL_29;
  v6 = ServiceBox::findService<NodeserverService>();
  if ( NodeserverService::isBindByGmUid(v6, uid) )
  {
    common::tools::perf::make_shared<proto::GetPlayerTokenRsp>();
    v7 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetPlayerTokenRsp::set_retcode(v7, 7);
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/main_handler.cpp",
      "onGetPlayerTokenRsp",
      439);
    common::milog::MiLogStream::operator()(&v32, "uid: %u is isUidBindedByGM, cannot login", uid);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetPlayerTokenRsp>(&__r);
    common::minet::PacketUtils::createPacket(v2 + 96, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 198LL));
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onGetPlayerTokenRsp",
        444);
      common::milog::MiLogStream::operator()(&v32, "PacketUtils::createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v5 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::copyHead(v8, v9) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onGetPlayerTokenRsp",
          449);
        common::milog::MiLogStream::operator()(&v32, "copyHead failed");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v5 = -1;
      }
      else
      {
        v10 = ServiceBox::findService<NodeserverService>();
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10);
        v12 = (unsigned __int64)(v11->_vptr_ServiceBase + 18);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v11->_vptr_ServiceBase + 18);
        v13 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *))v12;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&__r,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        v5 = v13(v11, &__r);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
    std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v2 + 64));
    goto LABEL_34;
  }
  v14 = ServiceBox::findService<NodeserverService>();
  player_uid = NodeserverService::findBindPlayerUid(v14, uid);
  if ( !player_uid )
  {
LABEL_29:
    v23 = ServiceBox::findService<NodeserverService>();
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v23);
    v25 = (unsigned __int64)(v24->_vptr_ServiceBase + 18);
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8(v24->_vptr_ServiceBase + 18);
    v26 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *))v25;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      p_packet_ptr);
    v5 = v26(v24, &__r);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
  }
  else
  {
    v15 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::GetPlayerTokenRsp::set_uid(v15, player_uid);
    v16 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::GetPlayerTokenRsp::set_gm_uid(v16, uid);
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/main_handler.cpp",
      "onGetPlayerTokenRsp",
      461);
    common::milog::MiLogStream::operator()(&v32, "uid: %u is gm_uid, change to player_uid: %u", uid, player_uid);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetPlayerTokenRsp>(&__r);
    common::minet::PacketUtils::createPacket(v2 + 96, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 198LL));
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onGetPlayerTokenRsp",
        466);
      common::milog::MiLogStream::operator()(&v32, "PacketUtils::createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v5 = -1;
    }
    else
    {
      v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::copyHead(v17, v18) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onGetPlayerTokenRsp",
          471);
        common::milog::MiLogStream::operator()(&v32, "copyHead failed");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v5 = -1;
      }
      else
      {
        v19 = ServiceBox::findService<NodeserverService>();
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19);
        v21 = (unsigned __int64)(v20->_vptr_ServiceBase + 18);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v20->_vptr_ServiceBase + 18);
        v22 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::GetPlayerTokenRsp> *))v21;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&__r,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        v5 = v22(v20, &__r);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
  }
LABEL_34:
  std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v2 + 32));
  result = v5;
  if ( v33 == (char *)v2 )
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

// Line 483: range 000000000384D262-000000000384D465
int32_t __cdecl MainHandler::onBindGmUidNotify(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  NodeserverService *v6; // r14
  std::__shared_ptr_access<const proto::BindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // r15d
  std::__shared_ptr_access<const proto::BindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // eax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:484";
  *(_QWORD *)(v2 + 16) = MainHandler::onBindGmUidNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BindGmUidNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BindGmUidNotify const>(
         (const std::shared_ptr<const proto::BindGmUidNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onBindGmUidNotify",
      484);
    common::milog::MiLogStream::operator()(&v12, "get BindGmUidNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BindGmUidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = ServiceBox::findService<NodeserverService>();
    v7 = std::__shared_ptr_access<proto::BindGmUidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::BindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v8 = proto::BindGmUidNotify::player_uid(v7);
    v9 = std::__shared_ptr_access<proto::BindGmUidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::BindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v10 = proto::BindGmUidNotify::gm_uid(v9);
    NodeserverService::bindGmUid(v6, v10, v8);
    v5 = 0;
  }
  std::shared_ptr<proto::BindGmUidNotify const>::~shared_ptr((std::shared_ptr<const proto::BindGmUidNotify> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 491: range 000000000384D466-000000000384D646
int32_t __cdecl MainHandler::onUnbindGmUidNotify(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  NodeserverService *v6; // r14
  std::__shared_ptr_access<const proto::UnbindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // eax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:492";
  *(_QWORD *)(v2 + 16) = MainHandler::onUnbindGmUidNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnbindGmUidNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UnbindGmUidNotify const>(
         (const std::shared_ptr<const proto::UnbindGmUidNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onUnbindGmUidNotify",
      492);
    common::milog::MiLogStream::operator()(&v10, "get UnbindGmUidNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UnbindGmUidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnbindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = ServiceBox::findService<NodeserverService>();
    v7 = std::__shared_ptr_access<proto::UnbindGmUidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::UnbindGmUidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v8 = proto::UnbindGmUidNotify::gm_uid(v7);
    NodeserverService::unBindGmUid(v6, v8);
    v5 = 0;
  }
  std::shared_ptr<proto::UnbindGmUidNotify const>::~shared_ptr((std::shared_ptr<const proto::UnbindGmUidNotify> *const)(v2 + 32));
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

// Line 499: range 000000000384D648-000000000384D95C
int32_t __cdecl MainHandler::onGetBindGmUidReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t BindGmUid; // r14d
  std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  NodeserverService *v8; // rdx
  NodeserverService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-E0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::GetBindGmUidRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:500 64 16 11 rsp_ptr:500";
  *(_QWORD *)(v2 + 16) = MainHandler::onGetBindGmUidReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetBindGmUidReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetBindGmUidReq const>(
         (const std::shared_ptr<const proto::GetBindGmUidReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onGetBindGmUidReq",
      500);
    common::milog::MiLogStream::operator()(&v15, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    BindGmUid = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetBindGmUidReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBindGmUidReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetBindGmUidRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetBindGmUidRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetBindGmUidRsp::set_retcode(v6, 0);
    v7 = std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetBindGmUidRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_map = proto::GetBindGmUidRsp::mutable_gm_uid_map(v7);
    v8 = ServiceBox::findService<NodeserverService>();
    NodeserverService::getGmUidMap(v8, proto_map);
    v9 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetBindGmUidRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetBindGmUidRsp> *)(v2 + 64));
    BindGmUid = ServiceBase::sendRsp<proto::GetBindGmUidRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::GetBindGmUidRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::GetBindGmUidRsp>::~shared_ptr((std::shared_ptr<proto::GetBindGmUidRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetBindGmUidReq const>::~shared_ptr((std::shared_ptr<const proto::GetBindGmUidReq> *const)(v2 + 32));
  result = BindGmUid;
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

// Line 510: range 000000000384D95E-000000000384DEF9
int32_t __cdecl MainHandler::onServerGetPlayerFriendBriefRsp(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NodeserverService *v9; // rax
  NodeserverService *v10; // r14
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *); // r15
  NodeserverService *v13; // rax
  NodeserverService *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *); // r15
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  proto::ServerGetPlayerFriendBriefRsp *rsp_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-D0h]
  proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:511 64 16 18 rsp_packet_ptr:519";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerGetPlayerFriendBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGetPlayerFriendBriefRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerFriendBriefRsp>(
         (const std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerGetPlayerFriendBriefRsp",
      511);
    common::milog::MiLogStream::operator()(&v24, "get ServerGetPlayerFriendBriefRsp failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGetPlayerFriendBriefRsp::retcode(rsp_0) )
    {
      v13 = ServiceBox::findService<NodeserverService>();
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = (unsigned __int64)(v14->_vptr_ServiceBase + 18);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_ServiceBase + 18);
      v16 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__r,
        p_packet_ptr);
      v5 = v16(v14, &__r);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    }
    else
    {
      v6 = std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __for_range = proto::ServerGetPlayerFriendBriefRsp::mutable_friend_brief_list(v6);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator!=(&__for_begin, &__for_end) )
      {
        friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator*(&__for_begin);
        MainHandler::processFriendOnline(this, friend_brief);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator++(&__for_begin);
      }
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerGetPlayerFriendBriefRsp>(&__r);
      common::minet::PacketUtils::createPacket(v2 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10839LL));
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onServerGetPlayerFriendBriefRsp",
          522);
        common::milog::MiLogStream::operator()(&v24, "PacketUtils::createPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::copyHead(v7, v8) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/main_handler.cpp",
            "onServerGetPlayerFriendBriefRsp",
            527);
          common::milog::MiLogStream::operator()(&v24, "copyHead failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = -1;
        }
        else
        {
          v9 = ServiceBox::findService<NodeserverService>();
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v11 = (unsigned __int64)(v10->_vptr_ServiceBase + 18);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v10->_vptr_ServiceBase + 18);
          v12 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *))v11;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&__r,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
          v5 = v12(v10, &__r);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *const)(v2 + 32));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 537: range 000000000384DEFA-000000000384E495
int32_t __cdecl MainHandler::onServerGetAskFriendBriefRsp(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NodeserverService *v9; // rax
  NodeserverService *v10; // r14
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(NodeserverService *, std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *); // r15
  NodeserverService *v13; // rax
  NodeserverService *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(NodeserverService *, std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *); // r15
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  proto::ServerGetAskFriendBriefRsp *rsp_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-D0h]
  proto::FriendBrief *ask_friend_brief; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::ServerGetAskFriendBriefRsp> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:538 64 16 18 rsp_packet_ptr:546";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerGetAskFriendBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGetAskFriendBriefRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetAskFriendBriefRsp>(
         (const std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerGetAskFriendBriefRsp",
      538);
    common::milog::MiLogStream::operator()(&v24, "get ServerGetAskFriendBriefRsp failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGetAskFriendBriefRsp::retcode(rsp_0) )
    {
      v13 = ServiceBox::findService<NodeserverService>();
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = (unsigned __int64)(v14->_vptr_ServiceBase + 18);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_ServiceBase + 18);
      v16 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__r,
        p_packet_ptr);
      v5 = v16(v14, &__r);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    }
    else
    {
      v6 = std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __for_range = proto::ServerGetAskFriendBriefRsp::mutable_ask_add_friend_brief_list(v6);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator!=(&__for_begin, &__for_end) )
      {
        ask_friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator*(&__for_begin);
        MainHandler::processFriendOnline(this, ask_friend_brief);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator++(&__for_begin);
      }
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerGetAskFriendBriefRsp>(&__r);
      common::minet::PacketUtils::createPacket(v2 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10870LL));
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onServerGetAskFriendBriefRsp",
          549);
        common::milog::MiLogStream::operator()(&v24, "PacketUtils::createPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::copyHead(v7, v8) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/main_handler.cpp",
            "onServerGetAskFriendBriefRsp",
            554);
          common::milog::MiLogStream::operator()(&v24, "copyHead failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = -1;
        }
        else
        {
          v9 = ServiceBox::findService<NodeserverService>();
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v11 = (unsigned __int64)(v10->_vptr_ServiceBase + 18);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v10->_vptr_ServiceBase + 18);
          v12 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *))v11;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&__r,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
          v5 = v12(v10, &__r);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::ServerGetAskFriendBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *const)(v2 + 32));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 564: range 000000000384E496-000000000384EA31
int32_t __cdecl MainHandler::onServerGetRecentMpPlayerListRsp(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NodeserverService *v9; // rax
  NodeserverService *v10; // r14
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(NodeserverService *, std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *); // r15
  NodeserverService *v13; // rax
  NodeserverService *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(NodeserverService *, std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *); // r15
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  proto::ServerGetRecentMpPlayerListRsp *rsp_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-D0h]
  proto::FriendBrief *recent_mp_player_brief; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:565 64 16 18 rsp_packet_ptr:573";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerGetRecentMpPlayerListRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGetRecentMpPlayerListRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetRecentMpPlayerListRsp>(
         (const std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerGetRecentMpPlayerListRsp",
      565);
    common::milog::MiLogStream::operator()(&v24, "get ServerGetRecentMpPlayerListRsp failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGetRecentMpPlayerListRsp::retcode(rsp_0) )
    {
      v13 = ServiceBox::findService<NodeserverService>();
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = (unsigned __int64)(v14->_vptr_ServiceBase + 18);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_ServiceBase + 18);
      v16 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__r,
        p_packet_ptr);
      v5 = v16(v14, &__r);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    }
    else
    {
      v6 = std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __for_range = proto::ServerGetRecentMpPlayerListRsp::mutable_recent_mp_player_brief_list(v6);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator!=(&__for_begin, &__for_end) )
      {
        recent_mp_player_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator*(&__for_begin);
        MainHandler::processFriendOnline(this, recent_mp_player_brief);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator++(&__for_begin);
      }
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerGetRecentMpPlayerListRsp>(&__r);
      common::minet::PacketUtils::createPacket(v2 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10826LL));
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onServerGetRecentMpPlayerListRsp",
          576);
        common::milog::MiLogStream::operator()(&v24, "PacketUtils::createPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::copyHead(v7, v8) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/main_handler.cpp",
            "onServerGetRecentMpPlayerListRsp",
            581);
          common::milog::MiLogStream::operator()(&v24, "copyHead failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = -1;
        }
        else
        {
          v9 = ServiceBox::findService<NodeserverService>();
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v11 = (unsigned __int64)(v10->_vptr_ServiceBase + 18);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v10->_vptr_ServiceBase + 18);
          v12 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *))v11;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&__r,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
          v5 = v12(v10, &__r);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *const)(v2 + 32));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 591: range 000000000384EA32-000000000384EFCD
int32_t __cdecl MainHandler::onServerGetPlayerBlacklistRsp(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NodeserverService *v9; // rax
  NodeserverService *v10; // r14
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *); // r15
  NodeserverService *v13; // rax
  NodeserverService *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *); // r15
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  proto::ServerGetPlayerBlacklistRsp *rsp_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-D0h]
  proto::FriendBrief *black_brief; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:592 64 16 18 rsp_packet_ptr:600";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerGetPlayerBlacklistRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ServerGetPlayerBlacklistRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerBlacklistRsp>(
         (const std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerGetPlayerBlacklistRsp",
      592);
    common::milog::MiLogStream::operator()(&v24, "get ServerGetPlayerBlacklistRsp failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerGetPlayerBlacklistRsp::retcode(rsp_0) )
    {
      v13 = ServiceBox::findService<NodeserverService>();
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = (unsigned __int64)(v14->_vptr_ServiceBase + 18);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_ServiceBase + 18);
      v16 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__r,
        p_packet_ptr);
      v5 = v16(v14, &__r);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    }
    else
    {
      v6 = std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __for_range = proto::ServerGetPlayerBlacklistRsp::mutable_blacklist(v6);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator!=(&__for_begin, &__for_end) )
      {
        black_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator*(&__for_begin);
        MainHandler::processFriendOnline(this, black_brief);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief>::operator++(&__for_begin);
      }
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerGetPlayerBlacklistRsp>(&__r);
      common::minet::PacketUtils::createPacket(v2 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10895LL));
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/main_handler.cpp",
          "onServerGetPlayerBlacklistRsp",
          603);
        common::milog::MiLogStream::operator()(&v24, "PacketUtils::createPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::copyHead(v7, v8) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/main_handler.cpp",
            "onServerGetPlayerBlacklistRsp",
            608);
          common::milog::MiLogStream::operator()(&v24, "copyHead failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = -1;
        }
        else
        {
          v9 = ServiceBox::findService<NodeserverService>();
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v11 = (unsigned __int64)(v10->_vptr_ServiceBase + 18);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v10->_vptr_ServiceBase + 18);
          v12 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *))v11;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&__r,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
          v5 = v12(v10, &__r);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::ServerGetPlayerBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *const)(v2 + 32));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 618: range 000000000384EFCE-000000000384F1BF
int32_t __cdecl MainHandler::onMatchserverWorkloadInfoNotify(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  MatchLoadMgr *p_match_load_mgr; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchserverWorkloadInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:619";
  *(_QWORD *)(v2 + 16) = MainHandler::onMatchserverWorkloadInfoNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchserverWorkloadInfoNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchserverWorkloadInfoNotify const>(
         (const std::shared_ptr<const proto::MatchserverWorkloadInfoNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onMatchserverWorkloadInfoNotify",
      619);
    common::milog::MiLogStream::operator()(&v11, "get MatchserverWorkloadInfoNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchserverWorkloadInfoNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchserverWorkloadInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_match_load_mgr = &ServiceBox::findService<NodeserverService>()->match_load_mgr;
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    MatchLoadMgr::updateWorkloadInfo(p_match_load_mgr, SourceAppId, notify);
    v5 = 0;
  }
  std::shared_ptr<proto::MatchserverWorkloadInfoNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchserverWorkloadInfoNotify> *const)(v2 + 32));
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

// Line 625: range 000000000384F1C0-000000000384F621
int32_t __cdecl MainHandler::onAddMatchUnitReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  MatchLoadMgr *p_match_load_mgr; // r14
  uint32_t matched; // eax
  std::__shared_ptr_access<proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NodeserverService *v9; // r14
  common::minet::Packet *v10; // rax
  NodeserverService *v11; // rax
  NodeserverService *v12; // r14
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(NodeserverService *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  uint32_t matchserver_id; // [rsp+24h] [rbp-DCh]
  std::__shared_ptr_access<const proto::AddMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::AddMatchUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:632 64 16 11 rsp_ptr:637";
  *(_QWORD *)(v2 + 16) = MainHandler::onAddMatchUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/main_handler.cpp",
      "onAddMatchUnitReq",
      628);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"packet_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::AddMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::AddMatchUnitReq const>(
           (const std::shared_ptr<const proto::AddMatchUnitReq> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onAddMatchUnitReq",
        632);
      common::milog::MiLogStream::operator()(&v20, "get AddMatchUnitReq failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::AddMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_match_load_mgr = &ServiceBox::findService<NodeserverService>()->match_load_mgr;
      matched = proto::AddMatchUnitReq::match_type(req);
      matchserver_id = MatchLoadMgr::chooseMatchServerId(p_match_load_mgr, matched);
      if ( matchserver_id )
      {
        v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::setTarget(v10, 0x11u, matchserver_id);
        v11 = ServiceBox::findService<NodeserverService>();
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11);
        v13 = (unsigned __int64)(v12->_vptr_ServiceBase + 18);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v12->_vptr_ServiceBase + 18);
        v14 = *(__int64 (__fastcall **)(NodeserverService *, std::shared_ptr<common::minet::Packet> *))v13;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
        v5 = v14(v12, &p_req_packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
      }
      else
      {
        common::tools::perf::make_shared<proto::AddMatchUnitRsp>();
        v8 = std::__shared_ptr_access<proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto::AddMatchUnitRsp::set_retcode(v8, -1);
        v9 = ServiceBox::findService<NodeserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
        std::shared_ptr<proto::AddMatchUnitRsp>::shared_ptr(
          &p_rsp_ptr,
          (const std::shared_ptr<proto::AddMatchUnitRsp> *)(v2 + 64));
        v5 = ServiceBase::sendRsp<proto::AddMatchUnitRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
        std::shared_ptr<proto::AddMatchUnitRsp>::~shared_ptr(&p_rsp_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
        std::shared_ptr<proto::AddMatchUnitRsp>::~shared_ptr((std::shared_ptr<proto::AddMatchUnitRsp> *const)(v2 + 64));
      }
    }
    std::shared_ptr<proto::AddMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::AddMatchUnitReq> *const)(v2 + 32));
  }
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 648: range 000000000384F622-000000000384F984
int32_t __cdecl MainHandler::onSyncMatchUnitReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  NodeserverService *v5; // rax
  NodeserverService *v6; // r14
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(NodeserverService *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  NodeserverService *v16; // r14
  int32_t matched; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int TargetAppId; // [rsp+2Ch] [rbp-B4h] BYREF
  std::shared_ptr<proto::SyncMatchUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:653";
  *(_QWORD *)(v2 + 16) = MainHandler::onSyncMatchUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = ServiceBox::findService<NodeserverService>();
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5);
  v7 = (unsigned __int64)(v6->_vptr_ServiceBase + 18);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v6->_vptr_ServiceBase + 18);
  v8 = *(unsigned int (__fastcall **)(NodeserverService *, std::shared_ptr<common::minet::Packet> *))v7;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
  v9 = v8(v6, &p_req_packet_ptr) != 0;
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onSyncMatchUnitReq",
      652);
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v23,
            (const char (*)[28])"send to match failed, uid: ");
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v11);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" ,matchserver_id: ");
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    TargetAppId = common::minet::Packet::getTargetAppId(v14);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &TargetAppId);
    common::milog::MiLogStream::~MiLogStream(&v23);
    common::tools::perf::make_shared<proto::SyncMatchUnitRsp>();
    v15 = std::__shared_ptr_access<proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::SyncMatchUnitRsp::set_retcode(v15, -1);
    v16 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SyncMatchUnitRsp> *)(v2 + 32));
    matched = ServiceBase::sendRsp<proto::SyncMatchUnitRsp>(v16, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::~shared_ptr((std::shared_ptr<proto::SyncMatchUnitRsp> *const)(v2 + 32));
  }
  else
  {
    matched = 0;
  }
  result = matched;
  if ( v24 == (char *)v2 )
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

// Line 662: range 000000000384FBD0-000000000384FD0B
int32_t __cdecl MainHandler::processFriendOnline(MainHandler *const this, proto::FriendBrief *brief)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerMgr *p_player_mgr; // r13
  uint32_t v6; // eax
  uint32_t active_time; // eax
  google::protobuf::uint32 v8; // edx
  int32_t result; // eax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 21 get_offline_param:663";
  *(_QWORD *)(v2 + 16) = MainHandler::processFriendOnline;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  p_player_mgr = &ServiceBox::findService<NodeserverService>()->player_mgr;
  v6 = proto::FriendBrief::uid(brief);
  if ( PlayerMgr::findPlayerGameserverId(p_player_mgr, v6) )
  {
    proto::FriendBrief::set_online_state(brief, FRIEND_ONLINE);
  }
  else
  {
    proto::FriendBrief::set_online_state(brief, FREIEND_DISCONNECT);
    active_time = proto::FriendBrief::last_active_time(brief);
    v8 = MainHandler::processFriendOnline(proto::FriendBrief &)::{lambda(unsigned int)#1}::operator()(
           (const MainHandler::processFriendOnline::<lambda(uint32_t)> *const)(v2 + 32),
           active_time);
    proto::FriendBrief::set_param(brief, v8);
  }
  result = 0;
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

// Line 663: range 000000000384F986-000000000384FBCE
__int64 __fastcall MainHandler::processFriendOnline(proto::FriendBrief &)::{lambda(unsigned int)#1}::operator()(
        const MainHandler::processFriendOnline::<lambda(uint32_t)> *const __closure,
        uint32_t last_active_time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  int TimeDay; // r15d
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  unsigned int __b; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 now:665 48 4 14 day_offset:673 64 4 20 last_active_time:663";
  *(_QWORD *)(v2 + 16) = MainHandler::processFriendOnline(proto::FriendBrief &)::{lambda(unsigned int)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = last_active_time;
  *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getNow();
  if ( *(_DWORD *)(v2 + 64) < *(_DWORD *)(v2 + 32) )
  {
    TimeDay = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v2 + 32), 0LL);
    *(_DWORD *)(v2 + 48) = TimeDay - common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v2 + 64), 0LL);
    __b = 31;
    v10 = (unsigned int *)std::min<unsigned int>((const unsigned int *)(v2 + 48), &__b);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    result = *v11;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/main_handler.cpp",
      "operator()",
      669);
    v5 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v13,
           (const char (*)[67])"[Social] last_active_time cannot later than now, last_login_time: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", now: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
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

// Line 693: range 000000000384FD0C-00000000038501CB
int32_t __cdecl MainHandler::onHomeOnlineStatusNotify(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rax
  char *v7; // rsi
  google::protobuf::uint32 v8; // r14d
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  char v11; // cl
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  HomeMgr *v14; // r14
  HomeMgr *p_home_mgr; // r14
  uint32_t v16; // eax
  int32_t result; // eax
  uint32_t gameserver_id; // [rsp+14h] [rbp-ECh]
  google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const proto::HomeOnlineStatusNotify *notify; // [rsp+28h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo> *__for_range; // [rsp+30h] [rbp-D0h]
  const proto::HomeOnlineStatusInfo *home_online_info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Home> p_home_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:694 64 16 12 home_ptr:705";
  *(_QWORD *)(v2 + 16) = MainHandler::onHomeOnlineStatusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::HomeOnlineStatusNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::HomeOnlineStatusNotify const>(
         (const std::shared_ptr<const proto::HomeOnlineStatusNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onHomeOnlineStatusNotify",
      694);
    common::milog::MiLogStream::operator()(&v25, "get HomeOnlineStatusNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::HomeOnlineStatusNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::HomeOnlineStatusNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    gameserver_id = common::minet::Packet::getServiceAppId(v6, 3u);
    if ( !gameserver_id )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onHomeOnlineStatusNotify",
        699);
      common::milog::MiLogStream::operator()(&v25, "gameserver_id is 0");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    __for_range = proto::HomeOnlineStatusNotify::home_info_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnlineStatusInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      home_online_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnlineStatusInfo const>::operator*(&__for_begin);
      if ( proto::HomeOnlineStatusInfo::online_status(home_online_info) )
      {
        if ( proto::HomeOnlineStatusInfo::online_status(home_online_info) == HomeOnlineStatusInfo_StatusType_OFFLINE )
        {
          p_home_mgr = &ServiceBox::findService<NodeserverService>()->home_mgr;
          v16 = proto::HomeOnlineStatusInfo::home_uid(home_online_info);
          HomeMgr::delHome(p_home_mgr, v16);
        }
      }
      else
      {
        common::tools::perf::make_shared<Home>();
        v7 = (char *)(v2 + 64);
        if ( !std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 64)) )
        {
          v8 = proto::HomeOnlineStatusInfo::home_uid(home_online_info);
          v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v10 = (google::protobuf::uint32 *)v9;
          v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
          {
            LOBYTE(v7) = v11 != 0;
            __asan_report_store4(v9, v7);
          }
          *v10 = v8;
          v12 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v13 = *(_BYTE *)(((unsigned __int64)&v12->gameserver_id >> 3) + 0x7FFF8000);
          if ( v13 != 0 && (char)((((_BYTE)v12 + 4) & 7) + 3) >= v13 )
          {
            LOBYTE(v7) = v13 != 0;
            __asan_report_store4(&v12->gameserver_id, v7);
          }
          v12->gameserver_id = gameserver_id;
          v14 = &ServiceBox::findService<NodeserverService>()->home_mgr;
          std::shared_ptr<Home>::shared_ptr(&p_home_ptr, (const std::shared_ptr<Home> *)(v2 + 64));
          HomeMgr::addHome(v14, &p_home_ptr);
          std::shared_ptr<Home>::~shared_ptr(&p_home_ptr);
        }
        std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnlineStatusInfo const>::operator++(&__for_begin);
    }
    v5 = 0;
  }
  std::shared_ptr<proto::HomeOnlineStatusNotify const>::~shared_ptr((std::shared_ptr<const proto::HomeOnlineStatusNotify> *const)(v2 + 32));
  result = v5;
  if ( v26 == (char *)v2 )
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

// Line 723: range 00000000038501CC-000000000385080B
int32_t __cdecl MainHandler::onServerHomeGetOnlineStatusReq(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NodeserverService *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NodeserverService *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::minet::Packet *v15; // rax
  common::minet::Packet *v16; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  unsigned __int64 v19; // rax
  common::minet::Packet *v20; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rbx
  unsigned __int64 v23; // rax
  void (__fastcall *v24)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r14
  int32_t result; // eax
  void (__fastcall *v26)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // [rsp+8h] [rbp-168h]
  uint32_t gameserver_app_id; // [rsp+2Ch] [rbp-144h]
  std::shared_ptr<common::minet::Packet> v28; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-130h] BYREF
  char v30[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 home_uid:724 64 4 22 home_gameserver_id:725 80 4 7 uid:738 96 16 18 rsp_packet_ptr:732"
                        " 128 56 7 rsp:729";
  *(_QWORD *)(v3 + 16) = MainHandler::onServerHomeGetOnlineStatusReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 48) = common::minet::Packet::getHomeUserId(v6);
  v7 = ServiceBox::findService<NodeserverService>();
  *(_DWORD *)(v3 + 64) = HomeMgr::findHomeGameserverId(&v7->home_mgr, *(_DWORD *)(v3 + 48));
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/main_handler.cpp",
    "onServerHomeGetOnlineStatusReq",
    726);
  v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v29, (const char (*)[21])"[ZT_DEBUG] home_uid:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" int gameserver_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v29);
  if ( *(_DWORD *)(v3 + 64) )
  {
    v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setTarget(v20, 3u, *(_DWORD *)(v3 + 64));
    v21 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v22 = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v21);
    v23 = (unsigned __int64)(v22->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
      v23 = __asan_report_load8(v22->_vptr_NetworkMgrBase + 8);
    v24 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v23;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v28, p_packet_ptr);
    v24(v22, &v28);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v28);
    goto LABEL_21;
  }
  proto::ServerHomeGetOnlineStatusRsp::ServerHomeGetOnlineStatusRsp((proto::ServerHomeGetOnlineStatusRsp *const)(v3 + 128));
  proto::ServerHomeGetOnlineStatusRsp::set_retcode((proto::ServerHomeGetOnlineStatusRsp *const)(v3 + 128), 0);
  proto::ServerHomeGetOnlineStatusRsp::set_is_online((proto::ServerHomeGetOnlineStatusRsp *const)(v3 + 128), 0);
  common::minet::PacketUtils::createPacket<proto::ServerHomeGetOnlineStatusRsp>((const proto::ServerHomeGetOnlineStatusRsp *)(v3 + 96));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerHomeGetOnlineStatusReq",
      735);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v2 = -1;
    v11 = 0;
  }
  else
  {
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v3 + 80) = common::minet::Packet::getUserId(v12);
    v13 = ServiceBox::findService<NodeserverService>();
    gameserver_app_id = PlayerMgr::findPlayerGameserverId(&v13->player_mgr, *(_DWORD *)(v3 + 80));
    if ( gameserver_app_id )
    {
      v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setUserId(v15, *(_DWORD *)(v3 + 80));
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setTarget(v16, 3u, gameserver_app_id);
      v17 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17);
      v19 = (unsigned __int64)(v18->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v18->_vptr_NetworkMgrBase + 8);
      v26 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v19;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v28,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      v26(v18, &v28);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v28);
      v11 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onServerHomeGetOnlineStatusReq",
        742);
      v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v29,
              (const char (*)[25])"player not online. uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v2 = -1;
      v11 = 0;
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
  proto::ServerHomeGetOnlineStatusRsp::~ServerHomeGetOnlineStatusRsp((proto::ServerHomeGetOnlineStatusRsp *const)(v3 + 128));
  if ( v11 == 1 )
LABEL_21:
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 758: range 000000000385080C-0000000003850D18
int32_t __cdecl MainHandler::onServerFriendInfoChangeNotify(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const std::string *v7; // rax
  NodeserverService *v8; // rax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  uint32_t notify_uid; // [rsp+28h] [rbp-128h]
  uint32_t gameserver_app_id; // [rsp+2Ch] [rbp-124h]
  uint32_t *__for_begin; // [rsp+30h] [rbp-120h]
  std::__shared_ptr_access<const proto::ServerFriendInfoChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+38h] [rbp-118h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> v22; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:759 64 16 26 game_notify_packet_ptr:763 96 32 15 game_notify:760";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerFriendInfoChangeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerFriendInfoChangeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerFriendInfoChangeNotify const>(
         (const std::shared_ptr<const proto::ServerFriendInfoChangeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/main_handler.cpp",
      "onServerFriendInfoChangeNotify",
      759);
    common::milog::MiLogStream::operator()(&v23, "get ServerFriendInfoChangeNotify failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerFriendInfoChangeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerFriendInfoChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::FriendInfoChangeNotify::FriendInfoChangeNotify((proto::FriendInfoChangeNotify *const)(v2 + 96));
    v6 = proto::ServerFriendInfoChangeNotify::my_uid(notify);
    proto::FriendInfoChangeNotify::set_uid((proto::FriendInfoChangeNotify *const)(v2 + 96), v6);
    v7 = proto::ServerFriendInfoChangeNotify::my_online_id[abi:cxx11](notify);
    proto::FriendInfoChangeNotify::set_online_id((proto::FriendInfoChangeNotify *const)(v2 + 96), v7);
    common::minet::PacketUtils::createPacket<proto::FriendInfoChangeNotify>((const proto::FriendInfoChangeNotify *)(v2 + 64));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onServerFriendInfoChangeNotify",
        766);
      common::milog::MiLogStream::operator()(&v23, "PacketUtils::createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
    else
    {
      __for_range = proto::ServerFriendInfoChangeNotify::notify_uid_list(notify);
      __for_begin = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin);
        }
        notify_uid = *__for_begin;
        v8 = ServiceBox::findService<NodeserverService>();
        gameserver_app_id = PlayerMgr::findPlayerGameserverId(&v8->player_mgr, notify_uid);
        if ( gameserver_app_id )
        {
          v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          common::minet::Packet::setUserId(v9, notify_uid);
          v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          common::minet::Packet::setTarget(v10, 3u, gameserver_app_id);
          v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v11);
          v13 = (unsigned __int64)(v12->_vptr_NetworkMgrBase + 8);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8(v12->_vptr_NetworkMgrBase + 8);
          v14 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v13;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v22,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
          v14(v12, &v22);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v22);
        }
        ++__for_begin;
      }
      v5 = 0;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    proto::FriendInfoChangeNotify::~FriendInfoChangeNotify((proto::FriendInfoChangeNotify *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerFriendInfoChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerFriendInfoChangeNotify> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 786: range 0000000003850D1A-0000000003851014
int32_t __cdecl MainHandler::onQueryConcertProductInfoReq(
        MainHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NodeserverService *v6; // rax
  common::minet::Packet *v7; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NodeserverService *v13; // r14
  int32_t v14; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-9Ch]
  uint32_t uid; // [rsp+28h] [rbp-98h]
  uint32_t gameserver_app_id; // [rsp+2Ch] [rbp-94h]
  std::shared_ptr<proto::QueryConcertProductInfoRsp> p_rsp_ptr; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:805";
  *(_QWORD *)(v2 + 16) = MainHandler::onQueryConcertProductInfoReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v5);
  v6 = ServiceBox::findService<NodeserverService>();
  gameserver_app_id = PlayerMgr::findPlayerGameserverId(&v6->player_mgr, uid);
  if ( gameserver_app_id )
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setTarget(v7, 3u, gameserver_app_id);
    v8 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_NetworkMgrBase + 8);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ret = v11(v9, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  }
  else
  {
    ret = 140;
  }
  if ( ret )
  {
    common::tools::perf::make_shared<proto::QueryConcertProductInfoRsp>();
    v12 = std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::QueryConcertProductInfoRsp::set_retcode(v12, ret);
    v13 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::QueryConcertProductInfoRsp> *)(v2 + 32));
    v14 = ServiceBase::sendRsp<proto::QueryConcertProductInfoRsp>(v13, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::~shared_ptr((std::shared_ptr<proto::QueryConcertProductInfoRsp> *const)(v2 + 32));
  }
  else
  {
    v14 = 0;
  }
  result = v14;
  if ( v21 == (char *)v2 )
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

// Line 814: range 0000000003851016-0000000003851310
int32_t __cdecl MainHandler::onSendConcertProductReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NodeserverService *v6; // rax
  common::minet::Packet *v7; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NodeserverService *v13; // r14
  int32_t v14; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-9Ch]
  uint32_t uid; // [rsp+28h] [rbp-98h]
  uint32_t gameserver_app_id; // [rsp+2Ch] [rbp-94h]
  std::shared_ptr<proto::SendConcertProductRsp> p_rsp_ptr; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:833";
  *(_QWORD *)(v2 + 16) = MainHandler::onSendConcertProductReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v5);
  v6 = ServiceBox::findService<NodeserverService>();
  gameserver_app_id = PlayerMgr::findPlayerGameserverId(&v6->player_mgr, uid);
  if ( gameserver_app_id )
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setTarget(v7, 3u, gameserver_app_id);
    v8 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_NetworkMgrBase + 8);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ret = v11(v9, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  }
  else
  {
    ret = 140;
  }
  if ( ret )
  {
    common::tools::perf::make_shared<proto::SendConcertProductRsp>();
    v12 = std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::SendConcertProductRsp::set_retcode(v12, ret);
    v13 = ServiceBox::findService<NodeserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SendConcertProductRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendConcertProductRsp> *)(v2 + 32));
    v14 = ServiceBase::sendRsp<proto::SendConcertProductRsp>(v13, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SendConcertProductRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SendConcertProductRsp>::~shared_ptr((std::shared_ptr<proto::SendConcertProductRsp> *const)(v2 + 32));
  }
  else
  {
    v14 = 0;
  }
  result = v14;
  if ( v21 == (char *)v2 )
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

// Line 842: range 0000000003851312-000000000385181D
int32_t __cdecl MainHandler::onServerGCGSyncReq(MainHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  NodeserverService *v5; // rax
  NodeserverService *v6; // r14
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(NodeserverService *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v9; // r14
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::minet::Packet *v15; // rax
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  google::protobuf::uint32 v17; // eax
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  common::minet::Packet *v19; // rax
  uint32_t v20; // eax
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  google::protobuf::uint32 v22; // eax
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  bool is_login; // al
  std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  NodeserverService *v26; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int TargetAppId; // [rsp+24h] [rbp-DCh] BYREF
  const proto::ServerGCGSyncReq *req; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::ServerGCGSyncRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:845 64 16 11 rsp_ptr:848";
  *(_QWORD *)(v2 + 16) = MainHandler::onServerGCGSyncReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = ServiceBox::findService<NodeserverService>();
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5);
  v7 = (unsigned __int64)(v6->_vptr_ServiceBase + 18);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v6->_vptr_ServiceBase + 18);
  v8 = *(unsigned int (__fastcall **)(NodeserverService *, std::shared_ptr<common::minet::Packet> *))v7;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
  v9 = v8(v6, &p_req_packet_ptr) != 0;
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  if ( v9 )
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::ServerGCGSyncReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::ServerGCGSyncReq const>(
           (const std::shared_ptr<const proto::ServerGCGSyncReq> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onServerGCGSyncReq",
        845);
      common::milog::MiLogStream::operator()(&v33, "get ServerGCGSyncReq failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v10 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::ServerGCGSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGCGSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/main_handler.cpp",
        "onServerGCGSyncReq",
        847);
      v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v33,
              (const char (*)[26])"send to gcg failed, uid: ");
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v12);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v13,
              (const char (*)[19])" ,matchserver_id: ");
      v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      TargetAppId = common::minet::Packet::getTargetAppId(v15);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &TargetAppId);
      common::milog::MiLogStream::~MiLogStream(&v33);
      common::tools::perf::make_shared<proto::ServerGCGSyncRsp>();
      v16 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = proto::ServerGCGSyncReq::game_uid(req);
      proto::ServerGCGSyncRsp::set_game_uid(v16, v17);
      v18 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v20 = common::minet::Packet::getTargetAppId(v19);
      proto::ServerGCGSyncRsp::set_app_id(v18, v20);
      v21 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v22 = proto::ServerGCGSyncReq::verify_code(req);
      proto::ServerGCGSyncRsp::set_verify_code(v21, v22);
      v23 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      is_login = proto::ServerGCGSyncReq::is_login(req);
      proto::ServerGCGSyncRsp::set_is_login(v23, is_login);
      v25 = std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerGCGSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto::ServerGCGSyncRsp::set_retcode(v25, -1);
      v26 = ServiceBox::findService<NodeserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      std::shared_ptr<proto::ServerGCGSyncRsp>::shared_ptr(
        &p_rsp_ptr,
        (const std::shared_ptr<proto::ServerGCGSyncRsp> *)(v2 + 64));
      v10 = ServiceBase::sendRsp<proto::ServerGCGSyncRsp>(v26, &p_rsp_ptr, &p_req_packet_ptr);
      std::shared_ptr<proto::ServerGCGSyncRsp>::~shared_ptr(&p_rsp_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
      std::shared_ptr<proto::ServerGCGSyncRsp>::~shared_ptr((std::shared_ptr<proto::ServerGCGSyncRsp> *const)(v2 + 64));
    }
    std::shared_ptr<proto::ServerGCGSyncReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGCGSyncReq> *const)(v2 + 32));
  }
  else
  {
    v10 = 0;
  }
  result = v10;
  if ( v34 == (char *)v2 )
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
