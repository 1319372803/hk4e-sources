// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/social_handler.cpp

// Line 41: range 0000000018025EE0-000000001802B725
int32_t __cdecl SocialHandler::addPacketFuncToMap(SocialHandler *const this, PacketFuncMap *process_packet_func_map)
{
  SocialHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  SocialHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  SocialHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  SocialHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  SocialHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  SocialHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  SocialHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  SocialHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  SocialHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  SocialHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  SocialHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  SocialHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  SocialHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  SocialHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v45; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  SocialHandler **v48; // r8
  const std::_Placeholder<1> *v49; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v51; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v52; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v53; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v54; // rax
  SocialHandler **v55; // r8
  const std::_Placeholder<1> *v56; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v57; // rax
  SocialHandler **v58; // r8
  const std::_Placeholder<1> *v59; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v60; // rax
  SocialHandler **v61; // r8
  const std::_Placeholder<1> *v62; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v63; // rax
  SocialHandler **v64; // r8
  const std::_Placeholder<1> *v65; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v66; // rax
  SocialHandler **v67; // r8
  const std::_Placeholder<1> *v68; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v69; // rax
  SocialHandler **v70; // r8
  const std::_Placeholder<1> *v71; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v72; // rax
  SocialHandler **v73; // r8
  const std::_Placeholder<1> *v74; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v75; // rax
  SocialHandler **v76; // r8
  const std::_Placeholder<1> *v77; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v78; // rax
  SocialHandler **v79; // r8
  const std::_Placeholder<1> *v80; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v81; // rax
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
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v119; // rax
  SocialHandler **v120; // r8
  const std::_Placeholder<1> *v121; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v122; // rax
  SocialHandler **v123; // r8
  const std::_Placeholder<1> *v124; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v125; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v126; // rax
  SocialHandler **v127; // r8
  const std::_Placeholder<1> *v128; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v129; // rax
  SocialHandler **v130; // r8
  const std::_Placeholder<1> *v131; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v132; // rax
  SocialHandler **v133; // r8
  const std::_Placeholder<1> *v134; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v135; // rax
  SocialHandler **v136; // r8
  const std::_Placeholder<1> *v137; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v138; // rax
  SocialHandler **v139; // r8
  const std::_Placeholder<1> *v140; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v141; // rax
  SocialHandler **v142; // r8
  const std::_Placeholder<1> *v143; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v144; // rax
  SocialHandler **v145; // r8
  const std::_Placeholder<1> *v146; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v147; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v148; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v149; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v150; // rax
  SocialHandler **v151; // r8
  const std::_Placeholder<1> *v152; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v153; // rax
  SocialHandler **v154; // r8
  const std::_Placeholder<1> *v155; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v156; // rax
  SocialHandler **v157; // r8
  const std::_Placeholder<1> *v158; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v159; // rax
  SocialHandler **v160; // r8
  const std::_Placeholder<1> *v161; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v162; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v163; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v164; // rax
  __m128i v165; // [rsp+0h] [rbp-3A0h] BYREF
  __m128i v166; // [rsp+10h] [rbp-390h] BYREF
  __m128i v167; // [rsp+20h] [rbp-380h] BYREF
  __m128i v168; // [rsp+30h] [rbp-370h] BYREF
  __m128i v169; // [rsp+40h] [rbp-360h] BYREF
  __m128i v170; // [rsp+50h] [rbp-350h] BYREF
  __m128i v171; // [rsp+60h] [rbp-340h] BYREF
  __m128i v172; // [rsp+70h] [rbp-330h] BYREF
  __m128i v173; // [rsp+80h] [rbp-320h] BYREF
  __m128i v174; // [rsp+90h] [rbp-310h] BYREF
  __m128i v175; // [rsp+A0h] [rbp-300h] BYREF
  __m128i v176; // [rsp+B0h] [rbp-2F0h] BYREF
  __m128i v177; // [rsp+C0h] [rbp-2E0h] BYREF
  __m128i v178; // [rsp+D0h] [rbp-2D0h] BYREF
  __m128i v179; // [rsp+E0h] [rbp-2C0h] BYREF
  __m128i v180; // [rsp+F0h] [rbp-2B0h] BYREF
  __m128i v181; // [rsp+100h] [rbp-2A0h] BYREF
  __m128i v182; // [rsp+110h] [rbp-290h] BYREF
  __m128i v183; // [rsp+120h] [rbp-280h] BYREF
  __m128i v184; // [rsp+130h] [rbp-270h] BYREF
  __m128i v185; // [rsp+140h] [rbp-260h] BYREF
  __m128i v186; // [rsp+150h] [rbp-250h] BYREF
  __m128i v187; // [rsp+160h] [rbp-240h] BYREF
  __m128i v188; // [rsp+170h] [rbp-230h] BYREF
  __m128i v189; // [rsp+180h] [rbp-220h] BYREF
  __m128i v190; // [rsp+190h] [rbp-210h] BYREF
  __m128i v191; // [rsp+1A0h] [rbp-200h] BYREF
  __m128i v192; // [rsp+1B0h] [rbp-1F0h] BYREF
  __m128i v193; // [rsp+1C0h] [rbp-1E0h] BYREF
  __m128i v194; // [rsp+1D0h] [rbp-1D0h] BYREF
  __m128i v195; // [rsp+1E0h] [rbp-1C0h] BYREF
  __m128i v196; // [rsp+1F0h] [rbp-1B0h] BYREF
  __m128i v197; // [rsp+200h] [rbp-1A0h] BYREF
  __m128i v198; // [rsp+210h] [rbp-190h] BYREF
  __m128i v199; // [rsp+220h] [rbp-180h] BYREF
  __m128i v200; // [rsp+230h] [rbp-170h] BYREF
  __m128i v201; // [rsp+240h] [rbp-160h] BYREF
  __m128i v202; // [rsp+250h] [rbp-150h] BYREF
  __m128i v203; // [rsp+260h] [rbp-140h] BYREF
  __m128i v204; // [rsp+270h] [rbp-130h] BYREF
  __m128i v205; // [rsp+280h] [rbp-120h] BYREF
  __m128i v206; // [rsp+290h] [rbp-110h] BYREF
  __m128i v207; // [rsp+2A0h] [rbp-100h] BYREF
  __m128i v208; // [rsp+2B0h] [rbp-F0h] BYREF
  __m128i v209; // [rsp+2C0h] [rbp-E0h] BYREF
  __m128i v210; // [rsp+2D0h] [rbp-D0h] BYREF
  __m128i v211; // [rsp+2E0h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+2F0h] [rbp-B0h]
  SocialHandler *thisa; // [rsp+2F8h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+30Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v215; // [rsp+310h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+318h] [rbp-88h] BYREF
  int (*__f[2])(SocialHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+320h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,const std::_Placeholder<1>&>::type v218; // [rsp+330h] [rbp-70h] BYREF
  common::milog::MiLogStream v219; // [rsp+350h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 4072;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v215, &__y) )
  {
    common::milog::MiLogStream::create(
      &v219,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/social_handler.cpp",
      "addPacketFuncToMap",
      42);
    common::milog::MiLogStream::operator()(&v219, off_2649F220, 4072LL);
    common::milog::MiLogStream::~MiLogStream(&v219);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(SocialHandler *, std::shared_ptr<common::minet::Packet>))SocialHandler::onGetPlayerFriendListReq;
    __f[1] = 0LL;
    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
      &v218,
      __f,
      (SocialHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 4072;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
      v5,
      &v218);
    __x = 4073;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v215, &__y) )
    {
      common::milog::MiLogStream::create(
        &v219,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/social_handler.cpp",
        "addPacketFuncToMap",
        43);
      common::milog::MiLogStream::operator()(&v219, off_2649F220, 4073LL);
      common::milog::MiLogStream::~MiLogStream(&v219);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(SocialHandler *, std::shared_ptr<common::minet::Packet>))SocialHandler::onGetPlayerSocialDetailReq;
      __f[1] = 0LL;
      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
        &v218,
        __f,
        (SocialHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 4073;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
        v8,
        &v218);
      __x = 4007;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v215, &__y) )
      {
        common::milog::MiLogStream::create(
          &v219,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/social_handler.cpp",
          "addPacketFuncToMap",
          44);
        common::milog::MiLogStream::operator()(&v219, off_2649F220, 4007LL);
        common::milog::MiLogStream::~MiLogStream(&v219);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v165.m128i_i64[0] = (__int64)SocialHandler::onAskAddFriendReq;
        v165.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v165);
        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
          &v218,
          __f,
          (SocialHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 4007;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
          v11,
          &v218);
        __x = 4003;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v215, &__y) )
        {
          common::milog::MiLogStream::create(
            &v219,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/social_handler.cpp",
            "addPacketFuncToMap",
            45);
          common::milog::MiLogStream::operator()(&v219, off_2649F220, 4003LL);
          common::milog::MiLogStream::~MiLogStream(&v219);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v166.m128i_i64[0] = (__int64)SocialHandler::onDealAddFriendReq;
          v166.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v166);
          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
            &v218,
            __f,
            (SocialHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 4003;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
            v14,
            &v218);
          __x = 4031;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v215, &__y) )
          {
            common::milog::MiLogStream::create(
              &v219,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/social_handler.cpp",
              "addPacketFuncToMap",
              46);
            common::milog::MiLogStream::operator()(&v219, off_2649F220, 4031LL);
            common::milog::MiLogStream::~MiLogStream(&v219);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v167.m128i_i64[0] = (__int64)SocialHandler::onDeleteFriendReq;
            v167.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v167);
            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
              &v218,
              __f,
              (SocialHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 4031;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
              v17,
              &v218);
            __x = 10812;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v215, &__y) )
            {
              common::milog::MiLogStream::create(
                &v219,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/social_handler.cpp",
                "addPacketFuncToMap",
                48);
              common::milog::MiLogStream::operator()(&v219, off_2649F220, 10812LL);
              common::milog::MiLogStream::~MiLogStream(&v219);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v168.m128i_i64[0] = (__int64)SocialHandler::onServerGetPlayerFriendListRsp;
              v168.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v168);
              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                &v218,
                __f,
                (SocialHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 10812;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                v20,
                &v218);
              __x = 10821;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v215, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v219,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/social_handler.cpp",
                  "addPacketFuncToMap",
                  49);
                common::milog::MiLogStream::operator()(&v219, off_2649F220, 10821LL);
                common::milog::MiLogStream::~MiLogStream(&v219);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v169.m128i_i64[0] = (__int64)SocialHandler::onServerGetSocialDetailRsp;
                v169.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v169);
                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                  &v218,
                  __f,
                  (SocialHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 10821;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v218);
                __x = 10890;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v215, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v219,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/social_handler.cpp",
                    "addPacketFuncToMap",
                    50);
                  common::milog::MiLogStream::operator()(&v219, off_2649F220, 10890LL);
                  common::milog::MiLogStream::~MiLogStream(&v219);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v170.m128i_i64[0] = (__int64)SocialHandler::onServerAskAddFriendRsp;
                  v170.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v170);
                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                    &v218,
                    __f,
                    (SocialHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 10890;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v218);
                  __x = 10899;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v215, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v219,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/social_handler.cpp",
                      "addPacketFuncToMap",
                      51);
                    common::milog::MiLogStream::operator()(&v219, off_2649F220, 10899LL);
                    common::milog::MiLogStream::~MiLogStream(&v219);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v171.m128i_i64[0] = (__int64)SocialHandler::onServerDealAddFriendRsp;
                    v171.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v171);
                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                      &v218,
                      __f,
                      (SocialHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 10899;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v218);
                    __x = 10875;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v215, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v219,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/social_handler.cpp",
                        "addPacketFuncToMap",
                        52);
                      common::milog::MiLogStream::operator()(&v219, off_2649F220, 10875LL);
                      common::milog::MiLogStream::~MiLogStream(&v219);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v172.m128i_i64[0] = (__int64)SocialHandler::onServerDeleteFriendRsp;
                      v172.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v172);
                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                        &v218,
                        __f,
                        (SocialHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 10875;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v218);
                      __x = 10839;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v215, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v219,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/social_handler.cpp",
                          "addPacketFuncToMap",
                          53);
                        common::milog::MiLogStream::operator()(&v219, off_2649F220, 10839LL);
                        common::milog::MiLogStream::~MiLogStream(&v219);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v173.m128i_i64[0] = (__int64)SocialHandler::onServerGetPlayerFriendBriefRsp;
                        v173.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v173);
                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                          &v218,
                          __f,
                          (SocialHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 10839;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v218);
                        __x = 4082;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v215, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v219,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/social_handler.cpp",
                            "addPacketFuncToMap",
                            54);
                          common::milog::MiLogStream::operator()(&v219, off_2649F220, 4082LL);
                          common::milog::MiLogStream::~MiLogStream(&v219);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v174.m128i_i64[0] = (__int64)SocialHandler::onSetPlayerHeadImageReq;
                          v174.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v174);
                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                            &v218,
                            __f,
                            (SocialHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v36,
                            v37);
                          __x = 4082;
                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                            v38,
                            &v218);
                          __x = 4081;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v215, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v219,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/social_handler.cpp",
                              "addPacketFuncToMap",
                              55);
                            common::milog::MiLogStream::operator()(&v219, off_2649F220, 4081LL);
                            common::milog::MiLogStream::~MiLogStream(&v219);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v175.m128i_i64[0] = (__int64)SocialHandler::onSetPlayerSignatureReq;
                            v175.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v175);
                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                              &v218,
                              __f,
                              (SocialHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v39,
                              v40);
                            __x = 4081;
                            v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                              v41,
                              &v218);
                            __x = 10870;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v215, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v219,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/social_handler.cpp",
                                "addPacketFuncToMap",
                                56);
                              common::milog::MiLogStream::operator()(&v219, off_2649F220, 10870LL);
                              common::milog::MiLogStream::~MiLogStream(&v219);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v176.m128i_i64[0] = (__int64)SocialHandler::onServerGetAskFriendBriefRsp;
                              v176.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v176);
                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                &v218,
                                __f,
                                (SocialHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v42,
                                v43);
                              __x = 10870;
                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                v44,
                                &v218);
                              __x = 4048;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v215, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v219,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/social_handler.cpp",
                                  "addPacketFuncToMap",
                                  58);
                                common::milog::MiLogStream::operator()(&v219, off_2649F220, 4048LL);
                                common::milog::MiLogStream::~MiLogStream(&v219);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                __x = 4048;
                                v45 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
                                  v45,
                                  (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 4004;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v215, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v219,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/social_handler.cpp",
                                    "addPacketFuncToMap",
                                    59);
                                  common::milog::MiLogStream::operator()(&v219, off_2649F220, 4004LL);
                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  __x = 4004;
                                  v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
                                    v46,
                                    (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 4027;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v215, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v219,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/social_handler.cpp",
                                      "addPacketFuncToMap",
                                      60);
                                    common::milog::MiLogStream::operator()(&v219, off_2649F220, 4027LL);
                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    __x = 4027;
                                    v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
                                      v47,
                                      (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 10822;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v215, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v219,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/social_handler.cpp",
                                        "addPacketFuncToMap",
                                        62);
                                      common::milog::MiLogStream::operator()(&v219, off_2649F220, 10822LL);
                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v177.m128i_i64[0] = (__int64)SocialHandler::onSeverGetPS4FriendUidRsp;
                                      v177.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v177);
                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                        &v218,
                                        __f,
                                        (SocialHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v48,
                                        v49);
                                      __x = 10822;
                                      v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                        v50,
                                        &v218);
                                      __x = 4039;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v215, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v219,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/social_handler.cpp",
                                          "addPacketFuncToMap",
                                          64);
                                        common::milog::MiLogStream::operator()(&v219, off_2649F220, 4039LL);
                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        __x = 4039;
                                        v51 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                                          v51,
                                          (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 4022;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v215, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v219,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/social_handler.cpp",
                                            "addPacketFuncToMap",
                                            65);
                                          common::milog::MiLogStream::operator()(&v219, off_2649F220, 4022LL);
                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          __x = 4022;
                                          v52 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                                            v52,
                                            (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                          __x = 4053;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v215, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v219,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/social_handler.cpp",
                                              "addPacketFuncToMap",
                                              66);
                                            common::milog::MiLogStream::operator()(&v219, off_2649F220, 4053LL);
                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            __x = 4053;
                                            v53 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                                              v53,
                                              (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                            __x = 4065;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v215, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v219,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/social_handler.cpp",
                                                "addPacketFuncToMap",
                                                67);
                                              common::milog::MiLogStream::operator()(&v219, off_2649F220, 4065LL);
                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              __x = 4065;
                                              v54 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                                                v54,
                                                (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                              __x = 4088;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v215, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v219,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/social_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  69);
                                                common::milog::MiLogStream::operator()(&v219, off_2649F220, 4088LL);
                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                v178.m128i_i64[0] = (__int64)SocialHandler::onAddBlacklistReq;
                                                v178.m128i_i64[1] = 0LL;
                                                *(__m128i *)__f = _mm_load_si128(&v178);
                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                  &v218,
                                                  __f,
                                                  (SocialHandler **)&__y,
                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                  v55,
                                                  v56);
                                                __x = 4088;
                                                v57 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                  v57,
                                                  &v218);
                                                __x = 4063;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v215, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v219,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/social_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    70);
                                                  common::milog::MiLogStream::operator()(&v219, off_2649F220, 4063LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  v179.m128i_i64[0] = (__int64)SocialHandler::onRemoveBlacklistReq;
                                                  v179.m128i_i64[1] = 0LL;
                                                  *(__m128i *)__f = _mm_load_si128(&v179);
                                                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                    &v218,
                                                    __f,
                                                    (SocialHandler **)&__y,
                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                    v58,
                                                    v59);
                                                  __x = 4063;
                                                  v60 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                    v60,
                                                    &v218);
                                                  __x = 10893;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v215, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v219,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/social_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      71);
                                                    common::milog::MiLogStream::operator()(&v219, off_2649F220, 10893LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    v180.m128i_i64[0] = (__int64)SocialHandler::onServerAddBlacklistRsp;
                                                    v180.m128i_i64[1] = 0LL;
                                                    *(__m128i *)__f = _mm_load_si128(&v180);
                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                      &v218,
                                                      __f,
                                                      (SocialHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v61,
                                                      v62);
                                                    __x = 10893;
                                                    v63 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                      v63,
                                                      &v218);
                                                    __x = 10894;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v215, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v219,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/social_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        72);
                                                      common::milog::MiLogStream::operator()(
                                                        &v219,
                                                        off_2649F220,
                                                        10894LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      v181.m128i_i64[0] = (__int64)SocialHandler::onServerRemoveBlacklistRsp;
                                                      v181.m128i_i64[1] = 0LL;
                                                      *(__m128i *)__f = _mm_load_si128(&v181);
                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                        &v218,
                                                        __f,
                                                        (SocialHandler **)&__y,
                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                        v64,
                                                        v65);
                                                      __x = 10894;
                                                      v66 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                        v66,
                                                        &v218);
                                                      __x = 4034;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v215, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v219,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/social_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          74);
                                                        common::milog::MiLogStream::operator()(
                                                          &v219,
                                                          off_2649F220,
                                                          4034LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        v182.m128i_i64[0] = (__int64)SocialHandler::onGetRecentMpPlayerListReq;
                                                        v182.m128i_i64[1] = 0LL;
                                                        *(__m128i *)__f = _mm_load_si128(&v182);
                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                          &v218,
                                                          __f,
                                                          (SocialHandler **)&__y,
                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                          v67,
                                                          v68);
                                                        __x = 4034;
                                                        v69 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                          v69,
                                                          &v218);
                                                        __x = 10826;
                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                        process_packet_func_mapa,
                                                                        &__x)._M_node;
                                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                        if ( std::operator!=(&v215, &__y) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            &v219,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/handler/social_handler.cpp",
                                                            "addPacketFuncToMap",
                                                            75);
                                                          common::milog::MiLogStream::operator()(
                                                            &v219,
                                                            off_2649F220,
                                                            10826LL);
                                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                                          return -1;
                                                        }
                                                        else
                                                        {
                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                          v183.m128i_i64[0] = (__int64)SocialHandler::onServerGetRecentMpPlayerListRsp;
                                                          v183.m128i_i64[1] = 0LL;
                                                          *(__m128i *)__f = _mm_load_si128(&v183);
                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                            &v218,
                                                            __f,
                                                            (SocialHandler **)&__y,
                                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                            v70,
                                                            v71);
                                                          __x = 10826;
                                                          v72 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                  process_packet_func_mapa,
                                                                  &__x);
                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                            v72,
                                                            &v218);
                                                          __x = 4046;
                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                          process_packet_func_mapa,
                                                                          &__x)._M_node;
                                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                          if ( std::operator!=(&v215, &__y) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              &v219,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/handler/social_handler.cpp",
                                                              "addPacketFuncToMap",
                                                              76);
                                                            common::milog::MiLogStream::operator()(
                                                              &v219,
                                                              off_2649F220,
                                                              4046LL);
                                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                                            return -1;
                                                          }
                                                          else
                                                          {
                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                            v184.m128i_i64[0] = (__int64)SocialHandler::onUpdatePS4BlockListReq;
                                                            v184.m128i_i64[1] = 0LL;
                                                            *(__m128i *)__f = _mm_load_si128(&v184);
                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                              &v218,
                                                              __f,
                                                              (SocialHandler **)&__y,
                                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                              v73,
                                                              v74);
                                                            __x = 4046;
                                                            v75 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                    process_packet_func_mapa,
                                                                    &__x);
                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                              v75,
                                                              &v218);
                                                            __x = 4049;
                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                            process_packet_func_mapa,
                                                                            &__x)._M_node;
                                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                            if ( std::operator!=(&v215, &__y) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                &v219,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/handler/social_handler.cpp",
                                                                "addPacketFuncToMap",
                                                                77);
                                                              common::milog::MiLogStream::operator()(
                                                                &v219,
                                                                off_2649F220,
                                                                4049LL);
                                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                                              return -1;
                                                            }
                                                            else
                                                            {
                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                              v185.m128i_i64[0] = (__int64)SocialHandler::onGetPlayerBlacklistReq;
                                                              v185.m128i_i64[1] = 0LL;
                                                              *(__m128i *)__f = _mm_load_si128(&v185);
                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                &v218,
                                                                __f,
                                                                (SocialHandler **)&__y,
                                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                v76,
                                                                v77);
                                                              __x = 4049;
                                                              v78 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                      process_packet_func_mapa,
                                                                      &__x);
                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                v78,
                                                                &v218);
                                                              __x = 10895;
                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                              process_packet_func_mapa,
                                                                              &__x)._M_node;
                                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                              if ( std::operator!=(&v215, &__y) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  &v219,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/handler/social_handler.cpp",
                                                                  "addPacketFuncToMap",
                                                                  78);
                                                                common::milog::MiLogStream::operator()(
                                                                  &v219,
                                                                  off_2649F220,
                                                                  10895LL);
                                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                                return -1;
                                                              }
                                                              else
                                                              {
                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                v186.m128i_i64[0] = (__int64)SocialHandler::onServerGetPlayerBlacklistRsp;
                                                                v186.m128i_i64[1] = 0LL;
                                                                *(__m128i *)__f = _mm_load_si128(&v186);
                                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                  &v218,
                                                                  __f,
                                                                  (SocialHandler **)&__y,
                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                  v79,
                                                                  v80);
                                                                __x = 10895;
                                                                v81 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                        process_packet_func_mapa,
                                                                        &__x);
                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                  v81,
                                                                  &v218);
                                                                __x = 4074;
                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                process_packet_func_mapa,
                                                                                &__x)._M_node;
                                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                if ( std::operator!=(&v215, &__y) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    &v219,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/handler/social_handler.cpp",
                                                                    "addPacketFuncToMap",
                                                                    79);
                                                                  common::milog::MiLogStream::operator()(
                                                                    &v219,
                                                                    off_2649F220,
                                                                    4074LL);
                                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                                  return -1;
                                                                }
                                                                else
                                                                {
                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                  __x = 4074;
                                                                  v82 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                          process_packet_func_mapa,
                                                                          &__x);
                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                                                                    v82,
                                                                    (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                  __x = 4024;
                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                  process_packet_func_mapa,
                                                                                  &__x)._M_node;
                                                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                  if ( std::operator!=(&v215, &__y) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      &v219,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/handler/social_handler.cpp",
                                                                      "addPacketFuncToMap",
                                                                      80);
                                                                    common::milog::MiLogStream::operator()(
                                                                      &v219,
                                                                      off_2649F220,
                                                                      4024LL);
                                                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                                                    return -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                    v187.m128i_i64[0] = (__int64)SocialHandler::onPlayerReportReq;
                                                                    v187.m128i_i64[1] = 0LL;
                                                                    *(__m128i *)__f = _mm_load_si128(&v187);
                                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                      &v218,
                                                                      __f,
                                                                      (SocialHandler **)&__y,
                                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                      v83,
                                                                      v84);
                                                                    __x = 4024;
                                                                    v85 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                            process_packet_func_mapa,
                                                                            &__x);
                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                      v85,
                                                                      &v218);
                                                                    __x = 5022;
                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                    process_packet_func_mapa,
                                                                                    &__x)._M_node;
                                                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                    if ( std::operator!=(&v215, &__y) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        &v219,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/handler/social_handler.cpp",
                                                                        "addPacketFuncToMap",
                                                                        82);
                                                                      common::milog::MiLogStream::operator()(
                                                                        &v219,
                                                                        off_2649F220,
                                                                        5022LL);
                                                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                                                      return -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                      v188.m128i_i64[0] = (__int64)SocialHandler::onPrivateChatReq;
                                                                      v188.m128i_i64[1] = 0LL;
                                                                      *(__m128i *)__f = _mm_load_si128(&v188);
                                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                        &v218,
                                                                        __f,
                                                                        (SocialHandler **)&__y,
                                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                        v86,
                                                                        v87);
                                                                      __x = 5022;
                                                                      v88 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                              process_packet_func_mapa,
                                                                              &__x);
                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                        v88,
                                                                        &v218);
                                                                      __x = 10834;
                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                      process_packet_func_mapa,
                                                                                      &__x)._M_node;
                                                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                      if ( std::operator!=(&v215, &__y) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          &v219,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/handler/social_handler.cpp",
                                                                          "addPacketFuncToMap",
                                                                          83);
                                                                        common::milog::MiLogStream::operator()(
                                                                          &v219,
                                                                          off_2649F220,
                                                                          10834LL);
                                                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                                                        return -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                        v189.m128i_i64[0] = (__int64)SocialHandler::onServerPrivateChatRsp;
                                                                        v189.m128i_i64[1] = 0LL;
                                                                        *(__m128i *)__f = _mm_load_si128(&v189);
                                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                          &v218,
                                                                          __f,
                                                                          (SocialHandler **)&__y,
                                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                          v89,
                                                                          v90);
                                                                        __x = 10834;
                                                                        v91 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                process_packet_func_mapa,
                                                                                &__x);
                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                          v91,
                                                                          &v218);
                                                                        __x = 4962;
                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                        process_packet_func_mapa,
                                                                                        &__x)._M_node;
                                                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                        if ( std::operator!=(&v215, &__y) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            &v219,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/handler/social_handler.cpp",
                                                                            "addPacketFuncToMap",
                                                                            84);
                                                                          common::milog::MiLogStream::operator()(
                                                                            &v219,
                                                                            off_2649F220,
                                                                            4962LL);
                                                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                                                          return -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                          v190.m128i_i64[0] = (__int64)SocialHandler::onPrivateChatNotify;
                                                                          v190.m128i_i64[1] = 0LL;
                                                                          *(__m128i *)__f = _mm_load_si128(&v190);
                                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                            &v218,
                                                                            __f,
                                                                            (SocialHandler **)&__y,
                                                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                            v92,
                                                                            v93);
                                                                          __x = 4962;
                                                                          v94 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                  process_packet_func_mapa,
                                                                                  &__x);
                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                            v94,
                                                                            &v218);
                                                                          __x = 4971;
                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                          process_packet_func_mapa,
                                                                                          &__x)._M_node;
                                                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                          if ( std::operator!=(&v215, &__y) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              &v219,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/handler/social_handler.cpp",
                                                                              "addPacketFuncToMap",
                                                                              86);
                                                                            common::milog::MiLogStream::operator()(
                                                                              &v219,
                                                                              off_2649F220,
                                                                              4971LL);
                                                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                                                            return -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                            v191.m128i_i64[0] = (__int64)SocialHandler::onPullPrivateChatReq;
                                                                            v191.m128i_i64[1] = 0LL;
                                                                            *(__m128i *)__f = _mm_load_si128(&v191);
                                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                              &v218,
                                                                              __f,
                                                                              (SocialHandler **)&__y,
                                                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                              v95,
                                                                              v96);
                                                                            __x = 4971;
                                                                            v97 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                    process_packet_func_mapa,
                                                                                    &__x);
                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                              v97,
                                                                              &v218);
                                                                            __x = 4953;
                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                            process_packet_func_mapa,
                                                                                            &__x)._M_node;
                                                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                            if ( std::operator!=(&v215, &__y) )
                                                                            {
                                                                              common::milog::MiLogStream::create(
                                                                                &v219,
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/handler/social_handler.cpp",
                                                                                "addPacketFuncToMap",
                                                                                87);
                                                                              common::milog::MiLogStream::operator()(
                                                                                &v219,
                                                                                off_2649F220,
                                                                                4953LL);
                                                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                                                              return -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                              v192.m128i_i64[0] = (__int64)SocialHandler::onPullPrivateChatRsp;
                                                                              v192.m128i_i64[1] = 0LL;
                                                                              *(__m128i *)__f = _mm_load_si128(&v192);
                                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                &v218,
                                                                                __f,
                                                                                (SocialHandler **)&__y,
                                                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                v98,
                                                                                v99);
                                                                              __x = 4953;
                                                                              v100 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                       process_packet_func_mapa,
                                                                                       &__x);
                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                v100,
                                                                                &v218);
                                                                              __x = 5040;
                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                              process_packet_func_mapa,
                                                                                              &__x)._M_node;
                                                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                              if ( std::operator!=(&v215, &__y) )
                                                                              {
                                                                                common::milog::MiLogStream::create(
                                                                                  &v219,
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  4u,
                                                                                  "./src/handler/social_handler.cpp",
                                                                                  "addPacketFuncToMap",
                                                                                  88);
                                                                                common::milog::MiLogStream::operator()(
                                                                                  &v219,
                                                                                  off_2649F220,
                                                                                  5040LL);
                                                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                return -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                v193.m128i_i64[0] = (__int64)SocialHandler::onPullRecentChatReq;
                                                                                v193.m128i_i64[1] = 0LL;
                                                                                *(__m128i *)__f = _mm_load_si128(&v193);
                                                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                  &v218,
                                                                                  __f,
                                                                                  (SocialHandler **)&__y,
                                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                  v101,
                                                                                  v102);
                                                                                __x = 5040;
                                                                                v103 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                         process_packet_func_mapa,
                                                                                         &__x);
                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                  v103,
                                                                                  &v218);
                                                                                __x = 5023;
                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                process_packet_func_mapa,
                                                                                                &__x)._M_node;
                                                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                if ( std::operator!=(&v215, &__y) )
                                                                                {
                                                                                  common::milog::MiLogStream::create(
                                                                                    &v219,
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/handler/social_handler.cpp",
                                                                                    "addPacketFuncToMap",
                                                                                    89);
                                                                                  common::milog::MiLogStream::operator()(
                                                                                    &v219,
                                                                                    off_2649F220,
                                                                                    5023LL);
                                                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                  return -1;
                                                                                }
                                                                                else
                                                                                {
                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                  v194.m128i_i64[0] = (__int64)SocialHandler::onPullRecentChatRsp;
                                                                                  v194.m128i_i64[1] = 0LL;
                                                                                  *(__m128i *)__f = _mm_load_si128(&v194);
                                                                                  std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                    &v218,
                                                                                    __f,
                                                                                    (SocialHandler **)&__y,
                                                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                    v104,
                                                                                    v105);
                                                                                  __x = 5023;
                                                                                  v106 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                           process_packet_func_mapa,
                                                                                           &__x);
                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                    v106,
                                                                                    &v218);
                                                                                  __x = 5049;
                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                  process_packet_func_mapa,
                                                                                                  &__x)._M_node;
                                                                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                  if ( std::operator!=(&v215, &__y) )
                                                                                  {
                                                                                    common::milog::MiLogStream::create(
                                                                                      &v219,
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/handler/social_handler.cpp",
                                                                                      "addPacketFuncToMap",
                                                                                      90);
                                                                                    common::milog::MiLogStream::operator()(
                                                                                      &v219,
                                                                                      off_2649F220,
                                                                                      5049LL);
                                                                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                    return -1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                    v195.m128i_i64[0] = (__int64)SocialHandler::onReadPrivateChatReq;
                                                                                    v195.m128i_i64[1] = 0LL;
                                                                                    *(__m128i *)__f = _mm_load_si128(&v195);
                                                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                      &v218,
                                                                                      __f,
                                                                                      (SocialHandler **)&__y,
                                                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                      v107,
                                                                                      v108);
                                                                                    __x = 5049;
                                                                                    v109 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                             process_packet_func_mapa,
                                                                                             &__x);
                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                      v109,
                                                                                      &v218);
                                                                                    __x = 4981;
                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                    process_packet_func_mapa,
                                                                                                    &__x)._M_node;
                                                                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                    if ( std::operator!=(&v215, &__y) )
                                                                                    {
                                                                                      common::milog::MiLogStream::create(
                                                                                        &v219,
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/handler/social_handler.cpp",
                                                                                        "addPacketFuncToMap",
                                                                                        91);
                                                                                      common::milog::MiLogStream::operator()(
                                                                                        &v219,
                                                                                        off_2649F220,
                                                                                        4981LL);
                                                                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                      return -1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                      v196.m128i_i64[0] = (__int64)SocialHandler::onReadPrivateChatRsp;
                                                                                      v196.m128i_i64[1] = 0LL;
                                                                                      *(__m128i *)__f = _mm_load_si128(&v196);
                                                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                        &v218,
                                                                                        __f,
                                                                                        (SocialHandler **)&__y,
                                                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                        v110,
                                                                                        v111);
                                                                                      __x = 4981;
                                                                                      v112 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                               process_packet_func_mapa,
                                                                                               &__x);
                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                        v112,
                                                                                        &v218);
                                                                                      __x = 4042;
                                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                      if ( std::operator!=(&v215, &__y) )
                                                                                      {
                                                                                        common::milog::MiLogStream::create(
                                                                                          &v219,
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          4u,
                                                                                          "./src/handler/social_handler.cpp",
                                                                                          "addPacketFuncToMap",
                                                                                          93);
                                                                                        common::milog::MiLogStream::operator()(
                                                                                          &v219,
                                                                                          off_2649F220,
                                                                                          4042LL);
                                                                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                        return -1;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                        v197.m128i_i64[0] = (__int64)SocialHandler::onSetFriendRemarkNameReq;
                                                                                        v197.m128i_i64[1] = 0LL;
                                                                                        *(__m128i *)__f = _mm_load_si128(&v197);
                                                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                          &v218,
                                                                                          __f,
                                                                                          (SocialHandler **)&__y,
                                                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                          v113,
                                                                                          v114);
                                                                                        __x = 4042;
                                                                                        v115 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                 process_packet_func_mapa,
                                                                                                 &__x);
                                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                          v115,
                                                                                          &v218);
                                                                                        __x = 10849;
                                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                        if ( std::operator!=(
                                                                                               &v215,
                                                                                               &__y) )
                                                                                        {
                                                                                          common::milog::MiLogStream::create(
                                                                                            &v219,
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            4u,
                                                                                            "./src/handler/social_handler.cpp",
                                                                                            "addPacketFuncToMap",
                                                                                            94);
                                                                                          common::milog::MiLogStream::operator()(
                                                                                            &v219,
                                                                                            off_2649F220,
                                                                                            10849LL);
                                                                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                          return -1;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                          v198.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendBriefRsp;
                                                                                          v198.m128i_i64[1] = 0LL;
                                                                                          *(__m128i *)__f = _mm_load_si128(&v198);
                                                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                            &v218,
                                                                                            __f,
                                                                                            (SocialHandler **)&__y,
                                                                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                            v116,
                                                                                            v117);
                                                                                          __x = 10849;
                                                                                          v118 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                   process_packet_func_mapa,
                                                                                                   &__x);
                                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                            v118,
                                                                                            &v218);
                                                                                          __x = 4067;
                                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                          if ( std::operator!=(
                                                                                                 &v215,
                                                                                                 &__y) )
                                                                                          {
                                                                                            common::milog::MiLogStream::create(
                                                                                              &v219,
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              4u,
                                                                                              "./src/handler/social_handler.cpp",
                                                                                              "addPacketFuncToMap",
                                                                                              95);
                                                                                            common::milog::MiLogStream::operator()(
                                                                                              &v219,
                                                                                              off_2649F220,
                                                                                              4067LL);
                                                                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                            return -1;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                            __x = 4067;
                                                                                            v119 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                     process_packet_func_mapa,
                                                                                                     &__x);
                                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                                                                                              v119,
                                                                                              (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                            __x = 4070;
                                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                            if ( std::operator!=(
                                                                                                   &v215,
                                                                                                   &__y) )
                                                                                            {
                                                                                              common::milog::MiLogStream::create(
                                                                                                &v219,
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                4u,
                                                                                                "./src/handler/social_handler.cpp",
                                                                                                "addPacketFuncToMap",
                                                                                                96);
                                                                                              common::milog::MiLogStream::operator()(
                                                                                                &v219,
                                                                                                off_2649F220,
                                                                                                4070LL);
                                                                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                              return -1;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                              v199.m128i_i64[0] = (__int64)SocialHandler::onGetFriendShowAvatarInfoReq;
                                                                                              v199.m128i_i64[1] = 0LL;
                                                                                              *(__m128i *)__f = _mm_load_si128(&v199);
                                                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                                &v218,
                                                                                                __f,
                                                                                                (SocialHandler **)&__y,
                                                                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                                v120,
                                                                                                v121);
                                                                                              __x = 4070;
                                                                                              v122 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                                v122,
                                                                                                &v218);
                                                                                              __x = 10856;
                                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                              if ( std::operator!=(
                                                                                                     &v215,
                                                                                                     &__y) )
                                                                                              {
                                                                                                common::milog::MiLogStream::create(
                                                                                                  &v219,
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  4u,
                                                                                                  "./src/handler/social_handler.cpp",
                                                                                                  "addPacketFuncToMap",
                                                                                                  97);
                                                                                                common::milog::MiLogStream::operator()(
                                                                                                  &v219,
                                                                                                  off_2649F220,
                                                                                                  10856LL);
                                                                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                return -1;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                v200.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendShowAvatarInfoRsp;
                                                                                                v200.m128i_i64[1] = 0LL;
                                                                                                *(__m128i *)__f = _mm_load_si128(&v200);
                                                                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(
                                                                                                  &v218,
                                                                                                  __f,
                                                                                                  (SocialHandler **)&__y,
                                                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                                  v123,
                                                                                                  v124);
                                                                                                __x = 10856;
                                                                                                v125 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(
                                                                                                  v125,
                                                                                                  &v218);
                                                                                                __x = 4002;
                                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                if ( std::operator!=(&v215, &__y) )
                                                                                                {
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    &v219,
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    4u,
                                                                                                    "./src/handler/social_handler.cpp",
                                                                                                    "addPacketFuncToMap",
                                                                                                    99);
                                                                                                  common::milog::MiLogStream::operator()(
                                                                                                    &v219,
                                                                                                    off_2649F220,
                                                                                                    4002LL);
                                                                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                  return -1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                  __x = 4002;
                                                                                                  v126 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                                                                                                    v126,
                                                                                                    (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                  __x = 4061;
                                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                  if ( std::operator!=(&v215, &__y) )
                                                                                                  {
                                                                                                    common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 100);
                                                                                                    common::milog::MiLogStream::operator()(&v219, off_2649F220, 4061LL);
                                                                                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                    return -1;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                    v201.m128i_i64[0] = (__int64)SocialHandler::onGetFriendShowNameCardInfoReq;
                                                                                                    v201.m128i_i64[1] = 0LL;
                                                                                                    *(__m128i *)__f = _mm_load_si128(&v201);
                                                                                                    std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v127, v128);
                                                                                                    __x = 4061;
                                                                                                    v129 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v129, &v218);
                                                                                                    __x = 10867;
                                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                    if ( std::operator!=(&v215, &__y) )
                                                                                                    {
                                                                                                      common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 101);
                                                                                                      common::milog::MiLogStream::operator()(&v219, off_2649F220, 10867LL);
                                                                                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                      return -1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                      v202.m128i_i64[0] = (__int64)SocialHandler::onServerGetFriendShowNameCardInfoRsp;
                                                                                                      v202.m128i_i64[1] = 0LL;
                                                                                                      *(__m128i *)__f = _mm_load_si128(&v202);
                                                                                                      std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v130, v131);
                                                                                                      __x = 10867;
                                                                                                      v132 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v132, &v218);
                                                                                                      __x = 4100;
                                                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                      if ( std::operator!=(&v215, &__y) )
                                                                                                      {
                                                                                                        common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 102);
                                                                                                        common::milog::MiLogStream::operator()(&v219, off_2649F220, 4100LL);
                                                                                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                        return -1;
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                        v203.m128i_i64[0] = (__int64)SocialHandler::onForceAddPlayerFriendRsp;
                                                                                                        v203.m128i_i64[1] = 0LL;
                                                                                                        *(__m128i *)__f = _mm_load_si128(&v203);
                                                                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v133, v134);
                                                                                                        __x = 4100;
                                                                                                        v135 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v135, &v218);
                                                                                                        __x = 10802;
                                                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                        if ( std::operator!=(&v215, &__y) )
                                                                                                        {
                                                                                                          common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 103);
                                                                                                          common::milog::MiLogStream::operator()(&v219, off_2649F220, 10802LL);
                                                                                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                          return -1;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                          v204.m128i_i64[0] = (__int64)SocialHandler::onServerAddPsnFriendRsp;
                                                                                                          v204.m128i_i64[1] = 0LL;
                                                                                                          *(__m128i *)__f = _mm_load_si128(&v204);
                                                                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v136, v137);
                                                                                                          __x = 10802;
                                                                                                          v138 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v138, &v218);
                                                                                                          __x = 10861;
                                                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                          if ( std::operator!=(&v215, &__y) )
                                                                                                          {
                                                                                                            common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 104);
                                                                                                            common::milog::MiLogStream::operator()(&v219, off_2649F220, 10861LL);
                                                                                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                            return -1;
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                            v205.m128i_i64[0] = (__int64)SocialHandler::onServerAddPsnBlackRsp;
                                                                                                            v205.m128i_i64[1] = 0LL;
                                                                                                            *(__m128i *)__f = _mm_load_si128(&v205);
                                                                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v139, v140);
                                                                                                            __x = 10861;
                                                                                                            v141 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v141, &v218);
                                                                                                            __x = 4032;
                                                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                            if ( std::operator!=(&v215, &__y) )
                                                                                                            {
                                                                                                              common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 105);
                                                                                                              common::milog::MiLogStream::operator()(&v219, off_2649F220, 4032LL);
                                                                                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                              return -1;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                              v206.m128i_i64[0] = (__int64)SocialHandler::onFriendInfoChangeNotify;
                                                                                                              v206.m128i_i64[1] = 0LL;
                                                                                                              *(__m128i *)__f = _mm_load_si128(&v206);
                                                                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v142, v143);
                                                                                                              __x = 4032;
                                                                                                              v144 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v144, &v218);
                                                                                                              __x = 4018;
                                                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                              if ( std::operator!=(&v215, &__y) )
                                                                                                              {
                                                                                                                common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 107);
                                                                                                                common::milog::MiLogStream::operator()(&v219, off_2649F220, 4018LL);
                                                                                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                return -1;
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                v207.m128i_i64[0] = (__int64)SocialHandler::onGetPlayerAskFriendListReq;
                                                                                                                v207.m128i_i64[1] = 0LL;
                                                                                                                *(__m128i *)__f = _mm_load_si128(&v207);
                                                                                                                std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v145, v146);
                                                                                                                __x = 4018;
                                                                                                                v147 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v147, &v218);
                                                                                                                __x = 4068;
                                                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                if ( std::operator!=(&v215, &__y) )
                                                                                                                {
                                                                                                                  common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 109);
                                                                                                                  common::milog::MiLogStream::operator()(&v219, off_2649F220, 4068LL);
                                                                                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                  return -1;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                  __x = 4068;
                                                                                                                  v148 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(v148, (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                                  __x = 4084;
                                                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                  v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                  if ( std::operator!=(&v215, &__y) )
                                                                                                                  {
                                                                                                                    common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 110);
                                                                                                                    common::milog::MiLogStream::operator()(&v219, off_2649F220, 4084LL);
                                                                                                                    common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                    return -1;
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                    __x = 4084;
                                                                                                                    v149 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(v149, (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                                    __x = 4089;
                                                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                    v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                    if ( std::operator!=(&v215, &__y) )
                                                                                                                    {
                                                                                                                      common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 111);
                                                                                                                      common::milog::MiLogStream::operator()(&v219, off_2649F220, 4089LL);
                                                                                                                      common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                      return -1;
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                      __x = 4089;
                                                                                                                      v150 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(v150, (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                                      __x = 10886;
                                                                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                      v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                      if ( std::operator!=(&v215, &__y) )
                                                                                                                      {
                                                                                                                        common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 113);
                                                                                                                        common::milog::MiLogStream::operator()(&v219, off_2649F220, 10886LL);
                                                                                                                        common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                        return -1;
                                                                                                                      }
                                                                                                                      else
                                                                                                                      {
                                                                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                        v208.m128i_i64[0] = (__int64)SocialHandler::onServerAddFriendByMuipRsp;
                                                                                                                        v208.m128i_i64[1] = 0LL;
                                                                                                                        *(__m128i *)__f = _mm_load_si128(&v208);
                                                                                                                        std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v151, v152);
                                                                                                                        __x = 10886;
                                                                                                                        v153 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v153, &v218);
                                                                                                                        __x = 10828;
                                                                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                        v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                        if ( std::operator!=(&v215, &__y) )
                                                                                                                        {
                                                                                                                          common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 114);
                                                                                                                          common::milog::MiLogStream::operator()(&v219, off_2649F220, 10828LL);
                                                                                                                          common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                          return -1;
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                          v209.m128i_i64[0] = (__int64)SocialHandler::onServerDelFriendByMuipRsp;
                                                                                                                          v209.m128i_i64[1] = 0LL;
                                                                                                                          *(__m128i *)__f = _mm_load_si128(&v209);
                                                                                                                          std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v154, v155);
                                                                                                                          __x = 10828;
                                                                                                                          v156 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v156, &v218);
                                                                                                                          __x = 10823;
                                                                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                          v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                          if ( std::operator!=(&v215, &__y) )
                                                                                                                          {
                                                                                                                            common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 115);
                                                                                                                            common::milog::MiLogStream::operator()(&v219, off_2649F220, 10823LL);
                                                                                                                            common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                            return -1;
                                                                                                                          }
                                                                                                                          else
                                                                                                                          {
                                                                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                            v210.m128i_i64[0] = (__int64)SocialHandler::onServerAddFriendAskByMuipRsp;
                                                                                                                            v210.m128i_i64[1] = 0LL;
                                                                                                                            *(__m128i *)__f = _mm_load_si128(&v210);
                                                                                                                            std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v157, v158);
                                                                                                                            __x = 10823;
                                                                                                                            v159 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v159, &v218);
                                                                                                                            __x = 10845;
                                                                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                            v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                            if ( std::operator!=(&v215, &__y) )
                                                                                                                            {
                                                                                                                              common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 116);
                                                                                                                              common::milog::MiLogStream::operator()(&v219, off_2649F220, 10845LL);
                                                                                                                              common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                              return -1;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                              v211.m128i_i64[0] = (__int64)SocialHandler::onServerDelFriendAskByMuipRsp;
                                                                                                                              v211.m128i_i64[1] = 0LL;
                                                                                                                              *(__m128i *)__f = _mm_load_si128(&v211);
                                                                                                                              std::bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>),SocialHandler*,std::_Placeholder<1> const&>(&v218, __f, (SocialHandler **)&__y, (const std::_Placeholder<1> *)&std::placeholders::_1, v160, v161);
                                                                                                                              __x = 10845;
                                                                                                                              v162 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SocialHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SocialHandler*,std::_Placeholder<1>)>>(v162, &v218);
                                                                                                                              __x = 4020;
                                                                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                              v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                              if ( std::operator!=(&v215, &__y) )
                                                                                                                              {
                                                                                                                                common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 118);
                                                                                                                                common::milog::MiLogStream::operator()(&v219, off_2649F220, 4020LL);
                                                                                                                                common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                                return -1;
                                                                                                                              }
                                                                                                                              else
                                                                                                                              {
                                                                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                                __x = 4020;
                                                                                                                                v163 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(v163, (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                                                __x = 5047;
                                                                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                                v215._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                                if ( std::operator!=(&v215, &__y) )
                                                                                                                                {
                                                                                                                                  common::milog::MiLogStream::create(&v219, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/social_handler.cpp", "addPacketFuncToMap", 120);
                                                                                                                                  common::milog::MiLogStream::operator()(&v219, off_2649F220, 5047LL);
                                                                                                                                  common::milog::MiLogStream::~MiLogStream(&v219);
                                                                                                                                  return -1;
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                                  __x = 5047;
                                                                                                                                  v164 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(v164, (SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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

// Line 58: range 00000000180235C8-00000000180238E4
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::SetPlayerBirthdayReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetPlayerBirthdayRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetPlayerBirthdayRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetPlayerBirthdayReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetPlayerBirthdayReq const>(
         (const std::shared_ptr<const proto::SetPlayerBirthdayReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      58);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetPlayerBirthdayReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerBirthdayReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetPlayerBirthdayRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetPlayerBirthdayRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetPlayerBirthdayRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetPlayerBirthdayRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetPlayerBirthdayReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerBirthdayReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onSetPlayerBirthdayReq(this, v8, rsp_0);
    proto::SetPlayerBirthdayRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetPlayerBirthdayRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetPlayerBirthdayRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetPlayerBirthdayRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetPlayerBirthdayRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetPlayerBirthdayRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerBirthdayRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetPlayerBirthdayReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerBirthdayReq> *const)(v2 + 32));
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

// Line 59: range 00000000180238E6-0000000018023C02
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::SetNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetNameCardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetNameCardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetNameCardReq const>(
         (const std::shared_ptr<const proto::SetNameCardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      59);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetNameCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetNameCardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetNameCardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetNameCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onSetNameCardReq(this, v8, rsp_0);
    proto::SetNameCardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetNameCardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetNameCardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetNameCardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetNameCardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetNameCardRsp>::~shared_ptr((std::shared_ptr<proto::SetNameCardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetNameCardReq const>::~shared_ptr((std::shared_ptr<const proto::SetNameCardReq> *const)(v2 + 32));
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

// Line 60: range 0000000018023C04-0000000018023F20
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAllUnlockNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAllUnlockNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAllUnlockNameCardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllUnlockNameCardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllUnlockNameCardReq const>(
         (const std::shared_ptr<const proto::GetAllUnlockNameCardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAllUnlockNameCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllUnlockNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAllUnlockNameCardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAllUnlockNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAllUnlockNameCardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAllUnlockNameCardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAllUnlockNameCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllUnlockNameCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onGetAllUnlockNameCardReq(this, v8, rsp_0);
    proto::GetAllUnlockNameCardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAllUnlockNameCardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAllUnlockNameCardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAllUnlockNameCardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAllUnlockNameCardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAllUnlockNameCardRsp>::~shared_ptr((std::shared_ptr<proto::GetAllUnlockNameCardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAllUnlockNameCardReq const>::~shared_ptr((std::shared_ptr<const proto::GetAllUnlockNameCardReq> *const)(v2 + 32));
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

// Line 64: range 0000000018023F22-0000000018024104
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int updated; // r14d
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::UpdatePS4FriendListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:64";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdatePS4FriendListNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdatePS4FriendListNotify const>(
         (const std::shared_ptr<const proto::UpdatePS4FriendListNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      64);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    updated = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::UpdatePS4FriendListNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePS4FriendListNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    updated = SocialHandler::onUpdatePS4FriendListNotify(this, v7);
  }
  std::shared_ptr<proto::UpdatePS4FriendListNotify const>::~shared_ptr((std::shared_ptr<const proto::UpdatePS4FriendListNotify> *const)(v2 + 32));
  result = updated;
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

// Line 65: range 0000000018024106-00000000180242E8
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::AddFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddFriendNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddFriendNotify const>(
         (const std::shared_ptr<const proto::AddFriendNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      65);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::AddFriendNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SocialHandler::onAddFriendNotify(this, v7);
  }
  std::shared_ptr<proto::AddFriendNotify const>::~shared_ptr((std::shared_ptr<const proto::AddFriendNotify> *const)(v2 + 32));
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

// Line 66: range 00000000180242EA-00000000180244CC
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::DeleteFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:66";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DeleteFriendNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DeleteFriendNotify const>(
         (const std::shared_ptr<const proto::DeleteFriendNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      66);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::DeleteFriendNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DeleteFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SocialHandler::onDeleteFriendNotify(this, v7);
  }
  std::shared_ptr<proto::DeleteFriendNotify const>::~shared_ptr((std::shared_ptr<const proto::DeleteFriendNotify> *const)(v2 + 32));
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

// Line 67: range 00000000180244CE-00000000180246B0
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::AskAddFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AskAddFriendNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AskAddFriendNotify const>(
         (const std::shared_ptr<const proto::AskAddFriendNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      67);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::AskAddFriendNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AskAddFriendNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SocialHandler::onAskAddFriendNotify(this, v7);
  }
  std::shared_ptr<proto::AskAddFriendNotify const>::~shared_ptr((std::shared_ptr<const proto::AskAddFriendNotify> *const)(v2 + 32));
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

// Line 79: range 00000000180246B2-0000000018024A46
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeFirstShareRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-118h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-114h]
  std::__shared_ptr_access<proto::TakeFirstShareRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::TakeFirstShareRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-100h] BYREF
  proto::TakeFirstShareRewardReq p_req; // [rsp+40h] [rbp-F0h] BYREF
  proto::TakeFirstShareRewardRsp p_rsp_0; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v17; // [rsp+80h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:79 64 16 10 rsp_ptr:79";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeFirstShareRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeFirstShareRewardReq const>(
         (const std::shared_ptr<const proto::TakeFirstShareRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      79);
    common::milog::MiLogStream::operator()(&v17, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeFirstShareRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeFirstShareRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeFirstShareRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeFirstShareRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeFirstShareRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeFirstShareRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    proto::TakeFirstShareRewardRsp::TakeFirstShareRewardRsp(&p_rsp_0, rsp_0);
    v8 = std::__shared_ptr_access<proto::TakeFirstShareRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeFirstShareRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::TakeFirstShareRewardReq::TakeFirstShareRewardReq(&p_req, v8);
    retcode = SocialHandler::onTakeFirstShareRewardReq(this, &p_req, &p_rsp_0);
    proto::TakeFirstShareRewardReq::~TakeFirstShareRewardReq(&p_req);
    proto::TakeFirstShareRewardRsp::~TakeFirstShareRewardRsp(&p_rsp_0);
    proto::TakeFirstShareRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeFirstShareRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeFirstShareRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeFirstShareRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeFirstShareRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeFirstShareRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeFirstShareRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeFirstShareRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeFirstShareRewardReq> *const)(v2 + 32));
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

// Line 95: range 0000000018024A48-0000000018024D64
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::UpdatePlayerShowAvatarListReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UpdatePlayerShowAvatarListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:95 64 16 10 rsp_ptr:95";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdatePlayerShowAvatarListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdatePlayerShowAvatarListReq const>(
         (const std::shared_ptr<const proto::UpdatePlayerShowAvatarListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      95);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UpdatePlayerShowAvatarListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePlayerShowAvatarListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UpdatePlayerShowAvatarListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UpdatePlayerShowAvatarListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UpdatePlayerShowAvatarListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UpdatePlayerShowAvatarListRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UpdatePlayerShowAvatarListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePlayerShowAvatarListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onUpdatePlayerShowAvatarListReq(this, v8, rsp_0);
    proto::UpdatePlayerShowAvatarListRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UpdatePlayerShowAvatarListRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp>::~shared_ptr((std::shared_ptr<proto::UpdatePlayerShowAvatarListRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UpdatePlayerShowAvatarListReq const>::~shared_ptr((std::shared_ptr<const proto::UpdatePlayerShowAvatarListReq> *const)(v2 + 32));
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

// Line 99: range 0000000018024D66-0000000018025082
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::UpdatePlayerShowNameCardListReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UpdatePlayerShowNameCardListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:99 64 16 10 rsp_ptr:99";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdatePlayerShowNameCardListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdatePlayerShowNameCardListReq const>(
         (const std::shared_ptr<const proto::UpdatePlayerShowNameCardListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      99);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UpdatePlayerShowNameCardListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePlayerShowNameCardListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UpdatePlayerShowNameCardListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UpdatePlayerShowNameCardListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UpdatePlayerShowNameCardListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UpdatePlayerShowNameCardListRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UpdatePlayerShowNameCardListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePlayerShowNameCardListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onUpdatePlayerShowNameCardListReq(this, v8, rsp_0);
    proto::UpdatePlayerShowNameCardListRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UpdatePlayerShowNameCardListRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp>::~shared_ptr((std::shared_ptr<proto::UpdatePlayerShowNameCardListRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UpdatePlayerShowNameCardListReq const>::~shared_ptr((std::shared_ptr<const proto::UpdatePlayerShowNameCardListReq> *const)(v2 + 32));
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

// Line 109: range 0000000018025084-00000000180253A0
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::GetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetChatEmojiCollectionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:109 64 16 11 rsp_ptr:109";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetChatEmojiCollectionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetChatEmojiCollectionReq const>(
         (const std::shared_ptr<const proto::GetChatEmojiCollectionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      109);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetChatEmojiCollectionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetChatEmojiCollectionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetChatEmojiCollectionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetChatEmojiCollectionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onGetChatEmojiCollectionReq(this, v8, rsp_0);
    proto::GetChatEmojiCollectionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetChatEmojiCollectionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetChatEmojiCollectionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetChatEmojiCollectionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetChatEmojiCollectionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetChatEmojiCollectionRsp>::~shared_ptr((std::shared_ptr<proto::GetChatEmojiCollectionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetChatEmojiCollectionReq const>::~shared_ptr((std::shared_ptr<const proto::GetChatEmojiCollectionReq> *const)(v2 + 32));
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

// Line 110: range 00000000180253A2-00000000180256BE
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::SetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetChatEmojiCollectionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:110 64 16 11 rsp_ptr:110";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetChatEmojiCollectionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetChatEmojiCollectionReq const>(
         (const std::shared_ptr<const proto::SetChatEmojiCollectionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      110);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetChatEmojiCollectionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetChatEmojiCollectionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetChatEmojiCollectionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetChatEmojiCollectionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetChatEmojiCollectionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetChatEmojiCollectionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onSetChatEmojiCollectionReq(this, v8, rsp_0);
    proto::SetChatEmojiCollectionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetChatEmojiCollectionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetChatEmojiCollectionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetChatEmojiCollectionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetChatEmojiCollectionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetChatEmojiCollectionRsp>::~shared_ptr((std::shared_ptr<proto::SetChatEmojiCollectionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetChatEmojiCollectionReq const>::~shared_ptr((std::shared_ptr<const proto::SetChatEmojiCollectionReq> *const)(v2 + 32));
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

// Line 111: range 00000000180256C0-00000000180259DC
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::UpdatePS4FriendListReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UpdatePS4FriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UpdatePS4FriendListRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:111 64 16 11 rsp_ptr:111";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdatePS4FriendListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdatePS4FriendListReq const>(
         (const std::shared_ptr<const proto::UpdatePS4FriendListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      111);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UpdatePS4FriendListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePS4FriendListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UpdatePS4FriendListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UpdatePS4FriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UpdatePS4FriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UpdatePS4FriendListRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UpdatePS4FriendListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePS4FriendListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onUpdatePS4FriendListReq(this, v8, rsp_0);
    proto::UpdatePS4FriendListRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UpdatePS4FriendListRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UpdatePS4FriendListRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UpdatePS4FriendListRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UpdatePS4FriendListRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UpdatePS4FriendListRsp>::~shared_ptr((std::shared_ptr<proto::UpdatePS4FriendListRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UpdatePS4FriendListReq const>::~shared_ptr((std::shared_ptr<const proto::UpdatePS4FriendListReq> *const)(v2 + 32));
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

// Line 118: range 00000000180259DE-0000000018025CFA
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::ReadSignatureAuditReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ReadSignatureAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ReadSignatureAuditRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:118 64 16 11 rsp_ptr:118";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReadSignatureAuditReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReadSignatureAuditReq const>(
         (const std::shared_ptr<const proto::ReadSignatureAuditReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      118);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ReadSignatureAuditReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadSignatureAuditReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReadSignatureAuditRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReadSignatureAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReadSignatureAuditRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReadSignatureAuditRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ReadSignatureAuditReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadSignatureAuditReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SocialHandler::onReadSignatureAuditReq(this, v8, rsp_0);
    proto::ReadSignatureAuditRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReadSignatureAuditRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReadSignatureAuditRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ReadSignatureAuditRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ReadSignatureAuditRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ReadSignatureAuditRsp>::~shared_ptr((std::shared_ptr<proto::ReadSignatureAuditRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReadSignatureAuditReq const>::~shared_ptr((std::shared_ptr<const proto::ReadSignatureAuditReq> *const)(v2 + 32));
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

// Line 120: range 0000000018025CFC-0000000018025EDE
int __cdecl SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const SocialHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SocialHandler *this; // r14
  std::__shared_ptr_access<const proto::ChatChannelShieldNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:120";
  *(_QWORD *)(v2 + 16) = SocialHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChatChannelShieldNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChatChannelShieldNotify const>(
         (const std::shared_ptr<const proto::ChatChannelShieldNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "operator()",
      120);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ChatChannelShieldNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChatChannelShieldNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SocialHandler::onChatChannelShieldNotify(this, v7);
  }
  std::shared_ptr<proto::ChatChannelShieldNotify const>::~shared_ptr((std::shared_ptr<const proto::ChatChannelShieldNotify> *const)(v2 + 32));
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

// Line 126: range 000000001802B726-000000001802BA1B
int32_t __cdecl SocialHandler::onGetPlayerFriendListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rax
  int32_t result; // eax
  std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:127 64 16 11 rsp_ptr:127";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetPlayerFriendListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerFriendListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerFriendListReq const>(
         (const std::shared_ptr<const proto::GetPlayerFriendListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetPlayerFriendListReq",
      127);
    common::milog::MiLogStream::operator()(&v9, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetPlayerFriendListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerFriendListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetPlayerFriendListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetPlayerFriendListRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    if ( PlayerSocialComp::clientRequstFriendList(SocialComp) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onGetPlayerFriendListReq",
        131);
      common::milog::MiLogStream::operator()(&v9, "[Social] getFriendList failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::shared_ptr<proto::GetPlayerFriendListRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerFriendListRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetPlayerFriendListReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerFriendListReq> *const)(v2 + 32));
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

// Line 139: range 000000001802BA1C-000000001802BC94
int32_t __cdecl SocialHandler::onServerGetPlayerFriendListRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:140";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendListRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetPlayerFriendListRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerFriendListRsp const>(
         (const std::shared_ptr<const proto::ServerGetPlayerFriendListRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendListRsp",
      140);
    common::milog::MiLogStream::operator()(&v9, off_2649F3A0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerFriendListRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendListRsp",
      142);
    common::milog::MiLogStream::operator()(&v9, "[Social] onServerGetPlayerFriendListRsp");
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    PlayerSocialComp::onGetPlayerFriendList(SocialComp, rsp_0);
    v5 = 0;
  }
  std::shared_ptr<proto::ServerGetPlayerFriendListRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetPlayerFriendListRsp> *const)(v2 + 32));
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

// Line 149: range 000000001802BC96-000000001802BE9B
int32_t __cdecl SocialHandler::onServerGetPlayerFriendBriefRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t PlayerFriendBrief; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:150";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerFriendBriefRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetPlayerFriendBriefRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetPlayerFriendBriefRsp const>(
         (const std::shared_ptr<const proto::ServerGetPlayerFriendBriefRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerFriendBriefRsp",
      150);
    common::milog::MiLogStream::operator()(&v9, off_2649F4C0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    PlayerFriendBrief = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerFriendBriefRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetPlayerFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    PlayerFriendBrief = PlayerSocialComp::onServerGetPlayerFriendBrief(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerGetPlayerFriendBriefRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetPlayerFriendBriefRsp> *const)(v2 + 32));
  result = PlayerFriendBrief;
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

// Line 156: range 000000001802BE9C-000000001802C0A1
int32_t __cdecl SocialHandler::onServerGetAskFriendBriefRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t AskFriendBrief; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:157";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetAskFriendBriefRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetAskFriendBriefRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetAskFriendBriefRsp const>(
         (const std::shared_ptr<const proto::ServerGetAskFriendBriefRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetAskFriendBriefRsp",
      157);
    common::milog::MiLogStream::operator()(&v9, off_2649F580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    AskFriendBrief = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetAskFriendBriefRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetAskFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    AskFriendBrief = PlayerSocialComp::onServerGetAskFriendBrief(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerGetAskFriendBriefRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetAskFriendBriefRsp> *const)(v2 + 32));
  result = AskFriendBrief;
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

// Line 163: range 000000001802C0A2-000000001802C684
int32_t __cdecl SocialHandler::onGetPlayerSocialDetailReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t SocialDetail; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t Uid; // r15d
  proto::SocialDetail *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isFriendListClosed; // r14
  google::protobuf::uint32 v11; // eax
  int32_t result; // eax
  uint32_t target_uid; // [rsp+20h] [rbp-130h]
  google::protobuf::int32 retcode; // [rsp+24h] [rbp-12Ch]
  std::__shared_ptr_access<const proto::GetPlayerSocialDetailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-110h] BYREF
  char v18[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:164 64 24 14 server_req:191 128 32 7 rsp:167";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetPlayerSocialDetailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerSocialDetailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerSocialDetailReq const>(
         (const std::shared_ptr<const proto::GetPlayerSocialDetailReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetPlayerSocialDetailReq",
      164);
    common::milog::MiLogStream::operator()(&v17, off_2649F660);
    common::milog::MiLogStream::~MiLogStream(&v17);
    SocialDetail = -1;
    goto LABEL_28;
  }
  req = std::__shared_ptr_access<proto::GetPlayerSocialDetailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerSocialDetailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  target_uid = proto::GetPlayerSocialDetailReq::uid(req);
  proto::GetPlayerSocialDetailRsp::GetPlayerSocialDetailRsp((proto::GetPlayerSocialDetailRsp *const)(v2 + 128));
  if ( target_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( target_uid != Player::getUid(this->player_) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      isFriendListClosed = FeatureSwitchMgr::isFriendListClosed(&v9->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( isFriendListClosed )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onGetPlayerSocialDetailReq",
          185);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v17,
          (const char (*)[27])"friend list feature closed");
        common::milog::MiLogStream::~MiLogStream(&v17);
        proto::GetPlayerSocialDetailRsp::set_retcode((proto::GetPlayerSocialDetailRsp *const)(v2 + 128), 142);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
        SocialDetail = 142;
      }
      else
      {
        proto::ServerGetSocialDetailReq::ServerGetSocialDetailReq((proto::ServerGetSocialDetailReq *const)(v2 + 64));
        v11 = proto::GetPlayerSocialDetailReq::uid(req);
        proto::ServerGetSocialDetailReq::set_target_uid((proto::ServerGetSocialDetailReq *const)(v2 + 64), v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SocialDetail = sendProtoToSocialService<proto::ServerGetSocialDetailReq>(
                         this->player_,
                         (proto::ServerGetSocialDetailReq *)(v2 + 64));
        proto::ServerGetSocialDetailReq::~ServerGetSocialDetailReq((proto::ServerGetSocialDetailReq *const)(v2 + 64));
      }
      goto LABEL_27;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v8 = proto::GetPlayerSocialDetailRsp::mutable_detail_data((proto::GetPlayerSocialDetailRsp *const)(v2 + 128));
    retcode = PlayerSocialComp::fillSocialDetail(SocialComp, v8, Uid);
    proto::GetPlayerSocialDetailRsp::set_retcode((proto::GetPlayerSocialDetailRsp *const)(v2 + 128), retcode);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    proto::GetPlayerSocialDetailRsp::set_retcode((proto::GetPlayerSocialDetailRsp *const)(v2 + 128), 7002);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
  SocialDetail = 0;
LABEL_27:
  proto::GetPlayerSocialDetailRsp::~GetPlayerSocialDetailRsp((proto::GetPlayerSocialDetailRsp *const)(v2 + 128));
LABEL_28:
  std::shared_ptr<proto::GetPlayerSocialDetailReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerSocialDetailReq> *const)(v2 + 32));
  result = SocialDetail;
  if ( v18 == (char *)v2 )
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

// Line 198: range 000000001802C686-000000001802CCC1
int32_t __cdecl SocialHandler::onServerGetSocialDetailRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::SocialDetail *v6; // rax
  PlayerEventComp *EventComp; // r14
  PlayerMpComp *MpComp; // rax
  const proto::SocialDetail *v9; // rax
  const std::string *v10; // rax
  std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::int32 v14; // eax
  std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const proto::SocialDetail *v16; // rdx
  PlayerSocialComp *SocialComp; // r14
  uint32_t v18; // eax
  bool isPlayerFriend; // dl
  PlayerSocialComp *v20; // r14
  uint32_t v21; // eax
  bool isPlayerInBlacklist; // dl
  PlayerSocialComp *v23; // r14
  uint32_t v24; // eax
  const std::string *v25; // rdx
  Player *player; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+10h] [rbp-D0h]
  proto::SocialDetail *social_detail; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:199 64 16 18 client_rsp_ptr:208";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetSocialDetailRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetSocialDetailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetSocialDetailRsp const>(
         (const std::shared_ptr<const proto::ServerGetSocialDetailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetSocialDetailRsp",
      199);
    common::milog::MiLogStream::operator()(&v31, off_2649F780);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetSocialDetailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !proto::ServerGetSocialDetailRsp::retcode(rsp_0) )
    {
      v6 = proto::ServerGetSocialDetailRsp::social_detail(rsp_0);
      common::tools::perf::make_shared<SocialDetialEvent,proto::SocialDetail const&>(
        (const proto::SocialDetail *)(v2 + 64),
        v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<SocialDetialEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<SocialDetialEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<SocialDetialEvent>::~shared_ptr((std::shared_ptr<SocialDetialEvent> *const)(v2 + 64));
    }
    common::tools::perf::make_shared<proto::GetPlayerSocialDetailRsp>();
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( PlayerMpComp::getIsOnlyMpWithPSPlayer(MpComp)
      && (v9 = proto::ServerGetSocialDetailRsp::social_detail(rsp_0),
          v10 = proto::SocialDetail::online_id[abi:cxx11](v9),
          (unsigned __int8)std::string::empty(v10)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onServerGetSocialDetailRsp",
        211);
      common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
        &v31,
        (const char (*)[69])"[Social] only mp with ps player switch on and other is not ps player");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v12 = std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto::GetPlayerSocialDetailRsp::set_retcode(v12, 7043);
    }
    else
    {
      v13 = std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = proto::ServerGetSocialDetailRsp::retcode(rsp_0);
      proto::GetPlayerSocialDetailRsp::set_retcode(v13, v14);
      if ( !proto::ServerGetSocialDetailRsp::retcode(rsp_0) )
      {
        v15 = std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerSocialDetailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        social_detail = proto::GetPlayerSocialDetailRsp::mutable_detail_data(v15);
        v16 = proto::ServerGetSocialDetailRsp::social_detail(rsp_0);
        proto::SocialDetail::CopyFrom(social_detail, v16);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SocialComp = Player::getSocialComp(this->player_);
        v18 = proto::SocialDetail::uid(social_detail);
        isPlayerFriend = PlayerSocialComp::isPlayerFriend(SocialComp, v18);
        proto::SocialDetail::set_is_friend(social_detail, isPlayerFriend);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = Player::getSocialComp(this->player_);
        v21 = proto::SocialDetail::uid(social_detail);
        isPlayerInBlacklist = PlayerSocialComp::isPlayerInBlacklist(v20, v21);
        proto::SocialDetail::set_is_in_blacklist(social_detail, isPlayerInBlacklist);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = Player::getSocialComp(this->player_);
        v24 = proto::SocialDetail::uid(social_detail);
        v25 = PlayerSocialComp::findFriendRemarkName[abi:cxx11](v23, v24);
        proto::SocialDetail::set_remark_name(social_detail, v25);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetPlayerSocialDetailRsp>((const std::shared_ptr<proto::GetPlayerSocialDetailRsp> *)&p_event_ptr);
    v5 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&p_event_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&p_event_ptr);
    std::shared_ptr<proto::GetPlayerSocialDetailRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerSocialDetailRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetSocialDetailRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetSocialDetailRsp> *const)(v2 + 32));
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

// Line 231: range 000000001802CCC2-000000001802CECE
int32_t __cdecl SocialHandler::onAskAddFriendReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::AskAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 req_ptr:232";
  *(_QWORD *)(v2 + 16) = SocialHandler::onAskAddFriendReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AskAddFriendReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AskAddFriendReq const>(
         (const std::shared_ptr<const proto::AskAddFriendReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onAskAddFriendReq",
      232);
    common::milog::MiLogStream::operator()(&v10, off_2649F8C0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AskAddFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AskAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v7 = proto::AskAddFriendReq::target_uid(req);
    v5 = PlayerSocialComp::onAskAddFriend(SocialComp, v7);
  }
  std::shared_ptr<proto::AskAddFriendReq const>::~shared_ptr((std::shared_ptr<const proto::AskAddFriendReq> *const)(v2 + 32));
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

// Line 237: range 000000001802CED0-000000001802D0D5
int32_t __cdecl SocialHandler::onServerAskAddFriendRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:238";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAskAddFriendRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAskAddFriendRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAskAddFriendRsp const>(
         (const std::shared_ptr<const proto::ServerAskAddFriendRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAskAddFriendRsp",
      238);
    common::milog::MiLogStream::operator()(&v9, off_2649F960);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerAskAddFriendRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerAskAddFriend(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerAskAddFriendRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAskAddFriendRsp> *const)(v2 + 32));
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

// Line 243: range 000000001802D0D6-000000001802D58F
int32_t __cdecl SocialHandler::onDealAddFriendReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isAskAddFriendClosed; // r14
  google::protobuf::uint32 v8; // eax
  PlayerSocialComp *SocialComp; // r14
  uint32_t v10; // eax
  char v11; // al
  google::protobuf::uint32 v12; // eax
  google::protobuf::uint32 v13; // eax
  proto::DealAddFriendResultType v14; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::DealAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:244 64 32 14 server_req:262";
  *(_QWORD *)(v2 + 16) = SocialHandler::onDealAddFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DealAddFriendReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DealAddFriendReq const>(
         (const std::shared_ptr<const proto::DealAddFriendReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onDealAddFriendReq",
      244);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), off_2649FA40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    v5 = -1;
    goto LABEL_23;
  }
  req = std::__shared_ptr_access<proto::DealAddFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DealAddFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  isAskAddFriendClosed = FeatureSwitchMgr::isAskAddFriendClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( isAskAddFriendClosed )
  {
    proto::DealAddFriendRsp::DealAddFriendRsp((proto::DealAddFriendRsp *const)(v2 + 64));
    v8 = proto::DealAddFriendReq::target_uid(req);
    proto::DealAddFriendRsp::set_target_uid((proto::DealAddFriendRsp *const)(v2 + 64), v8);
    proto::DealAddFriendRsp::set_retcode((proto::DealAddFriendRsp *const)(v2 + 64), 142);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    proto::DealAddFriendRsp::~DealAddFriendRsp((proto::DealAddFriendRsp *const)(v2 + 64));
    goto LABEL_23;
  }
  if ( proto::DealAddFriendReq::deal_add_friend_result(req) != DEAL_ADD_FRIEND_ACCEPT )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v10 = proto::DealAddFriendReq::target_uid(req);
  if ( PlayerSocialComp::isPlayerInBlacklist(SocialComp, v10) )
    v11 = 1;
  else
LABEL_15:
    v11 = 0;
  if ( v11 )
  {
    proto::DealAddFriendRsp::DealAddFriendRsp((proto::DealAddFriendRsp *const)(v2 + 64));
    v12 = proto::DealAddFriendReq::target_uid(req);
    proto::DealAddFriendRsp::set_target_uid((proto::DealAddFriendRsp *const)(v2 + 64), v12);
    proto::DealAddFriendRsp::set_retcode((proto::DealAddFriendRsp *const)(v2 + 64), 7019);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  proto::ServerDealAddFriendReq::ServerDealAddFriendReq((proto::ServerDealAddFriendReq *const)(v2 + 64));
  v13 = proto::DealAddFriendReq::target_uid(req);
  proto::ServerDealAddFriendReq::set_target_uid((proto::ServerDealAddFriendReq *const)(v2 + 64), v13);
  v14 = proto::DealAddFriendReq::deal_add_friend_result(req);
  proto::ServerDealAddFriendReq::set_deal_add_friend_result((proto::ServerDealAddFriendReq *const)(v2 + 64), v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = sendProtoToSocialService<proto::ServerDealAddFriendReq>(
         this->player_,
         (proto::ServerDealAddFriendReq *)(v2 + 64));
  proto::ServerDealAddFriendReq::~ServerDealAddFriendReq((proto::ServerDealAddFriendReq *const)(v2 + 64));
LABEL_23:
  std::shared_ptr<proto::DealAddFriendReq const>::~shared_ptr((std::shared_ptr<const proto::DealAddFriendReq> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 271: range 000000001802D590-000000001802D795
int32_t __cdecl SocialHandler::onServerDealAddFriendRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerDealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:272";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDealAddFriendRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDealAddFriendRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerDealAddFriendRsp const>(
         (const std::shared_ptr<const proto::ServerDealAddFriendRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDealAddFriendRsp",
      272);
    common::milog::MiLogStream::operator()(&v9, off_2649FAE0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerDealAddFriendRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerDealAddFriend(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerDealAddFriendRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerDealAddFriendRsp> *const)(v2 + 32));
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

// Line 277: range 000000001802D796-000000001802DD56
int32_t __cdecl SocialHandler::onDeleteFriendReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isFriendListClosed; // r14
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  google::protobuf::uint32 v10; // eax
  Player *player; // r14
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  int32_t result; // eax
  int32_t retcode; // [rsp+18h] [rbp-118h]
  google::protobuf::uint32 target_uid; // [rsp+1Ch] [rbp-114h]
  std::__shared_ptr_access<const proto::DeleteFriendReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-110h]
  PlayerSocialComp *social_comp; // [rsp+28h] [rbp-108h]
  std::shared_ptr<const google::protobuf::Message> v21; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:278 64 16 18 client_rsp_ptr:309 96 24 14 server_req:315";
  *(_QWORD *)(v2 + 16) = SocialHandler::onDeleteFriendReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DeleteFriendReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DeleteFriendReq const>(
         (const std::shared_ptr<const proto::DeleteFriendReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onDeleteFriendReq",
      278);
    common::milog::MiLogStream::operator()(&v22, off_2649FBE0);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
    goto LABEL_24;
  }
  req = std::__shared_ptr_access<proto::DeleteFriendReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DeleteFriendReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  target_uid = proto::DeleteFriendReq::target_uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  social_comp = Player::getSocialComp(this->player_);
  if ( !PlayerSocialComp::isPlayerFriend(social_comp, target_uid) )
  {
    retcode = 7008;
  }
  else if ( PlayerSocialComp::isPlayerPSNFriend(social_comp, target_uid) )
  {
    retcode = 7013;
  }
  else
  {
    retcode = 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  isFriendListClosed = FeatureSwitchMgr::isFriendListClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
  if ( isFriendListClosed )
  {
    common::tools::perf::make_shared<proto::DeleteFriendRsp>();
    v8 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DeleteFriendRsp::set_retcode(v8, 142);
    v9 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v10 = proto::DeleteFriendReq::target_uid(req);
    proto::DeleteFriendRsp::set_target_uid(v9, v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_16:
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::DeleteFriendRsp>((const std::shared_ptr<proto::DeleteFriendRsp> *)&v21);
    v5 = Player::sendMessage(player, &v21, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v21);
    std::shared_ptr<proto::DeleteFriendRsp>::~shared_ptr((std::shared_ptr<proto::DeleteFriendRsp> *const)(v2 + 64));
    goto LABEL_24;
  }
  if ( retcode )
  {
    common::tools::perf::make_shared<proto::DeleteFriendRsp>();
    v12 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DeleteFriendRsp::set_retcode(v12, retcode);
    v13 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = proto::DeleteFriendReq::target_uid(req);
    proto::DeleteFriendRsp::set_target_uid(v13, v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_16;
  }
  proto::ServerDeleteFriendReq::ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v2 + 96));
  v15 = proto::DeleteFriendReq::target_uid(req);
  proto::ServerDeleteFriendReq::set_target_uid((proto::ServerDeleteFriendReq *const)(v2 + 96), v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = sendProtoToSocialService<proto::ServerDeleteFriendReq>(this->player_, (proto::ServerDeleteFriendReq *)(v2 + 96));
  proto::ServerDeleteFriendReq::~ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v2 + 96));
LABEL_24:
  std::shared_ptr<proto::DeleteFriendReq const>::~shared_ptr((std::shared_ptr<const proto::DeleteFriendReq> *const)(v2 + 32));
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 322: range 000000001802DD58-000000001802DF5D
int32_t __cdecl SocialHandler::onServerDeleteFriendRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerDeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:323";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDeleteFriendRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDeleteFriendRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerDeleteFriendRsp const>(
         (const std::shared_ptr<const proto::ServerDeleteFriendRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDeleteFriendRsp",
      323);
    common::milog::MiLogStream::operator()(&v9, off_2649FC80);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerDeleteFriendRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerDeleteFriend(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerDeleteFriendRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerDeleteFriendRsp> *const)(v2 + 32));
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

// Line 329: range 000000001802DF5E-000000001802E3BB
int32_t __cdecl SocialHandler::onSetPlayerBirthdayReq(
        SocialHandler *const this,
        const proto::SetPlayerBirthdayReq *req,
        proto::SetPlayerBirthdayRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSocialComp *SocialComp; // rcx
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySetBirthday,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  const proto::Birthday *v10; // rax
  unsigned int v11; // eax
  const proto::Birthday *v12; // rax
  unsigned int v13; // eax
  Player *player; // r14
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-160h]
  const proto::SetPlayerBirthdayReq *const reqa; // [rsp+10h] [rbp-150h]
  SocialHandler *thisa; // [rsp+18h] [rbp-148h]
  int set_ret; // [rsp+2Ch] [rbp-134h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-110h] BYREF
  std::string v23; // [rsp+70h] [rbp-F0h] BYREF
  std::string __rhs; // [rsp+90h] [rbp-D0h] BYREF
  std::string value; // [rsp+B0h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+D0h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v16._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v16._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:335 64 16 11 log_ptr:336";
  *(_QWORD *)(v3 + 16) = SocialHandler::onSetPlayerBirthdayReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  set_ret = PlayerSocialComp::setBirthday(SocialComp, req, (proto::SetPlayerBirthdayRsp *)v16._M_string_length);
  if ( set_ret )
  {
    v7 = set_ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xA95u, v16);
    std::string::~string(&value);
    common::tools::perf::make_shared<proto_log::PlayerLogBodySetBirthday>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodySetBirthday,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySetBirthday,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v10 = proto::SetPlayerBirthdayReq::birthday(reqa);
    v11 = proto::Birthday::day(v10);
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, v11);
    v12 = proto::SetPlayerBirthdayReq::birthday(reqa);
    v13 = proto::Birthday::month(v12);
    common::tools::StringUtils::numToStr<unsigned int>(&__lhs, v13);
    std::operator+<char>(&v23, &__lhs, "-");
    std::operator+<char>(&value, &v23, &__rhs);
    proto_log::PlayerLogBodySetBirthday::set_birthday_set(v9, &value);
    std::string::~string(&value);
    std::string::~string(&v23);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySetBirthday,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodySetBirthday> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v7 = 0;
    std::shared_ptr<proto_log::PlayerLogBodySetBirthday>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySetBirthday> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = v7;
  if ( v26 == (char *)v3 )
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

// Line 343: range 000000001802E6E0-000000001802F326
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SocialHandler::onSetPlayerSignatureReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::string *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SignatureLength; // eax
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v12; // rsi
  common::minet::Packet *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v17; // rax
  GameserverService *v18; // r14
  const std::shared_ptr<common::minet::Packet> *v19; // rsi
  __int64 v20; // rdx
  common::minet::PacketPtr v21; // rdi
  common::minet::Packet *v22; // rax
  common::minet::Packet *v23; // rax
  common::minet::PacketPtr v24; // rdi
  common::minet::Packet *v25; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v26; // rsi
  common::minet::Packet *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // r14
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  bool isSignatureAuditEnabled; // r14
  Player *v36; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-2C5h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-2C4h] BYREF
  int32_t ret; // [rsp+20h] [rbp-2C0h]
  uint32_t async_http_type; // [rsp+24h] [rbp-2BCh]
  int32_t ret_0; // [rsp+28h] [rbp-2B8h]
  int32_t retcode; // [rsp+2Ch] [rbp-2B4h]
  const proto::SetPlayerSignatureReq *req; // [rsp+30h] [rbp-2B0h]
  PlayerSocialComp *social_comp; // [rsp+38h] [rbp-2A8h]
  std::shared_ptr<common::minet::Packet> v46; // [rsp+40h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-290h] BYREF
  char v48[624]; // [rsp+70h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 16 11 req_ptr:344 80 16 7 rsp:346 112 16 9 timer:362 144 32 18 signature_text:348 208 32 15"
                        " sign_before:385 272 240 12 http_req:362";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSetPlayerSignatureReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::SetPlayerSignatureReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::SetPlayerSignatureReq const>(
         (const std::shared_ptr<const proto::SetPlayerSignatureReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSetPlayerSignatureReq",
      344);
    common::milog::MiLogStream::operator()(&v47, off_2649FE00);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v6 = -1;
    goto LABEL_38;
  }
  req = std::__shared_ptr_access<proto::SetPlayerSignatureReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerSignatureReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::SetPlayerSignatureRsp>();
  v7 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::SetPlayerSignatureRsp::set_retcode(v7, 0);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v47, off_2649FE60, &__a);
  v8 = proto::SetPlayerSignatureReq::signature[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v2 + 144), v8, (const std::string *)&v47, 1);
  std::string::~string(&v47);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v2 + 144) != 1 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v46);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
    SignatureLength = ConstValueExcelConfigMgr::getSignatureLength(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v2 + 144), SignatureLength);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
    if ( ret )
    {
      v11 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      proto::SetPlayerSignatureRsp::set_retcode(v11, ret);
    }
    else
    {
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v12);
      if ( !common::minet::Packet::getExt(v13, 2u) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        if ( *(char *)(((unsigned __int64)&v14->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v14 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v14->is_word_filter_use_remote);
        is_word_filter_use_remote = v14->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v17 = proto::SetPlayerSignatureReq::signature[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 272), v17, player, 6u);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0xFF1u);
          v18 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)(v2 + 208),
            v19);
          v20 = *(_QWORD *)(v2 + 120);
          *(_QWORD *)(v2 + 224) = *(_QWORD *)(v2 + 112);
          *(_QWORD *)(v2 + 232) = v20;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v47,
            (SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *)(v2 + 208));
          ret_0 = GameserverService::asyncHttpRequest(
                    v18,
                    (const common::minet::http_client::HttpRequest *)(v2 + 272),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v47);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v47);
          SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse((SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const)(v2 + 208));
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onSetPlayerSignatureReq",
              362);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v47,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v47);
            v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v21._M_refcount._M_pi);
            common::minet::Packet::setExt(v22, 2u, 1u);
            v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v21._M_refcount._M_pi);
            common::minet::Packet::setExt(v23, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v46,
              (const std::shared_ptr<common::minet::Packet> *)v21._M_refcount._M_pi);
            v21._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v46;
            ServiceBox::pushPacketToService(v21);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v46);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 272));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
        }
        else
        {
          v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v24._M_refcount._M_pi);
          common::minet::Packet::setExt(v25, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v46,
            (const std::shared_ptr<common::minet::Packet> *)v24._M_refcount._M_pi);
          v24._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v46;
          ServiceBox::pushPacketToService(v24);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v46);
        }
        v6 = 0;
        goto LABEL_37;
      }
      v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v26);
      if ( common::minet::Packet::getExt(v27, 3u) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onSetPlayerSignatureReq",
          369);
        v28 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v47,
                (const char (*)[44])"word filter check failed, word illegal uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v29 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::SetPlayerSignatureRsp::set_retcode(v29, 7011);
      }
    }
  }
  v30 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( proto::SetPlayerSignatureRsp::retcode(v30) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v31 = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::SetPlayerSignatureRsp>((const std::shared_ptr<proto::SetPlayerSignatureRsp> *)&v46);
    v6 = Player::sendMessage(v31, (common::minet::ConstMessagePtr *)&v46, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v46);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    social_comp = Player::getSocialComp(this->player_);
    PlayerSocialComp::getSignature[abi:cxx11]((std::string *)(v2 + 208), social_comp);
    retcode = PlayerSocialComp::onChangeSignature(social_comp, req);
    v32 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::SetPlayerSignatureRsp::set_retcode(v32, retcode);
    v33 = std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    PlayerSocialComp::getSignature[abi:cxx11]((std::string *)&v47, social_comp);
    proto::SetPlayerSignatureRsp::set_signature(v33, (std::string *)&v47);
    std::string::~string(&v47);
    if ( !retcode )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v46);
      v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
      isSignatureAuditEnabled = FeatureSwitchMgr::isSignatureAuditEnabled(&v34->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
      if ( isSignatureAuditEnabled )
        PlayerSocialComp::notifySignatureAuditData(social_comp);
      PlayerSocialComp::logOperateChangeSignature(social_comp, (const std::string *)(v2 + 208));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v36 = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::SetPlayerSignatureRsp>((const std::shared_ptr<proto::SetPlayerSignatureRsp> *)&v46);
    v6 = Player::sendMessage(v36, (common::minet::ConstMessagePtr *)&v46, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v46);
    std::string::~string((void *)(v2 + 208));
  }
