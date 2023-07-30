// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/custom_dungeon_handler.cpp

// Line 22: range 00000000130FB9E2-00000000130FDB15
int32_t __cdecl CustomDungeonHandler::addPacketFuncToMap(
        CustomDungeonHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  CustomDungeonHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  CustomDungeonHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  CustomDungeonHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  CustomDungeonHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  CustomDungeonHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  CustomDungeonHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  CustomDungeonHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  CustomDungeonHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  CustomDungeonHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  CustomDungeonHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  CustomDungeonHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  CustomDungeonHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  CustomDungeonHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  CustomDungeonHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  CustomDungeonHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  CustomDungeonHandler **v48; // r8
  const std::_Placeholder<1> *v49; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  CustomDungeonHandler **v51; // r8
  const std::_Placeholder<1> *v52; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v53; // rax
  CustomDungeonHandler **v54; // r8
  const std::_Placeholder<1> *v55; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v56; // rax
  CustomDungeonHandler **v57; // r8
  const std::_Placeholder<1> *v58; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v59; // rax
  CustomDungeonHandler **v60; // r8
  const std::_Placeholder<1> *v61; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v62; // rax
  CustomDungeonHandler **v63; // r8
  const std::_Placeholder<1> *v64; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v65; // rax
  CustomDungeonHandler **v66; // r8
  const std::_Placeholder<1> *v67; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v68; // rax
  CustomDungeonHandler **v69; // r8
  const std::_Placeholder<1> *v70; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v71; // rax
  __m128i v72; // [rsp+0h] [rbp-200h] BYREF
  __m128i v73; // [rsp+10h] [rbp-1F0h] BYREF
  __m128i v74; // [rsp+20h] [rbp-1E0h] BYREF
  __m128i v75; // [rsp+30h] [rbp-1D0h] BYREF
  __m128i v76; // [rsp+40h] [rbp-1C0h] BYREF
  __m128i v77; // [rsp+50h] [rbp-1B0h] BYREF
  __m128i v78; // [rsp+60h] [rbp-1A0h] BYREF
  __m128i v79; // [rsp+70h] [rbp-190h] BYREF
  __m128i v80; // [rsp+80h] [rbp-180h] BYREF
  __m128i v81; // [rsp+90h] [rbp-170h] BYREF
  __m128i v82; // [rsp+A0h] [rbp-160h] BYREF
  __m128i v83; // [rsp+B0h] [rbp-150h] BYREF
  __m128i v84; // [rsp+C0h] [rbp-140h] BYREF
  __m128i v85; // [rsp+D0h] [rbp-130h] BYREF
  __m128i v86; // [rsp+E0h] [rbp-120h] BYREF
  __m128i v87; // [rsp+F0h] [rbp-110h] BYREF
  __m128i v88; // [rsp+100h] [rbp-100h] BYREF
  __m128i v89; // [rsp+110h] [rbp-F0h] BYREF
  __m128i v90; // [rsp+120h] [rbp-E0h] BYREF
  __m128i v91; // [rsp+130h] [rbp-D0h] BYREF
  __m128i v92; // [rsp+140h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+150h] [rbp-B0h]
  CustomDungeonHandler *thisa; // [rsp+158h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+16Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v96; // [rsp+170h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+178h] [rbp-88h] BYREF
  int (*__f[2])(CustomDungeonHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+180h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,const std::_Placeholder<1>&>::type v99; // [rsp+190h] [rbp-70h] BYREF
  common::milog::MiLogStream v100; // [rsp+1B0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 6226;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v96, &__y) )
  {
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/custom_dungeon_handler.cpp",
      "addPacketFuncToMap",
      23);
    common::milog::MiLogStream::operator()(&v100, format, 6226LL);
    common::milog::MiLogStream::~MiLogStream(&v100);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(CustomDungeonHandler *, std::shared_ptr<common::minet::Packet>))CustomDungeonHandler::onEnterCustomDungeonReq;
    __f[1] = 0LL;
    std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
      &v99,
      __f,
      (CustomDungeonHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 6226;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
      v5,
      &v99);
    __x = 6225;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v96, &__y) )
    {
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/custom_dungeon_handler.cpp",
        "addPacketFuncToMap",
        24);
      common::milog::MiLogStream::operator()(&v100, format, 6225LL);
      common::milog::MiLogStream::~MiLogStream(&v100);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(CustomDungeonHandler *, std::shared_ptr<common::minet::Packet>))CustomDungeonHandler::onSaveCustomDungeonRoomReq;
      __f[1] = 0LL;
      std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
        &v99,
        __f,
        (CustomDungeonHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 6225;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
        v8,
        &v99);
      __x = 10884;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v96, &__y) )
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/custom_dungeon_handler.cpp",
          "addPacketFuncToMap",
          25);
        common::milog::MiLogStream::operator()(&v100, format, 10884LL);
        common::milog::MiLogStream::~MiLogStream(&v100);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v72.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerGetCustomDungeonRsp;
        v72.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v72);
        std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
          &v99,
          __f,
          (CustomDungeonHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 10884;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
          v11,
          &v99);
        __x = 10889;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v96, &__y) )
        {
          common::milog::MiLogStream::create(
            &v100,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/custom_dungeon_handler.cpp",
            "addPacketFuncToMap",
            26);
          common::milog::MiLogStream::operator()(&v100, format, 10889LL);
          common::milog::MiLogStream::~MiLogStream(&v100);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v73.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerSaveCustomDungeonRsp;
          v73.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v73);
          std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
            &v99,
            __f,
            (CustomDungeonHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 10889;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
            v14,
            &v99);
          __x = 6222;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v96, &__y) )
          {
            common::milog::MiLogStream::create(
              &v100,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/custom_dungeon_handler.cpp",
              "addPacketFuncToMap",
              27);
            common::milog::MiLogStream::operator()(&v100, format, 6222LL);
            common::milog::MiLogStream::~MiLogStream(&v100);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v74.m128i_i64[0] = (__int64)CustomDungeonHandler::onChangeCustomDungeonRoomReq;
            v74.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v74);
            std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
              &v99,
              __f,
              (CustomDungeonHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 6222;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
              v17,
              &v99);
            __x = 6245;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v96, &__y) )
            {
              common::milog::MiLogStream::create(
                &v100,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/custom_dungeon_handler.cpp",
                "addPacketFuncToMap",
                28);
              common::milog::MiLogStream::operator()(&v100, format, 6245LL);
              common::milog::MiLogStream::~MiLogStream(&v100);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v75.m128i_i64[0] = (__int64)CustomDungeonHandler::onTryCustomDungeonReq;
              v75.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v75);
              std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                &v99,
                __f,
                (CustomDungeonHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 6245;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                v20,
                &v99);
              __x = 6242;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v96, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v100,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/custom_dungeon_handler.cpp",
                  "addPacketFuncToMap",
                  29);
                common::milog::MiLogStream::operator()(&v100, format, 6242LL);
                common::milog::MiLogStream::~MiLogStream(&v100);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v76.m128i_i64[0] = (__int64)CustomDungeonHandler::onPublishCustomDungeonReq;
                v76.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v76);
                std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                  &v99,
                  __f,
                  (CustomDungeonHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 6242;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v99);
                __x = 10832;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v96, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v100,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/custom_dungeon_handler.cpp",
                    "addPacketFuncToMap",
                    30);
                  common::milog::MiLogStream::operator()(&v100, format, 10832LL);
                  common::milog::MiLogStream::~MiLogStream(&v100);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v77.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerPublishCustomDungeonRsp;
                  v77.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v77);
                  std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                    &v99,
                    __f,
                    (CustomDungeonHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 10832;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v99);
                  __x = 6249;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v96, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v100,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/custom_dungeon_handler.cpp",
                      "addPacketFuncToMap",
                      31);
                    common::milog::MiLogStream::operator()(&v100, format, 6249LL);
                    common::milog::MiLogStream::~MiLogStream(&v100);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v78.m128i_i64[0] = (__int64)CustomDungeonHandler::onRemoveCustomDungeonReq;
                    v78.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v78);
                    std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                      &v99,
                      __f,
                      (CustomDungeonHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 6249;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v99);
                    __x = 10814;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v96, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v100,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/custom_dungeon_handler.cpp",
                        "addPacketFuncToMap",
                        32);
                      common::milog::MiLogStream::operator()(&v100, format, 10814LL);
                      common::milog::MiLogStream::~MiLogStream(&v100);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v79.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerRemoveCustomDungeonRsp;
                      v79.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v79);
                      std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                        &v99,
                        __f,
                        (CustomDungeonHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 10814;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v99);
                      __x = 6247;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v96, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v100,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/custom_dungeon_handler.cpp",
                          "addPacketFuncToMap",
                          33);
                        common::milog::MiLogStream::operator()(&v100, format, 6247LL);
                        common::milog::MiLogStream::~MiLogStream(&v100);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v80.m128i_i64[0] = (__int64)CustomDungeonHandler::onExitCustomDungeonTryReq;
                        v80.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v80);
                        std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                          &v99,
                          __f,
                          (CustomDungeonHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 6247;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v99);
                        __x = 6213;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v96, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v100,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/custom_dungeon_handler.cpp",
                            "addPacketFuncToMap",
                            34);
                          common::milog::MiLogStream::operator()(&v100, format, 6213LL);
                          common::milog::MiLogStream::~MiLogStream(&v100);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v81.m128i_i64[0] = (__int64)CustomDungeonHandler::onStoreCustomDungeonReq;
                          v81.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v81);
                          std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                            &v99,
                            __f,
                            (CustomDungeonHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v36,
                            v37);
                          __x = 6213;
                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                            v38,
                            &v99);
                          __x = 6250;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v96, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v100,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/custom_dungeon_handler.cpp",
                              "addPacketFuncToMap",
                              35);
                            common::milog::MiLogStream::operator()(&v100, format, 6250LL);
                            common::milog::MiLogStream::~MiLogStream(&v100);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v82.m128i_i64[0] = (__int64)CustomDungeonHandler::onGetStoreCustomDungeonReq;
                            v82.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v82);
                            std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                              &v99,
                              __f,
                              (CustomDungeonHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v39,
                              v40);
                            __x = 6250;
                            v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                              v41,
                              &v99);
                            __x = 10864;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v96, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v100,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/custom_dungeon_handler.cpp",
                                "addPacketFuncToMap",
                                36);
                              common::milog::MiLogStream::operator()(&v100, format, 10864LL);
                              common::milog::MiLogStream::~MiLogStream(&v100);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v83.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerGetCustomDungeonBriefRsp;
                              v83.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v83);
                              std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                &v99,
                                __f,
                                (CustomDungeonHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v42,
                                v43);
                              __x = 10864;
                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                v44,
                                &v99);
                              __x = 6210;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v96, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v100,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/custom_dungeon_handler.cpp",
                                  "addPacketFuncToMap",
                                  37);
                                common::milog::MiLogStream::operator()(&v100, format, 6210LL);
                                common::milog::MiLogStream::~MiLogStream(&v100);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v84.m128i_i64[0] = (__int64)CustomDungeonHandler::onLikeCustomDungeonReq;
                                v84.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v84);
                                std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                  &v99,
                                  __f,
                                  (CustomDungeonHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v45,
                                  v46);
                                __x = 6210;
                                v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                  v47,
                                  &v99);
                                __x = 6209;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v96, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v100,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/custom_dungeon_handler.cpp",
                                    "addPacketFuncToMap",
                                    38);
                                  common::milog::MiLogStream::operator()(&v100, format, 6209LL);
                                  common::milog::MiLogStream::~MiLogStream(&v100);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v85.m128i_i64[0] = (__int64)CustomDungeonHandler::onGetCustomDungeonReq;
                                  v85.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v85);
                                  std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                    &v99,
                                    __f,
                                    (CustomDungeonHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v48,
                                    v49);
                                  __x = 6209;
                                  v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                    v50,
                                    &v99);
                                  __x = 6235;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v96, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v100,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/custom_dungeon_handler.cpp",
                                      "addPacketFuncToMap",
                                      39);
                                    common::milog::MiLogStream::operator()(&v100, format, 6235LL);
                                    common::milog::MiLogStream::~MiLogStream(&v100);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v86.m128i_i64[0] = (__int64)CustomDungeonHandler::onGetRecommendCustomDungeonReq;
                                    v86.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v86);
                                    std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                      &v99,
                                      __f,
                                      (CustomDungeonHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v51,
                                      v52);
                                    __x = 6235;
                                    v53 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                      v53,
                                      &v99);
                                    __x = 10811;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v96, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v100,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/custom_dungeon_handler.cpp",
                                        "addPacketFuncToMap",
                                        40);
                                      common::milog::MiLogStream::operator()(&v100, format, 10811LL);
                                      common::milog::MiLogStream::~MiLogStream(&v100);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v87.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerGetRecommendCustomDungeonRsp;
                                      v87.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v87);
                                      std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                        &v99,
                                        __f,
                                        (CustomDungeonHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v54,
                                        v55);
                                      __x = 10811;
                                      v56 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                        v56,
                                        &v99);
                                      __x = 6233;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v96, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v100,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/custom_dungeon_handler.cpp",
                                          "addPacketFuncToMap",
                                          41);
                                        common::milog::MiLogStream::operator()(&v100, format, 6233LL);
                                        common::milog::MiLogStream::~MiLogStream(&v100);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v88.m128i_i64[0] = (__int64)CustomDungeonHandler::onSearchCustomDungeonReq;
                                        v88.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v88);
                                        std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                          &v99,
                                          __f,
                                          (CustomDungeonHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v57,
                                          v58);
                                        __x = 6233;
                                        v59 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                          v59,
                                          &v99);
                                        __x = 6203;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v96, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v100,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/custom_dungeon_handler.cpp",
                                            "addPacketFuncToMap",
                                            42);
                                          common::milog::MiLogStream::operator()(&v100, format, 6203LL);
                                          common::milog::MiLogStream::~MiLogStream(&v100);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v89.m128i_i64[0] = (__int64)CustomDungeonHandler::onBackPlayCustomDungeonOfficialReq;
                                          v89.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v89);
                                          std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                            &v99,
                                            __f,
                                            (CustomDungeonHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v60,
                                            v61);
                                          __x = 6203;
                                          v62 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                            v62,
                                            &v99);
                                          __x = 6243;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v96, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v100,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/custom_dungeon_handler.cpp",
                                              "addPacketFuncToMap",
                                              43);
                                            common::milog::MiLogStream::operator()(&v100, format, 6243LL);
                                            common::milog::MiLogStream::~MiLogStream(&v100);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            v90.m128i_i64[0] = (__int64)CustomDungeonHandler::onReplayCustomDungeonReq;
                                            v90.m128i_i64[1] = 0LL;
                                            *(__m128i *)__f = _mm_load_si128(&v90);
                                            std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                              &v99,
                                              __f,
                                              (CustomDungeonHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v63,
                                              v64);
                                            __x = 6243;
                                            v65 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                              v65,
                                              &v99);
                                            __x = 6211;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v96, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v100,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/custom_dungeon_handler.cpp",
                                                "addPacketFuncToMap",
                                                44);
                                              common::milog::MiLogStream::operator()(&v100, format, 6211LL);
                                              common::milog::MiLogStream::~MiLogStream(&v100);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              v91.m128i_i64[0] = (__int64)CustomDungeonHandler::onOutStuckCustomDungeonReq;
                                              v91.m128i_i64[1] = 0LL;
                                              *(__m128i *)__f = _mm_load_si128(&v91);
                                              std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                                &v99,
                                                __f,
                                                (CustomDungeonHandler **)&__y,
                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                v66,
                                                v67);
                                              __x = 6211;
                                              v68 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                                v68,
                                                &v99);
                                              __x = 10852;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v96._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v96, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v100,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/custom_dungeon_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  45);
                                                common::milog::MiLogStream::operator()(&v100, format, 10852LL);
                                                common::milog::MiLogStream::~MiLogStream(&v100);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                v92.m128i_i64[0] = (__int64)CustomDungeonHandler::onServerCustomDungeonFirstLikeNotify;
                                                v92.m128i_i64[1] = 0LL;
                                                *(__m128i *)__f = _mm_load_si128(&v92);
                                                std::bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>),CustomDungeonHandler*,std::_Placeholder<1> const&>(
                                                  &v99,
                                                  __f,
                                                  (CustomDungeonHandler **)&__y,
                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                  v69,
                                                  v70);
                                                __x = 10852;
                                                v71 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (CustomDungeonHandler::*)(std::shared_ptr<common::minet::Packet>) ()(CustomDungeonHandler*,std::_Placeholder<1>)>>(
                                                  v71,
                                                  &v99);
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
};

