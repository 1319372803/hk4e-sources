// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/social_handler.cpp

// Line 29: range 000000000E31D906-000000000E320FD7
int32_t __cdecl SocialHandler::addPacketFuncToMap(
        SocialHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  SocialHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  SocialHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  SocialHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  SocialHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  SocialHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  SocialHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  SocialHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  SocialHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  SocialHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  SocialHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  SocialHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  SocialHandler **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  SocialHandler **v41; // r8
  const std::_Placeholder<1> *v42; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  SocialHandler **v44; // r8
  const std::_Placeholder<1> *v45; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  SocialHandler **v47; // r8
  const std::_Placeholder<1> *v48; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v49; // rax
  SocialHandler **v50; // r8
  const std::_Placeholder<1> *v51; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v52; // rax
  SocialHandler **v53; // r8
  const std::_Placeholder<1> *v54; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v55; // rax
  SocialHandler **v56; // r8
  const std::_Placeholder<1> *v57; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v58; // rax
  SocialHandler **v59; // r8
  const std::_Placeholder<1> *v60; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  SocialHandler **v62; // r8
  const std::_Placeholder<1> *v63; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  SocialHandler **v65; // r8
  const std::_Placeholder<1> *v66; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v67; // rax
  SocialHandler **v68; // r8
  const std::_Placeholder<1> *v69; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v70; // rax
  SocialHandler **v71; // r8
  const std::_Placeholder<1> *v72; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v73; // rax
  SocialHandler **v74; // r8
  const std::_Placeholder<1> *v75; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v76; // rax
  SocialHandler **v77; // r8
  const std::_Placeholder<1> *v78; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v79; // rax
  SocialHandler **v80; // r8
  const std::_Placeholder<1> *v81; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v82; // rax
  SocialHandler **v83; // r8
  const std::_Placeholder<1> *v84; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v85; // rax
  SocialHandler **v86; // r8
  const std::_Placeholder<1> *v87; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v88; // rax
  SocialHandler **v89; // r8
  const std::_Placeholder<1> *v90; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v91; // rax
  SocialHandler **v92; // r8
  const std::_Placeholder<1> *v93; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v94; // rax
  SocialHandler **v95; // r8
  const std::_Placeholder<1> *v96; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v97; // rax
  SocialHandler **v98; // r8
  const std::_Placeholder<1> *v99; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v100; // rax
  SocialHandler **v101; // r8
  const std::_Placeholder<1> *v102; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v103; // rax
  SocialHandler **v104; // r8
  const std::_Placeholder<1> *v105; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v106; // rax
  SocialHandler **v107; // r8
  const std::_Placeholder<1> *v108; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v109; // rax
  SocialHandler **v110; // r8
  const std::_Placeholder<1> *v111; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v112; // rax
  SocialHandler **v113; // r8
  const std::_Placeholder<1> *v114; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v115; // rax
  SocialHandler **v116; // r8
  const std::_Placeholder<1> *v117; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v118; // rax
  __m128i v119; // [rsp+0h] [rbp-300h] BYREF
  __m128i v120; // [rsp+10h] [rbp-2F0h] BYREF
  __m128i v121; // [rsp+20h] [rbp-2E0h] BYREF
  __m128i v122; // [rsp+30h] [rbp-2D0h] BYREF
  __m128i v123; // [rsp+40h] [rbp-2C0h] BYREF
  __m128i v124; // [rsp+50h] [rbp-2B0h] BYREF
  __m128i v125; // [rsp+60h] [rbp-2A0h] BYREF
  __m128i v126; // [rsp+70h] [rbp-290h] BYREF
  __m128i v127; // [rsp+80h] [rbp-280h] BYREF
  __m128i v128; // [rsp+90h] [rbp-270h] BYREF
  __m128i v129; // [rsp+A0h] [rbp-260h] BYREF
  __m128i v130; // [rsp+B0h] [rbp-250h] BYREF
  __m128i v131; // [rsp+C0h] [rbp-240h] BYREF
  __m128i v132; // [rsp+D0h] [rbp-230h] BYREF
  __m128i v133; // [rsp+E0h] [rbp-220h] BYREF
  __m128i v134; // [rsp+F0h] [rbp-210h] BYREF
  __m128i v135; // [rsp+100h] [rbp-200h] BYREF
  __m128i v136; // [rsp+110h] [rbp-1F0h] BYREF
  __m128i v137; // [rsp+120h] [rbp-1E0h] BYREF
  __m128i v138; // [rsp+130h] [rbp-1D0h] BYREF
  __m128i v139; // [rsp+140h] [rbp-1C0h] BYREF
  __m128i v140; // [rsp+150h] [rbp-1B0h] BYREF
  __m128i v141; // [rsp+160h] [rbp-1A0h] BYREF
  __m128i v142; // [rsp+170h] [rbp-190h] BYREF
  __m128i v143; // [rsp+180h] [rbp-180h] BYREF
  __m128i v144; // [rsp+190h] [rbp-170h] BYREF
  __m128i v145; // [rsp+1A0h] [rbp-160h] BYREF
  __m128i v146; // [rsp+1B0h] [rbp-150h] BYREF
  __m128i v147; // [rsp+1C0h] [rbp-140h] BYREF
  __m128i v148; // [rsp+1D0h] [rbp-130h] BYREF
  __m128i v149; // [rsp+1E0h] [rbp-120h] BYREF
  __m128i v150; // [rsp+1F0h] [rbp-110h] BYREF
  __m128i v151; // [rsp+200h] [rbp-100h] BYREF
  __m128i v152; // [rsp+210h] [rbp-F0h] BYREF
  __m128i v153; // [rsp+220h] [rbp-E0h] BYREF
  __m128i v154; // [rsp+230h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+240h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+248h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+250h] [rbp-B0h]
  SocialHandler *thisa; // [rsp+258h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+26Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v160; // [rsp+270h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+278h] [rbp-88h] BYREF
  int (*__f[2])(SocialHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+280h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,const std::_Placeholder<1>&>::type v163; // [rsp+290h] [rbp-70h] BYREF
  common::milog::MiLogStream v164; // [rsp+2B0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10898;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v160, &__y) )
  {
    common::milog::MiLogStream::create(
      &v164,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/social_handler.cpp",
      "addPacketFuncToMap",
      30);
    common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10898LL);
    common::milog::MiLogStream::~MiLogStream(&v164);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(SocialHandler *, std::shared_ptr<common::minet::Packet>))SocialHandler::onServerGetPlayerFriendListReq;
    __f[1] = 0LL;
    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
      &v163,
      __f,
      (SocialHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10898;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
      v7,
      &v163);
    __x = 10807;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v160, &__y) )
    {
      common::milog::MiLogStream::create(
        &v164,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/social_handler.cpp",
        "addPacketFuncToMap",
        31);
      common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10807LL);
      common::milog::MiLogStream::~MiLogStream(&v164);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(SocialHandler *, std::shared_ptr<common::minet::Packet>))SocialHandler::onServerGetSocialDetailReq;
      __f[1] = 0LL;
      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
        &v163,
        __f,
        (SocialHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10807;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
        v10,
        &v163);
      __x = 10803;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v160, &__y) )
      {
        common::milog::MiLogStream::create(
          &v164,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/social_handler.cpp",
          "addPacketFuncToMap",
          32);
        common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10803LL);
        common::milog::MiLogStream::~MiLogStream(&v164);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v119.m128i_i64[0] = (__int64)SocialHandler::onServerAskAddFriendReq;
        v119.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v119);
        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
          &v163,
          __f,
          (SocialHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10803;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
          v13,
          &v163);
        __x = 10873;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v160, &__y) )
        {
          common::milog::MiLogStream::create(
            &v164,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/social_handler.cpp",
            "addPacketFuncToMap",
            33);
          common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10873LL);
          common::milog::MiLogStream::~MiLogStream(&v164);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v120.m128i_i64[0] = (__int64)SocialHandler::onServerDealAddFriendReq;
          v120.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v120);
          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
            &v163,
            __f,
            (SocialHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10873;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
            v16,
            &v163);
          __x = 10831;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v160, &__y) )
          {
            common::milog::MiLogStream::create(
              &v164,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/social_handler.cpp",
              "addPacketFuncToMap",
              34);
            common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10831LL);
            common::milog::MiLogStream::~MiLogStream(&v164);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v121.m128i_i64[0] = (__int64)SocialHandler::onServerDeleteFriendReq;
            v121.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v121);
            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
              &v163,
              __f,
              (SocialHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10831;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
              v19,
              &v163);
            __x = 10847;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v160, &__y) )
            {
              common::milog::MiLogStream::create(
                &v164,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/social_handler.cpp",
                "addPacketFuncToMap",
                35);
              common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10847LL);
              common::milog::MiLogStream::~MiLogStream(&v164);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v122.m128i_i64[0] = (__int64)SocialHandler::onServerGetPlayerFriendBriefReq;
              v122.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v122);
              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                &v163,
                __f,
                (SocialHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10847;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                v22,
                &v163);
              __x = 10858;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v160, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v164,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/social_handler.cpp",
                  "addPacketFuncToMap",
                  36);
                common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10858LL);
                common::milog::MiLogStream::~MiLogStream(&v164);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v123.m128i_i64[0] = (__int64)SocialHandler::onServerGetAskFriendBriefReq;
                v123.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v123);
                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                  &v163,
                  __f,
                  (SocialHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10858;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v163);
                __x = 10865;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v160, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v164,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/social_handler.cpp",
                    "addPacketFuncToMap",
                    38);
                  common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10865LL);
                  common::milog::MiLogStream::~MiLogStream(&v164);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v124.m128i_i64[0] = (__int64)SocialHandler::onSyncPlayerBriefNotify;
                  v124.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v124);
                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                    &v163,
                    __f,
                    (SocialHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10865;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v163);
                  __x = 10853;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v160, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v164,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/social_handler.cpp",
                      "addPacketFuncToMap",
                      39);
                    common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10853LL);
                    common::milog::MiLogStream::~MiLogStream(&v164);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v125.m128i_i64[0] = (__int64)SocialHandler::onSeverGetPS4FriendUidReq;
                    v125.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v125);
                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                      &v163,
                      __f,
                      (SocialHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 10853;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v163);
                    __x = 10804;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v160, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v164,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/social_handler.cpp",
                        "addPacketFuncToMap",
                        41);
                      common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10804LL);
                      common::milog::MiLogStream::~MiLogStream(&v164);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v126.m128i_i64[0] = (__int64)SocialHandler::onServerAddBlacklistReq;
                      v126.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v126);
                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                        &v163,
                        __f,
                        (SocialHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 10804;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v163);
                      __x = 10827;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v160, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v164,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/social_handler.cpp",
                          "addPacketFuncToMap",
                          42);
                        common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10827LL);
                        common::milog::MiLogStream::~MiLogStream(&v164);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v127.m128i_i64[0] = (__int64)SocialHandler::onServerRemoveBlacklistReq;
                        v127.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v127);
                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                          &v163,
                          __f,
                          (SocialHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 10827;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v163);
                        __x = 10888;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v160, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v164,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/social_handler.cpp",
                            "addPacketFuncToMap",
                            43);
                          common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10888LL);
                          common::milog::MiLogStream::~MiLogStream(&v164);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v128.m128i_i64[0] = (__int64)SocialHandler::onServerGetRecentMpPlayerListReq;
                          v128.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v128);
                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                            &v163,
                            __f,
                            (SocialHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 10888;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v163);
                          __x = 10863;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v160, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v164,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/social_handler.cpp",
                              "addPacketFuncToMap",
                              44);
                            common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10863LL);
                            common::milog::MiLogStream::~MiLogStream(&v164);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v129.m128i_i64[0] = (__int64)SocialHandler::onServerGetPlayerBlacklistReq;
                            v129.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v129);
                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                              &v163,
                              __f,
                              (SocialHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v41,
                              v42);
                            __x = 10863;
                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                              v43,
                              &v163);
                            __x = 10806;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v160, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v164,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/social_handler.cpp",
                                "addPacketFuncToMap",
                                46);
                              common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10806LL);
                              common::milog::MiLogStream::~MiLogStream(&v164);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v130.m128i_i64[0] = (__int64)SocialHandler::onServerPrivateChatReq;
                              v130.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v130);
                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                &v163,
                                __f,
                                (SocialHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v44,
                                v45);
                              __x = 10806;
                              v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                v46,
                                &v163);
                              __x = 10850;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v160, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v164,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/social_handler.cpp",
                                  "addPacketFuncToMap",
                                  47);
                                common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10850LL);
                                common::milog::MiLogStream::~MiLogStream(&v164);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v131.m128i_i64[0] = (__int64)SocialHandler::onServerPullPrivateChatReq;
                                v131.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v131);
                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                  &v163,
                                  __f,
                                  (SocialHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v47,
                                  v48);
                                __x = 10850;
                                v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                  v49,
                                  &v163);
                                __x = 10843;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v160, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v164,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/social_handler.cpp",
                                    "addPacketFuncToMap",
                                    48);
                                  common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10843LL);
                                  common::milog::MiLogStream::~MiLogStream(&v164);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v132.m128i_i64[0] = (__int64)SocialHandler::onServerPullRecentChatReq;
                                  v132.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v132);
                                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                    &v163,
                                    __f,
                                    (SocialHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v50,
                                    v51);
                                  __x = 10843;
                                  v52 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                    v52,
                                    &v163);
                                  __x = 10874;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v160, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v164,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/social_handler.cpp",
                                      "addPacketFuncToMap",
                                      50);
                                    common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10874LL);
                                    common::milog::MiLogStream::~MiLogStream(&v164);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v133.m128i_i64[0] = (__int64)SocialHandler::onServerUpdateActivitySocialDataNotify;
                                    v133.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v133);
                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                      &v163,
                                      __f,
                                      (SocialHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v53,
                                      v54);
                                    __x = 10874;
                                    v55 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                      v55,
                                      &v163);
                                    __x = 10876;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v160, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v164,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/social_handler.cpp",
                                        "addPacketFuncToMap",
                                        51);
                                      common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10876LL);
                                      common::milog::MiLogStream::~MiLogStream(&v164);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v134.m128i_i64[0] = (__int64)SocialHandler::onServerBlessingGetFriendPicListReq;
                                      v134.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v134);
                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                        &v163,
                                        __f,
                                        (SocialHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v56,
                                        v57);
                                      __x = 10876;
                                      v58 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                        v58,
                                        &v163);
                                      __x = 10841;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v160, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v164,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/social_handler.cpp",
                                          "addPacketFuncToMap",
                                          52);
                                        common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10841LL);
                                        common::milog::MiLogStream::~MiLogStream(&v164);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v135.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendBriefReq;
                                        v135.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v135);
                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                          &v163,
                                          __f,
                                          (SocialHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v59,
                                          v60);
                                        __x = 10841;
                                        v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                          v61,
                                          &v163);
                                        __x = 10891;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v160, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v164,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/social_handler.cpp",
                                            "addPacketFuncToMap",
                                            53);
                                          common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10891LL);
                                          common::milog::MiLogStream::~MiLogStream(&v164);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v136.m128i_i64[0] = (__int64)SocialHandler::onServerUpdateShowAvatarInfoNotify;
                                          v136.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v136);
                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                            &v163,
                                            __f,
                                            (SocialHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v62,
                                            v63);
                                          __x = 10891;
                                          v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                            v64,
                                            &v163);
                                          __x = 10824;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v160, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v164,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/social_handler.cpp",
                                              "addPacketFuncToMap",
                                              54);
                                            common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10824LL);
                                            common::milog::MiLogStream::~MiLogStream(&v164);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            v137.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendShowAvatarInfoReq;
                                            v137.m128i_i64[1] = 0LL;
                                            *(__m128i *)__f = _mm_load_si128(&v137);
                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                              &v163,
                                              __f,
                                              (SocialHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v65,
                                              v66);
                                            __x = 10824;
                                            v67 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                              v67,
                                              &v163);
                                            __x = 10842;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v160, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v164,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/social_handler.cpp",
                                                "addPacketFuncToMap",
                                                56);
                                              common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10842LL);
                                              common::milog::MiLogStream::~MiLogStream(&v164);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              v138.m128i_i64[0] = (__int64)SocialHandler::onServerReadPrivateChatReq;
                                              v138.m128i_i64[1] = 0LL;
                                              *(__m128i *)__f = _mm_load_si128(&v138);
                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                &v163,
                                                __f,
                                                (SocialHandler **)&__y,
                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                v68,
                                                v69);
                                              __x = 10842;
                                              v70 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                v70,
                                                &v163);
                                              __x = 10830;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v160, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v164,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/social_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  57);
                                                common::milog::MiLogStream::operator()(&v164, off_1BD97720, 10830LL);
                                                common::milog::MiLogStream::~MiLogStream(&v164);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                v139.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendShowNameCardInfoReq;
                                                v139.m128i_i64[1] = 0LL;
                                                *(__m128i *)__f = _mm_load_si128(&v139);
                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                  &v163,
                                                  __f,
                                                  (SocialHandler **)&__y,
                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                  v71,
                                                  v72);
                                                __x = 10830;
                                                v73 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                  v73,
                                                  &v163);
                                                __x = 12090;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v160, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v164,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/social_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    58);
                                                  common::milog::MiLogStream::operator()(&v164, off_1BD97720, 12090LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v164);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  v140.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendEnterHomeOptionReq;
                                                  v140.m128i_i64[1] = 0LL;
                                                  *(__m128i *)__f = _mm_load_si128(&v140);
                                                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                    &v163,
                                                    __f,
                                                    (SocialHandler **)&__y,
                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                    v74,
                                                    v75);
                                                  __x = 12090;
                                                  v76 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                    v76,
                                                    &v163);
                                                  __x = 4057;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v160, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v164,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/social_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      59);
                                                    common::milog::MiLogStream::operator()(&v164, off_1BD97720, 4057LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v164);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    v141.m128i_i64[0] = (__int64)SocialHandler::onForceAddPlayerFriendReq;
                                                    v141.m128i_i64[1] = 0LL;
                                                    *(__m128i *)__f = _mm_load_si128(&v141);
                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                      &v163,
                                                      __f,
                                                      (SocialHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v77,
                                                      v78);
                                                    __x = 4057;
                                                    v79 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                      v79,
                                                      &v163);
                                                    __x = 10817;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v160, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v164,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/social_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        61);
                                                      common::milog::MiLogStream::operator()(
                                                        &v164,
                                                        off_1BD97720,
                                                        10817LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v164);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      v142.m128i_i64[0] = (__int64)SocialHandler::onServerAddPsnFriendReq;
                                                      v142.m128i_i64[1] = 0LL;
                                                      *(__m128i *)__f = _mm_load_si128(&v142);
                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                        &v163,
                                                        __f,
                                                        (SocialHandler **)&__y,
                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                        v80,
                                                        v81);
                                                      __x = 10817;
                                                      v82 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                        v82,
                                                        &v163);
                                                      __x = 10819;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v160, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v164,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/social_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          62);
                                                        common::milog::MiLogStream::operator()(
                                                          &v164,
                                                          off_1BD97720,
                                                          10819LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v164);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        v143.m128i_i64[0] = (__int64)SocialHandler::onServerAddPsnBlackReq;
                                                        v143.m128i_i64[1] = 0LL;
                                                        *(__m128i *)__f = _mm_load_si128(&v143);
                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                          &v163,
                                                          __f,
                                                          (SocialHandler **)&__y,
                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                          v83,
                                                          v84);
                                                        __x = 10819;
                                                        v85 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                          v85,
                                                          &v163);
                                                        __x = 10857;
                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                        process_packet_func_mapa,
                                                                        &__x)._M_node;
                                                        v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                        if ( std::operator!=(&v160, &__y) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            &v164,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/handler/social_handler.cpp",
                                                            "addPacketFuncToMap",
                                                            64);
                                                          common::milog::MiLogStream::operator()(
                                                            &v164,
                                                            off_1BD97720,
                                                            10857LL);
                                                          common::milog::MiLogStream::~MiLogStream(&v164);
                                                          return -1;
                                                        }
                                                        else
                                                        {
                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                          v144.m128i_i64[0] = (__int64)SocialHandler::onServerPlantFlowerGetFriendFlowerDataReq;
                                                          v144.m128i_i64[1] = 0LL;
                                                          *(__m128i *)__f = _mm_load_si128(&v144);
                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                            &v163,
                                                            __f,
                                                            (SocialHandler **)&__y,
                                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                            v86,
                                                            v87);
                                                          __x = 10857;
                                                          v88 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                  process_packet_func_mapa,
                                                                  &__x);
                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                            v88,
                                                            &v163);
                                                          __x = 10816;
                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                          process_packet_func_mapa,
                                                                          &__x)._M_node;
                                                          v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                          if ( std::operator!=(&v160, &__y) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              &v164,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/handler/social_handler.cpp",
                                                              "addPacketFuncToMap",
                                                              65);
                                                            common::milog::MiLogStream::operator()(
                                                              &v164,
                                                              off_1BD97720,
                                                              10816LL);
                                                            common::milog::MiLogStream::~MiLogStream(&v164);
                                                            return -1;
                                                          }
                                                          else
                                                          {
                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                            v145.m128i_i64[0] = (__int64)SocialHandler::onServerPlantFlowerGetFriendFlowerWishListReq;
                                                            v145.m128i_i64[1] = 0LL;
                                                            *(__m128i *)__f = _mm_load_si128(&v145);
                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                              &v163,
                                                              __f,
                                                              (SocialHandler **)&__y,
                                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                              v89,
                                                              v90);
                                                            __x = 10816;
                                                            v91 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                    process_packet_func_mapa,
                                                                    &__x);
                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                              v91,
                                                              &v163);
                                                            __x = 10866;
                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                            process_packet_func_mapa,
                                                                            &__x)._M_node;
                                                            v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                            if ( std::operator!=(&v160, &__y) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                &v164,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/handler/social_handler.cpp",
                                                                "addPacketFuncToMap",
                                                                67);
                                                              common::milog::MiLogStream::operator()(
                                                                &v164,
                                                                off_1BD97720,
                                                                10866LL);
                                                              common::milog::MiLogStream::~MiLogStream(&v164);
                                                              return -1;
                                                            }
                                                            else
                                                            {
                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                              v146.m128i_i64[0] = (__int64)SocialHandler::onServerWinterCampGetFriendWishListReq;
                                                              v146.m128i_i64[1] = 0LL;
                                                              *(__m128i *)__f = _mm_load_si128(&v146);
                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                &v163,
                                                                __f,
                                                                (SocialHandler **)&__y,
                                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                v92,
                                                                v93);
                                                              __x = 10866;
                                                              v94 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                      process_packet_func_mapa,
                                                                      &__x);
                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                v94,
                                                                &v163);
                                                              __x = 10840;
                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                              process_packet_func_mapa,
                                                                              &__x)._M_node;
                                                              v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                              if ( std::operator!=(&v160, &__y) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  &v164,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/handler/social_handler.cpp",
                                                                  "addPacketFuncToMap",
                                                                  68);
                                                                common::milog::MiLogStream::operator()(
                                                                  &v164,
                                                                  off_1BD97720,
                                                                  10840LL);
                                                                common::milog::MiLogStream::~MiLogStream(&v164);
                                                                return -1;
                                                              }
                                                              else
                                                              {
                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                v147.m128i_i64[0] = (__int64)SocialHandler::onServerWinterCampGetFriendItemDataReq;
                                                                v147.m128i_i64[1] = 0LL;
                                                                *(__m128i *)__f = _mm_load_si128(&v147);
                                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                  &v163,
                                                                  __f,
                                                                  (SocialHandler **)&__y,
                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                  v95,
                                                                  v96);
                                                                __x = 10840;
                                                                v97 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                        process_packet_func_mapa,
                                                                        &__x);
                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                  v97,
                                                                  &v163);
                                                                __x = 10844;
                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                process_packet_func_mapa,
                                                                                &__x)._M_node;
                                                                v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                if ( std::operator!=(&v160, &__y) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    &v164,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/handler/social_handler.cpp",
                                                                    "addPacketFuncToMap",
                                                                    70);
                                                                  common::milog::MiLogStream::operator()(
                                                                    &v164,
                                                                    off_1BD97720,
                                                                    10844LL);
                                                                  common::milog::MiLogStream::~MiLogStream(&v164);
                                                                  return -1;
                                                                }
                                                                else
                                                                {
                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                  v148.m128i_i64[0] = (__int64)SocialHandler::onServerAddFriendByMuipReq;
                                                                  v148.m128i_i64[1] = 0LL;
                                                                  *(__m128i *)__f = _mm_load_si128(&v148);
                                                                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                    &v163,
                                                                    __f,
                                                                    (SocialHandler **)&__y,
                                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                    v98,
                                                                    v99);
                                                                  __x = 10844;
                                                                  v100 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                           process_packet_func_mapa,
                                                                           &__x);
                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                    v100,
                                                                    &v163);
                                                                  __x = 10801;
                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                  process_packet_func_mapa,
                                                                                  &__x)._M_node;
                                                                  v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                  if ( std::operator!=(&v160, &__y) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      &v164,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/handler/social_handler.cpp",
                                                                      "addPacketFuncToMap",
                                                                      71);
                                                                    common::milog::MiLogStream::operator()(
                                                                      &v164,
                                                                      off_1BD97720,
                                                                      10801LL);
                                                                    common::milog::MiLogStream::~MiLogStream(&v164);
                                                                    return -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                    v149.m128i_i64[0] = (__int64)SocialHandler::onServerDelFriendByMuipReq;
                                                                    v149.m128i_i64[1] = 0LL;
                                                                    *(__m128i *)__f = _mm_load_si128(&v149);
                                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                      &v163,
                                                                      __f,
                                                                      (SocialHandler **)&__y,
                                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                      v101,
                                                                      v102);
                                                                    __x = 10801;
                                                                    v103 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                             process_packet_func_mapa,
                                                                             &__x);
                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                      v103,
                                                                      &v163);
                                                                    __x = 10851;
                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                    process_packet_func_mapa,
                                                                                    &__x)._M_node;
                                                                    v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                    if ( std::operator!=(&v160, &__y) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        &v164,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/handler/social_handler.cpp",
                                                                        "addPacketFuncToMap",
                                                                        72);
                                                                      common::milog::MiLogStream::operator()(
                                                                        &v164,
                                                                        off_1BD97720,
                                                                        10851LL);
                                                                      common::milog::MiLogStream::~MiLogStream(&v164);
                                                                      return -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                      v150.m128i_i64[0] = (__int64)SocialHandler::onServerAddFriendAskByMuipReq;
                                                                      v150.m128i_i64[1] = 0LL;
                                                                      *(__m128i *)__f = _mm_load_si128(&v150);
                                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                        &v163,
                                                                        __f,
                                                                        (SocialHandler **)&__y,
                                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                        v104,
                                                                        v105);
                                                                      __x = 10851;
                                                                      v106 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                               process_packet_func_mapa,
                                                                               &__x);
                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                        v106,
                                                                        &v163);
                                                                      __x = 10871;
                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                      process_packet_func_mapa,
                                                                                      &__x)._M_node;
                                                                      v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                      if ( std::operator!=(&v160, &__y) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          &v164,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/handler/social_handler.cpp",
                                                                          "addPacketFuncToMap",
                                                                          73);
                                                                        common::milog::MiLogStream::operator()(
                                                                          &v164,
                                                                          off_1BD97720,
                                                                          10871LL);
                                                                        common::milog::MiLogStream::~MiLogStream(&v164);
                                                                        return -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                        v151.m128i_i64[0] = (__int64)SocialHandler::onServerDelFriendAskByMuipReq;
                                                                        v151.m128i_i64[1] = 0LL;
                                                                        *(__m128i *)__f = _mm_load_si128(&v151);
                                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                          &v163,
                                                                          __f,
                                                                          (SocialHandler **)&__y,
                                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                          v107,
                                                                          v108);
                                                                        __x = 10871;
                                                                        v109 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                 process_packet_func_mapa,
                                                                                 &__x);
                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                          v109,
                                                                          &v163);
                                                                        __x = 10879;
                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                        process_packet_func_mapa,
                                                                                        &__x)._M_node;
                                                                        v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                        if ( std::operator!=(&v160, &__y) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            &v164,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/handler/social_handler.cpp",
                                                                            "addPacketFuncToMap",
                                                                            75);
                                                                          common::milog::MiLogStream::operator()(
                                                                            &v164,
                                                                            off_1BD97720,
                                                                            10879LL);
                                                                          common::milog::MiLogStream::~MiLogStream(&v164);
                                                                          return -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                          v152.m128i_i64[0] = (__int64)SocialHandler::onServerActivityGetFriendGiftDataReq;
                                                                          v152.m128i_i64[1] = 0LL;
                                                                          *(__m128i *)__f = _mm_load_si128(&v152);
                                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                            &v163,
                                                                            __f,
                                                                            (SocialHandler **)&__y,
                                                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                            v110,
                                                                            v111);
                                                                          __x = 10879;
                                                                          v112 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                   process_packet_func_mapa,
                                                                                   &__x);
                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                            v112,
                                                                            &v163);
                                                                          __x = 10976;
                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                          process_packet_func_mapa,
                                                                                          &__x)._M_node;
                                                                          v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                          if ( std::operator!=(&v160, &__y) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              &v164,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/handler/social_handler.cpp",
                                                                              "addPacketFuncToMap",
                                                                              76);
                                                                            common::milog::MiLogStream::operator()(
                                                                              &v164,
                                                                              off_1BD97720,
                                                                              10976LL);
                                                                            common::milog::MiLogStream::~MiLogStream(&v164);
                                                                            return -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                            v153.m128i_i64[0] = (__int64)SocialHandler::onServerActivityGetFriendGiftWishListReq;
                                                                            v153.m128i_i64[1] = 0LL;
                                                                            *(__m128i *)__f = _mm_load_si128(&v153);
                                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                              &v163,
                                                                              __f,
                                                                              (SocialHandler **)&__y,
                                                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                              v113,
                                                                              v114);
                                                                            __x = 10976;
                                                                            v115 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                     process_packet_func_mapa,
                                                                                     &__x);
                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                              v115,
                                                                              &v163);
                                                                            __x = 10975;
                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                            process_packet_func_mapa,
                                                                                            &__x)._M_node;
                                                                            v160._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                            if ( std::operator!=(&v160, &__y) )
                                                                            {
                                                                              common::milog::MiLogStream::create(
                                                                                &v164,
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/handler/social_handler.cpp",
                                                                                "addPacketFuncToMap",
                                                                                78);
                                                                              common::milog::MiLogStream::operator()(
                                                                                &v164,
                                                                                off_1BD97720,
                                                                                10975LL);
                                                                              common::milog::MiLogStream::~MiLogStream(&v164);
                                                                              return -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                              v154.m128i_i64[0] = (__int64)SocialHandler::onSyncPlayerIpRegionNotify;
                                                                              v154.m128i_i64[1] = 0LL;
                                                                              *(__m128i *)__f = _mm_load_si128(&v154);
                                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                &v163,
                                                                                __f,
                                                                                (SocialHandler **)&__y,
                                                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                v116,
                                                                                v117);
                                                                              __x = 10975;
                                                                              v118 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                       process_packet_func_mapa,
                                                                                       &__x);
                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                v118,
                                                                                &v163);
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
};