LABEL_37:
  std::string::~string((void *)(v2 + 144));
  std::shared_ptr<proto::SetPlayerSignatureRsp>::~shared_ptr((std::shared_ptr<proto::SetPlayerSignatureRsp> *const)(v2 + 80));
LABEL_38:
  std::shared_ptr<proto::SetPlayerSignatureReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerSignatureReq> *const)(v2 + 48));
  result = v6;
  if ( v48 == (char *)v2 )
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

// Line 362: range 00000000180899C2-0000000018089A4B
void __cdecl SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 362: range 0000000018089B16-0000000018089B9F
void __cdecl SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 362: range 000000001802E3BC-000000001802E6B2
void __cdecl SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::SetPlayerSignatureReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:362";
  *(_QWORD *)(v4 + 16) = SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::SetPlayerSignatureReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::SetPlayerSignatureReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetPlayerSignatureReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::SetPlayerSignatureReq::mutable_signature[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::SetPlayerSignatureReq>::~shared_ptr((std::shared_ptr<proto::SetPlayerSignatureReq> *const)(v4 + 32));
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

// Line 362: range 000000001802E6B4-000000001802E6DE
void __cdecl SocialHandler::onSetPlayerSignatureReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SocialHandler::onSetPlayerSignatureReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 402: range 000000001802F328-000000001802F534
int32_t __cdecl SocialHandler::onSetPlayerHeadImageReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SetPlayerHeadImageReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 req_ptr:403";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSetPlayerHeadImageReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetPlayerHeadImageReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetPlayerHeadImageReq const>(
         (const std::shared_ptr<const proto::SetPlayerHeadImageReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSetPlayerHeadImageReq",
      403);
    common::milog::MiLogStream::operator()(&v10, off_2649FFA0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SetPlayerHeadImageReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetPlayerHeadImageReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v7 = proto::SetPlayerHeadImageReq::avatar_id(req);
    v5 = PlayerSocialComp::onSetPlayerHeadImage(SocialComp, v7);
  }
  std::shared_ptr<proto::SetPlayerHeadImageReq const>::~shared_ptr((std::shared_ptr<const proto::SetPlayerHeadImageReq> *const)(v2 + 32));
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

// Line 408: range 000000001802F536-000000001802F7DB
int32_t __cdecl SocialHandler::onUpdatePS4FriendListNotify(
        SocialHandler *const this,
        const proto::UpdatePS4FriendListNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isFriendListClosed; // r14
  int32_t PS4FriendUid; // r14d
  std::string *v8; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+20h] [rbp-D0h]
  const std::string *psn_id; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-C0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 14 server_req:413";
  *(_QWORD *)(v2 + 16) = SocialHandler::onUpdatePS4FriendListNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  isFriendListClosed = FeatureSwitchMgr::isFriendListClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( isFriendListClosed )
  {
    PS4FriendUid = 142;
  }
  else
  {
    proto::SeverGetPS4FriendUidReq::SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v2 + 48));
    proto::SeverGetPS4FriendUidReq::set_request_reason(
      (proto::SeverGetPS4FriendUidReq *const)(v2 + 48),
      PS_REASON_FRIEND_LIST);
    __for_range = proto::UpdatePS4FriendListNotify::psn_id_list[abi:cxx11](notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      psn_id = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      v8 = proto::SeverGetPS4FriendUidReq::add_psn_id_list[abi:cxx11]((proto::SeverGetPS4FriendUidReq *const)(v2 + 48));
      std::string::assign(v8, psn_id);
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PS4FriendUid = sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
                     this->player_,
                     (proto::SeverGetPS4FriendUidReq *)(v2 + 48));
    proto::SeverGetPS4FriendUidReq::~SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v2 + 48));
  }
  result = PS4FriendUid;
  if ( v15 == (char *)v2 )
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

