// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/scene_handler.cpp

// Line 61: range 00000000159D3760-00000000159D7B61
int32_t __cdecl SceneHandler::addPacketFuncToMap(SceneHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  SceneHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  SceneHandler **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  SceneHandler **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
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
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v27; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v30; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v33; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  SceneHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v39; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v42; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  SceneHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v48; // rax
  SceneHandler **v49; // r8
  const std::_Placeholder<1> *v50; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v51; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v52; // rax
  SceneHandler **v53; // r8
  const std::_Placeholder<1> *v54; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v55; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v56; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v57; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v58; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v59; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v60; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v62; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v63; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v65; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v66; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v67; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v68; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v69; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v70; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v71; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v72; // rax
  __m128i v73; // [rsp+0h] [rbp-100h] BYREF
  __m128i v74; // [rsp+10h] [rbp-F0h] BYREF
  __m128i v75; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v76; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v77; // [rsp+40h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+50h] [rbp-B0h]
  SceneHandler *thisa; // [rsp+58h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+6Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v81; // [rsp+70h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+78h] [rbp-88h] BYREF
  int (*__f[2])(SceneHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+80h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,const std::_Placeholder<1>&>::type v84; // [rsp+90h] [rbp-70h] BYREF
  common::milog::MiLogStream v85; // [rsp+B0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 208;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v81, &__y) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/scene_handler.cpp",
      "addPacketFuncToMap",
      63);
    common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 208LL);
    common::milog::MiLogStream::~MiLogStream(&v85);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __x = 208;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 235;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v81, &__y) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/scene_handler.cpp",
        "addPacketFuncToMap",
        64);
      common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 235LL);
      common::milog::MiLogStream::~MiLogStream(&v85);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(SceneHandler *, std::shared_ptr<common::minet::Packet>))SceneHandler::onSceneInitFinishReq;
      __f[1] = 0LL;
      std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
        &v84,
        __f,
        (SceneHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v4,
        v5);
      __x = 235;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
        v6,
        &v84);
      __x = 277;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v81, &__y) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/scene_handler.cpp",
          "addPacketFuncToMap",
          65);
        common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 277LL);
        common::milog::MiLogStream::~MiLogStream(&v85);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v73.m128i_i64[0] = (__int64)SceneHandler::onEnterSceneDoneReq;
        v73.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v73);
        std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
          &v84,
          __f,
          (SceneHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v7,
          v8);
        __x = 277;
        v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
          v9,
          &v84);
        __x = 3312;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v81, &__y) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/scene_handler.cpp",
            "addPacketFuncToMap",
            66);
          common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3312LL);
          common::milog::MiLogStream::~MiLogStream(&v85);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v74.m128i_i64[0] = (__int64)SceneHandler::onPostEnterSceneReq;
          v74.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v74);
          std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
            &v84,
            __f,
            (SceneHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v10,
            v11);
          __x = 3312;
          v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
            v12,
            &v84);
          __x = 225;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v81, &__y) )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/scene_handler.cpp",
              "addPacketFuncToMap",
              68);
            common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 225LL);
            common::milog::MiLogStream::~MiLogStream(&v85);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __x = 225;
            v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
              v13,
              (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 3035;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v81, &__y) )
            {
              common::milog::MiLogStream::create(
                &v85,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/scene_handler.cpp",
                "addPacketFuncToMap",
                69);
              common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3035LL);
              common::milog::MiLogStream::~MiLogStream(&v85);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __x = 3035;
              v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
                v14,
                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 228;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v81, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v85,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/scene_handler.cpp",
                  "addPacketFuncToMap",
                  70);
                common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 228LL);
                common::milog::MiLogStream::~MiLogStream(&v85);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __x = 228;
                v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                  v15,
                  (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 239;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v81, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v85,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/scene_handler.cpp",
                    "addPacketFuncToMap",
                    71);
                  common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 239LL);
                  common::milog::MiLogStream::~MiLogStream(&v85);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  __x = 239;
                  v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                    v16,
                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 264;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v81, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v85,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/scene_handler.cpp",
                      "addPacketFuncToMap",
                      72);
                    common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 264LL);
                    common::milog::MiLogStream::~MiLogStream(&v85);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    __x = 264;
                    v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                      v17,
                      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 241;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v81, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v85,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/scene_handler.cpp",
                        "addPacketFuncToMap",
                        73);
                      common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 241LL);
                      common::milog::MiLogStream::~MiLogStream(&v85);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      __x = 241;
                      v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                        v18,
                        (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 227;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v81, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v85,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/scene_handler.cpp",
                          "addPacketFuncToMap",
                          74);
                        common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 227LL);
                        common::milog::MiLogStream::~MiLogStream(&v85);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        __x = 227;
                        v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                          v19,
                          (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 263;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v81, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v85,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/scene_handler.cpp",
                            "addPacketFuncToMap",
                            75);
                          common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 263LL);
                          common::milog::MiLogStream::~MiLogStream(&v85);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          __x = 263;
                          v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                            v20,
                            (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 288;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v81, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v85,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/scene_handler.cpp",
                              "addPacketFuncToMap",
                              76);
                            common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 288LL);
                            common::milog::MiLogStream::~MiLogStream(&v85);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            __x = 288;
                            v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                              v21,
                              (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 299;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v81, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v85,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/scene_handler.cpp",
                                "addPacketFuncToMap",
                                77);
                              common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 299LL);
                              common::milog::MiLogStream::~MiLogStream(&v85);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              __x = 299;
                              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                                v22,
                                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 284;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v81, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v85,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/scene_handler.cpp",
                                  "addPacketFuncToMap",
                                  78);
                                common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 284LL);
                                common::milog::MiLogStream::~MiLogStream(&v85);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                __x = 284;
                                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                                  v23,
                                  (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 216;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v81, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v85,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/scene_handler.cpp",
                                    "addPacketFuncToMap",
                                    79);
                                  common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 216LL);
                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  __x = 216;
                                  v24 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                                    v24,
                                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 298;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v81, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v85,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/scene_handler.cpp",
                                      "addPacketFuncToMap",
                                      80);
                                    common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 298LL);
                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    __x = 298;
                                    v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                      v25,
                                      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 292;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v81, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v85,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/scene_handler.cpp",
                                        "addPacketFuncToMap",
                                        81);
                                      common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 292LL);
                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      __x = 292;
                                      v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                        v26,
                                        (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 297;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v81, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v85,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/scene_handler.cpp",
                                          "addPacketFuncToMap",
                                          82);
                                        common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 297LL);
                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        __x = 297;
                                        v27 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                          v27,
                                          (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 265;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v81, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v85,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/scene_handler.cpp",
                                            "addPacketFuncToMap",
                                            83);
                                          common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 265LL);
                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          __x = 265;
                                          v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                            v28,
                                            (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                          __x = 257;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v81, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v85,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/scene_handler.cpp",
                                              "addPacketFuncToMap",
                                              84);
                                            common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 257LL);
                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            __x = 257;
                                            v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                              v29,
                                              (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                            __x = 269;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v81, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v85,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/scene_handler.cpp",
                                                "addPacketFuncToMap",
                                                85);
                                              common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 269LL);
                                              common::milog::MiLogStream::~MiLogStream(&v85);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              __x = 269;
                                              v30 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}>(
                                                v30,
                                                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                              __x = 250;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v81, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v85,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/scene_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  86);
                                                common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 250LL);
                                                common::milog::MiLogStream::~MiLogStream(&v85);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                __x = 250;
                                                v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}>(
                                                  v31,
                                                  (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                __x = 291;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v81, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v85,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/scene_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    87);
                                                  common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 291LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  __x = 291;
                                                  v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}>(
                                                    v32,
                                                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                  __x = 286;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v81, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v85,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/scene_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      88);
                                                    common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 286LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    __x = 286;
                                                    v33 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}>(
                                                      v33,
                                                      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                    __x = 3110;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v81, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v85,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/scene_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        89);
                                                      common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3110LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      __x = 3110;
                                                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}>(
                                                        v34,
                                                        (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                      __x = 3466;
                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                      process_packet_func_mapa,
                                                                      &__x)._M_node;
                                                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                      if ( std::operator!=(&v81, &__y) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          &v85,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/handler/scene_handler.cpp",
                                                          "addPacketFuncToMap",
                                                          90);
                                                        common::milog::MiLogStream::operator()(
                                                          &v85,
                                                          off_258EBDA0,
                                                          3466LL);
                                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                                        return -1;
                                                      }
                                                      else
                                                      {
                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                        v75.m128i_i64[0] = (__int64)SceneHandler::onMarkMapReq;
                                                        v75.m128i_i64[1] = 0LL;
                                                        *(__m128i *)__f = _mm_load_si128(&v75);
                                                        std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
                                                          &v84,
                                                          __f,
                                                          (SceneHandler **)&__y,
                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                          v35,
                                                          v36);
                                                        __x = 3466;
                                                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                process_packet_func_mapa,
                                                                &__x);
                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
                                                          v37,
                                                          &v84);
                                                        __x = 244;
                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                        process_packet_func_mapa,
                                                                        &__x)._M_node;
                                                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                        if ( std::operator!=(&v81, &__y) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            &v85,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/handler/scene_handler.cpp",
                                                            "addPacketFuncToMap",
                                                            91);
                                                          common::milog::MiLogStream::operator()(
                                                            &v85,
                                                            off_258EBDA0,
                                                            244LL);
                                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                                          return -1;
                                                        }
                                                        else
                                                        {
                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                          __x = 244;
                                                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                  process_packet_func_mapa,
                                                                  &__x);
                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}>(
                                                            v38,
                                                            (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                          __x = 3019;
                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                          process_packet_func_mapa,
                                                                          &__x)._M_node;
                                                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                          if ( std::operator!=(&v81, &__y) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              &v85,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/handler/scene_handler.cpp",
                                                              "addPacketFuncToMap",
                                                              92);
                                                            common::milog::MiLogStream::operator()(
                                                              &v85,
                                                              off_258EBDA0,
                                                              3019LL);
                                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                                            return -1;
                                                          }
                                                          else
                                                          {
                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                            __x = 3019;
                                                            v39 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                    process_packet_func_mapa,
                                                                    &__x);
                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}>(
                                                              v39,
                                                              (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                            __x = 3345;
                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                            process_packet_func_mapa,
                                                                            &__x)._M_node;
                                                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                            if ( std::operator!=(&v81, &__y) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                &v85,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/handler/scene_handler.cpp",
                                                                "addPacketFuncToMap",
                                                                93);
                                                              common::milog::MiLogStream::operator()(
                                                                &v85,
                                                                off_258EBDA0,
                                                                3345LL);
                                                              common::milog::MiLogStream::~MiLogStream(&v85);
                                                              return -1;
                                                            }
                                                            else
                                                            {
                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                              __x = 3345;
                                                              v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                      process_packet_func_mapa,
                                                                      &__x);
                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}>(
                                                                v40,
                                                                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                              __x = 282;
                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                              process_packet_func_mapa,
                                                                              &__x)._M_node;
                                                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                              if ( std::operator!=(&v81, &__y) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  &v85,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/handler/scene_handler.cpp",
                                                                  "addPacketFuncToMap",
                                                                  94);
                                                                common::milog::MiLogStream::operator()(
                                                                  &v85,
                                                                  off_258EBDA0,
                                                                  282LL);
                                                                common::milog::MiLogStream::~MiLogStream(&v85);
                                                                return -1;
                                                              }
                                                              else
                                                              {
                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                __x = 282;
                                                                v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                        process_packet_func_mapa,
                                                                        &__x);
                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}>(
                                                                  v41,
                                                                  (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                __x = 205;
                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                process_packet_func_mapa,
                                                                                &__x)._M_node;
                                                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                if ( std::operator!=(&v81, &__y) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    &v85,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/handler/scene_handler.cpp",
                                                                    "addPacketFuncToMap",
                                                                    95);
                                                                  common::milog::MiLogStream::operator()(
                                                                    &v85,
                                                                    off_258EBDA0,
                                                                    205LL);
                                                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                                                  return -1;
                                                                }
                                                                else
                                                                {
                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                  __x = 205;
                                                                  v42 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                          process_packet_func_mapa,
                                                                          &__x);
                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}>(
                                                                    v42,
                                                                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                  __x = 262;
                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                  process_packet_func_mapa,
                                                                                  &__x)._M_node;
                                                                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                  if ( std::operator!=(&v81, &__y) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      &v85,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/handler/scene_handler.cpp",
                                                                      "addPacketFuncToMap",
                                                                      96);
                                                                    common::milog::MiLogStream::operator()(
                                                                      &v85,
                                                                      off_258EBDA0,
                                                                      262LL);
                                                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                                                    return -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                    __x = 262;
                                                                    v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                            process_packet_func_mapa,
                                                                            &__x);
                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}>(
                                                                      v43,
                                                                      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                    __x = 213;
                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                    process_packet_func_mapa,
                                                                                    &__x)._M_node;
                                                                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                    if ( std::operator!=(&v81, &__y) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        &v85,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/handler/scene_handler.cpp",
                                                                        "addPacketFuncToMap",
                                                                        97);
                                                                      common::milog::MiLogStream::operator()(
                                                                        &v85,
                                                                        off_258EBDA0,
                                                                        213LL);
                                                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                                                      return -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                      __x = 213;
                                                                      v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                              process_packet_func_mapa,
                                                                              &__x);
                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}>(
                                                                        v44,
                                                                        (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                      __x = 274;
                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                      process_packet_func_mapa,
                                                                                      &__x)._M_node;
                                                                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                      if ( std::operator!=(&v81, &__y) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          &v85,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/handler/scene_handler.cpp",
                                                                          "addPacketFuncToMap",
                                                                          98);
                                                                        common::milog::MiLogStream::operator()(
                                                                          &v85,
                                                                          off_258EBDA0,
                                                                          274LL);
                                                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                                                        return -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                        v76.m128i_i64[0] = (__int64)SceneHandler::onEntityForceSyncReq;
                                                                        v76.m128i_i64[1] = 0LL;
                                                                        *(__m128i *)__f = _mm_load_si128(&v76);
                                                                        std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
                                                                          &v84,
                                                                          __f,
                                                                          (SceneHandler **)&__y,
                                                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                          v45,
                                                                          v46);
                                                                        __x = 274;
                                                                        v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                process_packet_func_mapa,
                                                                                &__x);
                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
                                                                          v47,
                                                                          &v84);
                                                                        __x = 3178;
                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                        process_packet_func_mapa,
                                                                                        &__x)._M_node;
                                                                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                        if ( std::operator!=(&v81, &__y) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            &v85,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/handler/scene_handler.cpp",
                                                                            "addPacketFuncToMap",
                                                                            99);
                                                                          common::milog::MiLogStream::operator()(
                                                                            &v85,
                                                                            off_258EBDA0,
                                                                            3178LL);
                                                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                                                          return -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                          __x = 3178;
                                                                          v48 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                  process_packet_func_mapa,
                                                                                  &__x);
                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}>(
                                                                            v48,
                                                                            (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                          __x = 3185;
                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                          process_packet_func_mapa,
                                                                                          &__x)._M_node;
                                                                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                          if ( std::operator!=(&v81, &__y) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              &v85,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/handler/scene_handler.cpp",
                                                                              "addPacketFuncToMap",
                                                                              100);
                                                                            common::milog::MiLogStream::operator()(
                                                                              &v85,
                                                                              off_258EBDA0,
                                                                              3185LL);
                                                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                                                            return -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                            v77.m128i_i64[0] = (__int64)SceneHandler::onPlayerChatReq;
                                                                            v77.m128i_i64[1] = 0LL;
                                                                            *(__m128i *)__f = _mm_load_si128(&v77);
                                                                            std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
                                                                              &v84,
                                                                              __f,
                                                                              (SceneHandler **)&__y,
                                                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                              v49,
                                                                              v50);
                                                                            __x = 3185;
                                                                            v51 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                    process_packet_func_mapa,
                                                                                    &__x);
                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
                                                                              v51,
                                                                              &v84);
                                                                            __x = 3165;
                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                            process_packet_func_mapa,
                                                                                            &__x)._M_node;
                                                                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                            if ( std::operator!=(&v81, &__y) )
                                                                            {
                                                                              common::milog::MiLogStream::create(
                                                                                &v85,
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/handler/scene_handler.cpp",
                                                                                "addPacketFuncToMap",
                                                                                101);
                                                                              common::milog::MiLogStream::operator()(
                                                                                &v85,
                                                                                off_258EBDA0,
                                                                                3165LL);
                                                                              common::milog::MiLogStream::~MiLogStream(&v85);
                                                                              return -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                              __x = 3165;
                                                                              v52 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                      process_packet_func_mapa,
                                                                                      &__x);
                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#32}>(
                                                                                v52,
                                                                                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                              __x = 3146;
                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                              process_packet_func_mapa,
                                                                                              &__x)._M_node;
                                                                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                              if ( std::operator!=(&v81, &__y) )
                                                                              {
                                                                                common::milog::MiLogStream::create(
                                                                                  &v85,
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  4u,
                                                                                  "./src/handler/scene_handler.cpp",
                                                                                  "addPacketFuncToMap",
                                                                                  102);
                                                                                common::milog::MiLogStream::operator()(
                                                                                  &v85,
                                                                                  off_258EBDA0,
                                                                                  3146LL);
                                                                                common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                return -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                __f[0] = (int (*)(SceneHandler *, std::shared_ptr<common::minet::Packet>))SceneHandler::onSetEntityClientDataNotify;
                                                                                __f[1] = 0LL;
                                                                                std::bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>),SceneHandler*,std::_Placeholder<1> const&>(
                                                                                  &v84,
                                                                                  __f,
                                                                                  (SceneHandler **)&__y,
                                                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                                                  v53,
                                                                                  v54);
                                                                                __x = 3146;
                                                                                v55 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                        process_packet_func_mapa,
                                                                                        &__x);
                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (SceneHandler::*)(std::shared_ptr<common::minet::Packet>) ()(SceneHandler*,std::_Placeholder<1>)>>(
                                                                                  v55,
                                                                                  &v84);
                                                                                __x = 3039;
                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                process_packet_func_mapa,
                                                                                                &__x)._M_node;
                                                                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                if ( std::operator!=(&v81, &__y) )
                                                                                {
                                                                                  common::milog::MiLogStream::create(
                                                                                    &v85,
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/handler/scene_handler.cpp",
                                                                                    "addPacketFuncToMap",
                                                                                    103);
                                                                                  common::milog::MiLogStream::operator()(
                                                                                    &v85,
                                                                                    off_258EBDA0,
                                                                                    3039LL);
                                                                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                  return -1;
                                                                                }
                                                                                else
                                                                                {
                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                  __x = 3039;
                                                                                  v56 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                          process_packet_func_mapa,
                                                                                          &__x);
                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#33}>(
                                                                                    v56,
                                                                                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                  __x = 3189;
                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                  process_packet_func_mapa,
                                                                                                  &__x)._M_node;
                                                                                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                  if ( std::operator!=(&v81, &__y) )
                                                                                  {
                                                                                    common::milog::MiLogStream::create(
                                                                                      &v85,
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/handler/scene_handler.cpp",
                                                                                      "addPacketFuncToMap",
                                                                                      104);
                                                                                    common::milog::MiLogStream::operator()(
                                                                                      &v85,
                                                                                      off_258EBDA0,
                                                                                      3189LL);
                                                                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                    return -1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                    __x = 3189;
                                                                                    v57 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                            process_packet_func_mapa,
                                                                                            &__x);
                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#34}>(
                                                                                      v57,
                                                                                      (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                    __x = 3006;
                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                                                    process_packet_func_mapa,
                                                                                                    &__x)._M_node;
                                                                                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                    if ( std::operator!=(&v81, &__y) )
                                                                                    {
                                                                                      common::milog::MiLogStream::create(
                                                                                        &v85,
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/handler/scene_handler.cpp",
                                                                                        "addPacketFuncToMap",
                                                                                        105);
                                                                                      common::milog::MiLogStream::operator()(
                                                                                        &v85,
                                                                                        off_258EBDA0,
                                                                                        3006LL);
                                                                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                      return -1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                      __x = 3006;
                                                                                      v58 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                              process_packet_func_mapa,
                                                                                              &__x);
                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#35}>(
                                                                                        v58,
                                                                                        (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                      __x = 3463;
                                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                      if ( std::operator!=(&v81, &__y) )
                                                                                      {
                                                                                        common::milog::MiLogStream::create(
                                                                                          &v85,
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          4u,
                                                                                          "./src/handler/scene_handler.cpp",
                                                                                          "addPacketFuncToMap",
                                                                                          106);
                                                                                        common::milog::MiLogStream::operator()(
                                                                                          &v85,
                                                                                          off_258EBDA0,
                                                                                          3463LL);
                                                                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                        return -1;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                        __x = 3463;
                                                                                        v59 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                process_packet_func_mapa,
                                                                                                &__x);
                                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#36}>(
                                                                                          v59,
                                                                                          (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                        __x = 3066;
                                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                        if ( std::operator!=(&v81, &__y) )
                                                                                        {
                                                                                          common::milog::MiLogStream::create(
                                                                                            &v85,
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            4u,
                                                                                            "./src/handler/scene_handler.cpp",
                                                                                            "addPacketFuncToMap",
                                                                                            107);
                                                                                          common::milog::MiLogStream::operator()(
                                                                                            &v85,
                                                                                            off_258EBDA0,
                                                                                            3066LL);
                                                                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                          return -1;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                          __x = 3066;
                                                                                          v60 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                  process_packet_func_mapa,
                                                                                                  &__x);
                                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#37}>(
                                                                                            v60,
                                                                                            (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                          __x = 3391;
                                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                          if ( std::operator!=(
                                                                                                 &v81,
                                                                                                 &__y) )
                                                                                          {
                                                                                            common::milog::MiLogStream::create(
                                                                                              &v85,
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              4u,
                                                                                              "./src/handler/scene_handler.cpp",
                                                                                              "addPacketFuncToMap",
                                                                                              108);
                                                                                            common::milog::MiLogStream::operator()(
                                                                                              &v85,
                                                                                              off_258EBDA0,
                                                                                              3391LL);
                                                                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                            return -1;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                            __x = 3391;
                                                                                            v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                                                                    process_packet_func_mapa,
                                                                                                    &__x);
                                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#38}>(
                                                                                              v61,
                                                                                              (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                            __x = 3145;
                                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                            if ( std::operator!=(
                                                                                                   &v81,
                                                                                                   &__y) )
                                                                                            {
                                                                                              common::milog::MiLogStream::create(
                                                                                                &v85,
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                4u,
                                                                                                "./src/handler/scene_handler.cpp",
                                                                                                "addPacketFuncToMap",
                                                                                                109);
                                                                                              common::milog::MiLogStream::operator()(
                                                                                                &v85,
                                                                                                off_258EBDA0,
                                                                                                3145LL);
                                                                                              common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                              return -1;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                              __x = 3145;
                                                                                              v62 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#39}>(
                                                                                                v62,
                                                                                                (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                              __x = 5503;
                                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                              if ( std::operator!=(
                                                                                                     &v81,
                                                                                                     &__y) )
                                                                                              {
                                                                                                common::milog::MiLogStream::create(
                                                                                                  &v85,
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  4u,
                                                                                                  "./src/handler/scene_handler.cpp",
                                                                                                  "addPacketFuncToMap",
                                                                                                  110);
                                                                                                common::milog::MiLogStream::operator()(
                                                                                                  &v85,
                                                                                                  off_258EBDA0,
                                                                                                  5503LL);
                                                                                                common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                return -1;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                __x = 5503;
                                                                                                v63 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#40}>(
                                                                                                  v63,
                                                                                                  (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                __x = 3166;
                                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                if ( std::operator!=(&v81, &__y) )
                                                                                                {
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    &v85,
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    4u,
                                                                                                    "./src/handler/scene_handler.cpp",
                                                                                                    "addPacketFuncToMap",
                                                                                                    111);
                                                                                                  common::milog::MiLogStream::operator()(
                                                                                                    &v85,
                                                                                                    off_258EBDA0,
                                                                                                    3166LL);
                                                                                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                  return -1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                  __x = 3166;
                                                                                                  v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#41}>(
                                                                                                    v64,
                                                                                                    (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                  __x = 5548;
                                                                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                  v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                  if ( std::operator!=(&v81, &__y) )
                                                                                                  {
                                                                                                    common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 112);
                                                                                                    common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 5548LL);
                                                                                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                    return -1;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                    __x = 5548;
                                                                                                    v65 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#42}>(v65, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                    __x = 3419;
                                                                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                    v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                    if ( std::operator!=(&v81, &__y) )
                                                                                                    {
                                                                                                      common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 113);
                                                                                                      common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3419LL);
                                                                                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                      return -1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                      __x = 3419;
                                                                                                      v66 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#43}>(v66, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                      __x = 3487;
                                                                                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                      v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                      if ( std::operator!=(&v81, &__y) )
                                                                                                      {
                                                                                                        common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 114);
                                                                                                        common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3487LL);
                                                                                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                        return -1;
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                        __x = 3487;
                                                                                                        v67 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#44}>(v67, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                        __x = 3108;
                                                                                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                        v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                        if ( std::operator!=(&v81, &__y) )
                                                                                                        {
                                                                                                          common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 115);
                                                                                                          common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3108LL);
                                                                                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                          return -1;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                          __x = 3108;
                                                                                                          v68 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#45}>(v68, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                          __x = 5593;
                                                                                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                          v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                          if ( std::operator!=(&v81, &__y) )
                                                                                                          {
                                                                                                            common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 116);
                                                                                                            common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 5593LL);
                                                                                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                            return -1;
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                            __x = 5593;
                                                                                                            v69 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#46}>(v69, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                            __x = 3113;
                                                                                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                            v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                            if ( std::operator!=(&v81, &__y) )
                                                                                                            {
                                                                                                              common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 117);
                                                                                                              common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3113LL);
                                                                                                              common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                              return -1;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                              __x = 3113;
                                                                                                              v70 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#47}>(v70, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                              __x = 3475;
                                                                                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                              v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                              if ( std::operator!=(&v81, &__y) )
                                                                                                              {
                                                                                                                common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 118);
                                                                                                                common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3475LL);
                                                                                                                common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                                return -1;
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                __x = 3475;
                                                                                                                v71 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#48}>(v71, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                                                                                __x = 3259;
                                                                                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(process_packet_func_mapa, &__x)._M_node;
                                                                                                                v81._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                                                                                if ( std::operator!=(&v81, &__y) )
                                                                                                                {
                                                                                                                  common::milog::MiLogStream::create(&v85, &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/handler/scene_handler.cpp", "addPacketFuncToMap", 119);
                                                                                                                  common::milog::MiLogStream::operator()(&v85, off_258EBDA0, 3259LL);
                                                                                                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                                                                                                  return -1;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                                                                                  __x = 3259;
                                                                                                                  v72 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](process_packet_func_mapa, &__x);
                                                                                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#49}>(v72, (SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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
};

// Line 63: range 00000000159CB108-00000000159CB424
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::EnterSceneReadyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::EnterSceneReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::EnterSceneReadyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterSceneReadyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterSceneReadyReq const>(
         (const std::shared_ptr<const proto::EnterSceneReadyReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      63);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::EnterSceneReadyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterSceneReadyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterSceneReadyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterSceneReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterSceneReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterSceneReadyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::EnterSceneReadyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterSceneReadyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onEnterSceneReadyReq(this, v8, rsp_0);
    proto::EnterSceneReadyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::EnterSceneReadyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::EnterSceneReadyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::EnterSceneReadyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::EnterSceneReadyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::EnterSceneReadyRsp>::~shared_ptr((std::shared_ptr<proto::EnterSceneReadyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterSceneReadyReq const>::~shared_ptr((std::shared_ptr<const proto::EnterSceneReadyReq> *const)(v2 + 32));
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

// Line 68: range 00000000159CB426-00000000159CB742
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::WorldPlayerReviveReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WorldPlayerReviveRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WorldPlayerReviveRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WorldPlayerReviveReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WorldPlayerReviveReq const>(
         (const std::shared_ptr<const proto::WorldPlayerReviveReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      68);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WorldPlayerReviveReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WorldPlayerReviveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WorldPlayerReviveRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WorldPlayerReviveRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WorldPlayerReviveRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WorldPlayerReviveRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WorldPlayerReviveReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WorldPlayerReviveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onWorldPlayerReviveReq(this, v8, rsp_0);
    proto::WorldPlayerReviveRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WorldPlayerReviveRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WorldPlayerReviveRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WorldPlayerReviveRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WorldPlayerReviveRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WorldPlayerReviveRsp>::~shared_ptr((std::shared_ptr<proto::WorldPlayerReviveRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WorldPlayerReviveReq const>::~shared_ptr((std::shared_ptr<const proto::WorldPlayerReviveReq> *const)(v2 + 32));
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

// Line 69: range 00000000159CB744-00000000159CBA60
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::UnlockTransPointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UnlockTransPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UnlockTransPointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnlockTransPointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UnlockTransPointReq const>(
         (const std::shared_ptr<const proto::UnlockTransPointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      69);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UnlockTransPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockTransPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UnlockTransPointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UnlockTransPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UnlockTransPointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UnlockTransPointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UnlockTransPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockTransPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onUnlockTransPointReq(this, v8, rsp_0);
    proto::UnlockTransPointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UnlockTransPointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UnlockTransPointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UnlockTransPointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UnlockTransPointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UnlockTransPointRsp>::~shared_ptr((std::shared_ptr<proto::UnlockTransPointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UnlockTransPointReq const>::~shared_ptr((std::shared_ptr<const proto::UnlockTransPointReq> *const)(v2 + 32));
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

// Line 70: range 00000000159CBA62-00000000159CBD7E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SeeMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SeeMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SeeMonsterRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:70 64 16 10 rsp_ptr:70";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SeeMonsterReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SeeMonsterReq const>((const std::shared_ptr<const proto::SeeMonsterReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      70);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SeeMonsterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SeeMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SeeMonsterRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SeeMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SeeMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SeeMonsterRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SeeMonsterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SeeMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSeeMonsterReq(this, v8, rsp_0);
    proto::SeeMonsterRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SeeMonsterRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SeeMonsterRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SeeMonsterRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SeeMonsterRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SeeMonsterRsp>::~shared_ptr((std::shared_ptr<proto::SeeMonsterRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SeeMonsterReq const>::~shared_ptr((std::shared_ptr<const proto::SeeMonsterReq> *const)(v2 + 32));
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

// Line 71: range 00000000159CBD80-00000000159CC09C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneTransToPointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneTransToPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneTransToPointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:71 64 16 10 rsp_ptr:71";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneTransToPointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneTransToPointReq const>(
         (const std::shared_ptr<const proto::SceneTransToPointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      71);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneTransToPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneTransToPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneTransToPointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneTransToPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneTransToPointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneTransToPointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneTransToPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneTransToPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneTransToPointReq(this, v8, rsp_0);
    proto::SceneTransToPointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneTransToPointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneTransToPointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneTransToPointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneTransToPointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneTransToPointRsp>::~shared_ptr((std::shared_ptr<proto::SceneTransToPointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneTransToPointReq const>::~shared_ptr((std::shared_ptr<const proto::SceneTransToPointReq> *const)(v2 + 32));
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

// Line 72: range 00000000159CC09E-00000000159CC3BA
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneKickPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneKickPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneKickPlayerRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneKickPlayerReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneKickPlayerReq const>(
         (const std::shared_ptr<const proto::SceneKickPlayerReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      72);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneKickPlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneKickPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneKickPlayerRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneKickPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneKickPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneKickPlayerRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneKickPlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneKickPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneKickPlayerReq(this, v8, rsp_0);
    proto::SceneKickPlayerRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneKickPlayerRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneKickPlayerRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneKickPlayerRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneKickPlayerRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneKickPlayerRsp>::~shared_ptr((std::shared_ptr<proto::SceneKickPlayerRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneKickPlayerReq const>::~shared_ptr((std::shared_ptr<const proto::SceneKickPlayerReq> *const)(v2 + 32));
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

// Line 73: range 00000000159CC3BC-00000000159CC6D8
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAreaExplorePointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAreaExplorePointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAreaExplorePointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAreaExplorePointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAreaExplorePointReq const>(
         (const std::shared_ptr<const proto::GetAreaExplorePointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      73);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAreaExplorePointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAreaExplorePointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAreaExplorePointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAreaExplorePointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAreaExplorePointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAreaExplorePointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAreaExplorePointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAreaExplorePointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetAreaExplorePointReq(this, v8, rsp_0);
    proto::GetAreaExplorePointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAreaExplorePointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAreaExplorePointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAreaExplorePointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAreaExplorePointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAreaExplorePointRsp>::~shared_ptr((std::shared_ptr<proto::GetAreaExplorePointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAreaExplorePointReq const>::~shared_ptr((std::shared_ptr<const proto::GetAreaExplorePointReq> *const)(v2 + 32));
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

// Line 74: range 00000000159CC6DA-00000000159CC9F6
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneEntityDrownReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneEntityDrownRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneEntityDrownRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneEntityDrownReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneEntityDrownReq const>(
         (const std::shared_ptr<const proto::SceneEntityDrownReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      74);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneEntityDrownReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneEntityDrownReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneEntityDrownRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneEntityDrownRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneEntityDrownRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneEntityDrownRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneEntityDrownReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneEntityDrownReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneEntityDrownReq(this, v8, rsp_0);
    proto::SceneEntityDrownRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneEntityDrownRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneEntityDrownRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneEntityDrownRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneEntityDrownRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneEntityDrownRsp>::~shared_ptr((std::shared_ptr<proto::SceneEntityDrownRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneEntityDrownReq const>::~shared_ptr((std::shared_ptr<const proto::SceneEntityDrownReq> *const)(v2 + 32));
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

// Line 75: range 00000000159CC9F8-00000000159CCD14
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneDestroyEntityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneDestroyEntityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneDestroyEntityReq const>(
         (const std::shared_ptr<const proto::SceneDestroyEntityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      75);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneDestroyEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneDestroyEntityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneDestroyEntityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneDestroyEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneDestroyEntityReq(this, v8, rsp_0);
    proto::SceneDestroyEntityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneDestroyEntityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneDestroyEntityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneDestroyEntityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneDestroyEntityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneDestroyEntityRsp>::~shared_ptr((std::shared_ptr<proto::SceneDestroyEntityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneDestroyEntityReq const>::~shared_ptr((std::shared_ptr<const proto::SceneDestroyEntityReq> *const)(v2 + 32));
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

// Line 76: range 00000000159CCD16-00000000159CD032
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneCreateEntityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneCreateEntityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneCreateEntityReq const>(
         (const std::shared_ptr<const proto::SceneCreateEntityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      76);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneCreateEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneCreateEntityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneCreateEntityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneCreateEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneCreateEntityReq(this, v8, rsp_0);
    proto::SceneCreateEntityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneCreateEntityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneCreateEntityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneCreateEntityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneCreateEntityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneCreateEntityRsp>::~shared_ptr((std::shared_ptr<proto::SceneCreateEntityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneCreateEntityReq const>::~shared_ptr((std::shared_ptr<const proto::SceneCreateEntityReq> *const)(v2 + 32));
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

// Line 77: range 00000000159CD034-00000000159CD350
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneAvatarStaminaStepReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneAvatarStaminaStepRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneAvatarStaminaStepRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneAvatarStaminaStepReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneAvatarStaminaStepReq const>(
         (const std::shared_ptr<const proto::SceneAvatarStaminaStepReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      77);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneAvatarStaminaStepReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneAvatarStaminaStepReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneAvatarStaminaStepRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneAvatarStaminaStepRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneAvatarStaminaStepRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneAvatarStaminaStepRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneAvatarStaminaStepReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneAvatarStaminaStepReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneAvatarStaminaStepReq(this, v8, rsp_0);
    proto::SceneAvatarStaminaStepRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneAvatarStaminaStepRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneAvatarStaminaStepRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneAvatarStaminaStepRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneAvatarStaminaStepRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneAvatarStaminaStepRsp>::~shared_ptr((std::shared_ptr<proto::SceneAvatarStaminaStepRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneAvatarStaminaStepReq const>::~shared_ptr((std::shared_ptr<const proto::SceneAvatarStaminaStepReq> *const)(v2 + 32));
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

// Line 78: range 00000000159CD352-00000000159CD66E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::PersonalSceneJumpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PersonalSceneJumpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PersonalSceneJumpRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PersonalSceneJumpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PersonalSceneJumpReq const>(
         (const std::shared_ptr<const proto::PersonalSceneJumpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      78);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PersonalSceneJumpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersonalSceneJumpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PersonalSceneJumpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PersonalSceneJumpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PersonalSceneJumpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PersonalSceneJumpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PersonalSceneJumpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersonalSceneJumpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onPersonalSceneJumpReq(this, v8, rsp_0);
    proto::PersonalSceneJumpRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PersonalSceneJumpRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PersonalSceneJumpRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PersonalSceneJumpRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PersonalSceneJumpRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PersonalSceneJumpRsp>::~shared_ptr((std::shared_ptr<proto::PersonalSceneJumpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PersonalSceneJumpReq const>::~shared_ptr((std::shared_ptr<const proto::PersonalSceneJumpReq> *const)(v2 + 32));
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

// Line 79: range 00000000159CD670-00000000159CD98C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::LevelupCityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::LevelupCityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::LevelupCityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::LevelupCityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::LevelupCityReq const>(
         (const std::shared_ptr<const proto::LevelupCityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      79);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::LevelupCityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LevelupCityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::LevelupCityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::LevelupCityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::LevelupCityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::LevelupCityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::LevelupCityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LevelupCityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onLevelupCityReq(this, v8, rsp_0);
    proto::LevelupCityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::LevelupCityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::LevelupCityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::LevelupCityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::LevelupCityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::LevelupCityRsp>::~shared_ptr((std::shared_ptr<proto::LevelupCityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::LevelupCityReq const>::~shared_ptr((std::shared_ptr<const proto::LevelupCityReq> *const)(v2 + 32));
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

// Line 80: range 00000000159CD98E-00000000159CDCAA
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::LeaveSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::LeaveSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::LeaveSceneRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::LeaveSceneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::LeaveSceneReq const>((const std::shared_ptr<const proto::LeaveSceneReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      80);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::LeaveSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LeaveSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::LeaveSceneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::LeaveSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::LeaveSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::LeaveSceneRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::LeaveSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LeaveSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onLeaveSceneReq(this, v8, rsp_0);
    proto::LeaveSceneRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::LeaveSceneRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::LeaveSceneRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::LeaveSceneRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::LeaveSceneRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::LeaveSceneRsp>::~shared_ptr((std::shared_ptr<proto::LeaveSceneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::LeaveSceneReq const>::~shared_ptr((std::shared_ptr<const proto::LeaveSceneReq> *const)(v2 + 32));
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

// Line 81: range 00000000159CDCAC-00000000159CDFC8
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::JoinPlayerSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::JoinPlayerSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::JoinPlayerSceneRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::JoinPlayerSceneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::JoinPlayerSceneReq const>(
         (const std::shared_ptr<const proto::JoinPlayerSceneReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      81);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::JoinPlayerSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::JoinPlayerSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::JoinPlayerSceneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::JoinPlayerSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::JoinPlayerSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::JoinPlayerSceneRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::JoinPlayerSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::JoinPlayerSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onJoinPlayerSceneReq(this, v8, rsp_0);
    proto::JoinPlayerSceneRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::JoinPlayerSceneRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::JoinPlayerSceneRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::JoinPlayerSceneRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::JoinPlayerSceneRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::JoinPlayerSceneRsp>::~shared_ptr((std::shared_ptr<proto::JoinPlayerSceneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::JoinPlayerSceneReq const>::~shared_ptr((std::shared_ptr<const proto::JoinPlayerSceneReq> *const)(v2 + 32));
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

// Line 82: range 00000000159CDFCA-00000000159CE2E6
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetScenePointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetScenePointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetScenePointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetScenePointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetScenePointReq const>(
         (const std::shared_ptr<const proto::GetScenePointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      82);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetScenePointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetScenePointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetScenePointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetScenePointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetScenePointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetScenePointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetScenePointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetScenePointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetScenePointReq(this, v8, rsp_0);
    proto::GetScenePointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetScenePointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetScenePointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetScenePointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetScenePointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetScenePointRsp>::~shared_ptr((std::shared_ptr<proto::GetScenePointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetScenePointReq const>::~shared_ptr((std::shared_ptr<const proto::GetScenePointReq> *const)(v2 + 32));
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

// Line 83: range 00000000159CE2E8-00000000159CE604
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetSceneAreaReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetSceneAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetSceneAreaRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetSceneAreaReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetSceneAreaReq const>(
         (const std::shared_ptr<const proto::GetSceneAreaReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      83);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetSceneAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSceneAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetSceneAreaRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetSceneAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetSceneAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetSceneAreaRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetSceneAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSceneAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetSceneAreaReq(this, v8, rsp_0);
    proto::GetSceneAreaRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetSceneAreaRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetSceneAreaRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetSceneAreaRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetSceneAreaRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetSceneAreaRsp>::~shared_ptr((std::shared_ptr<proto::GetSceneAreaRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetSceneAreaReq const>::~shared_ptr((std::shared_ptr<const proto::GetSceneAreaReq> *const)(v2 + 32));
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

// Line 84: range 00000000159CE606-00000000159CE922
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ExecuteGroupTriggerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ExecuteGroupTriggerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ExecuteGroupTriggerRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ExecuteGroupTriggerReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ExecuteGroupTriggerReq const>(
         (const std::shared_ptr<const proto::ExecuteGroupTriggerReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      84);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ExecuteGroupTriggerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExecuteGroupTriggerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ExecuteGroupTriggerRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ExecuteGroupTriggerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ExecuteGroupTriggerRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ExecuteGroupTriggerRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ExecuteGroupTriggerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExecuteGroupTriggerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onExecuteGroupTriggerReq(this, v8, rsp_0);
    proto::ExecuteGroupTriggerRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ExecuteGroupTriggerRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ExecuteGroupTriggerRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ExecuteGroupTriggerRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ExecuteGroupTriggerRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ExecuteGroupTriggerRsp>::~shared_ptr((std::shared_ptr<proto::ExecuteGroupTriggerRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ExecuteGroupTriggerReq const>::~shared_ptr((std::shared_ptr<const proto::ExecuteGroupTriggerReq> *const)(v2 + 32));
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

// Line 85: range 00000000159CE924-00000000159CEC40
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ExecuteGadgetLuaReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ExecuteGadgetLuaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ExecuteGadgetLuaRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ExecuteGadgetLuaReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ExecuteGadgetLuaReq const>(
         (const std::shared_ptr<const proto::ExecuteGadgetLuaReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      85);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ExecuteGadgetLuaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExecuteGadgetLuaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ExecuteGadgetLuaRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ExecuteGadgetLuaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ExecuteGadgetLuaRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ExecuteGadgetLuaRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ExecuteGadgetLuaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExecuteGadgetLuaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onExecuteGadgetLuaReq(this, v8, rsp_0);
    proto::ExecuteGadgetLuaRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ExecuteGadgetLuaRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ExecuteGadgetLuaRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ExecuteGadgetLuaRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ExecuteGadgetLuaRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ExecuteGadgetLuaRsp>::~shared_ptr((std::shared_ptr<proto::ExecuteGadgetLuaRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ExecuteGadgetLuaReq const>::~shared_ptr((std::shared_ptr<const proto::ExecuteGadgetLuaReq> *const)(v2 + 32));
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

// Line 86: range 00000000159CEC42-00000000159CEF5E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::EnterWorldAreaReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::EnterWorldAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::EnterWorldAreaRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterWorldAreaReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterWorldAreaReq const>(
         (const std::shared_ptr<const proto::EnterWorldAreaReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      86);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::EnterWorldAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterWorldAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterWorldAreaRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterWorldAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterWorldAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterWorldAreaRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::EnterWorldAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterWorldAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onEnterWorldAreaReq(this, v8, rsp_0);
    proto::EnterWorldAreaRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::EnterWorldAreaRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::EnterWorldAreaRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::EnterWorldAreaRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::EnterWorldAreaRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::EnterWorldAreaRsp>::~shared_ptr((std::shared_ptr<proto::EnterWorldAreaRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterWorldAreaReq const>::~shared_ptr((std::shared_ptr<const proto::EnterWorldAreaReq> *const)(v2 + 32));
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

// Line 87: range 00000000159CEF60-00000000159CF27C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ClientTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ClientTransmitRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientTransmitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientTransmitReq const>(
         (const std::shared_ptr<const proto::ClientTransmitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      87);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ClientTransmitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ClientTransmitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ClientTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ClientTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ClientTransmitRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ClientTransmitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onClientTransmitReq(this, v8, rsp_0);
    proto::ClientTransmitRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ClientTransmitRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ClientTransmitRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ClientTransmitRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ClientTransmitRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ClientTransmitRsp>::~shared_ptr((std::shared_ptr<proto::ClientTransmitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ClientTransmitReq const>::~shared_ptr((std::shared_ptr<const proto::ClientTransmitReq> *const)(v2 + 32));
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

// Line 88: range 00000000159CF27E-00000000159CF59A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::BackMyWorldReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BackMyWorldRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BackMyWorldRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BackMyWorldReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BackMyWorldReq const>(
         (const std::shared_ptr<const proto::BackMyWorldReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      88);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BackMyWorldReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BackMyWorldReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BackMyWorldRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BackMyWorldRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BackMyWorldRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BackMyWorldRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BackMyWorldReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BackMyWorldReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onBackMyWorldReq(this, v8, rsp_0);
    proto::BackMyWorldRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BackMyWorldRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BackMyWorldRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BackMyWorldRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BackMyWorldRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BackMyWorldRsp>::~shared_ptr((std::shared_ptr<proto::BackMyWorldRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BackMyWorldReq const>::~shared_ptr((std::shared_ptr<const proto::BackMyWorldReq> *const)(v2 + 32));
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

// Line 89: range 00000000159CF59C-00000000159CF8B8
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneWeatherForcastReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SceneWeatherForcastRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SceneWeatherForcastRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#23}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneWeatherForcastReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneWeatherForcastReq const>(
         (const std::shared_ptr<const proto::SceneWeatherForcastReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      89);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SceneWeatherForcastReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneWeatherForcastReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneWeatherForcastRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneWeatherForcastRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneWeatherForcastRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneWeatherForcastRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SceneWeatherForcastReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneWeatherForcastReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onSceneWeatherForcastReq(this, v8, rsp_0);
    proto::SceneWeatherForcastRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SceneWeatherForcastRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SceneWeatherForcastRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SceneWeatherForcastRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SceneWeatherForcastRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SceneWeatherForcastRsp>::~shared_ptr((std::shared_ptr<proto::SceneWeatherForcastRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneWeatherForcastReq const>::~shared_ptr((std::shared_ptr<const proto::SceneWeatherForcastReq> *const)(v2 + 32));
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

// Line 91: range 00000000159CF8BA-00000000159CFA9C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::HitClientTrivialNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:91";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#24}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::HitClientTrivialNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::HitClientTrivialNotify const>(
         (const std::shared_ptr<const proto::HitClientTrivialNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      91);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::HitClientTrivialNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::HitClientTrivialNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onHitClientTrivialNotify(this, v7);
  }
  std::shared_ptr<proto::HitClientTrivialNotify const>::~shared_ptr((std::shared_ptr<const proto::HitClientTrivialNotify> *const)(v2 + 32));
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

// Line 92: range 00000000159CFA9E-00000000159CFC80
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::HitTreeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:92";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#25}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::HitTreeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::HitTreeNotify const>((const std::shared_ptr<const proto::HitTreeNotify> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      92);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::HitTreeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::HitTreeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onHitTreeNotify(this, v7);
  }
  std::shared_ptr<proto::HitTreeNotify const>::~shared_ptr((std::shared_ptr<const proto::HitTreeNotify> *const)(v2 + 32));
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

// Line 93: range 00000000159CFC82-00000000159CFF9E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::WidgetQuickHitTreeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WidgetQuickHitTreeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WidgetQuickHitTreeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#26}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WidgetQuickHitTreeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WidgetQuickHitTreeReq const>(
         (const std::shared_ptr<const proto::WidgetQuickHitTreeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      93);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WidgetQuickHitTreeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetQuickHitTreeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WidgetQuickHitTreeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WidgetQuickHitTreeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WidgetQuickHitTreeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WidgetQuickHitTreeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WidgetQuickHitTreeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetQuickHitTreeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onWidgetQuickHitTreeReq(this, v8, rsp_0);
    proto::WidgetQuickHitTreeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WidgetQuickHitTreeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WidgetQuickHitTreeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WidgetQuickHitTreeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WidgetQuickHitTreeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WidgetQuickHitTreeRsp>::~shared_ptr((std::shared_ptr<proto::WidgetQuickHitTreeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WidgetQuickHitTreeReq const>::~shared_ptr((std::shared_ptr<const proto::WidgetQuickHitTreeReq> *const)(v2 + 32));
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

// Line 94: range 00000000159CFFA0-00000000159D0182
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ExitTransPointRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:94";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#27}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ExitTransPointRegionNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ExitTransPointRegionNotify const>(
         (const std::shared_ptr<const proto::ExitTransPointRegionNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      94);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ExitTransPointRegionNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExitTransPointRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onExitTransPointRegionNotify(this, v7);
  }
  std::shared_ptr<proto::ExitTransPointRegionNotify const>::~shared_ptr((std::shared_ptr<const proto::ExitTransPointRegionNotify> *const)(v2 + 32));
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

// Line 95: range 00000000159D0184-00000000159D0366
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::EnterTransPointRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:95";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#28}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterTransPointRegionNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterTransPointRegionNotify const>(
         (const std::shared_ptr<const proto::EnterTransPointRegionNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      95);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::EnterTransPointRegionNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterTransPointRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onEnterTransPointRegionNotify(this, v7);
  }
  std::shared_ptr<proto::EnterTransPointRegionNotify const>::~shared_ptr((std::shared_ptr<const proto::EnterTransPointRegionNotify> *const)(v2 + 32));
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

// Line 96: range 00000000159D0368-00000000159D054A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::CutSceneFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:96";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#29}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CutSceneFinishNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CutSceneFinishNotify const>(
         (const std::shared_ptr<const proto::CutSceneFinishNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      96);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::CutSceneFinishNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CutSceneFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onCutSceneFinishNotify(this, v7);
  }
  std::shared_ptr<proto::CutSceneFinishNotify const>::~shared_ptr((std::shared_ptr<const proto::CutSceneFinishNotify> *const)(v2 + 32));
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

// Line 97: range 00000000159D054C-00000000159D072E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientScriptEventNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#30}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientScriptEventNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientScriptEventNotify const>(
         (const std::shared_ptr<const proto::ClientScriptEventNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      97);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ClientScriptEventNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientScriptEventNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onClientScriptEventNotify(this, v7);
  }
  std::shared_ptr<proto::ClientScriptEventNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientScriptEventNotify> *const)(v2 + 32));
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

// Line 99: range 00000000159D0730-00000000159D0912
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::EntityMoveRoomNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:99";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#31}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EntityMoveRoomNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EntityMoveRoomNotify const>(
         (const std::shared_ptr<const proto::EntityMoveRoomNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      99);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::EntityMoveRoomNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EntityMoveRoomNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onEntityMoveRoomNotify(this, v7);
  }
  std::shared_ptr<proto::EntityMoveRoomNotify const>::~shared_ptr((std::shared_ptr<const proto::EntityMoveRoomNotify> *const)(v2 + 32));
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

// Line 101: range 00000000159D0914-00000000159D0C30
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#32}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetDungeonEntryExploreConditionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetDungeonEntryExploreConditionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:101 64 16 11 rsp_ptr:101";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#32}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetDungeonEntryExploreConditionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetDungeonEntryExploreConditionReq const>(
         (const std::shared_ptr<const proto::GetDungeonEntryExploreConditionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      101);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetDungeonEntryExploreConditionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetDungeonEntryExploreConditionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetDungeonEntryExploreConditionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetDungeonEntryExploreConditionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetDungeonEntryExploreConditionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetDungeonEntryExploreConditionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetDungeonEntryExploreConditionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetDungeonEntryExploreConditionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetDungeonEntryExploreConditionReq(this, v8, rsp_0);
    proto::GetDungeonEntryExploreConditionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetDungeonEntryExploreConditionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp>::~shared_ptr((std::shared_ptr<proto::GetDungeonEntryExploreConditionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetDungeonEntryExploreConditionReq const>::~shared_ptr((std::shared_ptr<const proto::GetDungeonEntryExploreConditionReq> *const)(v2 + 32));
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

// Line 103: range 00000000159D0C32-00000000159D0E14
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#33}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::MonsterAIConfigHashNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:103";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#33}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MonsterAIConfigHashNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MonsterAIConfigHashNotify const>(
         (const std::shared_ptr<const proto::MonsterAIConfigHashNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      103);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::MonsterAIConfigHashNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MonsterAIConfigHashNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onMonsterAIConfigHashNotify(this, v7);
  }
  std::shared_ptr<proto::MonsterAIConfigHashNotify const>::~shared_ptr((std::shared_ptr<const proto::MonsterAIConfigHashNotify> *const)(v2 + 32));
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

// Line 104: range 00000000159D0E16-00000000159D0FF8
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#34}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::EntityConfigHashNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:104";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#34}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EntityConfigHashNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EntityConfigHashNotify const>(
         (const std::shared_ptr<const proto::EntityConfigHashNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      104);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::EntityConfigHashNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EntityConfigHashNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onEntityConfigHashNotify(this, v7);
  }
  std::shared_ptr<proto::EntityConfigHashNotify const>::~shared_ptr((std::shared_ptr<const proto::EntityConfigHashNotify> *const)(v2 + 32));
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

// Line 105: range 00000000159D0FFA-00000000159D11DC
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#35}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeWorldToSingleModeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:105";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#35}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeWorldToSingleModeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeWorldToSingleModeNotify const>(
         (const std::shared_ptr<const proto::ChangeWorldToSingleModeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      105);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ChangeWorldToSingleModeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeWorldToSingleModeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onChangeWorldToSingleModeNotify(this, v7);
  }
  std::shared_ptr<proto::ChangeWorldToSingleModeNotify const>::~shared_ptr((std::shared_ptr<const proto::ChangeWorldToSingleModeNotify> *const)(v2 + 32));
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

// Line 106: range 00000000159D11DE-00000000159D14FA
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#36}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetMapMarkTipsReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetMapMarkTipsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetMapMarkTipsRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:106 64 16 11 rsp_ptr:106";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#36}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetMapMarkTipsReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetMapMarkTipsReq const>(
         (const std::shared_ptr<const proto::GetMapMarkTipsReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      106);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetMapMarkTipsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMapMarkTipsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetMapMarkTipsRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetMapMarkTipsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetMapMarkTipsRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetMapMarkTipsRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetMapMarkTipsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMapMarkTipsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetMapMarkTipsReq(this, v8, rsp_0);
    proto::GetMapMarkTipsRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetMapMarkTipsRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetMapMarkTipsRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetMapMarkTipsRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetMapMarkTipsRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetMapMarkTipsRsp>::~shared_ptr((std::shared_ptr<proto::GetMapMarkTipsRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetMapMarkTipsReq const>::~shared_ptr((std::shared_ptr<const proto::GetMapMarkTipsReq> *const)(v2 + 32));
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

// Line 107: range 00000000159D14FC-00000000159D1818
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#37}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeWorldToSingleModeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChangeWorldToSingleModeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChangeWorldToSingleModeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:107 64 16 11 rsp_ptr:107";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#37}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeWorldToSingleModeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeWorldToSingleModeReq const>(
         (const std::shared_ptr<const proto::ChangeWorldToSingleModeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      107);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChangeWorldToSingleModeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeWorldToSingleModeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeWorldToSingleModeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeWorldToSingleModeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeWorldToSingleModeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeWorldToSingleModeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChangeWorldToSingleModeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeWorldToSingleModeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onChangeWorldToSingleModeReq(this, v8, rsp_0);
    proto::ChangeWorldToSingleModeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChangeWorldToSingleModeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChangeWorldToSingleModeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChangeWorldToSingleModeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChangeWorldToSingleModeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChangeWorldToSingleModeRsp>::~shared_ptr((std::shared_ptr<proto::ChangeWorldToSingleModeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeWorldToSingleModeReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeWorldToSingleModeReq> *const)(v2 + 32));
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

// Line 108: range 00000000159D181A-00000000159D1B36
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#38}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetWorldMpInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetWorldMpInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetWorldMpInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:108 64 16 11 rsp_ptr:108";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#38}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetWorldMpInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetWorldMpInfoReq const>(
         (const std::shared_ptr<const proto::GetWorldMpInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      108);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetWorldMpInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetWorldMpInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetWorldMpInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetWorldMpInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetWorldMpInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetWorldMpInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetWorldMpInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetWorldMpInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetWorldMpInfoReq(this, v8, rsp_0);
    proto::GetWorldMpInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetWorldMpInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetWorldMpInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetWorldMpInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetWorldMpInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetWorldMpInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetWorldMpInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetWorldMpInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetWorldMpInfoReq> *const)(v2 + 32));
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

// Line 109: range 00000000159D1B38-00000000159D1D1A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#39}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ForceDragBackTransferNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:109";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#39}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForceDragBackTransferNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ForceDragBackTransferNotify const>(
         (const std::shared_ptr<const proto::ForceDragBackTransferNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      109);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ForceDragBackTransferNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForceDragBackTransferNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onForceDragBackTransferNotify(this, v7);
  }
  std::shared_ptr<proto::ForceDragBackTransferNotify const>::~shared_ptr((std::shared_ptr<const proto::ForceDragBackTransferNotify> *const)(v2 + 32));
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

// Line 110: range 00000000159D1D1C-00000000159D2038
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#40}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAllSceneGalleryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAllSceneGalleryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAllSceneGalleryInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#40}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllSceneGalleryInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllSceneGalleryInfoReq const>(
         (const std::shared_ptr<const proto::GetAllSceneGalleryInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      110);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAllSceneGalleryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllSceneGalleryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAllSceneGalleryInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAllSceneGalleryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAllSceneGalleryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAllSceneGalleryInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAllSceneGalleryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllSceneGalleryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetAllSceneGalleryInfoReq(this, v8, rsp_0);
    proto::GetAllSceneGalleryInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAllSceneGalleryInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAllSceneGalleryInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAllSceneGalleryInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAllSceneGalleryInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAllSceneGalleryInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetAllSceneGalleryInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAllSceneGalleryInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetAllSceneGalleryInfoReq> *const)(v2 + 32));
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

// Line 111: range 00000000159D203A-00000000159D221C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#41}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::SceneAudioNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:111";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#41}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneAudioNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneAudioNotify const>(
         (const std::shared_ptr<const proto::SceneAudioNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      111);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::SceneAudioNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneAudioNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onSceneAudioNotify(this, v7);
  }
  std::shared_ptr<proto::SceneAudioNotify const>::~shared_ptr((std::shared_ptr<const proto::SceneAudioNotify> *const)(v2 + 32));
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

// Line 112: range 00000000159D221E-00000000159D253A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#42}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::InterruptGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::InterruptGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::InterruptGalleryRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:112 64 16 11 rsp_ptr:112";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#42}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InterruptGalleryReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InterruptGalleryReq const>(
         (const std::shared_ptr<const proto::InterruptGalleryReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      112);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::InterruptGalleryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InterruptGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::InterruptGalleryRsp>();
    rsp_0 = std::__shared_ptr_access<proto::InterruptGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::InterruptGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::InterruptGalleryRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::InterruptGalleryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InterruptGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onInterruptGalleryReq(this, v8, rsp_0);
    proto::InterruptGalleryRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::InterruptGalleryRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::InterruptGalleryRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::InterruptGalleryRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::InterruptGalleryRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::InterruptGalleryRsp>::~shared_ptr((std::shared_ptr<proto::InterruptGalleryRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::InterruptGalleryReq const>::~shared_ptr((std::shared_ptr<const proto::InterruptGalleryReq> *const)(v2 + 32));
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

// Line 113: range 00000000159D253C-00000000159D2858
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#43}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetScenePerformanceReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetScenePerformanceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetScenePerformanceRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:113 64 16 11 rsp_ptr:113";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#43}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetScenePerformanceReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetScenePerformanceReq const>(
         (const std::shared_ptr<const proto::GetScenePerformanceReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      113);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetScenePerformanceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetScenePerformanceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetScenePerformanceRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetScenePerformanceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetScenePerformanceRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetScenePerformanceRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetScenePerformanceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetScenePerformanceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetScenePerformanceReq(this, v8, rsp_0);
    proto::GetScenePerformanceRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetScenePerformanceRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetScenePerformanceRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetScenePerformanceRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetScenePerformanceRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetScenePerformanceRsp>::~shared_ptr((std::shared_ptr<proto::GetScenePerformanceRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetScenePerformanceReq const>::~shared_ptr((std::shared_ptr<const proto::GetScenePerformanceReq> *const)(v2 + 32));
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

// Line 114: range 00000000159D285A-00000000159D2A3C
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#44}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::ClientLoadingCostumeVerificationNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:114";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#44}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientLoadingCostumeVerificationNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientLoadingCostumeVerificationNotify const>(
         (const std::shared_ptr<const proto::ClientLoadingCostumeVerificationNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      114);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ClientLoadingCostumeVerificationNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientLoadingCostumeVerificationNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onClientLoadingCostumeVerificationNotify(this, v7);
  }
  std::shared_ptr<proto::ClientLoadingCostumeVerificationNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientLoadingCostumeVerificationNotify> *const)(v2 + 32));
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

// Line 115: range 00000000159D2A3E-00000000159D2D5A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#45}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::GetMapAreaReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetMapAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetMapAreaRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:115 64 16 11 rsp_ptr:115";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#45}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetMapAreaReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetMapAreaReq const>((const std::shared_ptr<const proto::GetMapAreaReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      115);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetMapAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMapAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetMapAreaRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetMapAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetMapAreaRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetMapAreaRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetMapAreaReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMapAreaReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onGetMapAreaReq(this, v8, rsp_0);
    proto::GetMapAreaRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetMapAreaRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetMapAreaRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetMapAreaRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetMapAreaRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetMapAreaRsp>::~shared_ptr((std::shared_ptr<proto::GetMapAreaRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetMapAreaReq const>::~shared_ptr((std::shared_ptr<const proto::GetMapAreaReq> *const)(v2 + 32));
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

// Line 116: range 00000000159D2D5C-00000000159D3078
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#46}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::BackRebornGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BackRebornGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BackRebornGalleryRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:116 64 16 11 rsp_ptr:116";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#46}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BackRebornGalleryReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BackRebornGalleryReq const>(
         (const std::shared_ptr<const proto::BackRebornGalleryReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      116);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BackRebornGalleryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BackRebornGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BackRebornGalleryRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BackRebornGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BackRebornGalleryRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BackRebornGalleryRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BackRebornGalleryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BackRebornGalleryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onBackRebornGalleryReq(this, v8, rsp_0);
    proto::BackRebornGalleryRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BackRebornGalleryRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BackRebornGalleryRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BackRebornGalleryRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BackRebornGalleryRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BackRebornGalleryRsp>::~shared_ptr((std::shared_ptr<proto::BackRebornGalleryRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BackRebornGalleryReq const>::~shared_ptr((std::shared_ptr<const proto::BackRebornGalleryReq> *const)(v2 + 32));
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

// Line 117: range 00000000159D307A-00000000159D3396
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#47}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::CheckGroupReplacedReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CheckGroupReplacedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CheckGroupReplacedRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:117 64 16 11 rsp_ptr:117";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#47}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckGroupReplacedReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CheckGroupReplacedReq const>(
         (const std::shared_ptr<const proto::CheckGroupReplacedReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      117);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CheckGroupReplacedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckGroupReplacedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CheckGroupReplacedRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckGroupReplacedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckGroupReplacedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CheckGroupReplacedRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CheckGroupReplacedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckGroupReplacedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = SceneHandler::onCheckGroupReplacedReq(this, v8, rsp_0);
    proto::CheckGroupReplacedRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CheckGroupReplacedRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CheckGroupReplacedRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CheckGroupReplacedRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CheckGroupReplacedRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CheckGroupReplacedRsp>::~shared_ptr((std::shared_ptr<proto::CheckGroupReplacedRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CheckGroupReplacedReq const>::~shared_ptr((std::shared_ptr<const proto::CheckGroupReplacedReq> *const)(v2 + 32));
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

// Line 118: range 00000000159D3398-00000000159D357A
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#48}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::DeathZoneObserveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:118";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#48}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DeathZoneObserveNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DeathZoneObserveNotify const>(
         (const std::shared_ptr<const proto::DeathZoneObserveNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      118);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::DeathZoneObserveNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DeathZoneObserveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = SceneHandler::onDeathZoneObserveNotify(this, v7);
  }
  std::shared_ptr<proto::DeathZoneObserveNotify const>::~shared_ptr((std::shared_ptr<const proto::DeathZoneObserveNotify> *const)(v2 + 32));
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

// Line 119: range 00000000159D357C-00000000159D375E
int __cdecl SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#49}::operator()(
        const SceneHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int refreshed; // r14d
  SceneHandler *this; // r14
  std::__shared_ptr_access<const proto::RefreshEntityAuthNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:119";
  *(_QWORD *)(v2 + 16) = SceneHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#49}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RefreshEntityAuthNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RefreshEntityAuthNotify const>(
         (const std::shared_ptr<const proto::RefreshEntityAuthNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "operator()",
      119);
    common::milog::MiLogStream::operator()(&v9, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    refreshed = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::RefreshEntityAuthNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RefreshEntityAuthNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    refreshed = SceneHandler::onRefreshEntityAuthNotify(this, v7);
  }
  std::shared_ptr<proto::RefreshEntityAuthNotify const>::~shared_ptr((std::shared_ptr<const proto::RefreshEntityAuthNotify> *const)(v2 + 32));
  result = refreshed;
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

// Line 125: range 00000000159D7B62-00000000159D7DEA
int32_t __cdecl SceneHandler::onLeaveSceneReq(
        SceneHandler *const this,
        const proto::LeaveSceneReq *req,
        proto::LeaveSceneRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:126";
  *(_QWORD *)(v3 + 16) = SceneHandler::onLeaveSceneReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v3 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onLeaveSceneReq",
      129);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"getCurAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = 104;
  }
  else
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(_QWORD *)v8 + 128LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, VisionContext *))v9)(v8, &VisionContext::miss_context);
    v7 = 0;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 137: range 00000000159D7DEC-00000000159D7E59
int32_t __cdecl SceneHandler::onEnterSceneReadyReq(
        SceneHandler *const this,
        const proto::EnterSceneReadyReq *req,
        proto::EnterSceneReadyRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx

  v3 = proto::EnterSceneReadyReq::enter_scene_token(req);
  proto::EnterSceneReadyRsp::set_enter_scene_token(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Player::enterSceneReady(this->player_, req);
};

// Line 143: range 00000000159D7E5A-00000000159D8391
int32_t __cdecl SceneHandler::onSceneInitFinishReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::minet::Packet *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 v8; // eax
  common::milog::MiLogStream *v9; // r14
  GameserverService *v10; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  uint32_t rtt; // [rsp+18h] [rbp-108h]
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  const proto::SceneInitFinishReq *req; // [rsp+20h] [rbp-100h]
  proto::SceneInitFinishRsp *rsp_0; // [rsp+28h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:145 64 16 11 rsp_ptr:145 96 24 9 guard:144";
  *(_QWORD *)(v2 + 16) = SceneHandler::onSceneInitFinishReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  common::minet::Coroutine::thisCoro();
  common::minet::CoroutieEnableGuard::CoroutieEnableGuard(
    (common::minet::CoroutieEnableGuard *const)(v2 + 96),
    (common::minet::CoroutinePtr *)(v2 + 64));
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v2 + 64));
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SceneInitFinishReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SceneInitFinishReq const>(
         (const std::shared_ptr<const proto::SceneInitFinishReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSceneInitFinishReq",
      145);
    common::milog::MiLogStream::operator()(&v18, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SceneInitFinishReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SceneInitFinishReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SceneInitFinishRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SceneInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SceneInitFinishRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SceneInitFinishRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    rtt = common::minet::Packet::getExt(v6, 1u);
    if ( rtt )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::setRtt(this->player_, rtt);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::notifyServerTime(BasicComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = Player::sceneInitFinish(this->player_, req);
    v8 = proto::SceneInitFinishReq::enter_scene_token(req);
    proto::SceneInitFinishRsp::set_enter_scene_token(rsp_0, v8);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onSceneInitFinishReq",
        159);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v18,
             (const char (*)[27])"endEnterScene failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      proto::SceneInitFinishRsp::set_retcode(rsp_0, ret);
    }
    else
    {
      proto::SceneInitFinishRsp::set_retcode(rsp_0, 0);
    }
    v10 = ServiceBox::findService<GameserverService>();
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    GameserverService::sendRspToClient<proto::SceneInitFinishRsp>(v10, Uid, rsp_0);
    v5 = proto::SceneInitFinishRsp::retcode(rsp_0);
    std::shared_ptr<proto::SceneInitFinishRsp>::~shared_ptr((std::shared_ptr<proto::SceneInitFinishRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SceneInitFinishReq const>::~shared_ptr((std::shared_ptr<const proto::SceneInitFinishReq> *const)(v2 + 32));
  common::minet::CoroutieEnableGuard::~CoroutieEnableGuard((common::minet::CoroutieEnableGuard *const)(v2 + 96));
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

// Line 171: range 00000000159D8392-00000000159D87A8
int32_t __cdecl SceneHandler::onEnterSceneDoneReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  common::milog::MiLogStream *v7; // r14
  GameserverService *v8; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-C8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const proto::EnterSceneDoneReq *req; // [rsp+20h] [rbp-C0h]
  proto::EnterSceneDoneRsp *rsp_0; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:172 64 16 11 rsp_ptr:172";
  *(_QWORD *)(v2 + 16) = SceneHandler::onEnterSceneDoneReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterSceneDoneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterSceneDoneReq const>(
         (const std::shared_ptr<const proto::EnterSceneDoneReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onEnterSceneDoneReq",
      172);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::EnterSceneDoneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterSceneDoneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterSceneDoneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterSceneDoneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterSceneDoneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterSceneDoneRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = Player::enterSceneDone(this->player_, req);
    v6 = proto::EnterSceneDoneReq::enter_scene_token(req);
    proto::EnterSceneDoneRsp::set_enter_scene_token(rsp_0, v6);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEnterSceneDoneReq",
        179);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v15,
             (const char (*)[27])"endEnterScene failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      proto::EnterSceneDoneRsp::set_retcode(rsp_0, ret);
    }
    else
    {
      proto::EnterSceneDoneRsp::set_retcode(rsp_0, 0);
    }
    if ( proto::EnterSceneDoneRsp::retcode(rsp_0) )
    {
      v8 = ServiceBox::findService<GameserverService>();
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      GameserverService::sendRspToClient<proto::EnterSceneDoneRsp>(v8, Uid, rsp_0);
    }
    v5 = proto::EnterSceneDoneRsp::retcode(rsp_0);
    std::shared_ptr<proto::EnterSceneDoneRsp>::~shared_ptr((std::shared_ptr<proto::EnterSceneDoneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterSceneDoneReq const>::~shared_ptr((std::shared_ptr<const proto::EnterSceneDoneReq> *const)(v2 + 32));
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

// Line 195: range 00000000159D87AA-00000000159D8BC0
int32_t __cdecl SceneHandler::onPostEnterSceneReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  google::protobuf::uint32 v6; // eax
  common::milog::MiLogStream *v7; // r14
  GameserverService *v8; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-C8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const proto::PostEnterSceneReq *req; // [rsp+20h] [rbp-C0h]
  proto::PostEnterSceneRsp *rsp_0; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:196 64 16 11 rsp_ptr:196";
  *(_QWORD *)(v2 + 16) = SceneHandler::onPostEnterSceneReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PostEnterSceneReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PostEnterSceneReq const>(
         (const std::shared_ptr<const proto::PostEnterSceneReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onPostEnterSceneReq",
      196);
    common::milog::MiLogStream::operator()(&v15, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PostEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PostEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PostEnterSceneRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PostEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PostEnterSceneRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PostEnterSceneRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = Player::postEnterScene(this->player_, req);
    v6 = proto::PostEnterSceneReq::enter_scene_token(req);
    proto::PostEnterSceneRsp::set_enter_scene_token(rsp_0, v6);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onPostEnterSceneReq",
        203);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v15,
             (const char (*)[28])"postEnterScene failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      proto::PostEnterSceneRsp::set_retcode(rsp_0, ret);
    }
    else
    {
      proto::PostEnterSceneRsp::set_retcode(rsp_0, 0);
    }
    if ( proto::PostEnterSceneRsp::retcode(rsp_0) )
    {
      v8 = ServiceBox::findService<GameserverService>();
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      GameserverService::sendRspToClient<proto::PostEnterSceneRsp>(v8, Uid, rsp_0);
    }
    v5 = proto::PostEnterSceneRsp::retcode(rsp_0);
    std::shared_ptr<proto::PostEnterSceneRsp>::~shared_ptr((std::shared_ptr<proto::PostEnterSceneRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PostEnterSceneReq const>::~shared_ptr((std::shared_ptr<const proto::PostEnterSceneReq> *const)(v2 + 32));
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

// Line 219: range 00000000159D8BC2-00000000159D8EA4
int32_t __cdecl SceneHandler::onSceneAvatarStaminaStepReq(
        SceneHandler *const this,
        const proto::SceneAvatarStaminaStepReq *req,
        proto::SceneAvatarStaminaStepRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const proto::Vector *v6; // rax
  int32_t v7; // r14d
  GameserverService *v8; // rax
  uint32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  Avatar *v11; // r14
  const proto::Vector *v12; // rax
  bool v13; // al
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-A0h] BYREF
  Vector3 rot; // [rsp+24h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:224";
  *(_QWORD *)(v3 + 16) = SceneHandler::onSceneAvatarStaminaStepReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::SceneAvatarStaminaStepReq::rot(req);
  Vector3::Vector3(&rot, v6);
  if ( !Vector3::isValid(&rot) )
  {
    v7 = 201;
  }
  else
  {
    v8 = ServiceBox::findService<GameserverService>();
    v9 = (unsigned int)GameserverService::getGameThreadLocal(v8) + 16;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    PlayerMgr::findCurAvatar((PlayerMgr *const)(v3 + 32), v9);
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onSceneAvatarStaminaStepReq",
        227);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v17,
              (const char (*)[26])"findCurAvatar fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 104;
    }
    else
    {
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v12 = proto::SceneAvatarStaminaStepReq::rot(req);
      Vector3::Vector3(&rot, v12);
      v13 = proto::SceneAvatarStaminaStepReq::use_client_rot(req);
      v7 = Avatar::procStaminaStep(v11, v13, rot);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  }
  result = v7;
  if ( v18 == (char *)v3 )
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

// Line 235: range 00000000159D8EA6-00000000159D91C0
int32_t __cdecl SceneHandler::onGetScenePointReq(
        SceneHandler *const this,
        const proto::GetScenePointReq *req,
        proto::GetScenePointRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerSceneComp *SceneComp; // rax
  GameserverService *v8; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v10; // r14
  int v11; // r15d
  Player *v12; // rax
  PlayerSceneComp *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-9Ch] BYREF
  uint32_t scene_id; // [rsp+28h] [rbp-98h]
  uint32_t belong_uid; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 20 owner_player_ptr:244";
  *(_QWORD *)(v4 + 16) = SceneHandler::onGetScenePointReq;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  scene_id = proto::GetScenePointReq::scene_id(req);
  belong_uid = proto::GetScenePointReq::belong_uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( belong_uid == Player::getUid(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    PlayerSceneComp::getAllUnlockedPoint(SceneComp, scene_id, rsp_0);
LABEL_16:
    v3 = 0;
    goto LABEL_17;
  }
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v8);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v4 + 32), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onGetScenePointReq",
      247);
    v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v19,
            (const char (*)[31])"owner_player_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v3 = -1;
    v11 = 0;
  }
  else
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v13 = Player::getSceneComp(v12);
    PlayerSceneComp::getAllUnlockedPoint(v13, scene_id, rsp_0);
    v11 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  if ( v11 == 1 )
    goto LABEL_16;
LABEL_17:
  result = v3;
  if ( v20 == (char *)v4 )
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

// Line 256: range 00000000159D91C2-00000000159D960A
int32_t __cdecl SceneHandler::onEnterTransPointRegionNotify(
        SceneHandler *const this,
        const proto::EnterTransPointRegionNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 scene_id:257 48 4 12 point_id:258 64 16 19 trans_point_ptr:259";
  *(_QWORD *)(v2 + 16) = SceneHandler::onEnterTransPointRegionNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = proto::EnterTransPointRegionNotify::scene_id(notify);
  *(_DWORD *)(v2 + 48) = proto::EnterTransPointRegionNotify::point_id(notify);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
    (const JsonConfigMgr *const)(v2 + 64),
    v5 + 93080,
    *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onEnterTransPointRegionNotify",
      262);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v18,
           (const char (*)[42])"findScenePoint SceneTransPoint scene_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" point_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    v11 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v11->type == TOWER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      v13 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->is_forbid_avatar_revive >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v13 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v13->is_forbid_avatar_revive >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(&v13->is_forbid_avatar_revive);
      }
      PlayerAvatarComp::onEnterFirstTransPointRegion(AvatarComp, *(_DWORD *)(v2 + 48), v13->is_forbid_avatar_revive);
      v10 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEnterTransPointRegionNotify",
        272);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"point_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" not TOWER");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v10 = -1;
    }
  }
  std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v2 + 64));
  result = v10;
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

// Line 279: range 00000000159D960C-00000000159D9968
int32_t __cdecl SceneHandler::onExitTransPointRegionNotify(
        SceneHandler *const this,
        const proto::ExitTransPointRegionNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  int32_t result; // eax
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 scene_id:280 48 4 12 point_id:281 64 16 19 trans_point_ptr:282";
  *(_QWORD *)(v2 + 16) = SceneHandler::onExitTransPointRegionNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = proto::ExitTransPointRegionNotify::scene_id(notify);
  *(_DWORD *)(v2 + 48) = proto::ExitTransPointRegionNotify::point_id(notify);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
    (const JsonConfigMgr *const)(v2 + 64),
    v5 + 93080,
    *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onExitTransPointRegionNotify",
      285);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"findScenePoint SceneTransPoint scene_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" point_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    v11 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v11->type == TOWER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::onExitFirstTransPointRegion(AvatarComp, *(_DWORD *)(v2 + 48));
    }
    v10 = 0;
  }
  std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v2 + 64));
  result = v10;
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

// Line 298: range 00000000159D996A-00000000159DA5FF
int32_t __cdecl SceneHandler::onSceneTransToPointReq(
        SceneHandler *const this,
        const proto::SceneTransToPointReq *req,
        proto::SceneTransToPointRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int v13; // r15d
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // r15d
  Avatar *v17; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerSceneComp *v21; // r14
  Scene *v22; // rax
  PlayerSceneComp *SceneComp; // r15
  uint32_t v24; // r14d
  Scene *v25; // rax
  PlayerSceneComp *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  PlayerEventComp *v30; // r14
  int32_t result; // eax
  std::string v32; // [rsp+0h] [rbp-1E0h]
  PlayerDungeonComp *dungeon_comp; // [rsp+28h] [rbp-1B8h]
  std::shared_ptr<ManualTransportEvent> __r; // [rsp+30h] [rbp-1B0h] BYREF
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-190h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-170h] BYREF
  char v38[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v32._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v32._M_string_length = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v38;
  v32._M_dataplus._M_p = v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 1 10 holder:312 48 4 7 ret:299 64 4 12 scene_id:313 80 4 12 point_id:314 96 12 7 pos:326 12"
                        "8 12 7 rot:327 160 16 14 avatar_ptr:300 192 16 13 scene_ptr:306 224 16 21 dungeon_scene_ptr:319";
  *(_QWORD *)(v4 + 16) = SceneHandler::onSceneTransToPointReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 48) = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v4 + 160));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSceneTransToPointReq",
      303);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v36,
           (const char (*)[25])"getCurAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v3 = 104;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 192));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onSceneTransToPointReq",
        309);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v36,
             (const char (*)[24])"getCurScene fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v3 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v36, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x5EEu, v32);
      std::string::~string(&v36);
      *(_DWORD *)(v4 + 64) = proto::SceneTransToPointReq::scene_id((const proto::SceneTransToPointReq *const)v32._anon_0._M_allocated_capacity);
      *(_DWORD *)(v4 + 80) = proto::SceneTransToPointReq::point_id((const proto::SceneTransToPointReq *const)v32._anon_0._M_allocated_capacity);
      proto::SceneTransToPointRsp::set_scene_id(
        (proto::SceneTransToPointRsp *const)v32._M_string_length,
        *(_DWORD *)(v4 + 64));
      proto::SceneTransToPointRsp::set_point_id(
        (proto::SceneTransToPointRsp *const)v32._M_string_length,
        *(_DWORD *)(v4 + 80));
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( Scene::getSceneType(v10) != SCENE_DUNGEON )
        goto LABEL_31;
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 224));
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 224), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onSceneTransToPointReq",
          322);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v36,
                (const char (*)[26])"dungeon_scene_ptr is null");
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v11, v12);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v3 = *(_DWORD *)(v4 + 48);
        v13 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        dungeon_comp = Player::getDungeonComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
        Vector3::Vector3((Vector3 *const)(v4 + 96), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v4 + 128), 0.0, 0.0, 0.0);
        *(_DWORD *)(v4 + 48) = PlayerDungeonComp::getQuitPosRotByPointId(
                                 dungeon_comp,
                                 *(_DWORD *)(v4 + 64),
                                 *(_DWORD *)(v4 + 80),
                                 (Vector3 *)(v4 + 96),
                                 (Vector3 *)(v4 + 128));
        if ( *(_DWORD *)(v4 + 48) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/scene_handler.cpp",
            "onSceneTransToPointReq",
            331);
          v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v36,
                  (const char (*)[36])"getQuitPosRotByPointId fail, scene:");
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v14, v15);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v3 = *(_DWORD *)(v4 + 48);
          v13 = 0;
        }
        else
        {
          v16 = *(_DWORD *)(v4 + 64);
          std::shared_ptr<DungeonScene>::shared_ptr(
            &p_dungeon_scene_ptr,
            (const std::shared_ptr<DungeonScene> *)(v4 + 224));
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          LOBYTE(v16) = PlayerDungeonComp::trySettleCurDungeonBeforeTransfer(
                          dungeon_comp,
                          v17,
                          &p_dungeon_scene_ptr,
                          v16,
                          (const Vector3 *)(v4 + 96),
                          (const Vector3 *)(v4 + 128),
                          (int32_t *)(v4 + 48)) != 0;
          std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
          if ( (_BYTE)v16 )
          {
            if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
            common::tools::perf::make_shared<ManualTransportEvent>();
            std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&p_dungeon_scene_ptr,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_dungeon_scene_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_dungeon_scene_ptr);
            std::shared_ptr<ManualTransportEvent>::~shared_ptr(&__r);
            v3 = *(_DWORD *)(v4 + 48);
            v13 = 0;
          }
          else
          {
            v13 = 1;
          }
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 224));
      if ( v13 == 1 )
      {
LABEL_31:
        v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( Creature::getLifeState(v19) == LIFE_ALIVE )
        {
          v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          if ( Scene::getSceneId(v20) == *(_DWORD *)(v4 + 64) )
          {
            if ( *(_DWORD *)(v4 + 80) )
            {
              if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              SceneComp = Player::getSceneComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
              TransferReason::TransferReason(&p_reason, ENTER_REASON_TRANS_POINT);
              v24 = *(_DWORD *)(v4 + 80);
              v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              *(_DWORD *)(v4 + 48) = PlayerSceneComp::jumpToScene(SceneComp, v25, v24, &p_reason);
              TransferReason::~TransferReason(&p_reason);
            }
            else
            {
              if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v21 = Player::getSceneComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
              TransferReason::TransferReason(&p_reason, ENTER_REASON_TRANS_POINT);
              v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              *(_DWORD *)(v4 + 48) = PlayerSceneComp::jumpToSceneBornPosition(v21, v22, &p_reason);
              TransferReason::~TransferReason(&p_reason);
            }
          }
          else
          {
            if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v26 = Player::getSceneComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
            TransferReason::TransferReason(&p_reason, ENTER_REASON_TRANS_POINT);
            *(_DWORD *)(v4 + 48) = PlayerSceneComp::jumpToScene(
                                     v26,
                                     *(_DWORD *)(v4 + 64),
                                     *(_DWORD *)(v4 + 80),
                                     &p_reason);
            TransferReason::~TransferReason(&p_reason);
          }
          if ( *(_DWORD *)(v4 + 48) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onSceneTransToPointReq",
              362);
            v27 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v36,
                    (const char (*)[35])"transToScenePoint fails, scene_id:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v4 + 64));
            v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v28,
                    (const char (*)[12])", point_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v36);
          }
          if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v30 = Player::getEventComp(*(Player *const *)(*(&v32._anon_0._M_allocated_capacity + 1) + 8));
          common::tools::perf::make_shared<ManualTransportEvent>();
          std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&p_dungeon_scene_ptr,
            &__r);
          PlayerEventComp::notifyEvent(v30, (BaseEventPtr *)&p_dungeon_scene_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_dungeon_scene_ptr);
          std::shared_ptr<ManualTransportEvent>::~shared_ptr(&__r);
          v3 = *(_DWORD *)(v4 + 48);
        }
        else
        {
          v3 = 102;
        }
      }
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 192));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 160));
  result = v3;
  if ( v32._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 369: range 00000000159DA600-00000000159DA935
int32_t __cdecl SceneHandler::onGetSceneAreaReq(
        SceneHandler *const this,
        const proto::GetSceneAreaReq *req,
        proto::GetSceneAreaRsp *rsp_0)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7; // al
  PlayerSceneComp *SceneComp; // r13
  uint32_t v9; // ecx
  GameserverService *v10; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v12; // r14
  int v13; // r14d
  Player *v14; // rax
  PlayerSceneComp *v15; // r14
  uint32_t v16; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  uint32_t belong_uid; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 20 owner_player_ptr:377";
  *(_QWORD *)(v4 + 16) = SceneHandler::onGetSceneAreaReq;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  belong_uid = proto::GetSceneAreaReq::belong_uid(req);
  if ( !belong_uid )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( belong_uid != Player::getUid(this->player_) )
    v7 = 0;
  else
LABEL_8:
    v7 = 1;
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    v9 = proto::GetSceneAreaReq::scene_id(req);
    PlayerSceneComp::getAllUnlockedArea(SceneComp, v9, rsp_0);
LABEL_20:
    v3 = 0;
    goto LABEL_21;
  }
  v10 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v10);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v4 + 32), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onGetSceneAreaReq",
      380);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v21,
            (const char (*)[31])"owner_player_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v3 = -1;
    v13 = 0;
  }
  else
  {
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v15 = Player::getSceneComp(v14);
    v16 = proto::GetSceneAreaReq::scene_id(req);
    PlayerSceneComp::getAllUnlockedArea(v15, v16, rsp_0);
    v13 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  if ( v13 == 1 )
    goto LABEL_20;
LABEL_21:
  result = v3;
  if ( v22 == (char *)v4 )
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

// Line 389: range 00000000159DA936-00000000159DB19C
int32_t __cdecl SceneHandler::onSceneEntityDrownReq(
        SceneHandler *const this,
        const proto::SceneEntityDrownReq *req,
        proto::SceneEntityDrownRsp *rsp_0)
{
  int32_t v3; // r15d
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  Monster *v18; // rcx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  unsigned __int64 v30; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rsi
  int32_t result; // eax
  void (__fastcall *v33)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64); // [rsp+10h] [rbp-190h]
  void (__fastcall *v34)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+10h] [rbp-190h]
  bool is_need_disappear; // [rsp+33h] [rbp-16Dh]
  float val; // [rsp+34h] [rbp-16Ch] BYREF
  const data::MonsterExcelConfig *monster_excel_config_ptr; // [rsp+38h] [rbp-168h]
  VisionContext v38; // [rsp+44h] [rbp-15Ch] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-150h] BYREF
  char v40[304]; // [rsp+70h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 13 scene_ptr:390 64 16 14 entity_ptr:396 96 16 15 monster_ptr:405 128 96 11 context:422";
  *(_QWORD *)(v5 + 16) = SceneHandler::onSceneEntityDrownReq;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onSceneEntityDrownReq",
      393);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v39, (const char (*)[18])"getCurScene fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v3 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 15);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v33 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64))v10;
    v11 = proto::SceneEntityDrownReq::entity_id(req);
    v33(v5 + 64, v9, v11);
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onSceneEntityDrownReq",
        400);
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v39,
              (const char (*)[17])"findEntity fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v3 = 504;
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      v14 = *(_QWORD *)v13 + 24LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) != 2 )
        goto LABEL_48;
      std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v5 + 96));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v5 + 96), 0LL) )
      {
        v3 = 504;
        v15 = 0;
      }
      else
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 312LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        monster_excel_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v17)(v16);
        if ( !monster_excel_config_ptr )
          goto LABEL_33;
        if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)monster_excel_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
        {
          *(double *)v4.m128i_i64 = __asan_report_load4();
        }
        if ( monster_excel_config_ptr->type != MONSTER_BOSS )
        {
          is_need_disappear = 1;
          v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( Creature::getLifeState(v19) == LIFE_ALIVE )
          {
            v20 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            Creature::subCurHpToZero(v20, CHANGE_HP_SUB_DRAWN, 1);
            ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v5 + 128));
            *(_DWORD *)(v5 + 128) = 6;
            v21 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( Creature::checkDrownWithLimboAndNotDie(v21, (const ChangeHpContext *)(v5 + 128)) )
              is_need_disappear = 0;
            ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v5 + 128));
          }
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onSceneEntityDrownReq",
            430);
          v22 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v39,
                  (const char (*)[46])"monster start to disappear is_need_disappear:");
          v23 = common::milog::MiLogStream::operator<<(v22, is_need_disappear);
          v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" curhp:");
          v25 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          *(float *)v4.m128i_i32 = Creature::getCurHp(v25);
          LODWORD(val) = _mm_cvtsi128_si32(v4);
          v26 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &val);
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" monster:");
          v28 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v27, v28);
          common::milog::MiLogStream::~MiLogStream(&v39);
          if ( is_need_disappear )
          {
            v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
            if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v30 = (unsigned __int64)(v29->_vptr_DescribalBase + 14);
            if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
              v30 = __asan_report_load8();
            v34 = *(void (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v30;
            VisionContext::VisionContext(&v38, VISION_DIE);
            v31 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            v34(v29, v31, &v38);
          }
          v15 = 1;
        }
        else
        {
LABEL_33:
          v18 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Monster::logAbnormalDie(v18, this->player_, CHANGE_HP_SUB_DRAWN);
          v3 = 0;
          v15 = 0;
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v5 + 96));
      if ( v15 == 1 )