// Line 85: range 000000000E3212A8-000000000E322CCA
int32_t __cdecl SocialHandler::onServerGetPlayerFriendListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // eax
  common::milog::MiLogStream *v8; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v11; // rax
  uint32_t uid; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // ecx
  uint32_t v15; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // ecx
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned int *v26; // r15
  std::vector<unsigned int>::iterator v27; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // eax
  google::protobuf::RepeatedField<unsigned int> *v30; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t v32; // eax
  common::milog::MiLogStream *v33; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v35; // r15
  std::set<unsigned int>::iterator v36; // rax
  google::protobuf::RepeatedField<unsigned int> *v37; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // eax
  common::milog::MiLogStream *v40; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v42; // r15
  std::set<unsigned int>::iterator v43; // rax
  uint32_t v44; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // ecx
  uint32_t v47; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  uint32_t v49; // ecx
  unsigned int *v50; // r15
  std::vector<unsigned int>::iterator v51; // rax
  google::protobuf::RepeatedField<unsigned int> *v52; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  uint32_t v54; // eax
  common::milog::MiLogStream *v55; // r15
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v57; // r15
  std::set<unsigned int>::iterator v58; // rax
  google::protobuf::RepeatedField<unsigned int> *v59; // rax
  SocialService *v60; // r15
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-58Dh] BYREF
  unsigned int val; // [rsp+24h] [rbp-58Ch] BYREF
  int32_t retcode; // [rsp+28h] [rbp-588h]
  uint32_t begin_time; // [rsp+2Ch] [rbp-584h]
  uint32_t end_time; // [rsp+30h] [rbp-580h]
  uint32_t now; // [rsp+34h] [rbp-57Ch]
  std::vector<CancelAccountUidConfig>::iterator __for_begin; // [rsp+38h] [rbp-578h] BYREF
  std::vector<CancelAccountUidConfig>::iterator __for_end_0; // [rsp+40h] [rbp-570h] BYREF
  const proto::ServerGetPlayerFriendListReq *req; // [rsp+48h] [rbp-568h]
  proto::ServerGetPlayerFriendListRsp *rsp_0; // [rsp+50h] [rbp-560h]
  std::vector<CancelAccountUidConfig> *__for_range; // [rsp+58h] [rbp-558h]
  std::vector<TableLoginBlackUidConfig> *__for_range_0; // [rsp+60h] [rbp-550h]
  std::vector<CancelAccountUidConfig> *__for_range_1; // [rsp+68h] [rbp-548h]
  std::vector<CancelAccountUidConfig> *__for_range_2; // [rsp+70h] [rbp-540h]
  const CancelAccountUidConfig *cancel_uid_config_1; // [rsp+78h] [rbp-538h]
  std::tuple_element<0,std::pair<int,unsigned int> >::type *ret_0; // [rsp+80h] [rbp-530h]
  std::tuple_element<1,std::pair<int,unsigned int> >::type *num_0; // [rsp+88h] [rbp-528h]
  const CancelAccountUidConfig *cancel_uid_config_0; // [rsp+90h] [rbp-520h]
  const TableLoginBlackUidConfig *black_config; // [rsp+98h] [rbp-518h]
  const CancelAccountUidConfig *cancel_uid_config; // [rsp+A0h] [rbp-510h]
  std::tuple_element<0,std::pair<int,unsigned int> >::type *ret; // [rsp+A8h] [rbp-508h]
  std::tuple_element<1,std::pair<int,unsigned int> >::type *num; // [rsp+B0h] [rbp-500h]
  std::pair<int,unsigned int> __for_end; // [rsp+B8h] [rbp-4F8h] BYREF
  std::shared_ptr<proto::ServerGetPlayerFriendListRsp> p_rsp_ptr; // [rsp+C0h] [rbp-4F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+D0h] [rbp-4E0h] BYREF
  common::milog::MiLogStream v87; // [rsp+E0h] [rbp-4D0h] BYREF
  char v88[1200]; // [rsp+100h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 8 22 remove_friend_iter:115 64 8 15 remove_iter:164 96 16 10 req_ptr:86 128 16 10 rsp_ptr:"
                        "86 160 24 13 friend_vec:97 224 24 24 cancel_uid_config_vec:99 288 24 23 ask_friend_list_vec:123 "
                        "352 24 20 black_config_vec:131 416 24 29 cancel_ask_uid_config_vec:137 480 24 17 blacklist_vec:1"
                        "83 544 24 18 psn_friend_vec:193 608 24 21 psn_blacklist_vec:225 672 48 13 friend_set:91 752 48 2"
                        "5 cancel_friend_uid_set:105 832 48 21 erase_ask_uid_set:143 912 48 17 blacklist_set:177 992 48 1"
                        "8 psn_friend_set:187 1072 48 21 psn_blacklist_set:219";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862745] = -218959118;
  v4[536862747] = -219021312;
  v4[536862748] = 62194;
  v4[536862750] = -218959118;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862755] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetPlayerFriendListReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerGetPlayerFriendListReq const>(
         (const std::shared_ptr<const proto::ServerGetPlayerFriendListReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v87,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendListReq",
      86);
    common::milog::MiLogStream::operator()(&v87, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v87);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetPlayerFriendListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetPlayerFriendListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::ServerGetPlayerFriendListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::ServerGetPlayerFriendListRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 672));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    if ( RedisOpSocialData::getPlayerFriendSet(UserId, (std::set<unsigned int> *)(v2 + 672)) )
    {
      common::milog::MiLogStream::create(
        &v87,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetPlayerFriendListReq",
        94);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v87,
             (const char (*)[42])"[Social] getPlayerFriendList failed with ");
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v87);
    }
    else
    {
      std::allocator<unsigned int>::allocator(&__a);
      M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 672))._M_node;
      v11._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 672))._M_node;
      std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
        (std::vector<unsigned int> *const)(v2 + 160),
        v11,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node,
        &__a);
      std::allocator<unsigned int>::~allocator(&__a);
      std::vector<CancelAccountUidConfig>::vector((std::vector<CancelAccountUidConfig> *const)(v2 + 224));
      if ( MysqlOpMisc::selectCancelAccountUidConfigBatch(
             (const std::vector<unsigned int> *)(v2 + 160),
             (std::vector<CancelAccountUidConfig> *)(v2 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v87,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetPlayerFriendListReq",
          102);
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          &v87,
          (const char (*)[50])"[Social] selectCancelAccountUidConfigBatch failed");
        common::milog::MiLogStream::~MiLogStream(&v87);
      }
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 752));
      __for_range = (std::vector<CancelAccountUidConfig> *)(v2 + 224);
      __for_begin._M_current = std::vector<CancelAccountUidConfig>::begin((std::vector<CancelAccountUidConfig> *const)(v2 + 224))._M_current;
      __for_end_0._M_current = std::vector<CancelAccountUidConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>(
                &__for_begin,
                &__for_end_0) )
      {
        cancel_uid_config = __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(cancel_uid_config);
        }
        uid = cancel_uid_config->uid;
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        v14 = common::minet::Packet::getUserId(v13);
        __for_end = SocialHandler::internalDeleteFriend(this, v14, uid);
        ret = std::get<0ul,int,unsigned int>(&__for_end);
        num = std::get<1ul,int,unsigned int>(&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret);
        }
        if ( !*ret )
        {
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 752), &cancel_uid_config->uid);
          if ( *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(cancel_uid_config);
          }
          v15 = cancel_uid_config->uid;
          v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          v17 = common::minet::Packet::getUserId(v16);
          SocialHandler::notifyDeleteFriendToOther(this, v17, v15);
        }
        __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator++(&__for_begin);
      }
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 160))._M_current;
      v19._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}>(
                                                                                               v19,
                                                                                               (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                               (SocialHandler::onServerGetPlayerFriendListReq::<lambda(uint32_t)>)(v2 + 752));
      __for_begin._M_current = (CancelAccountUidConfig *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 160))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32));
      std::vector<unsigned int>::erase(
        (std::vector<unsigned int> *const)(v2 + 160),
        (std::vector<unsigned int>::const_iterator)__for_end_0._M_current,
        (std::vector<unsigned int>::const_iterator)__for_end);
      v20 = proto::ServerGetPlayerFriendListRsp::mutable_friend_uid_list(rsp_0);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v2 + 160),
        v20);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 288));
      v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v22 = common::minet::Packet::getUserId(v21);
      if ( RedisOpSocialData::getPlayerAskFriendList(v22, (std::vector<unsigned int> *)(v2 + 288)) )
      {
        common::milog::MiLogStream::create(
          &v87,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetPlayerFriendListReq",
          126);
        common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
          &v87,
          (const char (*)[72])"[Social] friend_brief_vec size should equals query_player_brief_uid_vec");
        common::milog::MiLogStream::~MiLogStream(&v87);
      }
      else
      {
        std::vector<TableLoginBlackUidConfig>::vector((std::vector<TableLoginBlackUidConfig> *const)(v2 + 352));
        if ( MysqlOpMisc::selectLoginBlackUidConfigBatch(
               (const std::vector<unsigned int> *)(v2 + 288),
               (std::vector<TableLoginBlackUidConfig> *)(v2 + 352)) )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetPlayerFriendListReq",
            134);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v87,
            (const char (*)[47])"[Social] selectLoginBlackUidConfigBatch failed");
          common::milog::MiLogStream::~MiLogStream(&v87);
        }
        std::vector<CancelAccountUidConfig>::vector((std::vector<CancelAccountUidConfig> *const)(v2 + 416));
        if ( MysqlOpMisc::selectCancelAccountUidConfigBatch(
               (const std::vector<unsigned int> *)(v2 + 288),
               (std::vector<CancelAccountUidConfig> *)(v2 + 416)) )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetPlayerFriendListReq",
            140);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v87,
            (const char (*)[50])"[Social] selectCancelAccountUidConfigBatch failed");
          common::milog::MiLogStream::~MiLogStream(&v87);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 832));
        __for_range_0 = (std::vector<TableLoginBlackUidConfig> *)(v2 + 352);
        __for_end_0._M_current = (CancelAccountUidConfig *)std::vector<TableLoginBlackUidConfig>::begin((std::vector<TableLoginBlackUidConfig> *const)(v2 + 352))._M_current;
        __for_end = (std::pair<int,unsigned int>)std::vector<TableLoginBlackUidConfig>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<TableLoginBlackUidConfig *,std::vector<TableLoginBlackUidConfig>>(
                  (const __gnu_cxx::__normal_iterator<TableLoginBlackUidConfig*,std::vector<TableLoginBlackUidConfig> > *)&__for_end_0,
                  (const __gnu_cxx::__normal_iterator<TableLoginBlackUidConfig*,std::vector<TableLoginBlackUidConfig> > *)&__for_end) )
        {
          black_config = __gnu_cxx::__normal_iterator<TableLoginBlackUidConfig *,std::vector<TableLoginBlackUidConfig>>::operator*((const __gnu_cxx::__normal_iterator<TableLoginBlackUidConfig*,std::vector<TableLoginBlackUidConfig> > *const)&__for_end_0);
          begin_time = common::tools::TimeUtils::getTimeByStr(&black_config->begin_time);
          end_time = common::tools::TimeUtils::getTimeByStr(&black_config->end_time);
          if ( !begin_time || !end_time )
          {
            common::milog::MiLogStream::create(
              &v87,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerGetPlayerFriendListReq",
              150);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v87,
                    (const char (*)[16])" invalid_time: ");
            v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &black_config->begin_time);
            v25 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v24, (const char (*)[3])", ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &black_config->end_time);
            common::milog::MiLogStream::~MiLogStream(&v87);
          }
          now = common::tools::TimeUtils::getNow();
          if ( begin_time <= now && now <= end_time )
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 832), &black_config->uid);
          __gnu_cxx::__normal_iterator<TableLoginBlackUidConfig *,std::vector<TableLoginBlackUidConfig>>::operator++((__gnu_cxx::__normal_iterator<TableLoginBlackUidConfig*,std::vector<TableLoginBlackUidConfig> > *const)&__for_end_0);
        }
        __for_range_1 = (std::vector<CancelAccountUidConfig> *)(v2 + 416);
        __for_end_0._M_current = std::vector<CancelAccountUidConfig>::begin((std::vector<CancelAccountUidConfig> *const)(v2 + 416))._M_current;
        __for_end = (std::pair<int,unsigned int>)std::vector<CancelAccountUidConfig>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>(
                  &__for_end_0,
                  (const __gnu_cxx::__normal_iterator<CancelAccountUidConfig*,std::vector<CancelAccountUidConfig> > *)&__for_end) )
        {
          cancel_uid_config_0 = __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator*(&__for_end_0);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 832), &cancel_uid_config_0->uid);
          __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator++(&__for_end_0);
        }
        if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 832)) )
        {
          v26 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          v27._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#2}>(
                                                                                                   v27,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v26,
                                                                                                   (SocialHandler::onServerGetPlayerFriendListReq::<lambda(uint32_t)>_0)(v2 + 832));
          __for_begin._M_current = (CancelAccountUidConfig *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64));
          std::vector<unsigned int>::erase(
            (std::vector<unsigned int> *const)(v2 + 288),
            (std::vector<unsigned int>::const_iterator)__for_end_0._M_current,
            (std::vector<unsigned int>::const_iterator)__for_end);
          v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          v29 = common::minet::Packet::getUserId(v28);
          if ( RedisOpSocialData::removeAskFriend(v29, (const std::set<unsigned int> *)(v2 + 832)) )
          {
            common::milog::MiLogStream::create(
              &v87,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerGetPlayerFriendListReq",
              171);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v87,
              (const char (*)[32])"[Social] removeAskFriend failed");
            common::milog::MiLogStream::~MiLogStream(&v87);
          }
        }
        v30 = proto::ServerGetPlayerFriendListRsp::mutable_ask_add_friend_uid_list(rsp_0);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          (const std::vector<unsigned int> *)(v2 + 288),
          v30);
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 912));
        v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        v32 = common::minet::Packet::getUserId(v31);
        if ( RedisOpSocialData::getPlayerBlacklistSet(v32, (std::set<unsigned int> *)(v2 + 912)) )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetPlayerFriendListReq",
            180);
          v33 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v87,
                  (const char (*)[44])"[Social] getPlayerBlacklistSet failed with ");
          v34 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v34);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
          common::milog::MiLogStream::~MiLogStream(&v87);
        }
        else
        {
          std::allocator<unsigned int>::allocator(&__a);
          v35 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 912))._M_node;
          v36._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 912))._M_node;
          std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
            (std::vector<unsigned int> *const)(v2 + 480),
            v36,
            (std::_Rb_tree_const_iterator<unsigned int>)v35,
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          v37 = proto::ServerGetPlayerFriendListRsp::mutable_blacklist_uid_list(rsp_0);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v2 + 480),
            v37);
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 992));
          v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          v39 = common::minet::Packet::getUserId(v38);
          if ( RedisOpSocialData::getPlayerPSNFriendSet(v39, (std::set<unsigned int> *)(v2 + 992)) )
          {
            common::milog::MiLogStream::create(
              &v87,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerGetPlayerFriendListReq",
              190);
            v40 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v87,
                    (const char (*)[44])"[Social] getPlayerPSNFriendSet failed with ");
            v41 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            val = common::minet::Packet::getUserId(v41);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
            common::milog::MiLogStream::~MiLogStream(&v87);
          }
          else
          {
            std::allocator<unsigned int>::allocator(&__a);
            v42 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 992))._M_node;
            v43._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 992))._M_node;
            std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
              (std::vector<unsigned int> *const)(v2 + 544),
              v43,
              (std::_Rb_tree_const_iterator<unsigned int>)v42,
              &__a);
            std::allocator<unsigned int>::~allocator(&__a);
            std::vector<CancelAccountUidConfig>::clear((std::vector<CancelAccountUidConfig> *const)(v2 + 224));
            if ( MysqlOpMisc::selectCancelAccountUidConfigBatch(
                   (const std::vector<unsigned int> *)(v2 + 544),
                   (std::vector<CancelAccountUidConfig> *)(v2 + 224)) )
            {
              common::milog::MiLogStream::create(
                &v87,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/social_handler.cpp",
                "onServerGetPlayerFriendListReq",
                198);
              common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v87,
                (const char (*)[50])"[Social] selectCancelAccountUidConfigBatch failed");
              common::milog::MiLogStream::~MiLogStream(&v87);
            }
            std::set<unsigned int>::clear((std::set<unsigned int> *const)(v2 + 752));
            __for_range_2 = (std::vector<CancelAccountUidConfig> *)(v2 + 224);
            __for_begin._M_current = std::vector<CancelAccountUidConfig>::begin((std::vector<CancelAccountUidConfig> *const)(v2 + 224))._M_current;
            __for_end_0._M_current = std::vector<CancelAccountUidConfig>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>(
                      &__for_begin,
                      &__for_end_0) )
            {
              cancel_uid_config_1 = __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)cancel_uid_config_1 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)cancel_uid_config_1 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(cancel_uid_config_1);
              }
              v44 = cancel_uid_config_1->uid;
              v45 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              v46 = common::minet::Packet::getUserId(v45);
              __for_end = SocialHandler::internalDeletePSNFriend(this, v46, v44);
              ret_0 = std::get<0ul,int,unsigned int>(&__for_end);
              num_0 = std::get<1ul,int,unsigned int>(&__for_end);
              if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(ret_0);
              }
              if ( !*ret_0 )
              {
                std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 752), &cancel_uid_config_1->uid);
                if ( *(_BYTE *)(((unsigned __int64)cancel_uid_config_1 >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)cancel_uid_config_1 >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(cancel_uid_config_1);
                }
                v47 = cancel_uid_config_1->uid;
                v48 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
                v49 = common::minet::Packet::getUserId(v48);
                SocialHandler::notifyDeleteFriendToOther(this, v49, v47);
              }
              __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator++(&__for_begin);
            }
            v50 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 544))._M_current;
            v51._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 544))._M_current;
            *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#3}>(
                                                                                                     v51,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v50,
                                                                                                     (SocialHandler::onServerGetPlayerFriendListReq::<lambda(uint32_t)>)(v2 + 752));
            __for_begin._M_current = (CancelAccountUidConfig *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 544))._M_current;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32));
            std::vector<unsigned int>::erase(
              (std::vector<unsigned int> *const)(v2 + 544),
              (std::vector<unsigned int>::const_iterator)__for_end_0._M_current,
              (std::vector<unsigned int>::const_iterator)__for_end);
            v52 = proto::ServerGetPlayerFriendListRsp::mutable_psn_friend_uid_list(rsp_0);
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              (const std::vector<unsigned int> *)(v2 + 544),
              v52);
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1072));
            v53 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            v54 = common::minet::Packet::getUserId(v53);
            if ( RedisOpSocialData::getPlayerPSNBlacklistSet(v54, (std::set<unsigned int> *)(v2 + 1072)) )
            {
              common::milog::MiLogStream::create(
                &v87,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/social_handler.cpp",
                "onServerGetPlayerFriendListReq",
                222);
              v55 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v87,
                      (const char (*)[44])"[Social] getPlayerBlacklistSet failed with ");
              v56 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              val = common::minet::Packet::getUserId(v56);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &val);
              common::milog::MiLogStream::~MiLogStream(&v87);
            }
            else
            {
              std::allocator<unsigned int>::allocator(&__a);
              v57 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1072))._M_node;
              v58._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1072))._M_node;
              std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
                (std::vector<unsigned int> *const)(v2 + 608),
                v58,
                (std::_Rb_tree_const_iterator<unsigned int>)v57,
                &__a);
              std::allocator<unsigned int>::~allocator(&__a);
              v59 = proto::ServerGetPlayerFriendListRsp::mutable_psn_blacklist_uid_list(rsp_0);
              common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                (const std::vector<unsigned int> *)(v2 + 608),
                v59);
              retcode = 0;
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 608));
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1072));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 544));
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 992));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 480));
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 912));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 832));
        std::vector<CancelAccountUidConfig>::~vector((std::vector<CancelAccountUidConfig> *const)(v2 + 416));
        std::vector<TableLoginBlackUidConfig>::~vector((std::vector<TableLoginBlackUidConfig> *const)(v2 + 352));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 752));
      std::vector<CancelAccountUidConfig>::~vector((std::vector<CancelAccountUidConfig> *const)(v2 + 224));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 672));
    proto::ServerGetPlayerFriendListRsp::set_retcode(rsp_0, retcode);
    v60 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerFriendListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetPlayerFriendListRsp> *)(v2 + 128));
    ServiceBase::sendRsp<proto::ServerGetPlayerFriendListRsp>(v60, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerFriendListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetPlayerFriendListRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerFriendListRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerGetPlayerFriendListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetPlayerFriendListReq> *const)(v2 + 96));
  if ( v88 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v88);
  }
  return v5;
};

// Line 115: range 000000000E320FD8-000000000E3210C7
bool __fastcall SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:115";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             *(std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 164: range 000000000E3210C8-000000000E3211B7
bool __fastcall SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#2}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:164";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#2}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             *(std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 211: range 000000000E3211B8-000000000E3212A7
bool __fastcall SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#3}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:211";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#3}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             *(std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 240: range 000000000E322CCC-000000000E3232DC
int32_t __cdecl SocialHandler::onServerGetPlayerFriendBriefReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PlayerFriendBrief; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::FriendBrief *v7; // rax
  common::milog::MiLogStream *v8; // r14
  SocialService *v9; // r14
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-1A8h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-1A4h]
  std::vector<proto::FriendBrief>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<proto::FriendBrief>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  const proto::ServerGetPlayerFriendBriefReq *req; // [rsp+30h] [rbp-190h]
  proto::ServerGetPlayerFriendBriefRsp *rsp_0; // [rsp+38h] [rbp-188h]
  std::vector<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-180h]
  const proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-178h]
  std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> p_rsp_ptr; // [rsp+50h] [rbp-170h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-150h] BYREF
  char v22[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 11 req_ptr:241 64 16 11 rsp_ptr:241 96 16 9 timer:244 128 24 36 query_player_friend_list"
                        "_uid_vec:248 192 24 20 friend_brief_vec:251";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetPlayerFriendBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerFriendBriefReq const>(
         (const std::shared_ptr<const proto::ServerGetPlayerFriendBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendBriefReq",
      241);
    common::milog::MiLogStream::operator()(&v21, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v21);
    PlayerFriendBrief = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetPlayerFriendBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetPlayerFriendBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetPlayerFriendBriefRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v6 = proto::ServerGetPlayerFriendBriefReq::friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 128));
    std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 192));
    if ( SocialHandler::fillFriendBriefData(
           this,
           (const std::vector<unsigned int> *)(v2 + 128),
           (std::vector<proto::FriendBrief> *)(v2 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetPlayerFriendBriefReq",
        254);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v21,
        (const char (*)[36])"[Social] fillFriendBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      __for_range = (std::vector<proto::FriendBrief> *)(v2 + 192);
      __for_begin._M_current = std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 192))._M_current;
      __for_end._M_current = std::vector<proto::FriendBrief>::end((std::vector<proto::FriendBrief> *const)(v2 + 192))._M_current;
      while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(&__for_begin, &__for_end) )
      {
        friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*(&__for_begin);
        v7 = proto::ServerGetPlayerFriendBriefRsp::add_friend_brief_list(rsp_0);
        proto::FriendBrief::operator=(v7, friend_brief);
        __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++(&__for_begin);
      }
      retcode = 0;
    }
    std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 192));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendBriefReq",
      267);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v21,
           (const char (*)[41])"onServerGetPlayerFriendBriefReq use us: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::ServerGetPlayerFriendBriefRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *)(v2 + 64));
    PlayerFriendBrief = ServiceBase::sendRsp<proto::ServerGetPlayerFriendBriefRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetPlayerFriendBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetPlayerFriendBriefReq> *const)(v2 + 32));
  result = PlayerFriendBrief;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 274: range 000000000E3232DE-000000000E3238EE
int32_t __cdecl SocialHandler::onServerGetAskFriendBriefReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t AskFriendBrief; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::FriendBrief *v7; // rax
  common::milog::MiLogStream *v8; // r14
  SocialService *v9; // r14
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-1A8h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-1A4h]
  std::vector<proto::FriendBrief>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<proto::FriendBrief>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  const proto::ServerGetAskFriendBriefReq *req; // [rsp+30h] [rbp-190h]
  proto::ServerGetAskFriendBriefRsp *rsp_0; // [rsp+38h] [rbp-188h]
  std::vector<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-180h]
  const proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-178h]
  std::shared_ptr<proto::ServerGetAskFriendBriefRsp> p_rsp_ptr; // [rsp+50h] [rbp-170h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-150h] BYREF
  char v22[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 11 req_ptr:275 64 16 11 rsp_ptr:275 96 16 9 timer:278 128 24 35 query_player_ask_add_fri"
                        "ned_vec:281 192 24 28 ask_add_friend_brief_vec:284";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetAskFriendBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetAskFriendBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetAskFriendBriefReq const>(
         (const std::shared_ptr<const proto::ServerGetAskFriendBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetAskFriendBriefReq",
      275);
    common::milog::MiLogStream::operator()(&v21, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v21);
    AskFriendBrief = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetAskFriendBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetAskFriendBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetAskFriendBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetAskFriendBriefRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v6 = proto::ServerGetAskFriendBriefReq::ask_add_friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 128));
    std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 192));
    if ( SocialHandler::fillFriendBriefData(
           this,
           (const std::vector<unsigned int> *)(v2 + 128),
           (std::vector<proto::FriendBrief> *)(v2 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetAskFriendBriefReq",
        287);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v21,
        (const char (*)[36])"[Social] fillFriendBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      __for_range = (std::vector<proto::FriendBrief> *)(v2 + 192);
      __for_begin._M_current = std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 192))._M_current;
      __for_end._M_current = std::vector<proto::FriendBrief>::end((std::vector<proto::FriendBrief> *const)(v2 + 192))._M_current;
      while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(&__for_begin, &__for_end) )
      {
        friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*(&__for_begin);
        v7 = proto::ServerGetAskFriendBriefRsp::add_ask_add_friend_brief_list(rsp_0);
        proto::FriendBrief::operator=(v7, friend_brief);
        __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++(&__for_begin);
      }
      retcode = 0;
    }
    std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 192));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onServerGetAskFriendBriefReq",
      299);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v21,
           (const char (*)[38])"onServerGetAskFriendBriefReq use us: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::ServerGetAskFriendBriefRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetAskFriendBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *)(v2 + 64));
    AskFriendBrief = ServiceBase::sendRsp<proto::ServerGetAskFriendBriefRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetAskFriendBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    std::shared_ptr<proto::ServerGetAskFriendBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetAskFriendBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetAskFriendBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetAskFriendBriefReq> *const)(v2 + 32));
  result = AskFriendBrief;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 306: range 000000000E3238F0-000000000E32479C