// Line 424: range 000000001802F7DC-000000001802F8D1
int32_t __cdecl SocialHandler::onAddFriendNotify(SocialHandler *const this, const proto::AddFriendNotify *notify)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax
  PlayerSocialComp *v4; // rbx
  const proto::FriendBrief *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::AddFriendNotify::target_uid(notify);
  PlayerSocialComp::addFriend(SocialComp, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSocialComp(this->player_);
  v5 = proto::AddFriendNotify::target_friend_brief(notify);
  PlayerSocialComp::updateFriendBrief(v4, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, notify);
  return 0;
};

// Line 432: range 000000001802F8D2-000000001802F9C6
int32_t __cdecl SocialHandler::onDeleteFriendNotify(SocialHandler *const this, const proto::DeleteFriendNotify *notify)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax
  PlayerSocialComp *v4; // rbx
  uint32_t v5; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::DeleteFriendNotify::target_uid(notify);
  PlayerSocialComp::deleteFriend(SocialComp, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSocialComp(this->player_);
  v5 = proto::DeleteFriendNotify::target_uid(notify);
  PlayerSocialComp::removeFriendBrief(v4, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, notify);
  return 0;
};

// Line 440: range 000000001802F9C8-000000001802FA6E
int32_t __cdecl SocialHandler::onAskAddFriendNotify(SocialHandler *const this, const proto::AskAddFriendNotify *notify)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::AskAddFriendNotify::target_uid(notify);
  PlayerSocialComp::addAskFriend(SocialComp, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, notify);
  return 0;
};