// Line 51: range 00000000130FDB16-00000000130FDE0A
int32_t __cdecl CustomDungeonHandler::onEnterCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EnterCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::EnterCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:52 64 16 10 rsp_ptr:52";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onEnterCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterCustomDungeonReq const>(
         (const std::shared_ptr<const proto::EnterCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onEnterCustomDungeonReq",
      52);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::EnterCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::enterCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::EnterCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::EnterCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::EnterCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::EnterCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::EnterCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 66: range 00000000130FDE0C-00000000130FE12A
int32_t __cdecl CustomDungeonHandler::onSaveCustomDungeonRoomReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::CustomDungeonRoom *v6; // rax
  google::protobuf::uint32 v7; // edx
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SaveCustomDungeonRoomReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::SaveCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:67 64 16 10 rsp_ptr:67";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onSaveCustomDungeonRoomReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveCustomDungeonRoomReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SaveCustomDungeonRoomReq const>(
         (const std::shared_ptr<const proto::SaveCustomDungeonRoomReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onSaveCustomDungeonRoomReq",
      67);
    common::milog::MiLogStream::operator()(&v12, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SaveCustomDungeonRoomReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveCustomDungeonRoomReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SaveCustomDungeonRoomRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, -1);
    v6 = proto::SaveCustomDungeonRoomReq::custom_dungeon_room(req);
    v7 = proto::CustomDungeonRoom::room_id(v6);
    proto::SaveCustomDungeonRoomRsp::set_room_id(rsp_0, v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::saveCustomDungeonRoom(CustomDungeonComp, req, rsp_0);
    if ( proto::SaveCustomDungeonRoomRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::SaveCustomDungeonRoomRsp::retcode(rsp_0);
    std::shared_ptr<proto::SaveCustomDungeonRoomRsp>::~shared_ptr((std::shared_ptr<proto::SaveCustomDungeonRoomRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SaveCustomDungeonRoomReq const>::~shared_ptr((std::shared_ptr<const proto::SaveCustomDungeonRoomReq> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 83: range 00000000130FE12C-00000000130FE453
int32_t __cdecl CustomDungeonHandler::onServerGetCustomDungeonRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 17 server_rsp_ptr:84 80 112 6 rsp:85";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerGetCustomDungeonRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetCustomDungeonRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerGetCustomDungeonRsp const>(
         (const std::shared_ptr<const proto::ServerGetCustomDungeonRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerGetCustomDungeonRsp",
      84);
    common::milog::MiLogStream::operator()(&v9, off_24F32E00);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetCustomDungeonRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::EnterCustomDungeonRsp::EnterCustomDungeonRsp((proto::EnterCustomDungeonRsp *const)(v2 + 80));
    proto::EnterCustomDungeonRsp::set_retcode((proto::EnterCustomDungeonRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverGetCustomDungeon(
      CustomDungeonComp,
      server_rsp,
      (proto::EnterCustomDungeonRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::EnterCustomDungeonRsp::retcode((const proto::EnterCustomDungeonRsp *const)(v2 + 80));
    proto::EnterCustomDungeonRsp::~EnterCustomDungeonRsp((proto::EnterCustomDungeonRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerGetCustomDungeonRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetCustomDungeonRsp> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 95: range 00000000130FE454-00000000130FE668
int32_t __cdecl CustomDungeonHandler::onServerSaveCustomDungeonRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerSaveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 17 server_rsp_ptr:96";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerSaveCustomDungeonRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerSaveCustomDungeonRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerSaveCustomDungeonRsp const>(
         (const std::shared_ptr<const proto::ServerSaveCustomDungeonRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerSaveCustomDungeonRsp",
      96);
    common::milog::MiLogStream::operator()(&v9, off_24F32EC0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerSaveCustomDungeonRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerSaveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverSaveCustomDungeon(CustomDungeonComp, server_rsp);
    v5 = proto::ServerSaveCustomDungeonRsp::retcode(server_rsp);
  }
  std::shared_ptr<proto::ServerSaveCustomDungeonRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerSaveCustomDungeonRsp> *const)(v2 + 32));
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

// Line 104: range 00000000130FE66A-00000000130FE968
int32_t __cdecl CustomDungeonHandler::onChangeCustomDungeonRoomReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // edx
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ChangeCustomDungeonRoomReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::ChangeCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:105 64 16 11 rsp_ptr:105";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onChangeCustomDungeonRoomReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeCustomDungeonRoomReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeCustomDungeonRoomReq const>(
         (const std::shared_ptr<const proto::ChangeCustomDungeonRoomReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onChangeCustomDungeonRoomReq",
      105);
    common::milog::MiLogStream::operator()(&v11, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ChangeCustomDungeonRoomReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeCustomDungeonRoomReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeCustomDungeonRoomRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeCustomDungeonRoomRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, -1);
    v6 = proto::ChangeCustomDungeonRoomReq::room_id(req);
    proto::ChangeCustomDungeonRoomRsp::set_room_id(rsp_0, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::changeCustomDungeonRoom(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::ChangeCustomDungeonRoomRsp::retcode(rsp_0);
    std::shared_ptr<proto::ChangeCustomDungeonRoomRsp>::~shared_ptr((std::shared_ptr<proto::ChangeCustomDungeonRoomRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeCustomDungeonRoomReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeCustomDungeonRoomReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 114: range 00000000130FE96A-00000000130FEC68
int32_t __cdecl CustomDungeonHandler::onTryCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // edx
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::TryCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::TryCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:115 64 16 11 rsp_ptr:115";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onTryCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TryCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TryCustomDungeonReq const>(
         (const std::shared_ptr<const proto::TryCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onTryCustomDungeonReq",
      115);
    common::milog::MiLogStream::operator()(&v11, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::TryCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TryCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TryCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TryCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TryCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TryCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::TryCustomDungeonReq::room_id(req);
    proto::TryCustomDungeonRsp::set_room_id(rsp_0, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::tryCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::TryCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::TryCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::TryCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TryCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::TryCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 124: range 00000000130FEC6A-00000000130FEF5E
int32_t __cdecl CustomDungeonHandler::onPublishCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PublishCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::PublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:125 64 16 11 rsp_ptr:125";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onPublishCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PublishCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PublishCustomDungeonReq const>(
         (const std::shared_ptr<const proto::PublishCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onPublishCustomDungeonReq",
      125);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PublishCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PublishCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PublishCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PublishCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::publishCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::PublishCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::PublishCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::PublishCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::PublishCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PublishCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::PublishCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 136: range 00000000130FEF60-00000000130FF233
int32_t __cdecl CustomDungeonHandler::onServerPublishCustomDungeonRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerPublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 server_rsp_ptr:137 64 24 7 rsp:138";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerPublishCustomDungeonRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPublishCustomDungeonRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerPublishCustomDungeonRsp const>(
         (const std::shared_ptr<const proto::ServerPublishCustomDungeonRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerPublishCustomDungeonRsp",
      137);
    common::milog::MiLogStream::operator()(&v9, off_24F33120);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerPublishCustomDungeonRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::PublishCustomDungeonRsp::PublishCustomDungeonRsp((proto::PublishCustomDungeonRsp *const)(v2 + 64));
    proto::PublishCustomDungeonRsp::set_retcode((proto::PublishCustomDungeonRsp *const)(v2 + 64), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverPublishCustomDungeon(
      CustomDungeonComp,
      server_rsp,
      (proto::PublishCustomDungeonRsp *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    v5 = proto::ServerPublishCustomDungeonRsp::retcode(server_rsp);
    proto::PublishCustomDungeonRsp::~PublishCustomDungeonRsp((proto::PublishCustomDungeonRsp *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerPublishCustomDungeonRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerPublishCustomDungeonRsp> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 148: range 00000000130FF234-00000000130FF560
int32_t __cdecl CustomDungeonHandler::onRemoveCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rdx
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::RemoveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::RemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:149 64 16 11 rsp_ptr:149";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onRemoveCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveCustomDungeonReq const>(
         (const std::shared_ptr<const proto::RemoveCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onRemoveCustomDungeonReq",
      149);
    common::milog::MiLogStream::operator()(&v11, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::RemoveCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RemoveCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
    proto::RemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::RemoveCustomDungeonReq::dungeon_guid(req);
    proto::RemoveCustomDungeonRsp::set_dungeon_guid(rsp_0, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::removeCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::RemoveCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::RemoveCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::RemoveCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::RemoveCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RemoveCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::RemoveCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 162: range 00000000130FF562-00000000130FF883
int32_t __cdecl CustomDungeonHandler::onServerRemoveCustomDungeonRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rax
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerRemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 18 server_rsp_ptr:163 80 40 7 rsp:164";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerRemoveCustomDungeonRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerRemoveCustomDungeonRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerRemoveCustomDungeonRsp const>(
         (const std::shared_ptr<const proto::ServerRemoveCustomDungeonRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerRemoveCustomDungeonRsp",
      163);
    common::milog::MiLogStream::operator()(&v10, off_24F33280);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerRemoveCustomDungeonRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerRemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::RemoveCustomDungeonRsp::RemoveCustomDungeonRsp((proto::RemoveCustomDungeonRsp *const)(v2 + 80));
    proto::RemoveCustomDungeonRsp::set_retcode((proto::RemoveCustomDungeonRsp *const)(v2 + 80), -1);
    v6 = proto::ServerRemoveCustomDungeonRsp::dungeon_guid(server_rsp);
    proto::RemoveCustomDungeonRsp::set_dungeon_guid((proto::RemoveCustomDungeonRsp *const)(v2 + 80), v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverRemoveCustomDungeon(
      CustomDungeonComp,
      server_rsp,
      (proto::RemoveCustomDungeonRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::ServerRemoveCustomDungeonRsp::retcode(server_rsp);
    proto::RemoveCustomDungeonRsp::~RemoveCustomDungeonRsp((proto::RemoveCustomDungeonRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerRemoveCustomDungeonRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerRemoveCustomDungeonRsp> *const)(v2 + 48));
  result = v5;
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

// Line 175: range 00000000130FF884-00000000130FFB6D
int32_t __cdecl CustomDungeonHandler::onExitCustomDungeonTryReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<proto::ExitCustomDungeonTryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:176 64 16 11 rsp_ptr:176";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onExitCustomDungeonTryReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ExitCustomDungeonTryReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ExitCustomDungeonTryReq const>(
         (const std::shared_ptr<const proto::ExitCustomDungeonTryReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onExitCustomDungeonTryReq",
      176);
    common::milog::MiLogStream::operator()(&v9, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ExitCustomDungeonTryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExitCustomDungeonTryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ExitCustomDungeonTryRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ExitCustomDungeonTryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ExitCustomDungeonTryRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ExitCustomDungeonTryRsp::set_retcode(rsp_0, -1);
    proto::ExitCustomDungeonTryRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::exitCustomDungeonTry(CustomDungeonComp, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::ExitCustomDungeonTryRsp::retcode(rsp_0);
    std::shared_ptr<proto::ExitCustomDungeonTryRsp>::~shared_ptr((std::shared_ptr<proto::ExitCustomDungeonTryRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ExitCustomDungeonTryReq const>::~shared_ptr((std::shared_ptr<const proto::ExitCustomDungeonTryReq> *const)(v2 + 32));
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

// Line 185: range 00000000130FFB6E-00000000130FFE4A
int32_t __cdecl CustomDungeonHandler::onStoreCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::StoreCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::StoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:186 64 16 11 rsp_ptr:186";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onStoreCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::StoreCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::StoreCustomDungeonReq const>(
         (const std::shared_ptr<const proto::StoreCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onStoreCustomDungeonReq",
      186);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::StoreCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::StoreCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::StoreCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::StoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::StoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::StoreCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::storeCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::StoreCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::StoreCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::StoreCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::StoreCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::StoreCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 194: range 00000000130FFE4C-0000000013100140
int32_t __cdecl CustomDungeonHandler::onGetStoreCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetStoreCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::GetStoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:195 64 16 11 rsp_ptr:195";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onGetStoreCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetStoreCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetStoreCustomDungeonReq const>(
         (const std::shared_ptr<const proto::GetStoreCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onGetStoreCustomDungeonReq",
      195);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetStoreCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetStoreCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetStoreCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetStoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetStoreCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::getStoreCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::GetStoreCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::GetStoreCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::GetStoreCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::GetStoreCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetStoreCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::GetStoreCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 206: range 0000000013100142-0000000013100356
int32_t __cdecl CustomDungeonHandler::onServerGetCustomDungeonBriefRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetCustomDungeonBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 18 server_rsp_ptr:207";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerGetCustomDungeonBriefRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetCustomDungeonBriefRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetCustomDungeonBriefRsp const>(
         (const std::shared_ptr<const proto::ServerGetCustomDungeonBriefRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerGetCustomDungeonBriefRsp",
      207);
    common::milog::MiLogStream::operator()(&v9, off_24F334E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetCustomDungeonBriefRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetCustomDungeonBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverGetCustomDungeonBrief(CustomDungeonComp, server_rsp);
    v5 = proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp);
  }
  std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetCustomDungeonBriefRsp> *const)(v2 + 32));
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

// Line 214: range 0000000013100358-0000000013100634
int32_t __cdecl CustomDungeonHandler::onLikeCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::LikeCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::LikeCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:215 64 16 11 rsp_ptr:215";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onLikeCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::LikeCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::LikeCustomDungeonReq const>(
         (const std::shared_ptr<const proto::LikeCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onLikeCustomDungeonReq",
      215);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::LikeCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LikeCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::LikeCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::LikeCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::LikeCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::LikeCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::likeCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::LikeCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::LikeCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::LikeCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::LikeCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::LikeCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 223: range 0000000013100636-0000000013100923
int32_t __cdecl CustomDungeonHandler::onGetCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<proto::GetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:224 64 16 11 rsp_ptr:224";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onGetCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetCustomDungeonReq const>(
         (const std::shared_ptr<const proto::GetCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onGetCustomDungeonReq",
      224);
    common::milog::MiLogStream::operator()(&v9, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::getCustomDungeon(CustomDungeonComp, rsp_0);
    if ( proto::GetCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::GetCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::GetCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::GetCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::GetCustomDungeonReq> *const)(v2 + 32));
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

// Line 235: range 0000000013100924-0000000013100C2C
int32_t __cdecl CustomDungeonHandler::onGetRecommendCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetRecommendCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::GetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:236 64 16 11 rsp_ptr:236";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onGetRecommendCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRecommendCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetRecommendCustomDungeonReq const>(
         (const std::shared_ptr<const proto::GetRecommendCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onGetRecommendCustomDungeonReq",
      236);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetRecommendCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRecommendCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetRecommendCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, -1);
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::getRecommendCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::GetRecommendCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::GetRecommendCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::GetRecommendCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::GetRecommendCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetRecommendCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::GetRecommendCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 248: range 0000000013100C2E-0000000013100F22
int32_t __cdecl CustomDungeonHandler::onServerGetRecommendCustomDungeonRsp(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 18 server_rsp_ptr:249 80 48 7 rsp:250";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onServerGetRecommendCustomDungeonRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetRecommendCustomDungeonRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerGetRecommendCustomDungeonRsp const>(
         (const std::shared_ptr<const proto::ServerGetRecommendCustomDungeonRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onServerGetRecommendCustomDungeonRsp",
      249);
    common::milog::MiLogStream::operator()(&v9, off_24F33760);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetRecommendCustomDungeonRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetRecommendCustomDungeonRsp::GetRecommendCustomDungeonRsp((proto::GetRecommendCustomDungeonRsp *const)(v2 + 80));
    proto::GetRecommendCustomDungeonRsp::set_retcode((proto::GetRecommendCustomDungeonRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::serverGetRecommendCustomDungeon(
      CustomDungeonComp,
      server_rsp,
      (proto::GetRecommendCustomDungeonRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::ServerGetRecommendCustomDungeonRsp::retcode(server_rsp);
    proto::GetRecommendCustomDungeonRsp::~GetRecommendCustomDungeonRsp((proto::GetRecommendCustomDungeonRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetRecommendCustomDungeonRsp> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 260: range 0000000013100F24-0000000013101218
int32_t __cdecl CustomDungeonHandler::onSearchCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SearchCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::SearchCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:261 64 16 11 rsp_ptr:261";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onSearchCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SearchCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SearchCustomDungeonReq const>(
         (const std::shared_ptr<const proto::SearchCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onSearchCustomDungeonReq",
      261);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SearchCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SearchCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SearchCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SearchCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SearchCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SearchCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::searchCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( proto::SearchCustomDungeonRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::SearchCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::SearchCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::SearchCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SearchCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::SearchCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 272: range 000000001310121A-00000000131014F6
int32_t __cdecl CustomDungeonHandler::onBackPlayCustomDungeonOfficialReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::BackPlayCustomDungeonOfficialReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::BackPlayCustomDungeonOfficialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:273 64 16 11 rsp_ptr:273";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onBackPlayCustomDungeonOfficialReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BackPlayCustomDungeonOfficialReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BackPlayCustomDungeonOfficialReq const>(
         (const std::shared_ptr<const proto::BackPlayCustomDungeonOfficialReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onBackPlayCustomDungeonOfficialReq",
      273);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::BackPlayCustomDungeonOfficialReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BackPlayCustomDungeonOfficialReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BackPlayCustomDungeonOfficialRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BackPlayCustomDungeonOfficialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BackPlayCustomDungeonOfficialRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::backPlayCustomDungeonOfficial(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::BackPlayCustomDungeonOfficialRsp::retcode(rsp_0);
    std::shared_ptr<proto::BackPlayCustomDungeonOfficialRsp>::~shared_ptr((std::shared_ptr<proto::BackPlayCustomDungeonOfficialRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BackPlayCustomDungeonOfficialReq const>::~shared_ptr((std::shared_ptr<const proto::BackPlayCustomDungeonOfficialReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 281: range 00000000131014F8-00000000131017D4
int32_t __cdecl CustomDungeonHandler::onReplayCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerCustomDungeonComp *CustomDungeonComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ReplayCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  std::__shared_ptr_access<proto::ReplayCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:282 64 16 11 rsp_ptr:282";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onReplayCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReplayCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReplayCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ReplayCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/custom_dungeon_handler.cpp",
      "onReplayCustomDungeonReq",
      282);
    common::milog::MiLogStream::operator()(&v10, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ReplayCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReplayCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReplayCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReplayCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReplayCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
    PlayerCustomDungeonComp::replayCustomDungeon(CustomDungeonComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, rsp_0);
    v5 = proto::ReplayCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ReplayCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ReplayCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReplayCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ReplayCustomDungeonReq> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 290: range 00000000131017D6-00000000131019A6
int32_t __cdecl CustomDungeonHandler::onOutStuckCustomDungeonReq(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerCustomDungeonComp *CustomDungeonComp; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 rsp:291";
  *(_QWORD *)(v2 + 16) = CustomDungeonHandler::onOutStuckCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::OutStuckCustomDungeonRsp::OutStuckCustomDungeonRsp((proto::OutStuckCustomDungeonRsp *const)(v2 + 32));
  proto::OutStuckCustomDungeonRsp::set_retcode((proto::OutStuckCustomDungeonRsp *const)(v2 + 32), -1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
  PlayerCustomDungeonComp::outStuckCustomDungeon(CustomDungeonComp, (proto::OutStuckCustomDungeonRsp *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  v6 = proto::OutStuckCustomDungeonRsp::retcode((const proto::OutStuckCustomDungeonRsp *const)(v2 + 32));
  proto::OutStuckCustomDungeonRsp::~OutStuckCustomDungeonRsp((proto::OutStuckCustomDungeonRsp *const)(v2 + 32));
  result = v6;
  if ( v8 == (char *)v2 )
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

// Line 300: range 00000000131019A8-0000000013101A00
int32_t __cdecl CustomDungeonHandler::onServerCustomDungeonFirstLikeNotify(
        CustomDungeonHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  PlayerCustomDungeonComp *CustomDungeonComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
  PlayerCustomDungeonComp::setIsEverLiked(CustomDungeonComp, 1);
  return 0;
};