int32_t __cdecl SocialHandler::onServerGetSocialDetailReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const proto::PlayerBasicBriefData *v9; // rax
  const std::string *v10; // rax
  const proto::PlayerBasicBriefData *v11; // rax
  google::protobuf::uint32 v12; // eax
  const proto::PlayerBasicBriefData *v13; // rax
  google::protobuf::uint32 v14; // eax
  const proto::PlayerBasicBriefData *v15; // rax
  google::protobuf::uint32 v16; // eax
  const proto::PlayerSocialBriefData *v17; // rax
  const std::string *v18; // rax
  const proto::PlayerSocialBriefData *v19; // rax
  const proto::Birthday *v20; // rax
  google::protobuf::uint32 v21; // eax
  const proto::PlayerSocialBriefData *v22; // rax
  const proto::Birthday *v23; // rax
  google::protobuf::uint32 v24; // eax
  const proto::PlayerBasicBriefData *v25; // rax
  uint32_t v26; // eax
  const proto::PlayerBasicBriefData *v27; // rax
  const std::string *v28; // rax
  const proto::PlayerBasicBriefData *v29; // rax
  google::protobuf::uint32 v30; // eax
  const proto::PlayerSocialBriefData *v31; // rax
  google::protobuf::uint32 v32; // eax
  common::milog::MiLogStream *v33; // rax
  const proto::PlayerMpBriefData *v34; // rax
  bool is_mp_avaliable; // al
  const proto::PlayerSocialBriefData *v36; // rax
  google::protobuf::uint32 v37; // eax
  const proto::PlayerSocialBriefData *v38; // rax
  google::protobuf::uint32 v39; // eax
  const proto::PlayerSocialBriefData *v40; // rax
  google::protobuf::uint32 v41; // eax
  const proto::PlayerSocialBriefData *v42; // rax
  bool is_show_avatar; // al
  const proto::PlayerSocialBriefData *v44; // rax
  const proto::PlayerHomeBriefData *v45; // rax
  proto::FriendEnterHomeOption v46; // eax
  const proto::PlayerSocialBriefData *v47; // rax
  const proto::PlayerSocialBriefData *v48; // rax
  const std::string *v49; // rax
  SocialService *v50; // r14
  common::milog::MiLogStream *v51; // r14
  int32_t result; // eax
  bool is_canceled; // [rsp+2Bh] [rbp-2B5h]
  google::protobuf::int32 retcode; // [rsp+2Ch] [rbp-2B4h]
  std::vector<CancelAccountUidConfig>::iterator __for_begin; // [rsp+30h] [rbp-2B0h] BYREF
  std::vector<CancelAccountUidConfig>::iterator __for_end; // [rsp+38h] [rbp-2A8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-2A0h]
  const proto::ServerGetSocialDetailReq *req; // [rsp+48h] [rbp-298h]
  proto::ServerGetSocialDetailRsp *rsp_0; // [rsp+50h] [rbp-290h]
  std::vector<CancelAccountUidConfig> *__for_range; // [rsp+58h] [rbp-288h]
  const CancelAccountUidConfig *cancel_uid_config; // [rsp+60h] [rbp-280h]
  proto::SocialDetail *social_detail; // [rsp+68h] [rbp-278h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+70h] [rbp-270h]
  proto::Birthday *birthday; // [rsp+78h] [rbp-268h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range_0; // [rsp+80h] [rbp-260h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+88h] [rbp-258h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+90h] [rbp-250h]
  const unsigned int *id; // [rsp+98h] [rbp-248h]
  const proto::SocialShowAvatarInfo *avatar_info; // [rsp+A0h] [rbp-240h]
  proto::SocialShowAvatarInfo *detail_avatar_info; // [rsp+A8h] [rbp-238h]
  std::shared_ptr<proto::ServerGetSocialDetailRsp> p_rsp_ptr; // [rsp+B0h] [rbp-230h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+C0h] [rbp-220h] BYREF
  std::vector<unsigned int> uid_vec; // [rsp+D0h] [rbp-210h] BYREF
  common::milog::MiLogStream v74; // [rsp+F0h] [rbp-1F0h] BYREF
  char v75[464]; // [rsp+110h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 12 is_exist:336 48 4 14 target_uid:310 64 4 17 online_status:370 80 4 9 param:371 96 16 "
                        "11 req_ptr:307 128 16 11 rsp_ptr:307 160 16 9 timer:309 192 24 25 cancel_uid_config_vec:315 256 "
                        "32 18 show_online_id:361 320 56 21 player_brief_data:337";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetSocialDetailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetSocialDetailReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerGetSocialDetailReq const>(
         (const std::shared_ptr<const proto::ServerGetSocialDetailReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetSocialDetailReq",
      307);
    common::milog::MiLogStream::operator()(&v74, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v74);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetSocialDetailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetSocialDetailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::ServerGetSocialDetailRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::ServerGetSocialDetailRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    *(_DWORD *)(v2 + 48) = proto::ServerGetSocialDetailReq::target_uid(req);
    retcode = -1;
    std::vector<CancelAccountUidConfig>::vector((std::vector<CancelAccountUidConfig> *const)(v2 + 192));
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 48);
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 32));
    std::vector<unsigned int>::vector(
      &uid_vec,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, v2 + 80),
      (const std::vector<unsigned int>::allocator_type *)(v2 + 32));
    v6 = MysqlOpMisc::selectCancelAccountUidConfigBatch(&uid_vec, (std::vector<CancelAccountUidConfig> *)(v2 + 192)) != 0;
    std::vector<unsigned int>::~vector(&uid_vec);
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 32));
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetSocialDetailReq",
        318);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v74,
        (const char (*)[50])"[Social] selectCancelAccountUidConfigBatch failed");
      common::milog::MiLogStream::~MiLogStream(&v74);
    }
    is_canceled = 0;
    __for_range = (std::vector<CancelAccountUidConfig> *)(v2 + 192);
    __for_begin._M_current = std::vector<CancelAccountUidConfig>::begin((std::vector<CancelAccountUidConfig> *const)(v2 + 192))._M_current;
    __for_end._M_current = std::vector<CancelAccountUidConfig>::end((std::vector<CancelAccountUidConfig> *const)(v2 + 192))._M_current;
    while ( __gnu_cxx::operator!=<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>(
              &__for_begin,
              &__for_end) )
    {
      cancel_uid_config = __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)cancel_uid_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(cancel_uid_config);
      }
      if ( cancel_uid_config->uid == *(_DWORD *)(v2 + 48) )
      {
        is_canceled = 1;
        break;
      }
      __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator++(&__for_begin);
    }
    if ( is_canceled )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onServerGetSocialDetailReq",
        331);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v74, (const char (*)[6])" uid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])off_1BD9E080);
      common::milog::MiLogStream::~MiLogStream(&v74);
      retcode = 7002;
    }
    else
    {
      proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 320));
      if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                           *(_DWORD *)(v2 + 48),
                           (proto::PlayerBriefDataRedisData *)(v2 + 320),
                           v2 + 32) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetSocialDetailReq",
          340);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v74,
          (const char (*)[35])"[Social] getPlayerBriefData failed");
        common::milog::MiLogStream::~MiLogStream(&v74);
      }
      else if ( *(_BYTE *)(v2 + 32) != 1 )
      {
        retcode = 7002;
      }
      else
      {
        social_detail = proto::ServerGetSocialDetailRsp::mutable_social_detail(rsp_0);
        proto::SocialDetail::set_uid(social_detail, *(_DWORD *)(v2 + 48));
        v9 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v10 = proto::PlayerBasicBriefData::nickname[abi:cxx11](v9);
        proto::SocialDetail::set_nickname(social_detail, v10);
        v11 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v12 = proto::PlayerBasicBriefData::level(v11);
        proto::SocialDetail::set_level(social_detail, v12);
        profile_picture_proto = proto::SocialDetail::mutable_profile_picture(social_detail);
        v13 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v14 = proto::PlayerBasicBriefData::head_image_avatar_id(v13);
        proto::ProfilePicture::set_avatar_id(profile_picture_proto, v14);
        v15 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v16 = proto::PlayerBasicBriefData::profile_picture_costume_id(v15);
        proto::ProfilePicture::set_costume_id(profile_picture_proto, v16);
        v17 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v18 = proto::PlayerSocialBriefData::signature[abi:cxx11](v17);
        proto::SocialDetail::set_signature(social_detail, v18);
        birthday = proto::SocialDetail::mutable_birthday(social_detail);
        v19 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v20 = proto::PlayerSocialBriefData::birthday(v19);
        v21 = proto::Birthday::month(v20);
        proto::Birthday::set_month(birthday, v21);
        v22 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v23 = proto::PlayerSocialBriefData::birthday(v22);
        v24 = proto::Birthday::day(v23);
        proto::Birthday::set_day(birthday, v24);
        std::string::basic_string(v2 + 256);
        v25 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v26 = proto::PlayerBasicBriefData::platform_type(v25);
        if ( TxtConfigMgr::isPsnPlatform(v26) )
        {
          v27 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v28 = proto::PlayerBasicBriefData::online_id[abi:cxx11](v27);
          std::string::operator=(v2 + 256, v28);
        }
        proto::SocialDetail::set_online_id(social_detail, (const std::string *)(v2 + 256));
        v29 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v30 = proto::PlayerBasicBriefData::world_level(v29);
        proto::SocialDetail::set_world_level(social_detail, v30);
        v31 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
        v32 = proto::PlayerSocialBriefData::name_card_id(v31);
        proto::SocialDetail::set_name_card_id(social_detail, v32);
        if ( SocialHandler::getPlayerOnlineStatus(
               this,
               *(_DWORD *)(v2 + 48),
               (const proto::PlayerBriefDataRedisData *)(v2 + 320),
               (proto::PlayerStatusType *)(v2 + 64),
               (uint32_t *)(v2 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/social_handler.cpp",
            "onServerGetSocialDetailReq",
            374);
          v33 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v74,
                  (const char (*)[45])"[Social] getPlayerOnlineStatus failed, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v74);
        }
        else
        {
          if ( *(_DWORD *)(v2 + 64) == 1 )
            proto::SocialDetail::set_online_state(social_detail, FRIEND_ONLINE);
          else
            proto::SocialDetail::set_online_state(social_detail, FREIEND_DISCONNECT);
          proto::SocialDetail::set_param(social_detail, *(_DWORD *)(v2 + 80));
          v34 = proto::PlayerBriefDataRedisData::mp_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          is_mp_avaliable = proto::PlayerMpBriefData::is_mp_avaliable(v34);
          proto::SocialDetail::set_is_mp_mode_available(social_detail, is_mp_avaliable);
          v36 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v37 = proto::PlayerSocialBriefData::finish_achievement_num(v36);
          proto::SocialDetail::set_finish_achievement_num(social_detail, v37);
          v38 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v39 = proto::PlayerSocialBriefData::tower_floor_index(v38);
          proto::SocialDetail::set_tower_floor_index(social_detail, v39);
          v40 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v41 = proto::PlayerSocialBriefData::tower_level_index(v40);
          proto::SocialDetail::set_tower_level_index(social_detail, v41);
          v42 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          is_show_avatar = proto::PlayerSocialBriefData::is_show_avatar(v42);
          proto::SocialDetail::set_is_show_avatar(social_detail, is_show_avatar);
          v44 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          __for_range_0 = proto::PlayerSocialBriefData::show_avatar_info_list(v44);
          __for_begin._M_current = (CancelAccountUidConfig *)google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range_0).it_;
          __for_end._M_current = (CancelAccountUidConfig *)google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range_0).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin,
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo>::iterator *)&__for_end) )
          {
            avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin);
            detail_avatar_info = proto::SocialDetail::add_show_avatar_info_list(social_detail);
            proto::SocialShowAvatarInfo::CopyFrom(detail_avatar_info, avatar_info);
            google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin);
          }
          v45 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v46 = proto::PlayerHomeBriefData::friend_enter_home_option(v45);
          proto::SocialDetail::set_friend_enter_home_option(social_detail, v46);
          v47 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          __for_range_1 = proto::PlayerSocialBriefData::show_name_card_id_list(v47);
          __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
          __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
          while ( __for_begin_0 != __for_end_0 )
          {
            id = __for_begin_0;
            if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(__for_begin_0);
            }
            proto::SocialDetail::add_show_name_card_id_list(social_detail, *id);
            ++__for_begin_0;
          }
          v48 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 320));
          v49 = proto::PlayerSocialBriefData::ip_code[abi:cxx11](v48);
          proto::SocialDetail::set_ip_code(social_detail, v49);
          retcode = 0;
        }
        std::string::~string((void *)(v2 + 256));
      }
      proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 320));
    }
    std::vector<CancelAccountUidConfig>::~vector((std::vector<CancelAccountUidConfig> *const)(v2 + 192));
    proto::ServerGetSocialDetailRsp::set_retcode(rsp_0, retcode);
    v50 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetSocialDetailRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetSocialDetailRsp> *)(v2 + 128));
    ServiceBase::sendRsp<proto::ServerGetSocialDetailRsp>(v50, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetSocialDetailRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerGetSocialDetailReq",
      410);
    v51 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v74,
            (const char (*)[36])"onServerGetSocialDetailReq use us: ");
    *(_DWORD *)(v2 + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v74);
    v5 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    std::shared_ptr<proto::ServerGetSocialDetailRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetSocialDetailRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerGetSocialDetailReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetSocialDetailReq> *const)(v2 + 96));
  result = v5;
  if ( v75 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 415: range 000000000E32479E-000000000E325000
int32_t __cdecl SocialHandler::onServerAskAddFriendReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  uint32_t Now; // eax
  SocialService *v13; // r14
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-168h]
  uint32_t source_uid; // [rsp+1Ch] [rbp-164h]
  std::__shared_ptr_access<const proto::ServerAskAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-160h]
  std::__shared_ptr_access<proto::ServerAskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-158h]
  std::shared_ptr<proto::ServerAskAddFriendRsp> p_rsp_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<common::minet::Packet> v21; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-130h] BYREF
  char v23[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 19 is_in_blacklist:439 48 1 12 is_asked:482 64 4 14 target_uid:419 80 4 9 count:468 96 16"
                        " 11 req_ptr:416 128 16 11 rsp_ptr:416 160 16 9 timer:418 192 16 12 tran_ptr:424";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAskAddFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAskAddFriendReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerAskAddFriendReq const>(
         (const std::shared_ptr<const proto::ServerAskAddFriendReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAskAddFriendReq",
      416);
    common::milog::MiLogStream::operator()(&v22, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerAskAddFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAskAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::ServerAskAddFriendRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerAskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::ServerAskAddFriendRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    *(_DWORD *)(v2 + 64) = proto::ServerAskAddFriendReq::target_uid(req);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    source_uid = common::minet::Packet::getUserId(v6);
    proto::ServerAskAddFriendRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 64));
    retcode = -1;
    *(_QWORD *)(v2 + 192) = 0LL;
    *(_QWORD *)(v2 + 200) = 0LL;
    if ( source_uid == *(_DWORD *)(v2 + 64) )
    {
      retcode = 7010;
    }
    else if ( !SocialHandler::isSatisfiedPSConstraint(this, source_uid, *(_DWORD *)(v2 + 64)) )
    {
      retcode = 7021;
    }
    else
    {
      *(_BYTE *)(v2 + 32) = 0;
      if ( (unsigned int)RedisOpSocialData::isInPlayerGameBlacklist(*(_DWORD *)(v2 + 64), source_uid, (bool *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerAskAddFriendReq",
          442);
        v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v22,
               (const char (*)[40])"[Social] getPlayerBlacklistSet failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else if ( *(_BYTE *)(v2 + 32) )
      {
        retcode = 7020;
      }
      else
      {
        *(_BYTE *)(v2 + 32) = 0;
        if ( (unsigned int)RedisOpSocialData::isInPlayerPSNBlacklist(
                             *(_DWORD *)(v2 + 64),
                             source_uid,
                             (bool *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerAskAddFriendReq",
            456);
          v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v22,
                 (const char (*)[43])"[Social] getPlayerPSNBlacklistSet failed: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else if ( *(_BYTE *)(v2 + 32) )
        {
          retcode = 7039;
        }
        else
        {
          *(_DWORD *)(v2 + 80) = 0;
          if ( RedisOpSocialData::getAskAddFriendListCountWithTran(
                 *(_DWORD *)(v2 + 64),
                 (uint32_t *)(v2 + 80),
                 (common::midb::GetAndSetTranPtr *)(v2 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerAskAddFriendReq",
              471);
            v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                   &v22,
                   (const char (*)[51])"[Social] getAskAddFriendListCountWithTran failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
          else
          {
            Config::getConfig();
            v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
            v11 = ConstValueExcelConfigMgr::getAskFriendLimitNum(&v10->design_config_.txt_config_mgr.const_value_config_mgr) <= *(_DWORD *)(v2 + 80);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
            if ( v11 )
            {
              retcode = 7004;
            }
            else
            {
              *(_BYTE *)(v2 + 48) = 0;
              Now = common::tools::TimeUtils::getNow();
              if ( RedisOpSocialData::addAskAddFriendListWithTran(
                     (const common::midb::GetAndSetTranPtr *)(v2 + 192),
                     *(_DWORD *)(v2 + 64),
                     source_uid,
                     Now,
                     (bool *)(v2 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v22,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/social_handler.cpp",
                  "onServerAskAddFriendReq",
                  485);
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v22,
                  (const char (*)[44])"[Social] addAskAddFriendListWithTran failed");
                common::milog::MiLogStream::~MiLogStream(&v22);
              }
              else if ( *(_BYTE *)(v2 + 48) )
              {
                retcode = 7003;
              }
              else
              {
                retcode = 0;
              }
            }
          }
        }
      }
    }
    proto::ServerAskAddFriendRsp::set_retcode(rsp_0, retcode);
    v13 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v21, p_packet_ptr);
    std::shared_ptr<proto::ServerAskAddFriendRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerAskAddFriendRsp> *)(v2 + 128));
    ServiceBase::sendRsp<proto::ServerAskAddFriendRsp>(v13, &p_rsp_ptr, &v21);
    std::shared_ptr<proto::ServerAskAddFriendRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v21);
    if ( !retcode )
      SocialHandler::notifyAskAddFriendToOther(this, source_uid, *(_DWORD *)(v2 + 64));
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerAskAddFriendReq",
      504);
    v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v22,
            (const char (*)[33])"onServerAskAddFriendReq use us: ");
    *(_DWORD *)(v2 + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = 0;
    std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 192));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    std::shared_ptr<proto::ServerAskAddFriendRsp>::~shared_ptr((std::shared_ptr<proto::ServerAskAddFriendRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerAskAddFriendReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAskAddFriendReq> *const)(v2 + 96));
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 509: range 000000000E325002-000000000E325D5B
int32_t __cdecl SocialHandler::onServerDealAddFriendReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::DealAddFriendResultType v7; // edx
  google::protobuf::uint32 v8; // edx
  common::milog::MiLogStream *v9; // rax
  proto::DealAddFriendResultType v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  proto::FriendBrief *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  SocialService *v23; // r14
  common::milog::MiLogStream *v25; // r14
  int32_t result; // eax
  bool can_remove_ask_friend; // [rsp+17h] [rbp-1D9h]
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-1D8h]
  uint32_t friend_limit_num; // [rsp+1Ch] [rbp-1D4h]
  std::__shared_ptr_access<const proto::ServerDealAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-1D0h]
  std::__shared_ptr_access<proto::ServerDealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-1C8h]
  std::shared_ptr<common::minet::Packet> v32; // [rsp+30h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-1B0h] BYREF
  char v34[400]; // [rsp+60h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 12 is_asked:523 64 1 19 is_in_blacklist:549 80 1 15 is_repeated:613 96 4 13 source_id:51"
                        "2 112 4 13 target_id:513 128 4 28 target_friend_list_count:584 144 4 28 source_friend_list_count"
                        ":600 160 16 11 req_ptr:510 192 16 11 rsp_ptr:510 224 16 9 timer:511 256 16 16 ask_tran_ptr:516 2"
                        "88 16 26 source_friend_tran_ptr:548 320 16 26 target_friend_tran_ptr:548";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDealAddFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDealAddFriendReq>((common::minet::Packet *const)(v2 + 160));
  if ( std::operator==<proto::ServerDealAddFriendReq const>(
         (const std::shared_ptr<const proto::ServerDealAddFriendReq> *)(v2 + 160),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDealAddFriendReq",
      510);
    common::milog::MiLogStream::operator()(&v33, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerDealAddFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDealAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    common::tools::perf::make_shared<proto::ServerDealAddFriendRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerDealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerDealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    proto::ServerDealAddFriendRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 224));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 96) = common::minet::Packet::getUserId(v6);
    *(_DWORD *)(v2 + 112) = proto::ServerDealAddFriendReq::target_uid(req);
    retcode = -1;
    *(_QWORD *)(v2 + 256) = 0LL;
    *(_QWORD *)(v2 + 264) = 0LL;
    can_remove_ask_friend = 0;
    v7 = proto::ServerDealAddFriendReq::deal_add_friend_result(req);
    proto::ServerDealAddFriendRsp::set_deal_add_friend_result(rsp_0, v7);
    v8 = proto::ServerDealAddFriendReq::target_uid(req);
    proto::ServerDealAddFriendRsp::set_target_uid(rsp_0, v8);
    if ( RedisOpSocialData::isPlayerAskAddFriendWithTran(
           *(_DWORD *)(v2 + 96),
           *(_DWORD *)(v2 + 112),
           (bool *)(v2 + 48),
           (common::midb::GetAndSetTranPtr *)(v2 + 256)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerDealAddFriendReq",
        526);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v33,
             (const char (*)[47])"[Social] isPlayerAskAddFriendWithTran failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else if ( *(_BYTE *)(v2 + 48) != 1 )
    {
      retcode = 7006;
    }
    else
    {
      v10 = proto::ServerDealAddFriendReq::deal_add_friend_result(req);
      if ( v10 )
      {
        if ( v10 == DEAL_ADD_FRIEND_ACCEPT )
        {
          *(_QWORD *)(v2 + 288) = 0LL;
          *(_QWORD *)(v2 + 296) = 0LL;
          *(_QWORD *)(v2 + 320) = 0LL;
          *(_QWORD *)(v2 + 328) = 0LL;
          *(_BYTE *)(v2 + 64) = 0;
          if ( (unsigned int)RedisOpSocialData::isInPlayerGameBlacklist(
                               *(_DWORD *)(v2 + 112),
                               *(_DWORD *)(v2 + 96),
                               (bool *)(v2 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerDealAddFriendReq",
              552);
            v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v33,
                    (const char (*)[40])"[Social] getPlayerBlacklistSet failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)(v2 + 112));
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else if ( *(_BYTE *)(v2 + 64) )
          {
            retcode = 7020;
          }
          else
          {
            *(_BYTE *)(v2 + 64) = 0;
            if ( (unsigned int)RedisOpSocialData::isInPlayerPSNBlacklist(
                                 *(_DWORD *)(v2 + 112),
                                 *(_DWORD *)(v2 + 96),
                                 (bool *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/social_handler.cpp",
                "onServerDealAddFriendReq",
                566);
              v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v33,
                      (const char (*)[43])"[Social] getPlayerPSNBlacklistSet failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 112));
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
            else if ( *(_BYTE *)(v2 + 64) )
            {
              retcode = 7039;
            }
            else if ( !SocialHandler::isSatisfiedPSConstraint(this, *(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 112)) )
            {
              retcode = 7021;
            }
            else if ( RedisOpSocialData::getFriendCountWithTran(
                        *(_DWORD *)(v2 + 112),
                        (uint32_t *)(v2 + 128),
                        (common::midb::GetAndSetTranPtr *)(v2 + 320)) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/social_handler.cpp",
                "onServerDealAddFriendReq",
                588);
              v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v33,
                      (const char (*)[41])"[Social] getFriendCountWithTran failed: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 112));
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
            else
            {
              Config::getConfig();
              v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
              friend_limit_num = ConstValueExcelConfigMgr::getFriendLimitNum(&v14->design_config_.txt_config_mgr.const_value_config_mgr);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
              if ( friend_limit_num > *(_DWORD *)(v2 + 128) )
              {
                if ( RedisOpSocialData::getFriendCountWithTran(
                       *(_DWORD *)(v2 + 96),
                       (uint32_t *)(v2 + 144),
                       (common::midb::GetAndSetTranPtr *)(v2 + 288)) )
                {
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/social_handler.cpp",
                    "onServerDealAddFriendReq",
                    603);
                  v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                          &v33,
                          (const char (*)[41])"[Social] getFriendCountWithTran failed: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v33);
                }
                else if ( friend_limit_num > *(_DWORD *)(v2 + 144) )
                {
                  if ( (unsigned int)RedisOpSocialData::addFriendWithTran(
                                       (const common::midb::GetAndSetTranPtr *)(v2 + 288),
                                       *(_DWORD *)(v2 + 96),
                                       *(_DWORD *)(v2 + 112),
                                       (bool *)(v2 + 80)) )
                  {
                    common::milog::MiLogStream::create(
                      &v33,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/social_handler.cpp",
                      "onServerDealAddFriendReq",
                      616);
                    v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            &v33,
                            (const char (*)[36])"[Social] addFriendWithTran failed: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 96));
                    common::milog::MiLogStream::~MiLogStream(&v33);
                  }
                  else if ( (unsigned int)RedisOpSocialData::addFriendWithTran(
                                            (const common::midb::GetAndSetTranPtr *)(v2 + 320),
                                            *(_DWORD *)(v2 + 112),
                                            *(_DWORD *)(v2 + 96),
                                            (bool *)(v2 + 80)) )
                  {
                    common::milog::MiLogStream::create(
                      &v33,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/social_handler.cpp",
                      "onServerDealAddFriendReq",
                      623);
                    v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            &v33,
                            (const char (*)[36])"[Social] addFriendWithTran failed: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v2 + 112));
                    common::milog::MiLogStream::~MiLogStream(&v33);
                  }
                  else
                  {
                    v18 = proto::ServerDealAddFriendRsp::mutable_target_friend_brief(rsp_0);
                    if ( SocialHandler::fillFriendBriefData(this, *(_DWORD *)(v2 + 112), v18, 0) )
                    {
                      common::milog::MiLogStream::create(
                        &v33,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/social_handler.cpp",
                        "onServerDealAddFriendReq",
                        629);
                      v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                              &v33,
                              (const char (*)[38])"fillFriendBriefData fail, target_uid:");
                      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v19,
                              (const unsigned int *)(v2 + 112));
                      v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v20,
                              (const char (*)[13])" source_uid:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        (const unsigned int *)(v2 + 96));
                      common::milog::MiLogStream::~MiLogStream(&v33);
                    }
                    proto::ServerDealAddFriendRsp::set_target_friend_num(rsp_0, *(_DWORD *)(v2 + 128) + 1);
                    retcode = 0;
                    can_remove_ask_friend = 1;
                  }
                }
                else
                {
                  retcode = 7001;
                }
              }
              else
              {
                retcode = 7007;
              }
            }
          }
          std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 320));
          std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 288));
        }
      }
      else
      {
        can_remove_ask_friend = 1;
        retcode = 0;
      }
      if ( can_remove_ask_friend
        && RedisOpSocialData::removeAskFriendWithTran(
             (const common::midb::GetAndSetTranPtr *)(v2 + 256),
             *(_DWORD *)(v2 + 96),
             *(_DWORD *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerDealAddFriendReq",
          646);
        v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v33,
                (const char (*)[42])"[Social] removeAskFriendWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
    }
    proto::ServerDealAddFriendRsp::set_retcode(rsp_0, retcode);
    v23 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v32, p_packet_ptr);
    std::shared_ptr<proto::ServerDealAddFriendRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerDealAddFriendRsp> *const)(v2 + 320),
      (const std::shared_ptr<proto::ServerDealAddFriendRsp> *)(v2 + 192));
    ServiceBase::sendRsp<proto::ServerDealAddFriendRsp>(
      v23,
      (std::shared_ptr<proto::ServerDealAddFriendRsp> *)(v2 + 320),
      &v32);
    std::shared_ptr<proto::ServerDealAddFriendRsp>::~shared_ptr((std::shared_ptr<proto::ServerDealAddFriendRsp> *const)(v2 + 320));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v32);
    if ( !retcode && proto::ServerDealAddFriendReq::deal_add_friend_result(req) == DEAL_ADD_FRIEND_ACCEPT )
      SocialHandler::notifyAddFriendToOther(this, *(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 112), 0);
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerDealAddFriendReq",
      660);
    v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v33,
            (const char (*)[34])"onServerDealAddFriendReq use us: ");
    *(_DWORD *)(v2 + 144) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 224));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v2 + 144));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = 0;
    std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 256));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 224));
    std::shared_ptr<proto::ServerDealAddFriendRsp>::~shared_ptr((std::shared_ptr<proto::ServerDealAddFriendRsp> *const)(v2 + 192));
  }
  std::shared_ptr<proto::ServerDealAddFriendReq const>::~shared_ptr((std::shared_ptr<const proto::ServerDealAddFriendReq> *const)(v2 + 160));
  result = v5;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 665: range 000000000E325D5C-000000000E3261C9
int32_t __cdecl SocialHandler::onServerDeleteFriendReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialService *v7; // r14
  int32_t result; // eax
  uint32_t source_id; // [rsp+10h] [rbp-100h]
  uint32_t target_id; // [rsp+14h] [rbp-FCh]
  std::__shared_ptr_access<const proto::ServerDeleteFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-F8h]
  std::__shared_ptr_access<proto::ServerDeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-F0h]
  google::protobuf::int32 *retcode; // [rsp+28h] [rbp-E8h]
  google::protobuf::uint32 *target_friend_num; // [rsp+30h] [rbp-E0h]
  std::pair<int,unsigned int> __in; // [rsp+38h] [rbp-D8h] BYREF
  std::shared_ptr<proto::ServerDeleteFriendRsp> p_rsp_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:666 64 16 11 rsp_ptr:666";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDeleteFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDeleteFriendReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerDeleteFriendReq const>(
         (const std::shared_ptr<const proto::ServerDeleteFriendReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDeleteFriendReq",
      666);
    common::milog::MiLogStream::operator()(&v18, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerDeleteFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDeleteFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerDeleteFriendRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerDeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerDeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerDeleteFriendRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    source_id = common::minet::Packet::getUserId(v6);
    target_id = proto::ServerDeleteFriendReq::target_uid(req);
    proto::ServerDeleteFriendRsp::set_target_uid(rsp_0, target_id);
    __in = SocialHandler::internalDeleteFriend(this, source_id, target_id);
    retcode = std::get<0ul,int,unsigned int>(&__in);
    target_friend_num = std::get<1ul,int,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(retcode);
    }
    proto::ServerDeleteFriendRsp::set_retcode(rsp_0, *retcode);
    v7 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerDeleteFriendRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerDeleteFriendRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerDeleteFriendRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerDeleteFriendRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(retcode);
    }
    if ( !*retcode )
    {
      if ( *(_BYTE *)(((unsigned __int64)target_friend_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_friend_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_friend_num >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(target_friend_num);
      }
      proto::ServerDeleteFriendRsp::set_target_friend_num(rsp_0, *target_friend_num);
      SocialHandler::notifyDeleteFriendToOther(this, source_id, target_id);
    }
    v5 = 0;
    std::shared_ptr<proto::ServerDeleteFriendRsp>::~shared_ptr((std::shared_ptr<proto::ServerDeleteFriendRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerDeleteFriendReq const>::~shared_ptr((std::shared_ptr<const proto::ServerDeleteFriendReq> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 683: range 000000000E3261CA-000000000E3269E9
int32_t __cdecl SocialHandler::onSeverGetPS4FriendUidReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PS4FriendUid; // r14d
  proto::PSRequstReason v6; // eax
  const google::protobuf::RepeatedPtrField<std::string > *v7; // rax
  const google::protobuf::RepeatedPtrField<std::string > *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  google::protobuf::uint32 *v10; // rdx
  int v12; // r14d
  proto::FriendBrief *v13; // rax
  SocialService *v14; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+10h] [rbp-1D0h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1C0h] BYREF
  const proto::SeverGetPS4FriendUidReq *req; // [rsp+28h] [rbp-1B8h]
  proto::SeverGetPS4FriendUidRsp *rsp_0; // [rsp+30h] [rbp-1B0h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::vector<proto::FriendBrief> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-198h]
  std::shared_ptr<proto::SeverGetPS4FriendUidRsp> p_rsp_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-170h] BYREF
  char v27[336]; // [rsp+90h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 11 req_ptr:684 64 16 11 rsp_ptr:684 96 24 14 psn_id_vec:696 160 24 11 uid_vec:703 224 24"
                        " 20 friend_brief_vec:716";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSeverGetPS4FriendUidReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SeverGetPS4FriendUidReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SeverGetPS4FriendUidReq const>(
         (const std::shared_ptr<const proto::SeverGetPS4FriendUidReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSeverGetPS4FriendUidReq",
      684);
    common::milog::MiLogStream::operator()(&v26, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v26);
    PS4FriendUid = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SeverGetPS4FriendUidReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SeverGetPS4FriendUidReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SeverGetPS4FriendUidRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SeverGetPS4FriendUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SeverGetPS4FriendUidRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SeverGetPS4FriendUidRsp::set_retcode(rsp_0, -1);
    v6 = proto::SeverGetPS4FriendUidReq::request_reason(req);
    proto::SeverGetPS4FriendUidRsp::set_request_reason(rsp_0, v6);
    retcode = -1;
    v7 = proto::SeverGetPS4FriendUidReq::psn_id_list[abi:cxx11](req);
    if ( google::protobuf::RepeatedPtrField<std::string>::empty(v7) )
    {
      proto::SeverGetPS4FriendUidRsp::set_retcode(rsp_0, 0);
    }
    else
    {
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
      v8 = proto::SeverGetPS4FriendUidReq::psn_id_list[abi:cxx11](req);
      if ( common::tools::MiscUtils::fromRepeated<std::string,std::string>((std::vector<std::string> *)(v2 + 96), v8) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onSeverGetPS4FriendUidReq",
          699);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v26, (const char (*)[20])"fromRepeated failed");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
        if ( MysqlOpPlayerPsnOnlineIdData::selectPlayerUidByPsnId(
               (const std::vector<std::string> *)(v2 + 96),
               (std::vector<unsigned int> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onSeverGetPS4FriendUidReq",
            706);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v26,
            (const char (*)[30])"selectPlayerUidByPsnId failed");
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        else
        {
          __for_range = (std::vector<unsigned int> *)(v2 + 160);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 160))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v10 = v9;
            if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v9);
            }
            proto::SeverGetPS4FriendUidRsp::add_uid_id_list(rsp_0, *v10);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          if ( proto::SeverGetPS4FriendUidReq::request_reason(req) != PS_REASON_FRIEND_LIST
            && proto::SeverGetPS4FriendUidReq::request_reason(req) != PS_REASON_BLACK_LIST )
          {
            goto LABEL_29;
          }
          std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 224));
          if ( SocialHandler::fillFriendBriefData(
                 this,
                 (const std::vector<unsigned int> *)(v2 + 160),
                 (std::vector<proto::FriendBrief> *)(v2 + 224)) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onSeverGetPS4FriendUidReq",
              719);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v26,
              (const char (*)[36])"[Social] fillFriendBriefData failed");
            common::milog::MiLogStream::~MiLogStream(&v26);
            v12 = 0;
          }
          else
          {
            __for_range_0 = (std::vector<proto::FriendBrief> *)(v2 + 224);
            __for_begin._M_current = (unsigned int *)std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 224))._M_current;
            __for_end._M_current = (unsigned int *)std::vector<proto::FriendBrief>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(
                      (const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *)&__for_end) )
            {
              friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*((const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *const)&__for_begin);
              v13 = proto::SeverGetPS4FriendUidRsp::add_friend_brief_list(rsp_0);
              proto::FriendBrief::operator=(v13, friend_brief);
              __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++((__gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *const)&__for_begin);
            }
            v12 = 1;
          }
          std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 224));
          if ( v12 == 1 )
LABEL_29:
            retcode = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
      proto::SeverGetPS4FriendUidRsp::set_retcode(rsp_0, retcode);
    }
    v14 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SeverGetPS4FriendUidRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SeverGetPS4FriendUidRsp> *)(v2 + 64));
    PS4FriendUid = ServiceBase::sendRsp<proto::SeverGetPS4FriendUidRsp>(v14, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SeverGetPS4FriendUidRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SeverGetPS4FriendUidRsp>::~shared_ptr((std::shared_ptr<proto::SeverGetPS4FriendUidRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SeverGetPS4FriendUidReq const>::~shared_ptr((std::shared_ptr<const proto::SeverGetPS4FriendUidReq> *const)(v2 + 32));
  result = PS4FriendUid;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 738: range 000000000E3269EA-000000000E326CA8
int32_t __cdecl SocialHandler::onSyncPlayerBriefNotify(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  const proto::PlayerMpBriefData *v6; // r15
  const proto::PlayerBasicBriefData *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t UserId; // eax
  int32_t result; // eax
  proto::PlayerSocialBriefData *social_brief_data; // [rsp+10h] [rbp-C0h]
  proto::PlayerHomeBriefData *home_brief_data; // [rsp+18h] [rbp-B8h]
  std::__shared_ptr_access<const proto::SyncPlayerBriefNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:739";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSyncPlayerBriefNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SyncPlayerBriefNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SyncPlayerBriefNotify const>(
         (const std::shared_ptr<const proto::SyncPlayerBriefNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSyncPlayerBriefNotify",
      739);
    common::milog::MiLogStream::operator()(&v14, off_1BD9EAC0);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::SyncPlayerBriefNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SyncPlayerBriefNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    home_brief_data = (proto::PlayerHomeBriefData *)proto::SyncPlayerBriefNotify::home_brief_data(notify);
    social_brief_data = (proto::PlayerSocialBriefData *)proto::SyncPlayerBriefNotify::social_brief_data(notify);
    v6 = proto::SyncPlayerBriefNotify::mp_brief_data(notify);
    v7 = proto::SyncPlayerBriefNotify::basic_brief_data(notify);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v8);
    if ( (unsigned int)RedisOpSocialData::updatePlayerBriefData(UserId, v7, v6, social_brief_data, home_brief_data) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onSyncPlayerBriefNotify",
        747);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v14,
        (const char (*)[38])"[Social] updatePlayerBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<proto::SyncPlayerBriefNotify const>::~shared_ptr((std::shared_ptr<const proto::SyncPlayerBriefNotify> *const)(v2 + 32));
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

// Line 755: range 000000000E326CAA-000000000E326F11
int32_t __cdecl SocialHandler::onSyncPlayerIpRegionNotify(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  const proto::PlayerSocialBriefData *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t UserId; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SyncPlayerIpRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:756";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSyncPlayerIpRegionNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SyncPlayerIpRegionNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SyncPlayerIpRegionNotify const>(
         (const std::shared_ptr<const proto::SyncPlayerIpRegionNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSyncPlayerIpRegionNotify",
      756);
    common::milog::MiLogStream::operator()(&v11, off_1BD9EBE0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::SyncPlayerIpRegionNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SyncPlayerIpRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::SyncPlayerIpRegionNotify::social_brief_data(notify);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v7);
    if ( RedisOpSocialData::updatePlayerSocialData(UserId, v6) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onSyncPlayerIpRegionNotify",
        760);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v11,
        (const char (*)[38])"[Social] updatePlayerBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<proto::SyncPlayerIpRegionNotify const>::~shared_ptr((std::shared_ptr<const proto::SyncPlayerIpRegionNotify> *const)(v2 + 32));
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

// Line 767: range 000000000E326F12-000000000E32736B
__int64 __fastcall SocialHandler::getPlayerOnlineStatus(
        SocialHandler *const this,
        uint32_t uid,
        const proto::PlayerBriefDataRedisData *player_brief_data,
        unsigned __int64 online_status,
        unsigned __int64 param)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  proto::PlayerStatusType v10; // ecx
  const proto::PlayerBasicBriefData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int TimeDay; // r14d
  uint32_t *v16; // rax
  uint32_t *v17; // rdx
  uint32_t v18; // ecx
  __int64 result; // rax
  unsigned int __b; // [rsp+3Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-110h] BYREF
  char v25[240]; // [rsp+60h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 1 12 is_exist:769 48 4 19 last_login_time:779 64 4 7 now:780 80 4 14 day_offset:788 96 4 7 "
                        "uid:766 112 40 22 player_status_data:768";
  *(_QWORD *)(v5 + 16) = SocialHandler::getPlayerOnlineStatus;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 96) = uid;
  proto::PlayerStatusRedisData::PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v5 + 112));
  if ( RedisOpPlayerStatus::getPlayerStatus(
         *(_DWORD *)(v5 + 96),
         (proto::PlayerStatusRedisData *)(v5 + 112),
         (bool *)(v5 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "getPlayerOnlineStatus",
      772);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v24,
           (const char (*)[38])"[Social] getPlayerStatus failed with ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 96));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
    goto LABEL_17;
  }
  v10 = proto::PlayerStatusRedisData::status((const proto::PlayerStatusRedisData *const)(v5 + 112));
  if ( *(_BYTE *)((online_status >> 3) + 0x7FFF8000) != 0
    && (char)((online_status & 7) + 3) >= *(_BYTE *)((online_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(online_status);
  }
  *(_DWORD *)online_status = v10;
  if ( !*(_DWORD *)online_status )
  {
    v11 = proto::PlayerBriefDataRedisData::basic_brief(player_brief_data);
    *(_DWORD *)(v5 + 48) = proto::PlayerBasicBriefData::last_login_time(v11);
    *(_DWORD *)(v5 + 64) = common::tools::TimeUtils::getNow();
    if ( *(_DWORD *)(v5 + 48) > *(_DWORD *)(v5 + 64) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "getPlayerOnlineStatus",
        784);
      v12 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
              &v24,
              (const char (*)[67])"[Social] last_active_time cannot later than now, last_login_time: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])", now: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v9 = -1;
      goto LABEL_17;
    }
    TimeDay = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v5 + 64), 0LL);
    *(_DWORD *)(v5 + 80) = TimeDay - common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v5 + 48), 0LL);
    __b = 31;
    v16 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v5 + 80), &__b);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    v18 = *v17;
    if ( *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0 && (char)((param & 7) + 3) >= *(_BYTE *)((param >> 3) + 0x7FFF8000) )
      __asan_report_store4(param);
    *(_DWORD *)param = v18;
  }
  v9 = 0;