LABEL_48:
        v3 = 0;
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v5 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 32));
  result = v3;
  if ( v40 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 440: range 00000000159DB19E-00000000159DB3F1
int32_t __cdecl SceneHandler::onSceneCreateEntityReq(
        SceneHandler *const this,
        const proto::SceneCreateEntityReq *req,
        proto::SceneCreateEntityRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 14 server_log:445 112 40 10 notify:443";
  *(_QWORD *)(v3 + 16) = SceneHandler::onSceneCreateEntityReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  proto::ServerLogNotify::ServerLogNotify((proto::ServerLogNotify *const)(v3 + 112));
  proto::ServerLogNotify::set_log_level((proto::ServerLogNotify *const)(v3 + 112), LOG_LEVEL_ERROR_0);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 48), &byte_258EC960, &__a);
  std::allocator<char>::~allocator(&__a);
  proto::ServerLogNotify::set_server_log((proto::ServerLogNotify *const)(v3 + 112), (const std::string *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 112));
  std::string::~string((void *)(v3 + 48));
  proto::ServerLogNotify::~ServerLogNotify((proto::ServerLogNotify *const)(v3 + 112));
  result = 0;
  if ( v8 == (char *)v3 )
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

// Line 454: range 00000000159DB3F2-00000000159DB576
int32_t __cdecl SceneHandler::onSceneDestroyEntityReq(
        SceneHandler *const this,
        const proto::SceneDestroyEntityReq *req,
        proto::SceneDestroyEntityRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  google::protobuf::uint32 v9; // edx
  unsigned int val; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned int v12; // [rsp+28h] [rbp-38h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v4 = proto::SceneDestroyEntityReq::entity_id(req);
  ret = PlayerSceneComp::destroyEntityFromClient(SceneComp, 0, v4);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onSceneDestroyEntityReq",
      458);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v14,
           (const char (*)[37])"destroyEntityFromClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" entity_id:");
    v12 = proto::SceneDestroyEntityReq::entity_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v12);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return ret;
  }
  else
  {
    v9 = proto::SceneDestroyEntityReq::entity_id(req);
    proto::SceneDestroyEntityRsp::set_entity_id(rsp_0, v9);
    return 0;
  }
};