// Line 447: range 000000001802FA70-0000000018030033
int32_t __cdecl SocialHandler::onSeverGetPS4FriendUidRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PS4FriendUid; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::PSRequstReason v7; // eax
  PlayerSocialComp *v8; // rax
  PlayerSocialComp *SocialComp; // rax
  std::__shared_ptr_access<proto::UpdatePS4BlockListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  google::protobuf::int32 v11; // eax
  Player *player; // r14
  PlayerMpComp *MpComp; // r14
  uint32_t *v14; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SeverGetPS4FriendUidRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-108h]
  std::shared_ptr<proto::UpdatePS4BlockListRsp> __r; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 rsp_ptr:448 64 16 14 client_rsp:468 96 24 11 uid_vec:449";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSeverGetPS4FriendUidRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SeverGetPS4FriendUidRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SeverGetPS4FriendUidRsp const>(
         (const std::shared_ptr<const proto::SeverGetPS4FriendUidRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSeverGetPS4FriendUidRsp",
      448);
    common::milog::MiLogStream::operator()(&v18, off_264A00C0);
    common::milog::MiLogStream::~MiLogStream(&v18);
    PS4FriendUid = -1;
    goto LABEL_33;
  }
  rsp_0 = std::__shared_ptr_access<proto::SeverGetPS4FriendUidRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SeverGetPS4FriendUidRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  v6 = proto::SeverGetPS4FriendUidRsp::uid_id_list(rsp_0);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 96));
  v7 = proto::SeverGetPS4FriendUidRsp::request_reason(rsp_0);
  if ( v7 == PS_REASON_BLACK_LIST )
  {
    if ( !proto::SeverGetPS4FriendUidRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      PlayerSocialComp::onGetPS4BlacklistUid(SocialComp, (const std::vector<unsigned int> *)(v2 + 96), rsp_0);
    }
    common::tools::perf::make_shared<proto::UpdatePS4BlockListRsp>();
    v10 = std::__shared_ptr_access<proto::UpdatePS4BlockListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UpdatePS4BlockListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = proto::SeverGetPS4FriendUidRsp::retcode(rsp_0);
    proto::UpdatePS4BlockListRsp::set_retcode(v10, v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::UpdatePS4BlockListRsp>(&__r);
    PS4FriendUid = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::UpdatePS4BlockListRsp>::~shared_ptr((std::shared_ptr<proto::UpdatePS4BlockListRsp> *const)(v2 + 64));
    goto LABEL_32;
  }
  if ( v7 > PS_REASON_BLACK_LIST )
    goto LABEL_31;
  if ( v7 == PS_REASON_FRIEND_LIST )
  {
    if ( !proto::SeverGetPS4FriendUidRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getSocialComp(this->player_);
      PS4FriendUid = PlayerSocialComp::onGetPS4FriendUid(v8, (const std::vector<unsigned int> *)(v2 + 96), rsp_0);
      goto LABEL_32;
    }
  }
  else
  {
    if ( v7 != PS_REASON_APPLY_ENTER_MP )
    {
LABEL_31:
      PS4FriendUid = -1;
      goto LABEL_32;
    }
    if ( !proto::SeverGetPS4FriendUidRsp::retcode(rsp_0) )
    {
      if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 96)) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        v14 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 96), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PS4FriendUid = PlayerMpComp::applyEnterMp(MpComp, *v14);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onSeverGetPS4FriendUidRsp",
          480);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v18,
          (const char (*)[30])"enter mp uid size should be 1");
        common::milog::MiLogStream::~MiLogStream(&v18);
        PS4FriendUid = -1;
      }
      goto LABEL_32;
    }
  }
  PS4FriendUid = proto::SeverGetPS4FriendUidRsp::retcode(rsp_0);