LABEL_17:
  proto::PlayerStatusRedisData::~PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v5 + 112));
  result = v9;
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 796: range 000000000E32736C-000000000E32750E
bool __cdecl SocialHandler::isPSPlayer(SocialHandler *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool isPsnPlatform; // r14
  const proto::PlayerBasicBriefData *v6; // rax
  uint32_t v7; // eax
  bool result; // al
  char v9[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 12 is_exist:798 64 56 21 player_brief_data:799";
  *(_QWORD *)(v2 + 16) = SocialHandler::isPSPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 64));
  if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(uid, (proto::PlayerBriefDataRedisData *)(v2 + 64), v2 + 48) )
  {
    isPsnPlatform = 0;
  }
  else if ( *(_BYTE *)(v2 + 48) != 1 )
  {
    isPsnPlatform = 0;
  }
  else
  {
    v6 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 64));
    v7 = proto::PlayerBasicBriefData::platform_type(v6);
    isPsnPlatform = TxtConfigMgr::isPsnPlatform(v7);
  }
  proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 64));
  result = isPsnPlatform;
  if ( v9 == (char *)v2 )
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

// Line 814: range 000000000E327510-000000000E3275BC
int32_t __cdecl SocialHandler::fillFriendBriefData(
        SocialHandler *const this,
        const std::vector<unsigned int> *uid_vec,
        std::vector<proto::FriendBrief> *friend_brief_vec)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( !RedisOpSocialData::getPlayerBriefDataBatch(uid_vec, friend_brief_vec) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/social_handler.cpp",
    "fillFriendBriefData",
    817);
  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
    &v4,
    (const char (*)[40])"[Social] getPlayerBriefDataBatch failed");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 824: range 000000000E3275BE-000000000E327C03
__int64 __fastcall SocialHandler::fillFriendBriefData(
        SocialHandler *const this,
        uint32_t uid,
        proto::FriendBrief *friend_brief,
        bool is_server_psn_add)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  const proto::PlayerBasicBriefData *v9; // rax
  google::protobuf::uint32 v10; // eax
  const proto::PlayerBasicBriefData *v11; // rax
  google::protobuf::uint32 v12; // eax
  const proto::PlayerSocialBriefData *v13; // rax
  const std::string *v14; // rax
  const proto::PlayerBasicBriefData *v15; // rax
  google::protobuf::uint32 v16; // eax
  const proto::PlayerBasicBriefData *v17; // rax
  google::protobuf::uint32 v18; // eax
  const proto::PlayerBasicBriefData *v19; // rax
  const std::string *v20; // rax
  const proto::PlayerMpBriefData *v21; // rax
  bool is_mp_avaliable; // al
  const proto::PlayerBasicBriefData *v23; // rax
  const std::string *v24; // rax
  const proto::PlayerSocialBriefData *v25; // rax
  google::protobuf::uint32 v26; // eax
  const proto::PlayerBasicBriefData *v27; // rax
  signed int v28; // eax
  const proto::PlayerSocialBriefData *v29; // rax
  const proto::PlayerHomeBriefData *v30; // rax
  proto::FriendEnterHomeOption v31; // eax
  common::milog::MiLogStream *v32; // rax
  __int64 result; // rax
  google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  proto::ProfilePicture *profile_picture_proto; // [rsp+30h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range; // [rsp+38h] [rbp-128h]
  const proto::SocialShowAvatarInfo *avatar_info; // [rsp+40h] [rbp-120h]
  proto::SocialShowAvatarInfo *detail_avatar_info; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-110h] BYREF
  char v43[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 12 is_exist:825 48 4 17 online_status:862 64 4 9 param:863 80 4 7 uid:823 96 56 20 redis_brief_data:826";
  *(_QWORD *)(v4 + 16) = SocialHandler::fillFriendBriefData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v4 + 96));
  if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                       *(_DWORD *)(v4 + 80),
                       (proto::PlayerBriefDataRedisData *)(v4 + 96),
                       v4 + 32) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "fillFriendBriefData",
      829);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v42,
      (const char (*)[35])"[Social] getPlayerBriefData failed");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v7 = -1;
  }
  else if ( *(_BYTE *)(v4 + 32) != 1 )
  {
    if ( !is_server_psn_add )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "fillFriendBriefData",
        838);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v42,
             (const char (*)[37])"[Social] brief data not exist, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    v7 = -1;
  }
  else
  {
    proto::FriendBrief::set_uid(friend_brief, *(_DWORD *)(v4 + 80));
    profile_picture_proto = proto::FriendBrief::mutable_profile_picture(friend_brief);
    v9 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v10 = proto::PlayerBasicBriefData::head_image_avatar_id(v9);
    proto::ProfilePicture::set_avatar_id(profile_picture_proto, v10);
    v11 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v12 = proto::PlayerBasicBriefData::profile_picture_costume_id(v11);
    proto::ProfilePicture::set_costume_id(profile_picture_proto, v12);
    v13 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v14 = proto::PlayerSocialBriefData::signature[abi:cxx11](v13);
    proto::FriendBrief::set_signature(friend_brief, v14);
    v15 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v16 = proto::PlayerBasicBriefData::level(v15);
    proto::FriendBrief::set_level(friend_brief, v16);
    v17 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v18 = proto::PlayerBasicBriefData::world_level(v17);
    proto::FriendBrief::set_world_level(friend_brief, v18);
    v19 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v20 = proto::PlayerBasicBriefData::nickname[abi:cxx11](v19);
    proto::FriendBrief::set_nickname(friend_brief, v20);
    v21 = proto::PlayerBriefDataRedisData::mp_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    is_mp_avaliable = proto::PlayerMpBriefData::is_mp_avaliable(v21);
    proto::FriendBrief::set_is_mp_mode_available(friend_brief, is_mp_avaliable);
    v23 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v24 = proto::PlayerBasicBriefData::online_id[abi:cxx11](v23);
    proto::FriendBrief::set_online_id(friend_brief, v24);
    v25 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v26 = proto::PlayerSocialBriefData::name_card_id(v25);
    proto::FriendBrief::set_name_card_id(friend_brief, v26);
    v27 = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v28 = proto::PlayerBasicBriefData::platform_type(v27);
    proto::FriendBrief::set_platform_type(friend_brief, (proto::PlatformType)v28);
    v29 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    __for_range = proto::PlayerSocialBriefData::show_avatar_info_list(v29);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*(&__for_begin);
      detail_avatar_info = proto::FriendBrief::add_show_avatar_info_list(friend_brief);
      proto::SocialShowAvatarInfo::CopyFrom(detail_avatar_info, avatar_info);
      google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++(&__for_begin);
    }
    v30 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v4 + 96));
    v31 = proto::PlayerHomeBriefData::friend_enter_home_option(v30);
    proto::FriendBrief::set_friend_enter_home_option(friend_brief, v31);
    if ( (unsigned int)SocialHandler::getPlayerOnlineStatus(
                         this,
                         *(_DWORD *)(v4 + 80),
                         (const proto::PlayerBriefDataRedisData *)(v4 + 96),
                         v4 + 48,
                         v4 + 64) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "fillFriendBriefData",
        866);
      v32 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v42,
              (const char (*)[45])"[Social] getPlayerOnlineStatus failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v7 = -1;
    }
    else
    {
      proto::FriendBrief::set_online_state(friend_brief, (proto::FriendOnlineState)(*(_DWORD *)(v4 + 48) != 0));
      if ( !*(_DWORD *)(v4 + 48) )
        proto::FriendBrief::set_param(friend_brief, *(_DWORD *)(v4 + 64));
      v7 = 0;
    }
  }
  proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v4 + 96));
  result = v7;
  if ( v43 == (char *)v4 )
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

// Line 880: range 000000000E327C04-000000000E328061
void __fastcall SocialHandler::notifyAddFriendToOther(
        SocialHandler *const this,
        uint32_t source_uid,
        uint32_t target_uid,
        bool is_server_psn_add)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // r14
  MultiserverApp *v10; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  proto::FriendBrief *friend_brief; // [rsp+28h] [rbp-1C8h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-1B0h] BYREF
  char v19[400]; // [rsp+60h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 14 source_uid:879 48 16 14 packet_ptr:891 80 32 19 to_other_notify:887 144 136 23 source_"
                        "friend_brief:881";
  *(_QWORD *)(v4 + 16) = SocialHandler::notifyAddFriendToOther;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 32) = source_uid;
  proto::FriendBrief::FriendBrief((proto::FriendBrief *const)(v4 + 144));
  if ( !(unsigned int)SocialHandler::fillFriendBriefData(
                        this,
                        *(_DWORD *)(v4 + 32),
                        (proto::FriendBrief *)(v4 + 144),
                        is_server_psn_add) )
  {
    proto::AddFriendNotify::AddFriendNotify((proto::AddFriendNotify *const)(v4 + 80));
    proto::AddFriendNotify::set_target_uid((proto::AddFriendNotify *const)(v4 + 80), *(_DWORD *)(v4 + 32));
    friend_brief = proto::AddFriendNotify::mutable_target_friend_brief((proto::AddFriendNotify *const)(v4 + 80));
    proto::FriendBrief::CopyFrom(friend_brief, (const proto::FriendBrief *)(v4 + 144));
    common::minet::PacketUtils::createPacket<proto::AddFriendNotify>((const proto::AddFriendNotify *)(v4 + 48));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "notifyAddFriendToOther",
        894);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v18,
             (const char (*)[26])"createPacket failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      common::minet::Packet::setUserId(v8, target_uid);
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      v10 = Singleton<MultiserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v10);
      common::minet::Packet::setSource(v9, 0xFu, AppId);
      v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v4 + 48));
      NetworkMgrBase::sendPacketToTargetService(v12, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v13);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 48));
    proto::AddFriendNotify::~AddFriendNotify((proto::AddFriendNotify *const)(v4 + 80));
  }
  proto::FriendBrief::~FriendBrief((proto::FriendBrief *const)(v4 + 144));
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 903: range 000000000E328062-000000000E328380
void __fastcall SocialHandler::notifyDeleteFriendToOther(
        SocialHandler *const this,
        uint32_t source_uid,
        uint32_t target_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::minet::Packet *v7; // rax
  common::minet::Packet *v8; // r14
  MultiserverApp *v9; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v11; // r14
  uint32_t v12; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 source_uid:902 64 16 14 packet_ptr:906 96 24 19 to_other_notify:904";
  *(_QWORD *)(v3 + 16) = SocialHandler::notifyDeleteFriendToOther;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = source_uid;
  proto::DeleteFriendNotify::DeleteFriendNotify((proto::DeleteFriendNotify *const)(v3 + 96));
  proto::DeleteFriendNotify::set_target_uid((proto::DeleteFriendNotify *const)(v3 + 96), *(_DWORD *)(v3 + 48));
  common::minet::PacketUtils::createPacket<proto::DeleteFriendNotify>((const proto::DeleteFriendNotify *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "notifyDeleteFriendToOther",
      909);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v15,
           (const char (*)[26])"createPacket failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    common::minet::Packet::setUserId(v7, target_uid);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v9 = Singleton<MultiserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v9);
    common::minet::Packet::setSource(v8, 0xFu, AppId);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
    NetworkMgrBase::sendPacketToTargetService(v11, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  proto::DeleteFriendNotify::~DeleteFriendNotify((proto::DeleteFriendNotify *const)(v3 + 96));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 919: range 000000000E328382-000000000E3287D5
void __fastcall SocialHandler::notifyAskAddFriendToOther(
        SocialHandler *const this,
        uint32_t source_uid,
        uint32_t target_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::minet::Packet *v7; // rax
  common::minet::Packet *v8; // r14
  MultiserverApp *v9; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v11; // r14
  uint32_t v12; // r8d
  proto::FriendBrief *friend_brief; // [rsp+18h] [rbp-1C8h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-1B0h] BYREF
  char v17[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 source_uid:918 48 16 14 packet_ptr:930 80 32 19 to_other_notify:926 144 136 23 source_"
                        "friend_brief:920";
  *(_QWORD *)(v3 + 16) = SocialHandler::notifyAskAddFriendToOther;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 32) = source_uid;
  proto::FriendBrief::FriendBrief((proto::FriendBrief *const)(v3 + 144));
  if ( !(unsigned int)SocialHandler::fillFriendBriefData(
                        this,
                        *(_DWORD *)(v3 + 32),
                        (proto::FriendBrief *)(v3 + 144),
                        0) )
  {
    proto::AskAddFriendNotify::AskAddFriendNotify((proto::AskAddFriendNotify *const)(v3 + 80));
    proto::AskAddFriendNotify::set_target_uid((proto::AskAddFriendNotify *const)(v3 + 80), *(_DWORD *)(v3 + 32));
    friend_brief = proto::AskAddFriendNotify::mutable_target_friend_brief((proto::AskAddFriendNotify *const)(v3 + 80));
    proto::FriendBrief::CopyFrom(friend_brief, (const proto::FriendBrief *)(v3 + 144));
    common::minet::PacketUtils::createPacket<proto::AskAddFriendNotify>((const proto::AskAddFriendNotify *)(v3 + 48));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "notifyAskAddFriendToOther",
        933);
      v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v16,
             (const char (*)[26])"createPacket failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      common::minet::Packet::setUserId(v7, target_uid);
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v9 = Singleton<MultiserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v9);
      common::minet::Packet::setSource(v8, 0xFu, AppId);
      v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 48));
      NetworkMgrBase::sendPacketToTargetService(v11, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v12);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 48));
    proto::AskAddFriendNotify::~AskAddFriendNotify((proto::AskAddFriendNotify *const)(v3 + 80));
  }
  proto::FriendBrief::~FriendBrief((proto::FriendBrief *const)(v3 + 144));
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
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
};

// Line 942: range 000000000E3287D6-000000000E329015
int32_t __cdecl SocialHandler::onServerAddBlacklistReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  proto::FriendBrief *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  SocialService *v21; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::ServerAddBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-120h]
  std::__shared_ptr_access<proto::ServerAddBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-118h]
  std::shared_ptr<proto::ServerAddBlacklistRsp> p_rsp_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<common::minet::Packet> v28; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 12 is_added:977 48 4 14 target_uid:945 64 4 14 source_uid:946 80 4 9 count:957 96 16 11 r"
                        "eq_ptr:943 128 16 11 rsp_ptr:943";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddBlacklistReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddBlacklistReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerAddBlacklistReq const>(
         (const std::shared_ptr<const proto::ServerAddBlacklistReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      943);
    common::milog::MiLogStream::operator()(&v29, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
    goto LABEL_31;
  }
  req = std::__shared_ptr_access<proto::ServerAddBlacklistReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  common::tools::perf::make_shared<proto::ServerAddBlacklistRsp>();
  rsp_0 = std::__shared_ptr_access<proto::ServerAddBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAddBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  proto::ServerAddBlacklistRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v2 + 48) = proto::ServerAddBlacklistReq::target_uid(req);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 64) = common::minet::Packet::getUserId(v6);
  retcode = -1;
  if ( *(_DWORD *)(v2 + 48) == *(_DWORD *)(v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      953);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v29,
      (const char (*)[45])"[Social] player cannot add self to blacklist");
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  if ( RedisOpSocialData::getPlayerBlacklistCount(*(_DWORD *)(v2 + 64), (uint32_t *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      960);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v29,
           (const char (*)[42])"[Social] getPlayerBlacklistCount failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  Config::getConfig();
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  v9 = ConstValueExcelConfigMgr::getPlayerBlacklistNum(&v8->design_config_.txt_config_mgr.const_value_config_mgr) <= *(_DWORD *)(v2 + 80);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
  if ( v9 )
  {
    retcode = 7017;
    goto LABEL_24;
  }
  v10 = proto::ServerAddBlacklistRsp::mutable_target_friend_brief(rsp_0);
  if ( (unsigned int)SocialHandler::fillFriendBriefData(this, *(_DWORD *)(v2 + 48), v10, 1) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      973);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v29,
            (const char (*)[40])"fillFriendBriefData fails, target_uid: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", by_uid ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  *(_BYTE *)(v2 + 32) = 0;
  if ( RedisOpSocialData::addPlayerBlacklist(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48), (bool *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      980);
    v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v29,
            (const char (*)[49])"[Social] addPlayerBlacklist failed, target_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(v2 + 32) )
  {
    retcode = 7015;
    goto LABEL_24;
  }
  if ( !proto::ServerAddBlacklistReq::is_friend(req) )
    goto LABEL_23;
  if ( RedisOpSocialData::removeFriend(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      995);
    v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v29,
            (const char (*)[31])"[Social] removeFriend failed: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
    v17 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v16, (const char (*)[3])", ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  if ( RedisOpSocialData::removeFriend(*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistReq",
      1001);
    v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v29,
            (const char (*)[31])"[Social] removeFriend failed: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])", ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
LABEL_23:
    retcode = 0;
  }
LABEL_24:
  proto::ServerAddBlacklistRsp::set_retcode(rsp_0, retcode);
  v21 = ServiceBox::findService<SocialService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v28, p_packet_ptr);
  std::shared_ptr<proto::ServerAddBlacklistRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::ServerAddBlacklistRsp> *)(v2 + 128));
  ServiceBase::sendRsp<proto::ServerAddBlacklistRsp>(v21, &p_rsp_ptr, &v28);
  std::shared_ptr<proto::ServerAddBlacklistRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v28);
  if ( proto::ServerAddBlacklistReq::is_friend(req) && !retcode )
  {
    SocialHandler::notifyDeleteFriendToOther(this, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48));
    SocialHandler::notifyDeleteFriendToOther(this, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64));
  }
  v5 = 0;
  std::shared_ptr<proto::ServerAddBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddBlacklistRsp> *const)(v2 + 128));
LABEL_31:
  std::shared_ptr<proto::ServerAddBlacklistReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAddBlacklistReq> *const)(v2 + 96));
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

// Line 1023: range 000000000E329016-000000000E3293F7
int32_t __cdecl SocialHandler::onServerRemoveBlacklistReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  SocialService *v8; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-108h]
  uint32_t source_uid; // [rsp+1Ch] [rbp-104h]
  std::__shared_ptr_access<const proto::ServerRemoveBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-100h]
  std::__shared_ptr_access<proto::ServerRemoveBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<proto::ServerRemoveBlacklistRsp> p_rsp_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 target_uid:1027 64 16 12 req_ptr:1024 96 16 12 rsp_ptr:1024";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerRemoveBlacklistReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerRemoveBlacklistReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerRemoveBlacklistReq const>(
         (const std::shared_ptr<const proto::ServerRemoveBlacklistReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerRemoveBlacklistReq",
      1024);
    common::milog::MiLogStream::operator()(&v16, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerRemoveBlacklistReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerRemoveBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerRemoveBlacklistRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerRemoveBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerRemoveBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerRemoveBlacklistRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    source_uid = common::minet::Packet::getUserId(v6);
    *(_DWORD *)(v2 + 48) = proto::ServerRemoveBlacklistReq::target_uid(req);
    proto::ServerRemoveBlacklistRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 48));
    retcode = -1;
    if ( RedisOpSocialData::removePlayerBlacklist(source_uid, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerRemoveBlacklistReq",
        1034);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v16,
             (const char (*)[40])"[Social] removePlayerBlacklist failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      retcode = 0;
    }
    proto::ServerRemoveBlacklistRsp::set_retcode(rsp_0, retcode);
    v8 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerRemoveBlacklistRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerRemoveBlacklistRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerRemoveBlacklistRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerRemoveBlacklistRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerRemoveBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::ServerRemoveBlacklistRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerRemoveBlacklistReq const>::~shared_ptr((std::shared_ptr<const proto::ServerRemoveBlacklistReq> *const)(v2 + 64));
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

// Line 1049: range 000000000E3294E8-000000000E329D1E
int32_t __cdecl SocialHandler::onServerGetRecentMpPlayerListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v8; // rax
  proto::FriendBrief *v9; // rax
  SocialService *v10; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+24h] [rbp-25Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+28h] [rbp-258h] BYREF
  std::vector<CancelAccountUidConfig>::iterator __for_begin; // [rsp+30h] [rbp-250h] BYREF
  std::vector<CancelAccountUidConfig>::iterator __for_end; // [rsp+38h] [rbp-248h] BYREF
  const proto::ServerGetRecentMpPlayerListReq *req; // [rsp+40h] [rbp-240h]
  proto::ServerGetRecentMpPlayerListRsp *rsp_0; // [rsp+48h] [rbp-238h]
  std::vector<CancelAccountUidConfig> *__for_range; // [rsp+50h] [rbp-230h]
  std::vector<proto::FriendBrief> *__for_range_0; // [rsp+58h] [rbp-228h]
  proto::FriendBrief *redis_friend_brief; // [rsp+60h] [rbp-220h]
  const CancelAccountUidConfig *cancel_uid_config; // [rsp+68h] [rbp-218h]
  std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> p_rsp_ptr; // [rsp+70h] [rbp-210h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+80h] [rbp-200h] BYREF
  common::milog::MiLogStream v24; // [rsp+90h] [rbp-1F0h] BYREF
  char v25[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 16 remove_iter:1068 80 16 12 req_ptr:1050 112 16 12 rsp_ptr:1050 144 24 12 uid_vec:1055 2"
                        "08 24 26 cancel_uid_config_vec:1058 272 24 21 friend_brief_vec:1074 336 48 19 cancel_uid_set:1063";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetRecentMpPlayerListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetRecentMpPlayerListReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerGetRecentMpPlayerListReq const>(
         (const std::shared_ptr<const proto::ServerGetRecentMpPlayerListReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetRecentMpPlayerListReq",
      1050);
    common::milog::MiLogStream::operator()(&v24, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetRecentMpPlayerListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerGetRecentMpPlayerListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerGetRecentMpPlayerListRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    v6 = proto::ServerGetRecentMpPlayerListReq::recent_player_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 144));
    std::vector<CancelAccountUidConfig>::vector((std::vector<CancelAccountUidConfig> *const)(v2 + 208));
    if ( MysqlOpMisc::selectCancelAccountUidConfigBatch(
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::vector<CancelAccountUidConfig> *)(v2 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetRecentMpPlayerListReq",
        1061);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v24,
        (const char (*)[50])"[Social] selectCancelAccountUidConfigBatch failed");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 336));
    __for_range = (std::vector<CancelAccountUidConfig> *)(v2 + 208);
    __for_begin._M_current = std::vector<CancelAccountUidConfig>::begin((std::vector<CancelAccountUidConfig> *const)(v2 + 208))._M_current;
    __for_end._M_current = std::vector<CancelAccountUidConfig>::end((std::vector<CancelAccountUidConfig> *const)(v2 + 208))._M_current;
    while ( __gnu_cxx::operator!=<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>(
              &__for_begin,
              &__for_end) )
    {
      cancel_uid_config = __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator*(&__for_begin);
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 336), &cancel_uid_config->uid);
      __gnu_cxx::__normal_iterator<CancelAccountUidConfig *,std::vector<CancelAccountUidConfig>>::operator++(&__for_begin);
    }
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 144))._M_current;
    v8._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 144))._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 48) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,SocialHandler::onServerGetRecentMpPlayerListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}>(
                                                                                             v8,
                                                                                             (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                             (SocialHandler::onServerGetRecentMpPlayerListReq::<lambda(uint32_t)>)(v2 + 336));
    __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 144))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
      &__i);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin,
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 48));
    std::vector<unsigned int>::erase(
      (std::vector<unsigned int> *const)(v2 + 144),
      (std::vector<unsigned int>::const_iterator)__for_begin._M_current,
      (std::vector<unsigned int>::const_iterator)__for_end._M_current);
    std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 272));
    if ( SocialHandler::fillFriendBriefData(
           this,
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::vector<proto::FriendBrief> *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetRecentMpPlayerListReq",
        1077);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v24,
        (const char (*)[36])"[Social] fillFriendBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      __for_range_0 = (std::vector<proto::FriendBrief> *)(v2 + 272);
      __for_begin._M_current = (CancelAccountUidConfig *)std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 272))._M_current;
      __for_end._M_current = (CancelAccountUidConfig *)std::vector<proto::FriendBrief>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(
                (const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *)&__for_end) )
      {
        redis_friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*((const __gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *const)&__for_begin);
        v9 = proto::ServerGetRecentMpPlayerListRsp::add_recent_mp_player_brief_list(rsp_0);
        proto::FriendBrief::operator=(v9, redis_friend_brief);
        __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++((__gnu_cxx::__normal_iterator<proto::FriendBrief*,std::vector<proto::FriendBrief> > *const)&__for_begin);
      }
      retcode = 0;
    }
    std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 272));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 336));
    std::vector<CancelAccountUidConfig>::~vector((std::vector<CancelAccountUidConfig> *const)(v2 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::ServerGetRecentMpPlayerListRsp::set_retcode(rsp_0, retcode);
    v10 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerGetRecentMpPlayerListRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerGetRecentMpPlayerListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetRecentMpPlayerListReq> *const)(v2 + 80));
  result = v5;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1068: range 000000000E3293F8-000000000E3294E7
bool __fastcall SocialHandler::onServerGetRecentMpPlayerListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1068";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetRecentMpPlayerListReq(std::shared_ptr<common::minet::Packet>)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             *(std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 1094: range 000000000E329D20-000000000E32A26D
int32_t __cdecl SocialHandler::onServerGetPlayerBlacklistReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::FriendBrief *v7; // rax
  SocialService *v8; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-184h]
  std::vector<proto::FriendBrief>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::vector<proto::FriendBrief>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  const proto::ServerGetPlayerBlacklistReq *req; // [rsp+30h] [rbp-170h]
  proto::ServerGetPlayerBlacklistRsp *rsp_0; // [rsp+38h] [rbp-168h]
  std::vector<proto::FriendBrief> *__for_range; // [rsp+40h] [rbp-160h]
  proto::FriendBrief *redis_friend_brief; // [rsp+48h] [rbp-158h]
  std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> p_rsp_ptr; // [rsp+50h] [rbp-150h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-130h] BYREF
  char v20[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 12 req_ptr:1095 64 16 12 rsp_ptr:1095 96 24 12 uid_vec:1099 160 24 21 friend_brief_vec:1101";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerBlacklistReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetPlayerBlacklistReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerBlacklistReq const>(
         (const std::shared_ptr<const proto::ServerGetPlayerBlacklistReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerBlacklistReq",
      1095);
    common::milog::MiLogStream::operator()(&v19, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetPlayerBlacklistReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetPlayerBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetPlayerBlacklistRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetPlayerBlacklistRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
    v6 = proto::ServerGetPlayerBlacklistReq::blacklist_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 96));
    std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 160));
    if ( SocialHandler::fillFriendBriefData(
           this,
           (const std::vector<unsigned int> *)(v2 + 96),
           (std::vector<proto::FriendBrief> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetPlayerBlacklistReq",
        1104);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v19,
        (const char (*)[36])"[Social] fillFriendBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      __for_range = (std::vector<proto::FriendBrief> *)(v2 + 160);
      __for_begin._M_current = std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 160))._M_current;
      __for_end._M_current = std::vector<proto::FriendBrief>::end((std::vector<proto::FriendBrief> *const)(v2 + 160))._M_current;
      while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(&__for_begin, &__for_end) )
      {
        redis_friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*(&__for_begin);
        v7 = proto::ServerGetPlayerBlacklistRsp::add_blacklist(rsp_0);
        proto::FriendBrief::operator=(v7, redis_friend_brief);
        __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++(&__for_begin);
      }
      retcode = 0;
    }
    std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 160));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    proto::ServerGetPlayerBlacklistRsp::set_retcode(rsp_0, retcode);
    v8 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerBlacklistRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetPlayerBlacklistRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetPlayerBlacklistRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetPlayerBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetPlayerBlacklistReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetPlayerBlacklistReq> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 1122: range 000000000E32A26E-000000000E32A6D6