// Line 466: range 00000000159DB578-00000000159DB9AC
int32_t __cdecl SceneHandler::onEnterWorldAreaReq(
        SceneHandler *const this,
        const proto::EnterWorldAreaReq *req,
        proto::EnterWorldAreaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerSceneComp *SceneComp; // r14
  uint32_t v9; // r15d
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  google::protobuf::uint32 v16; // edx
  google::protobuf::uint32 v17; // edx
  int32_t result; // eax
  unsigned int Uid; // [rsp+20h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-9Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:467";
  *(_QWORD *)(v3 + 16) = SceneHandler::onEnterWorldAreaReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onEnterWorldAreaReq",
      470);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v24,
           (const char (*)[24])"getCurScene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    v9 = proto::EnterWorldAreaReq::area_id(req);
    v10 = proto::EnterWorldAreaReq::area_type(req);
    ret = PlayerSceneComp::enterArea(SceneComp, v10, v9);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEnterWorldAreaReq",
        476);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v24,
              (const char (*)[23])"enterArea failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" area_type:");
      v21 = proto::EnterWorldAreaReq::area_type(req);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v21);
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" area_id:");
      val = proto::EnterWorldAreaReq::area_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = ret;
    }
    else
    {
      v16 = proto::EnterWorldAreaReq::area_type(req);
      proto::EnterWorldAreaRsp::set_area_type(rsp_0, v16);
      v17 = proto::EnterWorldAreaReq::area_id(req);
      proto::EnterWorldAreaRsp::set_area_id(rsp_0, v17);
      v7 = 0;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v25 == (char *)v3 )
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

// Line 485: range 00000000159DB9AE-00000000159DC9DC
int32_t __cdecl SceneHandler::onEntityForceSyncReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int v8; // r14d
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int v11; // r14d
  std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int v17; // r14d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  data::SceneType SceneType; // eax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  const proto::MotionInfo *v39; // rax
  const proto::Vector *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned __int64 Position; // rax
  Entity *v49; // r14
  std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  const proto::MotionInfo *v51; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  data::SceneType v53; // eax
  RoomScene *v55; // r14
  Entity *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  GameserverService *v62; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  google::protobuf::uint32 room_id; // [rsp+Ch] [rbp-1D4h]
  unsigned int val; // [rsp+28h] [rbp-1B8h] BYREF
  uint32_t client_scene_time_ms; // [rsp+2Ch] [rbp-1B4h]
  uint32_t prev_room_id; // [rsp+30h] [rbp-1B0h]
  int32_t ret; // [rsp+34h] [rbp-1ACh]
  const proto::EntityForceSyncReq *req; // [rsp+38h] [rbp-1A8h]
  proto::EntityForceSyncRsp *rsp_0; // [rsp+40h] [rbp-1A0h]
  proto::MotionInfo *fail_motion_info; // [rsp+48h] [rbp-198h]
  common::milog::MiLogStream v73; // [rsp+50h] [rbp-190h] BYREF
  char v74[368]; // [rsp+70h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 entity_id:489 64 12 7 rot:545 96 12 12 prev_pos:553 128 16 11 req_ptr:486 160 16 11 rs"
                        "p_ptr:486 192 16 14 avatar_ptr:490 224 16 13 scene_ptr:496 256 16 14 entity_ptr:504 288 16 18 ro"
                        "om_scene_ptr:559";
  *(_QWORD *)(v3 + 16) = SceneHandler::onEntityForceSyncReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EntityForceSyncReq>((common::minet::Packet *const)(v3 + 128));
  if ( std::operator==<proto::EntityForceSyncReq const>(
         (const std::shared_ptr<const proto::EntityForceSyncReq> *)(v3 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onEntityForceSyncReq",
      486);
    common::milog::MiLogStream::operator()(&v73, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v2 = -1;
    goto LABEL_75;
  }
  req = std::__shared_ptr_access<proto::EntityForceSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  common::tools::perf::make_shared<proto::EntityForceSyncRsp>();
  rsp_0 = std::__shared_ptr_access<proto::EntityForceSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EntityForceSyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  proto::EntityForceSyncRsp::set_retcode(rsp_0, -1);
  v6 = std::__shared_ptr_access<proto::EntityForceSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  *(_DWORD *)(v3 + 48) = proto::EntityForceSyncReq::entity_id(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v3 + 192));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 192), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onEntityForceSyncReq",
      493);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v73,
           (const char (*)[25])"getCurAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v8 = 0;
    goto LABEL_69;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 224));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 224), 0LL) )
  {
    v12 = std::__shared_ptr_access<proto::EntityForceSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    client_scene_time_ms = proto::EntityForceSyncReq::scene_time(v12);
    *(_QWORD *)(v3 + 256) = 0LL;
    *(_QWORD *)(v3 + 264) = 0LL;
    v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    if ( Entity::getEntityId((const Entity *const)v13) == *(_DWORD *)(v3 + 48) )
    {
      v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( Creature::getLifeState(v14) != LIFE_ALIVE )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onEntityForceSyncReq",
          509);
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v73,
                (const char (*)[21])"avatar is not alive:");
        v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, v16);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v17 = 0;
        goto LABEL_59;
      }
      std::shared_ptr<Entity>::operator=<Avatar>(
        (std::shared_ptr<Entity> *const)(v3 + 256),
        (const std::shared_ptr<Avatar> *)(v3 + 192));
LABEL_36:
      v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
      SceneType = Scene::getSceneType(v32);
      if ( SceneExcelConfigMgr::isRoomScene(SceneType) && !proto::EntityForceSyncReq::room_id(req) )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onEntityForceSyncReq",
          535);
        v35 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v73,
                (const char (*)[42])"room scene room id can't be 0. scene id: ");
        v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        val = Scene::getSceneId(v36);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v17 = 0;
      }
      else
      {
        v37 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        if ( !Entity::isOnScene(v37) )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onEntityForceSyncReq",
            540);
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v73, (const char (*)[13])off_258ECE20);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v17 = 0;
        }
        else
        {
          v38 = std::__shared_ptr_access<proto::EntityForceSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v39 = proto::EntityForceSyncReq::motion_info(v38);
          v40 = proto::MotionInfo::rot(v39);
          Vector3::Vector3((Vector3 *const)(v3 + 64), v40);
          if ( !Vector3::isValidRot((const Vector3 *const)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v73,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onEntityForceSyncReq",
              548);
            v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v73,
                    (const char (*)[17])"invalid rot, x: ");
            v42 = common::milog::MiLogStream::operator<<<float,(float *)0>(v41, (const float *)(v3 + 64));
            v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])off_258ECEA0);
            v44 = common::milog::MiLogStream::operator<<<float,(float *)0>(v43, (const float *)(v3 + 68));
            v45 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v44, (const char (*)[9])" rot.z: ");
            common::milog::MiLogStream::operator<<<float,(float *)0>(v45, (const float *)(v3 + 72));
            common::milog::MiLogStream::~MiLogStream(&v73);
            v2 = -1;
            v17 = 1;
          }
          else
          {
            v46 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            prev_room_id = Entity::getRoomId(v46);
            v47 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            Position = (unsigned __int64)Entity::getPosition(v47);
            if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
              && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
            {
              Position = __asan_report_load_n(Position, 12LL);
            }
            *(_QWORD *)(v3 + 96) = *(_QWORD *)Position;
            *(_DWORD *)(v3 + 104) = *(_DWORD *)(Position + 8);
            v49 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            v50 = std::__shared_ptr_access<proto::EntityForceSyncReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::EntityForceSyncReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v51 = proto::EntityForceSyncReq::motion_info(v50);
            ret = Entity::forceSetMotionInfo(v49, v51, client_scene_time_ms);
            if ( !ret )
            {
              if ( prev_room_id != proto::EntityForceSyncReq::room_id(req) )
              {
                v52 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                v53 = Scene::getSceneType(v52);
                if ( SceneExcelConfigMgr::isRoomScene(v53) )
                {
                  std::dynamic_pointer_cast<RoomScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 288));
                  if ( std::operator!=<RoomScene>((const std::shared_ptr<RoomScene> *)(v3 + 288), 0LL) )
                  {
                    v55 = std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                    room_id = proto::EntityForceSyncReq::room_id(req);
                    v56 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                    RoomScene::entityMoveRoom(v55, v56, room_id);
                  }
                  std::shared_ptr<RoomScene>::~shared_ptr((std::shared_ptr<RoomScene> *const)(v3 + 288));
                }
              }
              common::milog::MiLogStream::create(
                &v73,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/scene_handler.cpp",
                "onEntityForceSyncReq",
                565);
              v57 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v73,
                      (const char (*)[35])"[FORCE_MOVE] entity is force moved");
              v58 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
              v59 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v57, v58);
              v60 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v59,
                      (const char (*)[12])", prev_pos:");
              operator<<(v60, (const Vector3 *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream(&v73);
            }
            proto::EntityForceSyncRsp::set_retcode(rsp_0, ret);
            proto::EntityForceSyncRsp::set_entity_id(rsp_0, *(_DWORD *)(v3 + 48));
            fail_motion_info = proto::EntityForceSyncRsp::mutable_fail_motion(rsp_0);
            v61 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            Entity::getMotionInfo(v61, fail_motion_info);
            proto::EntityForceSyncRsp::set_scene_time(rsp_0, client_scene_time_ms);
            v17 = 2;
          }
        }
      }
      goto LABEL_59;
    }
    v18 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v18 = __asan_report_load8();
    v19 = *(_QWORD *)v18 + 120LL;
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v18 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v19)(v3 + 288, v18, *(unsigned int *)(v3 + 48));
    std::shared_ptr<Entity>::operator=(
      (std::shared_ptr<Entity> *const)(v3 + 256),
      (std::shared_ptr<Entity> *)(v3 + 288));
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 288));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 256), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEntityForceSyncReq",
        519);
      v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v73,
              (const char (*)[31])"entity_ptr is null, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v73);
      v17 = 0;
    }
    else
    {
      v21 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8();
      v22 = *(_QWORD *)v21 + 24LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v22)(v21) != 1 )
      {
        v27 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        if ( !Entity::isMovable(v27) )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onEntityForceSyncReq",
            529);
          v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v73, (const char (*)[19])off_258ECD80);
          v29 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
          v30 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v28, v29);
          v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v31, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v17 = 0;
          goto LABEL_59;
        }
        goto LABEL_36;
      }
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEntityForceSyncReq",
        524);
      v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v73, (const char (*)[37])off_258ECD20);
      v24 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
      v25 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v23, v24);
      v26 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v25, v26);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v17 = 0;
    }