LABEL_32:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
LABEL_33:
  std::shared_ptr<proto::SeverGetPS4FriendUidRsp const>::~shared_ptr((std::shared_ptr<const proto::SeverGetPS4FriendUidRsp> *const)(v2 + 32));
  result = PS4FriendUid;
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

// Line 493: range 0000000018030034-0000000018030106
int32_t __cdecl SocialHandler::onSetNameCardReq(
        SocialHandler *const this,
        const proto::SetNameCardReq *req,
        proto::SetNameCardRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rax
  PlayerSocialComp *v5; // rax
  uint32_t name_card_id; // [rsp+2Ch] [rbp-4h]

  name_card_id = proto::SetNameCardReq::name_card_id(req);
  proto::SetNameCardRsp::set_name_card_id(rsp_0, name_card_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  if ( !PlayerSocialComp::isNameCardUnlocked(SocialComp, name_card_id) )
    return 7014;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getSocialComp(this->player_);
  PlayerSocialComp::setNameCardId(v5, name_card_id);
  return 0;
};

// Line 506: range 0000000018030108-0000000018030164
int32_t __cdecl SocialHandler::onGetAllUnlockNameCardReq(
        SocialHandler *const this,
        const proto::GetAllUnlockNameCardReq *req,
        proto::GetAllUnlockNameCardRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  return PlayerSocialComp::getAllUnlockNameCard(SocialComp, rsp_0);
};

// Line 511: range 0000000018030166-0000000018030576
int32_t __cdecl SocialHandler::onAddBlacklistReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  google::protobuf::uint32 v8; // eax
  PlayerSocialComp *v9; // r14
  uint32_t v10; // eax
  bool isPlayerFriend; // al
  int32_t result; // eax
  int32_t retcode; // [rsp+14h] [rbp-FCh]
  std::__shared_ptr_access<const proto::AddBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:512 64 32 7 rsp:514 128 32 14 server_req:532";
  *(_QWORD *)(v2 + 16) = SocialHandler::onAddBlacklistReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddBlacklistReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddBlacklistReq const>(
         (const std::shared_ptr<const proto::AddBlacklistReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onAddBlacklistReq",
      512);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_264A01E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AddBlacklistReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::AddBlacklistRsp::AddBlacklistRsp((proto::AddBlacklistRsp *const)(v2 + 64));
    retcode = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v7 = proto::AddBlacklistReq::target_uid(req);
    if ( PlayerSocialComp::isPlayerInBlacklist(SocialComp, v7) )
      retcode = 7015;
    if ( retcode )
    {
      proto::AddBlacklistRsp::set_retcode((proto::AddBlacklistRsp *const)(v2 + 64), retcode);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    }
    else
    {
      proto::ServerAddBlacklistReq::ServerAddBlacklistReq((proto::ServerAddBlacklistReq *const)(v2 + 128));
      v8 = proto::AddBlacklistReq::target_uid(req);
      proto::ServerAddBlacklistReq::set_target_uid((proto::ServerAddBlacklistReq *const)(v2 + 128), v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getSocialComp(this->player_);
      v10 = proto::AddBlacklistReq::target_uid(req);
      isPlayerFriend = PlayerSocialComp::isPlayerFriend(v9, v10);
      proto::ServerAddBlacklistReq::set_is_friend((proto::ServerAddBlacklistReq *const)(v2 + 128), isPlayerFriend);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = sendProtoToSocialService<proto::ServerAddBlacklistReq>(
             this->player_,
             (proto::ServerAddBlacklistReq *)(v2 + 128));
      proto::ServerAddBlacklistReq::~ServerAddBlacklistReq((proto::ServerAddBlacklistReq *const)(v2 + 128));
    }
    proto::AddBlacklistRsp::~AddBlacklistRsp((proto::AddBlacklistRsp *const)(v2 + 64));
  }
  std::shared_ptr<proto::AddBlacklistReq const>::~shared_ptr((std::shared_ptr<const proto::AddBlacklistReq> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
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

// Line 541: range 0000000018030578-000000001803094F
int32_t __cdecl SocialHandler::onRemoveBlacklistReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  int32_t result; // eax
  int32_t retcode; // [rsp+14h] [rbp-FCh]
  std::__shared_ptr_access<const proto::RemoveBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-F8h]
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:542 64 24 14 server_req:563 128 32 7 rsp:557";
  *(_QWORD *)(v2 + 16) = SocialHandler::onRemoveBlacklistReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveBlacklistReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveBlacklistReq const>(
         (const std::shared_ptr<const proto::RemoveBlacklistReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onRemoveBlacklistReq",
      542);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), off_264A02A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::RemoveBlacklistReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveBlacklistReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v7 = proto::RemoveBlacklistReq::target_uid(req);
    if ( !PlayerSocialComp::isPlayerInGameBlacklist(SocialComp, v7) )
      retcode = 7018;
    if ( retcode )
    {
      proto::RemoveBlacklistRsp::RemoveBlacklistRsp((proto::RemoveBlacklistRsp *const)(v2 + 128));
      proto::RemoveBlacklistRsp::set_retcode((proto::RemoveBlacklistRsp *const)(v2 + 128), retcode);
      v8 = proto::RemoveBlacklistReq::target_uid(req);
      proto::RemoveBlacklistRsp::set_target_uid((proto::RemoveBlacklistRsp *const)(v2 + 128), v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
      proto::RemoveBlacklistRsp::~RemoveBlacklistRsp((proto::RemoveBlacklistRsp *const)(v2 + 128));
    }
    else
    {
      proto::ServerRemoveBlacklistReq::ServerRemoveBlacklistReq((proto::ServerRemoveBlacklistReq *const)(v2 + 64));
      v9 = proto::RemoveBlacklistReq::target_uid(req);
      proto::ServerRemoveBlacklistReq::set_target_uid((proto::ServerRemoveBlacklistReq *const)(v2 + 64), v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = sendProtoToSocialService<proto::ServerRemoveBlacklistReq>(
             this->player_,
             (proto::ServerRemoveBlacklistReq *)(v2 + 64));
      proto::ServerRemoveBlacklistReq::~ServerRemoveBlacklistReq((proto::ServerRemoveBlacklistReq *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::RemoveBlacklistReq const>::~shared_ptr((std::shared_ptr<const proto::RemoveBlacklistReq> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 570: range 0000000018030950-0000000018030CAC
int32_t __cdecl SocialHandler::onServerAddBlacklistRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  const proto::FriendBrief *v7; // rax
  uint32_t v8; // eax
  PlayerMatchComp *MatchComp; // rax
  google::protobuf::int32 v10; // eax
  const proto::FriendBrief *v11; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAddBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+10h] [rbp-C0h]
  proto::FriendBrief *target_friend_brief; // [rsp+18h] [rbp-B8h]
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:571 64 32 14 client_rsp:579";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddBlacklistRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddBlacklistRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAddBlacklistRsp const>(
         (const std::shared_ptr<const proto::ServerAddBlacklistRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddBlacklistRsp",
      571);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), off_264A0360);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerAddBlacklistRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !proto::ServerAddBlacklistRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      v7 = proto::ServerAddBlacklistRsp::target_friend_brief(rsp_0);
      v8 = proto::FriendBrief::uid(v7);
      PlayerSocialComp::addBlacklist(SocialComp, v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MatchComp = Player::getMatchComp(this->player_);
      PlayerMatchComp::updateMatchPlayer(MatchComp);
    }
    proto::AddBlacklistRsp::AddBlacklistRsp((proto::AddBlacklistRsp *const)(v2 + 64));
    v10 = proto::ServerAddBlacklistRsp::retcode(rsp_0);
    proto::AddBlacklistRsp::set_retcode((proto::AddBlacklistRsp *const)(v2 + 64), v10);
    target_friend_brief = proto::AddBlacklistRsp::mutable_target_friend_brief((proto::AddBlacklistRsp *const)(v2 + 64));
    v11 = proto::ServerAddBlacklistRsp::target_friend_brief(rsp_0);
    proto::FriendBrief::CopyFrom(target_friend_brief, v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    proto::AddBlacklistRsp::~AddBlacklistRsp((proto::AddBlacklistRsp *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerAddBlacklistRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAddBlacklistRsp> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 588: range 0000000018030CAE-0000000018030E86
int32_t __cdecl SocialHandler::onServerAddPsnBlackRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAddPsnBlackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:589";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddPsnBlackRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddPsnBlackRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAddPsnBlackRsp const>(
         (const std::shared_ptr<const proto::ServerAddPsnBlackRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddPsnBlackRsp",
      589);
    common::milog::MiLogStream::operator()(&v8, off_264A0420);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerAddPsnBlackRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddPsnBlackRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerAddPsnBlackRsp::retcode(server_rsp) )
      v5 = -1;
    else
      v5 = 0;
  }
  std::shared_ptr<proto::ServerAddPsnBlackRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAddPsnBlackRsp> *const)(v2 + 32));
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

// Line 600: range 0000000018030E88-00000000180311C4
int32_t __cdecl SocialHandler::onServerRemoveBlacklistRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  PlayerMatchComp *MatchComp; // rax
  google::protobuf::int32 v9; // eax
  google::protobuf::uint32 v10; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerRemoveBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  char v13[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:601 64 32 14 client_rsp:609";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerRemoveBlacklistRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerRemoveBlacklistRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerRemoveBlacklistRsp const>(
         (const std::shared_ptr<const proto::ServerRemoveBlacklistRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerRemoveBlacklistRsp",
      601);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 64), off_264A04E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerRemoveBlacklistRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerRemoveBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !proto::ServerRemoveBlacklistRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      v7 = proto::ServerRemoveBlacklistRsp::target_uid(rsp_0);
      PlayerSocialComp::removeBlacklist(SocialComp, v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MatchComp = Player::getMatchComp(this->player_);
      PlayerMatchComp::updateMatchPlayer(MatchComp);
    }
    proto::RemoveBlacklistRsp::RemoveBlacklistRsp((proto::RemoveBlacklistRsp *const)(v2 + 64));
    v9 = proto::ServerRemoveBlacklistRsp::retcode(rsp_0);
    proto::RemoveBlacklistRsp::set_retcode((proto::RemoveBlacklistRsp *const)(v2 + 64), v9);
    v10 = proto::ServerRemoveBlacklistRsp::target_uid(rsp_0);
    proto::RemoveBlacklistRsp::set_target_uid((proto::RemoveBlacklistRsp *const)(v2 + 64), v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    proto::RemoveBlacklistRsp::~RemoveBlacklistRsp((proto::RemoveBlacklistRsp *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerRemoveBlacklistRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerRemoveBlacklistRsp> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 617: range 00000000180311C6-00000000180313C1
int32_t __cdecl SocialHandler::onGetRecentMpPlayerListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 req_ptr:618";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetRecentMpPlayerListReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRecentMpPlayerListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetRecentMpPlayerListReq const>(
         (const std::shared_ptr<const proto::GetRecentMpPlayerListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetRecentMpPlayerListReq",
      618);
    common::milog::MiLogStream::operator()(&v8, off_264A05A0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetRecentMpPlayerListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRecentMpPlayerListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    PlayerSocialComp::clientRequstRecentMpPlayerList(SocialComp);
    v5 = 0;
  }
  std::shared_ptr<proto::GetRecentMpPlayerListReq const>::~shared_ptr((std::shared_ptr<const proto::GetRecentMpPlayerListReq> *const)(v2 + 32));
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

// Line 624: range 00000000180313C2-0000000018031734
int32_t __cdecl SocialHandler::onServerGetRecentMpPlayerListRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  google::protobuf::int32 v7; // eax
  std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *player; // r14
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  proto::ServerGetRecentMpPlayerListRsp *rsp_0; // [rsp+20h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+28h] [rbp-D8h]
  const proto::FriendBrief *server_recent_brief; // [rsp+30h] [rbp-D0h]
  proto::FriendBrief *client_friend_brief; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<proto::GetRecentMpPlayerListRsp> __r; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:625 64 16 18 client_rsp_ptr:627";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetRecentMpPlayerListRsp;
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
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetRecentMpPlayerListRsp",
      625);
    common::milog::MiLogStream::operator()(&v18, off_264A06A0);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetRecentMpPlayerListRsp>();
    v6 = std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v7 = proto::ServerGetRecentMpPlayerListRsp::retcode(rsp_0);
    proto::GetRecentMpPlayerListRsp::set_retcode(v6, v7);
    __for_range = proto::ServerGetRecentMpPlayerListRsp::recent_mp_player_brief_list(rsp_0);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      server_recent_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
      v8 = std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetRecentMpPlayerListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      client_friend_brief = proto::GetRecentMpPlayerListRsp::add_recent_mp_player_brief_list(v8);
      proto::FriendBrief::CopyFrom(client_friend_brief, server_recent_brief);
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetRecentMpPlayerListRsp>(&__r);
    v5 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::GetRecentMpPlayerListRsp>::~shared_ptr((std::shared_ptr<proto::GetRecentMpPlayerListRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetRecentMpPlayerListRsp> *const)(v2 + 32));
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

// Line 638: range 0000000018031736-0000000018031A6E
int32_t __cdecl SocialHandler::onUpdatePS4BlockListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PS4FriendUid; // r14d
  std::string *v6; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  const proto::UpdatePS4BlockListReq *req; // [rsp+28h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+30h] [rbp-100h]
  const std::string *psn_id; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 11 req_ptr:639 80 48 14 server_req:641";
  *(_QWORD *)(v2 + 16) = SocialHandler::onUpdatePS4BlockListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdatePS4BlockListReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::UpdatePS4BlockListReq const>(
         (const std::shared_ptr<const proto::UpdatePS4BlockListReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onUpdatePS4BlockListReq",
      639);
    common::milog::MiLogStream::operator()(&v13, off_264A0780);
    common::milog::MiLogStream::~MiLogStream(&v13);
    PS4FriendUid = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::UpdatePS4BlockListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdatePS4BlockListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::SeverGetPS4FriendUidReq::SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v2 + 80));
    proto::SeverGetPS4FriendUidReq::set_request_reason(
      (proto::SeverGetPS4FriendUidReq *const)(v2 + 80),
      PS_REASON_BLACK_LIST);
    __for_range = proto::UpdatePS4BlockListReq::psn_id_list[abi:cxx11](req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      psn_id = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      v6 = proto::SeverGetPS4FriendUidReq::add_psn_id_list[abi:cxx11]((proto::SeverGetPS4FriendUidReq *const)(v2 + 80));
      std::string::assign(v6, psn_id);
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PS4FriendUid = sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
                     this->player_,
                     (proto::SeverGetPS4FriendUidReq *)(v2 + 80));
    proto::SeverGetPS4FriendUidReq::~SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v2 + 80));
  }
  std::shared_ptr<proto::UpdatePS4BlockListReq const>::~shared_ptr((std::shared_ptr<const proto::UpdatePS4BlockListReq> *const)(v2 + 48));
  result = PS4FriendUid;
  if ( v14 == (char *)v2 )
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

// Line 652: range 0000000018031A70-0000000018031ABE
int32_t __cdecl SocialHandler::onGetPlayerBlacklistReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  PlayerSocialComp *SocialComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  return PlayerSocialComp::clientRequstBlacklist(SocialComp);
};

// Line 657: range 0000000018031AC0-0000000018031F26
int32_t __cdecl SocialHandler::onServerGetPlayerBlacklistRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  google::protobuf::int32 v7; // eax
  std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerSocialComp *SocialComp; // rax
  PlayerSocialComp *v10; // rax
  Player *player; // r14
  int32_t result; // eax
  bool is_game_source; // [rsp+1Ah] [rbp-F6h]
  bool is_psn_source; // [rsp+1Bh] [rbp-F5h]
  google::protobuf::uint32 uid; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  proto::ServerGetPlayerBlacklistRsp *rsp_0; // [rsp+30h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-D8h]
  const proto::FriendBrief *blacklist_brief; // [rsp+40h] [rbp-D0h]
  proto::FriendBrief *client_black_brief; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::GetPlayerBlacklistRsp> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 rsp_ptr:658 64 16 18 client_rsp_ptr:659";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetPlayerBlacklistRsp;
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
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetPlayerBlacklistRsp",
      658);
    common::milog::MiLogStream::operator()(&v23, off_264A0860);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetPlayerBlacklistRsp>();
    v6 = std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v7 = proto::ServerGetPlayerBlacklistRsp::retcode(rsp_0);
    proto::GetPlayerBlacklistRsp::set_retcode(v6, v7);
    __for_range = proto::ServerGetPlayerBlacklistRsp::blacklist(rsp_0);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      blacklist_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
      v8 = std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerBlacklistRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      client_black_brief = proto::GetPlayerBlacklistRsp::add_blacklist(v8);
      proto::FriendBrief::CopyFrom(client_black_brief, blacklist_brief);
      uid = proto::FriendBrief::uid(client_black_brief);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      is_game_source = PlayerSocialComp::isPlayerInBlacklist(SocialComp, uid);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getSocialComp(this->player_);
      is_psn_source = PlayerSocialComp::isPlayerInPSBlacklist(v10, uid);
      proto::FriendBrief::set_is_game_source(client_black_brief, is_game_source);
      proto::FriendBrief::set_is_psn_source(client_black_brief, is_psn_source);
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetPlayerBlacklistRsp>(&__r);
    v5 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::GetPlayerBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerBlacklistRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetPlayerBlacklistRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetPlayerBlacklistRsp> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 675: range 0000000018031F28-0000000018031F7A
int32_t __cdecl SocialHandler::onTakeFirstShareRewardReq(
        SocialHandler *const this,
        const proto::TakeFirstShareRewardReq *p_req,
        proto::TakeFirstShareRewardRsp *p_rsp_0)
{
  PlayerSocialComp *SocialComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  return PlayerSocialComp::tryGrantShareBenifit(SocialComp);
};

// Line 680: range 00000000180322A0-0000000018032F50
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SocialHandler::onPlayerReportReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v6; // rsi
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  google::protobuf::uint32 v9; // eax
  PlayerSocialComp *SocialComp; // rax
  time_t NextReportTime; // r14
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  PlayerSocialComp *v13; // rax
  uint32_t v14; // eax
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 v16; // r14d
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const std::string *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t ReportContentMaxLength; // eax
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int v22; // r14d
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v23; // rsi
  common::minet::Packet *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  bool is_word_filter_use_remote; // r14
  Player *v27; // r14
  const std::string *v28; // rax
  GameserverService *v29; // r14
  const std::shared_ptr<common::minet::Packet> *v30; // rsi
  __suseconds_t v31; // rdx
  common::minet::PacketPtr v32; // rdi
  common::minet::Packet *v33; // rax
  common::minet::Packet *v34; // rax
  common::minet::PacketPtr v35; // rdi
  common::minet::Packet *v36; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v37; // rsi
  common::minet::Packet *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  PlayerSocialComp *v41; // rax
  std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  Player *player; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-299h] BYREF
  unsigned int val; // [rsp+28h] [rbp-298h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-294h]
  uint32_t async_http_type; // [rsp+30h] [rbp-290h]
  int32_t ret_0; // [rsp+34h] [rbp-28Ch]
  const proto::PlayerReportReq *req; // [rsp+38h] [rbp-288h]
  std::shared_ptr<common::minet::Packet> v52; // [rsp+40h] [rbp-280h] BYREF
  SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v53; // [rsp+50h] [rbp-270h] BYREF
  common::milog::MiLogStream v54; // [rsp+70h] [rbp-250h] BYREF
  char v55[560]; // [rsp+90h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 16 11 req_ptr:681 80 16 7 rsp:682 112 16 9 timer:713 144 32 11 content:701 208 240 12 http_req:713";
  *(_QWORD *)(v3 + 16) = SocialHandler::onPlayerReportReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v6);
  common::minet::Packet::getConstProto<proto::PlayerReportReq>((common::minet::Packet *const)(v3 + 48));
  if ( std::operator==<proto::PlayerReportReq const>(
         (const std::shared_ptr<const proto::PlayerReportReq> *)(v3 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPlayerReportReq",
      681);
    common::milog::MiLogStream::operator()(&v54, off_264A0980);
    common::milog::MiLogStream::~MiLogStream(&v54);
    v2 = -1;
    goto LABEL_45;
  }
  req = std::__shared_ptr_access<proto::PlayerReportReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerReportReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  common::tools::perf::make_shared<proto::PlayerReportRsp>();
  v7 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  proto::PlayerReportRsp::set_retcode(v7, 0);
  v8 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  v9 = proto::PlayerReportReq::target_uid(req);
  proto::PlayerReportRsp::set_target_uid(v8, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  NextReportTime = PlayerSocialComp::getNextReportTime(SocialComp);
  if ( NextReportTime > common::tools::TimeUtils::getNow() )
  {
    v12 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getSocialComp(this->player_);
    v14 = PlayerSocialComp::getNextReportTime(v13);
    proto::PlayerReportRsp::set_cd_time(v12, v14);
    v15 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    proto::PlayerReportRsp::set_retcode(v15, 7026);
    goto LABEL_41;
  }
  v16 = proto::PlayerReportReq::target_uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v16 == Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPlayerReportReq",
      696);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v54, (const char (*)[22])"target cannot be self");
    common::milog::MiLogStream::~MiLogStream(&v54);
    v17 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    proto::PlayerReportRsp::set_retcode(v17, -1);