_BOOL8 __fastcall SocialHandler::isSatisfiedPSConstraint(
        SocialHandler *const this,
        uint32_t source_uid,
        uint32_t target_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  _BOOL4 v7; // r14d
  std::vector<proto::PlayerBriefDataRedisData>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  const proto::PlayerBriefDataRedisData *v10; // rax
  const proto::PlayerMpBriefData *v11; // rax
  const proto::PlayerBriefDataRedisData *v12; // rax
  const proto::PlayerBasicBriefData *v13; // rax
  uint32_t v14; // eax
  const proto::PlayerBriefDataRedisData *v16; // rax
  const proto::PlayerMpBriefData *v17; // rax
  const proto::PlayerBriefDataRedisData *v18; // rax
  const proto::PlayerBasicBriefData *v19; // rax
  uint32_t v20; // eax
  bool v21; // al
  _BOOL8 result; // rax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-119h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-118h] BYREF
  char v26[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 target_uid:1121 64 24 18 query_uid_vec:1123 128 24 19 brief_data_vec:1124";
  *(_QWORD *)(v3 + 16) = SocialHandler::isSatisfiedPSConstraint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = target_uid;
  LODWORD(__l._M_array) = source_uid;
  HIDWORD(__l._M_array) = *(_DWORD *)(v3 + 48);
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)(v3 + 64),
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l),
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  std::vector<proto::PlayerBriefDataRedisData>::vector((std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128));
  if ( RedisOpSocialData::getPlayerBriefDataBatch(
         (const std::vector<unsigned int> *)(v3 + 64),
         (std::vector<proto::PlayerBriefDataRedisData> *)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__l._M_len,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "isSatisfiedPSConstraint",
      1127);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)&__l._M_len,
           (const char (*)[37])"[Social] getPlayerBriefData failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__l._M_len);
    v7 = 0;
  }
  else
  {
    v8 = std::vector<proto::PlayerBriefDataRedisData>::size((const std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128));
    if ( v8 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 64)) )
    {
      v10 = std::vector<proto::PlayerBriefDataRedisData>::at(
              (std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128),
              1uLL);
      v11 = proto::PlayerBriefDataRedisData::mp_brief(v10);
      if ( proto::PlayerMpBriefData::is_only_mp_with_ps_player(v11)
        && (v12 = std::vector<proto::PlayerBriefDataRedisData>::at(
                    (std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128),
                    0LL),
            v13 = proto::PlayerBriefDataRedisData::basic_brief(v12),
            v14 = proto::PlayerBasicBriefData::platform_type(v13),
            !TxtConfigMgr::isPsnPlatform(v14)) )
      {
        v7 = 0;
      }
      else
      {
        v16 = std::vector<proto::PlayerBriefDataRedisData>::at(
                (std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128),
                0LL);
        v17 = proto::PlayerBriefDataRedisData::mp_brief(v16);
        v21 = 0;
        if ( proto::PlayerMpBriefData::is_only_mp_with_ps_player(v17) )
        {
          v18 = std::vector<proto::PlayerBriefDataRedisData>::at(
                  (std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128),
                  1uLL);
          v19 = proto::PlayerBriefDataRedisData::basic_brief(v18);
          v20 = proto::PlayerBasicBriefData::platform_type(v19);
          if ( !TxtConfigMgr::isPsnPlatform(v20) )
            v21 = 1;
        }
        v7 = !v21;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__l._M_len,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "isSatisfiedPSConstraint",
        1133);
      v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             (common::milog::MiLogStream *const)&__l._M_len,
             (const char (*)[63])"[Social] brief_data_vec not equals to brief_data_vec, failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__l._M_len);
      v7 = 0;
    }
  }
  std::vector<proto::PlayerBriefDataRedisData>::~vector((std::vector<proto::PlayerBriefDataRedisData> *const)(v3 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v7;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1153: range 000000000E32A6D8-000000000E32AE55
int32_t __cdecl SocialHandler::onServerPrivateChatReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const proto::ChatInfo *v7; // rax
  const proto::ChatInfo *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  SocialService *v19; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-1E4h]
  std::__shared_ptr_access<const proto::ServerPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-1E0h]
  std::__shared_ptr_access<proto::ServerPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-1D8h]
  std::shared_ptr<proto::ServerPrivateChatRsp> p_rsp_ptr; // [rsp+30h] [rbp-1D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-1B0h] BYREF
  char v27[400]; // [rsp+70h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 14 is_friend:1163 48 4 14 source_id:1155 64 4 14 target_id:1156 80 4 10 count:1177 96 16 "
                        "12 req_ptr:1154 128 16 12 rsp_ptr:1154 160 56 14 chat_info:1158 256 56 15 redis_data:1178";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPrivateChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPrivateChatReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerPrivateChatReq const>(
         (const std::shared_ptr<const proto::ServerPrivateChatReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPrivateChatReq",
      1154);
    common::milog::MiLogStream::operator()(&v26, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::ServerPrivateChatRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::ServerPrivateChatRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = proto::ServerPrivateChatReq::chat_info(req);
    *(_DWORD *)(v2 + 64) = proto::ChatInfo::to_uid(v7);
    v8 = proto::ServerPrivateChatReq::chat_info(req);
    proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v2 + 160), v8);
    retcode = -1;
    *(_BYTE *)(v2 + 32) = 0;
    if ( RedisOpSocialData::isPlayerFriend(*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64), (bool *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onServerPrivateChatReq",
        1166);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v26,
             (const char (*)[43])"[Social] redis op isPlayerFriend failed @ ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else if ( *(_BYTE *)(v2 + 32) != 1 && !proto::ServerPrivateChatReq::is_ps4_friend(req) )
    {
      retcode = 8902;
    }
    else
    {
      *(_DWORD *)(v2 + 80) = 0;
      proto::ChatRedisData::ChatRedisData((proto::ChatRedisData *const)(v2 + 256));
      SocialHandler::toChatRedisData(this, (const proto::ChatInfo *)(v2 + 160), (proto::ChatRedisData *)(v2 + 256));
      if ( (unsigned int)RedisOpSocialData::appendPrivateChat(
                           *(_DWORD *)(v2 + 48),
                           *(_DWORD *)(v2 + 64),
                           (const proto::ChatRedisData *)(v2 + 256),
                           (uint32_t *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerPrivateChatReq",
          1182);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v26,
                (const char (*)[46])"[Social] redis op appendPrivateChat failed @ ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v14, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        if ( (unsigned int)RedisOpSocialData::addPrivateChatUnreadUid(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerPrivateChatReq",
            1189);
          v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v26,
                  (const char (*)[52])"[Social] redis op addPrivateChatUnreadUid failed @ ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        proto::ChatInfo::set_sequence((proto::ChatInfo *const)(v2 + 160), *(_DWORD *)(v2 + 80));
        retcode = 0;
        SocialHandler::notifyChatInfo(this, (const proto::ChatInfo *)(v2 + 160));
      }
      proto::ChatRedisData::~ChatRedisData((proto::ChatRedisData *const)(v2 + 256));
    }
    proto::ServerPrivateChatRsp::set_retcode(rsp_0, retcode);
    v19 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerPrivateChatRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerPrivateChatRsp> *)(v2 + 128));
    ServiceBase::sendRsp<proto::ServerPrivateChatRsp>(v19, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerPrivateChatRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = retcode;
    proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v2 + 160));
    std::shared_ptr<proto::ServerPrivateChatRsp>::~shared_ptr((std::shared_ptr<proto::ServerPrivateChatRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerPrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPrivateChatReq> *const)(v2 + 96));
  result = v5;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 1204: range 000000000E32AE56-000000000E32B1F6
void __cdecl SocialHandler::notifyChatInfo(SocialHandler *const this, const proto::ChatInfo *chat_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::ChatInfo *v5; // rdx
  common::milog::MiLogStream *v6; // r14
  common::minet::Packet *v7; // r14
  MultiserverApp *v8; // rax
  uint32_t AppId; // eax
  common::minet::Packet *v10; // r14
  uint32_t v11; // eax
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  common::minet::Packet *v14; // r14
  uint32_t v15; // eax
  NetworkMgrBase *v16; // r14
  uint32_t v17; // r8d
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 packet_ptr:1207 64 32 11 notify:1205";
  *(_QWORD *)(v2 + 16) = SocialHandler::notifyChatInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  proto::PrivateChatNotify::PrivateChatNotify((proto::PrivateChatNotify *const)(v2 + 64));
  v5 = proto::PrivateChatNotify::mutable_chat_info((proto::PrivateChatNotify *const)(v2 + 64));
  proto::ChatInfo::CopyFrom(v5, chat_info);
  common::minet::PacketUtils::createPacket<proto::PrivateChatNotify>((const proto::PrivateChatNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "notifyChatInfo",
      1210);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v20,
           (const char (*)[26])"createPacket failed, uid:");
    val = proto::ChatInfo::uid(chat_info);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v8 = Singleton<MultiserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v8);
    common::minet::Packet::setSource(v7, 0xFu, AppId);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v11 = proto::ChatInfo::uid(chat_info);
    common::minet::Packet::setUserId(v10, v11);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(v12, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v15 = proto::ChatInfo::to_uid(chat_info);
    common::minet::Packet::setUserId(v14, v15);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(v16, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v17);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::PrivateChatNotify::~PrivateChatNotify((proto::PrivateChatNotify *const)(v2 + 64));
  if ( v21 == (char *)v2 )
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
};

// Line 1224: range 000000000E32B1F8-000000000E32B339
void __cdecl SocialHandler::toChatRedisData(
        SocialHandler *const this,
        const proto::ChatInfo *chat_info,
        proto::ChatRedisData *redis_data)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // edx
  proto::ChatInfo::ContentCase v6; // eax
  const std::string *v7; // rdx
  google::protobuf::uint32 v8; // edx
  proto::ChatRedisData_SystemHint *v9; // rbx
  const proto::ChatInfo_SystemHint *v10; // rax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // edx
  bool v13; // dl

  v3 = proto::ChatInfo::time(chat_info);
  proto::ChatRedisData::set_time(redis_data, v3);
  v4 = proto::ChatInfo::uid(chat_info);
  proto::ChatRedisData::set_uid(redis_data, v4);
  v5 = proto::ChatInfo::sequence(chat_info);
  proto::ChatRedisData::set_sequence(redis_data, v5);
  v6 = proto::ChatInfo::content_case(chat_info);
  if ( v6 == kText_0 )
  {
    v7 = proto::ChatInfo::text[abi:cxx11](chat_info);
    proto::ChatRedisData::set_text(redis_data, v7);
  }
  else if ( v6 <= kText_0 )
  {
    if ( v6 == kIcon_0 )
    {
      v8 = proto::ChatInfo::icon(chat_info);
      proto::ChatRedisData::set_icon(redis_data, v8);
    }
    else if ( v6 == kSystemHint_0 )
    {
      v9 = proto::ChatRedisData::mutable_system_hint(redis_data);
      v10 = proto::ChatInfo::system_hint(chat_info);
      v11 = proto::ChatInfo_SystemHint::type(v10);
      proto::ChatRedisData_SystemHint::set_type(v9, v11);
    }
  }
  v12 = proto::ChatInfo::to_uid(chat_info);
  proto::ChatRedisData::set_to_uid(redis_data, v12);
  v13 = proto::ChatInfo::is_read(chat_info);
  proto::ChatRedisData::set_is_read(redis_data, v13);
};

// Line 1247: range 000000000E32B33A-000000000E32B473
void __cdecl SocialHandler::fromChatRedisData(
        SocialHandler *const this,
        proto::ChatInfo *chat_info,
        const proto::ChatRedisData *redis_data)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // edx
  proto::ChatRedisData::ContentCase v6; // eax
  const std::string *v7; // rdx
  google::protobuf::uint32 v8; // edx
  proto::ChatInfo_SystemHint *v9; // rbx
  const proto::ChatRedisData_SystemHint *v10; // rax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // edx
  bool v13; // dl

  v3 = proto::ChatRedisData::time(redis_data);
  proto::ChatInfo::set_time(chat_info, v3);
  v4 = proto::ChatRedisData::uid(redis_data);
  proto::ChatInfo::set_uid(chat_info, v4);
  v5 = proto::ChatRedisData::sequence(redis_data);
  proto::ChatInfo::set_sequence(chat_info, v5);
  v6 = proto::ChatRedisData::content_case(redis_data);
  if ( v6 == kSystemHint )
  {
    v9 = proto::ChatInfo::mutable_system_hint(chat_info);
    v10 = proto::ChatRedisData::system_hint(redis_data);
    v11 = proto::ChatRedisData_SystemHint::type(v10);
    proto::ChatInfo_SystemHint::set_type(v9, v11);
  }
  else if ( v6 <= kSystemHint )
  {
    if ( v6 == kText )
    {
      v7 = proto::ChatRedisData::text[abi:cxx11](redis_data);
      proto::ChatInfo::set_text(chat_info, v7);
    }
    else if ( v6 == kIcon )
    {
      v8 = proto::ChatRedisData::icon(redis_data);
      proto::ChatInfo::set_icon(chat_info, v8);
    }
  }
  v12 = proto::ChatRedisData::to_uid(redis_data);
  proto::ChatInfo::set_to_uid(chat_info, v12);
  v13 = proto::ChatRedisData::is_read(redis_data);
  proto::ChatInfo::set_is_read(chat_info, v13);
};

// Line 1270: range 000000000E32B474-000000000E32BCCF
int32_t __cdecl SocialHandler::onServerPullPrivateChatReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t M_array_high; // r14d
  const unsigned int *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  proto::ChatInfo *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  SocialService *v20; // r14
  int32_t result; // eax
  unsigned int *__a; // [rsp+8h] [rbp-238h]
  std::less<unsigned int> __comp; // [rsp+2Eh] [rbp-212h] BYREF
  std::allocator<unsigned int> v24; // [rsp+2Fh] [rbp-211h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+30h] [rbp-210h] BYREF
  std::vector<proto::ChatRedisData>::iterator __for_end; // [rsp+40h] [rbp-200h] BYREF
  const proto::ServerPullPrivateChatReq *req; // [rsp+48h] [rbp-1F8h]
  std::vector<proto::ChatRedisData> *__for_range; // [rsp+50h] [rbp-1F0h]
  const proto::ChatRedisData *redis_data; // [rsp+58h] [rbp-1E8h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-1D0h] BYREF
  char v32[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 14 is_friend:1283 48 4 13 from_uid:1272 64 4 11 to_uid:1273 80 4 13 pull_num:1274 96 8 8 "
                        "key:1275 128 16 12 req_ptr:1271 160 24 19 redis_data_vec:1297 224 48 13 pull_rsp:1278 304 48 17 "
                        "read_uid_set:1311";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPullPrivateChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPullPrivateChatReq>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::ServerPullPrivateChatReq const>(
         (const std::shared_ptr<const proto::ServerPullPrivateChatReq> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPullPrivateChatReq",
      1271);
    common::milog::MiLogStream::operator()(&v31, off_1BD9FD60);
    common::milog::MiLogStream::~MiLogStream(&v31);
    M_array_high = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPullPrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPullPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    *(_DWORD *)(v2 + 48) = proto::ServerPullPrivateChatReq::from_uid(req);
    *(_DWORD *)(v2 + 64) = proto::ServerPullPrivateChatReq::to_uid(req);
    *(_DWORD *)(v2 + 80) = proto::ServerPullPrivateChatReq::pull_num(req);
    __a = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)(v2 + 64));
    v6 = std::min<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)(v2 + 64));
    std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
      (std::pair<unsigned int,unsigned int> *const)(v2 + 96),
      __a,
      v6);
    HIDWORD(__l._M_array) = -1;
    proto::PullPrivateChatRsp::PullPrivateChatRsp((proto::PullPrivateChatRsp *const)(v2 + 224));
    *(_BYTE *)(v2 + 32) = 0;
    if ( RedisOpSocialData::isPlayerFriend(*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64), (bool *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onServerPullPrivateChatReq",
        1286);
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v31,
             (const char (*)[46])"[Social] redis op isPlayerFriend failed with ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else if ( *(_BYTE *)(v2 + 32) != 1 && !proto::ServerPullPrivateChatReq::is_ps4_friend(req) )
    {
      HIDWORD(__l._M_array) = 8902;
    }
    else
    {
      std::vector<proto::ChatRedisData>::vector((std::vector<proto::ChatRedisData> *const)(v2 + 160));
      if ( (unsigned int)RedisOpSocialData::getLastNPrivateChatWithTarget(
                           *(_DWORD *)(v2 + 48),
                           *(_DWORD *)(v2 + 64),
                           *(_DWORD *)(v2 + 80),
                           (std::vector<proto::ChatRedisData> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerPullPrivateChatReq",
          1300);
        v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v31,
               (const char (*)[62])"[Social] redis op getLastNPrivateChatWithTarget failed with [");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])", ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        __for_range = (std::vector<proto::ChatRedisData> *)(v2 + 160);
        __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<proto::ChatRedisData>::begin((std::vector<proto::ChatRedisData> *const)(v2 + 160))._M_current;
        __for_end._M_current = std::vector<proto::ChatRedisData>::end((std::vector<proto::ChatRedisData> *const)(v2 + 160))._M_current;
        while ( __gnu_cxx::operator!=<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>(
                  (const __gnu_cxx::__normal_iterator<proto::ChatRedisData*,std::vector<proto::ChatRedisData> > *)&__l._M_len,
                  &__for_end) )
        {
          redis_data = __gnu_cxx::__normal_iterator<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>::operator*((const __gnu_cxx::__normal_iterator<proto::ChatRedisData*,std::vector<proto::ChatRedisData> > *const)&__l._M_len);
          v15 = proto::PullPrivateChatRsp::add_chat_info((proto::PullPrivateChatRsp *const)(v2 + 224));
          SocialHandler::fromChatRedisData(this, v15, redis_data);
          __gnu_cxx::__normal_iterator<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>::operator++((__gnu_cxx::__normal_iterator<proto::ChatRedisData*,std::vector<proto::ChatRedisData> > *const)&__l._M_len);
        }
        __l._M_array = (std::initializer_list<unsigned int>::iterator)*(unsigned int *)(v2 + 64);
        std::allocator<unsigned int>::allocator(&v24);
        std::set<unsigned int>::set(
          (std::set<unsigned int> *const)(v2 + 304),
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          &__comp,
          &v24);
        std::allocator<unsigned int>::~allocator(&v24);
        if ( (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(
                             *(_DWORD *)(v2 + 48),
                             (const std::set<unsigned int> *)(v2 + 304)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerPullPrivateChatReq",
            1314);
          v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v31,
                  (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])", ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])"]");
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 304));
      }
      std::vector<proto::ChatRedisData>::~vector((std::vector<proto::ChatRedisData> *const)(v2 + 160));
    }
    proto::PullPrivateChatRsp::set_retcode((proto::PullPrivateChatRsp *const)(v2 + 224), SHIDWORD(__l._M_array));
    v20 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::PullPrivateChatRsp>(v20, (proto::PullPrivateChatRsp *)(v2 + 224), &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    M_array_high = HIDWORD(__l._M_array);
    proto::PullPrivateChatRsp::~PullPrivateChatRsp((proto::PullPrivateChatRsp *const)(v2 + 224));
  }
  std::shared_ptr<proto::ServerPullPrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPullPrivateChatReq> *const)(v2 + 128));
  result = M_array_high;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 1325: range 000000000E32BCD0-000000000E32C480
int32_t __cdecl SocialHandler::onServerReadPrivateChatReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t M_array_high; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  SocialService *v15; // r14
  int32_t result; // eax
  std::less<unsigned int> __comp; // [rsp+2Dh] [rbp-1D3h] BYREF
  std::allocator<unsigned int> __a; // [rsp+2Eh] [rbp-1D2h] BYREF
  bool is_ps4_friend; // [rsp+2Fh] [rbp-1D1h]
  std::initializer_list<unsigned int> __l; // [rsp+30h] [rbp-1D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-1B0h] BYREF
  char v23[400]; // [rsp+70h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 14 is_friend:1341 64 4 13 from_uid:1327 80 4 15 target_uid:1328 96 16 12 req_ptr:1326 128"
                        " 24 13 read_rsp:1377 192 48 19 unread_uid_set:1356 272 48 17 read_uid_set:1369";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerReadPrivateChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerReadPrivateChatReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerReadPrivateChatReq const>(
         (const std::shared_ptr<const proto::ServerReadPrivateChatReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerReadPrivateChatReq",
      1326);
    common::milog::MiLogStream::operator()(&v22, off_1BD9FFE0);
    common::milog::MiLogStream::~MiLogStream(&v22);
    M_array_high = -1;
  }
  else
  {
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::__shared_ptr_access<proto::ServerReadPrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerReadPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 64) = proto::ServerReadPrivateChatReq::from_uid((const proto::ServerReadPrivateChatReq *const)__l._M_len);
    *(_DWORD *)(v2 + 80) = proto::ServerReadPrivateChatReq::target_uid((const proto::ServerReadPrivateChatReq *const)__l._M_len);
    is_ps4_friend = proto::ServerReadPrivateChatReq::is_ps4_friend((const proto::ServerReadPrivateChatReq *const)__l._M_len);
    HIDWORD(__l._M_array) = -1;
    if ( *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 80) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerReadPrivateChatReq",
        1337);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v22, (const char (*)[22])"target cannot be self");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      *(_BYTE *)(v2 + 48) = 0;
      if ( RedisOpSocialData::isPlayerFriend(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80), (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onServerReadPrivateChatReq",
          1344);
        v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v22,
               (const char (*)[46])"[Social] redis op isPlayerFriend failed with ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
        v8 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v7, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else if ( *(_BYTE *)(v2 + 48) != 1 && !is_ps4_friend )
      {
        HIDWORD(__l._M_array) = 8907;
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 192));
        if ( (unsigned int)RedisOpSocialData::getPrivateChatUnreadUidSet(
                             *(_DWORD *)(v2 + 64),
                             (std::set<unsigned int> *)(v2 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerReadPrivateChatReq",
            1359);
          v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                 &v22,
                 (const char (*)[59])"[Social] redis op getPrivateChatUnreadUidSet failed with [");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])"]");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        HIDWORD(__l._M_array) = 0;
        if ( std::set<unsigned int>::count(
               (const std::set<unsigned int> *const)(v2 + 192),
               (const std::set<unsigned int>::key_type *)(v2 + 80)) )
        {
          LODWORD(__l._M_array) = *(_DWORD *)(v2 + 80);
          std::allocator<unsigned int>::allocator(&__a);
          std::set<unsigned int>::set(
            (std::set<unsigned int> *const)(v2 + 272),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
            &__comp,
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(
                               *(_DWORD *)(v2 + 64),
                               (const std::set<unsigned int> *)(v2 + 272)) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerReadPrivateChatReq",
              1372);
            v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v22,
                    (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v2 + 64));
            v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])", ");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])"]");
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 272));
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 192));
      }
    }
    proto::ReadPrivateChatRsp::ReadPrivateChatRsp((proto::ReadPrivateChatRsp *const)(v2 + 128));
    proto::ReadPrivateChatRsp::set_retcode((proto::ReadPrivateChatRsp *const)(v2 + 128), SHIDWORD(__l._M_array));
    v15 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::ReadPrivateChatRsp>(v15, (proto::ReadPrivateChatRsp *)(v2 + 128), &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    M_array_high = HIDWORD(__l._M_array);
    proto::ReadPrivateChatRsp::~ReadPrivateChatRsp((proto::ReadPrivateChatRsp *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerReadPrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::ServerReadPrivateChatReq> *const)(v2 + 96));
  result = M_array_high;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 1384: range 000000000E32C482-000000000E32CB3A
int32_t __cdecl SocialHandler::onServerPullRecentChatReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  SocialService *v14; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-1F8h]
  uint32_t to_uid; // [rsp+1Ch] [rbp-1F4h]
  std::vector<proto::ChatRedisData>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<proto::ChatRedisData>::iterator __for_end; // [rsp+28h] [rbp-1E8h] BYREF
  const proto::ServerPullRecentChatReq *req; // [rsp+30h] [rbp-1E0h]
  std::vector<proto::ChatRedisData> *__for_range; // [rsp+38h] [rbp-1D8h]
  const proto::ChatRedisData *redis_data; // [rsp+40h] [rbp-1D0h]
  proto::ChatInfo *chat_info; // [rsp+48h] [rbp-1C8h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-1B0h] BYREF
  char v26[400]; // [rsp+80h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 8 uid:1386 64 4 13 pull_num:1387 80 4 13 from_uid:1412 96 16 12 req_ptr:1385 128 24 19 re"
                        "dis_data_vec:1393 192 48 13 pull_rsp:1390 272 48 19 unread_uid_set:1401";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPullRecentChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPullRecentChatReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ServerPullRecentChatReq const>(
         (const std::shared_ptr<const proto::ServerPullRecentChatReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPullRecentChatReq",
      1385);
    common::milog::MiLogStream::operator()(&v25, off_1BDA01E0);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPullRecentChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPullRecentChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    *(_DWORD *)(v2 + 64) = proto::ServerPullRecentChatReq::pull_num(req);
    retcode = -1;
    proto::PullRecentChatRsp::PullRecentChatRsp((proto::PullRecentChatRsp *const)(v2 + 192));
    std::vector<proto::ChatRedisData>::vector((std::vector<proto::ChatRedisData> *const)(v2 + 128));
    if ( (unsigned int)RedisOpSocialData::getLastNRecentChat(
                         *(_DWORD *)(v2 + 48),
                         *(_DWORD *)(v2 + 64),
                         (std::vector<proto::ChatRedisData> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerPullRecentChatReq",
        1396);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v25,
             (const char (*)[51])"[Social] redis op getLastNRecentChat failed with [");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])", ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 272));
      if ( (unsigned int)RedisOpSocialData::getPrivateChatUnreadUidSet(
                           *(_DWORD *)(v2 + 48),
                           (std::set<unsigned int> *)(v2 + 272)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerPullRecentChatReq",
          1404);
        v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v25,
                (const char (*)[59])"[Social] redis op getPrivateChatUnreadUidSet failed with [");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      __for_range = (std::vector<proto::ChatRedisData> *)(v2 + 128);
      __for_begin._M_current = std::vector<proto::ChatRedisData>::begin((std::vector<proto::ChatRedisData> *const)(v2 + 128))._M_current;
      __for_end._M_current = std::vector<proto::ChatRedisData>::end((std::vector<proto::ChatRedisData> *const)(v2 + 128))._M_current;
      while ( __gnu_cxx::operator!=<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>(&__for_begin, &__for_end) )
      {
        redis_data = __gnu_cxx::__normal_iterator<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>::operator*(&__for_begin);
        chat_info = proto::PullRecentChatRsp::add_chat_info((proto::PullRecentChatRsp *const)(v2 + 192));
        SocialHandler::fromChatRedisData(this, chat_info, redis_data);
        to_uid = proto::ChatInfo::to_uid(chat_info);
        *(_DWORD *)(v2 + 80) = proto::ChatInfo::uid(chat_info);
        if ( to_uid == *(_DWORD *)(v2 + 48)
          && !std::set<unsigned int>::count(
                (const std::set<unsigned int> *const)(v2 + 272),
                (const std::set<unsigned int>::key_type *)(v2 + 80)) )
        {
          proto::ChatInfo::set_is_read(chat_info, 1);
        }
        __gnu_cxx::__normal_iterator<proto::ChatRedisData *,std::vector<proto::ChatRedisData>>::operator++(&__for_begin);
      }
      retcode = 0;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 272));
    }
    std::vector<proto::ChatRedisData>::~vector((std::vector<proto::ChatRedisData> *const)(v2 + 128));
    proto::PullRecentChatRsp::set_retcode((proto::PullRecentChatRsp *const)(v2 + 192), retcode);
    v14 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::PullRecentChatRsp>(v14, (proto::PullRecentChatRsp *)(v2 + 192), &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = retcode;
    proto::PullRecentChatRsp::~PullRecentChatRsp((proto::PullRecentChatRsp *const)(v2 + 192));
  }
  std::shared_ptr<proto::ServerPullRecentChatReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPullRecentChatReq> *const)(v2 + 96));
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 1429: range 000000000E32CB3C-000000000E32CF47
int32_t __cdecl SocialHandler::onServerUpdateActivitySocialDataNotify(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::key_type key; // [rsp+14h] [rbp-16Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::ActivitySocialData>::const_iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::ActivitySocialData>::const_iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  const proto::ServerUpdateActivitySocialDataNotify *notify; // [rsp+28h] [rbp-158h]
  google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+30h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::ActivitySocialData> *__for_range; // [rsp+38h] [rbp-148h]
  const proto::ActivitySocialData *activity_social_data; // [rsp+40h] [rbp-140h]
  proto::ActivitySocialData *social_data; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-130h] BYREF
  char v18[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1431 64 16 15 notify_ptr:1430 96 96 15 redis_data:1432";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerUpdateActivitySocialDataNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerUpdateActivitySocialDataNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerUpdateActivitySocialDataNotify const>(
         (const std::shared_ptr<const proto::ServerUpdateActivitySocialDataNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerUpdateActivitySocialDataNotify",
      1430);
    common::milog::MiLogStream::operator()(&v17, off_1BDA0360);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerUpdateActivitySocialDataNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerUpdateActivitySocialDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    proto::PlayerActivitySocialRedisData::PlayerActivitySocialRedisData((proto::PlayerActivitySocialRedisData *const)(v2 + 96));
    social_data_map = proto::PlayerActivitySocialRedisData::mutable_activity_social_data_map((proto::PlayerActivitySocialRedisData *const)(v2 + 96));
    __for_range = proto::ServerUpdateActivitySocialDataNotify::social_data_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ActivitySocialData>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ActivitySocialData>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ActivitySocialData const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      activity_social_data = google::protobuf::internal::RepeatedPtrIterator<proto::ActivitySocialData const>::operator*(&__for_begin);
      key = proto::ActivitySocialData::schedule_id(activity_social_data);
      social_data = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::operator[](social_data_map, &key);
      proto::ActivitySocialData::CopyFrom(social_data, activity_social_data);
      google::protobuf::internal::RepeatedPtrIterator<proto::ActivitySocialData const>::operator++(&__for_begin);
    }
    if ( (unsigned int)RedisOpSocialData::updatePlayerActivitySocialData(*(_DWORD *)(v2 + 48), v2 + 96) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerUpdateActivitySocialDataNotify",
        1442);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v17,
             (const char (*)[44])"updatePlayerActivitySocialData failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    proto::PlayerActivitySocialRedisData::~PlayerActivitySocialRedisData((proto::PlayerActivitySocialRedisData *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerUpdateActivitySocialDataNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerUpdateActivitySocialDataNotify> *const)(v2 + 64));
  result = v5;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1449: range 000000000E32CF48-000000000E32D92E