LABEL_59:
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 256));
    if ( v17 )
    {
      if ( v17 == 2 )
        v11 = 2;
      else
        v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    goto LABEL_64;
  }
  common::milog::MiLogStream::create(
    &v73,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/scene_handler.cpp",
    "onEntityForceSyncReq",
    499);
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v73, (const char (*)[15])"getScene fails");
  v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
  common::milog::MiLogStream::~MiLogStream(&v73);
  v11 = 0;
LABEL_64:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 224));
  if ( v11 )
  {
    if ( v11 == 2 )
      v8 = 2;
    else
      v8 = 1;
  }
  else
  {
    v8 = 0;
  }
LABEL_69:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 192));
  if ( !v8 || v8 == 2 )
  {
    v62 = ServiceBox::findService<GameserverService>();
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    GameserverService::sendRspToClient<proto::EntityForceSyncRsp>(v62, Uid, rsp_0);
    v2 = proto::EntityForceSyncRsp::retcode(rsp_0);
  }
  std::shared_ptr<proto::EntityForceSyncRsp>::~shared_ptr((std::shared_ptr<proto::EntityForceSyncRsp> *const)(v3 + 160));
LABEL_75:
  std::shared_ptr<proto::EntityForceSyncReq const>::~shared_ptr((std::shared_ptr<const proto::EntityForceSyncReq> *const)(v3 + 128));
  result = v2;
  if ( v74 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 580: range 00000000159DC9DE-00000000159DCF13
int32_t __cdecl SceneHandler::onGetAreaExplorePointReq(
        SceneHandler *const this,
        const proto::GetAreaExplorePointReq *req,
        proto::GetAreaExplorePointRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerHomeComp *HomeComp; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // eax
  uint32_t v10; // eax
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t ExplorePoint; // edx
  int32_t result; // eax
  uint32_t area_id; // [rsp+20h] [rbp-F0h]
  uint32_t scene_id; // [rsp+24h] [rbp-ECh]
  uint32_t *__for_begin; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 20 player_world_ptr:581 64 16 13 scene_ptr:605 96 16 12 area_ptr:610";
  *(_QWORD *)(v3 + 16) = SceneHandler::onGetAreaExplorePointReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
    std::shared_ptr<PlayerWorld>::operator=(
      (std::shared_ptr<PlayerWorld> *const)(v3 + 32),
      (std::shared_ptr<PlayerWorld> *)(v3 + 96));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
    std::shared_ptr<PlayerWorld>::operator=(
      (std::shared_ptr<PlayerWorld> *const)(v3 + 32),
      (std::shared_ptr<PlayerWorld> *)(v3 + 96));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  }
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onGetAreaExplorePointReq",
      594);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v20, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else
  {
    __for_range = proto::GetAreaExplorePointReq::area_id_list(req);
    __for_begin = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      area_id = *__for_begin;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      scene_id = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(
                   &v8->design_config.txt_config_mgr.world_area_config_mgr,
                   area_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      if ( scene_id )
      {
        v9 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        World::findScene((World *const)(v3 + 64), v9);
        if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
        {
          v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Scene::findArea((Scene *const)(v3 + 96), v10);
          if ( !std::operator==<Area>((const std::shared_ptr<Area> *)(v3 + 96), 0LL) )
          {
            proto::GetAreaExplorePointRsp::add_area_id_list(rsp_0, area_id);
            v11 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            ExplorePoint = Area::getExplorePoint(v11);
            proto::GetAreaExplorePointRsp::add_explore_point_list(rsp_0, ExplorePoint);
          }
          std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v3 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
      }
      ++__for_begin;
    }
    v7 = 0;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v7;
  if ( v21 == (char *)v3 )
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

// Line 623: range 00000000159DCF14-00000000159DD0D3
int32_t __cdecl SceneHandler::onClientTransmitReq(
        SceneHandler *const this,
        const proto::ClientTransmitReq *req,
        proto::ClientTransmitRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-91h] BYREF
  char v8[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 14 server_log:624";
  *(_QWORD *)(v3 + 16) = SceneHandler::onClientTransmitReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 32), &byte_258ED0C0, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::notifyServerLog(this->player_, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)(v3 + 32));
  std::string::~string((void *)(v3 + 32));
  result = 0;
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 632: range 00000000159DD0D4-00000000159DD98F
int32_t __cdecl SceneHandler::onExecuteGroupTriggerReq(
        SceneHandler *const this,
        const proto::ExecuteGroupTriggerReq *req,
        proto::ExecuteGroupTriggerRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  google::protobuf::uint32 v14; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_source_entity_id; // rax
  const std::string *v17; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::uint32 v19; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  google::protobuf::int32 v21; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  int32_t *p_param1; // rax
  google::protobuf::int32 v24; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  google::protobuf::int32 v26; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  uint32_t *p_uid; // rax
  Group *v32; // rax
  Entity *v33; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+28h] [rbp-118h]
  uint32_t last_execute_trigger_time; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v37; // [rsp+30h] [rbp-110h] BYREF
  char v38[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 20 source_entity_id:639 64 16 13 scene_ptr:633 96 16 14 entity_ptr:640 128 16 13 group_pt"
                        "r:646 160 16 11 evt_ptr:659";
  *(_QWORD *)(v3 + 16) = SceneHandler::onExecuteGroupTriggerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onExecuteGroupTriggerReq",
      636);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v37,
           (const char (*)[24])"getCurScene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::ExecuteGroupTriggerReq::source_entity_id(req);
    v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(_QWORD *)v8 + 120LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v9)(v3 + 96, v8, *(unsigned int *)(v3 + 48));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onExecuteGroupTriggerReq",
        643);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v37,
              (const char (*)[31])"entity_ptr is null, entity_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v7 = 504;
    }
    else
    {
      std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      Entity::getGroup((const Entity *const)(v3 + 128));
      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onExecuteGroupTriggerReq",
          649);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v37,
                (const char (*)[30])"getGroup is null for entity: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v37);
        v7 = 513;
      }
      else
      {
        now = common::tools::TimeUtils::getNow();
        v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        last_execute_trigger_time = Entity::getLastExecuteTriggerTime(v13);
        if ( now < last_execute_trigger_time || now - last_execute_trigger_time > 5 )
        {
          EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 160), 10);
          if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v3 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onExecuteGroupTriggerReq",
              662);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v37,
              (const char (*)[18])"createEvent fails");
            common::milog::MiLogStream::~MiLogStream(&v37);
            v7 = -1;
          }
          else
          {
            v14 = proto::ExecuteGroupTriggerReq::source_entity_id(req);
            v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_source_entity_id = &v15->source_entity_id;
            if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(p_source_entity_id);
            }
            v15->source_entity_id = v14;
            v17 = proto::ExecuteGroupTriggerReq::source_name[abi:cxx11](req);
            v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            std::string::operator=(&v18->source_name, v17);
            v19 = proto::ExecuteGroupTriggerReq::target_entity_id(req);
            v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v20->target_entity_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v20 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v20->target_entity_id);
            }
            v20->target_entity_id = v19;
            v21 = proto::ExecuteGroupTriggerReq::param1(req);
            v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_param1 = &v22->param1;
            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param1);
            }
            v22->param1 = v21;
            v24 = proto::ExecuteGroupTriggerReq::param2(req);
            v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              v25 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v25->param2);
            }
            v25->param2 = v24;
            v26 = proto::ExecuteGroupTriggerReq::param3(req);
            v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_param3 = &v27->param3;
            if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param3);
            }
            v27->param3 = v26;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Uid = Player::getUid(this->player_);
            v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_uid = &v30->uid;
            if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_uid);
            }
            v30->uid = Uid;
            v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            Group::handleEvent(v32, (EventPtr *)(v3 + 160));
            v33 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Entity::setLastExecuteTriggerTime(v33, now);
            v7 = 0;
          }
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 160));
        }
        else
        {
          v7 = 3;
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 128));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v38 == (char *)v3 )
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

// Line 678: range 00000000159DD990-00000000159DDA47
int32_t __cdecl SceneHandler::onLevelupCityReq(
        SceneHandler *const this,
        const proto::LevelupCityReq *req,
        proto::LevelupCityRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rax
  PlayerCityComp *CityComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return 512;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CityComp = Player::getCityComp(this->player_);
  PlayerCityComp::onLevelupCityReq(CityComp, req, rsp_0);
  return proto::LevelupCityRsp::retcode(rsp_0);
};

// Line 688: range 00000000159DDA48-00000000159DDAC6
int32_t __cdecl SceneHandler::onPersonalSceneJumpReq(
        SceneHandler *const this,
        const proto::PersonalSceneJumpReq *req,
        proto::PersonalSceneJumpRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v4 = proto::PersonalSceneJumpReq::point_id(req);
  PlayerSceneComp::onPersonalSceneJumpReq(SceneComp, v4, rsp_0);
  return proto::PersonalSceneJumpRsp::retcode(rsp_0);
};

// Line 695: range 00000000159DDAC8-00000000159DDB81
int32_t __cdecl SceneHandler::onHitClientTrivialNotify(
        SceneHandler *const this,
        const proto::HitClientTrivialNotify *notify)
{
  const proto::Vector *v2; // rax
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v5; // r12d
  const proto::Vector *v6; // rax
  Vector3 v7; // [rsp+14h] [rbp-1Ch] BYREF

  v2 = proto::HitClientTrivialNotify::position(notify);
  Vector3::Vector3(&v7, v2);
  if ( !Vector3::isValid(&v7) )
    return 201;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v5 = proto::HitClientTrivialNotify::owner_entity_id(notify);
  v6 = proto::HitClientTrivialNotify::position(notify);
  PlayerSceneComp::hitClientTrivialEntity(SceneComp, v6, v5);
  return 0;
};

// Line 706: range 00000000159DDB82-00000000159DDD18
int32_t __cdecl SceneHandler::onHitTreeNotify(SceneHandler *const this, const proto::HitTreeNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::Vector *v5; // rax
  const proto::Vector *v6; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  google::protobuf::uint32 tree_type; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 12 tree_pos:708 64 12 12 drop_pos:709";
  *(_QWORD *)(v2 + 16) = SceneHandler::onHitTreeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202177536;
  tree_type = proto::HitTreeNotify::tree_type(notify);
  v5 = proto::HitTreeNotify::tree_pos(notify);
  Vector3::Vector3((Vector3 *const)(v2 + 32), v5);
  v6 = proto::HitTreeNotify::drop_pos(notify);
  Vector3::Vector3((Vector3 *const)(v2 + 64), v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::hitTree(SceneComp, tree_type, (const Vector3 *)(v2 + 32), (const Vector3 *)(v2 + 64));
  result = 0;
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

// Line 716: range 00000000159DDD1A-00000000159DDD86
int32_t __cdecl SceneHandler::onWidgetQuickHitTreeReq(
        SceneHandler *const this,
        const proto::WidgetQuickHitTreeReq *req,
        proto::WidgetQuickHitTreeRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::widgetQuickHitTree(SceneComp, req, rsp_0);
  return proto::WidgetQuickHitTreeRsp::retcode(rsp_0);
};

// Line 725: range 00000000159DDD88-00000000159DE552
int32_t __cdecl SceneHandler::onJoinPlayerSceneReq(
        SceneHandler *const this,
        const proto::JoinPlayerSceneReq *req,
        proto::JoinPlayerSceneRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // r14
  uint32_t Uid; // eax
  GameserverService *v16; // r14
  common::minet::PacketPtr v17; // rdi
  PlayerSceneComp *SceneComp; // r14
  uint32_t v19; // eax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int32_t result; // eax
  unsigned int v25; // [rsp+20h] [rbp-130h] BYREF
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  uint32_t target_uid; // [rsp+28h] [rbp-128h]
  int32_t ret; // [rsp+2Ch] [rbp-124h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-110h] BYREF
  char v31[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 avatar_ptr:726 64 16 21 target_player_ptr:740 96 16 21 logout_packet_ptr:745 128 24 1"
                        "4 logout_req:743";
  *(_QWORD *)(v3 + 16) = SceneHandler::onJoinPlayerSceneReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v3 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onJoinPlayerSceneReq",
      729);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v30,
           (const char (*)[25])"getCurAvatar fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = 104;
  }
  else
  {
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( Creature::getLifeState(v8) == LIFE_ALIVE )
    {
      target_uid = proto::JoinPlayerSceneReq::target_uid(req);
      v11 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v11);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), GameThreadLocal + 16);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        proto::PlayerLogoutReq::PlayerLogoutReq((proto::PlayerLogoutReq *const)(v3 + 128));
        proto::PlayerLogoutReq::set_reason(
          (proto::PlayerLogoutReq *const)(v3 + 128),
          PlayerLogoutReq_Reason_PLAYER_TRANSFER);
        common::minet::PacketUtils::createPacket<proto::PlayerLogoutReq>((const proto::PlayerLogoutReq *)(v3 + 96));
        if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/scene_handler.cpp",
            "onJoinPlayerSceneReq",
            748);
          v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v30,
                  (const char (*)[26])"createPacket failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v7 = 0;
        }
        else
        {
          v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::minet::Packet::setUserId(v14, Uid);
          v16 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
          GameserverService::setPacketGameThreadIndex(v16, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          v17._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v3 + 96);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
          v17._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
          ServiceBox::pushPacketToService(v17);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::setTransferTargetUid(this->player_, target_uid);
          v7 = 509;
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
        proto::PlayerLogoutReq::~PlayerLogoutReq((proto::PlayerLogoutReq *const)(v3 + 128));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        v19 = proto::JoinPlayerSceneReq::target_uid(req);
        ret = PlayerSceneComp::joinPlayerScene(SceneComp, v19);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onJoinPlayerSceneReq",
            762);
          v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v30,
                  (const char (*)[29])"joinPlayerScene failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v25 = Player::getUid(this->player_);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v25);
          v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" target_uid:");
          val = proto::JoinPlayerSceneReq::target_uid(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v7 = ret;
        }
        else
        {
          v7 = 0;
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onJoinPlayerSceneReq",
        735);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v30,
             (const char (*)[21])"avatar is not alive:");
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v7 = 102;
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  result = v7;
  if ( v31 == (char *)v3 )
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

// Line 770: range 00000000159DE554-00000000159DECB8
int32_t __cdecl SceneHandler::onSceneKickPlayerReq(
        SceneHandler *const this,
        const proto::SceneKickPlayerReq *req,
        proto::SceneKickPlayerRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  PlayerScenePlayComp *ScenePlayComp; // rax
  common::milog::MiLogStream *v8; // rbx
  PlayerMpPlayComp *MpPlayComp; // rax
  common::milog::MiLogStream *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 target_uid:771 48 4 7 ret:802 64 16 13 world_ptr:795";
  *(_QWORD *)(v3 + 16) = SceneHandler::onSceneKickPlayerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::SceneKickPlayerReq::target_uid(req);
  proto::SceneKickPlayerRsp::set_target_uid(rsp_0, *(_DWORD *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Player::getUid(this->player_) == *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      0x19u,
      "./src/handler/scene_handler.cpp",
      "onSceneKickPlayerReq",
      777);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v23, (const char (*)[21])"kick self is invalid");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = -1;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ScenePlayComp = Player::getScenePlayComp(this->player_);
  if ( PlayerScenePlayComp::isAnyScenePlayBattleEnabled(ScenePlayComp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onSceneKickPlayerReq",
      784);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v23,
           (const char (*)[28])"in scene play battle, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = 1228;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpPlayComp = Player::getMpPlayComp(this->player_);
  if ( PlayerMpPlayComp::isAnyMpPlayBattleStarted(MpPlayComp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onSceneKickPlayerReq",
      791);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v23,
           (const char (*)[25])"in mp play battle, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSceneKickPlayerReq",
      798);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v23,
            (const char (*)[32])"getMyPlayerWorld nullptr, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = -1;
  }
  else
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 104LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v12)(v11, *(unsigned int *)(v3 + 32));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onSceneKickPlayerReq",
        805);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v23,
              (const char (*)[30])"checkKickPlayer failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" ,target_uid: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" ,ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v18 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 112LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))v19)(v18, *(unsigned int *)(v3 + 32), 0LL);
      v6 = 0;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
LABEL_40:
  result = v6;
  if ( v24 == (char *)v3 )
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

// Line 814: range 00000000159DECBA-00000000159DF0BA
int32_t __cdecl SceneHandler::onBackMyWorldReq(
        SceneHandler *const this,
        const proto::BackMyWorldReq *req,
        proto::BackMyWorldRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 17 cur_scene_ptr:815 64 16 17 cur_world_ptr:816";
  *(_QWORD *)(v3 + 16) = SceneHandler::onBackMyWorldReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL)
    && std::operator!=<World>((const std::shared_ptr<World> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onBackMyWorldReq",
      823);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v14,
           (const char (*)[56])"cur_world_ptr not null, but cur_scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    ret = PlayerSceneComp::backMyWorld(SceneComp, E_BACK_MY_WORLD_BY_PLAYER_REQ);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onBackMyWorldReq",
        830);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v14,
              (const char (*)[25])"backMyWorld failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    v8 = ret;
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v8;
  if ( v15 == (char *)v3 )
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

// Line 836: range 00000000159DF0BC-00000000159DF1E8
int32_t __cdecl SceneHandler::onSeeMonsterReq(
        SceneHandler *const this,
        const proto::SeeMonsterReq *req,
        proto::SeeMonsterRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v4 = proto::SeeMonsterReq::monster_id(req);
  ret = PlayerSceneComp::addSeenMonster(SceneComp, v4);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSeeMonsterReq",
      840);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v9,
           (const char (*)[28])"addSeenMonster failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  return ret;
};

// Line 846: range 00000000159DF1EA-00000000159DF305
int32_t __cdecl SceneHandler::onWorldPlayerReviveReq(
        SceneHandler *const this,
        const proto::WorldPlayerReviveReq *req,
        proto::WorldPlayerReviveRsp *rsp_0)
{
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  ret = PlayerAvatarComp::rebornTeam(AvatarComp);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onWorldPlayerReviveReq",
      856);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"rebornTeam failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  return ret;
};

// Line 862: range 00000000159DF306-00000000159DF6B4
int32_t __cdecl SceneHandler::onExecuteGadgetLuaReq(
        SceneHandler *const this,
        const proto::ExecuteGadgetLuaReq *req,
        proto::ExecuteGadgetLuaRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  Gadget *v10; // r14
  unsigned int v11; // r15d
  unsigned int v12; // eax
  int32_t result; // eax
  google::protobuf::int32 param3; // [rsp+14h] [rbp-ECh]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 20 source_entity_id:870 64 16 13 scene_ptr:863 96 16 14 gadget_ptr:871";
  *(_QWORD *)(v3 + 16) = SceneHandler::onExecuteGadgetLuaReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onExecuteGadgetLuaReq",
      867);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v15,
           (const char (*)[24])"getCurScene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::ExecuteGadgetLuaReq::source_entity_id(req);
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v8);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onExecuteGadgetLuaReq",
        874);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v15,
             (const char (*)[31])"entity_ptr is null, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = 504;
    }
    else
    {
      v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      param3 = proto::ExecuteGadgetLuaReq::param3(req);
      v11 = proto::ExecuteGadgetLuaReq::param2(req);
      v12 = proto::ExecuteGadgetLuaReq::param1(req);
      v7 = Gadget::executeGadgetLua(v10, v12, v11, param3);
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v16 == (char *)v3 )
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

// Line 881: range 00000000159DF6B6-00000000159DF952
int32_t __cdecl SceneHandler::onCutSceneFinishNotify(
        SceneHandler *const this,
        const proto::CutSceneFinishNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  Scene *v7; // rax
  SceneMiscComp *MiscComp; // r14
  uint32_t v9; // r15d
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:882";
  *(_QWORD *)(v2 + 16) = SceneHandler::onCutSceneFinishNotify;
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
      1u,
      "./src/handler/scene_handler.cpp",
      "onCutSceneFinishNotify",
      885);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v13,
           (const char (*)[26])"getCurScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MiscComp = Scene::getMiscComp(v7);
    v9 = proto::CutSceneFinishNotify::cutscene_id(notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v6 = SceneMiscComp::onCutSceneFinishNotify(MiscComp, Uid, v9);
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

// Line 893: range 00000000159DF954-00000000159E0CC9
int32_t __cdecl SceneHandler::onClientScriptEventNotify(
        SceneHandler *const this,
        const proto::ClientScriptEventNotify *notify)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int v15; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  google::protobuf::uint32 v26; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  google::protobuf::int32 v28; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  int32_t *p_param1; // rax
  google::protobuf::int32 v31; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  google::protobuf::int32 v33; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  uint32_t *p_uid; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  uint32_t v40; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  int32_t *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  _BOOL4 v47; // r15d
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  _BOOL4 v52; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rdx
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  uint32_t v59; // eax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  int v64; // r15d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rdx
  bool *p_has_reach_event; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  uint32_t v72; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rdx
  int32_t *v74; // rax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  uint32_t PointArrayId; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  int32_t v80; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rdx
  int32_t *v82; // rax
  Group *v83; // rax
  int32_t result; // eax
  int i; // [rsp+20h] [rbp-180h]
  data::EventType event_type; // [rsp+24h] [rbp-17Ch]
  char *val; // [rsp+28h] [rbp-178h] BYREF
  common::milog::MiLogStream v88; // [rsp+30h] [rbp-170h] BYREF
  char v89[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 20 source_entity_id:900 48 4 15 route_index:969 64 16 13 scene_ptr:894 96 16 14 entity_pt"
                        "r:901 128 16 13 group_ptr:907 160 16 13 event_ptr:924 192 16 15 monster_ptr:957 224 16 13 route_"
                        "ptr:963 256 16 19 route_point_ptr:975";
  *(_QWORD *)(v3 + 16) = SceneHandler::onClientScriptEventNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    *(_DWORD *)(v3 + 32) = proto::ClientScriptEventNotify::source_entity_id(notify);
    v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 120LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v8)(v3 + 96, v7, *(unsigned int *)(v3 + 32));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onClientScriptEventNotify",
        904);
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v88,
             (const char (*)[36])"findEntity fails, source_entity_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v88);
      v2 = -1;
      goto LABEL_96;
    }
    std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Entity::getGroup((const Entity *const)(v3 + 128));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onClientScriptEventNotify",
        910);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v88,
              (const char (*)[37])"group_ptr is null, source_entity_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v88);
      v2 = -1;
      goto LABEL_95;
    }
    v15 = proto::ClientScriptEventNotify::event_type(notify);
    event_type = v15;
    if ( v15 != 2701 && (v15 > 2701 || v15 != 10 && v15 != 25) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onClientScriptEventNotify",
        921);
      v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v88,
              (const char (*)[20])"invalid event_type:");
      val = (char *)data::enumValToStr(event_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v88);
      v2 = -1;
LABEL_95:
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 128));
LABEL_96:
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
      goto LABEL_97;
    }
    EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 160), v15);
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onClientScriptEventNotify",
        927);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v88,
              (const char (*)[31])"createEvent fails, event_type:");
      val = (char *)data::enumValToStr(event_type);
      v18 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v17, (const char *const *)&val);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v88);
      v2 = -1;
    }
    else
    {
      v20 = *(_DWORD *)(v3 + 32);
      v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      p_source_entity_id = &v21->source_entity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_source_entity_id);
      }
      v21->source_entity_id = v20;
      v23 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      ConfigId = Entity::getConfigId(v23);
      std::to_string((std::string *)&v88, ConfigId);
      v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      std::string::operator=(&v25->source_name, &v88);
      std::string::~string(&v88);
      v26 = proto::ClientScriptEventNotify::target_entity_id(notify);
      v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&v27->target_entity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v27->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v27 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->target_entity_id);
      }
      v27->target_entity_id = v26;
      for ( i = 0; i < proto::ClientScriptEventNotify::param_list_size(notify); ++i )
      {
        if ( i == 2 )
        {
          v33 = proto::ClientScriptEventNotify::param_list(notify, 2);
          v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          p_param3 = &v34->param3;
          if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param3);
          }
          v34->param3 = v33;
        }
        else if ( i <= 2 )
        {
          if ( i )
          {
            if ( i == 1 )
            {
              v31 = proto::ClientScriptEventNotify::param_list(notify, 1);
              v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&v32->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v32->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v32 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v32->param2);
              }
              v32->param2 = v31;
            }
          }
          else
          {
            v28 = proto::ClientScriptEventNotify::param_list(notify, 0);
            v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_param1 = &v29->param1;
            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param1);
            }
            v29->param1 = v28;
          }
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v37 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      p_uid = &v37->uid;
      if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_uid);
      }
      v37->uid = Uid;
      if ( event_type == EVENT_AVATAR_NEAR_PLATFORM )
      {
        v39 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v40 = Entity::getConfigId(v39);
        v41 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v42 = &v41->param1;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v42);
        }
        v41->param1 = v40;
      }
      else if ( event_type == EVENT_PLATFORM_ARRIVAL )
      {
        std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v3 + 192));
        if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 192), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onClientScriptEventNotify",
            960);
          v43 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v88,
                  (const char (*)[31])"entity is not monster, entity:");
          v44 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v45 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v43, v44);
          v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v88);
          v2 = -1;
          v47 = 0;
        }
        else
        {
          std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          Monster::getMonsterRoute((const Monster *const)(v3 + 224));
          if ( std::operator==<PlatformRoute>((const std::shared_ptr<PlatformRoute> *)(v3 + 224), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onClientScriptEventNotify",
              966);
            v48 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v88,
                    (const char (*)[34])"monster's route is null, monster:");
            v49 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            v50 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v48, v49);
            v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v50, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v88);
            v2 = -1;
            v52 = 0;
          }
          else
          {
            v53 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v53->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v53 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = v53->param1;
            v54 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            if ( !PlatformRoute::isVaildIndex(v54, *(_DWORD *)(v3 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v88,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/scene_handler.cpp",
                "onClientScriptEventNotify",
                972);
              v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v88,
                      (const char (*)[21])"invalid route_index:");
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v55,
                      (const unsigned int *)(v3 + 48));
              v57 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v56,
                      (const char (*)[10])" monster:");
              v58 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v57, v58);
              common::milog::MiLogStream::~MiLogStream(&v88);
              v2 = -1;
              v52 = 0;
            }
            else
            {
              v59 = (unsigned int)std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              PlatformRoute::getPoint((const PlatformRoute *const)(v3 + 256), v59);
              if ( std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v3 + 256), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v88,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/scene_handler.cpp",
                  "onClientScriptEventNotify",
                  978);
                v60 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v88,
                        (const char (*)[34])"route_point is null, route_index:");
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        (const unsigned int *)(v3 + 48));
                v62 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v61,
                        (const char (*)[10])" monster:");
                v63 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v62, v63);
                common::milog::MiLogStream::~MiLogStream(&v88);
                v2 = -1;
                v64 = 0;
              }
              else
              {
                v65 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                p_has_reach_event = &v65->has_reach_event;
                if ( *(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3) + 0x7FFF8000) != 0
                  && ((unsigned __int8)p_has_reach_event & 7) >= *(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3)
                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load1(p_has_reach_event);
                }
                if ( !v65->has_reach_event )
                {
                  common::milog::MiLogStream::create(
                    &v88,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/handler/scene_handler.cpp",
                    "onClientScriptEventNotify",
                    983);
                  v67 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          &v88,
                          (const char (*)[46])"route_point not has_reach_event, route_index:");
                  v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v67,
                          (const unsigned int *)(v3 + 48));
                  v69 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v68,
                          (const char (*)[10])" monster:");
                  v70 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v69, v70);
                  common::milog::MiLogStream::~MiLogStream(&v88);
                  v2 = -1;
                  v64 = 0;
                }
                else
                {
                  v71 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v72 = Entity::getConfigId(v71);
                  v73 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v74 = &v73->param1;
                  if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v74);
                  }
                  v73->param1 = v72;
                  v75 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                  PointArrayId = PlatformRoute::getPointArrayId(v75);
                  v77 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v77->param2 >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v77->param2 >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v77 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v77->param2);
                  }
                  v77->param2 = PointArrayId;
                  v78 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
                    v78 = __asan_report_load8();
                  v79 = *(_QWORD *)v78 + 32LL;
                  if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
                    v78 = __asan_report_load8();
                  v80 = (*(__int64 (__fastcall **)(unsigned __int64))v79)(v78);
                  v81 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v82 = &v81->param3;
                  if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v82 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v82);
                  }
                  v81->param3 = v80;
                  v64 = 1;
                }
              }
              std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 256));
              v52 = v64 == 1;
            }
          }
          std::shared_ptr<PlatformRoute>::~shared_ptr((std::shared_ptr<PlatformRoute> *const)(v3 + 224));
          v47 = v52;
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 192));
        if ( !v47 )
          goto LABEL_94;
      }
      v83 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Group::handleEvent(v83, (EventPtr *)(v3 + 160));
      v2 = 0;
    }
LABEL_94:
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 160));
    goto LABEL_95;
  }
  common::milog::MiLogStream::create(
    &v88,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/scene_handler.cpp",
    "onClientScriptEventNotify",
    897);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v88,
         (const char (*)[26])"getCurScene failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v88);
  v2 = -1;
LABEL_97:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v2;
  if ( v89 == (char *)v3 )
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

// Line 995: range 00000000159E0CCA-00000000159E15F7
int32_t __cdecl SceneHandler::onUnlockTransPointReq(
        SceneHandler *const this,
        const proto::UnlockTransPointReq *req,
        proto::UnlockTransPointRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const Vector3 *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-140h] BYREF
  uint32_t check_distance; // [rsp+24h] [rbp-13Ch]
  PlayerSceneComp *scene_comp; // [rsp+28h] [rbp-138h]
  Vector3 pos2; // [rsp+34h] [rbp-12Ch] BYREF
  std::shared_ptr<Config> v35; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-110h] BYREF
  char v37[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 scene_id:996 48 4 12 point_id:997 64 16 19 scene_point_ptr:998 96 16 15 avatar_ptr:101"
                        "5 128 16 22 vehicle_point_ptr:1028 160 16 20 trans_point_ptr:1034";
  *(_QWORD *)(v3 + 16) = SceneHandler::onUnlockTransPointReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::UnlockTransPointReq::scene_id(req);
  *(_DWORD *)(v3 + 48) = proto::UnlockTransPointReq::point_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  JsonConfigMgr::findScenePoint<data::ConfigScenePoint>(
    (const JsonConfigMgr *const)(v3 + 64),
    v6 + 93080,
    *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( std::operator==<data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onUnlockTransPointReq",
      1001);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v36,
           (const char (*)[42])"findScenePoint SceneTransPoint scene_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" point_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v36);
    v11 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_comp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(scene_comp) )
    {
      v11 = 512;
    }
    else
    {
      v12 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v12->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v12->type )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onUnlockTransPointReq",
          1012);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v36,
          (const char (*)[38])"Just support normal transmit point_id");
        common::milog::MiLogStream::~MiLogStream(&v36);
        v11 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onUnlockTransPointReq",
            1018);
          v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v36,
                  (const char (*)[26])"getCurAvatar fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v11 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v35);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
          check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v14->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v35);
          v15 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Vector3::Vector3(&pos2, &v15->pos);
          v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Position = Entity::getPosition((const Entity *const)v16);
          if ( getDistance(Position, &pos2) <= (float)(int)check_distance )
          {
            std::dynamic_pointer_cast<data::SceneVehicleSummonPoint,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 128));
            if ( std::operator!=<data::SceneVehicleSummonPoint>(
                   0LL,
                   (const std::shared_ptr<data::SceneVehicleSummonPoint> *)(v3 + 128)) )
            {
              v11 = PlayerSceneComp::unlockPoint(scene_comp, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48), 1);
            }
            else
            {
              std::dynamic_pointer_cast<data::SceneTransPoint,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 160));
              if ( std::operator==<data::SceneTransPoint>(
                     0LL,
                     (const std::shared_ptr<data::SceneTransPoint> *)(v3 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/scene_handler.cpp",
                  "onUnlockTransPointReq",
                  1037);
                v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        &v36,
                        (const char (*)[10])"scene_id:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 32));
                v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v26,
                        (const char (*)[11])" point_id:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 48));
                v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v28,
                        (const char (*)[26])off_258EE020);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
                common::milog::MiLogStream::~MiLogStream(&v36);
                v11 = -1;
              }
              else
              {
                v11 = PlayerSceneComp::unlockPointFromClient(scene_comp, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48), 1);
              }
              std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 160));
            }
            std::shared_ptr<data::SceneVehicleSummonPoint>::~shared_ptr((std::shared_ptr<data::SceneVehicleSummonPoint> *const)(v3 + 128));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onUnlockTransPointReq",
              1024);
            v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v36, (const char (*)[6])"uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
            v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" avatar: ");
            v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v22 = Entity::getPosition((const Entity *const)v21);
            v23 = operator<<(v20, v22);
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" point: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v36);
            v11 = 520;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
      }
    }
  }
  std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v3 + 64));
  result = v11;
  if ( v37 == (char *)v3 )
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

// Line 1046: range 00000000159E15F8-00000000159E1A8A
int32_t __cdecl SceneHandler::onSceneWeatherForcastReq(
        SceneHandler *const this,
        const proto::SceneWeatherForcastReq *req,
        proto::SceneWeatherForcastRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  WeatherArea *v10; // rax
  std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint64_t NextClimateTime; // rdx
  std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t ClimateType; // edx
  std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 *v16; // rdx
  int32_t result; // eax
  std::list<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::list<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::list<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 19 height_area_id:1054 64 16 20 world_scene_ptr:1047 96 16 21 weather_area_ptr:1055";
  *(_QWORD *)(v3 + 16) = SceneHandler::onSceneWeatherForcastReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSceneWeatherForcastReq",
      1050);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v22, (const char (*)[24])"findMainWorldScene fail");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::SceneWeatherForcastReq::weather_area_id(req);
    v7 = (unsigned __int64)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 344LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v8)(v3 + 96, v7, *(unsigned int *)(v3 + 48));
    if ( std::operator==<WeatherArea>((const std::shared_ptr<WeatherArea> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onSceneWeatherForcastReq",
        1058);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v22,
             (const char (*)[38])"findWeatherArea fail, height_area_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      WeatherArea::refreshWeatherArea(v10, REFRESH_WEATHER_FORCAST);
      v11 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      NextClimateTime = WeatherArea::getNextClimateTime(v11);
      proto::SceneWeatherForcastRsp::set_next_climate_time(rsp_0, NextClimateTime);
      v13 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      ClimateType = WeatherArea::getClimateType(v13);
      proto::SceneWeatherForcastRsp::add_forcast_climate_list(rsp_0, ClimateType);
      v15 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      __for_range = WeatherArea::getForcastClimateList[abi:cxx11](v15);
      __for_begin._M_node = std::list<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::list<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v16 = (google::protobuf::uint32 *)std::_List_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SceneWeatherForcastRsp::add_forcast_climate_list(rsp_0, *v16);
        std::_List_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      v6 = 0;
    }
    std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v3 + 96));
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
  result = v6;
  if ( v23 == (char *)v3 )
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