LABEL_41:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerReportRsp>((const std::shared_ptr<proto::PlayerReportRsp> *)&v52);
    v2 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&v52, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v52);
    goto LABEL_44;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v54, off_2649FE60, &__a);
  v18 = proto::PlayerReportReq::content[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v3 + 144), v18, (const std::string *)&v54, 1);
  std::string::~string(&v54);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v3 + 144) == 1 )
    goto LABEL_50;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v52);
  v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
  ReportContentMaxLength = ConstValueExcelConfigMgr::getReportContentMaxLength(&v19->design_config.txt_config_mgr.const_value_config_mgr);
  ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v3 + 144), ReportContentMaxLength);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
  if ( ret )
  {
    v21 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    proto::PlayerReportRsp::set_retcode(v21, ret);
    v22 = 0;
    goto LABEL_39;
  }
  v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v23);
  if ( !common::minet::Packet::getExt(v24, 2u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v52);
    v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
    if ( *(char *)(((unsigned __int64)&v25->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
      v25 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v25->is_word_filter_use_remote);
    is_word_filter_use_remote = v25->is_word_filter_use_remote;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
    if ( is_word_filter_use_remote )
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v27 = this->player_;
      v28 = proto::PlayerReportReq::content[abi:cxx11](req);
      RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v3 + 208), v28, v27, 7u);
      async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0xFB8u);
      v29 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v53.__packet_ptr, v30);
      v31 = *(_QWORD *)(v3 + 120);
      v53.__timer.start_tv_.tv_sec = *(_QWORD *)(v3 + 112);
      v53.__timer.start_tv_.tv_usec = v31;
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
        (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v54,
        &v53);
      ret_0 = GameserverService::asyncHttpRequest(
                v29,
                (const common::minet::http_client::HttpRequest *)(v3 + 208),
                5LL,
                async_http_type,
                (common::minet::http_client::ResponseCallBackFunc *)&v54);
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v54);
      SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v53);
      if ( ret_0 )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onPlayerReportReq",
          713);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v54,
          (const char (*)[23])"asyncHttpRequest fails");
        common::milog::MiLogStream::~MiLogStream(&v54);
        v33 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v32._M_refcount._M_pi);
        common::minet::Packet::setExt(v33, 2u, 1u);
        v34 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v32._M_refcount._M_pi);
        common::minet::Packet::setExt(v34, 3u, 4u);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v52,
          (const std::shared_ptr<common::minet::Packet> *)v32._M_refcount._M_pi);
        v32._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v52;
        ServiceBox::pushPacketToService(v32);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v52);
      }
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 208));
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
    }
    else
    {
      v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v35._M_refcount._M_pi);
      common::minet::Packet::setExt(v36, 2u, 1u);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v52,
        (const std::shared_ptr<common::minet::Packet> *)v35._M_refcount._M_pi);
      v35._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v52;
      ServiceBox::pushPacketToService(v35);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v52);
    }
    v2 = 0;
    v22 = 1;
    goto LABEL_39;
  }
  v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v37);
  if ( common::minet::Packet::getExt(v38, 3u) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPlayerReportReq",
      720);
    v39 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v54,
            (const char (*)[44])"word filter check failed, word illegal uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    v40 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    proto::PlayerReportRsp::set_retcode(v40, 7027);
    v22 = 0;
  }
  else
  {
LABEL_50:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v41 = Player::getSocialComp(this->player_);
    if ( PlayerSocialComp::reportOther(v41, req) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onPlayerReportReq",
        727);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v54, (const char (*)[19])"reportOther failed");
      common::milog::MiLogStream::~MiLogStream(&v54);
      v42 = std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      proto::PlayerReportRsp::set_retcode(v42, -1);
      v22 = 0;
    }
    else
    {
      v22 = 2;
    }
  }
LABEL_39:
  std::string::~string((void *)(v3 + 144));
  if ( !v22 || v22 == 2 )
    goto LABEL_41;
LABEL_44:
  std::shared_ptr<proto::PlayerReportRsp>::~shared_ptr((std::shared_ptr<proto::PlayerReportRsp> *const)(v3 + 80));
LABEL_45:
  std::shared_ptr<proto::PlayerReportReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerReportReq> *const)(v3 + 48));
  result = v2;
  if ( v55 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 713: range 0000000018089C92-0000000018089D1B
void __cdecl SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 713: range 0000000018089DE6-0000000018089E6F
void __cdecl SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 713: range 0000000018031F7C-0000000018032272
void __cdecl SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::PlayerReportReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:713";
  *(_QWORD *)(v4 + 16) = SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::PlayerReportReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::PlayerReportReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerReportReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::PlayerReportReq::mutable_content[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::PlayerReportReq>::~shared_ptr((std::shared_ptr<proto::PlayerReportReq> *const)(v4 + 32));
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

// Line 713: range 0000000018032274-000000001803229E
void __cdecl SocialHandler::onPlayerReportReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SocialHandler::onPlayerReportReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 738: range 0000000018033276-00000000180349F1
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SocialHandler::onPrivateChatReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v6; // rsi
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  char v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 v16; // r14d
  uint32_t Uid; // eax
  const std::string *v18; // rax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int v23; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v28; // rsi
  common::minet::Packet *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  bool is_word_filter_use_remote; // r14
  Player *v32; // r14
  const std::string *v33; // rax
  GameserverService *v34; // r14
  const std::shared_ptr<common::minet::Packet> *v35; // rsi
  __suseconds_t v36; // rdx
  common::minet::PacketPtr v37; // rdi
  common::minet::Packet *v38; // rax
  common::minet::Packet *v39; // rax
  common::minet::PacketPtr v40; // rdi
  common::minet::Packet *v41; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v42; // rsi
  common::minet::Packet *v43; // rax
  std::__shared_ptr_access<proto::PrivateChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  proto::ChatInfo *v45; // rax
  Player *v46; // r14
  PlayerSocialComp *v47; // rax
  PlayerSocialComp *SocialComp; // rax
  uint32_t chat_start_check_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  uint32_t v51; // eax
  uint32_t chat_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t v56; // eax
  Player *player; // r14
  int32_t result; // eax
  uint32_t last_chat_time; // [rsp+Ch] [rbp-384h]
  bool v60; // [rsp+Ch] [rbp-384h]
  uint32_t cd_start_time; // [rsp+Ch] [rbp-384h]
  bool v62; // [rsp+Ch] [rbp-384h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-361h] BYREF
  unsigned int val; // [rsp+30h] [rbp-360h] BYREF
  uint32_t chat_block_end_time; // [rsp+34h] [rbp-35Ch]
  uint32_t now; // [rsp+38h] [rbp-358h]
  uint32_t max_count; // [rsp+3Ch] [rbp-354h]
  int32_t ret; // [rsp+40h] [rbp-350h]
  uint32_t action_type; // [rsp+44h] [rbp-34Ch]
  uint32_t async_http_type; // [rsp+48h] [rbp-348h]
  int32_t ret_0; // [rsp+4Ch] [rbp-344h]
  const proto::PrivateChatReq *req; // [rsp+50h] [rbp-340h]
  proto::PrivateChatRsp *rsp_0; // [rsp+58h] [rbp-338h]
  std::shared_ptr<Config> v75; // [rsp+60h] [rbp-330h] BYREF
  std::shared_ptr<Config> v76; // [rsp+70h] [rbp-320h] BYREF
  std::shared_ptr<Config> v77; // [rsp+80h] [rbp-310h] BYREF
  std::shared_ptr<common::minet::Packet> v78; // [rsp+90h] [rbp-300h] BYREF
  SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v79; // [rsp+A0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v80; // [rsp+C0h] [rbp-2D0h] BYREF
  char v81[688]; // [rsp+E0h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 11 retcode:740 64 4 8 type:753 80 16 11 req_ptr:739 112 16 11 rsp_ptr:739 144 16 14 notif"
                        "y_ptr:877 176 32 12 new_text:796 240 56 13 chat_info:741 336 240 12 http_req:826";
  *(_QWORD *)(v3 + 16) = SocialHandler::onPrivateChatReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v6);
  common::minet::Packet::getConstProto<proto::PrivateChatReq>((common::minet::Packet *const)(v3 + 80));
  if ( std::operator==<proto::PrivateChatReq const>(
         (const std::shared_ptr<const proto::PrivateChatReq> *)(v3 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPrivateChatReq",
      739);
    common::milog::MiLogStream::operator()(&v80, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v2 = -1;
    goto LABEL_123;
  }
  req = std::__shared_ptr_access<proto::PrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  common::tools::perf::make_shared<proto::PrivateChatRsp>();
  rsp_0 = std::__shared_ptr_access<proto::PrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
  proto::PrivateChatRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v3 + 48) = 0;
  proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v3 + 240));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  chat_block_end_time = PlayerSceneComp::getChatBlockEndTime(SceneComp);
  if ( chat_block_end_time && chat_block_end_time > common::tools::TimeUtils::getNow() )
  {
    *(_DWORD *)(v3 + 48) = 798;
    proto::PrivateChatRsp::set_chat_forbidden_endtime(rsp_0, chat_block_end_time);
LABEL_117:
    proto::PrivateChatRsp::set_retcode(rsp_0, *(_DWORD *)(v3 + 48));
    if ( *(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v2 = *(_DWORD *)(v3 + 48);
    goto LABEL_122;
  }
  *(_DWORD *)(v3 + 64) = proto::PrivateChatReq::content_case(req);
  if ( *(_DWORD *)(v3 + 64) != 3 && *(_DWORD *)(v3 + 64) != 4 )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPrivateChatReq",
      756);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v80, (const char (*)[27])off_264A0B60);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v80);
    *(_DWORD *)(v3 + 48) = 8901;
    goto LABEL_117;
  }
  now = common::tools::TimeUtils::getNow();
  v12 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v60 = 0;
  if ( this->last_chat_time_ )
  {
    last_chat_time = this->last_chat_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v78);
    v12 = 1;
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
    if ( now < last_chat_time
             + ConstValueExcelConfigMgr::getMpChatInterval(&v13->design_config.txt_config_mgr.const_value_config_mgr) )
      v60 = 1;
  }
  if ( v12 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
  if ( v60 )
  {
    *(_DWORD *)(v3 + 48) = 800;
    goto LABEL_117;
  }
  v14 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v62 = 0;
  if ( this->cd_start_time_ )
  {
    cd_start_time = this->cd_start_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v78);
    v14 = 1;
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
    if ( now < cd_start_time
             + ConstValueExcelConfigMgr::getMpChatCheckCD(&v15->design_config.txt_config_mgr.const_value_config_mgr) )
      v62 = 1;
  }
  if ( v14 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
  if ( v62 )
  {
    *(_DWORD *)(v3 + 48) = 799;
    goto LABEL_117;
  }
  v16 = proto::PrivateChatReq::target_uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v16 == Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPrivateChatReq",
      775);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v80, (const char (*)[22])"target cannot be self");
    common::milog::MiLogStream::~MiLogStream(&v80);
    *(_DWORD *)(v3 + 48) = -1;
    goto LABEL_117;
  }
  proto::ChatInfo::set_time((proto::ChatInfo *const)(v3 + 240), now);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::ChatInfo::set_uid((proto::ChatInfo *const)(v3 + 240), Uid);
  if ( *(_DWORD *)(v3 + 64) == 3 )
  {
    v18 = proto::PrivateChatReq::text[abi:cxx11](req);
    proto::ChatInfo::set_text((proto::ChatInfo *const)(v3 + 240), v18);
  }
  else if ( *(_DWORD *)(v3 + 64) == 4 )
  {
    v19 = proto::PrivateChatReq::icon(req);
    proto::ChatInfo::set_icon((proto::ChatInfo *const)(v3 + 240), v19);
  }
  v20 = proto::PrivateChatReq::target_uid(req);
  proto::ChatInfo::set_to_uid((proto::ChatInfo *const)(v3 + 240), v20);
  if ( *(_DWORD *)(v3 + 64) != 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    PlayerSocialComp::internalSendPrivateChat(SocialComp, (const proto::ChatInfo *)(v3 + 240));
LABEL_89:
    if ( *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_chat_time_);
    }
    this->last_chat_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->chat_num_;
    if ( *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->chat_start_check_time_ )
      this->chat_start_check_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    chat_start_check_time = this->chat_start_check_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    v50 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
    v51 = ConstValueExcelConfigMgr::getMpChatCheckInterval(&v50->design_config.txt_config_mgr.const_value_config_mgr);
    LOBYTE(chat_start_check_time) = now > chat_start_check_time + v51;
    std::shared_ptr<Config>::~shared_ptr(&v77);
    if ( (_BYTE)chat_start_check_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->chat_num_);
      }
      this->chat_num_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->chat_start_check_time_);
      }
      this->chat_start_check_time_ = now;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      chat_num = this->chat_num_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 144));
      v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      LOBYTE(chat_num) = chat_num > ConstValueExcelConfigMgr::getMpChatCheckNum(&v53->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 144));
      if ( (_BYTE)chat_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cd_start_time_);
        }
        this->cd_start_time_ = now;
        if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->chat_num_);
        }
        this->chat_num_ = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->chat_start_check_time_);
        }
        this->chat_start_check_time_ = 0;
        common::tools::perf::make_shared<proto::PlayerChatCDNotify>();
        v54 = std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v78);
        v55 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
        v56 = ConstValueExcelConfigMgr::getMpChatCheckCD(&v55->design_config.txt_config_mgr.const_value_config_mgr);
        proto::PlayerChatCDNotify::set_over_time(v54, now + v56);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerChatCDNotify>((const std::shared_ptr<proto::PlayerChatCDNotify> *)&v78);
        Player::sendMessage(player, (common::minet::ConstMessagePtr *)&v78, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v78);
        std::shared_ptr<proto::PlayerChatCDNotify>::~shared_ptr((std::shared_ptr<proto::PlayerChatCDNotify> *const)(v3 + 144));
      }
    }
    goto LABEL_117;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v80, off_2649FE60, &__a);
  v21 = proto::PrivateChatReq::text[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v3 + 176), v21, (const std::string *)&v80, 1);
  std::string::~string(&v80);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v3 + 176) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onPrivateChatReq",
      799);
    v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v80,
            (const char (*)[21])"text is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
    common::milog::MiLogStream::~MiLogStream(&v80);
    *(_DWORD *)(v3 + 48) = 8901;
    v23 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v75);
    v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
    max_count = ConstValueExcelConfigMgr::getMpChatTextMaxLen(&v24->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v75);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v3 + 176), max_count);
    if ( ret )
    {
      if ( ret == 130 )
      {
        *(_DWORD *)(v3 + 48) = 8903;
      }
      else if ( ret == 131 )
      {
        *(_DWORD *)(v3 + 48) = 8904;
      }
      else
      {
        *(_DWORD *)(v3 + 48) = -1;
      }
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onPrivateChatReq",
        819);
      v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v80,
              (const char (*)[24])"checkStrUtf8Len fails, ");
      v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)(v3 + 176));
      v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" ret code ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v80);
      v23 = 0;
    }
    else
    {
      v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v28);
      if ( common::minet::Packet::getExt(v29, 2u) )
      {
        v43 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v42);
        action_type = common::minet::Packet::getExt(v43, 3u);
        if ( action_type == 3 || action_type == 4 )
        {
          common::milog::MiLogStream::create(
            &v80,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/social_handler.cpp",
            "onPrivateChatReq",
            835);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v80,
            (const char (*)[25])"player chat is intercept");
          common::milog::MiLogStream::~MiLogStream(&v80);
          *(_DWORD *)(v3 + 48) = 8901;
          v23 = 0;
        }
        else
        {
          if ( action_type == 1 )
          {
            common::tools::perf::make_shared<proto::PrivateChatNotify>();
            v44 = std::__shared_ptr_access<proto::PrivateChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PrivateChatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            v45 = proto::PrivateChatNotify::mutable_chat_info(v44);
            proto::ChatInfo::operator=(v45, (const proto::ChatInfo *)(v3 + 240));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v46 = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::PrivateChatNotify>((const std::shared_ptr<proto::PrivateChatNotify> *)&v78);
            Player::sendMessage(v46, (common::minet::ConstMessagePtr *)&v78, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v78);
            std::shared_ptr<proto::PrivateChatNotify>::~shared_ptr((std::shared_ptr<proto::PrivateChatNotify> *const)(v3 + 144));
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v47 = Player::getSocialComp(this->player_);
            PlayerSocialComp::internalSendPrivateChat(v47, (const proto::ChatInfo *)(v3 + 240));
          }
          v23 = 2;
        }
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v76);
        v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
        if ( *(char *)(((unsigned __int64)&v30->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v30 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v30->is_word_filter_use_remote);
        is_word_filter_use_remote = v30->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr(&v76);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v32 = this->player_;
          v33 = proto::PrivateChatReq::text[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v3 + 336), v33, v32, 0xFu);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x139Eu);
          v34 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v79.__packet_ptr, v35);
          v36 = *(_QWORD *)(v3 + 152);
          v79.__timer.start_tv_.tv_sec = *(_QWORD *)(v3 + 144);
          v79.__timer.start_tv_.tv_usec = v36;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v80,
            &v79);
          ret_0 = GameserverService::asyncHttpRequest(
                    v34,
                    (const common::minet::http_client::HttpRequest *)(v3 + 336),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v80);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v80);
          SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v79);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onPrivateChatReq",
              826);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v80,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v80);
            v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v37._M_refcount._M_pi);
            common::minet::Packet::setExt(v38, 2u, 1u);
            v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v37._M_refcount._M_pi);
            common::minet::Packet::setExt(v39, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v78,
              (const std::shared_ptr<common::minet::Packet> *)v37._M_refcount._M_pi);
            v37._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v78;
            ServiceBox::pushPacketToService(v37);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v78);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 336));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 144));
        }
        else
        {
          v41 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v40._M_refcount._M_pi);
          common::minet::Packet::setExt(v41, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v78,
            (const std::shared_ptr<common::minet::Packet> *)v40._M_refcount._M_pi);
          v40._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v78;
          ServiceBox::pushPacketToService(v40);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v78);
        }
        v2 = 0;
        v23 = 1;
      }
    }
  }
  std::string::~string((void *)(v3 + 176));
  if ( !v23 )
    goto LABEL_117;
  if ( v23 == 2 )
    goto LABEL_89;
LABEL_122:
  proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v3 + 240));
  std::shared_ptr<proto::PrivateChatRsp>::~shared_ptr((std::shared_ptr<proto::PrivateChatRsp> *const)(v3 + 112));
LABEL_123:
  std::shared_ptr<proto::PrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::PrivateChatReq> *const)(v3 + 80));
  result = v2;
  if ( v81 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 826: range 0000000018089F62-0000000018089FEB
void __cdecl SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 826: range 000000001808A0B6-000000001808A13F
void __cdecl SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 826: range 0000000018032F52-0000000018033248
void __cdecl SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::PrivateChatReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:826";
  *(_QWORD *)(v4 + 16) = SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::PrivateChatReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::PrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::PrivateChatReq::mutable_text[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::PrivateChatReq>::~shared_ptr((std::shared_ptr<proto::PrivateChatReq> *const)(v4 + 32));
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

// Line 826: range 000000001803324A-0000000018033274
void __cdecl SocialHandler::onPrivateChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SocialHandler::onPrivateChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 892: range 00000000180349F2-0000000018034BF7
int32_t __cdecl SocialHandler::onServerPrivateChatRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:893";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerPrivateChatRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPrivateChatRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerPrivateChatRsp const>(
         (const std::shared_ptr<const proto::ServerPrivateChatRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerPrivateChatRsp",
      893);
    common::milog::MiLogStream::operator()(&v9, off_264A0D00);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerPrivateChatRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerPrivateChat(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerPrivateChatRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerPrivateChatRsp> *const)(v2 + 32));
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

// Line 898: range 0000000018034BF8-0000000018034DF2
int32_t __cdecl SocialHandler::onPrivateChatNotify(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PrivateChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:899";
  *(_QWORD *)(v2 + 16) = SocialHandler::onPrivateChatNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PrivateChatNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PrivateChatNotify const>(
         (const std::shared_ptr<const proto::PrivateChatNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPrivateChatNotify",
      899);
    common::milog::MiLogStream::operator()(&v8, off_264A0DA0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PrivateChatNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PrivateChatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, notify);
  }
  std::shared_ptr<proto::PrivateChatNotify const>::~shared_ptr((std::shared_ptr<const proto::PrivateChatNotify> *const)(v2 + 32));
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

// Line 905: range 0000000018034DF4-0000000018035545
int32_t __cdecl SocialHandler::onPullPrivateChatReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 v8; // r14d
  uint32_t Uid; // eax
  google::protobuf::uint32 v10; // eax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
  PlayerSocialComp *SocialComp; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  bool is_ps4_friend; // [rsp+13h] [rbp-13Dh]
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  const proto::PullPrivateChatReq *req; // [rsp+18h] [rbp-138h]
  proto::PullPrivateChatRsp *rsp_0; // [rsp+20h] [rbp-130h]
  uint64_t now_ms; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-110h] BYREF
  char v26[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 11 req_ptr:906 80 16 11 rsp_ptr:906 112 40 14 server_req:929";
  *(_QWORD *)(v2 + 16) = SocialHandler::onPullPrivateChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PullPrivateChatReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::PullPrivateChatReq const>(
         (const std::shared_ptr<const proto::PullPrivateChatReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPullPrivateChatReq",
      906);
    common::milog::MiLogStream::operator()(&v25, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PullPrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PullPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    common::tools::perf::make_shared<proto::PullPrivateChatRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PullPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PullPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::PullPrivateChatRsp::set_retcode(rsp_0, -1);
    now_ms = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_check_pull_private_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( now_ms >= this->last_check_pull_private_time_ + 1000 )
    {
      this->last_check_pull_private_time_ = now_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->pull_private_num_);
      }
      this->pull_private_num_ = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v6 = ++this->pull_private_num_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    LOBYTE(v6) = v6 > ConstValueExcelConfigMgr::getMaxPullPrivateChatQPS(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( (_BYTE)v6 )
    {
      proto::PullPrivateChatRsp::set_retcode(rsp_0, 8905);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      v5 = 8905;
    }
    else
    {
      v8 = proto::PullPrivateChatReq::target_uid(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( v8 == Player::getUid(this->player_) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onPullPrivateChatReq",
          925);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v25,
          (const char (*)[22])"target cannot be self");
        common::milog::MiLogStream::~MiLogStream(&v25);
        v5 = -1;
      }
      else
      {
        proto::ServerPullPrivateChatReq::ServerPullPrivateChatReq((proto::ServerPullPrivateChatReq *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        proto::ServerPullPrivateChatReq::set_from_uid((proto::ServerPullPrivateChatReq *const)(v2 + 112), Uid);
        v10 = proto::PullPrivateChatReq::target_uid(req);
        proto::ServerPullPrivateChatReq::set_to_uid((proto::ServerPullPrivateChatReq *const)(v2 + 112), v10);
        v11 = proto::PullPrivateChatReq::from_sequence(req);
        proto::ServerPullPrivateChatReq::set_from_sequence((proto::ServerPullPrivateChatReq *const)(v2 + 112), v11);
        v12 = proto::PullPrivateChatReq::pull_num(req);
        proto::ServerPullPrivateChatReq::set_pull_num((proto::ServerPullPrivateChatReq *const)(v2 + 112), v12);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SocialComp = Player::getSocialComp(this->player_);
        v14 = proto::PullPrivateChatReq::target_uid(req);
        is_ps4_friend = PlayerSocialComp::isPlayerPSNFriend(SocialComp, v14);
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onPullPrivateChatReq",
          935);
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v25,
                (const char (*)[19])"[CHAT] target uid ");
        val = proto::PullPrivateChatReq::target_uid(req);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])off_264A0EC0);
        common::milog::MiLogStream::operator<<(v17, is_ps4_friend);
        common::milog::MiLogStream::~MiLogStream(&v25);
        proto::ServerPullPrivateChatReq::set_is_ps4_friend(
          (proto::ServerPullPrivateChatReq *const)(v2 + 112),
          is_ps4_friend);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v5 = sendProtoToSocialService<proto::ServerPullPrivateChatReq>(
               this->player_,
               (proto::ServerPullPrivateChatReq *)(v2 + 112));
        proto::ServerPullPrivateChatReq::~ServerPullPrivateChatReq((proto::ServerPullPrivateChatReq *const)(v2 + 112));
      }
    }
    std::shared_ptr<proto::PullPrivateChatRsp>::~shared_ptr((std::shared_ptr<proto::PullPrivateChatRsp> *const)(v2 + 80));
  }
  std::shared_ptr<proto::PullPrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::PullPrivateChatReq> *const)(v2 + 48));
  result = v5;
  if ( v26 == (char *)v2 )
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

// Line 941: range 0000000018035546-0000000018035740
int32_t __cdecl SocialHandler::onPullPrivateChatRsp(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PullPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:942";
  *(_QWORD *)(v2 + 16) = SocialHandler::onPullPrivateChatRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PullPrivateChatRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PullPrivateChatRsp const>(
         (const std::shared_ptr<const proto::PullPrivateChatRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPullPrivateChatRsp",
      942);
    common::milog::MiLogStream::operator()(&v8, off_264A0F60);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::PullPrivateChatRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PullPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, rsp_0);
  }
  std::shared_ptr<proto::PullPrivateChatRsp const>::~shared_ptr((std::shared_ptr<const proto::PullPrivateChatRsp> *const)(v2 + 32));
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