int32_t __cdecl SocialHandler::onServerBlessingGetFriendPicListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::uint32 v7; // eax
  const proto::ProfilePicture *v8; // rax
  google::protobuf::uint32 v9; // eax
  const proto::ProfilePicture *v10; // rax
  google::protobuf::uint32 v11; // eax
  const std::string *v12; // rax
  const std::string *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v14; // rax
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v15; // rax
  const proto::BlessingSocialData *v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r14d
  unsigned int *v19; // rax
  unsigned int *v20; // rdx
  SocialService *v21; // r14
  int32_t result; // eax
  std::map<unsigned int,proto::PlayerActivitySocialRedisData>::key_type __x; // [rsp+1Ch] [rbp-2E4h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::key_type key; // [rsp+20h] [rbp-2E0h] BYREF
  int32_t retcode; // [rsp+24h] [rbp-2DCh]
  std::vector<proto::FriendBrief>::iterator __for_begin; // [rsp+28h] [rbp-2D8h] BYREF
  std::vector<proto::FriendBrief>::iterator __for_end; // [rsp+30h] [rbp-2D0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+38h] [rbp-2C8h] BYREF
  const proto::ServerBlessingGetFriendPicListReq *req; // [rsp+40h] [rbp-2C0h]
  proto::ServerBlessingGetFriendPicListRsp *rsp_0; // [rsp+48h] [rbp-2B8h]
  std::vector<proto::FriendBrief> *__for_range; // [rsp+50h] [rbp-2B0h]
  const proto::FriendBrief *friend_brief; // [rsp+58h] [rbp-2A8h]
  proto::BlessingFriendPicData *pic_data; // [rsp+60h] [rbp-2A0h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+68h] [rbp-298h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+70h] [rbp-290h]
  google::protobuf::Map<unsigned int,unsigned int> *pic_num_map; // [rsp+78h] [rbp-288h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+80h] [rbp-280h]
  const unsigned int *p_pic_id; // [rsp+88h] [rbp-278h]
  std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp> p_rsp_ptr; // [rsp+90h] [rbp-270h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+A0h] [rbp-260h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+B0h] [rbp-250h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+D0h] [rbp-230h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+F0h] [rbp-210h] BYREF
  common::milog::MiLogStream v44; // [rsp+110h] [rbp-1F0h] BYREF
  char v45[464]; // [rsp+130h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 18 activity_iter:1484 80 16 12 req_ptr:1450 112 16 12 rsp_ptr:1450 144 24 12 uid_vec:1451"
                        " 208 24 21 friend_brief_vec:1461 272 24 9 iter:1490 336 48 35 activity_social_redis_data_map:1468";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerBlessingGetFriendPicListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerBlessingGetFriendPicListReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerBlessingGetFriendPicListReq const>(
         (const std::shared_ptr<const proto::ServerBlessingGetFriendPicListReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerBlessingGetFriendPicListReq",
      1450);
    common::milog::MiLogStream::operator()(&v44, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerBlessingGetFriendPicListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerBlessingGetFriendPicListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerBlessingGetFriendPicListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerBlessingGetFriendPicListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerBlessingGetFriendPicListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerBlessingGetFriendPicListRsp::set_retcode(rsp_0, -1);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    v6 = proto::ServerBlessingGetFriendPicListReq::friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 144));
    retcode = -1;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 144)) )
    {
      retcode = 0;
    }
    else
    {
      std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 208));
      if ( SocialHandler::fillFriendBriefData(
             this,
             (const std::vector<unsigned int> *)(v2 + 144),
             (std::vector<proto::FriendBrief> *)(v2 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerBlessingGetFriendPicListReq",
          1464);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v44,
          (const char (*)[27])"fillFriendBriefData failed");
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
        if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
               (const std::vector<unsigned int> *)(v2 + 144),
               (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerBlessingGetFriendPicListReq",
            1471);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v44,
            (const char (*)[40])"getPlayerActivitySocialDataBatch failed");
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          __for_range = (std::vector<proto::FriendBrief> *)(v2 + 208);
          __for_begin._M_current = std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 208))._M_current;
          __for_end._M_current = std::vector<proto::FriendBrief>::end((std::vector<proto::FriendBrief> *const)(v2 + 208))._M_current;
          while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(&__for_begin, &__for_end) )
          {
            friend_brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*(&__for_begin);
            pic_data = proto::ServerBlessingGetFriendPicListRsp::add_friend_pic_data_list(rsp_0);
            v7 = proto::FriendBrief::uid(friend_brief);
            proto::BlessingFriendPicData::set_uid(pic_data, v7);
            profile_picture_proto = proto::BlessingFriendPicData::mutable_profile_picture(pic_data);
            v8 = proto::FriendBrief::profile_picture(friend_brief);
            v9 = proto::ProfilePicture::avatar_id(v8);
            proto::ProfilePicture::set_avatar_id(profile_picture_proto, v9);
            v10 = proto::FriendBrief::profile_picture(friend_brief);
            v11 = proto::ProfilePicture::costume_id(v10);
            proto::ProfilePicture::set_costume_id(profile_picture_proto, v11);
            v12 = proto::FriendBrief::nickname[abi:cxx11](friend_brief);
            proto::BlessingFriendPicData::set_nickname(pic_data, v12);
            v13 = proto::FriendBrief::signature[abi:cxx11](friend_brief);
            proto::BlessingFriendPicData::set_signature(pic_data, v13);
            __x = proto::FriendBrief::uid(friend_brief);
            *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 48) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find(
                                                                                                    (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336),
                                                                                                    &__x);
            __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336))._M_node;
            if ( !std::operator==(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 48),
                    &__y) )
            {
              v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 48));
              social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v14->second);
              key = proto::ServerBlessingGetFriendPicListReq::schedule_id(req);
              google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
                (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 272),
                social_data_map,
                &key);
              google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
              if ( google::protobuf::operator!=(
                     (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 272),
                     &b) )
              {
                pic_num_map = proto::BlessingFriendPicData::mutable_pic_num_map(pic_data);
                v15 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 272));
                v16 = proto::ActivitySocialData::blessing_data(&v15->second);
                __for_range_0 = proto::BlessingSocialData::pic_num_map(v16);
                google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
                google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
                while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
                {
                  p_pic_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
                  v17 = (unsigned __int64)(p_pic_id + 1);
                  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
                    && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v17);
                  }
                  v18 = p_pic_id[1];
                  v19 = google::protobuf::Map<unsigned int,unsigned int>::operator[](pic_num_map, p_pic_id);
                  v20 = v19;
                  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v19);
                  }
                  *v20 = v18;
                  google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
                }
              }
            }
            __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++(&__for_begin);
          }
          retcode = 0;
        }
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
      }
      std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 208));
    }
    proto::ServerBlessingGetFriendPicListRsp::set_retcode(rsp_0, retcode);
    v21 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerBlessingGetFriendPicListRsp>(v21, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp>::~shared_ptr((std::shared_ptr<proto::ServerBlessingGetFriendPicListRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerBlessingGetFriendPicListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerBlessingGetFriendPicListReq> *const)(v2 + 80));
  result = v5;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1509: range 000000000E32D930-000000000E32DEB0
int32_t __cdecl SocialHandler::onServerGetFriendBriefReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::FriendBriefRequestReason v7; // eax
  SocialService *v8; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+14h] [rbp-18Ch]
  std::vector<proto::FriendBrief>::iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::vector<proto::FriendBrief>::iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  const proto::ServerGetFriendBriefReq *req; // [rsp+28h] [rbp-178h]
  proto::ServerGetFriendBriefRsp *rsp_0; // [rsp+30h] [rbp-170h]
  std::vector<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-168h]
  const proto::FriendBrief *brief; // [rsp+40h] [rbp-160h]
  proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-158h]
  std::shared_ptr<proto::ServerGetFriendBriefRsp> p_rsp_ptr; // [rsp+50h] [rbp-150h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-130h] BYREF
  char v21[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 12 req_ptr:1510 64 16 12 rsp_ptr:1510 96 24 12 uid_vec:1511 160 24 21 friend_brief_vec:1522";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetFriendBriefReq const>(
         (const std::shared_ptr<const proto::ServerGetFriendBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendBriefReq",
      1510);
    common::milog::MiLogStream::operator()(&v20, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetFriendBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetFriendBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetFriendBriefRsp::set_retcode(rsp_0, -1);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
    v6 = proto::ServerGetFriendBriefReq::uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 96));
    v7 = proto::ServerGetFriendBriefReq::reason(req);
    proto::ServerGetFriendBriefRsp::set_reason(rsp_0, v7);
    retcode = -1;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
    {
      proto::ServerGetFriendBriefRsp::set_retcode(rsp_0, 0);
    }
    else
    {
      std::vector<proto::FriendBrief>::vector((std::vector<proto::FriendBrief> *const)(v2 + 160));
      if ( SocialHandler::fillFriendBriefData(
             this,
             (const std::vector<unsigned int> *)(v2 + 96),
             (std::vector<proto::FriendBrief> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetFriendBriefReq",
          1525);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v20,
          (const char (*)[27])"fillFriendBriefData failed");
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      else
      {
        __for_range = (std::vector<proto::FriendBrief> *)(v2 + 160);
        __for_begin._M_current = std::vector<proto::FriendBrief>::begin((std::vector<proto::FriendBrief> *const)(v2 + 160))._M_current;
        __for_end._M_current = std::vector<proto::FriendBrief>::end((std::vector<proto::FriendBrief> *const)(v2 + 160))._M_current;
        while ( __gnu_cxx::operator!=<proto::FriendBrief *,std::vector<proto::FriendBrief>>(&__for_begin, &__for_end) )
        {
          brief = __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator*(&__for_begin);
          friend_brief = proto::ServerGetFriendBriefRsp::add_friend_brief_list(rsp_0);
          proto::FriendBrief::CopyFrom(friend_brief, brief);
          __gnu_cxx::__normal_iterator<proto::FriendBrief *,std::vector<proto::FriendBrief>>::operator++(&__for_begin);
        }
        retcode = 0;
      }
      std::vector<proto::FriendBrief>::~vector((std::vector<proto::FriendBrief> *const)(v2 + 160));
      proto::ServerGetFriendBriefRsp::set_retcode(rsp_0, retcode);
    }
    v8 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetFriendBriefRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetFriendBriefRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    std::shared_ptr<proto::ServerGetFriendBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetFriendBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetFriendBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendBriefReq> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 1543: range 000000000E32DEB2-000000000E32E2A6
int32_t __cdecl SocialHandler::onServerUpdateShowAvatarInfoNotify(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::PlayerShowAvatarRedisData *v7; // rax
  int32_t result; // eax
  uint32_t uid; // [rsp+1Ch] [rbp-124h]
  google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const proto::ServerUpdateShowAvatarInfoNotify *notify; // [rsp+30h] [rbp-110h]
  const google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo> *__for_range; // [rsp+38h] [rbp-108h]
  const proto::ShowAvatarInfo *avatar_info; // [rsp+40h] [rbp-100h]
  proto::ShowAvatarInfo *redis_avatar_info; // [rsp+48h] [rbp-F8h]
  char v16[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 notify_ptr:1544 64 24 19 redis_data_vec:1546 128 32 15 redis_data:1549";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerUpdateShowAvatarInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerUpdateShowAvatarInfoNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerUpdateShowAvatarInfoNotify const>(
         (const std::shared_ptr<const proto::ServerUpdateShowAvatarInfoNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerUpdateShowAvatarInfoNotify",
      1544);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_1BDA0780);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerUpdateShowAvatarInfoNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerUpdateShowAvatarInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    std::vector<proto::PlayerShowAvatarRedisData>::vector((std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 64));
    __for_range = proto::ServerUpdateShowAvatarInfoNotify::show_avatar_info_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ShowAvatarInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::ShowAvatarInfo const>::operator*(&__for_begin);
      proto::PlayerShowAvatarRedisData::PlayerShowAvatarRedisData((proto::PlayerShowAvatarRedisData *const)(v2 + 128));
      redis_avatar_info = proto::PlayerShowAvatarRedisData::mutable_show_avatar_info((proto::PlayerShowAvatarRedisData *const)(v2 + 128));
      proto::ShowAvatarInfo::CopyFrom(redis_avatar_info, avatar_info);
      v7 = std::move<proto::PlayerShowAvatarRedisData &>((proto::PlayerShowAvatarRedisData *)(v2 + 128));
      std::vector<proto::PlayerShowAvatarRedisData>::emplace_back<proto::PlayerShowAvatarRedisData>(
        (std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 64),
        v7,
        v7);
      proto::PlayerShowAvatarRedisData::~PlayerShowAvatarRedisData((proto::PlayerShowAvatarRedisData *const)(v2 + 128));
      google::protobuf::internal::RepeatedPtrIterator<proto::ShowAvatarInfo const>::operator++(&__for_begin);
    }
    if ( (unsigned int)RedisOpSocialData::updatePlayerShowAvatarInfo(
                         uid,
                         (const std::vector<proto::PlayerShowAvatarRedisData> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerUpdateShowAvatarInfoNotify",
        1556);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 128),
        (const char (*)[34])"updatePlayerShowAvatarInfo failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::vector<proto::PlayerShowAvatarRedisData>::~vector((std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerUpdateShowAvatarInfoNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerUpdateShowAvatarInfoNotify> *const)(v2 + 32));
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

// Line 1563: range 000000000E32E2A8-000000000E32EA6E
int32_t __cdecl SocialHandler::onServerGetFriendShowAvatarInfoReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::PlayerSocialBriefData *v6; // rax
  const proto::PlayerSocialBriefData *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const proto::ShowAvatarInfo *v9; // rax
  SocialService *v10; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+10h] [rbp-220h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-21Ch]
  google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-218h] BYREF
  google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator __for_end; // [rsp+20h] [rbp-210h] BYREF
  const proto::ServerGetFriendShowAvatarInfoReq *req; // [rsp+28h] [rbp-208h]
  proto::ServerGetFriendShowAvatarInfoRsp *rsp_0; // [rsp+30h] [rbp-200h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range; // [rsp+38h] [rbp-1F8h]
  std::vector<proto::PlayerShowAvatarRedisData> *__for_range_0; // [rsp+40h] [rbp-1F0h]
  const proto::PlayerShowAvatarRedisData *redis_data; // [rsp+48h] [rbp-1E8h]
  proto::ShowAvatarInfo *show_avatar_info; // [rsp+50h] [rbp-1E0h]
  const proto::SocialShowAvatarInfo *avatar_info; // [rsp+58h] [rbp-1D8h]
  std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp> p_rsp_ptr; // [rsp+60h] [rbp-1D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-1B0h] BYREF
  char v26[400]; // [rsp+A0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 13 is_exist:1570 48 4 8 uid:1565 64 16 12 req_ptr:1564 96 16 12 rsp_ptr:1564 128 24 23 sh"
                        "ow_avatar_id_vec:1589 192 24 19 redis_data_vec:1595 256 56 22 player_brief_data:1569";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendShowAvatarInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendShowAvatarInfoReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGetFriendShowAvatarInfoReq const>(
         (const std::shared_ptr<const proto::ServerGetFriendShowAvatarInfoReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendShowAvatarInfoReq",
      1564);
    common::milog::MiLogStream::operator()(&v25, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetFriendShowAvatarInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendShowAvatarInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerGetFriendShowAvatarInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetFriendShowAvatarInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetFriendShowAvatarInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerGetFriendShowAvatarInfoRsp::set_retcode(rsp_0, -1);
    *(_DWORD *)(v2 + 48) = proto::ServerGetFriendShowAvatarInfoReq::uid(req);
    retcode = -1;
    proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 256));
    *(_BYTE *)(v2 + 32) = 0;
    if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                         *(_DWORD *)(v2 + 48),
                         (proto::PlayerBriefDataRedisData *)(v2 + 256),
                         v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetFriendShowAvatarInfoReq",
        1573);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v25,
        (const char (*)[35])"[Social] getPlayerBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else if ( *(_BYTE *)(v2 + 32) != 1 )
    {
      retcode = 7002;
    }
    else
    {
      v6 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 256));
      if ( !proto::PlayerSocialBriefData::is_show_avatar(v6) )
      {
        retcode = 7034;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
        v7 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 256));
        __for_range = proto::PlayerSocialBriefData::show_avatar_info_list(v7);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*(&__for_begin);
          __x = proto::SocialShowAvatarInfo::avatar_id(avatar_info);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), &__x);
          google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++(&__for_begin);
        }
        std::vector<proto::PlayerShowAvatarRedisData>::vector((std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 192));
        if ( (unsigned int)RedisOpSocialData::getPlayerShowAvatarInfoBatch(
                             *(_DWORD *)(v2 + 48),
                             (const std::vector<unsigned int> *)(v2 + 128),
                             (std::vector<proto::PlayerShowAvatarRedisData> *)(v2 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendShowAvatarInfoReq",
            1598);
          v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                 &v25,
                 (const char (*)[37])"getPlayerShowAvatarInfo failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          __for_range_0 = (std::vector<proto::PlayerShowAvatarRedisData> *)(v2 + 192);
          __for_begin.it_ = (void *const *)std::vector<proto::PlayerShowAvatarRedisData>::begin((std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 192))._M_current;
          __for_end.it_ = (void *const *)std::vector<proto::PlayerShowAvatarRedisData>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<proto::PlayerShowAvatarRedisData *,std::vector<proto::PlayerShowAvatarRedisData>>(
                    (const __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *)&__for_end) )
          {
            redis_data = __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData *,std::vector<proto::PlayerShowAvatarRedisData>>::operator*((const __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *const)&__for_begin);
            show_avatar_info = proto::ServerGetFriendShowAvatarInfoRsp::add_show_avatar_info_list(rsp_0);
            v9 = proto::PlayerShowAvatarRedisData::show_avatar_info(redis_data);
            proto::ShowAvatarInfo::CopyFrom(show_avatar_info, v9);
            __gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData *,std::vector<proto::PlayerShowAvatarRedisData>>::operator++((__gnu_cxx::__normal_iterator<proto::PlayerShowAvatarRedisData*,std::vector<proto::PlayerShowAvatarRedisData> > *const)&__for_begin);
          }
          retcode = 0;
        }
        std::vector<proto::PlayerShowAvatarRedisData>::~vector((std::vector<proto::PlayerShowAvatarRedisData> *const)(v2 + 192));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
      }
    }
    proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 256));
    proto::ServerGetFriendShowAvatarInfoRsp::set_uid(rsp_0, *(_DWORD *)(v2 + 48));
    proto::ServerGetFriendShowAvatarInfoRsp::set_retcode(rsp_0, retcode);
    v10 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerGetFriendShowAvatarInfoRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGetFriendShowAvatarInfoReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendShowAvatarInfoReq> *const)(v2 + 64));
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 1617: range 000000000E32EA70-000000000E32EFB3
int32_t __cdecl SocialHandler::onServerGetFriendShowNameCardInfoReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::PlayerSocialBriefData *v6; // rax
  SocialService *v7; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-188h]
  google::protobuf::uint32 uid; // [rsp+1Ch] [rbp-184h]
  google::protobuf::uint32 *__for_begin; // [rsp+20h] [rbp-180h]
  std::__shared_ptr_access<const proto::ServerGetFriendShowNameCardInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+28h] [rbp-178h]
  std::__shared_ptr_access<proto::ServerGetFriendShowNameCardInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+30h] [rbp-170h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+38h] [rbp-168h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-160h]
  std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp> p_rsp_ptr; // [rsp+50h] [rbp-150h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-130h] BYREF
  char v19[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 13 is_exist:1624 64 16 12 req_ptr:1618 96 16 12 rsp_ptr:1618 128 56 22 player_brief_data:1623";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendShowNameCardInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendShowNameCardInfoReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerGetFriendShowNameCardInfoReq const>(
         (const std::shared_ptr<const proto::ServerGetFriendShowNameCardInfoReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendShowNameCardInfoReq",
      1618);
    common::milog::MiLogStream::operator()(&v18, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetFriendShowNameCardInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendShowNameCardInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerGetFriendShowNameCardInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetFriendShowNameCardInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetFriendShowNameCardInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerGetFriendShowNameCardInfoRsp::set_retcode(rsp_0, -1);
    uid = proto::ServerGetFriendShowNameCardInfoReq::uid(req);
    retcode = -1;
    proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 128));
    *(_BYTE *)(v2 + 48) = 0;
    if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                         uid,
                         (proto::PlayerBriefDataRedisData *)(v2 + 128),
                         v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetFriendShowNameCardInfoReq",
        1627);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v18,
        (const char (*)[35])"[Social] getPlayerBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else if ( *(_BYTE *)(v2 + 48) != 1 )
    {
      retcode = 7002;
    }
    else
    {
      v6 = proto::PlayerBriefDataRedisData::social_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 128));
      __for_range = proto::PlayerSocialBriefData::show_name_card_id_list(v6);
      __for_begin = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin);
        }
        proto::ServerGetFriendShowNameCardInfoRsp::add_show_name_card_id_list(rsp_0, *__for_begin++);
      }
      retcode = 0;
    }
    proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 128));
    proto::ServerGetFriendShowNameCardInfoRsp::set_uid(rsp_0, uid);
    proto::ServerGetFriendShowNameCardInfoRsp::set_retcode(rsp_0, retcode);
    v7 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerGetFriendShowNameCardInfoRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerGetFriendShowNameCardInfoReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendShowNameCardInfoReq> *const)(v2 + 64));
  result = v5;
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

// Line 1649: range 000000000E32EFB4-000000000E32F778
int32_t __cdecl SocialHandler::onServerGetFriendEnterHomeOptionReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const proto::PlayerHomeBriefData *v10; // rax
  proto::FriendEnterHomeOption v11; // eax
  const proto::PlayerHomeBriefData *v12; // rax
  bool is_home_available; // al
  const proto::PlayerMpBriefData *v14; // rax
  bool is_only_mp_with_ps_player; // al
  const proto::PlayerHomeBriefData *v16; // rax
  google::protobuf::uint32 save_time; // eax
  const proto::PlayerHomeBriefData *v18; // rax
  google::protobuf::uint32 v19; // eax
  const proto::PlayerHomeBriefData *v20; // rax
  const google::protobuf::RepeatedPtrField<proto::PlayerHomeAuditModuleData> *v21; // rax
  bool v22; // al
  const proto::PlayerHomeBriefData *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r14d
  proto::PlayerStatusType v26; // eax
  SocialService *v27; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-1C8h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-1C4h]
  const proto::ServerGetFriendEnterHomeOptionReq *req; // [rsp+20h] [rbp-1C0h]
  proto::ServerGetFriendEnterHomeOptionRsp *rsp_0; // [rsp+28h] [rbp-1B8h]
  std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp> p_rsp_ptr; // [rsp+30h] [rbp-1B0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-190h] BYREF
  char v36[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 13 is_exist:1657 64 4 15 target_uid:1651 80 16 12 req_ptr:1650 112 16 12 rsp_ptr:1650 144"
                        " 40 23 player_status_data:1679 224 56 22 player_brief_data:1656";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendEnterHomeOptionReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendEnterHomeOptionReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerGetFriendEnterHomeOptionReq const>(
         (const std::shared_ptr<const proto::ServerGetFriendEnterHomeOptionReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendEnterHomeOptionReq",
      1650);
    common::milog::MiLogStream::operator()(&v35, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetFriendEnterHomeOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendEnterHomeOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerGetFriendEnterHomeOptionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetFriendEnterHomeOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetFriendEnterHomeOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerGetFriendEnterHomeOptionRsp::set_retcode(rsp_0, -1);
    *(_DWORD *)(v2 + 64) = proto::ServerGetFriendEnterHomeOptionReq::target_uid(req);
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendEnterHomeOptionReq",
      1652);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v35, (const char (*)[12])"target_uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" req_uid:");
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    retcode = -1;
    proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 224));
    *(_BYTE *)(v2 + 48) = 0;
    if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                         *(_DWORD *)(v2 + 64),
                         (proto::PlayerBriefDataRedisData *)(v2 + 224),
                         v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerGetFriendEnterHomeOptionReq",
        1660);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v35,
        (const char (*)[35])"[Social] getPlayerBriefData failed");
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    else if ( *(_BYTE *)(v2 + 48) != 1 )
    {
      retcode = 7002;
    }
    else
    {
      v10 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      v11 = proto::PlayerHomeBriefData::friend_enter_home_option(v10);
      proto::ServerGetFriendEnterHomeOptionRsp::set_friend_enter_home_option(rsp_0, v11);
      v12 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      is_home_available = proto::PlayerHomeBriefData::is_home_available(v12);
      proto::ServerGetFriendEnterHomeOptionRsp::set_is_home_avaliable(rsp_0, is_home_available);
      v14 = proto::PlayerBriefDataRedisData::mp_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      is_only_mp_with_ps_player = proto::PlayerMpBriefData::is_only_mp_with_ps_player(v14);
      proto::ServerGetFriendEnterHomeOptionRsp::set_is_only_mp_with_ps_player(rsp_0, is_only_mp_with_ps_player);
      v16 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      save_time = proto::PlayerHomeBriefData::last_save_time(v16);
      proto::ServerGetFriendEnterHomeOptionRsp::set_last_save_time(rsp_0, save_time);
      v18 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      v19 = proto::PlayerHomeBriefData::prior_check_time(v18);
      proto::ServerGetFriendEnterHomeOptionRsp::set_prior_check_time(rsp_0, v19);
      v20 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      v21 = proto::PlayerHomeBriefData::audit_module_list(v20);
      v22 = google::protobuf::RepeatedPtrField<proto::PlayerHomeAuditModuleData>::empty(v21);
      proto::ServerGetFriendEnterHomeOptionRsp::set_is_home_in_audit(rsp_0, !v22);
      v23 = proto::PlayerBriefDataRedisData::home_brief((const proto::PlayerBriefDataRedisData *const)(v2 + 224));
      if ( proto::PlayerHomeBriefData::friend_enter_home_option(v23) )
        goto LABEL_15;
      proto::PlayerStatusRedisData::PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v2 + 144));
      if ( RedisOpPlayerStatus::getPlayerStatus(
             *(_DWORD *)(v2 + 64),
             (proto::PlayerStatusRedisData *)(v2 + 144),
             (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetFriendEnterHomeOptionReq",
          1682);
        v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v35,
                (const char (*)[38])"[Social] getPlayerStatus failed with ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v35);
        v25 = 0;
      }
      else
      {
        v26 = proto::PlayerStatusRedisData::status((const proto::PlayerStatusRedisData *const)(v2 + 144));
        proto::ServerGetFriendEnterHomeOptionRsp::set_is_online(rsp_0, v26 == PLAYER_STATUS_ONLINE);
        v25 = 1;
      }
      proto::PlayerStatusRedisData::~PlayerStatusRedisData((proto::PlayerStatusRedisData *const)(v2 + 144));
      if ( v25 == 1 )
LABEL_15:
        retcode = 0;
    }
    proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v2 + 224));
    proto::ServerGetFriendEnterHomeOptionRsp::set_retcode(rsp_0, retcode);
    proto::ServerGetFriendEnterHomeOptionRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 64));
    v27 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerGetFriendEnterHomeOptionRsp>(v27, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetFriendEnterHomeOptionRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerGetFriendEnterHomeOptionReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendEnterHomeOptionReq> *const)(v2 + 80));
  result = v5;
  if ( v36 == (char *)v2 )
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

// Line 1697: range 000000000E32F77A-000000000E32FFF5
int32_t __cdecl SocialHandler::onForceAddPlayerFriendReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  proto::FriendBrief *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  SocialService *v16; // r14
  int32_t result; // eax
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-1A8h] BYREF
  proto::ForceAddPlayerFriendRsp *rsp_0; // [rsp+38h] [rbp-198h]
  std::shared_ptr<proto::ForceAddPlayerFriendRsp> p_rsp_ptr; // [rsp+40h] [rbp-190h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-170h] BYREF
  char v23[336]; // [rsp+80h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 16 is_repeated:1718 64 4 15 target_uid:1699 80 4 15 source_uid:1700 96 16 12 req_ptr:1698"
                        " 128 16 12 rsp_ptr:1698 160 24 19 add_friend_vec:1705 224 24 24 filtered_friend_vec:1706";
  *(_QWORD *)(v2 + 16) = SocialHandler::onForceAddPlayerFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForceAddPlayerFriendReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::ForceAddPlayerFriendReq const>(
         (const std::shared_ptr<const proto::ForceAddPlayerFriendReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onForceAddPlayerFriendReq",
      1698);
    common::milog::MiLogStream::operator()(&v22, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::__shared_ptr_access<proto::ForceAddPlayerFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForceAddPlayerFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::perf::make_shared<proto::ForceAddPlayerFriendRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ForceAddPlayerFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ForceAddPlayerFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto::ForceAddPlayerFriendRsp::set_retcode(rsp_0, -1);
    *(_DWORD *)(v2 + 64) = proto::ForceAddPlayerFriendReq::target_uid((const proto::ForceAddPlayerFriendReq *const)__l._M_len);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 80) = common::minet::Packet::getUserId(v6);
    HIDWORD(__l._M_array) = -1;
    proto::ForceAddPlayerFriendRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 64));
    LODWORD(__l._M_array) = *(_DWORD *)(v2 + 64);
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v2 + 160),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      (const std::vector<unsigned int>::allocator_type *)(v2 + 48));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 224));
    if ( RedisOpSocialData::filterNonexistPlayer(
           (const std::vector<unsigned int> *)(v2 + 160),
           (std::vector<unsigned int> *)(v2 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onForceAddPlayerFriendReq",
        1709);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v22,
        (const char (*)[37])"[Social] filterNonexistPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onForceAddPlayerFriendReq",
        1712);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v22,
             (const char (*)[32])"[Social] filteredPlayer before:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int>(v7, (const std::vector<unsigned int> *)(v2 + 160));
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" after:");
      common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::vector<unsigned int> *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v10 = proto::ForceAddPlayerFriendRsp::mutable_target_friend_brief(rsp_0);
      if ( (unsigned int)SocialHandler::fillFriendBriefData(this, *(_DWORD *)(v2 + 64), v10, 0) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onForceAddPlayerFriendReq",
          1715);
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v22,
                (const char (*)[38])"[Social] fillFriendBriefData failed: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" source_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else if ( RedisOpSocialData::addFriend(*(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 64), (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onForceAddPlayerFriendReq",
          1721);
        v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v22,
                (const char (*)[36])"[Social] addFriendWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else if ( RedisOpSocialData::addFriend(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80), (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onForceAddPlayerFriendReq",
          1726);
        v15 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v22,
                (const char (*)[36])"[Social] addFriendWithTran failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        HIDWORD(__l._M_array) = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
    proto::ForceAddPlayerFriendRsp::set_retcode(rsp_0, SHIDWORD(__l._M_array));
    proto::ForceAddPlayerFriendRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 64));
    v16 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ForceAddPlayerFriendRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ForceAddPlayerFriendRsp> *)(v2 + 128));
    ServiceBase::sendRsp<proto::ForceAddPlayerFriendRsp>(v16, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ForceAddPlayerFriendRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( !HIDWORD(__l._M_array) )
      SocialHandler::notifyAddFriendToOther(this, *(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 64), 0);
    v5 = 0;
    std::shared_ptr<proto::ForceAddPlayerFriendRsp>::~shared_ptr((std::shared_ptr<proto::ForceAddPlayerFriendRsp> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ForceAddPlayerFriendReq const>::~shared_ptr((std::shared_ptr<const proto::ForceAddPlayerFriendReq> *const)(v2 + 96));
  result = v5;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 1744: range 000000000E32FFF6-000000000E330D24
int32_t __cdecl SocialHandler::onServerAddPsnFriendReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int *v22; // rax
  uint32_t *v23; // rdx
  unsigned int *v24; // rax
  uint32_t *v25; // rdx
  SocialService *v26; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-2F4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-2E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-2E0h] BYREF
  const proto::ServerAddPsnFriendReq *req; // [rsp+38h] [rbp-2D8h]
  proto::ServerAddPsnFriendRsp *rsp_0; // [rsp+40h] [rbp-2D0h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-2C8h]
  std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-2C0h]
  std::set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-2B8h]
  std::shared_ptr<proto::ServerAddPsnFriendRsp> p_rsp_ptr; // [rsp+60h] [rbp-2B0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+70h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-290h] BYREF
  char v39[624]; // [rsp+A0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 15 source_uid:1750 48 4 15 target_uid:1769 64 16 12 req_ptr:1745 96 16 12 rsp_ptr:1745 1"
                        "28 24 22 force_add_uid_vec:1759 192 24 21 filtered_uid_vec:1761 256 48 25 source_blacklist_set:1"
                        "751 336 48 16 new_uid_set:1768 416 48 12 add_set:1791 496 48 12 del_set:1792";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddPsnFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862732] = -218959118;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddPsnFriendReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerAddPsnFriendReq const>(
         (const std::shared_ptr<const proto::ServerAddPsnFriendReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddPsnFriendReq",
      1745);
    common::milog::MiLogStream::operator()(&v38, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerAddPsnFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddPsnFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerAddPsnFriendRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerAddPsnFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAddPsnFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerAddPsnFriendRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 256));
    if ( RedisOpSocialData::getPlayerBlacklistSet(*(_DWORD *)(v2 + 32), (std::set<unsigned int> *)(v2 + 256)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerAddPsnFriendReq",
        1754);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v38,
             (const char (*)[44])"[Social] getPlayerBlacklistSet failed with ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
      v8 = proto::ServerAddPsnFriendReq::force_add_psn_friend_uid_list(req);
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v8, (std::vector<unsigned int> *)(v2 + 128));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
      if ( RedisOpSocialData::filterNonexistPlayer(
             (const std::vector<unsigned int> *)(v2 + 128),
             (std::vector<unsigned int> *)(v2 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerAddPsnFriendReq",
          1764);
        v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v38,
               (const char (*)[43])"[Social] filterNonexistPlayer failed with ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 336));
        __for_range = (std::vector<unsigned int> *)(v2 + 192);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 192))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v2 + 48) = *v11;
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 (std::set<unsigned int> *)(v2 + 256),
                 (const unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/social_handler.cpp",
              "onServerAddPsnFriendReq",
              1773);
            v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v38,
                    (const char (*)[12])"target_uid:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])off_1BDA1020);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          else
          {
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 496));
            if ( RedisOpSocialData::getPlayerBlacklistSet(*(_DWORD *)(v2 + 48), (std::set<unsigned int> *)(v2 + 496)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/social_handler.cpp",
                "onServerAddPsnFriendReq",
                1780);
              v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v38,
                      (const char (*)[44])"[Social] getPlayerBlacklistSet failed with ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
            else if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                        (std::set<unsigned int> *)(v2 + 496),
                        (const unsigned int *)(v2 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/social_handler.cpp",
                "onServerAddPsnFriendReq",
                1785);
              v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      &v38,
                      (const char (*)[12])"source_uid:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 32));
              v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v17,
                      (const char (*)[29])off_1BDA10A0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
            else
            {
              std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 336),
                (const std::set<unsigned int>::value_type *)(v2 + 48));
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 496));
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 416));
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 496));
        if ( RedisOpSocialData::replacePlayerPSNFriendSet(
               *(_DWORD *)(v2 + 32),
               (const std::set<unsigned int> *)(v2 + 336),
               (std::set<unsigned int> *)(v2 + 416),
               (std::set<unsigned int> *)(v2 + 496)) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerAddPsnFriendReq",
            1795);
          v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v38,
                  (const char (*)[48])"[Social] replacePlayerPSNFriendSet failed with ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" set:");
          common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::set<unsigned int> *)(v2 + 336));
          common::milog::MiLogStream::~MiLogStream(&v38);
        }
        else
        {
          __for_range_0 = (std::set<unsigned int> *)(v2 + 416);
          __for_begin._M_current = (unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 416))._M_node;
          __for_end._M_current = (unsigned int *)std::set<unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
          {
            v22 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
            v23 = v22;
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v22);
            }
            SocialHandler::notifyAddFriendToOther(this, *(_DWORD *)(v2 + 32), *v23, 1);
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
          }
          __for_range_1 = (std::set<unsigned int> *)(v2 + 496);
          __for_begin._M_current = (unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 496))._M_node;
          __for_end._M_current = (unsigned int *)std::set<unsigned int>::end(__for_range_1)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
          {
            v24 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            SocialHandler::notifyDeleteFriendToOther(this, *(_DWORD *)(v2 + 32), *v25);
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
          }
          retcode = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 496));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 416));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 336));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 256));
    proto::ServerAddPsnFriendRsp::set_retcode(rsp_0, retcode);
    v26 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerAddPsnFriendRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerAddPsnFriendRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerAddPsnFriendRsp>(v26, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerAddPsnFriendRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerAddPsnFriendRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddPsnFriendRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerAddPsnFriendReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAddPsnFriendReq> *const)(v2 + 64));
  result = v5;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 1818: range 000000000E330D26-000000000E3315A8