// Line 1075: range 00000000159E1DB8-00000000159E3A23
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SceneHandler::onMarkMapReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v6; // rsi
  int32_t v7; // r14d
  const proto::MapMarkPoint *v8; // rax
  const std::string *v9; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v11; // rsi
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const proto::MapMarkPoint *v16; // rax
  const std::string *v17; // rax
  GameserverService *v18; // r14
  const std::shared_ptr<common::minet::Packet> *v19; // rsi
  std::string::size_type v20; // rdx
  common::minet::PacketPtr v21; // rdi
  common::minet::Packet *v22; // rax
  common::minet::Packet *v23; // rax
  common::minet::PacketPtr v24; // rdi
  common::minet::Packet *v25; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v26; // rsi
  common::minet::Packet *v27; // rax
  common::milog::MiLogStream *v28; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  const proto::MapMarkPoint *v31; // rax
  const std::string *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  const proto::MapMarkPoint *v34; // rax
  google::protobuf::uint32 v35; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  google::protobuf::int32 v37; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  const proto::MapMarkPoint *v39; // rax
  google::protobuf::int32 v40; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  const proto::MapMarkPoint *v42; // rax
  const proto::Vector *v43; // rax
  float v44; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  const proto::MapMarkPoint *v46; // rax
  const proto::Vector *v47; // rax
  float v48; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  const proto::MapMarkPoint *v50; // rax
  google::protobuf::uint32 v51; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // r14
  const proto::MapMarkPoint *v53; // rax
  google::protobuf::uint32 v54; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // r14
  const proto::MapMarkPoint *v56; // rax
  google::protobuf::uint32 v57; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // r14
  const proto::MapMarkPoint *v59; // rax
  const proto::Vector *v60; // rax
  float v61; // xmm0_4
  const proto::MapMarkPoint *v62; // rax
  const std::string *v63; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  const proto::MapMarkPoint *v66; // rax
  const std::string *v67; // rax
  google::protobuf::int32 v68; // eax
  SceneExcelConfigMgr *p_scene_config_mgr; // r14
  const proto::MapMarkPoint *v70; // rax
  uint32_t v71; // eax
  common::milog::MiLogStream *v72; // r14
  const proto::MapMarkPoint *v73; // rax
  proto::MarkMapReq_Operation v74; // eax
  PlayerSceneComp *v75; // r14
  const proto::MapMarkPoint *v76; // rax
  uint32_t v77; // eax
  PlayerSceneComp *v78; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  bool v80; // r14
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r14
  const proto::MapMarkPoint *v84; // rax
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool> >::type *v85; // rax
  common::milog::MiLogStream *v86; // r14
  proto::MapMarkPoint *v87; // rax
  common::milog::MiLogStream *v88; // r14
  proto::MapMarkPoint *v89; // rax
  PlayerSceneComp *SceneComp; // r14
  const proto::MapMarkPoint *v91; // rax
  uint32_t v92; // eax
  const proto::MapMarkPoint *v93; // rax
  common::milog::MiLogStream *v94; // r14
  proto::MapMarkPoint *v95; // rax
  common::milog::MiLogStream *v96; // r14
  proto::MapMarkPoint *v97; // rax
  common::milog::MiLogStream *v98; // r14
  PlayerSceneComp *v99; // r14
  const proto::MapMarkPoint *v100; // rax
  uint32_t v101; // eax
  const proto::MapMarkPoint *v102; // rax
  common::milog::MiLogStream *v103; // r14
  proto::MapMarkPoint *v104; // rax
  const proto::MapMarkPoint *v105; // rax
  common::milog::MiLogStream *v106; // r14
  proto::MapMarkPoint *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r14
  proto::MapMarkPoint *v110; // rax
  common::milog::MiLogStream *v111; // r14
  PlayerSceneComp *v112; // r14
  google::protobuf::RepeatedPtrField<proto::MapMarkPoint> *v113; // rax
  Player *v114; // r14
  GameserverService *v115; // r14
  common::milog::MiLogStream *v116; // rcx
  int32_t result; // eax
  std::string p_packet_ptra; // [rsp+0h] [rbp-330h]
  proto::AsyncHttpType async_http_type; // [rsp+18h] [rbp-318h]
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  uint32_t map_mark_max_length; // [rsp+20h] [rbp-310h]
  int32_t ret_0; // [rsp+24h] [rbp-30Ch]
  std::__detail::_Node_iterator_base<proto::MapMarkPoint,true> __y; // [rsp+28h] [rbp-308h] BYREF
  const proto::MarkMapReq *req; // [rsp+30h] [rbp-300h]
  proto::MarkMapRsp *rsp_0; // [rsp+38h] [rbp-2F8h]
  std::unordered_set<proto::MapMarkPoint> *mark_point_set_ptr_0; // [rsp+40h] [rbp-2F0h]
  std::unordered_set<proto::MapMarkPoint> *mark_point_set_ptr_1; // [rsp+50h] [rbp-2E0h]
  std::unordered_set<proto::MapMarkPoint> *mark_point_set_ptr; // [rsp+58h] [rbp-2D8h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool> >::type *it; // [rsp+60h] [rbp-2D0h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool> >::type *success; // [rsp+68h] [rbp-2C8h]
  std::pair<std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool> __in; // [rsp+70h] [rbp-2C0h] BYREF
  common::milog::MiLogStream v133; // [rsp+80h] [rbp-2B0h] BYREF
  std::string v134; // [rsp+A0h] [rbp-290h] BYREF
  common::milog::MiLogStream v135; // [rsp+C0h] [rbp-270h] BYREF
  char v136[592]; // [rsp+E0h] [rbp-250h] BYREF

  p_packet_ptra._M_string_length = (std::string::size_type)this;
  p_packet_ptra._M_dataplus._M_p = (std::string::pointer)v2;
  v3 = (unsigned __int64)v136;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 11 holder:1097 64 4 21 total_mark_count:1139 80 8 7 it:1192 112 16 12 req_ptr:1076 144 16"
                        " 12 rsp_ptr:1076 176 16 21 mark_map_log_ptr:1098 208 16 10 timer:1085 240 240 13 http_req:1085";
  *(_QWORD *)(v3 + 16) = SceneHandler::onMarkMapReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v6);
  common::minet::Packet::getConstProto<proto::MarkMapReq>((common::minet::Packet *const)(v3 + 112));
  if ( std::operator==<proto::MarkMapReq const>((const std::shared_ptr<const proto::MarkMapReq> *)(v3 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v135,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onMarkMapReq",
      1076);
    common::milog::MiLogStream::operator()(&v135, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v135);
    v7 = -1;
    goto LABEL_89;
  }
  req = std::__shared_ptr_access<proto::MarkMapReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MarkMapReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
  common::tools::perf::make_shared<proto::MarkMapRsp>();
  rsp_0 = std::__shared_ptr_access<proto::MarkMapRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MarkMapRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
  proto::MarkMapRsp::set_retcode(rsp_0, -1);
  if ( proto::MarkMapReq::op(req) == MarkMapReq_Operation_DEL )
    goto LABEL_26;
  v8 = proto::MarkMapReq::mark(req);
  v9 = proto::MapMarkPoint::name[abi:cxx11](v8);
  if ( (unsigned __int8)std::string::empty(v9) == 1 )
    goto LABEL_26;
  v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v11);
  if ( common::minet::Packet::getExt(v12, 2u) )
  {
    v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v26);
    if ( common::minet::Packet::getExt(v27, 3u) )
    {
      common::milog::MiLogStream::create(
        &v135,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onMarkMapReq",
        1092);
      v28 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v135,
              (const char (*)[38])"setNickName failed, word illegal uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v135);
      proto::MarkMapRsp::set_retcode(rsp_0, 514);
      goto LABEL_83;
    }
LABEL_26:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v135, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x83Eu, p_packet_ptra);
    std::string::~string(&v135);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMarkMap>();
    v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v31 = proto::MarkMapReq::mark(req);
    v32 = proto::MapMarkPoint::name[abi:cxx11](v31);
    proto_log::PlayerLogBodyMarkMap::set_mark_name(v30, v32);
    v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v34 = proto::MarkMapReq::mark(req);
    v35 = proto::MapMarkPoint::scene_id(v34);
    proto_log::PlayerLogBodyMarkMap::set_scene_id(v33, v35);
    v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v37 = proto::MarkMapReq::op(req);
    proto_log::PlayerLogBodyMarkMap::set_mark_op(v36, v37);
    v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v39 = proto::MarkMapReq::mark(req);
    v40 = proto::MapMarkPoint::point_type(v39);
    proto_log::PlayerLogBodyMarkMap::set_point_type(v38, v40);
    v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v42 = proto::MarkMapReq::mark(req);
    v43 = proto::MapMarkPoint::pos(v42);
    v44 = proto::Vector::x(v43);
    proto_log::PlayerLogBodyMarkMap::set_mark_x(v41, (int)v44);
    v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v46 = proto::MarkMapReq::mark(req);
    v47 = proto::MapMarkPoint::pos(v46);
    v48 = proto::Vector::y(v47);
    proto_log::PlayerLogBodyMarkMap::set_mark_y(v45, (int)v48);
    v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v50 = proto::MarkMapReq::mark(req);
    v51 = proto::MapMarkPoint::from_type(v50);
    proto_log::PlayerLogBodyMarkMap::set_from_type(v49, v51);
    v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v53 = proto::MarkMapReq::mark(req);
    v54 = proto::MapMarkPoint::monster_id(v53);
    proto_log::PlayerLogBodyMarkMap::set_monster_id(v52, v54);
    v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v56 = proto::MarkMapReq::mark(req);
    v57 = proto::MapMarkPoint::quest_id(v56);
    proto_log::PlayerLogBodyMarkMap::set_quest_id(v55, v57);
    v58 = std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMarkMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    v59 = proto::MarkMapReq::mark(req);
    v60 = proto::MapMarkPoint::pos(v59);
    v61 = proto::Vector::z(v60);
    proto_log::PlayerLogBodyMarkMap::set_mark_z(v58, (int)v61);
    proto::MarkMapRsp::set_retcode(rsp_0, 0);
    if ( proto::MarkMapReq::op(req) == MarkMapReq_Operation_ADD
      || proto::MarkMapReq::op(req) == MarkMapReq_Operation_MOD )
    {
      v62 = proto::MarkMapReq::mark(req);
      v63 = proto::MapMarkPoint::name[abi:cxx11](v62);
      if ( (unsigned __int8)std::string::empty(v63) != 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        v65 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        map_mark_max_length = ConstValueExcelConfigMgr::getMapMarkMaxLength(&v65->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
        v66 = proto::MarkMapReq::mark(req);
        v67 = proto::MapMarkPoint::name[abi:cxx11](v66);
        ret_0 = Hk4eUtils::checkStrUtf8Len(v67, map_mark_max_length);
        if ( ret_0 )
        {
          if ( ret_0 == 131 )
            v68 = 519;
          else
            v68 = 514;
          proto::MarkMapRsp::set_retcode(rsp_0, v68);
          goto LABEL_82;
        }
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__in);
    p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in)->design_config.txt_config_mgr.scene_config_mgr;
    v70 = proto::MarkMapReq::mark(req);
    v71 = proto::MapMarkPoint::scene_id(v70);
    LOBYTE(p_scene_config_mgr) = SceneExcelConfigMgr::isSceneDeleteMapMarkPoint(p_scene_config_mgr, v71);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
    if ( (_BYTE)p_scene_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v135,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onMarkMapReq",
        1125);
      v72 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(&v135, (const char (*)[45])off_258EE360);
      v73 = proto::MarkMapReq::mark(req);
      *(_DWORD *)(v3 + 64) = proto::MapMarkPoint::scene_id(v73);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v135);
      proto::MarkMapRsp::set_retcode(rsp_0, 552);
LABEL_82:
      std::shared_ptr<proto_log::PlayerLogBodyMarkMap>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMarkMap> *const)(v3 + 176));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
LABEL_83:
      v115 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__in,
        (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
      std::shared_ptr<proto::MarkMapRsp>::shared_ptr(
        (std::shared_ptr<proto::MarkMapRsp> *const)(v3 + 208),
        (const std::shared_ptr<proto::MarkMapRsp> *)(v3 + 144));
      LOBYTE(v115) = ServiceBase::sendRsp<proto::MarkMapRsp>(
                       v115,
                       (std::shared_ptr<proto::MarkMapRsp> *)(v3 + 208),
                       (common::minet::PacketPtr *)&__in) != 0;
      std::shared_ptr<proto::MarkMapRsp>::~shared_ptr((std::shared_ptr<proto::MarkMapRsp> *const)(v3 + 208));
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__in);
      if ( (_BYTE)v115 )
      {
        common::milog::MiLogStream::create(
          &v135,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onMarkMapReq",
          1226);
        v116 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 &v135,
                 (const char (*)[25])"send rsp failed, player:");
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v116, *(const Player **)(p_packet_ptra._M_string_length + 8));
        common::milog::MiLogStream::~MiLogStream(&v135);
        v7 = -1;
      }
      else
      {
        v7 = proto::MarkMapRsp::retcode(rsp_0);
      }
      goto LABEL_88;
    }
    v74 = proto::MarkMapReq::op(req);
    if ( v74 != MarkMapReq_Operation_GET )
    {
      if ( v74 > MarkMapReq_Operation_GET )
      {
LABEL_75:
        common::milog::MiLogStream::create(
          &v135,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onMarkMapReq",
          1212);
        v111 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v135,
                 (const char (*)[26])"unknown mark point type: ");
        *(_DWORD *)(v3 + 64) = proto::MarkMapReq::op(req);
        common::milog::MiLogStream::operator<<<proto::MarkMapReq_Operation,(proto::MarkMapReq_Operation*)0>(
          v111,
          (const proto::MarkMapReq_Operation *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v135);
        proto::MarkMapRsp::set_retcode(rsp_0, 518);
        goto LABEL_76;
      }
      switch ( v74 )
      {
        case MarkMapReq_Operation_DEL:
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
          v91 = proto::MarkMapReq::mark(req);
          v92 = proto::MapMarkPoint::scene_id(v91);
          mark_point_set_ptr_0 = PlayerSceneComp::getMarkPointSet(SceneComp, v92);
          if ( !mark_point_set_ptr_0 )
            goto LABEL_71;
          v93 = proto::MarkMapReq::mark(req);
          if ( std::unordered_set<proto::MapMarkPoint>::erase(mark_point_set_ptr_0, v93) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v134,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onMarkMapReq",
              1174);
            v96 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)&v134,
                    (const char (*)[25])off_258EE540);
            v97 = (proto::MapMarkPoint *)proto::MarkMapReq::mark(req);
            google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v97);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v96, (const std::string *)&v135);
            std::string::~string(&v135);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v134,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onMarkMapReq",
              1169);
            v94 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)&v134,
                    (const char (*)[28])"no such mark point in set: ");
            v95 = (proto::MapMarkPoint *)proto::MarkMapReq::mark(req);
            google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v95);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v94, (const std::string *)&v135);
            std::string::~string(&v135);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
            proto::MarkMapRsp::set_retcode(rsp_0, 517);
          }
          break;
        case MarkMapReq_Operation_ADD:
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v75 = Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
          v76 = proto::MarkMapReq::mark(req);
          v77 = proto::MapMarkPoint::scene_id(v76);
          mark_point_set_ptr = PlayerSceneComp::getMarkPointSet(v75, v77);
          if ( mark_point_set_ptr )
          {
            if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v78 = Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
            *(_DWORD *)(v3 + 64) = PlayerSceneComp::getTotalMarkPointCount(v78);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&__in);
            v79 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in);
            v80 = ConstValueExcelConfigMgr::getMapMarkMaxCount(&v79->design_config.txt_config_mgr.const_value_config_mgr) <= *(_DWORD *)(v3 + 64);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
            if ( v80 )
            {
              proto::MarkMapRsp::set_retcode(rsp_0, 516);
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v134,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/scene_handler.cpp",
                "onMarkMapReq",
                1143);
              v81 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      (common::milog::MiLogStream *const)&v134,
                      (const char (*)[11])"there are ");
              v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v81,
                      (const unsigned int *)(v3 + 64));
              v83 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v82,
                      (const char (*)[33])" mark points, can not add more: ");
              google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, rsp_0);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v83, (const std::string *)&v135);
              std::string::~string(&v135);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
            }
            else
            {
              v84 = proto::MarkMapReq::mark(req);
              __in = std::unordered_set<proto::MapMarkPoint>::emplace<proto::MapMarkPoint const&>(
                       mark_point_set_ptr,
                       v84,
                       v84);
              it = std::get<0ul,std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool>(&__in);
              v85 = std::get<1ul,std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>,bool>(&__in);
              success = v85;
              if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)v85 & 7) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(v85);
              }
              if ( *success )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v134,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/scene_handler.cpp",
                  "onMarkMapReq",
                  1149);
                v86 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        (common::milog::MiLogStream *const)&v134,
                        (const char (*)[17])off_258EE460);
                v87 = (proto::MapMarkPoint *)proto::MarkMapReq::mark(req);
                google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v87);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, (const std::string *)&v135);
                std::string::~string(&v135);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v134,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/scene_handler.cpp",
                  "onMarkMapReq",
                  1153);
                v88 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        (common::milog::MiLogStream *const)&v134,
                        (const char (*)[39])off_258EE4A0);
                v89 = (proto::MapMarkPoint *)proto::MarkMapReq::mark(req);
                google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v89);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v88, (const std::string *)&v135);
                std::string::~string(&v135);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
                proto::MarkMapRsp::set_retcode(rsp_0, 515);
              }
            }
            break;
          }
          goto LABEL_71;
        case MarkMapReq_Operation_MOD:
          if ( !proto::MarkMapReq::has_old(req) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v134,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onMarkMapReq",
              1182);
            v98 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    (common::milog::MiLogStream *const)&v134,
                    (const char (*)[43])"no old mark point in req, can not mod it: ");
            google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, &req->google::protobuf::Message);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v98, (const std::string *)&v135);
            std::string::~string(&v135);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
            proto::MarkMapRsp::set_retcode(rsp_0, 517);
            break;
          }
          if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v99 = Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
          v100 = proto::MarkMapReq::mark(req);
          v101 = proto::MapMarkPoint::scene_id(v100);
          mark_point_set_ptr_1 = PlayerSceneComp::getMarkPointSet(v99, v101);
          if ( !mark_point_set_ptr_1 )
          {
LABEL_71:
            proto::MarkMapRsp::set_retcode(rsp_0, 552);
            break;
          }
          v102 = proto::MarkMapReq::old(req);
          *(std::unordered_set<proto::MapMarkPoint>::iterator *)(v3 + 80) = std::unordered_set<proto::MapMarkPoint>::find(
                                                                              mark_point_set_ptr_1,
                                                                              v102);
          __y._M_cur = std::unordered_set<proto::MapMarkPoint>::end(mark_point_set_ptr_1)._M_cur;
          if ( std::__detail::operator==<proto::MapMarkPoint,true>(
                 (const std::__detail::_Node_iterator_base<proto::MapMarkPoint,true> *)(v3 + 80),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v134,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onMarkMapReq",
              1195);
            v103 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                     (common::milog::MiLogStream *const)&v134,
                     (const char (*)[28])"no such mark point in set: ");
            v104 = (proto::MapMarkPoint *)proto::MarkMapReq::old(req);
            google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v104);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v103, (const std::string *)&v135);
            std::string::~string(&v135);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v134);
            proto::MarkMapRsp::set_retcode(rsp_0, 517);
          }
          else
          {
            std::unordered_set<proto::MapMarkPoint>::erase(
              mark_point_set_ptr_1,
              *(std::unordered_set<proto::MapMarkPoint>::iterator *)(v3 + 80));
            v105 = proto::MarkMapReq::mark(req);
            std::unordered_set<proto::MapMarkPoint>::emplace<proto::MapMarkPoint const&>(
              mark_point_set_ptr_1,
              v105,
              v105);
            common::milog::MiLogStream::create(
              &v133,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onMarkMapReq",
              1202);
            v106 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                     &v133,
                     (const char (*)[22])off_258EE5E0);
            v107 = (proto::MapMarkPoint *)proto::MarkMapReq::old(req);
            google::protobuf::Message::DebugString[abi:cxx11](&v134, v107);
            v108 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v106, &v134);
            v109 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v108, (const char (*)[6])" to: ");
            v110 = (proto::MapMarkPoint *)proto::MarkMapReq::mark(req);
            google::protobuf::Message::DebugString[abi:cxx11]((std::string *)&v135, v110);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v109, (const std::string *)&v135);
            std::string::~string(&v135);
            std::string::~string(&v134);
            common::milog::MiLogStream::~MiLogStream(&v133);
          }
          break;
        default:
          goto LABEL_75;
      }
    }
LABEL_76:
    if ( !proto::MarkMapRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v112 = Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
      v113 = proto::MarkMapRsp::mutable_mark_list(rsp_0);
      PlayerSceneComp::getAllMarkPoint(v112, v113);
      if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v114 = *(Player **)(p_packet_ptra._M_string_length + 8);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)&__in,
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMarkMap,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
        (const std::shared_ptr<proto_log::PlayerLogBodyMarkMap> *)(v3 + 176));
      Player::printStatLog(v114, (MessagePtr *)(v3 + 208), (MessagePtr *)&__in, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__in);
    }
    goto LABEL_82;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 176));
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
  if ( *(char *)(((unsigned __int64)&v13->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
    v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->is_word_filter_use_remote);
  is_word_filter_use_remote = v13->is_word_filter_use_remote;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 176));
  if ( is_word_filter_use_remote )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 208));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    v16 = proto::MarkMapReq::mark(req);
    v17 = proto::MapMarkPoint::name[abi:cxx11](v16);
    RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v3 + 240), v17, player, 3u);
    async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0xD8Au);
    v18 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v134, v19);
    v20 = *(_QWORD *)(v3 + 216);
    v134._anon_0._M_allocated_capacity = *(_QWORD *)(v3 + 208);
    *(&v134._anon_0._M_allocated_capacity + 1) = v20;
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
      (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v135,
      (SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *)&v134);
    ret = GameserverService::asyncHttpRequest(
            v18,
            (const common::minet::http_client::HttpRequest *)(v3 + 240),
            5LL,
            async_http_type,
            (common::minet::http_client::ResponseCallBackFunc *)&v135);
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v135);
    SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse((SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const)&v134);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v135,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onMarkMapReq",
        1085);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v135,
        (const char (*)[23])"asyncHttpRequest fails");
      common::milog::MiLogStream::~MiLogStream(&v135);
      v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v21._M_refcount._M_pi);
      common::minet::Packet::setExt(v22, 2u, 1u);
      v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v21._M_refcount._M_pi);
      common::minet::Packet::setExt(v23, 3u, 4u);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&__in,
        (const std::shared_ptr<common::minet::Packet> *)v21._M_refcount._M_pi);
      v21._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&__in;
      ServiceBox::pushPacketToService(v21);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__in);
    }
    common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 240));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 208));
  }
  else
  {
    v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v24._M_refcount._M_pi);
    common::minet::Packet::setExt(v25, 2u, 1u);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__in,
      (const std::shared_ptr<common::minet::Packet> *)v24._M_refcount._M_pi);
    v24._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&__in;
    ServiceBox::pushPacketToService(v24);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__in);
  }
  v7 = 0;
LABEL_88:
  std::shared_ptr<proto::MarkMapRsp>::~shared_ptr((std::shared_ptr<proto::MarkMapRsp> *const)(v3 + 144));
LABEL_89:
  std::shared_ptr<proto::MarkMapReq const>::~shared_ptr((std::shared_ptr<const proto::MarkMapReq> *const)(v3 + 112));
  result = v7;
  if ( v136 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1085: range 0000000015A05A6E-0000000015A05AF7
void __cdecl SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1085: range 0000000015A05BC2-0000000015A05C4B
void __cdecl SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1085: range 00000000159E1A8C-00000000159E1D8A
void __cdecl SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::MarkMapReq *v11; // rax
  proto::MapMarkPoint *v12; // rax
  std::string *v13; // rdx
  common::minet::PacketPtr v14; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 msg_ptr:1085";
  *(_QWORD *)(v4 + 16) = SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::MarkMapReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::MarkMapReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkMapReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::MarkMapReq::mutable_mark(v11);
    v13 = proto::MapMarkPoint::mutable_name[abi:cxx11](v12);
    std::string::operator=(v13, replace_str);
    std::shared_ptr<proto::MarkMapReq>::~shared_ptr((std::shared_ptr<proto::MarkMapReq> *const)(v4 + 32));
  }
  v14._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v14._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v14);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1085: range 00000000159E1D8C-00000000159E1DB6
void __cdecl SceneHandler::onMarkMapReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SceneHandler::onMarkMapReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 1233: range 00000000159E3A24-00000000159E428B
int32_t __cdecl SceneHandler::onEntityMoveRoomNotify(
        SceneHandler *const this,
        const proto::EntityMoveRoomNotify *notify)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // r14d
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  RoomScene *v21; // r14
  Entity *v22; // rax
  int32_t result; // eax
  void (__fastcall *v24)(unsigned __int64, std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64); // [rsp+8h] [rbp-118h]
  unsigned int val; // [rsp+28h] [rbp-F8h] BYREF
  uint32_t room_id; // [rsp+2Ch] [rbp-F4h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 scene_ptr:1234 64 16 19 room_scene_ptr:1240 96 16 15 entity_ptr:1246 128 16 15 avatar_ptr:1260";
  *(_QWORD *)(v3 + 16) = SceneHandler::onEntityMoveRoomNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onEntityMoveRoomNotify",
      1237);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v27, (const char (*)[15])"getScene fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v2 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<RoomScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 64));
    if ( std::operator==<RoomScene>((const std::shared_ptr<RoomScene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onEntityMoveRoomNotify",
        1243);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v27,
             (const char (*)[45])"dynamic_pointer_cast<RoomScene> fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v2 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = *(_QWORD *)v8->baseclass_0 + 120LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v24 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64))v9;
      v10 = proto::EntityMoveRoomNotify::entity_id(notify);
      v24(v3 + 96, v8, v10);
      if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onEntityMoveRoomNotify",
          1249);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v27,
                (const char (*)[30])"findEntity fails, entity_id: ");
        val = proto::EntityMoveRoomNotify::entity_id(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v2 = -1;
      }
      else
      {
        room_id = proto::EntityMoveRoomNotify::dest_room_id(notify);
        if ( room_id )
        {
          v13 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(_QWORD *)v13 + 24LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) != 1 )
            goto LABEL_37;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 128));
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onEntityMoveRoomNotify",
              1263);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v27,
              (const char (*)[24])"getCurAvatar is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v27);
            v2 = -1;
            v15 = 0;
          }
          else if ( std::operator!=<Avatar,Entity>(
                      (const std::shared_ptr<Avatar> *)(v3 + 128),
                      (const std::shared_ptr<Entity> *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onEntityMoveRoomNotify",
              1268);
            v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v27,
                    (const char (*)[12])off_258EE8C0);
            v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v18 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, v17);
            v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" entity:");
            v20 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v19, v20);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v2 = -1;
            v15 = 0;
          }
          else
          {
            v15 = 1;
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
          if ( v15 == 1 )
          {
LABEL_37:
            v21 = std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoomScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v22 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            RoomScene::entityMoveRoom(v21, v22, room_id);
            v2 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/scene_handler.cpp",
            "onEntityMoveRoomNotify",
            1255);
          v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v27,
                  (const char (*)[25])"dest_room_id is 0, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v2 = -1;
        }
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
    }
    std::shared_ptr<RoomScene>::~shared_ptr((std::shared_ptr<RoomScene> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v2;
  if ( v28 == (char *)v3 )
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
  return result;
};

// Line 1278: range 00000000159E45B8-00000000159E639B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SceneHandler::onPlayerChatReq(SceneHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  common::minet::PacketPtr *v3; // rsi
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v7; // rsi
  common::milog::MiLogStream *v8; // r14
  int v9; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int v12; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  PlayerSceneComp *SceneComp; // rax
  time_t v19; // r14
  const proto::ChatInfo *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  char v25; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t MpChatInterval; // eax
  char v28; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t v30; // eax
  const proto::ChatInfo *v31; // rax
  uint32_t Uid; // eax
  const std::string *v33; // rax
  common::milog::MiLogStream *v34; // r14
  int v35; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v38; // rsi
  common::minet::Packet *v39; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  bool is_word_filter_use_remote; // r14
  Player *v42; // r14
  const proto::ChatInfo *v43; // rax
  const std::string *v44; // rax
  GameserverService *v45; // r14
  const std::shared_ptr<common::minet::Packet> *v46; // rsi
  __suseconds_t v47; // rdx
  common::minet::PacketPtr v48; // rdi
  common::minet::Packet *v49; // rax
  common::minet::Packet *v50; // rax
  common::minet::PacketPtr v51; // rdi
  common::minet::Packet *v52; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v53; // rsi
  common::minet::Packet *v54; // rax
  std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // r14
  google::protobuf::uint32 v56; // eax
  std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  proto::ChatInfo *v58; // rax
  Player *player; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // r14
  unsigned __int64 v61; // rax
  __int64 v62; // rsi
  int v63; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // r14
  unsigned __int64 v65; // rax
  __int64 v66; // rsi
  uint32_t chat_start_check_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  uint32_t v69; // eax
  uint32_t chat_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  uint32_t v74; // eax
  Player *v75; // r14
  GameserverService *v76; // r14
  common::milog::MiLogStream *v77; // rcx
  int32_t result; // eax
  uint32_t last_chat_time; // [rsp+8h] [rbp-3B8h]
  bool v80; // [rsp+8h] [rbp-3B8h]
  uint32_t cd_start_time; // [rsp+8h] [rbp-3B8h]
  bool v82; // [rsp+8h] [rbp-3B8h]
  void (__fastcall *v83)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-3B8h]
  void (__fastcall *v84)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-3B8h]
  common::minet::PacketPtr *p_packet_ptra; // [rsp+10h] [rbp-3B0h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-391h] BYREF
  unsigned int val; // [rsp+30h] [rbp-390h] BYREF
  uint32_t chat_block_end_time; // [rsp+34h] [rbp-38Ch]
  uint32_t now; // [rsp+38h] [rbp-388h]
  uint32_t max_count; // [rsp+3Ch] [rbp-384h]
  int32_t ret; // [rsp+40h] [rbp-380h]
  uint32_t action_type; // [rsp+44h] [rbp-37Ch]
  uint32_t async_http_type; // [rsp+48h] [rbp-378h]
  int32_t ret_0; // [rsp+4Ch] [rbp-374h]
  const proto::PlayerChatReq *req; // [rsp+50h] [rbp-370h]
  proto::PlayerChatRsp *rsp_0; // [rsp+58h] [rbp-368h]
  std::shared_ptr<Config> v98; // [rsp+60h] [rbp-360h] BYREF
  std::shared_ptr<Config> v99; // [rsp+70h] [rbp-350h] BYREF
  std::shared_ptr<Config> v100; // [rsp+80h] [rbp-340h] BYREF
  SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v101; // [rsp+90h] [rbp-330h] BYREF
  common::milog::MiLogStream v102; // [rsp+B0h] [rbp-310h] BYREF
  char v103[752]; // [rsp+D0h] [rbp-2F0h] BYREF

  p_packet_ptra = v3;
  v4 = (unsigned __int64)v103;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 9 type:1324 48 16 12 req_ptr:1279 80 16 12 rsp_ptr:1279 112 16 14 scene_ptr:1282 144 16 "
                        "14 world_ptr:1288 176 16 10 timer:1366 208 16 16 dungeon_ptr:1296 240 32 13 new_text:1349 304 56"
                        " 14 chat_info:1344 400 240 13 http_req:1366";
  *(_QWORD *)(v4 + 16) = SceneHandler::onPlayerChatReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -218959360;
  v6[536862732] = 62194;
  v6[536862740] = -202116109;
  v6[536862741] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v7);
  common::minet::Packet::getConstProto<proto::PlayerChatReq>((common::minet::Packet *const)(v4 + 48));
  if ( std::operator==<proto::PlayerChatReq const>((const std::shared_ptr<const proto::PlayerChatReq> *)(v4 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v102,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onPlayerChatReq",
      1279);
    common::milog::MiLogStream::operator()(&v102, off_258EB580);
    common::milog::MiLogStream::~MiLogStream(&v102);
    v2 = -1;
    goto LABEL_157;
  }
  req = std::__shared_ptr_access<proto::PlayerChatReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
  common::tools::perf::make_shared<proto::PlayerChatRsp>();
  rsp_0 = std::__shared_ptr_access<proto::PlayerChatRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerChatRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
  proto::PlayerChatRsp::set_retcode(rsp_0, -1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 112));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v102,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onPlayerChatReq",
      1285);
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v102, (const char (*)[15])"getScene fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v102);
    v9 = 0;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 144));
  if ( std::operator==<World>((const std::shared_ptr<World> *)(v4 + 144), 0LL) )
  {
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( Scene::getSceneType(v10) != SCENE_DUNGEON )
    {
      common::milog::MiLogStream::create(
        &v102,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onPlayerChatReq",
        1293);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v102,
              (const char (*)[40])"getSceneComp().getCurWorld fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v102);
LABEL_27:
      v15 = 0;
      goto LABEL_144;
    }
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 208));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 208), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v102,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onPlayerChatReq",
        1299);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v102,
        (const char (*)[37])"toPtr<DungeonScene>(scene_ptr) fails");
      common::milog::MiLogStream::~MiLogStream(&v102);
      v12 = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      if ( Scene::getPlayerCount((const Scene *const)v13) > 1 )
      {
        v12 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v102,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onPlayerChatReq",
          1304);
        v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v102,
                (const char (*)[31])"dungeon_scene only self, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v102);
        proto::PlayerChatRsp::set_retcode(rsp_0, 1116);
        v12 = 0;
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 208));
    if ( v12 != 1 )
      goto LABEL_27;
  }
  else
  {
    v16 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v17 = *(_QWORD *)v16 + 184LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v17)(v16) != 1 )
    {
      proto::PlayerChatRsp::set_retcode(rsp_0, 1211);
      v15 = 0;
      goto LABEL_144;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  chat_block_end_time = PlayerSceneComp::getChatBlockEndTime(SceneComp);
  if ( chat_block_end_time )
  {
    v19 = chat_block_end_time;
    if ( v19 > common::tools::TimeUtils::getNow() )
    {
      proto::PlayerChatRsp::set_retcode(rsp_0, 798);
      proto::PlayerChatRsp::set_chat_forbidden_endtime(rsp_0, chat_block_end_time);
      v15 = 0;
      goto LABEL_144;
    }
  }
  v21 = proto::PlayerChatReq::chat_info(req);
  *(_DWORD *)(v4 + 32) = proto::ChatInfo::content_case(v21);
  if ( *(_DWORD *)(v4 + 32) != 1946 && *(_DWORD *)(v4 + 32) != 914 )
  {
    common::milog::MiLogStream::create(
      &v102,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onPlayerChatReq",
      1327);
    v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v102, (const char (*)[27])off_258EEBA0);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 32));
    v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
    common::milog::MiLogStream::~MiLogStream(&v102);
    v15 = 0;
    goto LABEL_144;
  }
  now = common::tools::TimeUtils::getNow();
  v25 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v80 = 0;
  if ( this->last_chat_time_ )
  {
    last_chat_time = this->last_chat_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 208));
    v25 = 1;
    v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
    MpChatInterval = ConstValueExcelConfigMgr::getMpChatInterval(&v26->design_config.txt_config_mgr.const_value_config_mgr);
    if ( now < last_chat_time + MpChatInterval )
      v80 = 1;
  }
  if ( v25 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
  if ( v80 )
  {
    proto::PlayerChatRsp::set_retcode(rsp_0, 800);
    v15 = 0;
    goto LABEL_144;
  }
  v28 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v82 = 0;
  if ( this->cd_start_time_ )
  {
    cd_start_time = this->cd_start_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 208));
    v28 = 1;
    v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
    v30 = ConstValueExcelConfigMgr::getMpChatCheckCD(&v29->design_config.txt_config_mgr.const_value_config_mgr);
    if ( now < cd_start_time + v30 )
      v82 = 1;
  }
  if ( v28 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
  if ( !v82 )
  {
    v31 = proto::PlayerChatReq::chat_info(req);
    proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v4 + 304), v31);
    proto::ChatInfo::set_time((proto::ChatInfo *const)(v4 + 304), now);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::ChatInfo::set_uid((proto::ChatInfo *const)(v4 + 304), Uid);
    if ( *(_DWORD *)(v4 + 32) == 1946 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v102, off_258EEC20, &__a);
      v33 = proto::ChatInfo::text[abi:cxx11]((const proto::ChatInfo *const)(v4 + 304));
      common::tools::StringUtils::trim((std::string *)(v4 + 240), v33, (const std::string *)&v102, 1);
      std::string::~string(&v102);
      std::allocator<char>::~allocator(&__a);
      if ( (unsigned __int8)std::string::empty(v4 + 240) )
      {
        common::milog::MiLogStream::create(
          &v102,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onPlayerChatReq",
          1352);
        v34 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v102,
                (const char (*)[21])"text is empty, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
        common::milog::MiLogStream::~MiLogStream(&v102);
        v35 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v98);
        v36 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v98);
        max_count = ConstValueExcelConfigMgr::getMpChatTextMaxLen(&v36->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v98);
        ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v4 + 240), max_count);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v102,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onPlayerChatReq",
            1359);
          v37 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v102,
                  (const char (*)[24])"checkStrUtf8Len fails, ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)(v4 + 240));
          common::milog::MiLogStream::~MiLogStream(&v102);
          proto::PlayerChatRsp::set_retcode(rsp_0, ret);
          v35 = 0;
        }
        else
        {
          v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v38);
          if ( common::minet::Packet::getExt(v39, 2u) )
          {
            v54 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v53);
            action_type = common::minet::Packet::getExt(v54, 3u);
            if ( action_type == 3 || action_type == 4 )
            {
              common::milog::MiLogStream::create(
                &v102,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/scene_handler.cpp",
                "onPlayerChatReq",
                1375);
              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v102,
                (const char (*)[25])"player chat is intercept");
              common::milog::MiLogStream::~MiLogStream(&v102);
              v35 = 0;
            }
            else
            {
              if ( action_type == 1 )
              {
                common::tools::perf::make_shared<proto::PlayerChatNotify>();
                v55 = std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                v56 = proto::PlayerChatReq::channel_id(req);
                proto::PlayerChatNotify::set_channel_id(v55, v56);
                v57 = std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerChatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                v58 = proto::PlayerChatNotify::mutable_chat_info(v57);
                proto::ChatInfo::operator=(v58, (const proto::ChatInfo *)(v4 + 304));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                player = this->player_;
                std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerChatNotify>((const std::shared_ptr<proto::PlayerChatNotify> *)(v4 + 208));
                Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v4 + 208), 0LL);
                std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v4 + 208));
                std::shared_ptr<proto::PlayerChatNotify>::~shared_ptr((std::shared_ptr<proto::PlayerChatNotify> *const)(v4 + 176));
              }
              else
              {
                proto::ChatInfo::set_text((proto::ChatInfo *const)(v4 + 304), (const std::string *)(v4 + 240));
                v60 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v61 = (unsigned __int64)(v60->_vptr_DescribalBase + 48);
                if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
                  v61 = __asan_report_load8();
                v83 = *(void (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v61;
                v62 = proto::PlayerChatReq::channel_id(req);
                v83(v60, v62, v4 + 304);
              }
              v35 = 2;
            }
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v99);
            v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v99);
            if ( *(char *)(((unsigned __int64)&v40->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
              v40 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v40->is_word_filter_use_remote);
            is_word_filter_use_remote = v40->is_word_filter_use_remote;
            std::shared_ptr<Config>::~shared_ptr(&v99);
            if ( is_word_filter_use_remote )
            {
              common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 176));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v42 = this->player_;
              v43 = proto::PlayerChatReq::chat_info(req);
              v44 = proto::ChatInfo::text[abi:cxx11](v43);
              RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v4 + 400), v44, v42, 4u);
              async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0xC71u);
              v45 = ServiceBox::findService<GameserverService>();
              std::shared_ptr<common::minet::Packet>::shared_ptr(&v101.__packet_ptr, v46);
              v47 = *(_QWORD *)(v4 + 184);
              v101.__timer.start_tv_.tv_sec = *(_QWORD *)(v4 + 176);
              v101.__timer.start_tv_.tv_usec = v47;
              std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
                (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v102,
                &v101);
              ret_0 = GameserverService::asyncHttpRequest(
                        v45,
                        (const common::minet::http_client::HttpRequest *)(v4 + 400),
                        5LL,
                        async_http_type,
                        (common::minet::http_client::ResponseCallBackFunc *)&v102);
              std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v102);
              SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v101);
              if ( ret_0 )
              {
                common::milog::MiLogStream::create(
                  &v102,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/scene_handler.cpp",
                  "onPlayerChatReq",
                  1366);
                common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v102,
                  (const char (*)[23])"asyncHttpRequest fails");
                common::milog::MiLogStream::~MiLogStream(&v102);
                v49 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v48._M_refcount._M_pi);
                common::minet::Packet::setExt(v49, 2u, 1u);
                v50 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v48._M_refcount._M_pi);
                common::minet::Packet::setExt(v50, 3u, 4u);
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)(v4 + 208),
                  (const std::shared_ptr<common::minet::Packet> *)v48._M_refcount._M_pi);
                v48._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 208);
                ServiceBox::pushPacketToService(v48);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 208));
              }
              common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 400));
              common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 176));
            }
            else
            {
              v52 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v51._M_refcount._M_pi);
              common::minet::Packet::setExt(v52, 2u, 1u);
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)(v4 + 208),
                (const std::shared_ptr<common::minet::Packet> *)v51._M_refcount._M_pi);
              v51._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 208);
              ServiceBox::pushPacketToService(v51);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 208));
            }
            v2 = 0;
            v35 = 1;
          }
        }
      }
      std::string::~string((void *)(v4 + 240));
      if ( v35 )
      {
        if ( v35 == 2 )
        {
LABEL_110:
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
          GameserverService::getConfig((GameserverService *const)&v100);
          v68 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v100);
          v69 = ConstValueExcelConfigMgr::getMpChatCheckInterval(&v68->design_config.txt_config_mgr.const_value_config_mgr);
          LOBYTE(chat_start_check_time) = now > chat_start_check_time + v69;
          std::shared_ptr<Config>::~shared_ptr(&v100);
          if ( (_BYTE)chat_start_check_time )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3)
                                                                  + 0x7FFF8000) )
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
              && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            chat_num = this->chat_num_;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v4 + 176));
            v71 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
            LOBYTE(chat_num) = chat_num > ConstValueExcelConfigMgr::getMpChatCheckNum(&v71->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 176));
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
                && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3)
                                                                    + 0x7FFF8000) )
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
              v72 = std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerChatCDNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v4 + 208));
              v73 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
              v74 = ConstValueExcelConfigMgr::getMpChatCheckCD(&v73->design_config.txt_config_mgr.const_value_config_mgr);
              proto::PlayerChatCDNotify::set_over_time(v72, now + v74);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v75 = this->player_;
              std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerChatCDNotify>((const std::shared_ptr<proto::PlayerChatCDNotify> *)(v4 + 208));
              Player::sendMessage(v75, (common::minet::ConstMessagePtr *)(v4 + 208), 0LL);
              std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v4 + 208));
              std::shared_ptr<proto::PlayerChatCDNotify>::~shared_ptr((std::shared_ptr<proto::PlayerChatCDNotify> *const)(v4 + 176));
            }
          }
          proto::PlayerChatRsp::set_retcode(rsp_0, 0);
          v63 = 2;
          goto LABEL_139;
        }
        v63 = 1;
      }
      else
      {
        v63 = 0;
      }