// Line 947: range 0000000018035742-0000000018035BFC
int32_t __cdecl SocialHandler::onPullRecentChatReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PullRecentChatReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-F8h]
  std::__shared_ptr_access<proto::PullRecentChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+20h] [rbp-F0h]
  uint64_t now_ms; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-E0h] BYREF
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:948 64 16 11 rsp_ptr:948 96 32 14 server_req:966";
  *(_QWORD *)(v2 + 16) = SocialHandler::onPullRecentChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PullRecentChatReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PullRecentChatReq const>(
         (const std::shared_ptr<const proto::PullRecentChatReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPullRecentChatReq",
      948);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 96), off_2649EF60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PullRecentChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PullRecentChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PullRecentChatRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PullRecentChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PullRecentChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PullRecentChatRsp::set_retcode(rsp_0, -1);
    now_ms = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_check_pull_recent_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( now_ms >= this->last_check_pull_recent_time_ + 1000 )
    {
      this->last_check_pull_recent_time_ = now_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->pull_recent_num_);
      }
      this->pull_recent_num_ = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v6 = ++this->pull_recent_num_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    LOBYTE(v6) = v6 > ConstValueExcelConfigMgr::getMaxPullRecentChatQPS(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( (_BYTE)v6 )
    {
      proto::PullRecentChatRsp::set_retcode(rsp_0, 8905);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
      v5 = 8905;
    }
    else
    {
      proto::ServerPullRecentChatReq::ServerPullRecentChatReq((proto::ServerPullRecentChatReq *const)(v2 + 96));
      v8 = proto::PullRecentChatReq::begin_sequence(req);
      proto::ServerPullRecentChatReq::set_from_sequence((proto::ServerPullRecentChatReq *const)(v2 + 96), v8);
      v9 = proto::PullRecentChatReq::pull_num(req);
      proto::ServerPullRecentChatReq::set_pull_num((proto::ServerPullRecentChatReq *const)(v2 + 96), v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = sendProtoToSocialService<proto::ServerPullRecentChatReq>(
             this->player_,
             (proto::ServerPullRecentChatReq *)(v2 + 96));
      proto::ServerPullRecentChatReq::~ServerPullRecentChatReq((proto::ServerPullRecentChatReq *const)(v2 + 96));
    }
    std::shared_ptr<proto::PullRecentChatRsp>::~shared_ptr((std::shared_ptr<proto::PullRecentChatRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PullRecentChatReq const>::~shared_ptr((std::shared_ptr<const proto::PullRecentChatReq> *const)(v2 + 32));
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

// Line 973: range 0000000018035BFE-0000000018035DF8
int32_t __cdecl SocialHandler::onReadPrivateChatRsp(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ReadPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:974";
  *(_QWORD *)(v2 + 16) = SocialHandler::onReadPrivateChatRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReadPrivateChatRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReadPrivateChatRsp const>(
         (const std::shared_ptr<const proto::ReadPrivateChatRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onReadPrivateChatRsp",
      974);
    common::milog::MiLogStream::operator()(&v8, off_264A10A0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ReadPrivateChatRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, rsp_0);
  }
  std::shared_ptr<proto::ReadPrivateChatRsp const>::~shared_ptr((std::shared_ptr<const proto::ReadPrivateChatRsp> *const)(v2 + 32));
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

// Line 979: range 0000000018035DFA-000000001803625B
int32_t __cdecl SocialHandler::onReadPrivateChatReq(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PrivateChat; // r14d
  uint32_t Uid; // eax
  google::protobuf::uint32 v7; // eax
  PlayerSocialComp *SocialComp; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  bool is_ps4_friend; // [rsp+1Bh] [rbp-105h]
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  const proto::ReadPrivateChatReq *req; // [rsp+20h] [rbp-100h]
  proto::ReadPrivateChatRsp *rsp_0; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:980 64 16 11 rsp_ptr:980 96 32 14 server_req:981";
  *(_QWORD *)(v2 + 16) = SocialHandler::onReadPrivateChatReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReadPrivateChatReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReadPrivateChatReq const>(
         (const std::shared_ptr<const proto::ReadPrivateChatReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onReadPrivateChatReq",
      980);
    common::milog::MiLogStream::operator()(&v18, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v18);
    PrivateChat = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ReadPrivateChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadPrivateChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReadPrivateChatRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReadPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReadPrivateChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReadPrivateChatRsp::set_retcode(rsp_0, -1);
    proto::ServerReadPrivateChatReq::ServerReadPrivateChatReq((proto::ServerReadPrivateChatReq *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::ServerReadPrivateChatReq::set_from_uid((proto::ServerReadPrivateChatReq *const)(v2 + 96), Uid);
    v7 = proto::ReadPrivateChatReq::target_uid(req);
    proto::ServerReadPrivateChatReq::set_target_uid((proto::ServerReadPrivateChatReq *const)(v2 + 96), v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v9 = proto::ReadPrivateChatReq::target_uid(req);
    is_ps4_friend = PlayerSocialComp::isPlayerPSNFriend(SocialComp, v9);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/social_handler.cpp",
      "onReadPrivateChatReq",
      985);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v18,
            (const char (*)[19])"[CHAT] target uid ");
    val = proto::ReadPrivateChatReq::target_uid(req);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])off_264A0EC0);
    common::milog::MiLogStream::operator<<(v12, is_ps4_friend);
    common::milog::MiLogStream::~MiLogStream(&v18);
    proto::ServerReadPrivateChatReq::set_is_ps4_friend((proto::ServerReadPrivateChatReq *const)(v2 + 96), is_ps4_friend);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PrivateChat = sendProtoToSocialService<proto::ServerReadPrivateChatReq>(
                    this->player_,
                    (proto::ServerReadPrivateChatReq *)(v2 + 96));
    proto::ServerReadPrivateChatReq::~ServerReadPrivateChatReq((proto::ServerReadPrivateChatReq *const)(v2 + 96));
    std::shared_ptr<proto::ReadPrivateChatRsp>::~shared_ptr((std::shared_ptr<proto::ReadPrivateChatRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReadPrivateChatReq const>::~shared_ptr((std::shared_ptr<const proto::ReadPrivateChatReq> *const)(v2 + 32));
  result = PrivateChat;
  if ( v19 == (char *)v2 )
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

// Line 991: range 000000001803625C-000000001803682C
int32_t __cdecl SocialHandler::onPullRecentChatRsp(SocialHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::ChatInfo *v12; // rax
  int32_t result; // eax
  uint32_t to_uid; // [rsp+18h] [rbp-148h]
  uint32_t from_uid; // [rsp+1Ch] [rbp-144h]
  google::protobuf::RepeatedPtrField<proto::ChatInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::ChatInfo>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  PlayerSocialComp *social_comp; // [rsp+30h] [rbp-130h]
  const proto::PullRecentChatRsp *rsp_0; // [rsp+38h] [rbp-128h]
  const google::protobuf::RepeatedPtrField<proto::ChatInfo> *__for_range; // [rsp+40h] [rbp-120h]
  const proto::ChatInfo *chat_info; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-110h] BYREF
  char v23[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 player_uid:992 64 4 14 other_uid:1000 80 16 11 rsp_ptr:994 112 48 11 new_rsp:995";
  *(_QWORD *)(v2 + 16) = SocialHandler::onPullRecentChatRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  social_comp = Player::getSocialComp(this->player_);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PullRecentChatRsp>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::PullRecentChatRsp const>(
         (const std::shared_ptr<const proto::PullRecentChatRsp> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onPullRecentChatRsp",
      994);
    common::milog::MiLogStream::operator()(&v22, off_264A1220);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
    goto LABEL_33;
  }
  rsp_0 = std::__shared_ptr_access<proto::PullRecentChatRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PullRecentChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::PullRecentChatRsp::PullRecentChatRsp((proto::PullRecentChatRsp *const)(v2 + 112));
  __for_range = proto::PullRecentChatRsp::chat_info(rsp_0);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChatInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChatInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChatInfo const>::operator!=(&__for_begin, &__for_end) )
  {
    chat_info = google::protobuf::internal::RepeatedPtrIterator<proto::ChatInfo const>::operator*(&__for_begin);
    to_uid = proto::ChatInfo::to_uid(chat_info);
    from_uid = proto::ChatInfo::uid(chat_info);
    *(_DWORD *)(v2 + 64) = 0;
    if ( to_uid == *(_DWORD *)(v2 + 48) )
    {
      *(_DWORD *)(v2 + 64) = from_uid;
    }
    else
    {
      if ( from_uid != *(_DWORD *)(v2 + 48) )
        goto LABEL_29;
      *(_DWORD *)(v2 + 64) = to_uid;
    }
    if ( !PlayerSocialComp::isPlayerFriend(social_comp, *(_DWORD *)(v2 + 64))
      && !PlayerSocialComp::isPlayerPSNFriend(social_comp, *(_DWORD *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/social_handler.cpp",
        "onPullRecentChatRsp",
        1016);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v22, (const unsigned int *)(v2 + 64));
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v7, (const char (*)[22])off_264A1260);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else if ( PlayerSocialComp::isPlayerInBlacklist(social_comp, *(_DWORD *)(v2 + 64))
           || PlayerSocialComp::isPlayerInPSBlacklist(social_comp, *(_DWORD *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onPullRecentChatRsp",
        1022);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              &v22,
              (const unsigned int *)(v2 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v10, (const char (*)[23])off_264A12A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v12 = proto::PullRecentChatRsp::add_chat_info((proto::PullRecentChatRsp *const)(v2 + 112));
      proto::ChatInfo::CopyFrom(v12, chat_info);
    }
LABEL_29:
    google::protobuf::internal::RepeatedPtrIterator<proto::ChatInfo const>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
  proto::PullRecentChatRsp::~PullRecentChatRsp((proto::PullRecentChatRsp *const)(v2 + 112));
LABEL_33:
  std::shared_ptr<proto::PullRecentChatRsp const>::~shared_ptr((std::shared_ptr<const proto::PullRecentChatRsp> *const)(v2 + 80));
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 1031: range 0000000018036B52-00000000180377A3
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SocialHandler::onSetFriendRemarkNameReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  proto::SetFriendRemarkNameRsp *v7; // rax
  const std::string *v8; // rax
  google::protobuf::uint32 v9; // r14d
  proto::SetFriendRemarkNameRsp *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t RemarkNameLength; // eax
  proto::SetFriendRemarkNameRsp *v13; // rax
  proto::SetFriendRemarkNameRsp *v14; // rax
  proto::SetFriendRemarkNameRsp *v15; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v16; // rsi
  common::minet::Packet *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v21; // rax
  GameserverService *v22; // r14
  const std::shared_ptr<common::minet::Packet> *v23; // rsi
  __suseconds_t v24; // rdx
  common::minet::PacketPtr v25; // rdi
  common::minet::Packet *v26; // rax
  common::minet::Packet *v27; // rax
  common::minet::PacketPtr v28; // rdi
  common::minet::Packet *v29; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v30; // rsi
  common::minet::Packet *v31; // rax
  common::milog::MiLogStream *v32; // r14
  proto::SetFriendRemarkNameRsp *v33; // rax
  std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  PlayerSocialComp *SocialComp; // r14
  uint32_t v36; // eax
  char v37; // al
  proto::SetFriendRemarkNameRsp *v38; // rax
  std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  PlayerSocialComp *v40; // r14
  proto::SetFriendRemarkNameRsp *v41; // r15
  uint32_t v42; // eax
  proto::SetFriendRemarkNameRsp *v43; // rax
  Player *v44; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+23h] [rbp-29Dh] BYREF
  unsigned int val; // [rsp+24h] [rbp-29Ch] BYREF
  int32_t ret; // [rsp+28h] [rbp-298h]
  uint32_t async_http_type; // [rsp+2Ch] [rbp-294h]
  int32_t ret_0; // [rsp+30h] [rbp-290h]
  int32_t retcode; // [rsp+34h] [rbp-28Ch]
  const proto::SetFriendRemarkNameReq *req; // [rsp+38h] [rbp-288h]
  std::shared_ptr<common::minet::Packet> v53; // [rsp+40h] [rbp-280h] BYREF
  SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v54; // [rsp+50h] [rbp-270h] BYREF
  common::milog::MiLogStream v55; // [rsp+70h] [rbp-250h] BYREF
  char v56[560]; // [rsp+90h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 12 req_ptr:1032 80 16 8 rsp:1034 112 16 10 timer:1067 144 32 21 remark_name_text:1036 20"
                        "8 240 13 http_req:1067";
  *(_QWORD *)(v2 + 16) = SocialHandler::onSetFriendRemarkNameReq;
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
  common::minet::Packet::getConstProto<proto::SetFriendRemarkNameReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::SetFriendRemarkNameReq const>(
         (const std::shared_ptr<const proto::SetFriendRemarkNameReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSetFriendRemarkNameReq",
      1032);
    common::milog::MiLogStream::operator()(&v55, off_264A13C0);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v6 = -1;
    goto LABEL_48;
  }
  req = std::__shared_ptr_access<proto::SetFriendRemarkNameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetFriendRemarkNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::SetFriendRemarkNameRsp>();
  v7 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::SetFriendRemarkNameRsp::set_retcode(v7, 0);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v55, off_2649FE60, &__a);
  v8 = proto::SetFriendRemarkNameReq::remark_name[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v2 + 144), v8, (const std::string *)&v55, 1);
  std::string::~string(&v55);
  std::allocator<char>::~allocator(&__a);
  v9 = proto::SetFriendRemarkNameReq::uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v9 == Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onSetFriendRemarkNameReq",
      1041);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v55, (const char (*)[22])"target cannot be self");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v10 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::SetFriendRemarkNameRsp::set_retcode(v10, -1);
  }
  else if ( (unsigned __int8)std::string::empty(v2 + 144) != 1 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v53);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
    RemarkNameLength = ConstValueExcelConfigMgr::getRemarkNameLength(&v11->design_config.txt_config_mgr.const_value_config_mgr);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v2 + 144), RemarkNameLength);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( ret )
    {
      if ( ret == 130 )
      {
        v14 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::SetFriendRemarkNameRsp::set_retcode(v14, 7030);
      }
      else if ( ret == 131 )
      {
        v13 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::SetFriendRemarkNameRsp::set_retcode(v13, 7029);
      }
      else
      {
        v15 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::SetFriendRemarkNameRsp::set_retcode(v15, -1);
      }
    }
    else
    {
      v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v16);
      if ( !common::minet::Packet::getExt(v17, 2u) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
        if ( *(char *)(((unsigned __int64)&v18->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v18 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v18->is_word_filter_use_remote);
        is_word_filter_use_remote = v18->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v21 = proto::SetFriendRemarkNameReq::remark_name[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 208), v21, player, 8u);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0xFCAu);
          v22 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v54.__packet_ptr, v23);
          v24 = *(_QWORD *)(v2 + 120);
          v54.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 112);
          v54.__timer.start_tv_.tv_usec = v24;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55,
            &v54);
          ret_0 = GameserverService::asyncHttpRequest(
                    v22,
                    (const common::minet::http_client::HttpRequest *)(v2 + 208),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v55);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55);
          SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v54);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/social_handler.cpp",
              "onSetFriendRemarkNameReq",
              1067);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v55,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v55);
            v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v25._M_refcount._M_pi);
            common::minet::Packet::setExt(v26, 2u, 1u);
            v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v25._M_refcount._M_pi);
            common::minet::Packet::setExt(v27, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v53,
              (const std::shared_ptr<common::minet::Packet> *)v25._M_refcount._M_pi);
            v25._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v53;
            ServiceBox::pushPacketToService(v25);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v53);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 208));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
        }
        else
        {
          v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28._M_refcount._M_pi);
          common::minet::Packet::setExt(v29, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v53,
            (const std::shared_ptr<common::minet::Packet> *)v28._M_refcount._M_pi);
          v28._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v53;
          ServiceBox::pushPacketToService(v28);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v53);
        }
        v6 = 0;
        goto LABEL_47;
      }
      v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v30);
      if ( common::minet::Packet::getExt(v31, 3u) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/social_handler.cpp",
          "onSetFriendRemarkNameReq",
          1074);
        v32 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v55,
                (const char (*)[44])"word filter check failed, word illegal uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v33 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::SetFriendRemarkNameRsp::set_retcode(v33, 7028);
      }
    }
  }
  v34 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( proto::SetFriendRemarkNameRsp::retcode(v34) )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v36 = proto::SetFriendRemarkNameReq::uid(req);
  if ( PlayerSocialComp::isPlayerFriend(SocialComp, v36) )
LABEL_37:
    v37 = 0;
  else
    v37 = 1;
  if ( v37 )
  {
    v38 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::SetFriendRemarkNameRsp::set_retcode(v38, 7008);
  }
  v39 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( !proto::SetFriendRemarkNameRsp::retcode(v39) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v40 = Player::getSocialComp(this->player_);
    v41 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    v42 = proto::SetFriendRemarkNameReq::uid(req);
    retcode = PlayerSocialComp::setFriendRemarkName(v40, v42, (const std::string *)(v2 + 144), v41);
    v43 = std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::SetFriendRemarkNameRsp::set_retcode(v43, retcode);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v44 = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::SetFriendRemarkNameRsp>((const std::shared_ptr<proto::SetFriendRemarkNameRsp> *)&v53);
  Player::sendMessage(v44, (common::minet::ConstMessagePtr *)&v53, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v53);
  v6 = 0;
LABEL_47:
  std::string::~string((void *)(v2 + 144));
  std::shared_ptr<proto::SetFriendRemarkNameRsp>::~shared_ptr((std::shared_ptr<proto::SetFriendRemarkNameRsp> *const)(v2 + 80));
LABEL_48:
  std::shared_ptr<proto::SetFriendRemarkNameReq const>::~shared_ptr((std::shared_ptr<const proto::SetFriendRemarkNameReq> *const)(v2 + 48));
  result = v6;
  if ( v56 == (char *)v2 )
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

// Line 1067: range 000000001808A232-000000001808A2BB
void __cdecl SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1067: range 000000001808A386-000000001808A40F
void __cdecl SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1067: range 000000001803682E-0000000018036B24
void __cdecl SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::SetFriendRemarkNameReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 12 msg_ptr:1067";
  *(_QWORD *)(v4 + 16) = SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::SetFriendRemarkNameReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::SetFriendRemarkNameReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::SetFriendRemarkNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::SetFriendRemarkNameReq::mutable_remark_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::SetFriendRemarkNameReq>::~shared_ptr((std::shared_ptr<proto::SetFriendRemarkNameReq> *const)(v4 + 32));
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

// Line 1067: range 0000000018036B26-0000000018036B50
void __cdecl SocialHandler::onSetFriendRemarkNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SocialHandler::onSetFriendRemarkNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 1097: range 00000000180377A4-0000000018038295
int32_t __cdecl SocialHandler::onServerGetFriendBriefRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int v7; // r15d
  BlessingActivity *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int v10; // r15d
  PlantFlowerActivity *v11; // rax
  std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v14; // r14
  int v15; // r15d
  WinterCampActivity *v16; // rax
  std::__shared_ptr_access<GachaActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v19; // r14
  int v20; // r15d
  BaseActivity *v21; // rax
  std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v24; // r14
  int v25; // r15d
  VintageActivity *v26; // rax
  common::milog::MiLogStream *v27; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const proto::ServerGetFriendBriefRsp *server_rsp; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 server_rsp_ptr:1098 64 16 17 activity_ptr:1148";
  *(_QWORD *)(v3 + 16) = SocialHandler::onServerGetFriendBriefRsp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendBriefRsp>((common::minet::Packet *const)(v3 + 32));
  if ( std::operator==<proto::ServerGetFriendBriefRsp const>(
         (const std::shared_ptr<const proto::ServerGetFriendBriefRsp> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendBriefRsp",
      1098);
    common::milog::MiLogStream::operator()(&v31, off_264A14A0);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v2 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetFriendBriefRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    switch ( proto::ServerGetFriendBriefRsp::reason(server_rsp) )
    {
      case FRIEND_BRIEF_REASON_BLESSING_ACTIVITY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<BlessingActivity>((PlayerActivityComp *const)(v3 + 64));
        if ( std::operator==<BlessingActivity>(0LL, (const std::shared_ptr<BlessingActivity> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendBriefRsp",
            1106);
          v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v31,
                 (const char (*)[42])"[BLESSING] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v2 = 860;
          v7 = 0;
        }
        else
        {
          v8 = std::__shared_ptr_access<BlessingActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlessingActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          BlessingActivity::onServerGetFriendBriefRsp(v8, server_rsp);
          v7 = 1;
        }
        std::shared_ptr<BlessingActivity>::~shared_ptr((std::shared_ptr<BlessingActivity> *const)(v3 + 64));
        if ( v7 )
          goto LABEL_65;
        break;
      case FRIEND_BRIEF_REASON_PLANT_FLOWER_ACTIVITY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<PlantFlowerActivity>((PlayerActivityComp *const)(v3 + 64));
        if ( std::operator==<PlantFlowerActivity>(0LL, (const std::shared_ptr<PlantFlowerActivity> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendBriefRsp",
            1117);
          v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                 &v31,
                 (const char (*)[46])"[PLANT_FLOWER] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v2 = 860;
          v10 = 0;
        }
        else
        {
          v11 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          PlantFlowerActivity::onServerGetFriendBriefRsp(v11, server_rsp);
          v10 = 1;
        }
        std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v3 + 64));
        if ( v10 )
          goto LABEL_65;
        break;
      case FRIEND_BRIEF_REASON_WINTER_CAMP_ACTIVITY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<WinterCampActivity>((PlayerActivityComp *const)(v3 + 64));
        if ( std::operator==<WinterCampActivity>((const std::shared_ptr<WinterCampActivity> *)(v3 + 64), 0LL)
          || (v12 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
              !BaseActivity::isOpening((const BaseActivity *const)v12, 0)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendBriefRsp",
            1128);
          v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v31,
                  (const char (*)[44])"[WinterCamp] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v2 = 860;
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          WinterCampActivity::onServerGetFriendBriefRsp(v16, server_rsp);
          v15 = 1;
        }
        std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v3 + 64));
        if ( v15 )
          goto LABEL_65;
        break;
      case FRIEND_BRIEF_REASON_GACHA_ACTIVITY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<GachaActivity>((PlayerActivityComp *const)(v3 + 64));
        if ( std::operator==<GachaActivity>((const std::shared_ptr<GachaActivity> *)(v3 + 64), 0LL)
          || (v17 = std::__shared_ptr_access<GachaActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GachaActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
              !BaseActivity::isOpening((const BaseActivity *const)v17, 0)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendBriefRsp",
            1140);
          v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v31,
                  (const char (*)[44])"[WinterCamp] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v2 = 860;
          v20 = 0;
        }
        else
        {
          v21 = (BaseActivity *)std::__shared_ptr_access<GachaActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GachaActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          BaseActivity::onServerGetFriendBriefRspBase(v21, server_rsp);
          v20 = 1;
        }
        std::shared_ptr<GachaActivity>::~shared_ptr((std::shared_ptr<GachaActivity> *const)(v3 + 64));
        if ( v20 )
          goto LABEL_65;
        break;
      case FRIEND_BRIEF_REASON_VINTAGE_ACTIVITY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<VintageActivity>((PlayerActivityComp *const)(v3 + 64));
        if ( std::operator==<VintageActivity>((const std::shared_ptr<VintageActivity> *)(v3 + 64), 0LL)
          || (v22 = std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
              !BaseActivity::isOpening((const BaseActivity *const)v22, 0)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onServerGetFriendBriefRsp",
            1151);
          v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v31,
                  (const char (*)[41])"[Vintage] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v2 = 860;
          v25 = 0;
        }
        else
        {
          v26 = std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          VintageActivity::onServerGetFriendBriefRsp(v26, server_rsp);
          v25 = 1;
        }
        std::shared_ptr<VintageActivity>::~shared_ptr((std::shared_ptr<VintageActivity> *const)(v3 + 64));
        if ( v25 )
          goto LABEL_65;
        break;
      default:
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/social_handler.cpp",
          "onServerGetFriendBriefRsp",
          1158);
        v27 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v31,
                (const char (*)[36])"unsupported request reason, reason:");
        val = proto::ServerGetFriendBriefRsp::reason(server_rsp);
        common::milog::MiLogStream::operator<<<proto::FriendBriefRequestReason,(proto::FriendBriefRequestReason*)0>(
          v27,
          (const proto::FriendBriefRequestReason *)&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
LABEL_65:
        v2 = 0;
        break;
    }
  }
  std::shared_ptr<proto::ServerGetFriendBriefRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendBriefRsp> *const)(v3 + 32));
  result = v2;
  if ( v32 == (char *)v3 )
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