int32_t __cdecl SocialHandler::onServerAddPsnBlackReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  SocialService *v15; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+14h] [rbp-29Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  const proto::ServerAddPsnBlackReq *req; // [rsp+28h] [rbp-288h]
  proto::ServerAddPsnBlackRsp *rsp_0; // [rsp+30h] [rbp-280h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-278h]
  std::shared_ptr<proto::ServerAddPsnBlackRsp> p_rsp_ptr; // [rsp+40h] [rbp-270h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-260h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-250h] BYREF
  char v26[560]; // [rsp+80h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 15 source_uid:1820 64 4 15 target_uid:1835 80 16 12 req_ptr:1819 112 16 12 rsp_ptr:1819 1"
                        "44 24 28 force_add_black_uid_vec:1825 208 24 27 filtered_black_uid_vec:1827 272 48 12 new_set:18"
                        "34 352 48 12 add_set:1844 432 48 12 del_set:1845";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddPsnBlackReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862730] = -218959118;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862735] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddPsnBlackReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerAddPsnBlackReq const>(
         (const std::shared_ptr<const proto::ServerAddPsnBlackReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddPsnBlackReq",
      1819);
    common::milog::MiLogStream::operator()(&v25, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerAddPsnBlackReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddPsnBlackReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerAddPsnBlackRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerAddPsnBlackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAddPsnBlackRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerAddPsnBlackRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    v7 = proto::ServerAddPsnBlackReq::force_add_psn_black_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 144));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 208));
    if ( RedisOpSocialData::filterNonexistPlayer(
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::vector<unsigned int> *)(v2 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerAddPsnBlackReq",
        1830);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v25,
             (const char (*)[43])"[Social] filterNonexistPlayer failed with ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 272));
      __for_range = (std::vector<unsigned int> *)(v2 + 208);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 208))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 208))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 64) = *v10;
        if ( *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerAddPsnBlackReq",
            1839);
          v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v25,
                  (const char (*)[46])"[Social] player cannot add self to blacklist:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v2 + 272),
            (const std::set<unsigned int>::value_type *)(v2 + 64));
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 352));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 432));
      if ( RedisOpSocialData::replacePlayerPSNBlackListSet(
             *(_DWORD *)(v2 + 48),
             (const std::set<unsigned int> *)(v2 + 272),
             (std::set<unsigned int> *)(v2 + 352),
             (std::set<unsigned int> *)(v2 + 432)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerAddPsnBlackReq",
          1848);
        v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v25,
                (const char (*)[59])"[Social] replacePlayerPSNBlackListSet failed, source_uid: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" set:");
        common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::set<unsigned int> *)(v2 + 272));
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        retcode = 0;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 432));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 352));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 272));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::ServerAddPsnBlackRsp::set_retcode(rsp_0, retcode);
    v15 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerAddPsnBlackRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerAddPsnBlackRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerAddPsnBlackRsp>(v15, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerAddPsnBlackRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerAddPsnBlackRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddPsnBlackRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerAddPsnBlackReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAddPsnBlackReq> *const)(v2 + 80));
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 1861: range 000000000E3315AA-000000000E331CBF
int32_t __cdecl SocialHandler::onServerPlantFlowerGetFriendFlowerDataReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  google::protobuf::Map<unsigned int,unsigned int> *v8; // r14
  const google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v14; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v15; // r14
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v16; // rax
  const proto::PlantFlowerSocialData *v17; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v18; // rax
  SocialService *v19; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+18h] [rbp-218h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-214h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+20h] [rbp-210h] BYREF
  const proto::ServerPlantFlowerGetFriendFlowerDataReq *req; // [rsp+28h] [rbp-208h]
  proto::ServerPlantFlowerGetFriendFlowerDataRsp *rsp_0; // [rsp+30h] [rbp-200h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+38h] [rbp-1F8h]
  std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp> p_rsp_ptr; // [rsp+40h] [rbp-1F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-1E0h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+60h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-1B0h] BYREF
  char v31[400]; // [rsp+A0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 8 18 activity_iter:1879 80 16 12 req_ptr:1862 112 16 12 rsp_ptr:1862 144 24 12 uid_vec:1870"
                        " 208 24 9 iter:1883 272 48 35 activity_social_redis_data_map:1872";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPlantFlowerGetFriendFlowerDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPlantFlowerGetFriendFlowerDataReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerPlantFlowerGetFriendFlowerDataReq const>(
         (const std::shared_ptr<const proto::ServerPlantFlowerGetFriendFlowerDataReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPlantFlowerGetFriendFlowerDataReq",
      1862);
    common::milog::MiLogStream::operator()(&v30, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPlantFlowerGetFriendFlowerDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerPlantFlowerGetFriendFlowerDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerPlantFlowerGetFriendFlowerDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerPlantFlowerGetFriendFlowerDataReq::schedule_id(req);
    proto::ServerPlantFlowerGetFriendFlowerDataRsp::set_schedule_id(rsp_0, v6);
    v7 = proto::ServerPlantFlowerGetFriendFlowerDataReq::friend_uid(req);
    proto::ServerPlantFlowerGetFriendFlowerDataRsp::set_friend_uid(rsp_0, v7);
    v8 = proto::ServerPlantFlowerGetFriendFlowerDataRsp::mutable_give_flower_num_map(rsp_0);
    v9 = proto::ServerPlantFlowerGetFriendFlowerDataReq::give_flower_num_map(req);
    common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      v9,
      v8);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    __x = proto::ServerPlantFlowerGetFriendFlowerDataReq::friend_uid(req);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 144), &__x);
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerPlantFlowerGetFriendFlowerDataReq",
        1875);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      __x = common::minet::Packet::getUserId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &__x);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" friend uid:");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      __x = proto::ServerPlantFlowerGetFriendFlowerDataReq::friend_uid(req);
      *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 48) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find(
                                                                                              (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272),
                                                                                              &__x);
      __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272))._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 48),
             &__y) )
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 48));
        social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v14->second);
        __x = proto::ServerPlantFlowerGetFriendFlowerDataReq::schedule_id(req);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
          (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
          social_data_map,
          &__x);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
        if ( google::protobuf::operator!=(
               (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
               &b) )
        {
          v15 = proto::ServerPlantFlowerGetFriendFlowerDataRsp::mutable_have_flower_num_map(rsp_0);
          v16 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 208));
          v17 = proto::ActivitySocialData::plant_flower_data(&v16->second);
          v18 = proto::PlantFlowerSocialData::have_flower_num_map(v17);
          common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
            v18,
            v15);
        }
      }
      retcode = 0;
    }
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::ServerPlantFlowerGetFriendFlowerDataRsp::set_retcode(rsp_0, retcode);
    v19 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerPlantFlowerGetFriendFlowerDataRsp>(v19, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPlantFlowerGetFriendFlowerDataReq> *const)(v2 + 80));
  result = v5;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 1899: range 000000000E331CC0-000000000E332683
int32_t __cdecl SocialHandler::onServerPlantFlowerGetFriendFlowerWishListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const proto::PlayerHomeBriefData *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  const std::string *v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v20; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v21; // r14
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v22; // rax
  const proto::PlantFlowerSocialData *v23; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v24; // rax
  SocialService *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-2A0h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-29Ch]
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+28h] [rbp-288h] BYREF
  const proto::ServerPlantFlowerGetFriendFlowerWishListReq *req; // [rsp+30h] [rbp-280h]
  proto::ServerPlantFlowerGetFriendFlowerWishListRsp *rsp_0; // [rsp+38h] [rbp-278h]
  std::map<unsigned int,proto::PlayerBriefDataRedisData> *__for_range; // [rsp+40h] [rbp-270h]
  const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> *v35; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *friend_uid; // [rsp+50h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *brief_redis_data; // [rsp+58h] [rbp-258h]
  const proto::PlayerBasicBriefData *friend_basic_brief; // [rsp+60h] [rbp-250h]
  proto::PlantFlowerFriendFlowerWishData *flower_wish_data; // [rsp+68h] [rbp-248h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+70h] [rbp-240h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+78h] [rbp-238h]
  std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp> p_rsp_ptr; // [rsp+80h] [rbp-230h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+90h] [rbp-220h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+A0h] [rbp-210h] BYREF
  common::milog::MiLogStream v45; // [rsp+C0h] [rbp-1F0h] BYREF
  char v46[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 18 activity_iter:1941 64 16 12 req_ptr:1900 96 16 12 rsp_ptr:1900 128 24 12 uid_vec:1902 "
                        "192 24 9 iter:1947 256 48 21 friend_brief_map:1912 336 48 35 activity_social_redis_data_map:1919";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPlantFlowerGetFriendFlowerWishListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPlantFlowerGetFriendFlowerWishListReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerPlantFlowerGetFriendFlowerWishListReq const>(
         (const std::shared_ptr<const proto::ServerPlantFlowerGetFriendFlowerWishListReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPlantFlowerGetFriendFlowerWishListReq",
      1900);
    common::milog::MiLogStream::operator()(&v45, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerWishListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPlantFlowerGetFriendFlowerWishListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerPlantFlowerGetFriendFlowerWishListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerPlantFlowerGetFriendFlowerWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerPlantFlowerGetFriendFlowerWishListRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerPlantFlowerGetFriendFlowerWishListReq::schedule_id(req);
    proto::ServerPlantFlowerGetFriendFlowerWishListRsp::set_schedule_id(rsp_0, v6);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v7 = proto::ServerPlantFlowerGetFriendFlowerWishListReq::friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 128));
    retcode = -1;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      retcode = 0;
    }
    else
    {
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
      if ( RedisOpSocialData::getPlayerBriefDataBatch(
             (const std::vector<unsigned int> *)(v2 + 128),
             (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerPlantFlowerGetFriendFlowerWishListReq",
          1915);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v45,
               (const char (*)[37])"getPlayerBriefDataBatch failed, uid:");
        v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v9);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" friend uid:");
        common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
        if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
               (const std::vector<unsigned int> *)(v2 + 128),
               (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerPlantFlowerGetFriendFlowerWishListReq",
            1922);
          v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v45,
                  (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
          v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v13);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" friend uid:");
          common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::vector<unsigned int> *)(v2 + 128));
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
        else
        {
          __for_range = (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256);
          __for_begin._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::begin((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          __for_end._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::end((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator*(&__for_begin);
            friend_uid = std::get<0ul,unsigned int const,proto::PlayerBriefDataRedisData>(v35);
            brief_redis_data = (std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *)std::get<1ul,unsigned int const,proto::PlayerBriefDataRedisData>(v35);
            v16 = proto::PlayerBriefDataRedisData::home_brief(brief_redis_data);
            if ( proto::PlayerHomeBriefData::is_home_available(v16) )
            {
              friend_basic_brief = proto::PlayerBriefDataRedisData::basic_brief(brief_redis_data);
              flower_wish_data = proto::ServerPlantFlowerGetFriendFlowerWishListRsp::add_friend_flower_wish_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)friend_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)friend_uid >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(friend_uid);
              }
              proto::PlantFlowerFriendFlowerWishData::set_uid(flower_wish_data, *friend_uid);
              profile_picture_proto = proto::PlantFlowerFriendFlowerWishData::mutable_profile_picture(flower_wish_data);
              v17 = proto::PlayerBasicBriefData::head_image_avatar_id(friend_basic_brief);
              proto::ProfilePicture::set_avatar_id(profile_picture_proto, v17);
              v18 = proto::PlayerBasicBriefData::profile_picture_costume_id(friend_basic_brief);
              proto::ProfilePicture::set_costume_id(profile_picture_proto, v18);
              v19 = proto::PlayerBasicBriefData::nickname[abi:cxx11](friend_basic_brief);
              proto::PlantFlowerFriendFlowerWishData::set_nickname(flower_wish_data, v19);
              *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 32) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336), friend_uid);
              __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336))._M_node;
              if ( !std::operator==(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 32),
                      &__y) )
              {
                v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 32));
                social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v20->second);
                val = proto::ServerPlantFlowerGetFriendFlowerWishListReq::schedule_id(req);
                google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
                  (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                  social_data_map,
                  &val);
                google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
                if ( google::protobuf::operator!=(
                       (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                       &b) )
                {
                  v21 = proto::PlantFlowerFriendFlowerWishData::mutable_flower_num_map(flower_wish_data);
                  v22 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 192));
                  v23 = proto::ActivitySocialData::plant_flower_data(&v22->second);
                  v24 = proto::PlantFlowerSocialData::wish_flower_num_map(v23);
                  common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
                    v24,
                    v21);
                }
              }
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator++(&__for_begin);
          }
          retcode = 0;
        }
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
      }
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::~map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
    }
    proto::ServerPlantFlowerGetFriendFlowerWishListRsp::set_retcode(rsp_0, retcode);
    v25 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerPlantFlowerGetFriendFlowerWishListRsp>(v25, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp>::~shared_ptr((std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerPlantFlowerGetFriendFlowerWishListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPlantFlowerGetFriendFlowerWishListReq> *const)(v2 + 64));
  result = v5;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1964: range 000000000E332684-000000000E333029
int32_t __cdecl SocialHandler::onServerWinterCampGetFriendWishListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  const std::string *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // r14
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v21; // rax
  const proto::WinterCampSocialData *v22; // rax
  const google::protobuf::RepeatedField<unsigned int> *v23; // rax
  SocialService *v24; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-2A0h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-29Ch]
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+28h] [rbp-288h] BYREF
  const proto::ServerWinterCampGetFriendWishListReq *req; // [rsp+30h] [rbp-280h]
  proto::ServerWinterCampGetFriendWishListRsp *rsp_0; // [rsp+38h] [rbp-278h]
  std::map<unsigned int,proto::PlayerBriefDataRedisData> *__for_range; // [rsp+40h] [rbp-270h]
  const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> *v34; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *friend_uid; // [rsp+50h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *brief_redis_data; // [rsp+58h] [rbp-258h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+60h] [rbp-250h]
  const proto::PlayerBasicBriefData *friend_basic_brief; // [rsp+68h] [rbp-248h]
  proto::WinterCampFriendWishData *wish_data; // [rsp+70h] [rbp-240h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+78h] [rbp-238h]
  std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp> p_rsp_ptr; // [rsp+80h] [rbp-230h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+90h] [rbp-220h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+A0h] [rbp-210h] BYREF
  common::milog::MiLogStream v44; // [rsp+C0h] [rbp-1F0h] BYREF
  char v45[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 18 activity_iter:1993 64 16 12 req_ptr:1965 96 16 12 rsp_ptr:1965 128 24 12 uid_vec:1967 "
                        "192 24 9 iter:2000 256 48 21 friend_brief_map:1977 336 48 35 activity_social_redis_data_map:1984";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerWinterCampGetFriendWishListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerWinterCampGetFriendWishListReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerWinterCampGetFriendWishListReq const>(
         (const std::shared_ptr<const proto::ServerWinterCampGetFriendWishListReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerWinterCampGetFriendWishListReq",
      1965);
    common::milog::MiLogStream::operator()(&v44, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerWinterCampGetFriendWishListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerWinterCampGetFriendWishListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerWinterCampGetFriendWishListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerWinterCampGetFriendWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerWinterCampGetFriendWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerWinterCampGetFriendWishListRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerWinterCampGetFriendWishListReq::schedule_id(req);
    proto::ServerWinterCampGetFriendWishListRsp::set_schedule_id(rsp_0, v6);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v7 = proto::ServerWinterCampGetFriendWishListReq::friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 128));
    retcode = -1;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      retcode = 0;
    }
    else
    {
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
      if ( RedisOpSocialData::getPlayerBriefDataBatch(
             (const std::vector<unsigned int> *)(v2 + 128),
             (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerWinterCampGetFriendWishListReq",
          1980);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v44,
               (const char (*)[37])"getPlayerBriefDataBatch failed, uid:");
        v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v9);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" friend uid:");
        common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
        if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
               (const std::vector<unsigned int> *)(v2 + 128),
               (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerWinterCampGetFriendWishListReq",
            1987);
          v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v44,
                  (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
          v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v13);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" friend uid:");
          common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::vector<unsigned int> *)(v2 + 128));
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          __for_range = (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256);
          __for_begin._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::begin((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          __for_end._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::end((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator*(&__for_begin);
            friend_uid = std::get<0ul,unsigned int const,proto::PlayerBriefDataRedisData>(v34);
            brief_redis_data = (std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *)std::get<1ul,unsigned int const,proto::PlayerBriefDataRedisData>(v34);
            *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 32) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find(
                                                                                                    (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336),
                                                                                                    friend_uid);
            __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336))._M_node;
            if ( !std::operator==(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 32),
                    &__y) )
            {
              v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 32));
              social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v16->second);
              val = proto::ServerWinterCampGetFriendWishListReq::schedule_id(req);
              google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
                (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                social_data_map,
                &val);
              google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
              if ( !google::protobuf::operator==(
                      (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                      &b) )
              {
                friend_basic_brief = proto::PlayerBriefDataRedisData::basic_brief(brief_redis_data);
                wish_data = proto::ServerWinterCampGetFriendWishListRsp::add_wish_data_list(rsp_0);
                if ( *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)friend_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)friend_uid >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(friend_uid);
                }
                proto::WinterCampFriendWishData::set_uid(wish_data, *friend_uid);
                profile_picture_proto = proto::WinterCampFriendWishData::mutable_profile_picture(wish_data);
                v17 = proto::PlayerBasicBriefData::head_image_avatar_id(friend_basic_brief);
                proto::ProfilePicture::set_avatar_id(profile_picture_proto, v17);
                v18 = proto::PlayerBasicBriefData::profile_picture_costume_id(friend_basic_brief);
                proto::ProfilePicture::set_costume_id(profile_picture_proto, v18);
                v19 = proto::PlayerBasicBriefData::nickname[abi:cxx11](friend_basic_brief);
                proto::WinterCampFriendWishData::set_nickname(wish_data, v19);
                v20 = proto::WinterCampFriendWishData::mutable_item_id_list(wish_data);
                v21 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 192));
                v22 = proto::ActivitySocialData::winter_camp_data(&v21->second);
                v23 = proto::WinterCampSocialData::wish_item_id_list(v22);
                google::protobuf::RepeatedField<unsigned int>::CopyFrom(v20, v23);
              }
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator++(&__for_begin);
          }
          retcode = 0;
        }
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
      }
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::~map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
    }
    proto::ServerWinterCampGetFriendWishListRsp::set_retcode(rsp_0, retcode);
    v24 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerWinterCampGetFriendWishListRsp>(v24, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp>::~shared_ptr((std::shared_ptr<proto::ServerWinterCampGetFriendWishListRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerWinterCampGetFriendWishListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerWinterCampGetFriendWishListReq> *const)(v2 + 64));
  result = v5;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2025: range 000000000E33302A-000000000E3337FE
int32_t __cdecl SocialHandler::onServerWinterCampGetFriendItemDataReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v8; // r14
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v14; // rax
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v15; // rax
  const proto::WinterCampSocialData *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  SocialService *v19; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+18h] [rbp-238h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-234h]
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end; // [rsp+28h] [rbp-228h] BYREF
  const proto::ServerWinterCampGetFriendItemDataReq *req; // [rsp+30h] [rbp-220h]
  proto::ServerWinterCampGetFriendItemDataRsp *rsp_0; // [rsp+38h] [rbp-218h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+40h] [rbp-210h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range; // [rsp+48h] [rbp-208h]
  const proto::ItemParamBin *item_bin; // [rsp+50h] [rbp-200h]
  proto::ItemParam *item_param; // [rsp+58h] [rbp-1F8h]
  std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp> p_rsp_ptr; // [rsp+60h] [rbp-1F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+70h] [rbp-1E0h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-1B0h] BYREF
  char v35[400]; // [rsp+C0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 8 18 activity_iter:2043 80 16 12 req_ptr:2026 112 16 12 rsp_ptr:2026 144 24 12 uid_vec:2035"
                        " 208 24 9 iter:2047 272 48 35 activity_social_redis_data_map:2037";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerWinterCampGetFriendItemDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerWinterCampGetFriendItemDataReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerWinterCampGetFriendItemDataReq const>(
         (const std::shared_ptr<const proto::ServerWinterCampGetFriendItemDataReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerWinterCampGetFriendItemDataReq",
      2026);
    common::milog::MiLogStream::operator()(&v34, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerWinterCampGetFriendItemDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerWinterCampGetFriendItemDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerWinterCampGetFriendItemDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerWinterCampGetFriendItemDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerWinterCampGetFriendItemDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerWinterCampGetFriendItemDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerWinterCampGetFriendItemDataReq::schedule_id(req);
    proto::ServerWinterCampGetFriendItemDataRsp::set_schedule_id(rsp_0, v6);
    v7 = proto::ServerWinterCampGetFriendItemDataReq::friend_uid(req);
    proto::ServerWinterCampGetFriendItemDataRsp::set_friend_uid(rsp_0, v7);
    v8 = proto::ServerWinterCampGetFriendItemDataRsp::mutable_give_item_list(rsp_0);
    v9 = proto::ServerWinterCampGetFriendItemDataReq::give_item_list(req);
    google::protobuf::RepeatedPtrField<proto::ItemParam>::CopyFrom(v8, v9);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    __x = proto::ServerWinterCampGetFriendItemDataReq::friend_uid(req);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 144), &__x);
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerWinterCampGetFriendItemDataReq",
        2040);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v34,
              (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      __x = common::minet::Packet::getUserId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &__x);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" friend uid:");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      __x = proto::ServerWinterCampGetFriendItemDataReq::friend_uid(req);
      *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 48) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find(
                                                                                              (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272),
                                                                                              &__x);
      __for_end.it_ = (void *const *)std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272))._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 48),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)&__for_end) )
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 48));
        social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v14->second);
        __x = proto::ServerWinterCampGetFriendItemDataReq::schedule_id(req);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
          (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
          social_data_map,
          &__x);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
        if ( google::protobuf::operator!=(
               (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
               &b) )
        {
          v15 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 208));
          v16 = proto::ActivitySocialData::winter_camp_data(&v15->second);
          __for_range = proto::WinterCampSocialData::have_item_bin_list(v16);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
            item_param = proto::ServerWinterCampGetFriendItemDataRsp::add_friend_item_list(rsp_0);
            v17 = proto::ItemParamBin::item_id(item_bin);
            proto::ItemParam::set_item_id(item_param, v17);
            v18 = proto::ItemParamBin::count(item_bin);
            proto::ItemParam::set_count(item_param, v18);
            google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
          }
        }
      }
      retcode = 0;
    }
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::ServerWinterCampGetFriendItemDataRsp::set_retcode(rsp_0, retcode);
    v19 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerWinterCampGetFriendItemDataRsp>(v19, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerWinterCampGetFriendItemDataRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerWinterCampGetFriendItemDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerWinterCampGetFriendItemDataReq> *const)(v2 + 80));
  result = v5;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 2067: range 000000000E333800-000000000E333F72
std::pair<int,unsigned int> __fastcall SocialHandler::internalDeleteFriend(
        SocialHandler *const this,
        uint32_t source_id,
        uint32_t target_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::pair<int,unsigned int> result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-120h]
  std::less<unsigned int> __comp; // [rsp+36h] [rbp-FAh] BYREF
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-F9h] BYREF
  proto::Retcode __x; // [rsp+38h] [rbp-F8h] BYREF
  int __y; // [rsp+3Ch] [rbp-F4h] BYREF
  std::pair<proto::Retcode,int> __p; // [rsp+40h] [rbp-F0h] BYREF
  std::pair<int,unsigned int> v26; // [rsp+48h] [rbp-E8h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> target_uid_set; // [rsp+70h] [rbp-C0h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 22 target_friend_num:2091 48 4 14 source_id:2066 64 4 14 target_id:2066";
  *(_QWORD *)(v3 + 16) = SocialHandler::internalDeleteFriend;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = source_id;
  *(_DWORD *)(v3 + 64) = target_id;
  if ( RedisOpSocialData::removeFriend(*(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "internalDeleteFriend",
      2070);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v27,
           (const char (*)[31])"[Social] removeFriend failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    __y = 0;
    __x = RET_FAIL;
    __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
    std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    result = v26;
  }
  else if ( RedisOpSocialData::removeFriend(*(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "internalDeleteFriend",
      2076);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v27,
           (const char (*)[31])"[Social] removeFriend failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    __y = 0;
    __x = RET_FAIL;
    __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
    std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    result = v26;
  }
  else
  {
    __y = *(_DWORD *)(v3 + 64);
    __l._M_array = (std::initializer_list<unsigned int>::iterator)&__y;
    __l._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(&target_uid_set, __l, &__comp, &__a);
    LOBYTE(__l._M_array) = (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(
                                           *(_DWORD *)(v3 + 48),
                                           &target_uid_set) != 0;
    std::set<unsigned int>::~set(&target_uid_set);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( LOBYTE(__l._M_array) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeleteFriend",
        2083);
      v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v27,
             (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    __y = *(_DWORD *)(v3 + 48);
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      &target_uid_set,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__y),
      &__comp,
      &__a);
    v13 = (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(*(_DWORD *)(v3 + 64), &target_uid_set) != 0;
    std::set<unsigned int>::~set(&target_uid_set);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeleteFriend",
        2088);
      v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v27,
              (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v15, (const char (*)[3])", ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    if ( RedisOpSocialData::getFriendCount(*(_DWORD *)(v3 + 64), (uint32_t *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeleteFriend",
        2094);
      v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v27,
              (const char (*)[33])"[Social] getFriendCount failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      __y = 0;
      __x = RET_FAIL;
      __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
      std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    }
    else
    {
      __y = 0;
      __p = (std::pair<proto::Retcode,int>)std::make_pair<proto::Retcode,unsigned int &>(
                                             (proto::Retcode *)&__y,
                                             (unsigned int *)(v3 + 32));
      std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
        &v26,
        (std::pair<proto::Retcode,unsigned int> *)&__p);
    }
    result = v26;
  }
  if ( v29 == (char *)v3 )
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

// Line 2101: range 000000000E333F74-000000000E3346E6
std::pair<int,unsigned int> __fastcall SocialHandler::internalDeletePSNFriend(
        SocialHandler *const this,
        uint32_t source_id,
        uint32_t target_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::pair<int,unsigned int> result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-120h]
  std::less<unsigned int> __comp; // [rsp+36h] [rbp-FAh] BYREF
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-F9h] BYREF
  proto::Retcode __x; // [rsp+38h] [rbp-F8h] BYREF
  int __y; // [rsp+3Ch] [rbp-F4h] BYREF
  std::pair<proto::Retcode,int> __p; // [rsp+40h] [rbp-F0h] BYREF
  std::pair<int,unsigned int> v26; // [rsp+48h] [rbp-E8h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> target_uid_set; // [rsp+70h] [rbp-C0h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 22 target_friend_num:2125 48 4 14 source_id:2100 64 4 14 target_id:2100";
  *(_QWORD *)(v3 + 16) = SocialHandler::internalDeletePSNFriend;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = source_id;
  *(_DWORD *)(v3 + 64) = target_id;
  if ( RedisOpSocialData::removePSNFriend(*(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "internalDeletePSNFriend",
      2104);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"[Social] removePSNFriend failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    __y = 0;
    __x = RET_FAIL;
    __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
    std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    result = v26;
  }
  else if ( RedisOpSocialData::removePSNFriend(*(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "internalDeletePSNFriend",
      2110);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"[Social] removePSNFriend failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    __y = 0;
    __x = RET_FAIL;
    __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
    std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    result = v26;
  }
  else
  {
    __y = *(_DWORD *)(v3 + 64);
    __l._M_array = (std::initializer_list<unsigned int>::iterator)&__y;
    __l._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(&target_uid_set, __l, &__comp, &__a);
    LOBYTE(__l._M_array) = (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(
                                           *(_DWORD *)(v3 + 48),
                                           &target_uid_set) != 0;
    std::set<unsigned int>::~set(&target_uid_set);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( LOBYTE(__l._M_array) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeletePSNFriend",
        2117);
      v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v27,
             (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    __y = *(_DWORD *)(v3 + 48);
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      &target_uid_set,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__y),
      &__comp,
      &__a);
    v13 = (unsigned int)RedisOpSocialData::removePrivateChatUnreadUidSet(*(_DWORD *)(v3 + 64), &target_uid_set) != 0;
    std::set<unsigned int>::~set(&target_uid_set);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeletePSNFriend",
        2122);
      v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v27,
              (const char (*)[58])"[Social] redis op removePrivateChatUnreadUidSet failed. [");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v15, (const char (*)[3])", ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    if ( RedisOpSocialData::getPSNFriendCount(*(_DWORD *)(v3 + 64), (uint32_t *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "internalDeletePSNFriend",
        2128);
      v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v27,
              (const char (*)[36])"[Social] getPSNFriendCount failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      __y = 0;
      __x = RET_FAIL;
      __p = std::make_pair<proto::Retcode,int>(&__x, &__y);
      std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(&v26, &__p);
    }
    else
    {
      __y = 0;
      __p = (std::pair<proto::Retcode,int>)std::make_pair<proto::Retcode,unsigned int &>(
                                             (proto::Retcode *)&__y,
                                             (unsigned int *)(v3 + 32));
      std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
        &v26,
        (std::pair<proto::Retcode,unsigned int> *)&__p);
    }
    result = v26;
  }
  if ( v29 == (char *)v3 )
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