LABEL_139:
      proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v4 + 304));
      if ( v63 )
      {
        if ( v63 == 2 )
          v15 = 2;
        else
          v15 = 1;
      }
      else
      {
        v15 = 0;
      }
      goto LABEL_144;
    }
    v64 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v65 = (unsigned __int64)(v64->_vptr_DescribalBase + 48);
    if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
      v65 = __asan_report_load8();
    v84 = *(void (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v65;
    v66 = proto::PlayerChatReq::channel_id(req);
    v84(v64, v66, v4 + 304);
    goto LABEL_110;
  }
  proto::PlayerChatRsp::set_retcode(rsp_0, 799);
  v15 = 0;
LABEL_144:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 144));
  if ( v15 )
  {
    if ( v15 == 2 )
      v9 = 2;
    else
      v9 = 1;
  }
  else
  {
    v9 = 0;
  }
LABEL_149:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 112));
  if ( !v9 || v9 == 2 )
  {
    v76 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v4 + 208),
      p_packet_ptra);
    std::shared_ptr<proto::PlayerChatRsp>::shared_ptr(
      (std::shared_ptr<proto::PlayerChatRsp> *const)(v4 + 176),
      (const std::shared_ptr<proto::PlayerChatRsp> *)(v4 + 80));
    LOBYTE(v76) = ServiceBase::sendRsp<proto::PlayerChatRsp>(
                    v76,
                    (std::shared_ptr<proto::PlayerChatRsp> *)(v4 + 176),
                    (common::minet::PacketPtr *)(v4 + 208)) != 0;
    std::shared_ptr<proto::PlayerChatRsp>::~shared_ptr((std::shared_ptr<proto::PlayerChatRsp> *const)(v4 + 176));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 208));
    if ( (_BYTE)v76 )
    {
      common::milog::MiLogStream::create(
        &v102,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onPlayerChatReq",
        1427);
      v77 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v102,
              (const char (*)[25])"send rsp failed, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v77, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v102);
      v2 = -1;
    }
    else
    {
      v2 = proto::PlayerChatRsp::retcode(rsp_0);
    }
  }
  std::shared_ptr<proto::PlayerChatRsp>::~shared_ptr((std::shared_ptr<proto::PlayerChatRsp> *const)(v4 + 80));
LABEL_157:
  std::shared_ptr<proto::PlayerChatReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerChatReq> *const)(v4 + 48));
  result = v2;
  if ( v103 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 1366: range 0000000015A05D3E-0000000015A05DC7
void __cdecl SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1366: range 0000000015A05E92-0000000015A05F1B
void __cdecl SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 1366: range 00000000159E428C-00000000159E458A
void __cdecl SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::PlayerChatReq *v11; // rax
  proto::ChatInfo *v12; // rax
  std::string *v13; // rdx
  common::minet::PacketPtr v14; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 msg_ptr:1366";
  *(_QWORD *)(v4 + 16) = SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::PlayerChatReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::PlayerChatReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerChatReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::PlayerChatReq::mutable_chat_info(v11);
    v13 = proto::ChatInfo::mutable_text[abi:cxx11](v12);
    std::string::operator=(v13, replace_str);
    std::shared_ptr<proto::PlayerChatReq>::~shared_ptr((std::shared_ptr<proto::PlayerChatReq> *const)(v4 + 32));
  }
  v14._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v14._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v14);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1366: range 00000000159E458C-00000000159E45B6
void __cdecl SceneHandler::onPlayerChatReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        SceneHandler::onPlayerChatReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 1434: range 00000000159E639C-00000000159E67F1
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneHandler::logChatContent(SceneHandler *const this, std::string *content)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  std::string *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t OwnerUid; // eax
  Player *v14; // r14
  std::string contenta; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-100h] BYREF
  std::string v17; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  contenta._M_string_length = (std::string::size_type)this;
  contenta._M_dataplus._M_p = (std::string::pointer)content;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 holder:1435 64 16 17 chat_log_ptr:1436 96 16 14 scene_ptr:1438 128 16 14 world_ptr:1443";
  *(_QWORD *)(v2 + 16) = SceneHandler::logChatContent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((contenta._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(contenta._M_string_length + 8));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v17, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x70Fu, contenta);
  std::string::~string(&v17);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyChat>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = std::move<std::string &>((std::string *)contenta._M_dataplus._M_p);
  proto_log::PlayerLogBodyChat::set_content(v6, v7);
  if ( *(_BYTE *)(((contenta._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(contenta._M_string_length + 8));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
  {
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    SceneId = Scene::getSceneId(v9);
    proto_log::PlayerLogBodyChat::set_scene_id(v8, SceneId);
  }
  if ( *(_BYTE *)(((contenta._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(contenta._M_string_length + 8));
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 128));
  if ( std::operator!=<World>((const std::shared_ptr<World> *)(v2 + 128), 0LL) )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChat,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v12 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    OwnerUid = World::getOwnerUid(v12);
    proto_log::PlayerLogBodyChat::set_host_uid(v11, OwnerUid);
  }
  if ( *(_BYTE *)(((contenta._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = *(Player **)(contenta._M_string_length + 8);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChat,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&contenta._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyChat> *)(v2 + 64));
  Player::printStatLog(v14, (MessagePtr *)&contenta._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&contenta._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 128));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyChat>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChat> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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
};

// Line 1452: range 00000000159E67F2-00000000159E70F7
int32_t __cdecl SceneHandler::onGetDungeonEntryExploreConditionReq(
        SceneHandler *const this,
        const proto::GetDungeonEntryExploreConditionReq *req,
        proto::GetDungeonEntryExploreConditionRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t SceneComp; // r14d
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  uint32_t v9; // r15d
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  DungeonEntryExcelConfigMgr *p_dungeon_entry_config_mgr; // r15
  uint32_t v17; // r14d
  uint32_t v18; // eax
  data::LogicType cond_comb; // eax
  common::milog::MiLogStream *v20; // rax
  std::vector<data::DungeonEntrySatisfiedCond>::const_reference v21; // rax
  std::vector<data::DungeonEntrySatisfiedCond>::const_reference v22; // rdx
  std::vector<data::DungeonEntrySatisfiedCond>::const_reference v23; // rax
  int32_t result; // eax
  bool is_level_cond; // [rsp+2Fh] [rbp-111h]
  std::vector<data::DungeonEntrySatisfiedCond>::const_iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::vector<data::DungeonEntrySatisfiedCond>::const_iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  const data::DungeonEntryExcelConfig *config_ptr; // [rsp+40h] [rbp-100h]
  proto::DungeonEntryCond *dungeon_entry_cond; // [rsp+48h] [rbp-F8h]
  const std::vector<data::DungeonEntrySatisfiedCond> *__for_range; // [rsp+50h] [rbp-F0h]
  const data::DungeonEntrySatisfiedCond *cond; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v33; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 21 dungeon_entry_id:1460 64 16 14 scene_ptr:1453 96 16 22 dungeon_entry_ptr:1461";
  *(_QWORD *)(v3 + 16) = SceneHandler::onGetDungeonEntryExploreConditionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  proto::GetDungeonEntryExploreConditionReq::scene_id(req);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 64), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onGetDungeonEntryExploreConditionReq",
      1456);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v34,
           (const char (*)[30])"scene ptr is null, scene_id: ");
    *(_DWORD *)(v3 + 48) = proto::GetDungeonEntryExploreConditionReq::scene_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = -1;
    goto LABEL_52;
  }
  *(_DWORD *)(v3 + 48) = proto::GetDungeonEntryExploreConditionReq::dungeon_entry_scene_point_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)
     + 93080;
  v10 = proto::GetDungeonEntryExploreConditionReq::scene_id(req);
  JsonConfigMgr::findScenePoint<data::DungeonEntry>((const JsonConfigMgr *const)(v3 + 96), v9, v10);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( !std::operator==<data::DungeonEntry>(0LL, (const std::shared_ptr<data::DungeonEntry> *)(v3 + 96)) )
  {
    v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( Scene::isPointUnlocked(v12, *(_DWORD *)(v3 + 48))
      || (v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          Scene::isDungeonEntryCanBeUnlocked(v13, *(_DWORD *)(v3 + 48))) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onGetDungeonEntryExploreConditionReq",
        1470);
      v15 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v34,
              (const char (*)[61])"dungeon entry isPointUnlocked or isDungeonEntryCanBeUnlocked");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      v8 = -1;
      goto LABEL_51;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    p_dungeon_entry_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.dungeon_entry_config_mgr;
    v17 = *(_DWORD *)(v3 + 48);
    v18 = proto::GetDungeonEntryExploreConditionReq::scene_id(req);
    config_ptr = DungeonEntryExcelConfigMgr::findDungeonEntryConfig(p_dungeon_entry_config_mgr, v18, v17);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( !config_ptr )
    {
      v8 = -1;
      goto LABEL_51;
    }
    dungeon_entry_cond = proto::GetDungeonEntryExploreConditionRsp::mutable_dungeon_entry_cond(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->cond_comb >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cond_comb = config_ptr->cond_comb;
    if ( cond_comb == LOGIC_OR )
    {
      is_level_cond = 0;
      __for_range = &config_ptr->satisfied_cond;
      __for_begin._M_current = std::vector<data::DungeonEntrySatisfiedCond>::begin(&config_ptr->satisfied_cond)._M_current;
      __for_end._M_current = std::vector<data::DungeonEntrySatisfiedCond>::end(&config_ptr->satisfied_cond)._M_current;
      while ( __gnu_cxx::operator!=<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>(
                &__for_begin,
                &__for_end) )
      {
        cond = __gnu_cxx::__normal_iterator<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( cond->type == DUNGEON_ENTRY_CONDITION_LEVEL )
        {
          proto::DungeonEntryCond::set_cond_reason(dungeon_entry_cond, DUNGEON_ENTRY_REASON_LEVEL);
          if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::DungeonEntryCond::set_param1(dungeon_entry_cond, cond->param1);
          is_level_cond = 1;
          break;
        }
        __gnu_cxx::__normal_iterator<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>::operator++(&__for_begin);
      }
      if ( !is_level_cond )
        proto::DungeonEntryCond::set_cond_reason(dungeon_entry_cond, DUNGEON_ENTRY_REASON_NONE);
    }
    else
    {
      if ( cond_comb > LOGIC_OR )
      {
LABEL_49:
        v8 = -1;
        goto LABEL_51;
      }
      if ( cond_comb )
      {
        if ( cond_comb != LOGIC_AND )
          goto LABEL_49;
        proto::DungeonEntryCond::set_cond_reason(dungeon_entry_cond, DUNGEON_ENTRY_REASON_MULIPLE);
      }
      else
      {
        if ( std::vector<data::DungeonEntrySatisfiedCond>::empty(&config_ptr->satisfied_cond) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/scene_handler.cpp",
            "onGetDungeonEntryExploreConditionReq",
            1487);
          v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v34,
                  (const char (*)[43])"satisfied_cond is empty, dungeon_entry_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v34);
          v8 = -1;
          goto LABEL_51;
        }
        v21 = std::vector<data::DungeonEntrySatisfiedCond>::operator[](&config_ptr->satisfied_cond, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v21->type == DUNGEON_ENTRY_CONDITION_LEVEL )
        {
          proto::DungeonEntryCond::set_cond_reason(dungeon_entry_cond, DUNGEON_ENTRY_REASON_LEVEL);
          v22 = std::vector<data::DungeonEntrySatisfiedCond>::operator[](&config_ptr->satisfied_cond, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::DungeonEntryCond::set_param1(dungeon_entry_cond, v22->param1);
        }
        else
        {
          v23 = std::vector<data::DungeonEntrySatisfiedCond>::operator[](&config_ptr->satisfied_cond, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v23->type == DUNGEON_ENTRY_CONDITION_QUEST )
            proto::DungeonEntryCond::set_cond_reason(dungeon_entry_cond, DUNGEON_ENTRY_REASON_QUEST);
        }
      }
    }
    v8 = 0;
    goto LABEL_51;
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/scene_handler.cpp",
    "onGetDungeonEntryExploreConditionReq",
    1464);
  v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v34,
          (const char (*)[42])"dungeon entry not found, dungeon_entry_id");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v34);
  v8 = -1;
LABEL_51:
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v3 + 96));
LABEL_52:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v8;
  if ( v35 == (char *)v3 )
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

// Line 1531: range 00000000159E70F8-00000000159E78A2
int32_t __cdecl SceneHandler::onSetEntityClientDataNotify(
        SceneHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::EntityClientData *v6; // rax
  float v7; // xmm0_4
  common::milog::MiLogStream *v8; // rcx
  uint32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  const proto::EntityClientData *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  Entity *v18; // rax
  Player *player; // r14
  Scene *v20; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-16Ch] BYREF
  proto::SetEntityClientDataNotify *notify; // [rsp+18h] [rbp-168h]
  std::shared_ptr<Creature> p_creature_ptr; // [rsp+20h] [rbp-160h] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-140h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-120h] BYREF
  char v28[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 15 notify_ptr:1532 64 16 14 scene_ptr:1539 96 16 17 creature_ptr:1546 128 32 23 entity_client_data:1553";
  *(_QWORD *)(v2 + 16) = SceneHandler::onSetEntityClientDataNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::SetEntityClientDataNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetEntityClientDataNotify>(
         (const std::shared_ptr<proto::SetEntityClientDataNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onSetEntityClientDataNotify",
      1532);
    common::milog::MiLogStream::operator()(&v26, off_258EF060);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::SetEntityClientDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetEntityClientDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::SetEntityClientDataNotify::entity_client_data(notify);
    v7 = proto::EntityClientData::windmill_sync_angle(v6);
    if ( !std::isfinite(v7) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onSetEntityClientDataNotify",
          1542);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v26,
               (const char (*)[24])"getScene fails, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v5 = -1;
      }
      else
      {
        v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto::SetEntityClientDataNotify::entity_id(notify);
        Scene::findEntity<Creature>((const Scene *const)(v2 + 96), v9);
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onSetEntityClientDataNotify",
            1549);
          v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v26,
                  (const char (*)[28])"findEntity fail, entity_id:");
          val = proto::SetEntityClientDataNotify::entity_id(notify);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v12, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = -1;
        }
        else
        {
          std::string::basic_string(v2 + 128);
          v13 = proto::SetEntityClientDataNotify::entity_client_data(notify);
          google::protobuf::MessageLite::SerializeToString(v13, (std::string *)(v2 + 128));
          if ( (unsigned __int64)std::string::size(v2 + 128) <= 0x400 )
          {
            v18 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Entity::setClientData(v18, (std::string *)(v2 + 128));
            memset(&peer_id_set, 0, sizeof(peer_id_set));
            std::set<unsigned int>::set(&peer_id_set);
            std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::SetEntityClientDataNotify,void>(
              &p_msg_ptr,
              (const std::shared_ptr<proto::SetEntityClientDataNotify> *)(v2 + 32));
            std::shared_ptr<Creature>::shared_ptr(&p_creature_ptr, (const std::shared_ptr<Creature> *)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = this->player_;
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v5 = FightHandler::forwardSendPacket(
                   v20,
                   player,
                   &p_creature_ptr,
                   FORWARD_TO_ALL,
                   &p_msg_ptr,
                   1,
                   &peer_id_set);
            std::shared_ptr<Creature>::~shared_ptr(&p_creature_ptr);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
            std::set<unsigned int>::~set(&peer_id_set);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onSetEntityClientDataNotify",
              1557);
            v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v26,
                    (const char (*)[31])"client_data too big, creature:");
            v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v16 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v14, v15);
            v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v17, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v5 = -1;
          }
          std::string::~string((void *)(v2 + 128));
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::SetEntityClientDataNotify>::~shared_ptr((std::shared_ptr<proto::SetEntityClientDataNotify> *const)(v2 + 32));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 1566: range 00000000159E78A4-00000000159E7D7D
int32_t __cdecl SceneHandler::onMonsterAIConfigHashNotify(
        SceneHandler *const this,
        const proto::MonsterAIConfigHashNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  uint32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  Monster *v11; // r15
  Player *player; // r14
  int32_t v13; // eax
  int32_t result; // eax
  google::protobuf::uint32 job_id; // [rsp+Ch] [rbp-F4h]
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 scene_ptr:1567 64 16 17 creature_ptr:1574 96 16 16 monster_ptr:1581";
  *(_QWORD *)(v2 + 16) = SceneHandler::onMonsterAIConfigHashNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onMonsterAIConfigHashNotify",
      1570);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v17,
           (const char (*)[24])"getScene fails, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::MonsterAIConfigHashNotify::entity_id(notify);
    Scene::findEntity<Creature>((const Scene *const)(v2 + 64), v7);
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onMonsterAIConfigHashNotify",
        1577);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v17,
             (const char (*)[28])"findEntity fail, entity_id:");
      val = proto::MonsterAIConfigHashNotify::entity_id(notify);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 96));
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onMonsterAIConfigHashNotify",
          1584);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v17,
          (const char (*)[22])"entity is not monster");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        job_id = proto::MonsterAIConfigHashNotify::job_id(notify);
        v13 = proto::MonsterAIConfigHashNotify::hash_value(notify);
        v6 = Monster::onClientUploadAIConfigHash(v11, v13, job_id, player);
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 1594: range 00000000159E7D7E-00000000159E86E4
int32_t __cdecl SceneHandler::processEntityMoveInfo(
        common::minet::PacketPtr *p_packet_ptr,
        Scene *scene,
        Player *player,
        Avatar *cur_avatar,
        proto::EntityMoveInfo *move_info,
        std::vector<unsigned int> *sync_uid_vec)
{
  int32_t v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t Uid; // r15d
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  int v23; // r15d
  const proto::MotionInfo *v24; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const proto::MotionInfo *v26; // rax
  const proto::Vector *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  unsigned __int64 v35; // rax
  __int64 (__fastcall *v36)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MotionInfo *, unsigned __int64); // r15
  const proto::MotionInfo *v37; // rax
  common::milog::MiLogStream *v38; // r14
  unsigned __int64 v39; // rax
  void (__fastcall **v40)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int32_t result; // eax
  bool is_cur_avatar; // [rsp+47h] [rbp-159h]
  uint32_t entity_id; // [rsp+48h] [rbp-158h]
  int32_t ret; // [rsp+4Ch] [rbp-154h]
  common::milog::MiLogStream v51; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v52; // [rsp+70h] [rbp-130h] BYREF
  char v53[272]; // [rsp+90h] [rbp-110h] BYREF

  v7 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 32 12 8 rot:1633 64 16 15 entity_ptr:1597 96 16 22 entity_player_ptr:1614 128 56 19 motion_context:1641";
  *(_QWORD *)(v7 + 16) = SceneHandler::processEntityMoveInfo;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -219021312;
  v9[536862723] = -219021312;
  v9[536862725] = -218103808;
  v9[536862726] = -202116109;
  is_cur_avatar = 0;
  entity_id = proto::EntityMoveInfo::entity_id(move_info);
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = (unsigned __int64)(scene->_vptr_DescribalBase + 15);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *, _QWORD))v10)(v7 + 64, scene, entity_id);
  if ( entity_id == Entity::getEntityId((const Entity *const)cur_avatar) )
  {
    if ( Creature::getLifeState(cur_avatar) != LIFE_ALIVE )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "processEntityMoveInfo",
        1602);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v52,
              (const char (*)[21])"avatar is not alive:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, cur_avatar);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v6 = -1;
      goto LABEL_54;
    }
    is_cur_avatar = 1;
  }
  if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v7 + 64)) )
  {
    v6 = -1;
    goto LABEL_54;
  }
  v12 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  v13 = *(_QWORD *)v12 + 24LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) != 1 || is_cur_avatar )
  {
    v25 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( !Entity::isOnScene(v25) )
    {
      v6 = -1;
      goto LABEL_54;
    }
    goto LABEL_40;
  }
  v15 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  v16 = *(_QWORD *)v15 + 152LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v16)(v7 + 96, v15);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v7 + 96), 0LL)
    && (v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96)),
        Uid = Player::getUid(v17),
        Uid != Player::getUid(player)) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "processEntityMoveInfo",
      1617);
    v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v52, (const char (*)[37])off_258ECD20);
    v21 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    v22 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v20, v21);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v22, cur_avatar);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v6 = -1;
    v23 = 0;
  }
  else
  {
    v24 = proto::EntityMoveInfo::motion_info(move_info);
    if ( proto::MotionInfo::state(v24) == MOTION_LAND_SPEED )
    {
      v23 = 1;
    }
    else
    {
      v6 = -1;
      v23 = 0;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 96));
  if ( v23 == 1 )
  {
LABEL_40:
    v26 = proto::EntityMoveInfo::motion_info(move_info);
    v27 = proto::MotionInfo::rot(v26);
    Vector3::Vector3((Vector3 *const)(v7 + 32), v27);
    if ( !Vector3::isValidRot((const Vector3 *const)(v7 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "processEntityMoveInfo",
        1637);
      v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v52,
              (const char (*)[17])"invalid rot, x: ");
      v29 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, (const float *)(v7 + 32));
      v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])off_258ECEA0);
      v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, (const float *)(v7 + 36));
      v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" rot.z: ");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v7 + 40));
      common::milog::MiLogStream::~MiLogStream(&v52);
      v6 = -1;
    }
    else
    {
      MotionContext::MotionContext((MotionContext *const)(v7 + 128));
      *(_DWORD *)(v7 + 128) = proto::EntityMoveInfo::scene_time(move_info);
      *(_DWORD *)(v7 + 132) = proto::EntityMoveInfo::reliable_seq(move_info);
      v33 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_BYTE *)(v7 + 136) = common::minet::Packet::getEnetIsReliable(v33) != 0;
      *(_DWORD *)(v7 + 140) = Player::getUid(player);
      *(_BYTE *)(v7 + 144) = 0;
      v34 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v35 = (unsigned __int64)(v34->_vptr_DescribalBase + 12);
      if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
        v35 = __asan_report_load8();
      v36 = *(__int64 (__fastcall **)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MotionInfo *, unsigned __int64))v35;
      v37 = proto::EntityMoveInfo::motion_info(move_info);
      ret = v36(v34, v37, v7 + 128);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "processEntityMoveInfo",
          1650);
        v38 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v51,
                (const char (*)[30])"setMotionInfo failed, entity:");
        v39 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load8();
        v40 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v39;
        if ( *(_BYTE *)((*(_QWORD *)v39 >> 3) + 0x7FFF8000LL) )
          v39 = __asan_report_load8();
        (*v40)(&v52, v39);
        v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, (const std::string *)&v52);
        v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v41, (const char (*)[10])" player_:");
        operator<<(v42, player);
        std::string::~string(&v52);
        common::milog::MiLogStream::~MiLogStream(&v51);
        v6 = ret;
      }
      else
      {
        std::vector<unsigned int>::operator=(sync_uid_vec, (const std::vector<unsigned int> *)(v7 + 152));
        std::shared_ptr<Entity>::shared_ptr(
          (std::shared_ptr<Entity> *const)(v7 + 96),
          (const std::shared_ptr<Entity> *)(v7 + 64));
        SceneHandler::processVehicleExtraMove((EntityPtr *)(v7 + 96), move_info, (MotionContext *)(v7 + 128));
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v7 + 96));
        v6 = 0;
      }
      MotionContext::~MotionContext((MotionContext *const)(v7 + 128));
    }
  }
LABEL_54:
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v7 + 64));
  result = v6;
  if ( v53 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1661: range 00000000159E88E0-00000000159E8CAF
void __cdecl SceneHandler::processVehicleExtraMove(
        EntityPtr *p_entity_ptr,
        proto::EntityMoveInfo *move_info,
        MotionContext *context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  const proto::MotionInfo *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // [rsp+10h] [rbp-E0h]
  unsigned int val; // [rsp+3Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 gadget_ptr:1670 64 16 16 vehicle_ptr:1675";
  *(_QWORD *)(v3 + 16) = SceneHandler::processVehicleExtraMove;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( !std::operator==<Entity>(0LL, p_entity_ptr) )
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_entity_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) == 4 )
    {
      std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v3 + 32));
      if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
        if ( !std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 64)) )
        {
          v8 = proto::EntityMoveInfo::motion_info(move_info);
          if ( proto::MotionInfo::state(v8) == MOTION_DESTROY_VEHICLE )
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "processVehicleExtraMove",
              1683);
            v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   &v16,
                   (const char (*)[13])"vehicle_id: ");
            v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            val = Entity::getEntityId((const Entity *const)v10);
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v11,
              (const char (*)[22])" motion state destroy");
            common::milog::MiLogStream::~MiLogStream(&v16);
            v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            Creature::subCurHpToZero(v12, CHANGE_HP_SUB_KILL_SELF, 1);
          }
          else
          {
            v13 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            std::function<ForeachPolicy ()(Player &)>::function<SceneHandler::processVehicleExtraMove(std::shared_ptr<Entity>,proto::EntityMoveInfo &,MotionContext &)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v16,
              (SceneHandler::processVehicleExtraMove::<lambda(Player&)>)__PAIR128__(
                                                                          (unsigned __int64)context,
                                                                          (unsigned __int64)move_info));
            GadgetVehicleComp::foreachPlayer(v13, (std::function<ForeachPolicy(Player&)> *)&v16);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
          }
        }
        std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 64));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
    }
  }
  if ( v17 == (char *)v3 )
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
};