// Line 1165: range 0000000018038296-00000000180382F6
int32_t __cdecl SocialHandler::onUpdatePlayerShowAvatarListReq(
        SocialHandler *const this,
        const proto::UpdatePlayerShowAvatarListReq *req,
        proto::UpdatePlayerShowAvatarListRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  return PlayerSocialComp::onUpdatePlayerShowAvatarList(SocialComp, req, rsp_0);
};

// Line 1170: range 00000000180382F8-0000000018038ABA
int32_t __cdecl SocialHandler::onGetFriendShowAvatarInfoReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t FriendShowAvatarInfo; // r14d
  google::protobuf::uint32 v6; // r14d
  google::protobuf::uint32 v7; // eax
  PlayerSocialComp *SocialComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rdx
  PlayerAvatarComp *AvatarComp; // r14
  proto::ShowAvatarInfo *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerSocialComp *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  PlayerSocialComp *v16; // rax
  google::protobuf::uint32 v17; // eax
  int32_t result; // eax
  int32_t retcode; // [rsp+1Ch] [rbp-194h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  const proto::GetFriendShowAvatarInfoReq *req; // [rsp+30h] [rbp-180h]
  uint64_t now; // [rsp+38h] [rbp-178h]
  uint64_t last_time; // [rsp+40h] [rbp-170h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-150h] BYREF
  char v28[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 avatar_id:1181 64 16 12 req_ptr:1171 96 24 15 server_req:1207 160 56 8 rsp:1201";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetFriendShowAvatarInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetFriendShowAvatarInfoReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetFriendShowAvatarInfoReq const>(
         (const std::shared_ptr<const proto::GetFriendShowAvatarInfoReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetFriendShowAvatarInfoReq",
      1171);
    common::milog::MiLogStream::operator()(&v27, off_264A17A0);
    common::milog::MiLogStream::~MiLogStream(&v27);
    FriendShowAvatarInfo = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetFriendShowAvatarInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetFriendShowAvatarInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = proto::GetFriendShowAvatarInfoReq::uid(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v6 == Player::getUid(this->player_) )
    {
      proto::GetFriendShowAvatarInfoRsp::GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
      v7 = proto::GetFriendShowAvatarInfoReq::uid(req);
      proto::GetFriendShowAvatarInfoRsp::set_uid((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160), v7);
      retcode = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      PlayerSocialComp::getShowAvatarVec((std::vector<unsigned int> *)(v2 + 96), SocialComp);
      __for_range = (std::vector<unsigned int> *)(v2 + 96);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 96))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v9;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        v11 = proto::GetFriendShowAvatarInfoRsp::add_show_avatar_info_list((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
        if ( PlayerAvatarComp::fillAvatarShowInfo(AvatarComp, *(_DWORD *)(v2 + 48), v11) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/social_handler.cpp",
            "onGetFriendShowAvatarInfoReq",
            1185);
          v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v27,
                  (const char (*)[38])"fillAvatarShowInfo failed, avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v27);
          retcode = -1;
          break;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
      proto::GetFriendShowAvatarInfoRsp::set_retcode((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160), retcode);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 160));
      FriendShowAvatarInfo = 0;
      proto::GetFriendShowAvatarInfoRsp::~GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
    }
    else
    {
      now = common::tools::TimeUtils::getNowMs();
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = Player::getSocialComp(this->player_);
      last_time = PlayerSocialComp::getLastReqFriendAvatarTime(v13);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
      v15 = now < ConstValueExcelConfigMgr::getReqFriendAvatarTimeLimit(&v14->design_config.txt_config_mgr.const_value_config_mgr)
                + last_time;
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( v15 )
      {
        proto::GetFriendShowAvatarInfoRsp::GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
        proto::GetFriendShowAvatarInfoRsp::set_retcode((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160), 7042);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 160));
        FriendShowAvatarInfo = proto::GetFriendShowAvatarInfoRsp::retcode((const proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
        proto::GetFriendShowAvatarInfoRsp::~GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 160));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v16 = Player::getSocialComp(this->player_);
        PlayerSocialComp::setLastReqFriendAvatarTime(v16, now);
        proto::ServerGetFriendShowAvatarInfoReq::ServerGetFriendShowAvatarInfoReq((proto::ServerGetFriendShowAvatarInfoReq *const)(v2 + 96));
        v17 = proto::GetFriendShowAvatarInfoReq::uid(req);
        proto::ServerGetFriendShowAvatarInfoReq::set_uid((proto::ServerGetFriendShowAvatarInfoReq *const)(v2 + 96), v17);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        FriendShowAvatarInfo = sendProtoToSocialService<proto::ServerGetFriendShowAvatarInfoReq>(
                                 this->player_,
                                 (proto::ServerGetFriendShowAvatarInfoReq *)(v2 + 96));
        proto::ServerGetFriendShowAvatarInfoReq::~ServerGetFriendShowAvatarInfoReq((proto::ServerGetFriendShowAvatarInfoReq *const)(v2 + 96));
      }
    }
  }
  std::shared_ptr<proto::GetFriendShowAvatarInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetFriendShowAvatarInfoReq> *const)(v2 + 64));
  result = FriendShowAvatarInfo;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1213: range 0000000018038ABC-0000000018038DA7
int32_t __cdecl SocialHandler::onServerGetFriendShowAvatarInfoRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::int32 v6; // eax
  google::protobuf::uint32 v7; // eax
  const google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo> *v8; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetFriendShowAvatarInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+10h] [rbp-100h]
  google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo> *show_avatar_info_list; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 server_rsp_ptr:1214 64 56 8 rsp:1216";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendShowAvatarInfoRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendShowAvatarInfoRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetFriendShowAvatarInfoRsp const>(
         (const std::shared_ptr<const proto::ServerGetFriendShowAvatarInfoRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendShowAvatarInfoRsp",
      1214);
    common::milog::MiLogStream::operator()(&v12, off_264A1900);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetFriendShowAvatarInfoRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendShowAvatarInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::GetFriendShowAvatarInfoRsp::GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64));
    v6 = proto::ServerGetFriendShowAvatarInfoRsp::retcode(server_rsp);
    proto::GetFriendShowAvatarInfoRsp::set_retcode((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64), v6);
    v7 = proto::ServerGetFriendShowAvatarInfoRsp::uid(server_rsp);
    proto::GetFriendShowAvatarInfoRsp::set_uid((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64), v7);
    show_avatar_info_list = proto::GetFriendShowAvatarInfoRsp::mutable_show_avatar_info_list((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64));
    v8 = proto::ServerGetFriendShowAvatarInfoRsp::show_avatar_info_list(server_rsp);
    google::protobuf::RepeatedPtrField<proto::ShowAvatarInfo>::CopyFrom(show_avatar_info_list, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    v5 = proto::GetFriendShowAvatarInfoRsp::retcode((const proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64));
    proto::GetFriendShowAvatarInfoRsp::~GetFriendShowAvatarInfoRsp((proto::GetFriendShowAvatarInfoRsp *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetFriendShowAvatarInfoRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendShowAvatarInfoRsp> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 1227: range 0000000018038DA8-0000000018038E08
int32_t __cdecl SocialHandler::onUpdatePlayerShowNameCardListReq(
        SocialHandler *const this,
        const proto::UpdatePlayerShowNameCardListReq *req,
        proto::UpdatePlayerShowNameCardListRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  return PlayerSocialComp::onUpdatePlayerShowNameCardList(SocialComp, req, rsp_0);
};

// Line 1232: range 0000000018038E0A-0000000018039292
int32_t __cdecl SocialHandler::onGetFriendShowNameCardInfoReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t FriendShowNameCardInfo; // r14d
  google::protobuf::uint32 v6; // r14d
  google::protobuf::uint32 v7; // eax
  google::protobuf::RepeatedField<unsigned int> *v8; // r14
  PlayerSocialComp *SocialComp; // rax
  google::protobuf::uint32 v10; // eax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetFriendShowNameCardInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-130h] BYREF
  char v14[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 12 req_ptr:1233 80 24 15 server_req:1244 144 48 8 rsp:1236";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetFriendShowNameCardInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetFriendShowNameCardInfoReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::GetFriendShowNameCardInfoReq const>(
         (const std::shared_ptr<const proto::GetFriendShowNameCardInfoReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetFriendShowNameCardInfoReq",
      1233);
    common::milog::MiLogStream::operator()(&v13, off_264A1A00);
    common::milog::MiLogStream::~MiLogStream(&v13);
    FriendShowNameCardInfo = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetFriendShowNameCardInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetFriendShowNameCardInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v6 = proto::GetFriendShowNameCardInfoReq::uid(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v6 == Player::getUid(this->player_) )
    {
      proto::GetFriendShowNameCardInfoRsp::GetFriendShowNameCardInfoRsp((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 144));
      proto::GetFriendShowNameCardInfoRsp::set_retcode((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 144), 0);
      v7 = proto::GetFriendShowNameCardInfoReq::uid(req);
      proto::GetFriendShowNameCardInfoRsp::set_uid((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 144), v7);
      v8 = proto::GetFriendShowNameCardInfoRsp::mutable_show_name_card_id_list((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      PlayerSocialComp::getShowNameCardIdVec((std::vector<unsigned int> *)(v2 + 80), SocialComp);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v2 + 80),
        v8);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 144));
      FriendShowNameCardInfo = 0;
      proto::GetFriendShowNameCardInfoRsp::~GetFriendShowNameCardInfoRsp((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 144));
    }
    else
    {
      proto::ServerGetFriendShowNameCardInfoReq::ServerGetFriendShowNameCardInfoReq((proto::ServerGetFriendShowNameCardInfoReq *const)(v2 + 80));
      v10 = proto::GetFriendShowNameCardInfoReq::uid(req);
      proto::ServerGetFriendShowNameCardInfoReq::set_uid(
        (proto::ServerGetFriendShowNameCardInfoReq *const)(v2 + 80),
        v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      FriendShowNameCardInfo = sendProtoToSocialService<proto::ServerGetFriendShowNameCardInfoReq>(
                                 this->player_,
                                 (proto::ServerGetFriendShowNameCardInfoReq *)(v2 + 80));
      proto::ServerGetFriendShowNameCardInfoReq::~ServerGetFriendShowNameCardInfoReq((proto::ServerGetFriendShowNameCardInfoReq *const)(v2 + 80));
    }
  }
  std::shared_ptr<proto::GetFriendShowNameCardInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetFriendShowNameCardInfoReq> *const)(v2 + 48));
  result = FriendShowNameCardInfo;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1250: range 0000000018039294-0000000018039595
int32_t __cdecl SocialHandler::onServerGetFriendShowNameCardInfoRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::int32 v6; // eax
  google::protobuf::uint32 v7; // eax
  const google::protobuf::RepeatedField<unsigned int> *v8; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetFriendShowNameCardInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+10h] [rbp-100h]
  google::protobuf::RepeatedField<unsigned int> *show_name_card_id_list; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 19 server_rsp_ptr:1251 80 48 8 rsp:1253";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerGetFriendShowNameCardInfoRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetFriendShowNameCardInfoRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerGetFriendShowNameCardInfoRsp const>(
         (const std::shared_ptr<const proto::ServerGetFriendShowNameCardInfoRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerGetFriendShowNameCardInfoRsp",
      1251);
    common::milog::MiLogStream::operator()(&v12, off_264A1B00);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetFriendShowNameCardInfoRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetFriendShowNameCardInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetFriendShowNameCardInfoRsp::GetFriendShowNameCardInfoRsp((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80));
    v6 = proto::ServerGetFriendShowNameCardInfoRsp::retcode(server_rsp);
    proto::GetFriendShowNameCardInfoRsp::set_retcode((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80), v6);
    v7 = proto::ServerGetFriendShowNameCardInfoRsp::uid(server_rsp);
    proto::GetFriendShowNameCardInfoRsp::set_uid((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80), v7);
    show_name_card_id_list = proto::GetFriendShowNameCardInfoRsp::mutable_show_name_card_id_list((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80));
    v8 = proto::ServerGetFriendShowNameCardInfoRsp::show_name_card_id_list(server_rsp);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(show_name_card_id_list, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::GetFriendShowNameCardInfoRsp::retcode((const proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80));
    proto::GetFriendShowNameCardInfoRsp::~GetFriendShowNameCardInfoRsp((proto::GetFriendShowNameCardInfoRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerGetFriendShowNameCardInfoRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetFriendShowNameCardInfoRsp> *const)(v2 + 48));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 1263: range 0000000018039596-000000001803988B
int32_t __cdecl SocialHandler::onForceAddPlayerFriendRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // r14
  uint32_t v7; // eax
  PlayerSocialComp *v8; // r14
  const proto::FriendBrief *v9; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ForceAddPlayerFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 server_rsp_ptr:1264";
  *(_QWORD *)(v2 + 16) = SocialHandler::onForceAddPlayerFriendRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForceAddPlayerFriendRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ForceAddPlayerFriendRsp const>(
         (const std::shared_ptr<const proto::ForceAddPlayerFriendRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onForceAddPlayerFriendRsp",
      1264);
    common::milog::MiLogStream::operator()(&v12, off_264A1BC0);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ForceAddPlayerFriendRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForceAddPlayerFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ForceAddPlayerFriendRsp::retcode(server_rsp) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/social_handler.cpp",
        "onForceAddPlayerFriendRsp",
        1267);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v12,
        (const char (*)[34])"ForceAddPlayerFriendRsp return -1");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      v7 = proto::ForceAddPlayerFriendRsp::target_uid(server_rsp);
      PlayerSocialComp::addFriend(SocialComp, v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getSocialComp(this->player_);
      v9 = proto::ForceAddPlayerFriendRsp::target_friend_brief(server_rsp);
      PlayerSocialComp::updateFriendBrief(v8, v9);
      v5 = 0;
    }
  }
  std::shared_ptr<proto::ForceAddPlayerFriendRsp const>::~shared_ptr((std::shared_ptr<const proto::ForceAddPlayerFriendRsp> *const)(v2 + 32));
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

// Line 1276: range 000000001803988C-0000000018039A64
int32_t __cdecl SocialHandler::onServerAddPsnFriendRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAddPsnFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 19 server_rsp_ptr:1277";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddPsnFriendRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddPsnFriendRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAddPsnFriendRsp const>(
         (const std::shared_ptr<const proto::ServerAddPsnFriendRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddPsnFriendRsp",
      1277);
    common::milog::MiLogStream::operator()(&v8, off_264A1CE0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerAddPsnFriendRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddPsnFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::ServerAddPsnFriendRsp::retcode(server_rsp) )
      v5 = -1;
    else
      v5 = 0;
  }
  std::shared_ptr<proto::ServerAddPsnFriendRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAddPsnFriendRsp> *const)(v2 + 32));
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

// Line 1287: range 0000000018039A66-0000000018039C60
int32_t __cdecl SocialHandler::onFriendInfoChangeNotify(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::__shared_ptr_access<const proto::FriendInfoChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1288";
  *(_QWORD *)(v2 + 16) = SocialHandler::onFriendInfoChangeNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FriendInfoChangeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FriendInfoChangeNotify const>(
         (const std::shared_ptr<const proto::FriendInfoChangeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onFriendInfoChangeNotify",
      1288);
    common::milog::MiLogStream::operator()(&v8, off_264A1DA0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::FriendInfoChangeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FriendInfoChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::sendProto(this->player_, notify);
  }
  std::shared_ptr<proto::FriendInfoChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::FriendInfoChangeNotify> *const)(v2 + 32));
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

// Line 1293: range 0000000018039C62-0000000018039E5A
int32_t __cdecl SocialHandler::onGetPlayerAskFriendListReq(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 req_ptr:1294";
  *(_QWORD *)(v2 + 16) = SocialHandler::onGetPlayerAskFriendListReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerAskFriendListReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerAskFriendListReq const>(
         (const std::shared_ptr<const proto::GetPlayerAskFriendListReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onGetPlayerAskFriendListReq",
      1294);
    common::milog::MiLogStream::operator()(&v8, off_264A1E60);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetPlayerAskFriendListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerAskFriendListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::clientRequestAskFriendList(SocialComp);
  }
  std::shared_ptr<proto::GetPlayerAskFriendListReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerAskFriendListReq> *const)(v2 + 32));
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

// Line 1299: range 0000000018039E5C-000000001803A108
int32_t __cdecl SocialHandler::onUpdatePS4FriendListReq(
        SocialHandler *const this,
        const proto::UpdatePS4FriendListReq *req,
        proto::UpdatePS4FriendListRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isFriendListClosed; // r14
  int32_t PS4FriendUid; // r14d
  std::string *v9; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+30h] [rbp-D0h]
  const std::string *psn_id; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 15 server_req:1304";
  *(_QWORD *)(v3 + 16) = SocialHandler::onUpdatePS4FriendListReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  isFriendListClosed = FeatureSwitchMgr::isFriendListClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( isFriendListClosed )
  {
    PS4FriendUid = 142;
  }
  else
  {
    proto::SeverGetPS4FriendUidReq::SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v3 + 48));
    proto::SeverGetPS4FriendUidReq::set_request_reason(
      (proto::SeverGetPS4FriendUidReq *const)(v3 + 48),
      PS_REASON_FRIEND_LIST);
    __for_range = proto::UpdatePS4FriendListReq::psn_id_list[abi:cxx11](req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      psn_id = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      v9 = proto::SeverGetPS4FriendUidReq::add_psn_id_list[abi:cxx11]((proto::SeverGetPS4FriendUidReq *const)(v3 + 48));
      std::string::assign(v9, psn_id);
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PS4FriendUid = sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
                     this->player_,
                     (proto::SeverGetPS4FriendUidReq *)(v3 + 48));
    proto::SeverGetPS4FriendUidReq::~SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v3 + 48));
  }
  result = PS4FriendUid;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1315: range 000000001803A10A-000000001803A181
int32_t __cdecl SocialHandler::onGetChatEmojiCollectionReq(
        SocialHandler *const this,
        const proto::GetChatEmojiCollectionReq *req,
        proto::GetChatEmojiCollectionRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rax
  const ChatEmojiCollection *ChatEmojiCollection; // rbx
  proto::ChatEmojiCollectionData *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  ChatEmojiCollection = PlayerSocialComp::getChatEmojiCollection(SocialComp);
  v5 = proto::GetChatEmojiCollectionRsp::mutable_chat_emoji_collection_data(rsp_0);
  ChatEmojiCollection::toClient(ChatEmojiCollection, v5);
  return 0;
};

// Line 1321: range 000000001803A182-000000001803A3A4
int32_t __cdecl SocialHandler::onSetChatEmojiCollectionReq(
        SocialHandler *const this,
        const proto::SetChatEmojiCollectionReq *req,
        proto::SetChatEmojiCollectionRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v8; // r14d
  PlayerSocialComp *SocialComp; // rax
  int32_t result; // eax
  const proto::ChatEmojiCollectionData *proto_chat_emoji_collection; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 26 chat_emoji_collection:1327";
  *(_QWORD *)(v3 + 16) = SocialHandler::onSetChatEmojiCollectionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  proto_chat_emoji_collection = proto::SetChatEmojiCollectionReq::chat_emoji_collection_data(req);
  v6 = proto::ChatEmojiCollectionData::emoji_id_list_size(proto_chat_emoji_collection);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  LOBYTE(v6) = v6 > ConstValueExcelConfigMgr::getEmojiCollectNumLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( (_BYTE)v6 )
  {
    v8 = 7037;
  }
  else
  {
    ChatEmojiCollection::ChatEmojiCollection((ChatEmojiCollection *const)(v3 + 32));
    ChatEmojiCollection::fromClient((ChatEmojiCollection *const)(v3 + 32), proto_chat_emoji_collection);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    PlayerSocialComp::setChatEmojiCollection(SocialComp, (const ChatEmojiCollection *)(v3 + 32));
    v8 = 0;
    ChatEmojiCollection::~ChatEmojiCollection((ChatEmojiCollection *const)(v3 + 32));
  }
  result = v8;
  if ( v13 == (char *)v3 )
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

// Line 1334: range 000000001803A3A6-000000001803A5AB
int32_t __cdecl SocialHandler::onServerAddFriendByMuipRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAddFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1335";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddFriendByMuipRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddFriendByMuipRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAddFriendByMuipRsp const>(
         (const std::shared_ptr<const proto::ServerAddFriendByMuipRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendByMuipRsp",
      1335);
    common::milog::MiLogStream::operator()(&v9, off_264A1F60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerAddFriendByMuipRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerAddFriendByMuip(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerAddFriendByMuipRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAddFriendByMuipRsp> *const)(v2 + 32));
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

// Line 1340: range 000000001803A5AC-000000001803A7B1
int32_t __cdecl SocialHandler::onServerDelFriendByMuipRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerDelFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1341";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDelFriendByMuipRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDelFriendByMuipRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerDelFriendByMuipRsp const>(
         (const std::shared_ptr<const proto::ServerDelFriendByMuipRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendByMuipRsp",
      1341);
    common::milog::MiLogStream::operator()(&v9, off_264A2020);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerDelFriendByMuipRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDelFriendByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerDelFriendByMuip(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerDelFriendByMuipRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerDelFriendByMuipRsp> *const)(v2 + 32));
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

// Line 1346: range 000000001803A7B2-000000001803A9B7
int32_t __cdecl SocialHandler::onServerAddFriendAskByMuipRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerAddFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1347";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerAddFriendAskByMuipRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerAddFriendAskByMuipRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerAddFriendAskByMuipRsp const>(
         (const std::shared_ptr<const proto::ServerAddFriendAskByMuipRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerAddFriendAskByMuipRsp",
      1347);
    common::milog::MiLogStream::operator()(&v9, off_264A20E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerAddFriendAskByMuipRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerAddFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerAddFriendAskByMuip(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerAddFriendAskByMuipRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerAddFriendAskByMuipRsp> *const)(v2 + 32));
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

// Line 1352: range 000000001803A9B8-000000001803ABBD
int32_t __cdecl SocialHandler::onServerDelFriendAskByMuipRsp(
        SocialHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerSocialComp *SocialComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerDelFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1353";
  *(_QWORD *)(v2 + 16) = SocialHandler::onServerDelFriendAskByMuipRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerDelFriendAskByMuipRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerDelFriendAskByMuipRsp const>(
         (const std::shared_ptr<const proto::ServerDelFriendAskByMuipRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/social_handler.cpp",
      "onServerDelFriendAskByMuipRsp",
      1353);
    common::milog::MiLogStream::operator()(&v9, off_264A21A0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ServerDelFriendAskByMuipRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerDelFriendAskByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v5 = PlayerSocialComp::onServerDelFriendAskByMuip(SocialComp, rsp_0);
  }
  std::shared_ptr<proto::ServerDelFriendAskByMuipRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerDelFriendAskByMuipRsp> *const)(v2 + 32));
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

// Line 1358: range 000000001803ABBE-000000001803AC15
int32_t __cdecl SocialHandler::onReadSignatureAuditReq(
        SocialHandler *const this,
        const proto::ReadSignatureAuditReq *req,
        proto::ReadSignatureAuditRsp *rsp_0)
{
  PlayerSocialComp *SocialComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  PlayerSocialComp::onReadSignatureAudit(SocialComp);
  return 0;
};

// Line 1364: range 000000001803AC16-000000001803ACDB
int32_t __cdecl SocialHandler::onChatChannelShieldNotify(
        SocialHandler *const this,
        const proto::ChatChannelShieldNotify *notify)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax
  PlayerSocialComp *v5; // rbx
  uint32_t v6; // eax

  if ( proto::ChatChannelShieldNotify::is_shield(notify) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    v3 = proto::ChatChannelShieldNotify::channel_id(notify);
    return PlayerSocialComp::shieldChatChannel(SocialComp, v3);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getSocialComp(this->player_);
    v6 = proto::ChatChannelShieldNotify::channel_id(notify);
    return PlayerSocialComp::unshieldChatChannel(v5, v6);
  }
};