// Line 2135: range 000000000E3346E8-000000000E3356B6
int32_t __cdecl SocialHandler::onServerAddFriendByMuipReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  proto::FriendBrief *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  SocialService *v24; // r14
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+18h] [rbp-1F8h]
  uint32_t friend_limit_num; // [rsp+1Ch] [rbp-1F4h]
  std::__shared_ptr_access<const proto::ServerAddFriendByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-1F0h]
  std::__shared_ptr_access<proto::ServerAddFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-1E8h]
  std::shared_ptr<Config> v33; // [rsp+30h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-1D0h] BYREF
  char v35[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 16 is_repeated:2144 64 1 20 is_in_blacklist:2154 80 1 13 is_asked:2242 96 4 15 target_ui"
                        "d:2138 112 4 15 source_uid:2139 128 4 29 target_friend_list_count:2192 144 4 29 source_friend_li"
                        "st_count:2206 160 8 13 uid_pair:2140 192 16 12 req_ptr:2136 224 16 12 rsp_ptr:2136 256 16 10 tim"
                        "er:2137 288 16 27 source_friend_tran_ptr:2190 320 16 27 target_friend_tran_ptr:2190 352 16 17 ask_tran_ptr:2241";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddFriendByMuipReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddFriendByMuipReq>((common::minet::Packet *const)(v2 + 192));
  if ( std::operator==<proto::ServerAddFriendByMuipReq const>(
         (const std::shared_ptr<const proto::ServerAddFriendByMuipReq> *)(v2 + 192),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendByMuipReq",
      2136);
    common::milog::MiLogStream::operator()(&v34, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerAddFriendByMuipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddFriendByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    common::tools::perf::make_shared<proto::ServerAddFriendByMuipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerAddFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAddFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
    proto::ServerAddFriendByMuipRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 256));
    *(_DWORD *)(v2 + 96) = proto::ServerAddFriendByMuipReq::target_uid(req);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 112) = common::minet::Packet::getUserId(v6);
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)(v2 + 160),
      (unsigned int *)(v2 + 112),
      (unsigned int *)(v2 + 96));
    proto::ServerAddFriendByMuipRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 96));
    retcode = -1;
    *(_BYTE *)(v2 + 48) = 0;
    if ( *(_DWORD *)(v2 + 96) == *(_DWORD *)(v2 + 112) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerAddFriendByMuipReq",
        2149);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
             &v34,
             (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" self add.");
      common::milog::MiLogStream::~MiLogStream(&v34);
      retcode = 7010;
    }
    else
    {
      *(_BYTE *)(v2 + 64) = 0;
      if ( RedisOpSocialData::isInPlayerAnyBlacklist(*(_DWORD *)(v2 + 112), *(_DWORD *)(v2 + 96), (bool *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerAddFriendByMuipReq",
          2157);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
               &v34,
               (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v8,
          (const char (*)[26])" black list check failed.");
        common::milog::MiLogStream::~MiLogStream(&v34);
        retcode = 1;
      }
      else if ( *(_BYTE *)(v2 + 64) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onServerAddFriendByMuipReq",
          2163);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
               &v34,
               (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])off_1BDA1E00);
        common::milog::MiLogStream::~MiLogStream(&v34);
        retcode = 7020;
      }
      else
      {
        *(_BYTE *)(v2 + 64) = 0;
        if ( RedisOpSocialData::isInPlayerAnyBlacklist(*(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 112), (bool *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerAddFriendByMuipReq",
            2171);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  &v34,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v10,
            (const char (*)[30])" rev black list check failed.");
          common::milog::MiLogStream::~MiLogStream(&v34);
          retcode = 1;
        }
        else if ( *(_BYTE *)(v2 + 64) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/social_handler.cpp",
            "onServerAddFriendByMuipReq",
            2177);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  &v34,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])off_1BDA1E80);
          common::milog::MiLogStream::~MiLogStream(&v34);
          retcode = 7020;
        }
        else if ( !SocialHandler::isSatisfiedPSConstraint(this, *(_DWORD *)(v2 + 112), *(_DWORD *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/social_handler.cpp",
            "onServerAddFriendByMuipReq",
            2185);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  &v34,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v12,
            (const char (*)[28])" not satisfy ps constraint.");
          common::milog::MiLogStream::~MiLogStream(&v34);
          retcode = 7021;
        }
        else
        {
          *(_QWORD *)(v2 + 288) = 0LL;
          *(_QWORD *)(v2 + 296) = 0LL;
          *(_QWORD *)(v2 + 320) = 0LL;
          *(_QWORD *)(v2 + 328) = 0LL;
          *(_DWORD *)(v2 + 128) = 0;
          if ( RedisOpSocialData::getFriendCountWithTran(
                 *(_DWORD *)(v2 + 96),
                 (uint32_t *)(v2 + 128),
                 (common::midb::GetAndSetTranPtr *)(v2 + 320)) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerAddFriendByMuipReq",
              2195);
            v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v34,
                    (const char (*)[48])"[Social] getFriendCountWithTran target failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v13,
              (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            Config::getConfig();
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
            friend_limit_num = ConstValueExcelConfigMgr::getFriendLimitNum(&v14->design_config_.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr(&v33);
            if ( friend_limit_num > *(_DWORD *)(v2 + 128) )
            {
              *(_DWORD *)(v2 + 144) = 0;
              if ( RedisOpSocialData::getFriendCountWithTran(
                     *(_DWORD *)(v2 + 112),
                     (uint32_t *)(v2 + 144),
                     (common::midb::GetAndSetTranPtr *)(v2 + 288)) )
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/social_handler.cpp",
                  "onServerAddFriendByMuipReq",
                  2209);
                v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        &v34,
                        (const char (*)[46])"[Social] getFriendCountWithTran self failed: ");
                common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  v15,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
                common::milog::MiLogStream::~MiLogStream(&v34);
              }
              else if ( friend_limit_num > *(_DWORD *)(v2 + 144) )
              {
                if ( (unsigned int)RedisOpSocialData::addFriendWithTran(
                                     (const common::midb::GetAndSetTranPtr *)(v2 + 288),
                                     *(_DWORD *)(v2 + 112),
                                     *(_DWORD *)(v2 + 96),
                                     (bool *)(v2 + 48)) )
                {
                  common::milog::MiLogStream::create(
                    &v34,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/social_handler.cpp",
                    "onServerAddFriendByMuipReq",
                    2220);
                  v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v34,
                          (const char (*)[36])"[Social] addFriendWithTran failed: ");
                  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                    v16,
                    (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
                  common::milog::MiLogStream::~MiLogStream(&v34);
                }
                else if ( (unsigned int)RedisOpSocialData::addFriendWithTran(
                                          (const common::midb::GetAndSetTranPtr *)(v2 + 320),
                                          *(_DWORD *)(v2 + 96),
                                          *(_DWORD *)(v2 + 112),
                                          (bool *)(v2 + 48)) )
                {
                  common::milog::MiLogStream::create(
                    &v34,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/social_handler.cpp",
                    "onServerAddFriendByMuipReq",
                    2227);
                  v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v34,
                          (const char (*)[36])"[Social] addFriendWithTran failed: ");
                  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                    v17,
                    (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
                  common::milog::MiLogStream::~MiLogStream(&v34);
                }
                else
                {
                  v18 = proto::ServerAddFriendByMuipRsp::mutable_target_friend_brief(rsp_0);
                  if ( (unsigned int)SocialHandler::fillFriendBriefData(this, *(_DWORD *)(v2 + 96), v18, 0) )
                  {
                    common::milog::MiLogStream::create(
                      &v34,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/social_handler.cpp",
                      "onServerAddFriendByMuipReq",
                      2233);
                    v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v34,
                            (const char (*)[38])"fillFriendBriefData fail, target_uid:");
                    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v19,
                            (const unsigned int *)(v2 + 96));
                    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v20,
                            (const char (*)[13])" source_uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 112));
                    common::milog::MiLogStream::~MiLogStream(&v34);
                  }
                  proto::ServerAddFriendByMuipRsp::set_target_friend_num(rsp_0, *(_DWORD *)(v2 + 128) + 1);
                  retcode = 0;
                  *(_QWORD *)(v2 + 352) = 0LL;
                  *(_QWORD *)(v2 + 360) = 0LL;
                  *(_BYTE *)(v2 + 80) = 0;
                  if ( RedisOpSocialData::isPlayerAskAddFriendWithTran(
                         *(_DWORD *)(v2 + 112),
                         *(_DWORD *)(v2 + 96),
                         (bool *)(v2 + 80),
                         (common::midb::GetAndSetTranPtr *)(v2 + 352)) )
                  {
                    common::milog::MiLogStream::create(
                      &v34,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/social_handler.cpp",
                      "onServerAddFriendByMuipReq",
                      2245);
                    v22 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v34,
                            (const char (*)[47])"[Social] isPlayerAskAddFriendWithTran failed: ");
                    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      v22,
                      (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
                    common::milog::MiLogStream::~MiLogStream(&v34);
                  }
                  else if ( *(_BYTE *)(v2 + 80) == 1
                         && RedisOpSocialData::removeAskFriendWithTran(
                              (const common::midb::GetAndSetTranPtr *)(v2 + 352),
                              *(_DWORD *)(v2 + 112),
                              *(_DWORD *)(v2 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v34,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/social_handler.cpp",
                      "onServerAddFriendByMuipReq",
                      2255);
                    v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            &v34,
                            (const char (*)[42])"[Social] removeAskFriendWithTran failed: ");
                    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      v23,
                      (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
                    common::milog::MiLogStream::~MiLogStream(&v34);
                  }
                  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 352));
                }
              }
              else
              {
                retcode = 7001;
              }
            }
            else
            {
              retcode = 7007;
            }
          }
          std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 320));
          std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 288));
        }
      }
    }
    proto::ServerAddFriendByMuipRsp::set_retcode(rsp_0, retcode);
    v24 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 352),
      p_packet_ptr);
    std::shared_ptr<proto::ServerAddFriendByMuipRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerAddFriendByMuipRsp> *const)&v33,
      (const std::shared_ptr<proto::ServerAddFriendByMuipRsp> *)(v2 + 224));
    ServiceBase::sendRsp<proto::ServerAddFriendByMuipRsp>(
      v24,
      (std::shared_ptr<proto::ServerAddFriendByMuipRsp> *)&v33,
      (common::minet::PacketPtr *)(v2 + 352));
    std::shared_ptr<proto::ServerAddFriendByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddFriendByMuipRsp> *const)&v33);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 352));
    if ( !retcode && *(_BYTE *)(v2 + 48) != 1 )
    {
      SocialHandler::notifyAddFriendToOther(this, *(_DWORD *)(v2 + 112), *(_DWORD *)(v2 + 96), 0);
      SocialHandler::notifyAddFriendToOther(this, *(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 112), 0);
    }
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendByMuipReq",
      2268);
    v25 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v34,
            (const char (*)[36])"onServerAddFriendByMuipReq use us: ");
    *(_DWORD *)(v2 + 144) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 256));
    v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v2 + 144));
    v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])", ");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v27,
      (const std::pair<unsigned int,unsigned int> *)(v2 + 160));
    common::milog::MiLogStream::~MiLogStream(&v34);
    v5 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 256));
    std::shared_ptr<proto::ServerAddFriendByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddFriendByMuipRsp> *const)(v2 + 224));
  }
  std::shared_ptr<proto::ServerAddFriendByMuipReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAddFriendByMuipReq> *const)(v2 + 192));
  result = v5;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 2273: range 000000000E3356B8-000000000E335C61
int32_t __cdecl SocialHandler::onServerDelFriendByMuipReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialService *v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t result; // eax
  int val; // [rsp+1Ch] [rbp-144h] BYREF
  const proto::ServerDelFriendByMuipReq *req; // [rsp+20h] [rbp-140h]
  proto::ServerDelFriendByMuipRsp *rsp_0; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<int,unsigned int> >::type *retcode; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,std::pair<int,unsigned int> >::type *target_friend_num; // [rsp+38h] [rbp-128h]
  std::pair<int,unsigned int> __in; // [rsp+40h] [rbp-120h] BYREF
  std::pair<unsigned int,unsigned int> pair; // [rsp+48h] [rbp-118h] BYREF
  std::shared_ptr<proto::ServerDelFriendByMuipRsp> p_rsp_ptr; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 15 target_uid:2276 48 4 15 source_uid:2277 64 16 12 req_ptr:2274 96 16 12 rsp_ptr:2274 12"
                        "8 16 10 timer:2275";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDelFriendByMuipReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDelFriendByMuipReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerDelFriendByMuipReq const>(
         (const std::shared_ptr<const proto::ServerDelFriendByMuipReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendByMuipReq",
      2274);
    common::milog::MiLogStream::operator()(&v21, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerDelFriendByMuipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDelFriendByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerDelFriendByMuipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerDelFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerDelFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerDelFriendByMuipRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    *(_DWORD *)(v2 + 32) = proto::ServerDelFriendByMuipReq::target_uid(req);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    proto::ServerDelFriendByMuipRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 32));
    __in = SocialHandler::internalDeleteFriend(this, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 32));
    retcode = std::get<0ul,int,unsigned int>(&__in);
    target_friend_num = std::get<1ul,int,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(retcode);
    }
    if ( !*retcode )
    {
      if ( *(_BYTE *)(((unsigned __int64)target_friend_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_friend_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_friend_num >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(target_friend_num);
      }
      proto::ServerDelFriendByMuipRsp::set_target_friend_num(rsp_0, *target_friend_num);
      SocialHandler::notifyDeleteFriendToOther(this, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 32));
      SocialHandler::notifyDeleteFriendToOther(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 48));
    }
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(retcode);
    }
    proto::ServerDelFriendByMuipRsp::set_retcode(rsp_0, *retcode);
    v7 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerDelFriendByMuipRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerDelFriendByMuipRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerDelFriendByMuipRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerDelFriendByMuipRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendByMuipReq",
      2290);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v21,
           (const char (*)[36])"onServerDelFriendByMuipReq use us: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 128));
    v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v9, (const char (*)[3])", ");
    pair = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 48), (unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v10, &pair);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    std::shared_ptr<proto::ServerDelFriendByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerDelFriendByMuipRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerDelFriendByMuipReq const>::~shared_ptr((std::shared_ptr<const proto::ServerDelFriendByMuipReq> *const)(v2 + 64));
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

// Line 2295: range 000000000E335C62-000000000E336877
int32_t __cdecl SocialHandler::onServerAddFriendAskByMuipReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t Now; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  SocialService *v21; // r14
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-194h]
  std::__shared_ptr_access<const proto::ServerAddFriendAskByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-190h]
  std::__shared_ptr_access<proto::ServerAddFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-188h]
  std::shared_ptr<common::minet::Packet> v29; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-170h] BYREF
  char v31[336]; // [rsp+60h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 20 is_in_blacklist:2320 64 1 13 is_asked:2364 80 4 15 target_uid:2298 96 4 15 source_uid"
                        ":2299 112 4 10 count:2350 128 8 13 uid_pair:2300 160 16 12 req_ptr:2296 192 16 12 rsp_ptr:2296 2"
                        "24 16 10 timer:2297 256 16 13 tran_ptr:2349";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddFriendAskByMuipReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddFriendAskByMuipReq>((common::minet::Packet *const)(v2 + 160));
  if ( std::operator==<proto::ServerAddFriendAskByMuipReq const>(
         (const std::shared_ptr<const proto::ServerAddFriendAskByMuipReq> *)(v2 + 160),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendAskByMuipReq",
      2296);
    common::milog::MiLogStream::operator()(&v30, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerAddFriendAskByMuipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddFriendAskByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    common::tools::perf::make_shared<proto::ServerAddFriendAskByMuipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerAddFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerAddFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    proto::ServerAddFriendAskByMuipRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 224));
    *(_DWORD *)(v2 + 80) = proto::ServerAddFriendAskByMuipReq::target_uid(req);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 96) = common::minet::Packet::getUserId(v6);
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)(v2 + 128),
      (unsigned int *)(v2 + 96),
      (unsigned int *)(v2 + 80));
    proto::ServerAddFriendAskByMuipRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 80));
    retcode = -1;
    if ( *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 96) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerAddFriendAskByMuipReq",
        2308);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v30, (const char (*)[12])" add self: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v7,
        (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream(&v30);
      retcode = 7010;
    }
    else if ( !SocialHandler::isSatisfiedPSConstraint(this, *(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onServerAddFriendAskByMuipReq",
        2315);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
             &v30,
             (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v8,
        (const char (*)[28])" not satisfy PS constarint.");
      common::milog::MiLogStream::~MiLogStream(&v30);
      retcode = 7021;
    }
    else
    {
      *(_BYTE *)(v2 + 48) = 0;
      if ( RedisOpSocialData::isInPlayerAnyBlacklist(*(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 80), (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerAddFriendAskByMuipReq",
          2323);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
               &v30,
               (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          v9,
          (const char (*)[40])" target in source blacklist check fail.");
        common::milog::MiLogStream::~MiLogStream(&v30);
        retcode = 1;
      }
      else if ( *(_BYTE *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onServerAddFriendAskByMuipReq",
          2329);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                &v30,
                (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])off_1BDA1E00);
        common::milog::MiLogStream::~MiLogStream(&v30);
        retcode = 7020;
      }
      else
      {
        *(_BYTE *)(v2 + 48) = 0;
        if ( RedisOpSocialData::isInPlayerAnyBlacklist(*(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 96), (bool *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerAddFriendAskByMuipReq",
            2337);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  &v30,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v11,
            (const char (*)[40])" source in target blacklist check fail.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          retcode = 1;
        }
        else if ( *(_BYTE *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/social_handler.cpp",
            "onServerAddFriendAskByMuipReq",
            2343);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  &v30,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])off_1BDA1E80);
          common::milog::MiLogStream::~MiLogStream(&v30);
          retcode = 7020;
        }
        else
        {
          *(_QWORD *)(v2 + 256) = 0LL;
          *(_QWORD *)(v2 + 264) = 0LL;
          *(_DWORD *)(v2 + 112) = 0;
          if ( RedisOpSocialData::getAskAddFriendListCountWithTran(
                 *(_DWORD *)(v2 + 96),
                 (uint32_t *)(v2 + 112),
                 (common::midb::GetAndSetTranPtr *)(v2 + 256)) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onServerAddFriendAskByMuipReq",
              2353);
            v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v30,
                    (const char (*)[51])"[Social] getAskAddFriendListCountWithTran failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v13,
              (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
          else
          {
            Config::getConfig();
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
            v15 = ConstValueExcelConfigMgr::getAskFriendLimitNum(&v14->design_config_.txt_config_mgr.const_value_config_mgr) <= *(_DWORD *)(v2 + 112);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
            if ( v15 )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/social_handler.cpp",
                "onServerAddFriendAskByMuipReq",
                2358);
              v16 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      &v30,
                      (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
              v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      v16,
                      (const char (*)[42])" exceed source ask friend list capacity. ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 112));
              common::milog::MiLogStream::~MiLogStream(&v30);
              retcode = 7004;
            }
            else
            {
              *(_BYTE *)(v2 + 64) = 0;
              Now = common::tools::TimeUtils::getNow();
              if ( RedisOpSocialData::addAskAddFriendListWithTran(
                     (const common::midb::GetAndSetTranPtr *)(v2 + 256),
                     *(_DWORD *)(v2 + 96),
                     *(_DWORD *)(v2 + 80),
                     Now,
                     (bool *)(v2 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/social_handler.cpp",
                  "onServerAddFriendAskByMuipReq",
                  2367);
                v19 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        &v30,
                        (const char (*)[46])"[Social] addAskAddFriendListWithTran failed, ");
                common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  v19,
                  (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
                common::milog::MiLogStream::~MiLogStream(&v30);
              }
              else if ( *(_BYTE *)(v2 + 64) )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/social_handler.cpp",
                  "onServerAddFriendAskByMuipReq",
                  2372);
                v20 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                        &v30,
                        (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
                common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v20,
                  (const char (*)[16])" already asked.");
                common::milog::MiLogStream::~MiLogStream(&v30);
                retcode = 7003;
              }
              else
              {
                retcode = 0;
              }
            }
          }
          std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 256));
        }
      }
    }
    proto::ServerAddFriendAskByMuipRsp::set_retcode(rsp_0, retcode);
    v21 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v29, p_packet_ptr);
    std::shared_ptr<proto::ServerAddFriendAskByMuipRsp>::shared_ptr(
      (std::shared_ptr<proto::ServerAddFriendAskByMuipRsp> *const)(v2 + 256),
      (const std::shared_ptr<proto::ServerAddFriendAskByMuipRsp> *)(v2 + 192));
    ServiceBase::sendRsp<proto::ServerAddFriendAskByMuipRsp>(
      v21,
      (std::shared_ptr<proto::ServerAddFriendAskByMuipRsp> *)(v2 + 256),
      &v29);
    std::shared_ptr<proto::ServerAddFriendAskByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddFriendAskByMuipRsp> *const)(v2 + 256));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v29);
    if ( !retcode )
      SocialHandler::notifyAskAddFriendToOther(this, *(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 96));
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendAskByMuipReq",
      2388);
    v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v30,
            (const char (*)[39])"onServerAddFriendAskByMuipReq use us: ");
    *(_DWORD *)(v2 + 112) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 224));
    v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v2 + 112));
    v24 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v23, (const char (*)[3])", ");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v24,
      (const std::pair<unsigned int,unsigned int> *)(v2 + 128));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 224));
    std::shared_ptr<proto::ServerAddFriendAskByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerAddFriendAskByMuipRsp> *const)(v2 + 192));
  }
  std::shared_ptr<proto::ServerAddFriendAskByMuipReq const>::~shared_ptr((std::shared_ptr<const proto::ServerAddFriendAskByMuipReq> *const)(v2 + 160));
  result = v5;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 2393: range 000000000E336878-000000000E336EBF
int32_t __cdecl SocialHandler::onServerDelFriendAskByMuipReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  SocialService *v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-178h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-174h]
  const proto::ServerDelFriendAskByMuipReq *req; // [rsp+20h] [rbp-170h]
  proto::ServerDelFriendAskByMuipRsp *rsp_0; // [rsp+28h] [rbp-168h]
  std::shared_ptr<proto::ServerDelFriendAskByMuipRsp> p_rsp_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-150h] BYREF
  char v20[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 13 is_asked:2405 64 4 15 target_uid:2396 80 4 15 source_uid:2397 96 8 13 uid_pair:2398 12"
                        "8 16 12 req_ptr:2394 160 16 12 rsp_ptr:2394 192 16 10 timer:2395 224 16 17 ask_tran_ptr:2404";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDelFriendAskByMuipReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDelFriendAskByMuipReq>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::ServerDelFriendAskByMuipReq const>(
         (const std::shared_ptr<const proto::ServerDelFriendAskByMuipReq> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendAskByMuipReq",
      2394);
    common::milog::MiLogStream::operator()(&v19, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerDelFriendAskByMuipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDelFriendAskByMuipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    common::tools::perf::make_shared<proto::ServerDelFriendAskByMuipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerDelFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerDelFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    proto::ServerDelFriendAskByMuipRsp::set_retcode(rsp_0, -1);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 192));
    *(_DWORD *)(v2 + 64) = proto::ServerDelFriendAskByMuipReq::target_uid(req);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 80) = common::minet::Packet::getUserId(v6);
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)(v2 + 96),
      (unsigned int *)(v2 + 80),
      (unsigned int *)(v2 + 64));
    proto::ServerDelFriendAskByMuipRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 64));
    retcode = -1;
    *(_QWORD *)(v2 + 224) = 0LL;
    *(_QWORD *)(v2 + 232) = 0LL;
    *(_BYTE *)(v2 + 48) = 0;
    if ( RedisOpSocialData::isPlayerAskAddFriendWithTran(
           *(_DWORD *)(v2 + 80),
           *(_DWORD *)(v2 + 64),
           (bool *)(v2 + 48),
           (common::midb::GetAndSetTranPtr *)(v2 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerDelFriendAskByMuipReq",
        2408);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v19,
             (const char (*)[47])"[Social] isPlayerAskAddFriendWithTran failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v7,
        (const std::pair<unsigned int,unsigned int> *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else if ( *(_BYTE *)(v2 + 48)
           && RedisOpSocialData::removeAskFriendWithTran(
                (const common::midb::GetAndSetTranPtr *)(v2 + 224),
                *(_DWORD *)(v2 + 80),
                *(_DWORD *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerDelFriendAskByMuipReq",
        2416);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v19,
             (const char (*)[42])"[Social] removeAskFriendWithTran failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v8,
        (const std::pair<unsigned int,unsigned int> *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      retcode = 0;
    }
    std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 224));
    proto::ServerDelFriendAskByMuipRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 224),
      p_packet_ptr);
    std::shared_ptr<proto::ServerDelFriendAskByMuipRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerDelFriendAskByMuipRsp> *)(v2 + 160));
    ServiceBase::sendRsp<proto::ServerDelFriendAskByMuipRsp>(v9, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 224));
    std::shared_ptr<proto::ServerDelFriendAskByMuipRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 224));
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendAskByMuipReq",
      2426);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"onServerDelFriendAskByMuipReq use us: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 192));
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v11, (const char (*)[3])", ");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v12,
      (const std::pair<unsigned int,unsigned int> *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = 0;
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 192));
    std::shared_ptr<proto::ServerDelFriendAskByMuipRsp>::~shared_ptr((std::shared_ptr<proto::ServerDelFriendAskByMuipRsp> *const)(v2 + 160));
  }
  std::shared_ptr<proto::ServerDelFriendAskByMuipReq const>::~shared_ptr((std::shared_ptr<const proto::ServerDelFriendAskByMuipReq> *const)(v2 + 128));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 2431: range 000000000E336EC0-000000000E3375D5
int32_t __cdecl SocialHandler::onServerActivityGetFriendGiftDataReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  google::protobuf::Map<unsigned int,unsigned int> *v8; // r14
  const google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v14; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v15; // r14
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v16; // rax
  const proto::ActivityGiveSocialData *v17; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v18; // rax
  SocialService *v19; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+18h] [rbp-218h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-214h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+20h] [rbp-210h] BYREF
  const proto::ServerActivityGetFriendGiftDataReq *req; // [rsp+28h] [rbp-208h]
  proto::ServerActivityGetFriendGiftDataRsp *rsp_0; // [rsp+30h] [rbp-200h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+38h] [rbp-1F8h]
  std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp> p_rsp_ptr; // [rsp+40h] [rbp-1F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-1E0h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+60h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-1B0h] BYREF
  char v31[400]; // [rsp+A0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 8 18 activity_iter:2449 80 16 12 req_ptr:2432 112 16 12 rsp_ptr:2432 144 24 12 uid_vec:2440"
                        " 208 24 9 iter:2453 272 48 35 activity_social_redis_data_map:2442";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerActivityGetFriendGiftDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerActivityGetFriendGiftDataReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ServerActivityGetFriendGiftDataReq const>(
         (const std::shared_ptr<const proto::ServerActivityGetFriendGiftDataReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerActivityGetFriendGiftDataReq",
      2432);
    common::milog::MiLogStream::operator()(&v30, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerActivityGetFriendGiftDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerActivityGetFriendGiftDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    common::tools::perf::make_shared<proto::ServerActivityGetFriendGiftDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerActivityGetFriendGiftDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerActivityGetFriendGiftDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::ServerActivityGetFriendGiftDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerActivityGetFriendGiftDataReq::schedule_id(req);
    proto::ServerActivityGetFriendGiftDataRsp::set_schedule_id(rsp_0, v6);
    v7 = proto::ServerActivityGetFriendGiftDataReq::friend_uid(req);
    proto::ServerActivityGetFriendGiftDataRsp::set_friend_uid(rsp_0, v7);
    v8 = proto::ServerActivityGetFriendGiftDataRsp::mutable_give_gift_num_map(rsp_0);
    v9 = proto::ServerActivityGetFriendGiftDataReq::give_gift_num_map(req);
    common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      v9,
      v8);
    retcode = -1;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    __x = proto::ServerActivityGetFriendGiftDataReq::friend_uid(req);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 144), &__x);
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
           (const std::vector<unsigned int> *)(v2 + 144),
           (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onServerActivityGetFriendGiftDataReq",
        2445);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      __x = common::minet::Packet::getUserId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &__x);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" friend uid:");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      __x = proto::ServerActivityGetFriendGiftDataReq::friend_uid(req);
      *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 48) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find(
                                                                                              (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272),
                                                                                              &__x);
      __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272))._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 48),
             &__y) )
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 48));
        social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v14->second);
        __x = proto::ServerActivityGetFriendGiftDataReq::schedule_id(req);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
          (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
          social_data_map,
          &__x);
        google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
        if ( google::protobuf::operator!=(
               (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 208),
               &b) )
        {
          v15 = proto::ServerActivityGetFriendGiftDataRsp::mutable_have_gift_num_map(rsp_0);
          v16 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 208));
          v17 = proto::ActivitySocialData::activity_give_social_data(&v16->second);
          v18 = proto::ActivityGiveSocialData::have_gift_num_map(v17);
          common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
            v18,
            v15);
        }
      }
      retcode = 0;
    }
    std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 272));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::ServerActivityGetFriendGiftDataRsp::set_retcode(rsp_0, retcode);
    v19 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp> *)(v2 + 112));
    ServiceBase::sendRsp<proto::ServerActivityGetFriendGiftDataRsp>(v19, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerActivityGetFriendGiftDataRsp> *const)(v2 + 112));
  }
  std::shared_ptr<proto::ServerActivityGetFriendGiftDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerActivityGetFriendGiftDataReq> *const)(v2 + 80));
  result = v5;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 2469: range 000000000E3375D6-000000000E337FB0
int32_t __cdecl SocialHandler::onServerActivityGetFriendGiftWishListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const proto::PlayerHomeBriefData *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  const std::string *v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::pointer v20; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v21; // r14
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_pointer v22; // rax
  const proto::ActivityGiveSocialData *v23; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v24; // rax
  SocialService *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-2A0h] BYREF
  int32_t retcode; // [rsp+14h] [rbp-29Ch]
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::map<unsigned int,proto::PlayerBriefDataRedisData>::iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self __y; // [rsp+28h] [rbp-288h] BYREF
  const proto::ServerActivityGetFriendGiftWishListReq *req; // [rsp+30h] [rbp-280h]
  proto::ServerActivityGetFriendGiftWishListRsp *rsp_0; // [rsp+38h] [rbp-278h]
  std::map<unsigned int,proto::PlayerBriefDataRedisData> *__for_range; // [rsp+40h] [rbp-270h]
  const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> *v35; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *friend_uid; // [rsp+50h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *brief_redis_data; // [rsp+58h] [rbp-258h]
  const proto::PlayerBasicBriefData *friend_basic_brief; // [rsp+60h] [rbp-250h]
  proto::ActivityFriendGiftWishData *gift_wish_data; // [rsp+68h] [rbp-248h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+70h] [rbp-240h]
  const google::protobuf::Map<unsigned int,proto::ActivitySocialData> *social_data_map; // [rsp+78h] [rbp-238h]
  std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp> p_rsp_ptr; // [rsp+80h] [rbp-230h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+90h] [rbp-220h] BYREF
  google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator b; // [rsp+A0h] [rbp-210h] BYREF
  common::milog::MiLogStream v45; // [rsp+C0h] [rbp-1F0h] BYREF
  char v46[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 18 activity_iter:2520 64 16 12 req_ptr:2470 96 16 12 rsp_ptr:2470 128 24 12 uid_vec:2472 "
                        "192 24 9 iter:2526 256 48 21 friend_brief_map:2482 336 48 35 activity_social_redis_data_map:2489";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerActivityGetFriendGiftWishListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862732] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerActivityGetFriendGiftWishListReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerActivityGetFriendGiftWishListReq const>(
         (const std::shared_ptr<const proto::ServerActivityGetFriendGiftWishListReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerActivityGetFriendGiftWishListReq",
      2470);
    common::milog::MiLogStream::operator()(&v45, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerActivityGetFriendGiftWishListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerActivityGetFriendGiftWishListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerActivityGetFriendGiftWishListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerActivityGetFriendGiftWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerActivityGetFriendGiftWishListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerActivityGetFriendGiftWishListRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerActivityGetFriendGiftWishListReq::schedule_id(req);
    proto::ServerActivityGetFriendGiftWishListRsp::set_schedule_id(rsp_0, v6);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v7 = proto::ServerActivityGetFriendGiftWishListReq::friend_uid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 128));
    retcode = -1;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      retcode = 0;
    }
    else
    {
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
      if ( RedisOpSocialData::getPlayerBriefDataBatch(
             (const std::vector<unsigned int> *)(v2 + 128),
             (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerActivityGetFriendGiftWishListReq",
          2485);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v45,
               (const char (*)[37])"getPlayerBriefDataBatch failed, uid:");
        v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        val = common::minet::Packet::getUserId(v9);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" friend uid:");
        common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
        if ( RedisOpSocialData::getPlayerActivitySocialDataBatch(
               (const std::vector<unsigned int> *)(v2 + 128),
               (std::map<unsigned int,proto::PlayerActivitySocialRedisData> *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerActivityGetFriendGiftWishListReq",
            2492);
          v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v45,
                  (const char (*)[46])"getPlayerActivitySocialDataBatch failed, uid:");
          v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v13);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" friend uid:");
          common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::vector<unsigned int> *)(v2 + 128));
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
        else
        {
          __for_range = (std::map<unsigned int,proto::PlayerBriefDataRedisData> *)(v2 + 256);
          __for_begin._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::begin((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          __for_end._M_node = std::map<unsigned int,proto::PlayerBriefDataRedisData>::end((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256))._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator*(&__for_begin);
            friend_uid = std::get<0ul,unsigned int const,proto::PlayerBriefDataRedisData>(v35);
            brief_redis_data = (std::tuple_element<1,const std::pair<unsigned int const,proto::PlayerBriefDataRedisData> >::type *)std::get<1ul,unsigned int const,proto::PlayerBriefDataRedisData>(v35);
            if ( proto::ServerActivityGetFriendGiftWishListReq::reason(req) != FRIEND_BRIEF_REASON_GACHA_ACTIVITY
              || (v16 = proto::PlayerBriefDataRedisData::home_brief(brief_redis_data),
                  proto::PlayerHomeBriefData::is_home_available(v16)) )
            {
              friend_basic_brief = proto::PlayerBriefDataRedisData::basic_brief(brief_redis_data);
              gift_wish_data = proto::ServerActivityGetFriendGiftWishListRsp::add_friend_gift_wish_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)friend_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)friend_uid >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(friend_uid);
              }
              proto::ActivityFriendGiftWishData::set_uid(gift_wish_data, *friend_uid);
              profile_picture_proto = proto::ActivityFriendGiftWishData::mutable_profile_picture(gift_wish_data);
              v17 = proto::PlayerBasicBriefData::head_image_avatar_id(friend_basic_brief);
              proto::ProfilePicture::set_avatar_id(profile_picture_proto, v17);
              v18 = proto::PlayerBasicBriefData::profile_picture_costume_id(friend_basic_brief);
              proto::ProfilePicture::set_costume_id(profile_picture_proto, v18);
              v19 = proto::PlayerBasicBriefData::nickname[abi:cxx11](friend_basic_brief);
              proto::ActivityFriendGiftWishData::set_nickname(gift_wish_data, v19);
              *(std::map<unsigned int,proto::PlayerActivitySocialRedisData>::iterator *)(v2 + 32) = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::find((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336), friend_uid);
              __y._M_node = std::map<unsigned int,proto::PlayerActivitySocialRedisData>::end((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336))._M_node;
              if ( !std::operator==(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> >::_Self *)(v2 + 32),
                      &__y) )
              {
                v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerActivitySocialRedisData> > *const)(v2 + 32));
                social_data_map = proto::PlayerActivitySocialRedisData::activity_social_data_map(&v20->second);
                val = proto::ServerActivityGetFriendGiftWishListReq::schedule_id(req);
                google::protobuf::Map<unsigned int,proto::ActivitySocialData>::find(
                  (google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                  social_data_map,
                  &val);
                google::protobuf::Map<unsigned int,proto::ActivitySocialData>::end(&b, social_data_map);
                if ( google::protobuf::operator!=(
                       (const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *)(v2 + 192),
                       &b) )
                {
                  v21 = proto::ActivityFriendGiftWishData::mutable_gift_num_map(gift_wish_data);
                  v22 = google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator::operator->((const google::protobuf::Map<unsigned int,proto::ActivitySocialData>::const_iterator *const)(v2 + 192));
                  v23 = proto::ActivitySocialData::activity_give_social_data(&v22->second);
                  v24 = proto::ActivityGiveSocialData::wish_gift_num_map(v23);
                  common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
                    v24,
                    v21);
                }
              }
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,proto::PlayerBriefDataRedisData>>::operator++(&__for_begin);
          }
          retcode = 0;
        }
        std::map<unsigned int,proto::PlayerActivitySocialRedisData>::~map((std::map<unsigned int,proto::PlayerActivitySocialRedisData> *const)(v2 + 336));
      }
      std::map<unsigned int,proto::PlayerBriefDataRedisData>::~map((std::map<unsigned int,proto::PlayerBriefDataRedisData> *const)(v2 + 256));
    }
    proto::ServerActivityGetFriendGiftWishListRsp::set_retcode(rsp_0, retcode);
    v25 = ServiceBox::findService<SocialService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerActivityGetFriendGiftWishListRsp>(v25, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp>::~shared_ptr((std::shared_ptr<proto::ServerActivityGetFriendGiftWishListRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerActivityGetFriendGiftWishListReq const>::~shared_ptr((std::shared_ptr<const proto::ServerActivityGetFriendGiftWishListReq> *const)(v2 + 64));
  result = v5;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2538: range 000000000E3614C8-000000000E3614DC
void __cdecl GLOBAL__sub_I_merge_single_gcg_skill_logic_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2538: range 000000000E348A90-000000000E3614C7
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