// Line 1687: range 00000000159E86E6-00000000159E88DE
ForeachPolicy __cdecl SceneHandler::processVehicleExtraMove(std::shared_ptr<Entity>,proto::EntityMoveInfo &,MotionContext &)::{lambda(Player &)#1}::operator()(
        const SceneHandler::processVehicleExtraMove::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  unsigned __int64 v6; // rax
  MotionContext *context; // r15
  const proto::MotionInfo *v8; // rsi
  ForeachPolicy result; // eax
  void (__fastcall *v10)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MotionInfo *, MotionContext *); // [rsp+8h] [rbp-88h]
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:1689";
  *(_QWORD *)(v2 + 16) = SceneHandler::processVehicleExtraMove(std::shared_ptr<Entity>,proto::EntityMoveInfo &,MotionContext &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = *(_QWORD *)v5->baseclass_0 + 96LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v10 = *(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MotionInfo *, MotionContext *))v6;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    context = __closure->__context;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = proto::EntityMoveInfo::motion_info(__closure->__move_info);
    v10(v5, v8, context);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 1701: range 00000000159E8CB0-00000000159E9237
int32_t __cdecl SceneHandler::onEntityConfigHashNotify(
        SceneHandler *const this,
        const proto::EntityConfigHashNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *v10; // r14
  Scene *v11; // rsi
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *v12; // r14
  Scene *v13; // rsi
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *v14; // r14
  Scene *v15; // rsi
  int32_t result; // eax
  uint64_t now_ms; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 job_id:1722 64 16 14 scene_ptr:1715 96 24 11 notify:1728";
  *(_QWORD *)(v2 + 16) = SceneHandler::onEntityConfigHashNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v5->security_config.is_ability_config_hash_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v5->security_config.is_ability_config_hash_check_open >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load1(&v5->security_config.is_ability_config_hash_check_open);
  }
  v6 = !v5->security_config.is_ability_config_hash_check_open;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( v6 )
  {
    v7 = 0;
  }
  else
  {
    now_ms = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_entity_ability_config_hash_notify_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( now_ms > this->last_entity_ability_config_hash_notify_time_ms_ + 500 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_entity_ability_config_hash_notify_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_entity_ability_config_hash_notify_time_ms_);
      this->last_entity_ability_config_hash_notify_time_ms_ = now_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/scene_handler.cpp",
          "onEntityConfigHashNotify",
          1718);
        v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v19,
               (const char (*)[24])"getScene fails, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = 0;
        v10 = proto::EntityConfigHashNotify::ability_entry_list(notify);
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneHandler::processEntityAbilityConfigHashNotify(this, v11, v10, (uint32_t *)(v2 + 48));
        v12 = proto::EntityConfigHashNotify::combat_entry_list(notify);
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneHandler::processEntityCombatConfigHashNotify(this, v13, v12, (uint32_t *)(v2 + 48));
        v14 = proto::EntityConfigHashNotify::avatar_entry_list(notify);
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneHandler::processEntityAvatarExcelConfigHashNotify(this, v15, v14, (uint32_t *)(v2 + 48));
        if ( *(_DWORD *)(v2 + 48) )
        {
          proto::ClientHashDebugNotify::ClientHashDebugNotify((proto::ClientHashDebugNotify *const)(v2 + 96));
          proto::ClientHashDebugNotify::set_job_id((proto::ClientHashDebugNotify *const)(v2 + 96), *(_DWORD *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
          proto::ClientHashDebugNotify::~ClientHashDebugNotify((proto::ClientHashDebugNotify *const)(v2 + 96));
        }
        v7 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onEntityConfigHashNotify",
        1710);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v19,
             (const char (*)[35])"notify interval too short, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
  }
  result = v7;
  if ( v20 == (char *)v2 )
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

// Line 1737: range 00000000159E9238-00000000159EA399
void __cdecl SceneHandler::processEntityAbilityConfigHashNotify(
        const SceneHandler *const this,
        Scene *scene,
        const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *entry_list,
        uint32_t *job_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Creature *v7; // rax
  AbilityComp *AbilityComp; // rax
  unsigned __int64 v10; // rax
  void (__fastcall **v11)(std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *, unsigned __int64); // rdx
  std::string *v12; // r8
  Creature *v13; // rax
  AbilityComp *v14; // rax
  unsigned __int64 v16; // rax
  void (__fastcall **v17)(std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *, unsigned __int64); // rdx
  std::pair<std::string,std::string > *v18; // r8
  Creature *v19; // rax
  AbilityComp *v20; // rax
  google::protobuf::int32 v21; // edi
  google::protobuf::int32 v22; // edi
  char v23; // al
  google::protobuf::uint32 v24; // ecx
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *v33; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  google::protobuf::uint32 v37; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  Entity *v39; // rax
  uint32_t IdForEntityLog; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t ConfigId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rcx
  Creature *v50; // rax
  AbilityComp *v51; // rax
  uint32_t *v52; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  const std::string *v55; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rcx
  Player *player; // r14
  uint32_t *job_ida; // [rsp+0h] [rbp-380h]
  google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *entry_lista; // [rsp+8h] [rbp-378h]
  Scene *scenea; // [rsp+10h] [rbp-370h]
  SceneHandler *thisa; // [rsp+18h] [rbp-368h]
  unsigned int *v65; // [rsp+20h] [rbp-360h]
  int v66; // [rsp+2Ch] [rbp-354h] BYREF
  unsigned int v67; // [rsp+30h] [rbp-350h] BYREF
  uint32_t ability_name_hash; // [rsp+34h] [rbp-34Ch]
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::iterator __for_begin_0; // [rsp+38h] [rbp-348h] BYREF
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::iterator __for_end_0; // [rsp+40h] [rbp-340h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-338h] BYREF
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *__for_range; // [rsp+50h] [rbp-330h]
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-328h]
  std::tuple_element<0,std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> >::type *creature_wtr; // [rsp+60h] [rbp-320h]
  std::tuple_element<0,std::tuple<int,int,int,unsigned int> >::type *client_hash_value; // [rsp+68h] [rbp-318h]
  std::tuple_element<0,std::tuple<int,int,unsigned int> >::type *prev_server_hash_value; // [rsp+70h] [rbp-310h]
  std::tuple_element<0,std::tuple<int,unsigned int> >::type *server_hash_value; // [rsp+78h] [rbp-308h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *job_id_0; // [rsp+80h] [rbp-300h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+88h] [rbp-2F8h]
  const proto::EntityConfigHashEntry *entry; // [rsp+90h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *prev_hash_code; // [rsp+98h] [rbp-2E8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *hash_code; // [rsp+A0h] [rbp-2E0h]
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+A8h] [rbp-2D8h] BYREF
  std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> __t; // [rsp+B0h] [rbp-2D0h] BYREF
  std::pair<std::string,std::string > v85; // [rsp+D0h] [rbp-2B0h] BYREF
  char v86[624]; // [rsp+110h] [rbp-270h] BYREF

  thisa = (SceneHandler *)this;
  scenea = scene;
  entry_lista = (google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *)entry_list;
  job_ida = job_id;
  v4 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 14 entity_id:1744 48 16 17 creature_ptr:1792 80 16 12 log_ptr:1798 112 16 14 group_ptr:1"
                        "801 144 16 17 creature_ptr:1745 176 24 24 report_creature_vec:1741 240 32 29 skipped_ability_nam"
                        "e_str:1746 304 48 23 invalid_entity_set:1738 384 56 24 uninited_entity_map:1739 480 56 23 skippe"
                        "d_entity_map:1740";
  *(_QWORD *)(v4 + 16) = SceneHandler::processEntityAbilityConfigHashNotify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -218959118;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 304));
  std::unordered_map<unsigned int,std::string>::unordered_map((std::unordered_map<unsigned int,std::string> *const)(v4 + 384));
  std::unordered_map<unsigned int,std::pair<std::string,std::string>>::unordered_map((std::unordered_map<unsigned int,std::pair<std::string,std::string >> *const)(v4 + 480));
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::vector((std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176));
  __for_range = entry_lista;
  __for_end_0._M_current = (std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *)google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::begin(entry_lista).it_;
  __for_begin._M_current = (const unsigned int *)google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::end(entry_lista).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::EntityConfigHashEntry> *const)&__for_end_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::EntityConfigHashEntry>::iterator *)&__for_begin) )
  {
    entry = google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::EntityConfigHashEntry> *const)&__for_end_0);
    *(_DWORD *)(v4 + 32) = proto::EntityConfigHashEntry::entity_id(entry);
    Scene::findEntity<Creature>((const Scene *const)(v4 + 144), (uint32_t)scenea);
    std::string::basic_string(v4 + 240);
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 144)) )
    {
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 304)) <= 4 )
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v4 + 304),
          (const std::set<unsigned int>::value_type *)(v4 + 32));
    }
    else
    {
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      AbilityComp = Creature::getAbilityComp(v7);
      if ( !AbilityComp::getIsClientInited(AbilityComp) )
      {
        if ( std::unordered_map<unsigned int,std::string>::size((const std::unordered_map<unsigned int,std::string> *const)(v4 + 384)) <= 4
          && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::string>,unsigned int>(
                (std::unordered_map<unsigned int,std::string> *)(v4 + 384),
                (const unsigned int *)(v4 + 32)) )
        {
          v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
          v11 = *(void (__fastcall ***)(std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *, unsigned __int64))v10;
          if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
            v10 = __asan_report_load8();
          (*v11)(&__t, v10);
          std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string>(
            (std::unordered_map<unsigned int,std::string> *const)(v4 + 384),
            (unsigned int *)(v4 + 32),
            (std::string *)&__t,
            (unsigned int *)(v4 + 32),
            v12);
          std::string::~string(&__t);
        }
      }
      else
      {
        v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        v14 = Creature::getAbilityComp(v13);
        if ( AbilityComp::isContainsAbilityInWhitelist(v14, (std::string *)(v4 + 240)) )
        {
          if ( std::unordered_map<unsigned int,std::pair<std::string,std::string>>::size((const std::unordered_map<unsigned int,std::pair<std::string,std::string >> *const)(v4 + 480)) <= 4
            && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<std::string,std::string>>,unsigned int>(
                  (std::unordered_map<unsigned int,std::pair<std::string,std::string >> *)(v4 + 480),
                  (const unsigned int *)(v4 + 32)) )
          {
            v16 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
              v16 = __asan_report_load8();
            v17 = *(void (__fastcall ***)(std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *, unsigned __int64))v16;
            if ( *(_BYTE *)((*(_QWORD *)v16 >> 3) + 0x7FFF8000LL) )
              v16 = __asan_report_load8();
            (*v17)(&__t, v16);
            std::make_pair<std::string,std::string&>(&v85, (std::string *)&__t, (std::string *)(v4 + 240));
            std::unordered_map<unsigned int,std::pair<std::string,std::string>>::emplace<unsigned int &,std::pair<std::string,std::string>>(
              (std::unordered_map<unsigned int,std::pair<std::string,std::string >> *const)(v4 + 480),
              (unsigned int *)(v4 + 32),
              &v85,
              (unsigned int *)(v4 + 32),
              v18);
            std::pair<std::string,std::string>::~pair(&v85);
            std::string::~string(&__t);
          }
        }
        else
        {
          v19 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          v20 = Creature::getAbilityComp(v19);
          __for_end._M_current = (const unsigned int *)AbilityComp::getInitialAbilityHashPair(v20);
          prev_hash_code = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
          hash_code = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
          v21 = proto::EntityConfigHashEntry::hash_value(entry);
          if ( *(_BYTE *)(((unsigned __int64)prev_hash_code >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)prev_hash_code & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prev_hash_code >> 3)
                                                                             + 0x7FFF8000) )
          {
            v21 = (int)prev_hash_code;
            __asan_report_load4();
          }
          if ( v21 == *prev_hash_code )
            goto LABEL_39;
          v22 = proto::EntityConfigHashEntry::hash_value(entry);
          if ( *(_BYTE *)(((unsigned __int64)hash_code >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)hash_code & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hash_code >> 3) + 0x7FFF8000) )
          {
            v22 = (int)hash_code;
            __asan_report_load4();
          }
          if ( v22 == *hash_code
            || std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::size((const std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176)) > 4 )
          {
LABEL_39:
            v23 = 0;
          }
          else
          {
            v23 = 1;
          }
          if ( v23 )
          {
            v67 = proto::EntityConfigHashEntry::job_id(entry);
            v66 = proto::EntityConfigHashEntry::hash_value(entry);
            std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::emplace_back<std::shared_ptr<Creature> &,int,unsigned int &,unsigned int &,unsigned int>(
              (std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176),
              (std::shared_ptr<Creature> *)(v4 + 144),
              &v66,
              prev_hash_code,
              hash_code,
              &v67,
              (std::shared_ptr<Creature> *)job_ida,
              (int *)entry_lista,
              (unsigned int *)scenea,
              (unsigned int *)thisa,
              v65);
            if ( proto::EntityConfigHashEntry::job_id(entry) )
            {
              v24 = proto::EntityConfigHashEntry::job_id(entry);
              if ( *(_BYTE *)(((unsigned __int64)job_ida >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)job_ida & 7) + 3) >= *(_BYTE *)(((unsigned __int64)job_ida >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(job_ida);
              }
              *job_ida = v24;
            }
          }
        }
      }
    }
    std::string::~string((void *)(v4 + 240));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 144));
    google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::EntityConfigHashEntry> *const)&__for_end_0);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 304))
    || !std::unordered_map<unsigned int,std::string>::empty((const std::unordered_map<unsigned int,std::string> *const)(v4 + 384))
    || !std::unordered_map<unsigned int,std::pair<std::string,std::string>>::empty((const std::unordered_map<unsigned int,std::pair<std::string,std::string >> *const)(v4 + 480)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__t,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "processEntityAbilityConfigHashNotify",
      1781);
    v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
            (common::milog::MiLogStream *const)&__t,
            (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v27 = operator<<(v26, thisa->player_);
    v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v27, (const char (*)[19])" invalid_entities:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int>(v28, (const std::set<unsigned int> *)(v4 + 304));
    v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v29,
            (const char (*)[20])" uninited_entities:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,std::string>(
            v30,
            (const std::unordered_map<unsigned int,std::string> *)(v4 + 384));
    v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v31, (const char (*)[19])" skipped_entities:");
    common::milog::MiLogStream::operator<<<unsigned int,std::pair<std::string,std::string>>(
      v32,
      (const std::unordered_map<unsigned int,std::pair<std::string,std::string >> *)(v4 + 480));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__t);
  }
  if ( !std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::empty((const std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176)) )
  {
    __for_range_0 = (std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *)(v4 + 176);
    __for_begin_0._M_current = std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::begin((std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176))._M_current;
    __for_end_0._M_current = std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v33 = __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>>::operator*(&__for_begin_0);
      std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>::tuple(&__t, v33);
      creature_wtr = std::get<0ul,std::weak_ptr<Creature>,int,int,int,unsigned int>(&__t);
      client_hash_value = std::get<1ul,std::weak_ptr<Creature>,int,int,int,unsigned int>(&__t);
      prev_server_hash_value = std::get<2ul,std::weak_ptr<Creature>,int,int,int,unsigned int>(&__t);
      server_hash_value = std::get<3ul,std::weak_ptr<Creature>,int,int,int,unsigned int>(&__t);
      job_id_0 = std::get<4ul,std::weak_ptr<Creature>,int,int,int,unsigned int>(&__t);
      std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v4 + 48));
      if ( !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 48)) )
      {
        common::tools::perf::make_shared<proto_log::AntiCheatBodyAbilityHash>();
        v34 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v35 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
          v35 = __asan_report_load8();
        v36 = *(_QWORD *)v35 + 32LL;
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v35 = __asan_report_load8();
        v37 = (*(__int64 (__fastcall **)(unsigned __int64))v36)(v35);
        proto_log::AntiCheatBodyAbilityHash::set_entity_type(v34, v37);
        v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v39 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        IdForEntityLog = Entity::getIdForEntityLog(v39);
        proto_log::AntiCheatBodyAbilityHash::set_id(v38, IdForEntityLog);
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        Entity::getGroup((const Entity *const)(v4 + 112));
        if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 112)) )
        {
          v41 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          GroupId = Group::getGroupId(v42);
          proto_log::AntiCheatBodyAbilityHash::set_group_id(v41, GroupId);
        }
        v44 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v45 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        ConfigId = Entity::getConfigId((const Entity *const)v45);
        proto_log::AntiCheatBodyAbilityHash::set_config_id(v44, ConfigId);
        v47 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)client_hash_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)client_hash_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)client_hash_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyAbilityHash::set_client_hash_value(v47, *client_hash_value);
        v48 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)server_hash_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)server_hash_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)server_hash_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyAbilityHash::set_server_hash_value(v48, *server_hash_value);
        v49 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)prev_server_hash_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)prev_server_hash_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prev_server_hash_value >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyAbilityHash::set_prev_server_hash_value(v49, *prev_server_hash_value);
        v50 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        v51 = Creature::getAbilityComp(v50);
        __for_range_1 = AbilityComp::getInitialAbilityNameVec(v51);
        __for_begin._M_current = std::vector<unsigned int>::begin(__for_range_1)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v52 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ability_name_hash = *v52;
          v53 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 144));
          v54 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          v55 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](
                  &v54->design_config.json_config_mgr,
                  ability_name_hash);
          proto_log::AntiCheatBodyAbilityHash::add_ability_name_list(v53, v55);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v56 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v57 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        EntityId = Entity::getEntityId((const Entity *const)v57);
        proto_log::AntiCheatBodyAbilityHash::set_entity_id(v56, EntityId);
        v59 = std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAbilityHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)job_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)job_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)job_id_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyAbilityHash::set_job_id(v59, *job_id_0);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyAbilityHash,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v4 + 144),
          (const std::shared_ptr<proto_log::AntiCheatBodyAbilityHash> *)(v4 + 80));
        Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_ABILITY_HASH, (MessagePtr *)(v4 + 144));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 144));
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 112));
        std::shared_ptr<proto_log::AntiCheatBodyAbilityHash>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyAbilityHash> *const)(v4 + 80));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 48));
      std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>::~tuple(&__t);
      __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>>::operator++(&__for_begin_0);
    }
  }
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>>::~vector((std::vector<std::tuple<std::weak_ptr<Creature>,int,int,int,unsigned int>> *const)(v4 + 176));
  std::unordered_map<unsigned int,std::pair<std::string,std::string>>::~unordered_map((std::unordered_map<unsigned int,std::pair<std::string,std::string >> *const)(v4 + 480));
  std::unordered_map<unsigned int,std::string>::~unordered_map((std::unordered_map<unsigned int,std::string> *const)(v4 + 384));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 304));
  if ( v86 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
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
  }
};

// Line 1822: range 00000000159EA39A-00000000159EAC95
void __cdecl SceneHandler::processEntityCombatConfigHashNotify(
        const SceneHandler *const this,
        Scene *scene,
        const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *entry_list,
        uint32_t *job_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Creature *v7; // rax
  std::shared_ptr<Creature> *v8; // r8
  int *v9; // r9
  google::protobuf::uint32 v10; // ecx
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::tuple<std::weak_ptr<Creature>,int,int> *v14; // rax
  Entity *v15; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  proto_log::EntityLog *v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  Player *player; // r14
  uint32_t *job_ida; // [rsp+0h] [rbp-240h]
  int v23; // [rsp+2Ch] [rbp-214h] BYREF
  google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::const_iterator __for_begin; // [rsp+30h] [rbp-210h] BYREF
  google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::const_iterator __for_end; // [rsp+38h] [rbp-208h] BYREF
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *__for_range; // [rsp+40h] [rbp-200h]
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *__for_range_0; // [rsp+48h] [rbp-1F8h]
  std::tuple_element<0,std::tuple<std::weak_ptr<Creature>,int,int> >::type *creature_wtr; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<0,std::tuple<int,int> >::type *client_hash_value; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,std::tuple<int> >::type *server_hash_value; // [rsp+60h] [rbp-1E0h]
  const proto::EntityConfigHashEntry *entry; // [rsp+68h] [rbp-1D8h]
  std::tuple<std::weak_ptr<Creature>,int,int> __t; // [rsp+70h] [rbp-1D0h] BYREF
  char v33[432]; // [rsp+90h] [rbp-1B0h] BYREF

  job_ida = job_id;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 14 entity_id:1827 64 4 22 config_hash_value:1835 80 16 17 creature_ptr:1863 112 16 12 log"
                        "_ptr:1869 144 16 17 creature_ptr:1828 176 24 24 report_creature_vec:1824 240 32 29 skipped_abili"
                        "ty_name_str:1829 304 48 23 invalid_entity_set:1823";
  *(_QWORD *)(v4 + 16) = SceneHandler::processEntityCombatConfigHashNotify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 304));
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::vector((std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *const)(v4 + 176));
  __for_range = entry_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::begin(entry_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::end(entry_list).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    entry = google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator*(&__for_begin);
    *(_DWORD *)(v4 + 48) = proto::EntityConfigHashEntry::entity_id(entry);
    Scene::findEntity<Creature>((const Scene *const)(v4 + 144), (uint32_t)scene);
    std::string::basic_string(v4 + 240);
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 144)) )
    {
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 304)) <= 4 )
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v4 + 304),
          (const std::set<unsigned int>::value_type *)(v4 + 48));
    }
    else
    {
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      *(_DWORD *)(v4 + 64) = Creature::calcOrGetCombatConfigHash(v7);
      if ( *(_DWORD *)(v4 + 64) )
      {
        if ( proto::EntityConfigHashEntry::hash_value(entry) != *(_DWORD *)(v4 + 64) )
        {
          v23 = proto::EntityConfigHashEntry::hash_value(entry);
          std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::emplace_back<std::shared_ptr<Creature> &,int,int &>(
            (std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *const)(v4 + 176),
            (std::shared_ptr<Creature> *)(v4 + 144),
            &v23,
            (int *)(v4 + 64),
            v8,
            v9,
            (int *)job_ida);
          if ( proto::EntityConfigHashEntry::job_id(entry) )
          {
            v10 = proto::EntityConfigHashEntry::job_id(entry);
            if ( *(_BYTE *)(((unsigned __int64)job_ida >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)job_ida & 7) + 3) >= *(_BYTE *)(((unsigned __int64)job_ida >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(job_ida);
            }
            *job_ida = v10;
          }
        }
      }
      else if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 304)) <= 4 )
      {
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v4 + 304),
          (const std::set<unsigned int>::value_type *)(v4 + 48));
      }
    }
    std::string::~string((void *)(v4 + 240));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 144));
    google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator++(&__for_begin);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 304)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "processEntityCombatConfigHashNotify",
      1853);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
            (common::milog::MiLogStream *const)(v4 + 240),
            (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = operator<<(v11, this->player_);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" invalid_entities:");
    common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::set<unsigned int> *)(v4 + 304));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 240));
  }
  if ( !std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::empty((const std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *const)(v4 + 176)) )
  {
    __for_range_0 = (std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *)(v4 + 176);
    __for_begin.it_ = (void *const *)std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::begin((std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *const)(v4 + 176))._M_current;
    __for_end.it_ = (void *const *)std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::tuple<std::weak_ptr<Creature>,int,int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>>(
              (const __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int>*,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int>*,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> > *)&__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>>::operator*((const __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int>*,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> > *const)&__for_begin);
      std::tuple<std::weak_ptr<Creature>,int,int>::tuple(&__t, v14);
      creature_wtr = std::get<0ul,std::weak_ptr<Creature>,int,int>(&__t);
      client_hash_value = std::get<1ul,std::weak_ptr<Creature>,int,int>(&__t);
      server_hash_value = std::get<2ul,std::weak_ptr<Creature>,int,int>(&__t);
      std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v4 + 80));
      if ( !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 80)) )
      {
        common::tools::perf::make_shared<proto_log::AntiCheatBodyCombatHash>();
        v15 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v16 = std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v17 = proto_log::AntiCheatBodyCombatHash::mutable_entity_log(v16);
        Entity::getEntityLog(v15, v17);
        v18 = std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        if ( *(_BYTE *)(((unsigned __int64)client_hash_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)client_hash_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)client_hash_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyCombatHash::set_client_hash_value(v18, *client_hash_value);
        v19 = std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyCombatHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        if ( *(_BYTE *)(((unsigned __int64)server_hash_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)server_hash_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)server_hash_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::AntiCheatBodyCombatHash::set_server_hash_value(v19, *server_hash_value);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyCombatHash,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v4 + 144),
          (const std::shared_ptr<proto_log::AntiCheatBodyCombatHash> *)(v4 + 112));
        Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_COMBAT_HASH, (MessagePtr *)(v4 + 144));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 144));
        std::shared_ptr<proto_log::AntiCheatBodyCombatHash>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyCombatHash> *const)(v4 + 112));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 80));
      std::tuple<std::weak_ptr<Creature>,int,int>::~tuple(&__t);
      __gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int> *,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>>::operator++((__gnu_cxx::__normal_iterator<std::tuple<std::weak_ptr<Creature>,int,int>*,std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> > *const)&__for_begin);
    }
  }
  std::vector<std::tuple<std::weak_ptr<Creature>,int,int>>::~vector((std::vector<std::tuple<std::weak_ptr<Creature>,int,int>> *const)(v4 + 176));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 304));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 1879: range 00000000159EAC96-00000000159EB306
void __cdecl SceneHandler::processEntityAvatarExcelConfigHashNotify(
        const SceneHandler *const this,
        Scene *scene,
        const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *entry_list,
        uint32_t *job_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  unsigned int Uid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int EntityId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  uint32_t v19; // ecx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  std::string *v24; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  google::protobuf::int32 v27; // eax
  Player *player; // r14
  google::protobuf::int32 hash_val; // [rsp+24h] [rbp-12Ch]
  google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry> *__for_range; // [rsp+38h] [rbp-118h]
  const proto::EntityConfigHashEntry *entry; // [rsp+40h] [rbp-110h]
  const std::string *avatar_excel_hash_str_ptr; // [rsp+48h] [rbp-108h]
  std::shared_ptr<google::protobuf::Message> v37; // [rsp+50h] [rbp-100h] BYREF
  char v38[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 15 avatar_ptr:1882 64 16 7 ss:1893 96 16 12 log_ptr:1903 128 32 13 hash_str:1895";
  *(_QWORD *)(v4 + 16) = SceneHandler::processEntityAvatarExcelConfigHashNotify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  __for_range = entry_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::begin(entry_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::EntityConfigHashEntry>::end(entry_list).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    entry = google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator*(&__for_begin);
    proto::EntityConfigHashEntry::entity_id(entry);
    Scene::findEntity<Avatar>((const Scene *const)(v4 + 32), (uint32_t)scene);
    if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.avatar_config_mgr;
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      AvatarId = Avatar::getAvatarId(v8);
      avatar_excel_hash_str_ptr = AvatarExcelConfigMgr::getAvatarExcelHashStr[abi:cxx11](p_avatar_config_mgr, AvatarId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
      if ( avatar_excel_hash_str_ptr )
      {
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64),
                Uid);
        v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        EntityId = Entity::getEntityId((const Entity *const)v16);
        v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, EntityId);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, avatar_excel_hash_str_ptr);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          (std::string *)(v4 + 128),
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
        hash_val = common::tools::StringUtils::getStringHash((const std::string *)(v4 + 128));
        if ( hash_val != proto::EntityConfigHashEntry::hash_value(entry) )
        {
          if ( proto::EntityConfigHashEntry::job_id(entry) )
          {
            v19 = proto::EntityConfigHashEntry::job_id(entry);
            if ( *(_BYTE *)(((unsigned __int64)job_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)job_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)job_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(job_id);
            }
            *job_id = v19;
          }
          common::tools::perf::make_shared<proto_log::AntiCheatBodyAvatarExcelHash>();
          v20 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          v22 = Avatar::getAvatarId(v21);
          proto_log::AntiCheatBodyAvatarExcelHash::set_avatar_id(v20, v22);
          v23 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v24 = std::move<std::string &>((std::string *)(v4 + 128));
          proto_log::AntiCheatBodyAvatarExcelHash::set_hash_str(v23, v24);
          v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          proto_log::AntiCheatBodyAvatarExcelHash::set_server_hash(v25, hash_val);
          v26 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarExcelHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v27 = proto::EntityConfigHashEntry::hash_value(entry);
          proto_log::AntiCheatBodyAvatarExcelHash::set_client_hash(v26, v27);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyAvatarExcelHash,void>(
            &v37,
            (const std::shared_ptr<proto_log::AntiCheatBodyAvatarExcelHash> *)(v4 + 96));
          Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_AVATAR_EXCEL_HASH, &v37);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v37);
          std::shared_ptr<proto_log::AntiCheatBodyAvatarExcelHash>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyAvatarExcelHash> *const)(v4 + 96));
        }
        std::string::~string((void *)(v4 + 128));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "processEntityAvatarExcelConfigHashNotify",
          1890);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v4 + 128),
                (const char (*)[36])"getAvatarExcelHashStr fail, avatar:");
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v12 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, v11);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v13, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::EntityConfigHashEntry const>::operator++(&__for_begin);
  }
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1914: range 00000000159EB308-00000000159EB356
int32_t __cdecl SceneHandler::onChangeWorldToSingleModeNotify(
        SceneHandler *const this,
        const proto::ChangeWorldToSingleModeNotify *notify)
{
  PlayerSceneComp *SceneComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  return PlayerSceneComp::changeMyWorldToSingleMode(SceneComp);
};

// Line 1920: range 00000000159EB358-00000000159EB81D
int32_t __cdecl SceneHandler::onGetMapMarkTipsReq(
        SceneHandler *const this,
        const proto::GetMapMarkTipsReq *req,
        proto::GetMapMarkTipsRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  PlayerDungeonComp *DungeonComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  proto::MapMarkTipsInfo *mark_tips; // [rsp+40h] [rbp-160h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-150h]
  const DungeonJsonConfig *dungeon_config_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-130h] BYREF
  char v21[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:1926 64 24 19 dungeon_id_vec:1922 128 56 17 point_id_set:1925";
  *(_QWORD *)(v3 + 16) = SceneHandler::onGetMapMarkTipsReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  DungeonComp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getElementTrialDungeonIdVec((std::vector<unsigned int> *)(v3 + 64), DungeonComp);
  mark_tips = proto::GetMapMarkTipsRsp::add_mark_tips_list(rsp_0);
  proto::MapMarkTipsInfo::set_tips_type(mark_tips, MARK_TIPS_DUNGEON_ELEMENT_TRIAL);
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 128));
  __for_range = (std::vector<unsigned int> *)(v3 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    dungeon_config_ptr = JsonConfigMgr::findDungeonJsonConfig(&v8->design_config.json_config_mgr, *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( dungeon_config_ptr )
    {
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v3 + 128),
        &dungeon_config_ptr->entry_point_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onGetMapMarkTipsReq",
        1931);
      v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v20,
             (const char (*)[58])"DungeonJsonConfig dungeon_config_ptr nullptr, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::unordered_set<unsigned int> *)(v3 + 128);
  __for_begin._M_current = (unsigned int *)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 128))._M_cur;
  __for_end._M_current = (unsigned int *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v10 = (google::protobuf::uint32 *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MapMarkTipsInfo::add_point_id_list(mark_tips, *v10);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = 0;
  if ( v21 == (char *)v3 )
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

// Line 1944: range 00000000159EB81E-00000000159EB8D2
int32_t __cdecl SceneHandler::onChangeWorldToSingleModeReq(
        SceneHandler *const this,
        const proto::ChangeWorldToSingleModeReq *req,
        proto::ChangeWorldToSingleModeRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v4; // rax
  uint32_t QuitMpValidTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::changeMyWorldToSingleMode(SceneComp) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getSceneComp(this->player_);
  QuitMpValidTime = PlayerSceneComp::getQuitMpValidTime(v4);
  proto::ChangeWorldToSingleModeRsp::set_quit_mp_valid_time(rsp_0, QuitMpValidTime);
  return 1230;
};

// Line 1956: range 00000000159EB8D4-00000000159EB934
int32_t __cdecl SceneHandler::onGetWorldMpInfoReq(
        SceneHandler *const this,
        const proto::GetWorldMpInfoReq *req,
        proto::GetWorldMpInfoRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  return PlayerSceneComp::onGetWorldMpInfoReq(SceneComp, req, rsp_0);
};

// Line 1962: range 00000000159EB936-00000000159EC30D
int32_t __cdecl SceneHandler::onForceDragBackTransferNotify(
        SceneHandler *const this,
        const proto::ForceDragBackTransferNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 Rotation; // rax
  Player *player; // r14
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  int32_t result; // eax
  bool is_move_speed_check_drag_player; // [rsp+16h] [rbp-13Ah]
  bool is_scene_time_move_speed_check_drag_player; // [rsp+17h] [rbp-139h]
  unsigned int val; // [rsp+18h] [rbp-138h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<Scene> v25; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 15 reborn_pos:1978 64 12 15 reborn_rot:1979 96 16 18 cur_scene_ptr:1963 128 16 15 avatar_ptr:1987";
  *(_QWORD *)(v2 + 16) = SceneHandler::onForceDragBackTransferNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onForceDragBackTransferNotify",
      1966);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v27,
           (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    if ( *(_BYTE *)(((unsigned __int64)&v7->security_config.is_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 - 62) & 7) >= *(_BYTE *)(((unsigned __int64)&v7->security_config.is_move_speed_check_drag_player >> 3)
                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(&v7->security_config.is_move_speed_check_drag_player);
    }
    is_move_speed_check_drag_player = v7->security_config.is_move_speed_check_drag_player;
    std::shared_ptr<Config>::~shared_ptr(&v24);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    if ( *(_BYTE *)(((unsigned __int64)&v8->security_config.is_scene_time_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 - 59) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->security_config.is_scene_time_move_speed_check_drag_player >> 3)
                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(&v8->security_config.is_scene_time_move_speed_check_drag_player);
    }
    is_scene_time_move_speed_check_drag_player = v8->security_config.is_scene_time_move_speed_check_drag_player;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    if ( !is_move_speed_check_drag_player && !is_scene_time_move_speed_check_drag_player )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onForceDragBackTransferNotify",
        1974);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v27,
             (const char (*)[30])"drag player is not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      *(Vector3 *)(v2 + 32) = PlayerAvatarComp::getDragBackPos(AvatarComp);
      Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
      if ( operator==((const Vector3 *)(v2 + 32), &Vector3::zero) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onForceDragBackTransferNotify",
          1983);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v27,
                (const char (*)[29])"drag pos is not set, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v11, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 128));
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 128), 0LL) )
        {
          v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v12);
          if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
            && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
          {
            Rotation = __asan_report_load_n(Rotation, 12LL);
          }
          *(_QWORD *)(v2 + 64) = *(_QWORD *)Rotation;
          *(_DWORD *)(v2 + 72) = *(_DWORD *)(Rotation + 8);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<Scene>::shared_ptr(&v25, (const std::shared_ptr<Scene> *)(v2 + 96));
        ret = Player::beginEnterScene(
                player,
                &v25,
                (const Vector3 *)(v2 + 32),
                (const Vector3 *)(v2 + 64),
                ENTER_GOTO,
                VISION_MEET,
                0,
                0,
                ENTER_REASON_FORCE_DRAG_BACK);
        std::shared_ptr<Scene>::~shared_ptr(&v25);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/scene_handler.cpp",
            "onForceDragBackTransferNotify",
            1996);
          v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v27,
                  (const char (*)[27])"beginTransToScenePos fails");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v15, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = ret;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/handler/scene_handler.cpp",
            "onForceDragBackTransferNotify",
            2000);
          v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v26,
                  (const char (*)[36])"ForceDragBackTransfer success, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" drag_pos:");
          Vector3::toString[abi:cxx11]((std::string *)&v27, (const Vector3 *const)(v2 + 32));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v27);
          std::string::~string(&v27);
          common::milog::MiLogStream::~MiLogStream(&v26);
          if ( (char)((unsigned __int64)&Vector3::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3)
                                                                        + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)&Vector3::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load_n(&Vector3::zero, 12LL);
          }
          *(Vector3 *)(v2 + 32) = Vector3::zero;
          v6 = 0;
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  result = v6;
  if ( v28 == (char *)v2 )
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

// Line 2006: range 00000000159EC30E-00000000159ECAD8
int32_t __cdecl SceneHandler::onGetScenePerformanceReq(
        SceneHandler *const this,
        const proto::GetScenePerformanceReq *req,
        proto::GetScenePerformanceRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  uint32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  Scene *v10; // rax
  int32_t ActiveGroupCount; // edx
  Scene *v12; // rax
  int32_t EntityCount; // edx
  Scene *v14; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v16; // rdx
  google::protobuf::uint32 v17; // edx
  Scene *v18; // rax
  int32_t MonsterCountForPerf; // edx
  Scene *v20; // rax
  int32_t GadgetCountForPerf; // edx
  Scene *v22; // rax
  int32_t GatherCountForPerf; // edx
  Scene *v24; // rax
  int32_t GatherCountInSightForPerf; // edx
  std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  proto::Vector *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  Scene *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  Scene *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  Scene *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  Scene *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  Scene *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  Scene *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  Scene *v52; // rax
  int32_t result; // eax
  int v55; // [rsp+24h] [rbp-CCh] BYREF
  int v56; // [rsp+28h] [rbp-C8h] BYREF
  unsigned int v57; // [rsp+2Ch] [rbp-C4h] BYREF
  int v58; // [rsp+30h] [rbp-C0h] BYREF
  int v59; // [rsp+34h] [rbp-BCh] BYREF
  int v60; // [rsp+38h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v62; // [rsp+40h] [rbp-B0h] BYREF
  char v63[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 18 cur_scene_ptr:2007 64 16 17 location_ptr:2013";
  *(_QWORD *)(v3 + 16) = SceneHandler::onGetScenePerformanceReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onGetScenePerformanceReq",
      2010);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v62,
           (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v62);
    v7 = -1;
  }
  else
  {
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    Scene::getPlayerLocation((Scene *const)(v3 + 64), v8);
    if ( std::operator==<ScenePlayerLocation>((const std::shared_ptr<ScenePlayerLocation> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onGetScenePerformanceReq",
        2016);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v62,
             (const char (*)[31])"getPlayerLocation failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v62);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ActiveGroupCount = Scene::getActiveGroupCount(v10);
      proto::GetScenePerformanceRsp::set_group_num(rsp_0, ActiveGroupCount);
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      EntityCount = Scene::getEntityCount(v12);
      proto::GetScenePerformanceRsp::set_entity_num(rsp_0, EntityCount);
      v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v14);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v16 = *(_QWORD *)BlockGroupComp + 136LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v17 = (*(__int64 (__fastcall **)(unsigned __int64))v16)(BlockGroupComp);
      proto::GetScenePerformanceRsp::set_dynamic_group_num(rsp_0, v17);
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      MonsterCountForPerf = Scene::getMonsterCountForPerf(v18);
      proto::GetScenePerformanceRsp::set_monster_num(rsp_0, MonsterCountForPerf);
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GadgetCountForPerf = Scene::getGadgetCountForPerf(v20);
      proto::GetScenePerformanceRsp::set_gadget_num(rsp_0, GadgetCountForPerf);
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GatherCountForPerf = Scene::getGatherCountForPerf(v22);
      proto::GetScenePerformanceRsp::set_gather_num(rsp_0, GatherCountForPerf);
      v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GatherCountInSightForPerf = Scene::getGatherCountInSightForPerf(v24);
      proto::GetScenePerformanceRsp::set_gather_num_insight(rsp_0, GatherCountInSightForPerf);
      v26 = std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v27 = proto::GetScenePerformanceRsp::mutable_pos(rsp_0);
      Vector3::toClient(&v26->cur_pos, v27);
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onGetScenePerformanceReq",
        2027);
      v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v62,
              (const char (*)[31])"onGetScenePerformanceReq  pos:");
      v29 = std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v30 = operator<<(v28, &v29->cur_pos);
      v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" entity:");
      v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v55 = Scene::getEntityCount(v32);
      v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, &v55);
      v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" group:");
      v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v56 = Scene::getActiveGroupCount(v35);
      v36 = common::milog::MiLogStream::operator<<<int,(int *)0>(v34, &v56);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v36, (const char (*)[16])" dynamic_group:");
      v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v39 = (unsigned __int64)Scene::getBlockGroupComp(v38);
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8();
      v40 = *(_QWORD *)v39 + 136LL;
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8();
      v57 = (*(__int64 (__fastcall **)(unsigned __int64))v40)(v39);
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &v57);
      v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v41, (const char (*)[10])" monster:");
      v43 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v58 = Scene::getMonsterCountForPerf(v43);
      v44 = common::milog::MiLogStream::operator<<<int,(int *)0>(v42, &v58);
      v45 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v44, (const char (*)[9])" gadget:");
      v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v59 = Scene::getGadgetCountForPerf(v46);
      v47 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, &v59);
      v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])" gather:");
      v49 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v60 = Scene::getGatherCountForPerf(v49);
      v50 = common::milog::MiLogStream::operator<<<int,(int *)0>(v48, &v60);
      v51 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v50, (const char (*)[17])" gather_insight:");
      v52 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Scene::getGatherCountInSightForPerf(v52);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)&val);
      common::milog::MiLogStream::~MiLogStream(&v62);
      v7 = 0;
    }
    std::shared_ptr<ScenePlayerLocation>::~shared_ptr((std::shared_ptr<ScenePlayerLocation> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v63 == (char *)v3 )
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

// Line 2039: range 00000000159ECADA-00000000159ECD6C
int32_t __cdecl SceneHandler::onGetAllSceneGalleryInfoReq(
        SceneHandler *const this,
        const proto::GetAllSceneGalleryInfoReq *req,
        proto::GetAllSceneGalleryInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t AllGalleryInfo; // r14d
  Scene *v8; // rax
  SceneGalleryComp *GalleryComp; // r14
  uint32_t Uid; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 cur_scene_ptr:2040";
  *(_QWORD *)(v3 + 16) = SceneHandler::onGetAllSceneGalleryInfoReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onGetAllSceneGalleryInfoReq",
      2043);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    AllGalleryInfo = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    GalleryComp = Scene::getGalleryComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    AllGalleryInfo = SceneGalleryComp::getAllGalleryInfo(GalleryComp, Uid, rsp_0);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = AllGalleryInfo;
  if ( v15 == (char *)v3 )
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

// Line 2050: range 00000000159ECD6E-00000000159ED12C
int32_t __cdecl SceneHandler::onSceneAudioNotify(SceneHandler *const this, const proto::SceneAudioNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  Entity *v8; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 18 cur_scene_ptr:2051 64 16 15 avatar_ptr:2057";
  *(_QWORD *)(v2 + 16) = SceneHandler::onSceneAudioNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onSceneAudioNotify",
      2054);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v11,
           (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 64));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onSceneAudioNotify",
        2060);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v11,
             (const char (*)[28])"avatar_ptr is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      v8 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v6 = Entity::notifyViewingPlayers<proto::SceneAudioNotify const>(v8, notify, 0);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
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

// Line 2067: range 00000000159ED12E-00000000159ED74B
int32_t __cdecl SceneHandler::onInterruptGalleryReq(
        SceneHandler *const this,
        const proto::InterruptGalleryReq *req,
        proto::InterruptGalleryRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::uint32 v7; // edx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  uint32_t GalleryComp; // eax
  BaseGallery *v13; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseGallery *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  uint32_t Uid; // r15d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  char v21; // al
  int v22; // r15d
  Scene *v23; // rax
  SceneGalleryComp *v24; // rax
  int32_t result; // eax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 15 gallery_id:2075 64 16 18 cur_scene_ptr:2069 96 16 21 base_gallery_ptr:2082 128 16 21 o"
                        "wner_player_ptr:2102";
  *(_QWORD *)(v4 + 16) = SceneHandler::onInterruptGalleryReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  v7 = proto::InterruptGalleryReq::gallery_id(req);
  proto::InterruptGalleryRsp::set_gallery_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 64));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 64), 0LL) )
  {
    *(_DWORD *)(v4 + 48) = proto::InterruptGalleryReq::gallery_id(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 128));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           &v9->design_config.txt_config_mgr.gallery_config_mgr,
                           *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
    if ( !gallery_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/scene_handler.cpp",
        "onInterruptGalleryReq",
        2079);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v28,
              (const char (*)[43])"gallery_config_ptr is nullptr, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v3 = -1;
      goto LABEL_41;
    }
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GalleryComp = (unsigned int)Scene::getGalleryComp(v11);
    SceneGalleryComp::findGallery((SceneGalleryComp *const)(v4 + 96), GalleryComp);
    if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v4 + 96), 0LL)
      || (v13 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
          !BaseGallery::isStart(v13)) )
    {
      v3 = 524;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->can_interrupt_by_client >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)gallery_config_ptr + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->can_interrupt_by_client >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load1(&gallery_config_ptr->can_interrupt_by_client);
      }
      if ( gallery_config_ptr->can_interrupt_by_client )
      {
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( !Scene::isHomeScene(v15) )
        {
          v16 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( BaseGallery::getPlayerCount(v16) > 1 )
          {
            v3 = 525;
            goto LABEL_40;
          }
        }
        else
        {
          v17 = (unsigned __int64)std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8();
          v18 = *(_QWORD *)v17 + 64LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v18)(v4 + 128, v17);
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
            goto LABEL_33;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( Uid == Player::getUid(v20) )
            v21 = 0;
          else
LABEL_33:
            v21 = 1;
          if ( v21 )
          {
            v3 = 557;
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
          if ( v22 != 1 )
            goto LABEL_40;
        }
        v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v24 = Scene::getGalleryComp(v23);
        v3 = SceneGalleryComp::forceStopAndClearGallery(v24, *(_DWORD *)(v4 + 48), 0, GALLERY_STOP_CLIENT_INTERRUPT);
        goto LABEL_40;
      }
      v3 = 526;
    }
LABEL_40:
    std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v4 + 96));
    goto LABEL_41;
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/scene_handler.cpp",
    "onInterruptGalleryReq",
    2072);
  v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v28,
         (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v28);
  v3 = -1;
LABEL_41:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
  result = v3;
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2114: range 00000000159EDBB0-00000000159EE37F
int32_t __cdecl SceneHandler::onClientLoadingCostumeVerificationNotify(
        SceneHandler *const this,
        const proto::ClientLoadingCostumeVerificationNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  Scene *v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  google::protobuf::uint64 v22; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  google::protobuf::uint32 v26; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  google::protobuf::uint64 v30; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Player *player; // r14
  int32_t result; // eax
  SceneHandler::onClientLoadingCostumeVerificationNotify::<lambda(Player&)> v34; // [rsp-30h] [rbp-1E0h]
  const data::AvatarCostumeExcelConfig *config_ptr; // [rsp+18h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> v36; // [rsp+20h] [rbp-190h] BYREF
  common::milog::MiLogStream v37; // [rsp+30h] [rbp-180h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-160h] BYREF
  SceneHandler::onClientLoadingCostumeVerificationNotify::<lambda(Player&)> __f; // [rsp+70h] [rbp-140h]
  char v40[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 19 is_has_costume:2124 64 4 8 uid:2120 80 4 16 avatar_type:2121 96 4 14 avatar_id:2122 11"
                        "2 4 19 cur_costume_id:2123 128 8 18 expected_hash:2139 160 16 14 scene_ptr:2115 192 16 12 log_ptr:2158";
  *(_QWORD *)(v2 + 16) = SceneHandler::onClientLoadingCostumeVerificationNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 160));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 160)) )
  {
    v5 = 103;
  }
  else
  {
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 80) = 0;
    *(_DWORD *)(v2 + 96) = 0;
    *(_DWORD *)(v2 + 112) = 0;
    *(_BYTE *)(v2 + 48) = 0;
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    __f.__notify = notify;
    __f.__uid = (uint32_t *)(v2 + 64);
    __f.__avatar_type = (uint32_t *)(v2 + 80);
    __f.__avatar_id = (uint32_t *)(v2 + 96);
    __f.__cur_costume_id = (uint32_t *)(v2 + 112);
    __f.__is_has_costume = (bool *)(v2 + 48);
    v34.__is_has_costume = (bool *)(v2 + 48);
    v34.__cur_costume_id = (uint32_t *)(v2 + 112);
    v34.__avatar_id = (uint32_t *)(v2 + 96);
    v34.__avatar_type = (uint32_t *)(v2 + 80);
    v34.__uid = (uint32_t *)(v2 + 64);
    v34.__notify = notify;
    std::function<ForeachPolicy ()(Player &)>::function<SceneHandler::onClientLoadingCostumeVerificationNotify(proto::ClientLoadingCostumeVerificationNotify const&)::{lambda(Player &)#1},void,void>(
      &p_func,
      v34);
    Scene::foreachPlayer(v6, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    *(_QWORD *)(v2 + 128) = 0LL;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
    config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
                   &v7->design_config.txt_config_mgr.avatar_fashion_config_mgr,
                   *(_DWORD *)(v2 + 112));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Player::getUid(this->player_) == *(_DWORD *)(v2 + 64) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->prefab_path_hash >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_QWORD *)(v2 + 128) = config_ptr->prefab_path_hash;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_QWORD *)(v2 + 128) = config_ptr->prefab_path_remote_hash;
      }
    }
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onClientLoadingCostumeVerificationNotify",
      2152);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" avatar_type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" avatar_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 96));
    v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" cur_costume_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 112));
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" expected_hash:");
    v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v16,
            (const unsigned __int64 *)(v2 + 128));
    v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" notify:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&p_func, &notify->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&p_func);
    std::string::~string(&p_func);
    common::milog::MiLogStream::~MiLogStream(&v37);
    if ( *(_BYTE *)(v2 + 48)
      && proto::ClientLoadingCostumeVerificationNotify::costume_id(notify) == *(_DWORD *)(v2 + 112)
      && proto::ClientLoadingCostumeVerificationNotify::prefab_hash(notify) == *(_QWORD *)(v2 + 128) )
    {
      v5 = 0;
    }
    else
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyClientLoadingCostumeVerification>();
      v20 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_uid(v20, *(_DWORD *)(v2 + 64));
      v21 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      v22 = proto::ClientLoadingCostumeVerificationNotify::guid(notify);
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_guid(v21, v22);
      v23 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_avatar_type(v23, *(_DWORD *)(v2 + 80));
      v24 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_avatar_id(v24, *(_DWORD *)(v2 + 96));
      v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      v26 = proto::ClientLoadingCostumeVerificationNotify::costume_id(notify);
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_costume_id(v25, v26);
      v27 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_cur_costume_id(v27, *(_DWORD *)(v2 + 112));
      v28 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_is_has_costume(v28, *(_BYTE *)(v2 + 48));
      v29 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      v30 = proto::ClientLoadingCostumeVerificationNotify::prefab_hash(notify);
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_prefab_hash(v29, v30);
      v31 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientLoadingCostumeVerification,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_server_hash(v31, *(_QWORD *)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyClientLoadingCostumeVerification,void>(
        &v36,
        (const std::shared_ptr<proto_log::AntiCheatBodyClientLoadingCostumeVerification> *)(v2 + 192));
      Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_CLIENT_LOADING_COSTUME_VERIFICATION, &v36);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v36);
      v5 = -1;
      std::shared_ptr<proto_log::AntiCheatBodyClientLoadingCostumeVerification>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyClientLoadingCostumeVerification> *const)(v2 + 192));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
  result = v5;
  if ( v40 == (char *)v2 )
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

// Line 2125: range 00000000159ED74C-00000000159EDBAF
ForeachPolicy __cdecl SceneHandler::onClientLoadingCostumeVerificationNotify(proto::ClientLoadingCostumeVerificationNotify const&)::{lambda(Player &)#1}::operator()(
        const SceneHandler::onClientLoadingCostumeVerificationNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerAvatarComp *AvatarComp; // r14
  ForeachPolicy v6; // r14d
  uint32_t *uid; // r14
  uint32_t v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  uint32_t v11; // ecx
  uint32_t *avatar_type; // rdx
  uint32_t v13; // r8d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  uint32_t *avatar_id; // r14
  uint32_t AvatarId; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  FashionComp *FashionComp; // rax
  int32_t CostumeId; // ecx
  unsigned __int64 cur_costume_id; // rdx
  int32_t v21; // r8d
  PlayerAvatarComp *v22; // r15
  uint32_t v23; // ecx
  bool *is_has_costume; // r14
  bool HasCostumeId; // cl
  ForeachPolicy result; // eax
  char v27[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:2127";
  *(_QWORD *)(v2 + 16) = SceneHandler::onClientLoadingCostumeVerificationNotify(proto::ClientLoadingCostumeVerificationNotify const&)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  AvatarComp = Player::getAvatarComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::ClientLoadingCostumeVerificationNotify::guid(__closure->__notify);
  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)AvatarComp);
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v6 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    uid = __closure->__uid;
    v8 = Player::getUid(player);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(uid);
    }
    *uid = v8;
    v9 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 400LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v11 = (*(__int64 (__fastcall **)(unsigned __int64))v10)(v9);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar_type >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar_type = __closure->__avatar_type;
    v13 = v11;
    if ( *(_BYTE *)(((unsigned __int64)avatar_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__avatar_type);
    }
    *avatar_type = v13;
    v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar_id = __closure->__avatar_id;
    AvatarId = Avatar::getAvatarId(v14);
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(avatar_id);
    }
    *avatar_id = AvatarId;
    v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FashionComp = Avatar::getFashionComp(v17);
    CostumeId = FashionComp::getCostumeId(FashionComp);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_costume_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    cur_costume_id = (unsigned __int64)__closure->__cur_costume_id;
    v21 = CostumeId;
    if ( *(_BYTE *)((cur_costume_id >> 3) + 0x7FFF8000) != 0
      && (char)((cur_costume_id & 7) + 3) >= *(_BYTE *)((cur_costume_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__cur_costume_id);
    }
    *(_DWORD *)cur_costume_id = v21;
    v22 = Player::getAvatarComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = proto::ClientLoadingCostumeVerificationNotify::costume_id(__closure->__notify);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_has_costume >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_has_costume = __closure->__is_has_costume;
    HasCostumeId = PlayerAvatarComp::isHasCostumeId(v22, v23);
    if ( *(_BYTE *)(((unsigned __int64)is_has_costume >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_has_costume & 7) >= *(_BYTE *)(((unsigned __int64)is_has_costume >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_has_costume);
    }
    *is_has_costume = HasCostumeId;
    v6 = FOREACH_BREAK;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = v6;
  if ( v27 == (char *)v2 )
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

// Line 2173: range 00000000159EE380-00000000159EE90F
int32_t __cdecl SceneHandler::onGetMapAreaReq(
        SceneHandler *const this,
        const proto::GetMapAreaReq *req,
        proto::GetMapAreaRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerHomeComp *HomeComp; // rax
  int v8; // r15d
  common::milog::MiLogStream *v9; // rcx
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  std::pair<unsigned int const,bool> *v12; // rax
  std::pair<unsigned int const,bool> *v13; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,bool>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,bool>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::unordered_map<unsigned int,bool> *__for_range; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,bool> >::type *map_area_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *is_open; // [rsp+48h] [rbp-D8h]
  proto::MapAreaInfo *proto_map_area_info; // [rsp+50h] [rbp-D0h]
  std::pair<unsigned int const,bool> __in; // [rsp+58h] [rbp-C8h] BYREF
  std::shared_ptr<Player> __r; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 21 owner_player_ptr:2174 64 16 14 world_ptr:2181";
  *(_QWORD *)(v4 + 16) = SceneHandler::onGetMapAreaReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Player>((Player *)&__r);
    std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v4 + 32), &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
LABEL_16:
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onGetMapAreaReq",
        2190);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v24, (const char (*)[31])off_258F05A0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v3 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      SceneComp = Player::getSceneComp(v10);
      __for_range = PlayerSceneComp::getMapAreaInfoMap(SceneComp);
      __for_begin._M_cur = std::unordered_map<unsigned int,bool>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,bool>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(&__for_begin, &__for_end) )
      {
        v12 = (std::pair<unsigned int const,bool> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,bool>,false,false>::operator*(&__for_begin);
        v13 = v12;
        if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(&v12->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v12->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v12, 8LL);
        }
        __in = *v13;
        map_area_id = std::get<0ul,unsigned int const,bool>(&__in);
        is_open = std::get<1ul,unsigned int const,bool>(&__in);
        proto_map_area_info = proto::GetMapAreaRsp::add_map_area_info_list(rsp_0);
        if ( *(_BYTE *)(((unsigned __int64)map_area_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)map_area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)map_area_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::MapAreaInfo::set_map_area_id(proto_map_area_info, *map_area_id);
        if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(is_open);
        }
        proto::MapAreaInfo::set_is_open(proto_map_area_info, *is_open);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,bool>,false,false>::operator++(&__for_begin);
      }
      v3 = 0;
    }
    goto LABEL_30;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 64));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 64)) )
  {
    v3 = -1;
    v8 = 0;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)&__r);
    std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v4 + 32), &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
    v8 = 1;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
  if ( v8 == 1 )
    goto LABEL_16;
LABEL_30:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  result = v3;
  if ( v25 == (char *)v4 )
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

// Line 2203: range 00000000159EE910-00000000159EF0CF
int32_t __cdecl SceneHandler::onBackRebornGalleryReq(
        SceneHandler *const this,
        const proto::BackRebornGalleryReq *req,
        proto::BackRebornGalleryRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::uint32 v7; // edx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  PlayerSceneComp *SceneComp; // r15
  Scene *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  Scene *v22; // rax
  uint32_t GalleryComp; // eax
  BaseGallery *v24; // rax
  BaseGallery *v26; // rcx
  int32_t result; // eax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-170h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-150h] BYREF
  char v32[272]; // [rsp+90h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 15 gallery_id:2211 64 12 15 reborn_pos:2224 96 12 15 reborn_rot:2224 128 16 18 cur_scene_"
                        "ptr:2205 160 16 16 awaiter_ptr:2221 192 16 21 base_gallery_ptr:2235";
  *(_QWORD *)(v4 + 16) = SceneHandler::onBackRebornGalleryReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -202178560;
  v7 = proto::BackRebornGalleryReq::gallery_id(req);
  proto::BackRebornGalleryRsp::set_gallery_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onBackRebornGalleryReq",
      2208);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v30,
           (const char (*)[31])"cur_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v3 = -1;
    goto LABEL_42;
  }
  *(_DWORD *)(v4 + 48) = proto::BackRebornGalleryReq::gallery_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 192));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v9->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
  if ( !gallery_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/scene_handler.cpp",
      "onBackRebornGalleryReq",
      2215);
    v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v30,
            (const char (*)[43])"gallery_config_ptr is nullptr, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v3 = -1;
    goto LABEL_42;
  }
  v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  Scene::getGalleryComp(v11);
  SceneGalleryComp::getSceneTransferAwaiter((const SceneGalleryComp *const)(v4 + 192));
  std::dynamic_pointer_cast<GallerySceneTransferAwaiter,SceneTransferAwaiter>((const std::shared_ptr<SceneTransferAwaiter> *)(v4 + 160));
  std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v4 + 192));
  if ( !std::operator!=<GallerySceneTransferAwaiter>(
          (const std::shared_ptr<GallerySceneTransferAwaiter> *)(v4 + 160),
          0LL)
    || (v12 = std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
        !SceneTransferAwaiter::isActive(v12))
    || (v13 = std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
        GallerySceneTransferAwaiter::getGalleryId(v13) != *(_DWORD *)(v4 + 48)) )
  {
    v21 = 2;
    goto LABEL_30;
  }
  Vector3::Vector3((Vector3 *const)(v4 + 64), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v4 + 96), 0.0, 0.0, 0.0);
  v15 = (unsigned __int64)std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GallerySceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  v16 = *(_QWORD *)v15 + 88LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64))v16)(v15, v4 + 64, v4 + 96) )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  TransferReason::TransferReason(&p_reason, ENTER_REASON_GALLERY_BACK);
  v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  LOBYTE(SceneComp) = PlayerSceneComp::jumpToScene(
                        SceneComp,
                        v18,
                        (const Vector3 *)(v4 + 64),
                        (const Vector3 *)(v4 + 96),
                        0,
                        &p_reason) != 0;
  TransferReason::~TransferReason(&p_reason);
  if ( (_BYTE)SceneComp )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onBackRebornGalleryReq",
      2228);
    v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v30, (const char (*)[13])"gallery_id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v20, (const char (*)[21])", jumpToScene failed");
    common::milog::MiLogStream::~MiLogStream(&v30);
LABEL_28:
    v21 = 0;
    goto LABEL_30;
  }
  v3 = 0;
  v21 = 1;
LABEL_30:
  std::shared_ptr<GallerySceneTransferAwaiter>::~shared_ptr((std::shared_ptr<GallerySceneTransferAwaiter> *const)(v4 + 160));
  if ( !v21 || v21 == 2 )
  {
    v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    GalleryComp = (unsigned int)Scene::getGalleryComp(v22);
    SceneGalleryComp::findGallery((SceneGalleryComp *const)(v4 + 192), GalleryComp);
    if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v4 + 192), 0LL)
      || (v24 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
          !BaseGallery::isStart(v24)) )
    {
      v3 = 524;
    }
    else
    {
      v26 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = BaseGallery::backRevivePoint(v26, this->player_);
    }
    std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v4 + 192));
  }
LABEL_42:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
  result = v3;
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2245: range 00000000159EF0D0-00000000159EF546
int32_t __cdecl SceneHandler::onCheckGroupReplacedReq(
        SceneHandler *const this,
        const proto::CheckGroupReplacedReq *req,
        proto::CheckGroupReplacedRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  Scene *v15; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 group_id:2252 48 4 13 scene_id:2254 64 16 14 scene_ptr:2255";
  *(_QWORD *)(v4 + 16) = SceneHandler::onCheckGroupReplacedReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  if ( proto::CheckGroupReplacedReq::group_id_list_size(req) <= 20 )
  {
    __for_range = proto::CheckGroupReplacedReq::group_id_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *__for_begin;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      *(_DWORD *)(v4 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v8->design_config.lua_config_mgr, *(_DWORD *)(v4 + 32));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v4 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onCheckGroupReplacedReq",
          2258);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])"findScene:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" group_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v3 = -1;
        v14 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        BlockGroupComp = Scene::getBlockGroupComp(v15);
        if ( SceneBlockGroupComp::isGroupReplaced(BlockGroupComp, *(_DWORD *)(v4 + 32)) )
          proto::CheckGroupReplacedRsp::add_replaced_group_id_list(rsp_0, *(_DWORD *)(v4 + 32));
        v14 = 1;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
      if ( v14 != 1 )
        goto LABEL_20;
      ++__for_begin;
    }
    v3 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onCheckGroupReplacedReq",
      2249);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v22,
           (const char (*)[28])"invalid group_id_lise size:");
    *(_DWORD *)(v4 + 48) = proto::CheckGroupReplacedReq::group_id_list_size(req);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v3 = -1;
  }
LABEL_20:
  result = v3;
  if ( v23 == (char *)v4 )
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

// Line 2271: range 00000000159EF548-00000000159F0066
int32_t __cdecl SceneHandler::onDeathZoneObserveNotify(
        SceneHandler *const this,
        const proto::DeathZoneObserveNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t GroupId; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // r14
  uint32_t v29; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t v37; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  uint32_t *p_uid; // rax
  Group *v42; // rax
  int32_t result; // eax
  unsigned int v44; // [rsp+14h] [rbp-13Ch] BYREF
  unsigned int v45; // [rsp+18h] [rbp-138h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  common::milog::MiLogStream v47; // [rsp+20h] [rbp-130h] BYREF
  char v48[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 21 source_entity_id:2279 48 4 21 target_entity_id:2292 64 16 14 scene_ptr:2272 96 16 22 s"
                        "ource_gadget_ptr:2280 128 16 21 source_group_ptr:2286 160 16 22 target_gadget_ptr:2293 192 16 14 event_ptr:2307";
  *(_QWORD *)(v2 + 16) = SceneHandler::onDeathZoneObserveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onDeathZoneObserveNotify",
      2275);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v47,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = proto::DeathZoneObserveNotify::source_entity_id(notify);
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v2 + 96), v7);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onDeathZoneObserveNotify",
        2283);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v47,
             (const char (*)[29])"findEntity fails, entity_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v6 = -1;
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Entity::getGroup((const Entity *const)(v2 + 128));
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/scene_handler.cpp",
          "onDeathZoneObserveNotify",
          2289);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v47, (const char (*)[28])off_258F0A60);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = proto::DeathZoneObserveNotify::target_entity_id(notify);
        v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Scene::findEntity<Gadget>((const Scene *const)(v2 + 160), v14);
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/scene_handler.cpp",
            "onDeathZoneObserveNotify",
            2296);
          v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v47,
                  (const char (*)[29])"findEntity fails, entity_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          common::milog::MiLogStream::~MiLogStream(&v47);
          v6 = -1;
        }
        else
        {
          v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          GroupId = Group::getGroupId(v18);
          v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          if ( GroupId == Entity::getGroupId((const Entity *const)v20) )
          {
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 192), 118);
            if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/scene_handler.cpp",
                "onDeathZoneObserveNotify",
                2310);
              v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v47,
                      (const char (*)[49])"createEvent EVENT_DEATH_ZONE_OBSERVE fails, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
              common::milog::MiLogStream::~MiLogStream(&v47);
              v6 = -1;
            }
            else
            {
              v29 = *(_DWORD *)(v2 + 32);
              v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              p_source_entity_id = &v30->source_entity_id;
              if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(p_source_entity_id);
              }
              v30->source_entity_id = v29;
              v32 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              ConfigId = Entity::getConfigId((const Entity *const)v32);
              v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              p_param1 = &v34->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v34->param1 = ConfigId;
              v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v37 = Entity::getConfigId((const Entity *const)v36);
              v38 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&v38->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v38->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v38 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v38->param2);
              }
              v38->param2 = v37;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              v40 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              p_uid = &v40->uid;
              if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(p_uid);
              }
              v40->uid = Uid;
              v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Group::handleEvent(v42, (EventPtr *)(v2 + 192));
              v6 = 0;
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 192));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onDeathZoneObserveNotify",
              2302);
            v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v47,
                    (const char (*)[17])"source group id:");
            v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v44 = Group::getGroupId(v22);
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v44);
            v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v23, (const char (*)[27])off_258F0AE0);
            v25 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            v45 = Entity::getGroupId((const Entity *const)v25);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v45);
            v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
            common::milog::MiLogStream::~MiLogStream(&v47);
            v6 = -1;
          }
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 160));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v6;
  if ( v48 == (char *)v2 )
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

// Line 2324: range 00000000159F0068-00000000159F06AA
int32_t __cdecl SceneHandler::onRefreshEntityAuthNotify(
        SceneHandler *const this,
        const proto::RefreshEntityAuthNotify *notify)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Creature *v15; // r15
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Player> p_authority_player_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 entity_id:2336 64 16 14 scene_ptr:2325 96 16 17 creature_ptr:2338";
  *(_QWORD *)(v3 + 16) = SceneHandler::onRefreshEntityAuthNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/scene_handler.cpp",
      "onRefreshEntityAuthNotify",
      2328);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v22,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
  }
  else
  {
    v7 = proto::RefreshEntityAuthNotify::entity_id_list(notify);
    if ( google::protobuf::RepeatedField<unsigned int>::size(v7) <= 20 )
    {
      __for_range = proto::RefreshEntityAuthNotify::entity_id_list(notify);
      __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *__for_begin;
        v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Scene::findEntity<Creature>((const Scene *const)(v3 + 96), v10);
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/scene_handler.cpp",
            "onRefreshEntityAuthNotify",
            2341);
          v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v22,
                  (const char (*)[29])"findEntity fails, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          v2 = -1;
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( !Creature::getIsAuthPreferClosestPlayer(v13) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/scene_handler.cpp",
              "onRefreshEntityAuthNotify",
              2347);
            v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v22,
                    (const char (*)[51])"entity not allowed client refresh auth, entity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            v2 = -1;
            v12 = 0;
          }
          else
          {
            v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            std::shared_ptr<Player>::shared_ptr(&p_authority_player_ptr, 0LL);
            Creature::refreshAuthority(v15, &p_authority_player_ptr, 0);
            std::shared_ptr<Player>::~shared_ptr(&p_authority_player_ptr);
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/scene_handler.cpp",
              "onRefreshEntityAuthNotify",
              2351);
            v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v22,
                    (const char (*)[32])"client refresh auth, entity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            v12 = 1;
          }
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 96));
        if ( v12 != 1 )
          goto LABEL_24;
        ++__for_begin;
      }
      v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/scene_handler.cpp",
        "onRefreshEntityAuthNotify",
        2333);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v22,
             (const char (*)[29])"invalid entity_id_list size:");
      v9 = proto::RefreshEntityAuthNotify::entity_id_list(notify);
      *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedField<unsigned int>::size(v9);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
    }
  }
LABEL_24:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 2354: range 0000000015A0DF8D-0000000015A0DFB0
void __cdecl GLOBAL__sub_I_merge_single_roguelike_dungeon_runtime_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 2354: range 0000000015A0D794-0000000015A0DE79
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  const char *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  luabind::detail::class_id v27; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_roguelike_dungeon_runtime_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      v11 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v12 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v13 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v14 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v16 = 1;
        v17 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v17;
      }
      v18 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v21 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v23 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v24;
      }
      v25 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
        }
        *v26 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v27 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(&luabind::detail::registered_class<ScriptContext>::id);
        luabind::detail::registered_class<ScriptContext>::id = v27;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 2354: range 0000000015A0DE7A-0000000015A0DF8C
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  luabind::detail::class_id v4; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_roguelike_dungeon_runtime_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
        }
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v4 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v4 = __asan_report_store8(&luabind::detail::registered_class<ScriptContext *>::id);
        luabind::detail::registered_class<ScriptContext *>::id = v4;
      }
    }
    __asan_after_dynamic_init();
  }
};
