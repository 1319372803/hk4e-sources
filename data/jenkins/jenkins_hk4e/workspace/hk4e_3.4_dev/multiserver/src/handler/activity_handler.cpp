// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/activity_handler.cpp

// Line 26: range 000000000DEAC246-000000000DEAE0A7
int32_t __cdecl ActivityHandler::addPacketFuncToMap(
        ActivityHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  ActivityHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  ActivityHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  ActivityHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  ActivityHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  ActivityHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  ActivityHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  ActivityHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  ActivityHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  ActivityHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  ActivityHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  ActivityHandler **v35; // r8
  const std::_Placeholder<1> *v36; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v37; // rax
  ActivityHandler **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v40; // rax
  ActivityHandler **v41; // r8
  const std::_Placeholder<1> *v42; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v43; // rax
  ActivityHandler **v44; // r8
  const std::_Placeholder<1> *v45; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v46; // rax
  ActivityHandler **v47; // r8
  const std::_Placeholder<1> *v48; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v49; // rax
  ActivityHandler **v50; // r8
  const std::_Placeholder<1> *v51; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v52; // rax
  ActivityHandler **v53; // r8
  const std::_Placeholder<1> *v54; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v55; // rax
  ActivityHandler **v56; // r8
  const std::_Placeholder<1> *v57; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v58; // rax
  ActivityHandler **v59; // r8
  const std::_Placeholder<1> *v60; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  ActivityHandler **v62; // r8
  const std::_Placeholder<1> *v63; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  ActivityHandler **v65; // r8
  const std::_Placeholder<1> *v66; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v67; // rax
  __m128i v68; // [rsp+0h] [rbp-1F0h] BYREF
  __m128i v69; // [rsp+10h] [rbp-1E0h] BYREF
  __m128i v70; // [rsp+20h] [rbp-1D0h] BYREF
  __m128i v71; // [rsp+30h] [rbp-1C0h] BYREF
  __m128i v72; // [rsp+40h] [rbp-1B0h] BYREF
  __m128i v73; // [rsp+50h] [rbp-1A0h] BYREF
  __m128i v74; // [rsp+60h] [rbp-190h] BYREF
  __m128i v75; // [rsp+70h] [rbp-180h] BYREF
  __m128i v76; // [rsp+80h] [rbp-170h] BYREF
  __m128i v77; // [rsp+90h] [rbp-160h] BYREF
  __m128i v78; // [rsp+A0h] [rbp-150h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-140h] BYREF
  __m128i v80; // [rsp+C0h] [rbp-130h] BYREF
  __m128i v81; // [rsp+D0h] [rbp-120h] BYREF
  __m128i v82; // [rsp+E0h] [rbp-110h] BYREF
  __m128i v83; // [rsp+F0h] [rbp-100h] BYREF
  __m128i v84; // [rsp+100h] [rbp-F0h] BYREF
  __m128i v85; // [rsp+110h] [rbp-E0h] BYREF
  __m128i v86; // [rsp+120h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+130h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+138h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+140h] [rbp-B0h]
  ActivityHandler *thisa; // [rsp+148h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+15Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v92; // [rsp+160h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+168h] [rbp-88h] BYREF
  int (*__f[2])(ActivityHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+170h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,const std::_Placeholder<1>&>::type v95; // [rsp+180h] [rbp-70h] BYREF
  common::milog::MiLogStream v96; // [rsp+1A0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10833;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v92, &__y) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/activity_handler.cpp",
      "addPacketFuncToMap",
      27);
    common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10833LL);
    common::milog::MiLogStream::~MiLogStream(&v96);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(ActivityHandler *, std::shared_ptr<common::minet::Packet>))ActivityHandler::onServerGetCustomDungeonReq;
    __f[1] = 0LL;
    std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
      &v95,
      __f,
      (ActivityHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10833;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
      v7,
      &v95);
    __x = 10880;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v92, &__y) )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/activity_handler.cpp",
        "addPacketFuncToMap",
        28);
      common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10880LL);
      common::milog::MiLogStream::~MiLogStream(&v96);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(ActivityHandler *, std::shared_ptr<common::minet::Packet>))ActivityHandler::onServerSaveCustomDungeonReq;
      __f[1] = 0LL;
      std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
        &v95,
        __f,
        (ActivityHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10880;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
        v10,
        &v95);
      __x = 10860;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v92, &__y) )
      {
        common::milog::MiLogStream::create(
          &v96,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/activity_handler.cpp",
          "addPacketFuncToMap",
          29);
        common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10860LL);
        common::milog::MiLogStream::~MiLogStream(&v96);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v68.m128i_i64[0] = (__int64)ActivityHandler::onServerRemoveCustomDungeonReq;
        v68.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v68);
        std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
          &v95,
          __f,
          (ActivityHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10860;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
          v13,
          &v95);
        __x = 10859;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v92, &__y) )
        {
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/activity_handler.cpp",
            "addPacketFuncToMap",
            30);
          common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10859LL);
          common::milog::MiLogStream::~MiLogStream(&v96);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v69.m128i_i64[0] = (__int64)ActivityHandler::onServerPublishCustomDungeonReq;
          v69.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v69);
          std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
            &v95,
            __f,
            (ActivityHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10859;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
            v16,
            &v95);
          __x = 10838;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v92, &__y) )
          {
            common::milog::MiLogStream::create(
              &v96,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/activity_handler.cpp",
              "addPacketFuncToMap",
              31);
            common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10838LL);
            common::milog::MiLogStream::~MiLogStream(&v96);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v70.m128i_i64[0] = (__int64)ActivityHandler::onServerGetRecommendCustomDungeonReq;
            v70.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v70);
            std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
              &v95,
              __f,
              (ActivityHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10838;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
              v19,
              &v95);
            __x = 10820;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v92, &__y) )
            {
              common::milog::MiLogStream::create(
                &v96,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/activity_handler.cpp",
                "addPacketFuncToMap",
                32);
              common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10820LL);
              common::milog::MiLogStream::~MiLogStream(&v96);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v71.m128i_i64[0] = (__int64)ActivityHandler::onServerGetCustomDungeonBriefReq;
              v71.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v71);
              std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                &v95,
                __f,
                (ActivityHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10820;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                v22,
                &v95);
              __x = 10892;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v92, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v96,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/activity_handler.cpp",
                  "addPacketFuncToMap",
                  33);
                common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10892LL);
                common::milog::MiLogStream::~MiLogStream(&v96);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v72.m128i_i64[0] = (__int64)ActivityHandler::onServerUpdateCustomDungeonSocialNotify;
                v72.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v72);
                std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                  &v95,
                  __f,
                  (ActivityHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10892;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v95);
                __x = 10808;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v92, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v96,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/activity_handler.cpp",
                    "addPacketFuncToMap",
                    34);
                  common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10808LL);
                  common::milog::MiLogStream::~MiLogStream(&v96);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v73.m128i_i64[0] = (__int64)ActivityHandler::onServerCustomDungeonCacheInvalidNotify;
                  v73.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v73);
                  std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                    &v95,
                    __f,
                    (ActivityHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10808;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v95);
                  __x = 10809;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v92, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v96,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/activity_handler.cpp",
                      "addPacketFuncToMap",
                      35);
                    common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10809LL);
                    common::milog::MiLogStream::~MiLogStream(&v96);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v74.m128i_i64[0] = (__int64)ActivityHandler::onServerCustomDungeonSocialGmNotify;
                    v74.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v74);
                    std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                      &v95,
                      __f,
                      (ActivityHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v29,
                      v30);
                    __x = 10809;
                    v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                      v31,
                      &v95);
                    __x = 10885;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v92, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v96,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/activity_handler.cpp",
                        "addPacketFuncToMap",
                        36);
                      common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10885LL);
                      common::milog::MiLogStream::~MiLogStream(&v96);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v75.m128i_i64[0] = (__int64)ActivityHandler::onServerGetUgcReq;
                      v75.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v75);
                      std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                        &v95,
                        __f,
                        (ActivityHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v32,
                        v33);
                      __x = 10885;
                      v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                        v34,
                        &v95);
                      __x = 10878;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v92, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v96,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/activity_handler.cpp",
                          "addPacketFuncToMap",
                          37);
                        common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10878LL);
                        common::milog::MiLogStream::~MiLogStream(&v96);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v76.m128i_i64[0] = (__int64)ActivityHandler::onServerGetUgcBriefReq;
                        v76.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v76);
                        std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                          &v95,
                          __f,
                          (ActivityHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v35,
                          v36);
                        __x = 10878;
                        v37 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                          v37,
                          &v95);
                        __x = 10854;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v92, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v96,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/activity_handler.cpp",
                            "addPacketFuncToMap",
                            38);
                          common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10854LL);
                          common::milog::MiLogStream::~MiLogStream(&v96);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v77.m128i_i64[0] = (__int64)ActivityHandler::onServerMultiGetUgcBriefReq;
                          v77.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v77);
                          std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                            &v95,
                            __f,
                            (ActivityHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v38,
                            v39);
                          __x = 10854;
                          v40 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                            v40,
                            &v95);
                          __x = 10869;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v92, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v96,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/activity_handler.cpp",
                              "addPacketFuncToMap",
                              39);
                            common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10869LL);
                            common::milog::MiLogStream::~MiLogStream(&v96);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v78.m128i_i64[0] = (__int64)ActivityHandler::onServerSaveUgcReq;
                            v78.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v78);
                            std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                              &v95,
                              __f,
                              (ActivityHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v41,
                              v42);
                            __x = 10869;
                            v43 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                              v43,
                              &v95);
                            __x = 10896;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v92, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v96,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/activity_handler.cpp",
                                "addPacketFuncToMap",
                                40);
                              common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10896LL);
                              common::milog::MiLogStream::~MiLogStream(&v96);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v79.m128i_i64[0] = (__int64)ActivityHandler::onServerPublishUgcReq;
                              v79.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v79);
                              std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                &v95,
                                __f,
                                (ActivityHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v44,
                                v45);
                              __x = 10896;
                              v46 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                v46,
                                &v95);
                              __x = 10815;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v92, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v96,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/activity_handler.cpp",
                                  "addPacketFuncToMap",
                                  41);
                                common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 10815LL);
                                common::milog::MiLogStream::~MiLogStream(&v96);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v80.m128i_i64[0] = (__int64)ActivityHandler::onServerCheckUgcUpdateReq;
                                v80.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v80);
                                std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                  &v95,
                                  __f,
                                  (ActivityHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v47,
                                  v48);
                                __x = 10815;
                                v49 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                  v49,
                                  &v95);
                                __x = 12065;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v92, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v96,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/activity_handler.cpp",
                                    "addPacketFuncToMap",
                                    44);
                                  common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12065LL);
                                  common::milog::MiLogStream::~MiLogStream(&v96);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v81.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeGetBlueprintBriefDataReq;
                                  v81.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v81);
                                  std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                    &v95,
                                    __f,
                                    (ActivityHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v50,
                                    v51);
                                  __x = 12065;
                                  v52 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                    v52,
                                    &v95);
                                  __x = 12093;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v92, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v96,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/activity_handler.cpp",
                                      "addPacketFuncToMap",
                                      45);
                                    common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12093LL);
                                    common::milog::MiLogStream::~MiLogStream(&v96);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v82.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeUpdateBlueprintBriefDataReq;
                                    v82.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v82);
                                    std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                      &v95,
                                      __f,
                                      (ActivityHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v53,
                                      v54);
                                    __x = 12093;
                                    v55 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                      v55,
                                      &v95);
                                    __x = 12026;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v92, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v96,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/activity_handler.cpp",
                                        "addPacketFuncToMap",
                                        46);
                                      common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12026LL);
                                      common::milog::MiLogStream::~MiLogStream(&v96);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v83.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeSaveBlueprintDataReq;
                                      v83.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v83);
                                      std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                        &v95,
                                        __f,
                                        (ActivityHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v56,
                                        v57);
                                      __x = 12026;
                                      v58 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                        v58,
                                        &v95);
                                      __x = 12095;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v92, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v96,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/activity_handler.cpp",
                                          "addPacketFuncToMap",
                                          47);
                                        common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12095LL);
                                        common::milog::MiLogStream::~MiLogStream(&v96);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        v84.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeDeleteBlueprintDataReq;
                                        v84.m128i_i64[1] = 0LL;
                                        *(__m128i *)__f = _mm_load_si128(&v84);
                                        std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                          &v95,
                                          __f,
                                          (ActivityHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v59,
                                          v60);
                                        __x = 12095;
                                        v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                          v61,
                                          &v95);
                                        __x = 12094;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v92, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v96,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/activity_handler.cpp",
                                            "addPacketFuncToMap",
                                            48);
                                          common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12094LL);
                                          common::milog::MiLogStream::~MiLogStream(&v96);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v85.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeGetBlueprintDetailDataReq;
                                          v85.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v85);
                                          std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                            &v95,
                                            __f,
                                            (ActivityHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v62,
                                            v63);
                                          __x = 12094;
                                          v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                            v64,
                                            &v95);
                                          __x = 12034;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v92._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v92, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v96,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/activity_handler.cpp",
                                              "addPacketFuncToMap",
                                              49);
                                            common::milog::MiLogStream::operator()(&v96, off_1BB4F780, 12034LL);
                                            common::milog::MiLogStream::~MiLogStream(&v96);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            v86.m128i_i64[0] = (__int64)ActivityHandler::onServerHomeBlueprintCacheInvalidNotify;
                                            v86.m128i_i64[1] = 0LL;
                                            *(__m128i *)__f = _mm_load_si128(&v86);
                                            std::bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>),ActivityHandler*,std::_Placeholder<1> const&>(
                                              &v95,
                                              __f,
                                              (ActivityHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v65,
                                              v66);
                                            __x = 12034;
                                            v67 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ActivityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ActivityHandler*,std::_Placeholder<1>)>>(
                                              v67,
                                              &v95);
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
};

// Line 55: range 000000000DEAE0A8-000000000DEAE41E
int32_t __cdecl ActivityHandler::onServerGetCustomDungeonReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::ServerCustomDungeon *v6; // r14
  google::protobuf::uint64 v7; // rax
  google::protobuf::uint32 v8; // edx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t UserId; // esi
  ActivityService *v11; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-E0h]
  proto::ServerGetCustomDungeonRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::ServerGetCustomDungeonRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:56 64 16 10 rsp_ptr:56";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerGetCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ServerGetCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerGetCustomDungeonReq",
      56);
    common::milog::MiLogStream::operator()(&v18, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerGetCustomDungeonRsp::mutable_custom_dungeon(rsp_0);
    v7 = proto::ServerGetCustomDungeonReq::dungeon_guid(req);
    proto::ServerCustomDungeon::set_dungeon_guid(v6, v7);
    proto::ServerGetCustomDungeonRsp::set_retcode(rsp_0, -1);
    v8 = proto::ServerGetCustomDungeonReq::enter_type(req);
    proto::ServerGetCustomDungeonRsp::set_enter_type(rsp_0, v8);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v9);
    ActivityHandler::getCustomDungeon(this, UserId, req, rsp_0);
    v11 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetCustomDungeonRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetCustomDungeonRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetCustomDungeonRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetCustomDungeonRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerGetCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerGetCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetCustomDungeonReq> *const)(v2 + 32));
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

// Line 67: range 000000000DEAE420-000000000DEAE62E
void __cdecl ActivityHandler::getCustomDungeon(
        ActivityHandler *const this,
        uint32_t uid,
        const proto::ServerGetCustomDungeonReq *req,
        proto::ServerGetCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool is_self_dungeon; // si
  google::protobuf::int32 ret; // [rsp+2Ch] [rbp-94h]
  google::protobuf::uint64 dungeon_guid; // [rsp+30h] [rbp-90h]
  proto::ServerCustomDungeon *server_custom_dungeon; // [rsp+38h] [rbp-88h]
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 is_exist:72 64 1 11 is_liked:84";
  *(_QWORD *)(v4 + 16) = ActivityHandler::getCustomDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116351;
  dungeon_guid = proto::ServerGetCustomDungeonReq::dungeon_guid(req);
  server_custom_dungeon = proto::ServerGetCustomDungeonRsp::mutable_custom_dungeon(rsp_0);
  *(_BYTE *)(v4 + 48) = 0;
  is_self_dungeon = proto::ServerGetCustomDungeonReq::is_self_dungeon(req);
  ret = ActivityHandler::getCustomDungeon(this, is_self_dungeon, dungeon_guid, (bool *)(v4 + 48), server_custom_dungeon);
  proto::ServerGetCustomDungeonRsp::set_is_exist(rsp_0, *(_BYTE *)(v4 + 48));
  proto::ServerGetCustomDungeonRsp::set_retcode(rsp_0, ret);
  if ( !ret && *(_BYTE *)(v4 + 48) == 1 && !proto::ServerGetCustomDungeonReq::is_self_dungeon(req) )
  {
    *(_BYTE *)(v4 + 64) = 0;
    if ( !RedisOpActivity::isCustomDungeonLiked(uid, dungeon_guid, (bool *)(v4 + 64)) )
      proto::ServerCustomDungeon::set_is_liked(server_custom_dungeon, *(_BYTE *)(v4 + 64));
  }
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
};

// Line 92: range 000000000DEAE630-000000000DEAEE45
__int64 __fastcall ActivityHandler::getCustomDungeon(
        ActivityHandler *const this,
        bool is_self_dungeon,
        uint64_t dungeon_guid,
        unsigned __int64 is_exist,
        proto::ServerCustomDungeon *custom_dungeon)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int v9; // r14d
  const proto::ServerCustomDungeon *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  ActivityService *v12; // rax
  common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  google::protobuf::uint64 v18; // rax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 publish_time; // eax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *v22; // r14
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *v23; // rax
  proto::CustomDungeonSettingBin *v24; // r14
  proto::CustomDungeonSettingBin *v25; // rax
  ActivityService *v26; // rax
  common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *CustomDungeonCache; // rax
  __int64 result; // rax
  bool is_enable_cache; // [rsp+3Fh] [rbp-121h]
  proto::CustomDungeonContent *content_ptr; // [rsp+40h] [rbp-120h]
  const proto::CustomDungeonAdventure *adventure_ptr; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-110h] BYREF
  char v36[240]; // [rsp+70h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 15 dungeon_guid:91 64 16 14 config_ptr:110 96 64 14 redis_data:126";
  *(_QWORD *)(v5 + 16) = ActivityHandler::getCustomDungeon;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -219021312;
  v7[536862725] = -202116109;
  *(_QWORD *)(v5 + 32) = dungeon_guid;
  if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0 && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
    __asan_report_store1(is_exist);
  *(_BYTE *)is_exist = 0;
  if ( CustomDungeonExcelConfigMgr::isAdventureDungeon(*(_QWORD *)(v5 + 32)) )
  {
    Config::getConfig();
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    adventure_ptr = JsonConfigMgr::findCustomDungeonAdventure(&v8->design_config_.json_config_mgr, *(_QWORD *)(v5 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 64));
    if ( adventure_ptr )
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 1;
      v10 = proto::CustomDungeonAdventure::custom_dungeon(adventure_ptr);
      proto::ServerCustomDungeon::operator=(custom_dungeon, v10);
      v9 = 0;
    }
    else
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 0;
      proto::ServerCustomDungeon::set_dungeon_guid(custom_dungeon, *(_QWORD *)(v5 + 32));
      v9 = 0;
    }
  }
  else
  {
    ServiceBox::findService<ActivityService>();
    ActivityService::getConfig((ActivityService *const)(v5 + 64));
    if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "getCustomDungeon",
        113);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v35, (const char (*)[18])off_1BB4F960);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v9 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v11->custom_dungeon_cache_max_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v11 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->custom_dungeon_cache_max_size >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&v11->custom_dungeon_cache_max_size);
      }
      is_enable_cache = v11->custom_dungeon_cache_max_size != 0;
      if ( v11->custom_dungeon_cache_max_size
        && !is_self_dungeon
        && (v12 = ServiceBox::findService<ActivityService>(),
            v13 = ActivityService::getCustomDungeonCache(v12),
            common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::get(
              v13,
              (const unsigned __int64 *)(v5 + 32),
              custom_dungeon)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/activity_handler.cpp",
          "getCustomDungeon",
          121);
        v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(&v35, (const char (*)[46])off_1BB4F9A0);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v15,
          (const unsigned __int64 *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v35);
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 1;
        v9 = 0;
      }
      else
      {
        proto::CustomDungeonRedisData::CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v5 + 96));
        if ( (unsigned int)RedisOpActivity::getCustomDungeon(
                             *(_QWORD *)(v5 + 32),
                             (proto::CustomDungeonRedisData *)(v5 + 96),
                             is_exist) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/activity_handler.cpp",
            "getCustomDungeon",
            129);
          v16 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v35,
                  (const char (*)[66])"[CustomDungeon] getCustomDungeon from redis failed, dungeon_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v16,
            (const unsigned __int64 *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v35);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
            && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(is_exist);
          }
          if ( *(_BYTE *)is_exist != 1 )
          {
            proto::ServerCustomDungeon::set_dungeon_guid(custom_dungeon, *(_QWORD *)(v5 + 32));
            v9 = 0;
          }
          else if ( !is_self_dungeon
                 && !proto::CustomDungeonRedisData::first_publish_time((const proto::CustomDungeonRedisData *const)(v5 + 96)) )
          {
            v9 = 11067;
          }
          else
          {
            v18 = proto::CustomDungeonRedisData::dungeon_guid((const proto::CustomDungeonRedisData *const)(v5 + 96));
            proto::ServerCustomDungeon::set_dungeon_guid(custom_dungeon, v18);
            v19 = proto::CustomDungeonRedisData::dungeon_id((const proto::CustomDungeonRedisData *const)(v5 + 96));
            proto::ServerCustomDungeon::set_dungeon_id(custom_dungeon, v19);
            publish_time = proto::CustomDungeonRedisData::first_publish_time((const proto::CustomDungeonRedisData *const)(v5 + 96));
            proto::ServerCustomDungeon::set_first_publish_time(custom_dungeon, publish_time);
            content_ptr = proto::CustomDungeonRedisData::mutable_edit_content((proto::CustomDungeonRedisData *const)(v5 + 96));
            if ( !is_self_dungeon
              || proto::CustomDungeonRedisData::is_no_change_after_publish((const proto::CustomDungeonRedisData *const)(v5 + 96)) )
            {
              content_ptr = proto::CustomDungeonRedisData::mutable_publish_content((proto::CustomDungeonRedisData *const)(v5 + 96));
            }
            if ( content_ptr )
            {
              v22 = proto::ServerCustomDungeon::mutable_room_list(custom_dungeon);
              v23 = proto::CustomDungeonContent::mutable_room_list(content_ptr);
              google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::Swap(v22, v23);
              v24 = proto::ServerCustomDungeon::mutable_setting(custom_dungeon);
              v25 = proto::CustomDungeonContent::mutable_setting(content_ptr);
              proto::CustomDungeonSettingBin::Swap(v24, v25);
              if ( is_enable_cache && !is_self_dungeon )
              {
                v26 = ServiceBox::findService<ActivityService>();
                CustomDungeonCache = ActivityService::getCustomDungeonCache(v26);
                common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::put(
                  CustomDungeonCache,
                  (const unsigned __int64 *)(v5 + 32),
                  custom_dungeon);
              }
              v9 = 0;
            }
            else
            {
              v9 = -1;
            }
          }
        }
        proto::CustomDungeonRedisData::~CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v5 + 96));
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 64));
  }
  result = v9;
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
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

// Line 172: range 000000000DEAEE46-000000000DEAF1C6
int32_t __cdecl ActivityHandler::onServerSaveCustomDungeonReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  const proto::ServerCustomDungeon *v6; // rax
  google::protobuf::uint64 v7; // rdx
  google::protobuf::uint32 v8; // edx
  const proto::ServerCustomDungeon *v9; // rax
  google::protobuf::uint32 v10; // edx
  ActivityService *v11; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerSaveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerSaveCustomDungeonRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerSaveCustomDungeonRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:173 64 16 11 rsp_ptr:173";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerSaveCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerSaveCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerSaveCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ServerSaveCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerSaveCustomDungeonReq",
      173);
    common::milog::MiLogStream::operator()(&v17, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerSaveCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerSaveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerSaveCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerSaveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerSaveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerSaveCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v7 = proto::ServerCustomDungeon::dungeon_guid(v6);
    proto::ServerSaveCustomDungeonRsp::set_dungeon_guid(rsp_0, v7);
    v8 = proto::ServerSaveCustomDungeonReq::room_id(req);
    proto::ServerSaveCustomDungeonRsp::set_room_id(rsp_0, v8);
    proto::ServerSaveCustomDungeonRsp::set_retcode(rsp_0, -1);
    v9 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v10 = proto::ServerCustomDungeon::version(v9);
    proto::ServerSaveCustomDungeonRsp::set_version(rsp_0, v10);
    ActivityHandler::saveCustomDungeon(this, req, rsp_0);
    v11 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerSaveCustomDungeonRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerSaveCustomDungeonRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerSaveCustomDungeonRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerSaveCustomDungeonRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerSaveCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerSaveCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ServerSaveCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerSaveCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ServerSaveCustomDungeonReq> *const)(v2 + 32));
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

// Line 184: range 000000000DEAF1C8-000000000DEAF5DA
void __cdecl ActivityHandler::saveCustomDungeon(
        ActivityHandler *const this,
        const proto::ServerSaveCustomDungeonReq *req,
        proto::ServerSaveCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const proto::ServerCustomDungeon *v6; // rax
  common::milog::MiLogStream *v8; // rax
  const proto::ServerCustomDungeon *v9; // rax
  google::protobuf::uint32 v10; // eax
  proto::CustomDungeonContent *v11; // rax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *v12; // r14
  const proto::ServerCustomDungeon *v13; // rax
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *v14; // rax
  proto::CustomDungeonContent *v15; // rax
  proto::CustomDungeonSettingBin *v16; // r14
  const proto::ServerCustomDungeon *v17; // rax
  const proto::CustomDungeonSettingBin *v18; // rax
  const proto::ServerCustomDungeon *v19; // rax
  google::protobuf::uint32 v20; // eax
  common::milog::MiLogStream *v21; // r14
  const proto::ServerCustomDungeon *v22; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-118h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-110h] BYREF
  char v26[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 12 is_exist:186 64 8 16 dungeon_guid:187 96 64 14 redis_data:185";
  *(_QWORD *)(v3 + 16) = ActivityHandler::saveCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862725] = -202116109;
  proto::CustomDungeonRedisData::CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v3 + 96));
  *(_BYTE *)(v3 + 48) = 0;
  v6 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
  *(_QWORD *)(v3 + 64) = proto::ServerCustomDungeon::dungeon_guid(v6);
  if ( proto::ServerSaveCustomDungeonReq::is_ever_published(req)
    && (unsigned int)RedisOpActivity::getCustomDungeon(
                       *(_QWORD *)(v3 + 64),
                       (proto::CustomDungeonRedisData *)(v3 + 96),
                       v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "saveCustomDungeon",
      190);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v25, (const char (*)[41])off_1BB4FBA0);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    proto::CustomDungeonRedisData::set_dungeon_guid(
      (proto::CustomDungeonRedisData *const)(v3 + 96),
      *(_QWORD *)(v3 + 64));
    v9 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v10 = proto::ServerCustomDungeon::dungeon_id(v9);
    proto::CustomDungeonRedisData::set_dungeon_id((proto::CustomDungeonRedisData *const)(v3 + 96), v10);
    v11 = proto::CustomDungeonRedisData::mutable_edit_content((proto::CustomDungeonRedisData *const)(v3 + 96));
    v12 = proto::CustomDungeonContent::mutable_room_list(v11);
    v13 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v14 = proto::ServerCustomDungeon::room_list(v13);
    google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::CopyFrom(v12, v14);
    v15 = proto::CustomDungeonRedisData::mutable_edit_content((proto::CustomDungeonRedisData *const)(v3 + 96));
    v16 = proto::CustomDungeonContent::mutable_setting(v15);
    v17 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v18 = proto::ServerCustomDungeon::setting(v17);
    proto::CustomDungeonSettingBin::CopyFrom(v16, v18);
    proto::CustomDungeonRedisData::set_is_no_change_after_publish((proto::CustomDungeonRedisData *const)(v3 + 96), 0);
    v19 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
    v20 = proto::ServerCustomDungeon::version(v19);
    proto::CustomDungeonRedisData::set_version((proto::CustomDungeonRedisData *const)(v3 + 96), v20);
    if ( RedisOpActivity::updateCustomDungeon((const proto::CustomDungeonRedisData *)(v3 + 96), 0x4F1A00u) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "saveCustomDungeon",
        201);
      v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v25,
              (const char (*)[44])"update custom dungeon failed, dungeon_guid:");
      v22 = proto::ServerSaveCustomDungeonReq::custom_dungeon(req);
      val = proto::ServerCustomDungeon::dungeon_guid(v22);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      proto::ServerSaveCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
  }
  proto::CustomDungeonRedisData::~CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v3 + 96));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 208: range 000000000DEAF5DC-000000000DEAF908
int32_t __cdecl ActivityHandler::onServerRemoveCustomDungeonReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint64 v6; // rdx
  ActivityService *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerRemoveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerRemoveCustomDungeonRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerRemoveCustomDungeonRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:209 64 16 11 rsp_ptr:209";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerRemoveCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerRemoveCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerRemoveCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ServerRemoveCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerRemoveCustomDungeonReq",
      209);
    common::milog::MiLogStream::operator()(&v13, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerRemoveCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerRemoveCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerRemoveCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerRemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerRemoveCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
    proto::ServerRemoveCustomDungeonRsp::set_dungeon_guid(rsp_0, v6);
    proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
    ActivityHandler::removeCustomDungeon(this, req, rsp_0);
    v7 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerRemoveCustomDungeonRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerRemoveCustomDungeonRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerRemoveCustomDungeonRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerRemoveCustomDungeonRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerRemoveCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerRemoveCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ServerRemoveCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerRemoveCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ServerRemoveCustomDungeonReq> *const)(v2 + 32));
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

// Line 220: range 000000000DEAF90A-000000000DEAFC5A
void __cdecl ActivityHandler::removeCustomDungeon(
        ActivityHandler *const this,
        const proto::ServerRemoveCustomDungeonReq *req,
        proto::ServerRemoveCustomDungeonRsp *rsp_0)
{
  google::protobuf::uint64 v3; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  google::protobuf::uint64 v6; // rbx
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rbx
  google::protobuf::uint64 v9; // rax
  common::milog::MiLogStream *v10; // rbx
  google::protobuf::uint64 v11; // rax
  common::milog::MiLogStream *v12; // rbx
  unsigned __int64 val; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  v3 = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
  v4 = proto::ServerRemoveCustomDungeonReq::group_id(req);
  if ( (unsigned int)RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(v4, v3) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "removeCustomDungeon",
      224);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v15, (const char (*)[55])off_1BB4FD20);
    val = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    v6 = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
    v7 = proto::ServerRemoveCustomDungeonReq::group_id(req);
    if ( (unsigned int)RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(v7, v6) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "removeCustomDungeon",
        230);
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v15, (const char (*)[55])off_1BB4FD80);
      val = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v9 = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
      if ( (unsigned int)RedisOpActivity::removeCustomDungeonBrief(v9) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "removeCustomDungeon",
          237);
        v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(&v15, (const char (*)[57])off_1BB4FDE0);
        val = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v15);
        proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        v11 = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
        if ( (unsigned int)RedisOpActivity::removeCustomDungeon(v11) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/activity_handler.cpp",
            "removeCustomDungeon",
            243);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v15, (const char (*)[41])off_1BB4FE40);
          val = proto::ServerRemoveCustomDungeonReq::dungeon_guid(req);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v15);
          proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, -1);
        }
        else
        {
          proto::ServerRemoveCustomDungeonRsp::set_retcode(rsp_0, 0);
        }
      }
    }
  }
};

// Line 251: range 000000000DEAFC5C-000000000DEAFF9E
int32_t __cdecl ActivityHandler::onServerPublishCustomDungeonReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint64 v6; // rdx
  const proto::CustomDungeonAbstractBin *v7; // rax
  google::protobuf::uint32 publish_time; // edx
  ActivityService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerPublishCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerPublishCustomDungeonRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerPublishCustomDungeonRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:252 64 16 11 rsp_ptr:252";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerPublishCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPublishCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerPublishCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ServerPublishCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerPublishCustomDungeonReq",
      252);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPublishCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPublishCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerPublishCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerPublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerPublishCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
    proto::ServerPublishCustomDungeonRsp::set_dungeon_guid(rsp_0, v6);
    v7 = proto::ServerPublishCustomDungeonReq::abstract(req);
    publish_time = proto::CustomDungeonAbstractBin::last_publish_time(v7);
    proto::ServerPublishCustomDungeonRsp::set_publish_time(rsp_0, publish_time);
    ActivityHandler::publishCustomDungeon(this, req, rsp_0);
    v9 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerPublishCustomDungeonRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerPublishCustomDungeonRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerPublishCustomDungeonRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerPublishCustomDungeonRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerPublishCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerPublishCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ServerPublishCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerPublishCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPublishCustomDungeonReq> *const)(v2 + 32));
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

// Line 263: range 000000000DEAFFA0-000000000DEB0C6B
void __cdecl ActivityHandler::publishCustomDungeon(
        ActivityHandler *const this,
        const proto::ServerPublishCustomDungeonReq *req,
        proto::ServerPublishCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint64 v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  const proto::CustomDungeonAbstractBin *v9; // rax
  google::protobuf::uint32 publish_time; // eax
  common::milog::MiLogStream *v11; // rax
  proto::CustomDungeonContent *v12; // rax
  proto::CustomDungeonContent *v13; // rax
  common::milog::MiLogStream *v14; // r14
  bool v15; // r14
  common::milog::MiLogStream *v16; // r14
  int v17; // r14d
  const proto::CustomDungeonBriefRedisData *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  google::protobuf::uint64 v22; // rax
  google::protobuf::uint32 v23; // eax
  proto::CustomDungeonSettingBin *v24; // r14
  const proto::CustomDungeonContent *v25; // rax
  const proto::CustomDungeonSettingBin *v26; // rax
  proto::CustomDungeonAbstractBin *v27; // r14
  const proto::CustomDungeonAbstractBin *v28; // rax
  const std::string *v29; // rax
  const google::protobuf::RepeatedField<unsigned int> *v30; // r14
  google::protobuf::RepeatedField<unsigned int> *v31; // rax
  bool is_psn_platform; // al
  common::milog::MiLogStream *v33; // r14
  google::protobuf::uint32 v34; // eax
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // r14
  uint32_t v37; // eax
  google::protobuf::uint64 v38; // rax
  google::protobuf::uint64 v39; // rax
  google::protobuf::uint64 v40; // rdx
  google::protobuf::uint64 v41; // r15
  uint32_t v42; // r14d
  uint32_t v43; // esi
  proto::CustomDungeonContent *v44; // [rsp+10h] [rbp-250h]
  std::less<long unsigned int> __comp; // [rsp+3Ch] [rbp-224h] BYREF
  std::allocator<long unsigned int> __a; // [rsp+3Dh] [rbp-223h] BYREF
  bool is_published_before; // [rsp+3Eh] [rbp-222h]
  bool is_need_recommend; // [rsp+3Fh] [rbp-221h]
  uint32_t before_recommend_type; // [rsp+40h] [rbp-220h]
  uint32_t group_id; // [rsp+44h] [rbp-21Ch]
  unsigned __int64 val; // [rsp+48h] [rbp-218h] BYREF
  std::shared_ptr<Config> v53; // [rsp+50h] [rbp-210h] BYREF
  common::milog::MiLogStream v54; // [rsp+60h] [rbp-200h] BYREF
  std::set<long unsigned int> dungeon_guid_set; // [rsp+80h] [rbp-1E0h] BYREF
  char v56[432]; // [rsp+B0h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 12 is_exist:266 48 8 16 dungeon_guid:267 80 24 18 redis_data_vec:313 144 64 14 redis_data"
                        ":265 240 104 20 brief_redis_data:309";
  *(_QWORD *)(v3 + 16) = ActivityHandler::publishCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  proto::CustomDungeonRedisData::CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v3 + 144));
  *(_BYTE *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 48) = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
  v6 = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
  if ( (unsigned int)RedisOpActivity::getCustomDungeon(v6, (proto::CustomDungeonRedisData *)(v3 + 144), v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "publishCustomDungeon",
      270);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v54,
           (const char (*)[31])"redis op failed, dungeon_guid:");
    val = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 11053);
  }
  else if ( *(_BYTE *)(v3 + 32) != 1 )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "publishCustomDungeon",
      276);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v54,
           (const char (*)[31])"redis op failed, dungeon_guid:");
    val = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 11053);
  }
  else
  {
    is_published_before = 1;
    if ( !proto::CustomDungeonRedisData::first_publish_time((const proto::CustomDungeonRedisData *const)(v3 + 144)) )
    {
      is_published_before = 0;
      v9 = proto::ServerPublishCustomDungeonReq::abstract(req);
      publish_time = proto::CustomDungeonAbstractBin::first_publish_time(v9);
      proto::CustomDungeonRedisData::set_first_publish_time(
        (proto::CustomDungeonRedisData *const)(v3 + 144),
        publish_time);
    }
    if ( proto::CustomDungeonRedisData::is_no_change_after_publish((const proto::CustomDungeonRedisData *const)(v3 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/activity_handler.cpp",
        "publishCustomDungeon",
        291);
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v54,
              (const char (*)[51])"no change after last publish return, dungeon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v54);
      proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
    else
    {
      proto::CustomDungeonRedisData::set_is_no_change_after_publish((proto::CustomDungeonRedisData *const)(v3 + 144), 1);
      v44 = proto::CustomDungeonRedisData::mutable_publish_content((proto::CustomDungeonRedisData *const)(v3 + 144));
      v12 = proto::CustomDungeonRedisData::mutable_edit_content((proto::CustomDungeonRedisData *const)(v3 + 144));
      proto::CustomDungeonContent::Swap(v44, v12);
      v13 = proto::CustomDungeonRedisData::mutable_edit_content((proto::CustomDungeonRedisData *const)(v3 + 144));
      proto::CustomDungeonContent::Clear(v13);
      if ( RedisOpActivity::updateCustomDungeon((const proto::CustomDungeonRedisData *)(v3 + 144), 0x4F1A00u) )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "publishCustomDungeon",
          303);
        v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v54,
                (const char (*)[43])"redis insert publish failed, dungeon_guid:");
        val = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v54);
        proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 11058);
      }
      else
      {
        proto::CustomDungeonBriefRedisData::CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 240));
        if ( !is_published_before )
          goto LABEL_21;
        std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 80));
        val = *(_QWORD *)(v3 + 48);
        std::allocator<unsigned long>::allocator(&__a);
        std::set<unsigned long>::set(
          &dungeon_guid_set,
          (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &val),
          &__comp,
          &__a);
        v15 = RedisOpActivity::getCustomDungeonBrief(
                &dungeon_guid_set,
                (std::vector<proto::CustomDungeonBriefRedisData> *)(v3 + 80)) != 0;
        std::set<unsigned long>::~set(&dungeon_guid_set);
        std::allocator<unsigned long>::~allocator(&__a);
        if ( v15 )
        {
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/activity_handler.cpp",
            "publishCustomDungeon",
            316);
          v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v54,
                  (const char (*)[43])"redis get brief data failed, dungeon_guid:");
          val = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &val);
          common::milog::MiLogStream::~MiLogStream(&v54);
          proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 11058);
          v17 = 0;
        }
        else
        {
          if ( !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 80)) )
          {
            v18 = std::vector<proto::CustomDungeonBriefRedisData>::operator[](
                    (std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 80),
                    0LL);
            proto::CustomDungeonBriefRedisData::operator=((proto::CustomDungeonBriefRedisData *const)(v3 + 240), v18);
          }
          v17 = 1;
        }
        std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 80));
        if ( v17 == 1 )
        {
LABEL_21:
          is_need_recommend = ActivityHandler::isCustomDungeonRecommend(
                                this,
                                (const proto::CustomDungeonRedisData *)(v3 + 144));
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/activity_handler.cpp",
            "publishCustomDungeon",
            328);
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v54,
                  (const char (*)[14])"dungeon_guid:");
          val = proto::CustomDungeonRedisData::dungeon_guid((const proto::CustomDungeonRedisData *const)(v3 + 144));
          v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &val);
          v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v20,
                  (const char (*)[20])" is_need_recommend:");
          common::milog::MiLogStream::operator<<(v21, is_need_recommend);
          common::milog::MiLogStream::~MiLogStream(&v54);
          v22 = proto::CustomDungeonRedisData::dungeon_guid((const proto::CustomDungeonRedisData *const)(v3 + 144));
          proto::CustomDungeonBriefRedisData::set_dungeon_guid(
            (proto::CustomDungeonBriefRedisData *const)(v3 + 240),
            v22);
          v23 = proto::CustomDungeonRedisData::dungeon_id((const proto::CustomDungeonRedisData *const)(v3 + 144));
          proto::CustomDungeonBriefRedisData::set_dungeon_id((proto::CustomDungeonBriefRedisData *const)(v3 + 240), v23);
          v24 = proto::CustomDungeonBriefRedisData::mutable_setting((proto::CustomDungeonBriefRedisData *const)(v3 + 240));
          v25 = proto::CustomDungeonRedisData::publish_content((const proto::CustomDungeonRedisData *const)(v3 + 144));
          v26 = proto::CustomDungeonContent::setting(v25);
          proto::CustomDungeonSettingBin::CopyFrom(v24, v26);
          v27 = proto::CustomDungeonBriefRedisData::mutable_abstract((proto::CustomDungeonBriefRedisData *const)(v3 + 240));
          v28 = proto::ServerPublishCustomDungeonReq::abstract(req);
          proto::CustomDungeonAbstractBin::CopyFrom(v27, v28);
          proto::CustomDungeonBriefRedisData::set_is_need_recommend(
            (proto::CustomDungeonBriefRedisData *const)(v3 + 240),
            is_need_recommend);
          v29 = proto::ServerPublishCustomDungeonReq::creator_nickname[abi:cxx11](req);
          proto::CustomDungeonBriefRedisData::set_creator_nickname(
            (proto::CustomDungeonBriefRedisData *const)(v3 + 240),
            v29);
          v30 = proto::ServerPublishCustomDungeonReq::tag_list(req);
          v31 = proto::CustomDungeonBriefRedisData::mutable_tag_list((proto::CustomDungeonBriefRedisData *const)(v3 + 240));
          google::protobuf::RepeatedField<unsigned int>::operator=(v31, v30);
          is_psn_platform = proto::ServerPublishCustomDungeonReq::is_psn_platform(req);
          proto::CustomDungeonBriefRedisData::set_is_psn_platform(
            (proto::CustomDungeonBriefRedisData *const)(v3 + 240),
            is_psn_platform);
          before_recommend_type = proto::CustomDungeonBriefRedisData::recommend_type((const proto::CustomDungeonBriefRedisData *const)(v3 + 240));
          ActivityHandler::updateRecommendScore(this, (proto::CustomDungeonBriefRedisData *)(v3 + 240));
          if ( RedisOpActivity::updateCustomDungeonBrief(
                 (const proto::CustomDungeonBriefRedisData *)(v3 + 240),
                 0x4F1A00u) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/activity_handler.cpp",
              "publishCustomDungeon",
              347);
            v33 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v54,
                    (const char (*)[46])"redis update brief data failed, dungeon_guid:");
            val = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, &val);
            common::milog::MiLogStream::~MiLogStream(&v54);
            proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 11058);
            v34 = proto::CustomDungeonBriefRedisData::recommend_type((const proto::CustomDungeonBriefRedisData *const)(v3 + 240));
            if ( before_recommend_type != v34 && !before_recommend_type )
            {
              Config::getConfig();
              p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config_.txt_config_mgr.custom_dungeon_config_mgr;
              v37 = proto::CustomDungeonBriefRedisData::dungeon_id((const proto::CustomDungeonBriefRedisData *const)(v3 + 240));
              group_id = CustomDungeonExcelConfigMgr::getGroupIdByDungeonId(p_custom_dungeon_config_mgr, v37);
              std::shared_ptr<Config>::~shared_ptr(&v53);
              v38 = proto::CustomDungeonBriefRedisData::dungeon_guid((const proto::CustomDungeonBriefRedisData *const)(v3 + 240));
              RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(group_id, v38);
              v39 = proto::CustomDungeonBriefRedisData::dungeon_guid((const proto::CustomDungeonBriefRedisData *const)(v3 + 240));
              RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(group_id, v39);
            }
          }
          else
          {
            v40 = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
            ActivityHandler::clearCache(this, v40);
            v41 = proto::ServerPublishCustomDungeonReq::dungeon_guid(req);
            v42 = proto::ServerPublishCustomDungeonReq::lang(req);
            v43 = proto::ServerPublishCustomDungeonReq::uid(req);
            ActivityHandler::asyncRequestCustomDungeonVerify(this, v43, v42, v41);
            proto::ServerPublishCustomDungeonRsp::set_retcode(rsp_0, 0);
          }
        }
        proto::CustomDungeonBriefRedisData::~CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 240));
      }
    }
  }
  proto::CustomDungeonRedisData::~CustomDungeonRedisData((proto::CustomDungeonRedisData *const)(v3 + 144));
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
};

// Line 370: range 000000000DEB0C6C-000000000DEB0EBC
void __fastcall ActivityHandler::clearCache(ActivityHandler *const this, uint64_t dungeon_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  ActivityService *v6; // rax
  common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *CustomDungeonCache; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  ActivityService *v9; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *CustomDungeonSearchCache; // rax
  char v11[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 16 dungeon_guid:369 64 16 14 config_ptr:371";
  *(_QWORD *)(v2 + 16) = ActivityHandler::clearCache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = dungeon_guid;
  ServiceBox::findService<ActivityService>();
  ActivityService::getConfig((ActivityService *const)(v2 + 64));
  if ( !std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->custom_dungeon_cache_max_size >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->custom_dungeon_cache_max_size >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&v5->custom_dungeon_cache_max_size);
    }
    if ( v5->custom_dungeon_cache_max_size )
    {
      v6 = ServiceBox::findService<ActivityService>();
      CustomDungeonCache = ActivityService::getCustomDungeonCache(v6);
      common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::remove(
        CustomDungeonCache,
        (const unsigned __int64 *)(v2 + 32));
    }
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_search_cache_max_size >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&v8->custom_dungeon_search_cache_max_size);
    }
    if ( v8->custom_dungeon_search_cache_max_size )
    {
      v9 = ServiceBox::findService<ActivityService>();
      CustomDungeonSearchCache = ActivityService::getCustomDungeonSearchCache(v9);
      common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::remove(
        CustomDungeonSearchCache,
        (const unsigned __int64 *)(v2 + 32));
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
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
};

// Line 387: range 000000000DEB0EBE-000000000DEB1729
bool __cdecl ActivityHandler::isCustomDungeonRecommend(
        ActivityHandler *const this,
        const proto::CustomDungeonRedisData *redis_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  bool v7; // r14
  std::array<unsigned int,6>::value_type *v8; // rax
  uint32_t *v9; // rdx
  std::array<unsigned int,6>::value_type *v10; // rax
  uint32_t *v11; // rdx
  std::array<unsigned int,6>::value_type *v12; // rax
  uint32_t *v13; // rdx
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const proto::CustomDungeonSettingBin *v17; // rax
  const proto::CustomDungeonSettingBin *v18; // rax
  const proto::CustomDungeonSettingBin *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  bool v25; // al
  bool result; // al
  uint32_t need_brick_num; // [rsp+1Ch] [rbp-1B4h]
  uint32_t need_open_room; // [rsp+20h] [rbp-1B0h]
  uint32_t need_brick_type; // [rsp+24h] [rbp-1ACh]
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::const_iterator __for_begin_1; // [rsp+38h] [rbp-198h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::const_iterator __for_end_1; // [rsp+40h] [rbp-190h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-188h]
  const std::array<unsigned int,6> *filt_params_arr; // [rsp+50h] [rbp-180h]
  const proto::CustomDungeonContent *publish_content; // [rsp+58h] [rbp-178h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+60h] [rbp-170h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+68h] [rbp-168h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *__for_range_0; // [rsp+70h] [rbp-160h]
  const proto::CustomDungeonRoomRedisData *proto_room; // [rsp+78h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData> *__for_range_1; // [rsp+80h] [rbp-150h]
  const proto::CustomDungeonBlockRedisData *proto_brick; // [rsp+88h] [rbp-148h]
  std::shared_ptr<Config> v43; // [rsp+90h] [rbp-140h] BYREF
  common::milog::MiLogStream v44; // [rsp+A0h] [rbp-130h] BYREF
  char v45[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 19 total_brick_num:405 48 4 11 room_id:408 64 48 18 brick_type_set:406 144 48 17 open_room_set:407";
  *(_QWORD *)(v2 + 16) = ActivityHandler::isCustomDungeonRecommend;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  Config::getConfig();
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  filt_params_arr = ConstValueExcelConfigMgr::getCustomDungeonRecommendParams(&v5->design_config_.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  if ( std::array<unsigned int,6ul>::size(filt_params_arr) > 2 )
  {
    v8 = (std::array<unsigned int,6>::value_type *)std::array<unsigned int,6ul>::operator[](filt_params_arr, 0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    need_brick_num = *v9;
    v10 = (std::array<unsigned int,6>::value_type *)std::array<unsigned int,6ul>::operator[](filt_params_arr, 1uLL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    need_open_room = *v11;
    v12 = (std::array<unsigned int,6>::value_type *)std::array<unsigned int,6ul>::operator[](filt_params_arr, 2uLL);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    need_brick_type = *v13;
    publish_content = proto::CustomDungeonRedisData::publish_content(redis_data);
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/activity_handler.cpp",
      "isCustomDungeonRecommend",
      398);
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v44, (const char (*)[14])"dungeon_guid:");
    __for_end_1.it_ = (void *const *)proto::CustomDungeonRedisData::dungeon_guid(redis_data);
    v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v14,
            (const unsigned __int64 *)&__for_end_1);
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" open room size:");
    v17 = proto::CustomDungeonContent::setting(publish_content);
    *(_DWORD *)(v2 + 48) = proto::CustomDungeonSettingBin::open_room_list_size(v17);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v18 = proto::CustomDungeonContent::setting(publish_content);
    if ( need_open_room <= proto::CustomDungeonSettingBin::open_room_list_size(v18) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 64));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
      v19 = proto::CustomDungeonContent::setting(publish_content);
      __for_range = proto::CustomDungeonSettingBin::open_room_list(v19);
      __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin);
        }
        *(_DWORD *)(v2 + 48) = *__for_begin;
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v2 + 144),
          (const std::set<unsigned int>::value_type *)(v2 + 48));
        ++__for_begin;
      }
      __for_range_0 = proto::CustomDungeonContent::room_list(publish_content);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::begin(__for_range_0).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::end(__for_range_0).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator!=(
                &__for_begin_0,
                &__for_end_0) )
      {
        proto_room = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator*(&__for_begin_0);
        *(_DWORD *)(v2 + 48) = proto::CustomDungeonRoomRedisData::room_id(proto_room);
        if ( std::set<unsigned int>::count(
               (const std::set<unsigned int> *const)(v2 + 144),
               (const std::set<unsigned int>::key_type *)(v2 + 48)) )
        {
          __for_range_1 = proto::CustomDungeonRoomRedisData::block_list(proto_room);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::begin(__for_range_1).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::end(__for_range_1).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator!=(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            proto_brick = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator*(&__for_begin_1);
            ++*(_DWORD *)(v2 + 32);
            *(_DWORD *)(v2 + 48) = proto::CustomDungeonBlockRedisData::block_id(proto_brick);
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v2 + 64),
              (std::set<unsigned int>::value_type *)(v2 + 48));
            google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator++(&__for_begin_1);
          }
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator++(&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/activity_handler.cpp",
        "isCustomDungeonRecommend",
        424);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v44, (const char (*)[14])"dungeon_guid:");
      __for_begin_1.it_ = (void *const *)proto::CustomDungeonRedisData::dungeon_guid(redis_data);
      v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v20,
              (const unsigned __int64 *)&__for_begin_1);
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" brick_num:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
      v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])" brick_type_num:");
      __for_end_1.it_ = (void *const *)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v24,
        (const unsigned __int64 *)&__for_end_1);
      common::milog::MiLogStream::~MiLogStream(&v44);
      v25 = need_brick_num > *(_DWORD *)(v2 + 32)
         || std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 64)) < need_brick_type;
      v7 = !v25;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 64));
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/activity_handler.cpp",
      "isCustomDungeonRecommend",
      391);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v44,
           (const char (*)[33])"custom_dungeon filt params size:");
    __for_end_1.it_ = (void *const *)std::array<unsigned int,6ul>::size(filt_params_arr);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)&__for_end_1);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v7 = 0;
  }
  result = v7;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 433: range 000000000DEB18F2-000000000DEB20E7
void __cdecl ActivityHandler::asyncRequestCustomDungeonVerify(
        ActivityHandler *const this,
        uint32_t uid,
        uint32_t lang,
        uint64_t dungeon_guid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 Now; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  bool *p_is_custom_dungeon_verify_ssl; // rax
  ActivityService *v16; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  int v20; // [rsp+0h] [rbp-310h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-2D0h] BYREF
  char v25[688]; // [rsp+60h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 21 response_callback:469 64 4 11 options:451 80 16 14 config_ptr:434 112 32 15 json_strin"
                        "g:454 176 40 14 status_ret:455 256 48 16 proto_verify:444 336 240 16 http_request:461";
  *(_QWORD *)(v4 + 16) = ActivityHandler::asyncRequestCustomDungeonVerify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862738] = -202116109;
  v6[536862739] = -202116109;
  ServiceBox::findService<ActivityService>();
  ActivityService::getConfig((ActivityService *const)(v4 + 80));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/activity_handler.cpp",
      "asyncRequestCustomDungeonVerify",
      437);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])off_1BB4F960);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    if ( *(char *)(((unsigned __int64)&v7->is_custom_dungeon_verify_enable >> 3) + 0x7FFF8000) < 0 )
      v7 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v7->is_custom_dungeon_verify_enable);
    if ( v7->is_custom_dungeon_verify_enable )
    {
      proto::CustomDungeonVerify::CustomDungeonVerify((proto::CustomDungeonVerify *const)(v4 + 256));
      proto::CustomDungeonVerify::set_uid((proto::CustomDungeonVerify *const)(v4 + 256), uid);
      Now = common::tools::TimeUtils::getNow();
      proto::CustomDungeonVerify::set_timestamp((proto::CustomDungeonVerify *const)(v4 + 256), Now);
      proto::CustomDungeonVerify::set_dungeon_guid((proto::CustomDungeonVerify *const)(v4 + 256), dungeon_guid);
      proto::CustomDungeonVerify::set_lang((proto::CustomDungeonVerify *const)(v4 + 256), lang);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      proto::CustomDungeonVerify::set_region((proto::CustomDungeonVerify *const)(v4 + 256), &v9->region_name);
      google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v4 + 64));
      *(_BYTE *)(v4 + 65) = 1;
      *(_BYTE *)(v4 + 67) = 1;
      std::string::basic_string(v4 + 112);
      google::protobuf::util::MessageToJsonString(
        (google::protobuf::util::Status *)(v4 + 176),
        (google::protobuf::Message *)(v4 + 256),
        v20,
        (void *)dungeon_guid,
        lang,
        (char)this,
        (int)v23.log_,
        v23.ostr_ptr_._M_ptr);
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v4 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "asyncRequestCustomDungeonVerify",
          458);
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v23,
                (const char (*)[45])"custom dungeon proto_verify to json failed: ");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v24,
          (google::protobuf::Message *)(v4 + 256));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v24);
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 336));
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        std::string::operator=(v4 + 336, &v11->custom_dungeon_verify_host);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        std::string::operator=(v4 + 368, &v12->custom_dungeon_verify_port);
        *(_DWORD *)(v4 + 560) = 1;
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        std::string::operator=(v4 + 400, &v13->custom_dungeon_verify_uri);
        *(_DWORD *)(v4 + 564) = 1;
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        p_is_custom_dungeon_verify_ssl = &v14->is_custom_dungeon_verify_ssl;
        if ( *(_BYTE *)(((unsigned __int64)p_is_custom_dungeon_verify_ssl >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_custom_dungeon_verify_ssl & 7) >= *(_BYTE *)(((unsigned __int64)p_is_custom_dungeon_verify_ssl >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_custom_dungeon_verify_ssl);
        }
        *(_BYTE *)(v4 + 568) = v14->is_custom_dungeon_verify_ssl;
        std::string::operator=(v4 + 528, v4 + 112);
        v16 = ServiceBox::findService<ActivityService>();
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<ActivityHandler::asyncRequestCustomDungeonVerify(unsigned int,unsigned int,unsigned long)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
          (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v24,
          (ActivityHandler::asyncRequestCustomDungeonVerify::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>)(v4 + 112));
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v17->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->custom_dungeon_verify_timeout);
        }
        v18 = ActivityService::asyncHttpRequest(
                v16,
                (const common::minet::http_client::HttpRequest *)(v4 + 336),
                v17->custom_dungeon_verify_timeout,
                0,
                (common::minet::http_client::ResponseCallBackFunc *)&v24) != 0;
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v24);
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/activity_handler.cpp",
            "asyncRequestCustomDungeonVerify",
            475);
          v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v24,
                  (const char (*)[27])"async http request failed:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 336));
      }
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v4 + 176));
      std::string::~string((void *)(v4 + 112));
      proto::CustomDungeonVerify::~CustomDungeonVerify((proto::CustomDungeonVerify *const)(v4 + 256));
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
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
  }
};

// Line 469: range 000000000DEB172A-000000000DEB18F0
void __fastcall ActivityHandler::asyncRequestCustomDungeonVerify(unsigned int,unsigned int,unsigned long)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const ActivityHandler::asyncRequestCustomDungeonVerify::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *http_req,
        common::minet::http_client::HttpResponse *http_rsp)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-80h] BYREF
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 11 retcode:469";
  *(_QWORD *)(v4 + 16) = ActivityHandler::asyncRequestCustomDungeonVerify(unsigned int,unsigned int,unsigned long)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = retcode;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/activity_handler.cpp",
    "operator()",
    471);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v16, (const char (*)[9])"retcode:");
  v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
         v7,
         (const common::minet::http_client::HttpRetcode *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" verify string:");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &http_req->body);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" response.body:");
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &http_rsp->body);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" rsp.status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &http_rsp->status);
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 480: range 000000000DEB20E8-000000000DEB30F2
void __cdecl ActivityHandler::updateRecommendScore(
        ActivityHandler *const this,
        proto::CustomDungeonBriefRedisData *brief_data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // r14
  uint32_t v6; // eax
  google::protobuf::uint64 v7; // rax
  google::protobuf::uint64 v8; // rax
  const proto::CustomDungeonAbstractBin *v9; // rax
  const std::vector<std::pair<unsigned int,unsigned int>> *CustomDungeonRecommendScoreParam1; // rax
  common::milog::MiLogStream *v11; // r14
  uint32_t v12; // eax
  std::vector<std::pair<unsigned int,unsigned int>>::reference v13; // rax
  int *v14; // rdx
  int v15; // r14d
  std::vector<std::pair<unsigned int,unsigned int>>::reference v16; // rdx
  unsigned int *p_second; // rax
  uint32_t *v18; // rax
  uint32_t *v19; // rdx
  const std::vector<std::pair<unsigned int,unsigned int>> *CustomDungeonRecommendScoreParam2; // rax
  common::milog::MiLogStream *v21; // r14
  unsigned int *v22; // r14
  unsigned int *v23; // rax
  int *v24; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v25; // rdx
  unsigned int *v26; // rax
  float *v27; // rax
  float *v28; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v29; // rax
  int *v30; // rdx
  unsigned int *v31; // r14
  unsigned int *v32; // rax
  int *v33; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v34; // rdx
  unsigned int *v35; // rax
  float *v36; // rax
  float *v37; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v38; // rax
  int *v39; // rdx
  unsigned int *v40; // r14
  unsigned int *v41; // rax
  int *v42; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v43; // rdx
  unsigned int *v44; // rax
  float *v45; // rax
  float *v46; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v47; // rax
  int *v48; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v49; // rax
  int *v50; // rdx
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  google::protobuf::uint64 v63; // rax
  google::protobuf::uint64 v64; // rax
  google::protobuf::uint64 v65; // rax
  google::protobuf::uint64 v66; // rax
  float v67; // [rsp+Ch] [rbp-144h]
  float v68; // [rsp+Ch] [rbp-144h]
  float v69; // [rsp+Ch] [rbp-144h]
  float v70; // [rsp+Ch] [rbp-144h]
  float v71; // [rsp+Ch] [rbp-144h]
  float v72; // [rsp+Ch] [rbp-144h]
  unsigned int __a; // [rsp+2Ch] [rbp-124h] BYREF
  unsigned int __b; // [rsp+30h] [rbp-120h] BYREF
  int32_t ret; // [rsp+34h] [rbp-11Ch]
  uint32_t group_id; // [rsp+38h] [rbp-118h]
  uint32_t first_publish_time; // [rsp+3Ch] [rbp-114h]
  uint32_t now; // [rsp+40h] [rbp-110h]
  uint32_t publish_days; // [rsp+44h] [rbp-10Ch]
  uint32_t new_dungeon_score; // [rsp+48h] [rbp-108h]
  float play_score; // [rsp+4Ch] [rbp-104h]
  float like_score; // [rsp+50h] [rbp-100h]
  float store_score; // [rsp+54h] [rbp-FCh]
  unsigned __int64 val; // [rsp+58h] [rbp-F8h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+60h] [rbp-F0h]
  const proto::CustomDungeonSocialRedisData *social; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v87; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v88; // [rsp+80h] [rbp-D0h] BYREF
  char v89[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 recommend_type:497 48 4 15 total_score:532 64 24 14 params_vec:503";
  *(_QWORD *)(v2 + 16) = ActivityHandler::updateRecommendScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  Config::getConfig();
  p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v87)->design_config_.txt_config_mgr.custom_dungeon_config_mgr;
  v6 = proto::CustomDungeonBriefRedisData::dungeon_id(brief_data);
  group_id = CustomDungeonExcelConfigMgr::getGroupIdByDungeonId(p_custom_dungeon_config_mgr, v6);
  std::shared_ptr<Config>::~shared_ptr(&v87);
  if ( !proto::CustomDungeonBriefRedisData::is_need_recommend(brief_data) )
  {
    if ( proto::CustomDungeonBriefRedisData::recommend_type(brief_data) )
    {
      v7 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
      RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(group_id, v7);
      v8 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
      RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(group_id, v8);
      proto::CustomDungeonBriefRedisData::set_recommend_type(brief_data, 0);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 32) = 1;
    v9 = proto::CustomDungeonBriefRedisData::abstract(brief_data);
    first_publish_time = proto::CustomDungeonAbstractBin::first_publish_time(v9);
    now = common::tools::TimeUtils::getNow();
    Config::getConfig();
    const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v87)->design_config_.txt_config_mgr.const_value_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v87);
    CustomDungeonRecommendScoreParam1 = ConstValueExcelConfigMgr::getCustomDungeonRecommendScoreParam1(const_value_config_mgr);
    std::vector<std::pair<unsigned int,unsigned int>>::vector(
      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
      CustomDungeonRecommendScoreParam1);
    if ( std::vector<std::pair<unsigned int,unsigned int>>::empty((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "updateRecommendScore",
        506);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v88,
              (const char (*)[39])"custom_dungeon recommend params1 size:");
      val = std::vector<std::pair<unsigned int,unsigned int>>::size((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v88);
    }
    else
    {
      if ( now <= first_publish_time )
        v12 = 0;
      else
        v12 = (now - first_publish_time) / 0x15180;
      publish_days = v12;
      *(float *)&__b = 0.0;
      v13 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
              (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
              0LL);
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
              (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
              0LL);
      p_second = &v16->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v2 + 48) = v15 - publish_days * v16->second;
      v18 = (uint32_t *)std::max<unsigned int>((const unsigned int *)(v2 + 48), &__b);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      new_dungeon_score = *v19;
      if ( !new_dungeon_score )
      {
        *(_DWORD *)(v2 + 32) = 2;
        CustomDungeonRecommendScoreParam2 = ConstValueExcelConfigMgr::getCustomDungeonRecommendScoreParam2(const_value_config_mgr);
        std::vector<std::pair<unsigned int,unsigned int>>::operator=(
          (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
          CustomDungeonRecommendScoreParam2);
      }
      if ( std::vector<std::pair<unsigned int,unsigned int>>::size((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64)) > 4 )
      {
        social = proto::CustomDungeonBriefRedisData::social(brief_data);
        v22 = &std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                 (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                 1uLL)->second;
        __a = proto::CustomDungeonSocialRedisData::play_num(social);
        v23 = (unsigned int *)std::min<unsigned int>(&__a, v22);
        v24 = (int *)v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v67 = (float)*v24;
        v25 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                1uLL);
        v26 = &v25->second;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        *(float *)&__b = (float)(int)v25->second;
        *(_DWORD *)(v2 + 48) = 1065353216;
        v27 = (float *)std::max<float>((const float *)(v2 + 48), (const float *)&__b);
        v28 = v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        v68 = v67 / *v28;
        v29 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                1uLL);
        v30 = (int *)v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        play_score = (float)*v30 * v68;
        v31 = &std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                 (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                 2uLL)->second;
        __a = proto::CustomDungeonSocialRedisData::like_num(social);
        v32 = (unsigned int *)std::min<unsigned int>(&__a, v31);
        v33 = (int *)v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v69 = (float)*v33;
        v34 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                2uLL);
        v35 = &v34->second;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        *(float *)&__b = (float)(int)v34->second;
        *(_DWORD *)(v2 + 48) = 1065353216;
        v36 = (float *)std::max<float>((const float *)(v2 + 48), (const float *)&__b);
        v37 = v36;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        v70 = v69 / *v37;
        v38 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                2uLL);
        v39 = (int *)v38;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v38);
        }
        like_score = (float)*v39 * v70;
        v40 = &std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                 (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                 3uLL)->second;
        __a = proto::CustomDungeonSocialRedisData::store_num(social);
        v41 = (unsigned int *)std::min<unsigned int>(&__a, v40);
        v42 = (int *)v41;
        if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v41);
        }
        v71 = (float)*v42;
        v43 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                3uLL);
        v44 = &v43->second;
        if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v44);
        }
        *(float *)&__b = (float)(int)v43->second;
        *(_DWORD *)(v2 + 48) = 1065353216;
        v45 = (float *)std::max<float>((const float *)(v2 + 48), (const float *)&__b);
        v46 = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        v72 = v71 / *v46;
        v47 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                3uLL);
        v48 = (int *)v47;
        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v47);
        }
        store_score = (float)*v48 * v72;
        *(float *)(v2 + 48) = (float)((float)((float)(int)new_dungeon_score + play_score) + like_score) + store_score;
        v49 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
                4uLL);
        v50 = (int *)v49;
        if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v49);
        }
        if ( (float)*v50 > *(float *)(v2 + 48) )
          *(_DWORD *)(v2 + 32) = 0;
        proto::CustomDungeonBriefRedisData::set_recommend_score(brief_data, *(float *)(v2 + 48));
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/activity_handler.cpp",
          "updateRecommendScore",
          540);
        v51 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v88, (const char (*)[14])"dungeon_guid:");
        val = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
        v52 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v51, &val);
        v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" score:");
        v54 = common::milog::MiLogStream::operator<<<float,(float *)0>(v53, (const float *)(v2 + 48));
        v55 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v54,
                (const char (*)[24])" before_recommend_type:");
        *(float *)&__b = COERCE_FLOAT(proto::CustomDungeonBriefRedisData::recommend_type(brief_data));
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &__b);
        v57 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v56, (const char (*)[10])off_1BB508A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v88);
        if ( proto::CustomDungeonBriefRedisData::recommend_type(brief_data) != *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/activity_handler.cpp",
            "updateRecommendScore",
            548);
          v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v88,
                  (const char (*)[14])"dungeon_guid:");
          val = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
          v59 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v58, &val);
          v60 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v59,
                  (const char (*)[24])" before_recommend_type:");
          *(float *)&__b = COERCE_FLOAT(proto::CustomDungeonBriefRedisData::recommend_type(brief_data));
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &__b);
          v62 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v61, (const char (*)[10])off_1BB508A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v88);
          if ( proto::CustomDungeonBriefRedisData::recommend_type(brief_data) == 1 )
          {
            v63 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
            RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(group_id, v63);
          }
          else if ( proto::CustomDungeonBriefRedisData::recommend_type(brief_data) == 2 )
          {
            v64 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
            RedisOpActivity::removeCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(group_id, v64);
          }
          ret = 0;
          if ( *(_DWORD *)(v2 + 32) == 1 )
          {
            v65 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
            ret = RedisOpActivity::insertCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(
                    group_id,
                    v65);
          }
          else if ( *(_DWORD *)(v2 + 32) == 2 )
          {
            v66 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_data);
            ret = RedisOpActivity::insertCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(
                    group_id,
                    v66);
          }
          if ( !ret )
            proto::CustomDungeonBriefRedisData::set_recommend_type(brief_data, *(_DWORD *)(v2 + 32));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "updateRecommendScore",
          521);
        v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v88,
                (const char (*)[39])"custom_dungeon recommend params1 size:");
        val = std::vector<std::pair<unsigned int,unsigned int>>::size((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v88);
      }
    }
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64));
  }
  if ( v89 == (char *)v2 )
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
};

// Line 579: range 000000000DEB30F4-000000000DEB3408
int32_t __cdecl ActivityHandler::onServerGetRecommendCustomDungeonReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  ActivityService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetRecommendCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-E0h]
  proto::ServerGetRecommendCustomDungeonRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:580 64 16 11 rsp_ptr:580";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerGetRecommendCustomDungeonReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetRecommendCustomDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetRecommendCustomDungeonReq const>(
         (const std::shared_ptr<const proto::ServerGetRecommendCustomDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerGetRecommendCustomDungeonReq",
      580);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetRecommendCustomDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetRecommendCustomDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetRecommendCustomDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetRecommendCustomDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetRecommendCustomDungeonRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    ActivityHandler::getRecommendCustomDungeon(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetRecommendCustomDungeonRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerGetRecommendCustomDungeonRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetRecommendCustomDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetRecommendCustomDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetRecommendCustomDungeonReq> *const)(v2 + 32));
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

// Line 590: range 000000000DEB340A-000000000DEB3CD7
void __fastcall ActivityHandler::getRecommendCustomDungeon(
        ActivityHandler *const this,
        uint32_t uid,
        const proto::ServerGetRecommendCustomDungeonReq *req,
        proto::ServerGetRecommendCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *v9; // rax
  ActivityService *v10; // rax
  ActivityThreadLocal *ActivityThreadLocal; // rax
  uint32_t last_custom_dungeon_recommend_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::array<unsigned int,6>::const_reference v15; // rax
  _DWORD *v16; // rdx
  std::array<unsigned int,6>::const_reference v17; // rax
  _DWORD *v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t *v20; // rax
  uint32_t *v21; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t *v23; // rax
  uint32_t *v24; // rdx
  uint32_t v25; // r14d
  ActivityService *v26; // rax
  ActivityThreadLocal *v27; // rax
  uint32_t v28; // r14d
  ActivityService *v29; // rax
  ActivityThreadLocal *v30; // rax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *v31; // rax
  bool is_cache_valid; // [rsp+2Bh] [rbp-1B5h]
  google::protobuf::uint32 group_id; // [rsp+2Ch] [rbp-1B4h]
  unsigned int now; // [rsp+30h] [rbp-1B0h]
  uint32_t total_recommend_num; // [rsp+34h] [rbp-1ACh]
  uint32_t old_recommend_pool_num; // [rsp+38h] [rbp-1A8h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+48h] [rbp-198h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-190h]
  const std::array<unsigned int,6> *recommend_params_arr; // [rsp+58h] [rbp-188h]
  std::shared_ptr<Config> v43; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v44; // [rsp+70h] [rbp-170h] BYREF
  char v45[336]; // [rsp+90h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 21 new_recommend_num:623 48 4 21 old_recommend_num:624 64 4 7 uid:589 80 8 16 dungeon_gui"
                        "d:600 112 16 14 config_ptr:591 144 24 13 brief_vec:608 208 48 20 dungeon_guid_set:599";
  *(_QWORD *)(v4 + 16) = ActivityHandler::getRecommendCustomDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  ServiceBox::findService<ActivityService>();
  ActivityService::getConfig((ActivityService *const)(v4 + 112));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getRecommendCustomDungeon",
      594);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v44, (const char (*)[24])off_1BB50A80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v44);
    proto::ServerGetRecommendCustomDungeonRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    std::set<unsigned long>::set((std::set<long unsigned int> *const)(v4 + 208));
    __for_range = proto::ServerGetRecommendCustomDungeonReq::dungeon_guid_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
        __asan_report_load8(__for_begin);
      *(_QWORD *)(v4 + 80) = *__for_begin;
      std::set<unsigned long>::insert(
        (std::set<long unsigned int> *const)(v4 + 208),
        (const std::set<long unsigned int>::value_type *)(v4 + 80));
      ++__for_begin;
    }
    group_id = proto::ServerGetRecommendCustomDungeonReq::group_id(req);
    now = common::tools::TimeUtils::getNow();
    std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v4 + 144));
    if ( !std::set<unsigned long>::empty((const std::set<long unsigned int> *const)(v4 + 208))
      && !ActivityHandler::getCustomDungeonBrief(
            this,
            (const std::set<long unsigned int> *)(v4 + 208),
            (std::vector<proto::CustomDungeonBriefRedisData> *)(v4 + 144))
      && !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v4 + 144)) )
    {
      v9 = proto::ServerGetRecommendCustomDungeonRsp::mutable_dungeon_brief_list(rsp_0);
      common::tools::MiscUtils::toRepeated<proto::CustomDungeonBriefRedisData,proto::CustomDungeonBriefRedisData>(
        (const std::vector<proto::CustomDungeonBriefRedisData> *)(v4 + 144),
        v9);
      proto::ServerGetRecommendCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
    else
    {
      v10 = ServiceBox::findService<ActivityService>();
      ActivityThreadLocal = ActivityService::getActivityThreadLocal(v10);
      if ( *(_BYTE *)(((unsigned __int64)&ActivityThreadLocal->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&ActivityThreadLocal->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) <= 3 )
      {
        ActivityThreadLocal = (ActivityThreadLocal *)__asan_report_load4(&ActivityThreadLocal->last_custom_dungeon_recommend_time);
      }
      last_custom_dungeon_recommend_time = ActivityThreadLocal->last_custom_dungeon_recommend_time;
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v13->custom_dungeon_recommend_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v13 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->custom_dungeon_recommend_timeout >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&v13->custom_dungeon_recommend_timeout);
      }
      is_cache_valid = now < last_custom_dungeon_recommend_time + v13->custom_dungeon_recommend_timeout;
      Config::getConfig();
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
      recommend_params_arr = ConstValueExcelConfigMgr::getCustomDungeonRecommendParams(&v14->design_config_.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v43);
      *(_DWORD *)(v4 + 32) = 3;
      *(_DWORD *)(v4 + 48) = 3;
      if ( std::array<unsigned int,6ul>::size(recommend_params_arr) > 4 )
      {
        v15 = std::array<unsigned int,6ul>::operator[](recommend_params_arr, 3uLL);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v4 + 32) = *v16;
        v17 = std::array<unsigned int,6ul>::operator[](recommend_params_arr, 4uLL);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        *(_DWORD *)(v4 + 48) = *v18;
      }
      total_recommend_num = *(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 48);
      if ( !is_cache_valid )
      {
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v20 = (uint32_t *)std::max<unsigned int>(
                            &v19->custom_dungeon_old_recommend_num,
                            (const unsigned int *)(v4 + 48));
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        old_recommend_pool_num = *v21;
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v23 = (uint32_t *)std::max<unsigned int>(
                            &v22->custom_dungeon_new_recommend_num,
                            (const unsigned int *)(v4 + 32));
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        if ( ActivityHandler::updateRecommendCache(this, group_id, old_recommend_pool_num, *v24, now) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/activity_handler.cpp",
            "getRecommendCustomDungeon",
            639);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v44,
            (const char (*)[45])"update recommend cache failed, use old cache");
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
      }
      v25 = *(_DWORD *)(v4 + 48);
      v26 = ServiceBox::findService<ActivityService>();
      v27 = ActivityService::getActivityThreadLocal(v26);
      ActivityHandler::randomSelectFromCache(
        this,
        *(_DWORD *)(v4 + 64),
        &v27->custom_dungeon_old_recommend_map,
        (std::vector<proto::CustomDungeonBriefRedisData> *)(v4 + 144),
        v25);
      v28 = total_recommend_num
          - std::vector<proto::CustomDungeonBriefRedisData>::size((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v4 + 144));
      v29 = ServiceBox::findService<ActivityService>();
      v30 = ActivityService::getActivityThreadLocal(v29);
      ActivityHandler::randomSelectFromCache(
        this,
        *(_DWORD *)(v4 + 64),
        &v30->custom_dungeon_new_recommend_map,
        (std::vector<proto::CustomDungeonBriefRedisData> *)(v4 + 144),
        v28);
      if ( !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v4 + 144)) )
      {
        v31 = proto::ServerGetRecommendCustomDungeonRsp::mutable_dungeon_brief_list(rsp_0);
        common::tools::MiscUtils::toRepeated<proto::CustomDungeonBriefRedisData,proto::CustomDungeonBriefRedisData>(
          (const std::vector<proto::CustomDungeonBriefRedisData> *)(v4 + 144),
          v31);
      }
      proto::ServerGetRecommendCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
    std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v4 + 144));
    std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v4 + 208));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 112));
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 656: range 000000000DEB3CD8-000000000DEB45E5
int32_t __cdecl ActivityHandler::updateRecommendCache(
        ActivityHandler *const this,
        uint32_t group_id,
        uint32_t old_recommend_num,
        uint32_t new_recommend_num,
        uint32_t now)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr M_node; // r14
  std::set<long unsigned int>::iterator v15; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr v16; // r14
  std::set<long unsigned int>::iterator v17; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr v18; // r14
  std::set<long unsigned int>::iterator v19; // rax
  ActivityService *v20; // rax
  proto::CustomDungeonBriefRedisData *v21; // rax
  proto::CustomDungeonBriefRedisData *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-24Ch]
  std::vector<proto::CustomDungeonBriefRedisData>::iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::vector<proto::CustomDungeonBriefRedisData>::iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  ActivityThreadLocal *tl; // [rsp+38h] [rbp-238h]
  std::vector<proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+40h] [rbp-230h]
  const proto::CustomDungeonBriefRedisData *dungeon_brief; // [rsp+48h] [rbp-228h]
  std::shared_ptr<Config> v33; // [rsp+50h] [rbp-220h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-210h] BYREF
  char v35[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(448LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 8 16 dungeon_guid:699 64 24 13 brief_vec:686 128 48 21 old_recommend_set:657 208 48 21 new_"
                        "recommend_set:665 288 48 27 adventure_recommend_set:674 368 48 23 final_recommend_set:681";
  *(_QWORD *)(v5 + 16) = ActivityHandler::updateRecommendCache;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862725] = -219021312;
  v7[536862726] = 62194;
  v7[536862728] = -218959118;
  v7[536862730] = -219021312;
  v7[536862731] = 62194;
  v7[536862733] = -202116109;
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 128));
  if ( RedisOpActivity::getCustomDungeonRecommend<proto::CustomDungeonOldRecommendRedisData>(
         group_id,
         old_recommend_num,
         (std::set<long unsigned int> *)(v5 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "updateRecommendCache",
      660);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v34, (const char (*)[30])off_1BB50C20);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = -1;
    goto LABEL_25;
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/activity_handler.cpp",
    "updateRecommendCache",
    663);
  v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v34, (const char (*)[20])off_1BB50C60);
  common::milog::MiLogStream::operator<<<unsigned long>(v9, (const std::set<long unsigned int> *)(v5 + 128));
  common::milog::MiLogStream::~MiLogStream(&v34);
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 208));
  if ( RedisOpActivity::getCustomDungeonRecommend<proto::CustomDungeonNewRecommendRedisData>(
         group_id,
         new_recommend_num,
         (std::set<long unsigned int> *)(v5 + 208)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "updateRecommendCache",
      668);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v34, (const char (*)[30])off_1BB50C20);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = -1;
    goto LABEL_24;
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/activity_handler.cpp",
    "updateRecommendCache",
    671);
  v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v34, (const char (*)[20])off_1BB50CA0);
  common::milog::MiLogStream::operator<<<unsigned long>(v10, (const std::set<long unsigned int> *)(v5 + 208));
  common::milog::MiLogStream::~MiLogStream(&v34);
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 288));
  if ( new_recommend_num > std::set<unsigned long>::size((const std::set<long unsigned int> *const)(v5 + 208)) )
  {
    Config::getConfig();
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config_.json_config_mgr;
    v12 = std::set<unsigned long>::size((const std::set<long unsigned int> *const)(v5 + 208));
    JsonConfigMgr::randomSelectCustomDungeonAdventure(
      p_json_config_mgr,
      (std::set<long unsigned int> *)(v5 + 288),
      new_recommend_num - v12);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/activity_handler.cpp",
      "updateRecommendCache",
      678);
    v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v34,
            (const char (*)[26])"adventure recommend guid:");
    common::milog::MiLogStream::operator<<<unsigned long>(v13, (const std::set<long unsigned int> *)(v5 + 288));
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 368));
  M_node = std::set<unsigned long>::end((const std::set<long unsigned int> *const)(v5 + 128))._M_node;
  v15._M_node = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v5 + 128))._M_node;
  std::set<unsigned long>::insert<std::_Rb_tree_const_iterator<unsigned long>>(
    (std::set<long unsigned int> *const)(v5 + 368),
    v15,
    (std::_Rb_tree_const_iterator<long unsigned int>)M_node);
  v16 = std::set<unsigned long>::end((const std::set<long unsigned int> *const)(v5 + 208))._M_node;
  v17._M_node = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v5 + 208))._M_node;
  std::set<unsigned long>::insert<std::_Rb_tree_const_iterator<unsigned long>>(
    (std::set<long unsigned int> *const)(v5 + 368),
    v17,
    (std::_Rb_tree_const_iterator<long unsigned int>)v16);
  v18 = std::set<unsigned long>::end((const std::set<long unsigned int> *const)(v5 + 288))._M_node;
  v19._M_node = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v5 + 288))._M_node;
  std::set<unsigned long>::insert<std::_Rb_tree_const_iterator<unsigned long>>(
    (std::set<long unsigned int> *const)(v5 + 368),
    v19,
    (std::_Rb_tree_const_iterator<long unsigned int>)v18);
  std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v5 + 64));
  ret = ActivityHandler::getCustomDungeonBrief(
          this,
          (const std::set<long unsigned int> *)(v5 + 368),
          (std::vector<proto::CustomDungeonBriefRedisData> *)(v5 + 64));
  if ( ret )
  {
    v8 = ret;
    goto LABEL_23;
  }
  v20 = ServiceBox::findService<ActivityService>();
  tl = ActivityService::getActivityThreadLocal(v20);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&tl->custom_dungeon_new_recommend_map);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&tl->custom_dungeon_old_recommend_map);
  __for_range = (std::vector<proto::CustomDungeonBriefRedisData> *)(v5 + 64);
  __for_begin._M_current = std::vector<proto::CustomDungeonBriefRedisData>::begin((std::vector<proto::CustomDungeonBriefRedisData> *const)(v5 + 64))._M_current;
  __for_end._M_current = std::vector<proto::CustomDungeonBriefRedisData>::end((std::vector<proto::CustomDungeonBriefRedisData> *const)(v5 + 64))._M_current;
  while ( __gnu_cxx::operator!=<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>(
            &__for_begin,
            &__for_end) )
  {
    dungeon_brief = __gnu_cxx::__normal_iterator<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>::operator*(&__for_begin);
    *(_QWORD *)(v5 + 32) = proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
    if ( std::set<unsigned long>::count(
           (const std::set<long unsigned int> *const)(v5 + 208),
           (const std::set<long unsigned int>::key_type *)(v5 + 32)) )
    {
      goto LABEL_18;
    }
    if ( std::set<unsigned long>::count(
           (const std::set<long unsigned int> *const)(v5 + 128),
           (const std::set<long unsigned int>::key_type *)(v5 + 32)) )
    {
      v21 = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::operator[](
              &tl->custom_dungeon_old_recommend_map,
              (const std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type *)(v5 + 32));
      proto::CustomDungeonBriefRedisData::operator=(v21, dungeon_brief);
      goto LABEL_19;
    }
    if ( std::set<unsigned long>::count(
           (const std::set<long unsigned int> *const)(v5 + 288),
           (const std::set<long unsigned int>::key_type *)(v5 + 32)) )
    {
LABEL_18:
      v22 = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::operator[](
              &tl->custom_dungeon_new_recommend_map,
              (const std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type *)(v5 + 32));
      proto::CustomDungeonBriefRedisData::operator=(v22, dungeon_brief);
    }
LABEL_19:
    __gnu_cxx::__normal_iterator<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&tl->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tl->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&tl->last_custom_dungeon_recommend_time);
  }
  tl->last_custom_dungeon_recommend_time = now;
  v8 = 0;
LABEL_23:
  std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v5 + 64));
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 368));
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 288));
LABEL_24:
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 208));
LABEL_25:
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 128));
  result = v8;
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 722: range 000000000DEB45E6-000000000DEB4A26
void __cdecl ActivityHandler::randomSelectFromCache(
        ActivityHandler *const this,
        uint32_t uid,
        const std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *cache_map,
        std::vector<proto::CustomDungeonBriefRedisData> *brief_vec,
        uint32_t num)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >::reference v9; // rax
  proto::CustomDungeonBriefRedisData *p_second; // rdx
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<long unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+38h] [rbp-128h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+40h] [rbp-120h]
  const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> *v19; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *dungeon_guid; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *_; // [rsp+58h] [rbp-108h]
  char v22[256]; // [rsp+60h] [rbp-100h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 8 guid:738 64 8 8 iter:740 96 24 20 dungeon_guid_vec:727 160 24 14 result_vec:736";
  *(_QWORD *)(v5 + 16) = ActivityHandler::randomSelectFromCache;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  if ( !std::map<unsigned long,proto::CustomDungeonBriefRedisData>::empty(cache_map) && num )
  {
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v5 + 96));
    __for_range = cache_map;
    *(std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::const_iterator *)(v5 + 64) = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::begin(cache_map);
    __for_end._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)(v5 + 64),
              &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> > *const)(v5 + 64));
      dungeon_guid = std::get<0ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v19);
      _ = (std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *)std::get<1ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v19);
      if ( *(_BYTE *)(((unsigned __int64)dungeon_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(dungeon_guid);
      if ( uid != (unsigned int)*dungeon_guid )
        std::vector<unsigned long>::push_back((std::vector<long unsigned int> *const)(v5 + 96), dungeon_guid);
      std::_Rb_tree_const_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator++((std::_Rb_tree_const_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> > *const)(v5 + 64));
    }
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v5 + 160));
    common::tools::RandomUtils::randomSelect<unsigned long>(
      (const std::vector<long unsigned int> *)(v5 + 96),
      (std::vector<long unsigned int> *)(v5 + 160),
      num);
    __for_range_0 = (std::vector<long unsigned int> *)(v5 + 160);
    __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v5 + 160))._M_current;
    __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end_0) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      *(_QWORD *)(v5 + 32) = *v9;
      *(std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::const_iterator *)(v5 + 64) = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::find(cache_map, (const std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type *)(v5 + 32));
      __for_end._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(cache_map)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)(v5 + 64),
              &__for_end) )
      {
        p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> > *const)(v5 + 64))->second;
        std::vector<proto::CustomDungeonBriefRedisData>::push_back(brief_vec, p_second);
      }
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 160));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 96));
  }
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 750: range 000000000DEB4A28-000000000DEB4D6A
int32_t __cdecl ActivityHandler::onServerGetCustomDungeonBriefReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  google::protobuf::RepeatedField<long unsigned int> *v6; // r14
  const google::protobuf::RepeatedField<long unsigned int> *v7; // rax
  proto::CustomDungeonBriefGetType type; // edx
  ActivityService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetCustomDungeonBriefReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerGetCustomDungeonBriefRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:751 64 16 11 rsp_ptr:751";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerGetCustomDungeonBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetCustomDungeonBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetCustomDungeonBriefReq const>(
         (const std::shared_ptr<const proto::ServerGetCustomDungeonBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerGetCustomDungeonBriefReq",
      751);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetCustomDungeonBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetCustomDungeonBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetCustomDungeonBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetCustomDungeonBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetCustomDungeonBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetCustomDungeonBriefRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerGetCustomDungeonBriefRsp::mutable_dungeon_guid_list(rsp_0);
    v7 = proto::ServerGetCustomDungeonBriefReq::dungeon_guid_list(req);
    google::protobuf::RepeatedField<unsigned long>::CopyFrom(v6, v7);
    type = proto::ServerGetCustomDungeonBriefReq::get_type(req);
    proto::ServerGetCustomDungeonBriefRsp::set_get_type(rsp_0, type);
    ActivityHandler::getCustomDungeonBrief(this, req, rsp_0);
    v9 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetCustomDungeonBriefRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerGetCustomDungeonBriefRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetCustomDungeonBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetCustomDungeonBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetCustomDungeonBriefReq> *const)(v2 + 32));
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

// Line 762: range 000000000DEB4D6C-000000000DEB5530
void __cdecl ActivityHandler::getCustomDungeonBrief(
        ActivityHandler *const this,
        const proto::ServerGetCustomDungeonBriefReq *req,
        proto::ServerGetCustomDungeonBriefRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  bool v7; // al
  ActivityService *v8; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *CustomDungeonSearchCache; // r14
  const unsigned __int64 *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const unsigned __int64 *v12; // rax
  proto::CustomDungeonBriefRedisData *v13; // rax
  int v14; // r14d
  common::milog::MiLogStream *v15; // rax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *v16; // rax
  ActivityService *v18; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *v19; // r14
  const proto::CustomDungeonBriefRedisData *v20; // r15
  const proto::CustomDungeonBriefRedisData *v21; // rax
  bool is_enable_cache; // [rsp+27h] [rbp-209h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-208h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+30h] [rbp-200h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-1F8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-1F0h] BYREF
  char v28[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 ret:796 64 8 16 dungeon_guid:771 96 16 14 config_ptr:763 128 24 13 brief_vec:795 192 48"
                        " 20 dungeon_guid_set:770 272 104 14 brief_data:785";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  ServiceBox::findService<ActivityService>();
  ActivityService::getConfig((ActivityService *const)(v3 + 96));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getCustomDungeonBrief",
      766);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])off_1BB50F00);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 192));
    __for_range = proto::ServerGetCustomDungeonBriefReq::dungeon_guid_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
        __asan_report_load8(__for_begin);
      *(_QWORD *)(v3 + 64) = *__for_begin;
      std::set<unsigned long>::insert(
        (std::set<long unsigned int> *const)(v3 + 192),
        (const std::set<long unsigned int>::value_type *)(v3 + 64));
      ++__for_begin;
    }
    if ( std::set<unsigned long>::empty((const std::set<long unsigned int> *const)(v3 + 192)) )
    {
      proto::ServerGetCustomDungeonBriefRsp::set_retcode(rsp_0, 0);
    }
    else
    {
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v6->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v6 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->custom_dungeon_search_cache_max_size >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&v6->custom_dungeon_search_cache_max_size);
      }
      v7 = v6->custom_dungeon_search_cache_max_size
        && proto::ServerGetCustomDungeonBriefReq::get_type(req) == CUSTOM_DUNGEON_BRIEF_GET_SEARCH
        && std::set<unsigned long>::size((const std::set<long unsigned int> *const)(v3 + 192)) == 1;
      is_enable_cache = v7;
      if ( !v7 )
        goto LABEL_25;
      proto::CustomDungeonBriefRedisData::CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 272));
      v8 = ServiceBox::findService<ActivityService>();
      CustomDungeonSearchCache = ActivityService::getCustomDungeonSearchCache(v8);
      *(std::set<long unsigned int>::iterator *)(v3 + 64) = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v3 + 192));
      v10 = std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 64));
      if ( common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::get(
             CustomDungeonSearchCache,
             v10,
             (proto::CustomDungeonBriefRedisData *)(v3 + 272)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/activity_handler.cpp",
          "getCustomDungeonBrief",
          788);
        v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v27, (const char (*)[32])off_1BB50F40);
        *(std::set<long unsigned int>::iterator *)(v3 + 64) = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v3 + 192));
        v12 = std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 64));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, v12);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v13 = proto::ServerGetCustomDungeonBriefRsp::add_dungeon_brief_list(rsp_0);
        proto::CustomDungeonBriefRedisData::operator=(v13, (const proto::CustomDungeonBriefRedisData *)(v3 + 272));
        proto::ServerGetCustomDungeonBriefRsp::set_retcode(rsp_0, 0);
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      proto::CustomDungeonBriefRedisData::~CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 272));
      if ( v14 == 1 )
      {
LABEL_25:
        std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = ActivityHandler::getCustomDungeonBrief(
                                 this,
                                 (const std::set<long unsigned int> *)(v3 + 192),
                                 (std::vector<proto::CustomDungeonBriefRedisData> *)(v3 + 128));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/activity_handler.cpp",
            "getCustomDungeonBrief",
            799);
          v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v27, (const char (*)[31])off_1BB50F80);
          common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v27);
          proto::ServerGetCustomDungeonBriefRsp::set_retcode(rsp_0, *(_DWORD *)(v3 + 48));
        }
        else
        {
          if ( !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128)) )
          {
            v16 = proto::ServerGetCustomDungeonBriefRsp::mutable_dungeon_brief_list(rsp_0);
            common::tools::MiscUtils::toRepeated<proto::CustomDungeonBriefRedisData,proto::CustomDungeonBriefRedisData>(
              (const std::vector<proto::CustomDungeonBriefRedisData> *)(v3 + 128),
              v16);
          }
          if ( is_enable_cache
            && !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128)) )
          {
            v18 = ServiceBox::findService<ActivityService>();
            v19 = ActivityService::getCustomDungeonSearchCache(v18);
            v20 = std::vector<proto::CustomDungeonBriefRedisData>::operator[](
                    (std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128),
                    0LL);
            v21 = std::vector<proto::CustomDungeonBriefRedisData>::operator[](
                    (std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128),
                    0LL);
            *(_QWORD *)(v3 + 64) = proto::CustomDungeonBriefRedisData::dungeon_guid(v21);
            common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::put(
              v19,
              (const unsigned __int64 *)(v3 + 64),
              v20);
          }
          proto::ServerGetCustomDungeonBriefRsp::set_retcode(rsp_0, 0);
        }
        std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v3 + 128));
      }
    }
    std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 192));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 818: range 000000000DEB5532-000000000DEB5B24
int32_t __cdecl ActivityHandler::getCustomDungeonBrief(
        ActivityHandler *const this,
        const std::set<long unsigned int> *dungeon_guid_set,
        std::vector<proto::CustomDungeonBriefRedisData> *brief_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  const unsigned __int64 *v6; // rax
  int32_t v7; // r14d
  JsonConfigMgr *p_json_config_mgr; // r14
  google::protobuf::uint64 v9; // rax
  const proto::CustomDungeonBriefRedisData *v10; // rax
  const proto::CustomDungeonSocialRedisData *v11; // r14
  proto::CustomDungeonSocialRedisData *v12; // rax
  unsigned __int64 *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const proto::CustomDungeonBriefRedisData *v15; // rdx
  int32_t result; // eax
  std::vector<proto::CustomDungeonBriefRedisData>::iterator __for_begin_0; // [rsp+28h] [rbp-1B8h] BYREF
  std::set<long unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  const std::set<long unsigned int> *__for_range; // [rsp+40h] [rbp-1A0h]
  std::vector<proto::CustomDungeonBriefRedisData> *__for_range_0; // [rsp+48h] [rbp-198h]
  std::set<long unsigned int> *__for_range_1; // [rsp+50h] [rbp-190h]
  unsigned __int64 dungeon_guid_0; // [rsp+58h] [rbp-188h]
  const proto::CustomDungeonAdventure *proto_adventure_ptr_0; // [rsp+60h] [rbp-180h]
  proto::CustomDungeonBriefRedisData *dungeon_brief; // [rsp+68h] [rbp-178h]
  const proto::CustomDungeonAdventure *proto_adventure_ptr; // [rsp+70h] [rbp-170h]
  const unsigned __int64 *dungeon_guid; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Config> v29; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-150h] BYREF
  char v31[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 22 adventure_guid_set:819 112 104 19 adventure_brief:846";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 32));
  __for_range = dungeon_guid_set;
  __for_begin._M_node = std::set<unsigned long>::begin(dungeon_guid_set)._M_node;
  __for_end._M_node = std::set<unsigned long>::end(dungeon_guid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
    dungeon_guid = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    if ( CustomDungeonExcelConfigMgr::isAdventureDungeon(*dungeon_guid) )
      std::set<unsigned long>::insert((std::set<long unsigned int> *const)(v3 + 32), dungeon_guid);
    std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
  }
  if ( RedisOpActivity::getCustomDungeonBrief(dungeon_guid_set, brief_vec) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getCustomDungeonBrief",
      830);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v30, (const char (*)[25])off_1BB51020);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    __for_range_0 = brief_vec;
    __for_begin_0._M_current = std::vector<proto::CustomDungeonBriefRedisData>::begin(brief_vec)._M_current;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr)std::vector<proto::CustomDungeonBriefRedisData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>(
              &__for_begin_0,
              (const __gnu_cxx::__normal_iterator<proto::CustomDungeonBriefRedisData*,std::vector<proto::CustomDungeonBriefRedisData> > *)&__for_begin) )
    {
      dungeon_brief = __gnu_cxx::__normal_iterator<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>::operator*(&__for_begin_0);
      __for_end._M_node = (std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr)proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
      if ( std::set<unsigned long>::erase(
             (std::set<long unsigned int> *const)(v3 + 32),
             (const std::set<long unsigned int>::key_type *)&__for_end) )
      {
        Config::getConfig();
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config_.json_config_mgr;
        v9 = proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
        proto_adventure_ptr = JsonConfigMgr::findCustomDungeonAdventure(p_json_config_mgr, v9);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( proto_adventure_ptr )
        {
          v10 = proto::CustomDungeonAdventure::dungeon_brief(proto_adventure_ptr);
          proto::CustomDungeonBriefRedisData::CustomDungeonBriefRedisData(
            (proto::CustomDungeonBriefRedisData *const)(v3 + 112),
            v10);
          v11 = proto::CustomDungeonBriefRedisData::social(dungeon_brief);
          v12 = proto::CustomDungeonBriefRedisData::mutable_social((proto::CustomDungeonBriefRedisData *const)(v3 + 112));
          proto::CustomDungeonSocialRedisData::operator=(v12, v11);
          proto::CustomDungeonBriefRedisData::Swap(dungeon_brief, (proto::CustomDungeonBriefRedisData *)(v3 + 112));
          proto::CustomDungeonBriefRedisData::~CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v3 + 112));
        }
      }
      __gnu_cxx::__normal_iterator<proto::CustomDungeonBriefRedisData *,std::vector<proto::CustomDungeonBriefRedisData>>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::set<long unsigned int> *)(v3 + 32);
    __for_begin._M_node = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v3 + 32))._M_node;
    __for_end._M_node = std::set<unsigned long>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = (unsigned __int64 *)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      dungeon_guid_0 = *v13;
      Config::getConfig();
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      proto_adventure_ptr_0 = JsonConfigMgr::findCustomDungeonAdventure(
                                &v14->design_config_.json_config_mgr,
                                dungeon_guid_0);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( proto_adventure_ptr_0 )
      {
        v15 = proto::CustomDungeonAdventure::dungeon_brief(proto_adventure_ptr_0);
        std::vector<proto::CustomDungeonBriefRedisData>::push_back(brief_vec, v15);
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    v7 = 0;
  }
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 32));
  result = v7;
  if ( v31 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 866: range 000000000DEB5B26-000000000DEB68F7
int32_t __cdecl ActivityHandler::onServerUpdateCustomDungeonSocialNotify(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  const proto::CustomDungeonBriefRedisData *v10; // rax
  const proto::CustomDungeonSocialRedisData *v11; // rax
  const proto::CustomDungeonSocialRedisData *v12; // rax
  const proto::CustomDungeonSocialRedisData *v13; // rax
  const proto::CustomDungeonSocialRedisData *v14; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  ActivityService *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  proto::CustomDungeonSocialRedisData *v24; // rax
  proto::CustomDungeonSocialRedisData *v25; // rax
  proto::CustomDungeonSocialRedisData *v26; // rax
  proto::CustomDungeonSocialRedisData *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  ActivityService *v39; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *CustomDungeonSearchCache; // r14
  char v41; // al
  ActivityService *v42; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *v43; // r14
  int32_t result; // eax
  std::less<long unsigned int> __comp; // [rsp+2Ah] [rbp-296h] BYREF
  bool is_need_ttl; // [rsp+2Bh] [rbp-295h]
  proto::CustomDungeonSocialUpdateType update_type; // [rsp+2Ch] [rbp-294h]
  std::initializer_list<long unsigned int> __l; // [rsp+30h] [rbp-290h] BYREF
  common::milog::MiLogStream v49; // [rsp+40h] [rbp-280h] BYREF
  std::set<long unsigned int> dungeon_guid_set; // [rsp+60h] [rbp-260h] BYREF
  char v51[560]; // [rsp+90h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 15 is_repeated:908 48 4 13 store_num:887 64 4 12 like_num:888 80 4 12 play_num:889 96 4 "
                        "11 win_num:890 112 4 7 uid:905 128 4 11 rem_num:923 144 8 16 dungeon_guid:868 176 16 14 notify_p"
                        "tr:867 208 16 14 config_ptr:957 240 24 13 brief_vec:869 304 24 15 like_notify:915 368 104 14 brief_data:881";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerUpdateCustomDungeonSocialNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerUpdateCustomDungeonSocialNotify>((common::minet::Packet *const)(v2 + 176));
  if ( std::operator==<proto::ServerUpdateCustomDungeonSocialNotify const>(
         (const std::shared_ptr<const proto::ServerUpdateCustomDungeonSocialNotify> *)(v2 + 176),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerUpdateCustomDungeonSocialNotify",
      867);
    common::milog::MiLogStream::operator()(&v49, off_1BB51200);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v5 = -1;
    goto LABEL_55;
  }
  __l._M_len = (std::initializer_list<long unsigned int>::size_type)std::__shared_ptr_access<proto::ServerUpdateCustomDungeonSocialNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerUpdateCustomDungeonSocialNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
  *(_QWORD *)(v2 + 144) = proto::ServerUpdateCustomDungeonSocialNotify::dungeon_guid((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len);
  std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 240));
  __l._M_array = *(std::initializer_list<long unsigned int>::iterator *)(v2 + 144);
  std::allocator<unsigned long>::allocator((std::allocator<long unsigned int> *const)(v2 + 32));
  std::set<unsigned long>::set(
    &dungeon_guid_set,
    (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    (const std::set<long unsigned int>::allocator_type *)(v2 + 32));
  v6 = RedisOpActivity::getCustomDungeonBrief(
         &dungeon_guid_set,
         (std::vector<proto::CustomDungeonBriefRedisData> *)(v2 + 240)) != 0;
  std::set<unsigned long>::~set(&dungeon_guid_set);
  std::allocator<unsigned long>::~allocator((std::allocator<long unsigned int> *const)(v2 + 32));
  if ( !v6 )
  {
    if ( !CustomDungeonExcelConfigMgr::isAdventureDungeon(*(_QWORD *)(v2 + 144))
      && std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 240)) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerUpdateCustomDungeonSocialNotify",
        878);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v49,
             (const char (*)[29])"no brief data, dungeon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v49);
      v5 = -1;
      goto LABEL_54;
    }
    proto::CustomDungeonBriefRedisData::CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    proto::CustomDungeonBriefRedisData::set_dungeon_guid(
      (proto::CustomDungeonBriefRedisData *const)(v2 + 368),
      *(_QWORD *)(v2 + 144));
    if ( !std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 240)) )
    {
      v10 = std::vector<proto::CustomDungeonBriefRedisData>::operator[](
              (std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 240),
              0LL);
      proto::CustomDungeonBriefRedisData::operator=((proto::CustomDungeonBriefRedisData *const)(v2 + 368), v10);
    }
    v11 = proto::CustomDungeonBriefRedisData::social((const proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    *(_DWORD *)(v2 + 48) = proto::CustomDungeonSocialRedisData::store_num(v11);
    v12 = proto::CustomDungeonBriefRedisData::social((const proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    *(_DWORD *)(v2 + 64) = proto::CustomDungeonSocialRedisData::like_num(v12);
    v13 = proto::CustomDungeonBriefRedisData::social((const proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    *(_DWORD *)(v2 + 80) = proto::CustomDungeonSocialRedisData::play_num(v13);
    v14 = proto::CustomDungeonBriefRedisData::social((const proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    *(_DWORD *)(v2 + 96) = proto::CustomDungeonSocialRedisData::win_num(v14);
    update_type = proto::ServerUpdateCustomDungeonSocialNotify::update_type((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len);
    switch ( update_type )
    {
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_STORE:
        if ( !proto::ServerUpdateCustomDungeonSocialNotify::is_cancel_store((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len) )
        {
          *(_DWORD *)(v2 + 48) = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v2 + 48), 1);
        }
        else if ( *(_DWORD *)(v2 + 48) )
        {
          --*(_DWORD *)(v2 + 48);
        }
        break;
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_LIKE:
        v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        *(_DWORD *)(v2 + 112) = common::minet::Packet::getUserId(v15);
        if ( !proto::ServerUpdateCustomDungeonSocialNotify::is_cancel_like((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len) )
        {
          *(_BYTE *)(v2 + 32) = 0;
          is_need_ttl = !proto::ServerUpdateCustomDungeonSocialNotify::is_ever_liked((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len);
          if ( !RedisOpActivity::addCustomDungeonLike(
                  *(_DWORD *)(v2 + 112),
                  *(_QWORD *)(v2 + 144),
                  (bool *)(v2 + 32),
                  is_need_ttl)
            && *(_BYTE *)(v2 + 32) != 1 )
          {
            *(_DWORD *)(v2 + 64) = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v2 + 64), 1);
            if ( is_need_ttl )
            {
              proto::ServerCustomDungeonFirstLikeNotify::ServerCustomDungeonFirstLikeNotify((proto::ServerCustomDungeonFirstLikeNotify *const)(v2 + 304));
              v17 = ServiceBox::findService<ActivityService>();
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)(v2 + 208),
                p_packet_ptr);
              ServiceBase::sendRsp<proto::ServerCustomDungeonFirstLikeNotify>(
                v17,
                (proto::ServerCustomDungeonFirstLikeNotify *)(v2 + 304),
                (common::minet::PacketPtr *)(v2 + 208));
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 208));
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/activity_handler.cpp",
                "onServerUpdateCustomDungeonSocialNotify",
                917);
              v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v49, (const char (*)[5])"uid:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v2 + 112));
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" first like");
              common::milog::MiLogStream::~MiLogStream(&v49);
              proto::ServerCustomDungeonFirstLikeNotify::~ServerCustomDungeonFirstLikeNotify((proto::ServerCustomDungeonFirstLikeNotify *const)(v2 + 304));
            }
          }
        }
        else
        {
          *(_DWORD *)(v2 + 128) = 0;
          if ( *(_DWORD *)(v2 + 64)
            && !RedisOpActivity::removeCustomDungeonLike(
                  *(_DWORD *)(v2 + 112),
                  *(_QWORD *)(v2 + 144),
                  (uint32_t *)(v2 + 128))
            && *(_DWORD *)(v2 + 128) )
          {
            --*(_DWORD *)(v2 + 64);
          }
        }
        break;
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_PLAY:
        *(_DWORD *)(v2 + 80) = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v2 + 80), 1);
        if ( proto::ServerUpdateCustomDungeonSocialNotify::is_win((const proto::ServerUpdateCustomDungeonSocialNotify *const)__l._M_len) )
          ++*(_DWORD *)(v2 + 96);
        break;
      default:
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerUpdateCustomDungeonSocialNotify",
          940);
        v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v49,
                (const char (*)[28])"unknown social update type:");
        *(_DWORD *)(v2 + 128) = update_type;
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 128));
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v22,
                (const char (*)[16])", dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v23,
          (const unsigned __int64 *)(v2 + 144));
        common::milog::MiLogStream::~MiLogStream(&v49);
        v5 = -1;
LABEL_53:
        proto::CustomDungeonBriefRedisData::~CustomDungeonBriefRedisData((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
        goto LABEL_54;
    }
    v24 = proto::CustomDungeonBriefRedisData::mutable_social((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    proto::CustomDungeonSocialRedisData::set_store_num(v24, *(_DWORD *)(v2 + 48));
    v25 = proto::CustomDungeonBriefRedisData::mutable_social((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    proto::CustomDungeonSocialRedisData::set_like_num(v25, *(_DWORD *)(v2 + 64));
    v26 = proto::CustomDungeonBriefRedisData::mutable_social((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    proto::CustomDungeonSocialRedisData::set_play_num(v26, *(_DWORD *)(v2 + 80));
    v27 = proto::CustomDungeonBriefRedisData::mutable_social((proto::CustomDungeonBriefRedisData *const)(v2 + 368));
    proto::CustomDungeonSocialRedisData::set_win_num(v27, *(_DWORD *)(v2 + 96));
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/activity_handler.cpp",
      "onServerUpdateCustomDungeonSocialNotify",
      947);
    v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v49, (const char (*)[14])"dungeon_guid:");
    v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v28,
            (const unsigned __int64 *)(v2 + 144));
    v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])" store_num:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 48));
    v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])" like_num:");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 64));
    v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" play_num:");
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 80));
    v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v35, (const char (*)[10])" win_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v49);
    ActivityHandler::updateRecommendScore(this, (proto::CustomDungeonBriefRedisData *)(v2 + 368));
    if ( RedisOpActivity::updateCustomDungeonBrief((const proto::CustomDungeonBriefRedisData *)(v2 + 368), 0x4F1A00u) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerUpdateCustomDungeonSocialNotify",
        953);
      v37 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v49,
              (const char (*)[40])"update brief data failed, dungeon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v37,
        (const unsigned __int64 *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v49);
      v5 = -1;
    }
    else
    {
      ServiceBox::findService<ActivityService>();
      ActivityService::getConfig((ActivityService *const)(v2 + 208));
      if ( !std::operator!=<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 208)) )
        goto LABEL_49;
      v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&v38->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v38 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->custom_dungeon_search_cache_max_size >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&v38->custom_dungeon_search_cache_max_size);
      }
      if ( v38->custom_dungeon_search_cache_max_size
        && (v39 = ServiceBox::findService<ActivityService>(),
            CustomDungeonSearchCache = ActivityService::getCustomDungeonSearchCache(v39),
            __l._M_array = (std::initializer_list<long unsigned int>::iterator)proto::CustomDungeonBriefRedisData::dungeon_guid((const proto::CustomDungeonBriefRedisData *const)(v2 + 368)),
            common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::isExist(
              CustomDungeonSearchCache,
              (const unsigned __int64 *)&__l)) )
      {
        v41 = 1;
      }
      else
      {
LABEL_49:
        v41 = 0;
      }
      if ( v41 )
      {
        v42 = ServiceBox::findService<ActivityService>();
        v43 = ActivityService::getCustomDungeonSearchCache(v42);
        __l._M_array = (std::initializer_list<long unsigned int>::iterator)proto::CustomDungeonBriefRedisData::dungeon_guid((const proto::CustomDungeonBriefRedisData *const)(v2 + 368));
        common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::put(
          v43,
          (const unsigned __int64 *)&__l,
          (const proto::CustomDungeonBriefRedisData *)(v2 + 368));
      }
      v5 = 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 208));
    }
    goto LABEL_53;
  }
  common::milog::MiLogStream::create(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/activity_handler.cpp",
    "onServerUpdateCustomDungeonSocialNotify",
    872);
  v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v49,
         (const char (*)[43])"redis get brief data failed, dungeon_guid:");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v2 + 144));
  common::milog::MiLogStream::~MiLogStream(&v49);
  v5 = -1;
LABEL_54:
  std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 240));
LABEL_55:
  std::shared_ptr<proto::ServerUpdateCustomDungeonSocialNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerUpdateCustomDungeonSocialNotify> *const)(v2 + 176));
  result = v5;
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 967: range 000000000DEB68F8-000000000DEB6AD4
int32_t __cdecl ActivityHandler::onServerCustomDungeonCacheInvalidNotify(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  google::protobuf::uint64 v6; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerCustomDungeonCacheInvalidNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:968";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerCustomDungeonCacheInvalidNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerCustomDungeonCacheInvalidNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerCustomDungeonCacheInvalidNotify const>(
         (const std::shared_ptr<const proto::ServerCustomDungeonCacheInvalidNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerCustomDungeonCacheInvalidNotify",
      968);
    common::milog::MiLogStream::operator()(&v9, off_1BB51580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerCustomDungeonCacheInvalidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerCustomDungeonCacheInvalidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::ServerCustomDungeonCacheInvalidNotify::dungeon_guid(notify);
    ActivityHandler::clearCache(this, v6);
    v5 = 0;
  }
  std::shared_ptr<proto::ServerCustomDungeonCacheInvalidNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerCustomDungeonCacheInvalidNotify> *const)(v2 + 32));
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

// Line 974: range 000000000DEB6AD6-000000000DEB71F6
int32_t __cdecl ActivityHandler::onServerCustomDungeonSocialGmNotify(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  proto::CustomDungeonSocialRedisData *v9; // rax
  proto::CustomDungeonSocialRedisData *v10; // rax
  proto::CustomDungeonSocialRedisData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  ActivityService *v14; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *CustomDungeonSearchCache; // r14
  char v16; // al
  ActivityService *v17; // rax
  common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *v18; // r14
  int32_t result; // eax
  std::less<long unsigned int> __comp; // [rsp+2Eh] [rbp-162h] BYREF
  std::allocator<long unsigned int> __a; // [rsp+2Fh] [rbp-161h] BYREF
  uint32_t update_type; // [rsp+30h] [rbp-160h]
  uint32_t num; // [rsp+34h] [rbp-15Ch]
  std::initializer_list<long unsigned int> __l; // [rsp+38h] [rbp-158h] BYREF
  proto::CustomDungeonBriefRedisData *brief; // [rsp+48h] [rbp-148h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-140h] BYREF
  std::set<long unsigned int> dungeon_guid_set; // [rsp+70h] [rbp-120h] BYREF
  char v28[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 16 dungeon_guid:976 64 16 14 notify_ptr:975 96 16 15 config_ptr:1012 128 24 13 brief_vec:979";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerCustomDungeonSocialGmNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerCustomDungeonSocialGmNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerCustomDungeonSocialGmNotify const>(
         (const std::shared_ptr<const proto::ServerCustomDungeonSocialGmNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerCustomDungeonSocialGmNotify",
      975);
    common::milog::MiLogStream::operator()(&v26, off_1BB516C0);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    __l._M_len = (std::initializer_list<long unsigned int>::size_type)std::__shared_ptr_access<proto::ServerCustomDungeonSocialGmNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerCustomDungeonSocialGmNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_QWORD *)(v2 + 32) = proto::ServerCustomDungeonSocialGmNotify::dungeon_guid((const proto::ServerCustomDungeonSocialGmNotify *const)__l._M_len);
    update_type = proto::ServerCustomDungeonSocialGmNotify::update_type((const proto::ServerCustomDungeonSocialGmNotify *const)__l._M_len);
    num = proto::ServerCustomDungeonSocialGmNotify::num((const proto::ServerCustomDungeonSocialGmNotify *const)__l._M_len);
    std::vector<proto::CustomDungeonBriefRedisData>::vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 128));
    __l._M_array = *(std::initializer_list<long unsigned int>::iterator *)(v2 + 32);
    std::allocator<unsigned long>::allocator(&__a);
    std::set<unsigned long>::set(
      &dungeon_guid_set,
      (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
      &__comp,
      &__a);
    v6 = RedisOpActivity::getCustomDungeonBrief(
           &dungeon_guid_set,
           (std::vector<proto::CustomDungeonBriefRedisData> *)(v2 + 128)) != 0;
    std::set<unsigned long>::~set(&dungeon_guid_set);
    std::allocator<unsigned long>::~allocator(&__a);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerCustomDungeonSocialGmNotify",
        982);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v26,
             (const char (*)[43])"redis get brief data failed, dungeon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
    else if ( std::vector<proto::CustomDungeonBriefRedisData>::empty((const std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerCustomDungeonSocialGmNotify",
        987);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v26,
             (const char (*)[32])"no brief data for dungeon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
    else
    {
      brief = std::vector<proto::CustomDungeonBriefRedisData>::operator[](
                (std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 128),
                0LL);
      switch ( update_type )
      {
        case 3u:
          v9 = proto::CustomDungeonBriefRedisData::mutable_social(brief);
          proto::CustomDungeonSocialRedisData::set_like_num(v9, num);
          break;
        case 1u:
          v10 = proto::CustomDungeonBriefRedisData::mutable_social(brief);
          proto::CustomDungeonSocialRedisData::set_store_num(v10, num);
          break;
        case 2u:
          v11 = proto::CustomDungeonBriefRedisData::mutable_social(brief);
          proto::CustomDungeonSocialRedisData::set_play_num(v11, num);
          break;
      }
      ActivityHandler::updateRecommendScore(this, brief);
      if ( RedisOpActivity::updateCustomDungeonBrief(brief, 0x4F1A00u) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerCustomDungeonSocialGmNotify",
          1008);
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v26,
                (const char (*)[40])"update brief data failed, dungeon_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v5 = -1;
      }
      else
      {
        ServiceBox::findService<ActivityService>();
        ActivityService::getConfig((ActivityService *const)(v2 + 96));
        if ( !std::operator!=<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 96)) )
          goto LABEL_24;
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v13->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v13 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->custom_dungeon_search_cache_max_size >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v13->custom_dungeon_search_cache_max_size);
        }
        if ( v13->custom_dungeon_search_cache_max_size
          && (v14 = ServiceBox::findService<ActivityService>(),
              CustomDungeonSearchCache = ActivityService::getCustomDungeonSearchCache(v14),
              __l._M_array = (std::initializer_list<long unsigned int>::iterator)proto::CustomDungeonBriefRedisData::dungeon_guid(brief),
              common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::isExist(
                CustomDungeonSearchCache,
                (const unsigned __int64 *)&__l)) )
        {
          v16 = 1;
        }
        else
        {
LABEL_24:
          v16 = 0;
        }
        if ( v16 )
        {
          v17 = ServiceBox::findService<ActivityService>();
          v18 = ActivityService::getCustomDungeonSearchCache(v17);
          __l._M_array = (std::initializer_list<long unsigned int>::iterator)proto::CustomDungeonBriefRedisData::dungeon_guid(brief);
          common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::put(
            v18,
            (const unsigned __int64 *)&__l,
            brief);
        }
        v5 = 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
      }
    }
    std::vector<proto::CustomDungeonBriefRedisData>::~vector((std::vector<proto::CustomDungeonBriefRedisData> *const)(v2 + 128));
  }
  std::shared_ptr<proto::ServerCustomDungeonSocialGmNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerCustomDungeonSocialGmNotify> *const)(v2 + 64));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 1022: range 000000000DEB71F8-000000000DEB758B
int32_t __cdecl ActivityHandler::onServerGetUgcReq(ActivityHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  google::protobuf::uint64 v7; // rdx
  bool is_edit; // dl
  proto::RecordUsage v9; // edx
  ActivityService *v10; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerGetUgcRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerGetUgcRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1023 64 16 12 rsp_ptr:1023";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerGetUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetUgcReq const>(
         (const std::shared_ptr<const proto::ServerGetUgcReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerGetUgcReq",
      1023);
    common::milog::MiLogStream::operator()(&v16, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetUgcRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerGetUgcReq::ugc_type(req);
    proto::ServerGetUgcRsp::set_ugc_type(rsp_0, v6);
    v7 = proto::ServerGetUgcReq::ugc_guid(req);
    proto::ServerGetUgcRsp::set_ugc_guid(rsp_0, v7);
    proto::ServerGetUgcRsp::set_retcode(rsp_0, -1);
    is_edit = proto::ServerGetUgcReq::is_edit(req);
    proto::ServerGetUgcRsp::set_is_edit(rsp_0, is_edit);
    v9 = proto::ServerGetUgcReq::ugc_record_usage(req);
    proto::ServerGetUgcRsp::set_ugc_record_usage(rsp_0, v9);
    ActivityHandler::getUgc(this, req, rsp_0);
    v10 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetUgcRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetUgcRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetUgcRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetUgcRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerGetUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerGetUgcRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetUgcReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetUgcReq> *const)(v2 + 32));
  result = v5;
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

// Line 1034: range 000000000DEB758C-000000000DEB791A
void __cdecl ActivityHandler::getUgc(
        ActivityHandler *const this,
        const proto::ServerGetUgcReq *req,
        proto::ServerGetUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool is_edit; // al
  common::milog::MiLogStream *v7; // rax
  proto::UgcBriefRedisData *v8; // rax
  common::milog::MiLogStream *v9; // rax
  proto::UgcRedisData *redis_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 13 is_exist:1037 48 1 13 is_exist:1053 64 8 13 ugc_guid:1035";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = proto::ServerGetUgcReq::ugc_guid(req);
  *(_BYTE *)(v3 + 32) = 0;
  redis_data = proto::ServerGetUgcRsp::mutable_ugc_redis_data(rsp_0);
  is_edit = proto::ServerGetUgcReq::is_edit(req);
  if ( (unsigned int)RedisOpActivity::getUgc(*(_QWORD *)(v3 + 64), is_edit, redis_data, v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getUgc",
      1041);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v12,
           (const char (*)[42])"[UGC] getUgc from redis failed, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
    goto LABEL_14;
  }
  proto::ServerGetUgcRsp::set_is_exist(rsp_0, *(_BYTE *)(v3 + 32));
  if ( *(_BYTE *)(v3 + 32) != 1 )
  {
    proto::UgcRedisData::set_ugc_guid(redis_data, *(_QWORD *)(v3 + 64));
    proto::ServerGetUgcRsp::set_retcode(rsp_0, 0);
    goto LABEL_14;
  }
  if ( proto::ServerGetUgcReq::is_require_brief(req) )
  {
    *(_BYTE *)(v3 + 48) = 0;
    v8 = proto::ServerGetUgcRsp::mutable_ugc_brief_redis_data(rsp_0);
    if ( (unsigned int)RedisOpActivity::getUgcBrief(*(_QWORD *)(v3 + 64), v8, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "getUgc",
        1056);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v12,
        (const char (*)[36])"[UGC] getUgcBrief from redis failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
      goto LABEL_14;
    }
    if ( *(_BYTE *)(v3 + 48) != 1 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/activity_handler.cpp",
        "getUgc",
        1061);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v12,
             (const char (*)[33])"[UGC] brief not exist, ugc_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  proto::ServerGetUgcRsp::set_retcode(rsp_0, 0);
LABEL_14:
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
};

// Line 1068: range 000000000DEB791C-000000000DEB7C46
int32_t __cdecl ActivityHandler::onServerGetUgcBriefReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  ActivityService *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetUgcBriefReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerGetUgcBriefRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerGetUgcBriefRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1069 64 16 12 rsp_ptr:1069";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerGetUgcBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetUgcBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerGetUgcBriefReq const>(
         (const std::shared_ptr<const proto::ServerGetUgcBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerGetUgcBriefReq",
      1069);
    common::milog::MiLogStream::operator()(&v13, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerGetUgcBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetUgcBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerGetUgcBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerGetUgcBriefRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerGetUgcBriefReq::ugc_type(req);
    proto::ServerGetUgcBriefRsp::set_ugc_type(rsp_0, v6);
    proto::ServerGetUgcBriefRsp::set_retcode(rsp_0, -1);
    ActivityHandler::getUgcBrief(this, req, rsp_0);
    v7 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerGetUgcBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerGetUgcBriefRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerGetUgcBriefRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerGetUgcBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerGetUgcBriefRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerGetUgcBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerGetUgcBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerGetUgcBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerGetUgcBriefReq> *const)(v2 + 32));
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

// Line 1078: range 000000000DEB7C48-000000000DEB7EAB
void __cdecl ActivityHandler::getUgcBrief(
        ActivityHandler *const this,
        const proto::ServerGetUgcBriefReq *req,
        proto::ServerGetUgcBriefRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  proto::UgcBriefRedisData *v6; // r14
  google::protobuf::uint64 v7; // rax
  common::milog::MiLogStream *v8; // r13
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 13 is_exist:1079";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getUgcBrief;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  *(_BYTE *)(v3 + 32) = 0;
  v6 = proto::ServerGetUgcBriefRsp::mutable_ugc_brief_redis_data(rsp_0);
  v7 = proto::ServerGetUgcBriefReq::ugc_guid(req);
  if ( (unsigned int)RedisOpActivity::getUgcBrief(v7, v6, v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getUgcBrief",
      1082);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v11,
      (const char (*)[36])"[UGC] getUgcBrief from redis failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    proto::ServerGetUgcBriefRsp::set_is_exist(rsp_0, *(_BYTE *)(v3 + 32));
    if ( *(_BYTE *)(v3 + 32) != 1 )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/activity_handler.cpp",
        "getUgcBrief",
        1088);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v11,
             (const char (*)[33])"[UGC] brief not exist, ugc_guid:");
      val = proto::ServerGetUgcBriefReq::ugc_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    proto::ServerGetUgcBriefRsp::set_retcode(rsp_0, 0);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1094: range 000000000DEB7EAC-000000000DEB81D6
int32_t __cdecl ActivityHandler::onServerMultiGetUgcBriefReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  ActivityService *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerMultiGetUgcBriefReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerMultiGetUgcBriefRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerMultiGetUgcBriefRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1095 64 16 12 rsp_ptr:1095";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerMultiGetUgcBriefReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerMultiGetUgcBriefReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerMultiGetUgcBriefReq const>(
         (const std::shared_ptr<const proto::ServerMultiGetUgcBriefReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerMultiGetUgcBriefReq",
      1095);
    common::milog::MiLogStream::operator()(&v13, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerMultiGetUgcBriefReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerMultiGetUgcBriefReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerMultiGetUgcBriefRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerMultiGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerMultiGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerMultiGetUgcBriefRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerMultiGetUgcBriefReq::ugc_type(req);
    proto::ServerMultiGetUgcBriefRsp::set_ugc_type(rsp_0, v6);
    proto::ServerMultiGetUgcBriefRsp::set_retcode(rsp_0, -1);
    ActivityHandler::getMultiUgcBrief(this, req, rsp_0);
    v7 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerMultiGetUgcBriefRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerMultiGetUgcBriefRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerMultiGetUgcBriefRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerMultiGetUgcBriefRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerMultiGetUgcBriefRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerMultiGetUgcBriefRsp>::~shared_ptr((std::shared_ptr<proto::ServerMultiGetUgcBriefRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerMultiGetUgcBriefReq const>::~shared_ptr((std::shared_ptr<const proto::ServerMultiGetUgcBriefReq> *const)(v2 + 32));
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

// Line 1104: range 000000000DEB81D8-000000000DEB8540
void __cdecl ActivityHandler::getMultiUgcBrief(
        ActivityHandler *const this,
        const proto::ServerMultiGetUgcBriefReq *req,
        proto::ServerMultiGetUgcBriefRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  google::protobuf::RepeatedPtrField<proto::UgcBriefRedisData> *v6; // rax
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-148h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-130h] BYREF
  char v12[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 13 ugc_guid:1106 80 24 14 brief_vec:1110 144 48 17 ugc_guid_set:1105";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getMultiUgcBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 144));
  __for_range = proto::ServerMultiGetUgcBriefReq::ugc_guid_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8(__for_begin);
    *(_QWORD *)(v3 + 48) = *__for_begin;
    std::set<unsigned long>::insert(
      (std::set<long unsigned int> *const)(v3 + 144),
      (const std::set<long unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  std::vector<proto::UgcBriefRedisData>::vector((std::vector<proto::UgcBriefRedisData> *const)(v3 + 80));
  if ( RedisOpActivity::getMultiUgcBrief(
         (const std::set<long unsigned int> *)(v3 + 144),
         (std::vector<proto::UgcBriefRedisData> *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "getMultiUgcBrief",
      1113);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v11,
      (const char (*)[41])"[UGC] getMultiUgcBrief from redis failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    if ( !std::vector<proto::UgcBriefRedisData>::empty((const std::vector<proto::UgcBriefRedisData> *const)(v3 + 80)) )
    {
      v6 = proto::ServerMultiGetUgcBriefRsp::mutable_ugc_brief_list(rsp_0);
      common::tools::MiscUtils::toRepeated<proto::UgcBriefRedisData,proto::UgcBriefRedisData>(
        (const std::vector<proto::UgcBriefRedisData> *)(v3 + 80),
        v6);
    }
    proto::ServerMultiGetUgcBriefRsp::set_retcode(rsp_0, 0);
  }
  std::vector<proto::UgcBriefRedisData>::~vector((std::vector<proto::UgcBriefRedisData> *const)(v3 + 80));
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 144));
  if ( v12 == (char *)v3 )
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
};

// Line 1124: range 000000000DEB8542-000000000DEB8898
int32_t __cdecl ActivityHandler::onServerSaveUgcReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  proto::UgcBriefRedisData *v7; // r14
  const proto::UgcBriefRedisData *v8; // rax
  ActivityService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerSaveUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerSaveUgcRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerSaveUgcRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1125 64 16 12 rsp_ptr:1125";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerSaveUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerSaveUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerSaveUgcReq const>(
         (const std::shared_ptr<const proto::ServerSaveUgcReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerSaveUgcReq",
      1125);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerSaveUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerSaveUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerSaveUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerSaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerSaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerSaveUgcRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerSaveUgcReq::ugc_type(req);
    proto::ServerSaveUgcRsp::set_ugc_type(rsp_0, v6);
    v7 = proto::ServerSaveUgcRsp::mutable_ugc_brief_redis_data(rsp_0);
    v8 = proto::ServerSaveUgcReq::ugc_brief_redis_data(req);
    proto::UgcBriefRedisData::CopyFrom(v7, v8);
    proto::ServerSaveUgcRsp::set_retcode(rsp_0, -1);
    ActivityHandler::saveUgc(this, req, rsp_0);
    v9 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerSaveUgcRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerSaveUgcRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerSaveUgcRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerSaveUgcRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerSaveUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerSaveUgcRsp>::~shared_ptr((std::shared_ptr<proto::ServerSaveUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerSaveUgcReq const>::~shared_ptr((std::shared_ptr<const proto::ServerSaveUgcReq> *const)(v2 + 32));
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

// Line 1135: range 000000000DEB889A-000000000DEB8AD4
void __cdecl ActivityHandler::saveUgc(
        ActivityHandler *const this,
        const proto::ServerSaveUgcReq *req,
        proto::ServerSaveUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  const proto::UgcRedisData *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 13 ugc_guid:1137 80 48 15 redis_data:1136";
  *(_QWORD *)(v3 + 16) = ActivityHandler::saveUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  v6 = proto::ServerSaveUgcReq::ugc_redis_data(req);
  proto::UgcRedisData::UgcRedisData((proto::UgcRedisData *const)(v3 + 80), v6);
  *(_QWORD *)(v3 + 48) = proto::UgcRedisData::ugc_guid((const proto::UgcRedisData *const)(v3 + 80));
  if ( RedisOpActivity::updateUgc((const proto::UgcRedisData *)(v3 + 80), 1, 0x4F1A00u) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "saveUgc",
      1140);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v9,
           (const char (*)[35])"update edit ugc failed, ugc_guid: ");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    proto::ServerSaveUgcRsp::set_retcode(rsp_0, 0);
  }
  proto::UgcRedisData::~UgcRedisData((proto::UgcRedisData *const)(v3 + 80));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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
};

// Line 1147: range 000000000DEB8AD6-000000000DEB8E56
int32_t __cdecl ActivityHandler::onServerPublishUgcReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  const proto::UgcBriefRedisData *v7; // rax
  google::protobuf::uint64 v8; // rdx
  const proto::UgcBriefRedisData *v9; // rax
  google::protobuf::uint32 v10; // edx
  ActivityService *v11; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerPublishUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerPublishUgcRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerPublishUgcRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1148 64 16 12 rsp_ptr:1148";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerPublishUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPublishUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerPublishUgcReq const>(
         (const std::shared_ptr<const proto::ServerPublishUgcReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerPublishUgcReq",
      1148);
    common::milog::MiLogStream::operator()(&v17, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerPublishUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPublishUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerPublishUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerPublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerPublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerPublishUgcRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerPublishUgcReq::ugc_type(req);
    proto::ServerPublishUgcRsp::set_ugc_type(rsp_0, v6);
    v7 = proto::ServerPublishUgcReq::ugc_brief_redis_data(req);
    v8 = proto::UgcBriefRedisData::ugc_guid(v7);
    proto::ServerPublishUgcRsp::set_ugc_guid(rsp_0, v8);
    v9 = proto::ServerPublishUgcReq::ugc_brief_redis_data(req);
    v10 = proto::UgcBriefRedisData::version(v9);
    proto::ServerPublishUgcRsp::set_version(rsp_0, v10);
    proto::ServerPublishUgcRsp::set_retcode(rsp_0, -1);
    ActivityHandler::publishUgc(this, req, rsp_0);
    v11 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerPublishUgcRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerPublishUgcRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerPublishUgcRsp>(v11, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerPublishUgcRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerPublishUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerPublishUgcRsp>::~shared_ptr((std::shared_ptr<proto::ServerPublishUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerPublishUgcReq const>::~shared_ptr((std::shared_ptr<const proto::ServerPublishUgcReq> *const)(v2 + 32));
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

// Line 1159: range 000000000DEB8E58-000000000DEB92B8
void __cdecl ActivityHandler::publishUgc(
        ActivityHandler *const this,
        const proto::ServerPublishUgcReq *req,
        proto::ServerPublishUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const proto::UgcBriefRedisData *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const proto::UgcBriefRedisData *v10; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned __int64 val; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 13 is_exist:1161 48 8 13 ugc_guid:1160 80 48 15 redis_data:1162";
  *(_QWORD *)(v3 + 16) = ActivityHandler::publishUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  v6 = proto::ServerPublishUgcReq::ugc_brief_redis_data(req);
  *(_QWORD *)(v3 + 48) = proto::UgcBriefRedisData::ugc_guid(v6);
  *(_BYTE *)(v3 + 32) = 0;
  proto::UgcRedisData::UgcRedisData((proto::UgcRedisData *const)(v3 + 80));
  if ( (unsigned int)RedisOpActivity::getUgc(*(_QWORD *)(v3 + 48), 1, (proto::UgcRedisData *)(v3 + 80), v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "publishUgc",
      1165);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v14,
           (const char (*)[42])"[UGC] getUgc from redis failed, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else if ( *(_BYTE *)(v3 + 32) != 1 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "publishUgc",
      1170);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"[UGC] ugc not exist, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else if ( RedisOpActivity::updateUgc((const proto::UgcRedisData *)(v3 + 80), 0, 0x4F1A00u) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "publishUgc",
      1175);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v14,
           (const char (*)[38])"update publish ugc failed, ugc_guid: ");
    val = proto::UgcRedisData::ugc_guid((const proto::UgcRedisData *const)(v3 + 80));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v10 = proto::ServerPublishUgcReq::ugc_brief_redis_data(req);
    if ( RedisOpActivity::updateUgcBrief(v10, 0x4F1A00u) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "publishUgc",
        1180);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v14,
              (const char (*)[36])"update ugc brief failed, ugc_guid: ");
      val = proto::UgcRedisData::ugc_guid((const proto::UgcRedisData *const)(v3 + 80));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      proto::ServerPublishUgcRsp::set_retcode(rsp_0, 0);
    }
  }
  proto::UgcRedisData::~UgcRedisData((proto::UgcRedisData *const)(v3 + 80));
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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
};

// Line 1187: range 000000000DEB92BA-000000000DEB95E4
int32_t __cdecl ActivityHandler::onServerCheckUgcUpdateReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::UgcType v6; // edx
  ActivityService *v7; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerCheckUgcUpdateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerCheckUgcUpdateRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerCheckUgcUpdateRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1188 64 16 12 rsp_ptr:1188";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerCheckUgcUpdateReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerCheckUgcUpdateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerCheckUgcUpdateReq const>(
         (const std::shared_ptr<const proto::ServerCheckUgcUpdateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerCheckUgcUpdateReq",
      1188);
    common::milog::MiLogStream::operator()(&v13, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerCheckUgcUpdateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerCheckUgcUpdateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerCheckUgcUpdateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerCheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerCheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerCheckUgcUpdateRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerCheckUgcUpdateReq::ugc_type(req);
    proto::ServerCheckUgcUpdateRsp::set_ugc_type(rsp_0, v6);
    proto::ServerCheckUgcUpdateRsp::set_retcode(rsp_0, -1);
    ActivityHandler::checkUgcUpdate(this, req, rsp_0);
    v7 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerCheckUgcUpdateRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerCheckUgcUpdateRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerCheckUgcUpdateRsp>(v7, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerCheckUgcUpdateRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerCheckUgcUpdateRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerCheckUgcUpdateRsp>::~shared_ptr((std::shared_ptr<proto::ServerCheckUgcUpdateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerCheckUgcUpdateReq const>::~shared_ptr((std::shared_ptr<const proto::ServerCheckUgcUpdateReq> *const)(v2 + 32));
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

// Line 1197: range 000000000DEB95E6-000000000DEB9E13
void __cdecl ActivityHandler::checkUgcUpdate(
        ActivityHandler *const this,
        const proto::ServerCheckUgcUpdateReq *req,
        proto::ServerCheckUgcUpdateRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::MapPair<long unsigned int,unsigned int> *v6; // rax
  unsigned int second; // r14d
  std::map<long unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  google::protobuf::uint32 v10; // r14d
  std::map<long unsigned int,unsigned int>::mapped_type *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::pointer v15; // rax
  std::tuple_element<1,std::pair<long unsigned int const,unsigned int> >::type v16; // ecx
  std::map<long unsigned int,unsigned int>::iterator __for_begin_1; // [rsp+20h] [rbp-260h] BYREF
  std::map<long unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-258h] BYREF
  const google::protobuf::Map<long unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-250h]
  std::vector<proto::UgcBriefRedisData> *__for_range_0; // [rsp+38h] [rbp-248h]
  std::map<long unsigned int,unsigned int> *__for_range_1; // [rsp+40h] [rbp-240h]
  std::tuple_element<0,std::pair<long unsigned int const,unsigned int> >::type *ugc_guid_0; // [rsp+48h] [rbp-238h]
  std::tuple_element<1,std::pair<long unsigned int const,unsigned int> >::type *version; // [rsp+50h] [rbp-230h]
  const proto::UgcBriefRedisData *brief_redis_data; // [rsp+58h] [rbp-228h]
  std::pair<long unsigned int const,unsigned int> ugc_guid; // [rsp+60h] [rbp-220h] BYREF
  google::protobuf::Map<long unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+70h] [rbp-210h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-1F0h] BYREF
  char v29[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 9 iter:1225 80 8 13 ugc_guid:1219 112 24 14 brief_vec:1210 176 48 17 ugc_guid_set:1198 25"
                        "6 48 25 ugc_guid_version_map:1199 336 48 31 redis_ugc_guid_version_map:1216";
  *(_QWORD *)(v3 + 16) = ActivityHandler::checkUgcUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 176));
  std::map<unsigned long,unsigned int>::map((std::map<long unsigned int,unsigned int> *const)(v3 + 256));
  __for_range = proto::ServerCheckUgcUpdateReq::ugc_guid_version_map(req);
  google::protobuf::Map<unsigned long,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned long,unsigned int>::end(
    (google::protobuf::Map<long unsigned int,unsigned int>::const_iterator *)(v3 + 112),
    __for_range);
  while ( google::protobuf::operator!=(
            &__for_begin,
            (const google::protobuf::Map<long unsigned int,unsigned int>::const_iterator *)(v3 + 112)) )
  {
    v6 = google::protobuf::Map<unsigned long,unsigned int>::const_iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned long,unsigned int>::MapPair(
      (google::protobuf::MapPair<long unsigned int,unsigned int> *const)&ugc_guid,
      v6);
    std::set<unsigned long>::insert((std::set<long unsigned int> *const)(v3 + 176), &ugc_guid.first);
    second = ugc_guid.second;
    v8 = std::map<unsigned long,unsigned int>::operator[](
           (std::map<long unsigned int,unsigned int> *const)(v3 + 256),
           &ugc_guid.first);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = second;
    google::protobuf::MapPair<unsigned long,unsigned int>::~MapPair((google::protobuf::MapPair<long unsigned int,unsigned int> *const)&ugc_guid);
    google::protobuf::Map<unsigned long,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  if ( std::set<unsigned long>::empty((const std::set<long unsigned int> *const)(v3 + 176)) )
  {
    proto::ServerCheckUgcUpdateRsp::set_retcode(rsp_0, 0);
  }
  else
  {
    std::vector<proto::UgcBriefRedisData>::vector((std::vector<proto::UgcBriefRedisData> *const)(v3 + 112));
    if ( RedisOpActivity::getMultiUgcBrief(
           (const std::set<long unsigned int> *)(v3 + 176),
           (std::vector<proto::UgcBriefRedisData> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "checkUgcUpdate",
        1213);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v28,
        (const char (*)[41])"[UGC] getMultiUgcBrief from redis failed");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      std::map<unsigned long,unsigned int>::map((std::map<long unsigned int,unsigned int> *const)(v3 + 336));
      __for_range_0 = (std::vector<proto::UgcBriefRedisData> *)(v3 + 112);
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto::UgcBriefRedisData>::begin((std::vector<proto::UgcBriefRedisData> *const)(v3 + 112))._M_current;
      *(std::vector<proto::UgcBriefRedisData>::iterator *)(v3 + 48) = std::vector<proto::UgcBriefRedisData>::end((std::vector<proto::UgcBriefRedisData> *const)(v3 + 112));
      while ( __gnu_cxx::operator!=<proto::UgcBriefRedisData *,std::vector<proto::UgcBriefRedisData>>(
                (const __gnu_cxx::__normal_iterator<proto::UgcBriefRedisData*,std::vector<proto::UgcBriefRedisData> > *)&__for_end,
                (const __gnu_cxx::__normal_iterator<proto::UgcBriefRedisData*,std::vector<proto::UgcBriefRedisData> > *)(v3 + 48)) )
      {
        brief_redis_data = __gnu_cxx::__normal_iterator<proto::UgcBriefRedisData *,std::vector<proto::UgcBriefRedisData>>::operator*((const __gnu_cxx::__normal_iterator<proto::UgcBriefRedisData*,std::vector<proto::UgcBriefRedisData> > *const)&__for_end);
        *(_QWORD *)(v3 + 80) = proto::UgcBriefRedisData::ugc_guid(brief_redis_data);
        v10 = proto::UgcBriefRedisData::version(brief_redis_data);
        v11 = std::map<unsigned long,unsigned int>::operator[](
                (std::map<long unsigned int,unsigned int> *const)(v3 + 336),
                (const std::map<long unsigned int,unsigned int>::key_type *)(v3 + 80));
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11);
        }
        *v12 = v10;
        __gnu_cxx::__normal_iterator<proto::UgcBriefRedisData *,std::vector<proto::UgcBriefRedisData>>::operator++((__gnu_cxx::__normal_iterator<proto::UgcBriefRedisData*,std::vector<proto::UgcBriefRedisData> > *const)&__for_end);
      }
      __for_range_1 = (std::map<long unsigned int,unsigned int> *)(v3 + 256);
      __for_begin_1._M_node = std::map<unsigned long,unsigned int>::begin((std::map<long unsigned int,unsigned int> *const)(v3 + 256))._M_node;
      __for_end._M_node = std::map<unsigned long,unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_1, &__for_end) )
      {
        v13 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned long const,unsigned int>>::operator*(&__for_begin_1);
        if ( *(_WORD *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load16(v13, &__for_end, v13);
        v14 = *(_QWORD *)(v13 + 8);
        ugc_guid.first = *(_QWORD *)v13;
        *(_QWORD *)&ugc_guid.second = v14;
        ugc_guid_0 = std::get<0ul,unsigned long const,unsigned int>(&ugc_guid);
        version = std::get<1ul,unsigned long const,unsigned int>(&ugc_guid);
        *(std::map<long unsigned int,unsigned int>::iterator *)(v3 + 48) = std::map<unsigned long,unsigned int>::find(
                                                                             (std::map<long unsigned int,unsigned int> *const)(v3 + 336),
                                                                             ugc_guid_0);
        *(std::map<long unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned long,unsigned int>::end((std::map<long unsigned int,unsigned int> *const)(v3 + 336));
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self *)(v3 + 48),
               (const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self *)(v3 + 80)) )
        {
          v15 = std::_Rb_tree_iterator<std::pair<unsigned long const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> > *const)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) <= 3 )
          {
            v15 = (std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::pointer)__asan_report_load4(&v15->second);
          }
          v16 = v15->second;
          if ( *(_BYTE *)(((unsigned __int64)version >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)version & 7) + 3) >= *(_BYTE *)(((unsigned __int64)version >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(version);
          }
          if ( v16 > *version )
          {
            if ( *(_BYTE *)(((unsigned __int64)ugc_guid_0 >> 3) + 0x7FFF8000) )
              __asan_report_load8(ugc_guid_0);
            proto::ServerCheckUgcUpdateRsp::add_update_ugc_guid_list(rsp_0, *ugc_guid_0);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)ugc_guid_0 >> 3) + 0x7FFF8000) )
            __asan_report_load8(ugc_guid_0);
          proto::ServerCheckUgcUpdateRsp::add_not_find_ugc_guid_list(rsp_0, *ugc_guid_0);
        }
        std::_Rb_tree_iterator<std::pair<unsigned long const,unsigned int>>::operator++(&__for_begin_1);
      }
      proto::ServerCheckUgcUpdateRsp::set_retcode(rsp_0, 0);
      std::map<unsigned long,unsigned int>::~map((std::map<long unsigned int,unsigned int> *const)(v3 + 336));
    }
    std::vector<proto::UgcBriefRedisData>::~vector((std::vector<proto::UgcBriefRedisData> *const)(v3 + 112));
  }
  std::map<unsigned long,unsigned int>::~map((std::map<long unsigned int,unsigned int> *const)(v3 + 256));
  std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 176));
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 1243: range 000000000DEB9E14-000000000DEBA156
int32_t __cdecl ActivityHandler::onServerHomeGetBlueprintBriefDataReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::HomeGetBlueprintBriefReason v6; // edx
  google::protobuf::RepeatedPtrField<std::string > *v7; // r14
  const google::protobuf::RepeatedPtrField<std::string > *v8; // rax
  ActivityService *v9; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerHomeGetBlueprintBriefDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ServerHomeGetBlueprintBriefDataRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1244 64 16 12 rsp_ptr:1244";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeGetBlueprintBriefDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeGetBlueprintBriefDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerHomeGetBlueprintBriefDataReq const>(
         (const std::shared_ptr<const proto::ServerHomeGetBlueprintBriefDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeGetBlueprintBriefDataReq",
      1244);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeGetBlueprintBriefDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeGetBlueprintBriefDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerHomeGetBlueprintBriefDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerHomeGetBlueprintBriefDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerHomeGetBlueprintBriefDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerHomeGetBlueprintBriefDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerHomeGetBlueprintBriefDataReq::reason(req);
    proto::ServerHomeGetBlueprintBriefDataRsp::set_reason(rsp_0, v6);
    v7 = proto::ServerHomeGetBlueprintBriefDataRsp::mutable_share_code_list[abi:cxx11](rsp_0);
    v8 = proto::ServerHomeGetBlueprintBriefDataReq::share_code_list[abi:cxx11](req);
    google::protobuf::RepeatedPtrField<std::string>::CopyFrom(v7, v8);
    ActivityHandler::getHomeBlueprintBriefData(this, req, rsp_0);
    v9 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerHomeGetBlueprintBriefDataRsp>(v9, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerHomeGetBlueprintBriefDataRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerHomeGetBlueprintBriefDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeGetBlueprintBriefDataReq> *const)(v2 + 32));
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

// Line 1255: range 000000000DEBA158-000000000DEBA4ED
void __cdecl ActivityHandler::getHomeBlueprintBriefData(
        ActivityHandler *const this,
        const proto::ServerHomeGetBlueprintBriefDataReq *req,
        proto::ServerHomeGetBlueprintBriefDataRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::RepeatedPtrField<proto::HomeBlueprintBriefRedisData> *v6; // rax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+30h] [rbp-120h]
  const std::string *share_code; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-110h] BYREF
  char v13[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 19 brief_data_vec:1271 112 48 19 share_code_set:1256";
  *(_QWORD *)(v3 + 16) = ActivityHandler::getHomeBlueprintBriefData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v3 + 112));
  __for_range = proto::ServerHomeGetBlueprintBriefDataReq::share_code_list[abi:cxx11](req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
  {
    share_code = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
    if ( (unsigned __int8)std::string::empty(share_code) != 1 )
      std::set<std::string>::insert((std::set<std::string> *const)(v3 + 112), share_code);
    google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
  }
  if ( std::set<std::string>::empty((const std::set<std::string> *const)(v3 + 112)) )
  {
    proto::ServerHomeGetBlueprintBriefDataRsp::set_retcode(rsp_0, 0);
  }
  else
  {
    std::vector<proto::HomeBlueprintBriefRedisData>::vector((std::vector<proto::HomeBlueprintBriefRedisData> *const)(v3 + 48));
    if ( RedisOpHome::getHomeBlueprintBriefDataBatch(
           (const std::set<std::string> *)(v3 + 112),
           (std::vector<proto::HomeBlueprintBriefRedisData> *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "getHomeBlueprintBriefData",
        1274);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v12,
        (const char (*)[38])"getHomeBlueprintBriefDataBatch failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
      proto::ServerHomeGetBlueprintBriefDataRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      if ( !std::vector<proto::HomeBlueprintBriefRedisData>::empty((const std::vector<proto::HomeBlueprintBriefRedisData> *const)(v3 + 48)) )
      {
        v6 = proto::ServerHomeGetBlueprintBriefDataRsp::mutable_brief_data_list(rsp_0);
        common::tools::MiscUtils::toRepeated<proto::HomeBlueprintBriefRedisData,proto::HomeBlueprintBriefRedisData>(
          (const std::vector<proto::HomeBlueprintBriefRedisData> *)(v3 + 48),
          v6);
      }
      proto::ServerHomeGetBlueprintBriefDataRsp::set_retcode(rsp_0, 0);
    }
    std::vector<proto::HomeBlueprintBriefRedisData>::~vector((std::vector<proto::HomeBlueprintBriefRedisData> *const)(v3 + 48));
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v3 + 112));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1288: range 000000000DEBA4EE-000000000DEBABD4
int32_t __cdecl ActivityHandler::onServerHomeUpdateBlueprintBriefDataReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint32 v6; // eax
  const proto::HomeBlueprintBriefRedisData *v7; // rax
  const proto::HomeBlueprintBriefRedisData *v8; // rax
  bool v9; // r15
  common::milog::MiLogStream *i; // r14
  const proto::HomeBlueprintBriefRedisData *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  ActivityService *v18; // r14
  int32_t result; // eax
  proto::HomeBlueprintBriefRedisData *v20; // [rsp+8h] [rbp-188h]
  std::less<std::string > __comp; // [rsp+2Eh] [rbp-162h] BYREF
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-161h] BYREF
  unsigned int val; // [rsp+30h] [rbp-160h] BYREF
  unsigned int UserId; // [rsp+34h] [rbp-15Ch] BYREF
  const proto::ServerHomeUpdateBlueprintBriefDataReq *req; // [rsp+38h] [rbp-158h]
  proto::ServerHomeUpdateBlueprintBriefDataRsp *rsp_0; // [rsp+40h] [rbp-150h]
  const std::string *share_code; // [rsp+48h] [rbp-148h]
  std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp> p_rsp_ptr; // [rsp+50h] [rbp-140h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-120h] BYREF
  std::set<std::string> share_code_set; // [rsp+90h] [rbp-100h] BYREF
  char v32[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 req_ptr:1289 64 16 12 rsp_ptr:1289 96 24 19 brief_data_vec:1297";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeUpdateBlueprintBriefDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeUpdateBlueprintBriefDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerHomeUpdateBlueprintBriefDataReq const>(
         (const std::shared_ptr<const proto::ServerHomeUpdateBlueprintBriefDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeUpdateBlueprintBriefDataReq",
      1289);
    common::milog::MiLogStream::operator()(&v30, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeUpdateBlueprintBriefDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeUpdateBlueprintBriefDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ServerHomeUpdateBlueprintBriefDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerHomeUpdateBlueprintBriefDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerHomeUpdateBlueprintBriefDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ServerHomeUpdateBlueprintBriefDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerHomeUpdateBlueprintBriefDataReq::slot_id(req);
    proto::ServerHomeUpdateBlueprintBriefDataRsp::set_slot_id(rsp_0, v6);
    v20 = proto::ServerHomeUpdateBlueprintBriefDataRsp::mutable_brief_data(rsp_0);
    v7 = proto::ServerHomeUpdateBlueprintBriefDataReq::brief_data(req);
    proto::HomeBlueprintBriefRedisData::CopyFrom(v20, v7);
    proto::ServerHomeUpdateBlueprintBriefDataRsp::set_retcode(rsp_0, 0);
    v8 = proto::ServerHomeUpdateBlueprintBriefDataReq::brief_data(req);
    share_code = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](v8);
    std::vector<proto::HomeBlueprintBriefRedisData>::vector((std::vector<proto::HomeBlueprintBriefRedisData> *const)(v2 + 96));
    std::string::basic_string(&v30, share_code);
    std::allocator<std::string>::allocator(&__a);
    std::set<std::string>::set(
      &share_code_set,
      (std::initializer_list<std::string >)__PAIR128__(1LL, &v30),
      &__comp,
      &__a);
    v9 = RedisOpHome::getHomeBlueprintBriefDataBatch(
           &share_code_set,
           (std::vector<proto::HomeBlueprintBriefRedisData> *)(v2 + 96)) != 0;
    std::set<std::string>::~set(&share_code_set);
    std::allocator<std::string>::~allocator(&__a);
    for ( i = (common::milog::MiLogStream *)&share_code_set; i != &v30; std::string::~string(i) )
      --i;
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerHomeUpdateBlueprintBriefDataReq",
        1300);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v30,
        (const char (*)[38])"getHomeBlueprintBriefDataBatch failed");
      common::milog::MiLogStream::~MiLogStream(&v30);
      proto::ServerHomeUpdateBlueprintBriefDataRsp::set_retcode(rsp_0, -1);
    }
    else if ( std::vector<proto::HomeBlueprintBriefRedisData>::empty((const std::vector<proto::HomeBlueprintBriefRedisData> *const)(v2 + 96)) )
    {
      proto::ServerHomeUpdateBlueprintBriefDataRsp::set_retcode(rsp_0, 9803);
    }
    else
    {
      v11 = proto::ServerHomeUpdateBlueprintBriefDataReq::brief_data(req);
      if ( RedisOpHome::setHomeBlueprintBriefData(v11) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerHomeUpdateBlueprintBriefDataReq",
          1312);
        v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v30,
                (const char (*)[43])"setHomeBlueprintBriefData failed, slot_id:");
        val = proto::ServerHomeUpdateBlueprintBriefDataReq::slot_id(req);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" share_code:");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, share_code);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        UserId = common::minet::Packet::getUserId(v17);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &UserId);
        common::milog::MiLogStream::~MiLogStream(&v30);
        proto::ServerHomeUpdateBlueprintBriefDataRsp::set_retcode(rsp_0, -1);
      }
    }
    std::vector<proto::HomeBlueprintBriefRedisData>::~vector((std::vector<proto::HomeBlueprintBriefRedisData> *const)(v2 + 96));
    v18 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp> *)(v2 + 64));
    ServiceBase::sendRsp<proto::ServerHomeUpdateBlueprintBriefDataRsp>(v18, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerHomeUpdateBlueprintBriefDataRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ServerHomeUpdateBlueprintBriefDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeUpdateBlueprintBriefDataReq> *const)(v2 + 32));
  result = v5;
  if ( v32 == (char *)v2 )
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

// Line 1323: range 000000000DEBABD6-000000000DEBB181
int32_t __cdecl ActivityHandler::onServerHomeSaveBlueprintDataReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint32 v6; // eax
  proto::HomeBlueprintBriefRedisData *v7; // r14
  const proto::HomeBlueprintBriefRedisData *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const proto::HomeBlueprintDetailRedisData *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const proto::HomeBlueprintBriefRedisData *v14; // rax
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const proto::HomeBlueprintBriefRedisData *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const proto::HomeBlueprintBriefRedisData *v22; // rax
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  ActivityService *v26; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  const proto::ServerHomeSaveBlueprintDataReq *req; // [rsp+20h] [rbp-100h]
  proto::ServerHomeSaveBlueprintDataRsp *rsp_0; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp> p_rsp_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1331 64 16 12 req_ptr:1324 96 16 12 rsp_ptr:1324";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeSaveBlueprintDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeSaveBlueprintDataReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerHomeSaveBlueprintDataReq const>(
         (const std::shared_ptr<const proto::ServerHomeSaveBlueprintDataReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeSaveBlueprintDataReq",
      1324);
    common::milog::MiLogStream::operator()(&v33, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeSaveBlueprintDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeSaveBlueprintDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerHomeSaveBlueprintDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerHomeSaveBlueprintDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerHomeSaveBlueprintDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerHomeSaveBlueprintDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerHomeSaveBlueprintDataReq::slot_id(req);
    proto::ServerHomeSaveBlueprintDataRsp::set_slot_id(rsp_0, v6);
    v7 = proto::ServerHomeSaveBlueprintDataRsp::mutable_brief_data(rsp_0);
    v8 = proto::ServerHomeSaveBlueprintDataReq::brief_data(req);
    proto::HomeBlueprintBriefRedisData::CopyFrom(v7, v8);
    proto::ServerHomeSaveBlueprintDataRsp::set_retcode(rsp_0, 0);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v9);
    v10 = proto::ServerHomeSaveBlueprintDataReq::detail_data(req);
    if ( RedisOpHome::setHomeBlueprintDetailData(v10) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerHomeSaveBlueprintDataReq",
        1334);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v33,
              (const char (*)[44])"setHomeBlueprintDetailData failed, slot_id:");
      val = proto::ServerHomeSaveBlueprintDataReq::slot_id(req);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" share_code:");
      v14 = proto::ServerHomeSaveBlueprintDataReq::brief_data(req);
      v15 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](v14);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v15);
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
      proto::ServerHomeSaveBlueprintDataRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v18 = proto::ServerHomeSaveBlueprintDataReq::brief_data(req);
      if ( RedisOpHome::setHomeBlueprintBriefData(v18) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerHomeSaveBlueprintDataReq",
          1340);
        v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v33,
                (const char (*)[43])"setHomeBlueprintBriefData failed, slot_id:");
        val = proto::ServerHomeSaveBlueprintDataReq::slot_id(req);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" share_code:");
        v22 = proto::ServerHomeSaveBlueprintDataReq::brief_data(req);
        v23 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](v22);
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v23);
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
        proto::ServerHomeSaveBlueprintDataRsp::set_retcode(rsp_0, -1);
      }
    }
    v26 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerHomeSaveBlueprintDataRsp>(v26, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerHomeSaveBlueprintDataRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerHomeSaveBlueprintDataRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerHomeSaveBlueprintDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeSaveBlueprintDataReq> *const)(v2 + 64));
  result = v5;
  if ( v34 == (char *)v2 )
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

// Line 1352: range 000000000DEBB182-000000000DEBB715
int32_t __cdecl ActivityHandler::onServerHomeDeleteBlueprintDataReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint32 v6; // eax
  const std::string *v7; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  ActivityService *v23; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  const proto::ServerHomeDeleteBlueprintDataReq *req; // [rsp+20h] [rbp-100h]
  proto::ServerHomeDeleteBlueprintDataRsp *rsp_0; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp> p_rsp_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1360 64 16 12 req_ptr:1353 96 16 12 rsp_ptr:1353";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeDeleteBlueprintDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeDeleteBlueprintDataReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerHomeDeleteBlueprintDataReq const>(
         (const std::shared_ptr<const proto::ServerHomeDeleteBlueprintDataReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeDeleteBlueprintDataReq",
      1353);
    common::milog::MiLogStream::operator()(&v30, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeDeleteBlueprintDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeDeleteBlueprintDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerHomeDeleteBlueprintDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerHomeDeleteBlueprintDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerHomeDeleteBlueprintDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerHomeDeleteBlueprintDataRsp::set_retcode(rsp_0, -1);
    v6 = proto::ServerHomeDeleteBlueprintDataReq::slot_id(req);
    proto::ServerHomeDeleteBlueprintDataRsp::set_slot_id(rsp_0, v6);
    v7 = proto::ServerHomeDeleteBlueprintDataReq::share_code[abi:cxx11](req);
    proto::ServerHomeDeleteBlueprintDataRsp::set_share_code(rsp_0, v7);
    proto::ServerHomeDeleteBlueprintDataRsp::set_retcode(rsp_0, 0);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v8);
    v9 = proto::ServerHomeDeleteBlueprintDataReq::share_code[abi:cxx11](req);
    if ( RedisOpHome::removeHomeBlueprintBriefData(v9) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerHomeDeleteBlueprintDataReq",
        1363);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"removeHomeBlueprintBriefData failed, slot_id:");
      val = proto::ServerHomeDeleteBlueprintDataReq::slot_id(req);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" share_code:");
      v13 = proto::ServerHomeDeleteBlueprintDataReq::share_code[abi:cxx11](req);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, v13);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      proto::ServerHomeDeleteBlueprintDataRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v16 = proto::ServerHomeDeleteBlueprintDataReq::share_code[abi:cxx11](req);
      if ( RedisOpHome::removeHomeBlueprintDetailData(v16) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerHomeDeleteBlueprintDataReq",
          1369);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v30,
                (const char (*)[47])"removeHomeBlueprintDetailData failed, slot_id:");
        val = proto::ServerHomeDeleteBlueprintDataReq::slot_id(req);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" share_code:");
        v20 = proto::ServerHomeDeleteBlueprintDataReq::share_code[abi:cxx11](req);
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        proto::ServerHomeDeleteBlueprintDataRsp::set_retcode(rsp_0, -1);
      }
    }
    v23 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerHomeDeleteBlueprintDataRsp>(v23, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::ServerHomeDeleteBlueprintDataRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerHomeDeleteBlueprintDataRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerHomeDeleteBlueprintDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeDeleteBlueprintDataReq> *const)(v2 + 64));
  result = v5;
  if ( v31 == (char *)v2 )
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

// Line 1381: range 000000000DEBB716-000000000DEBBDCD
int32_t __cdecl ActivityHandler::onServerHomeGetBlueprintDetailDataReq(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::int32 v5; // r14d
  google::protobuf::uint32 v6; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 v8; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ActivityService *v10; // rax
  common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *v11; // rcx
  common::milog::MiLogStream *v13; // rdx
  ActivityService *v14; // rax
  common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *v15; // rcx
  ActivityService *v16; // r14
  int32_t result; // eax
  bool is_enable_cache; // [rsp+1Eh] [rbp-122h]
  bool is_get_self; // [rsp+1Fh] [rbp-121h]
  std::__shared_ptr_access<const proto::ServerHomeGetBlueprintDetailDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-120h]
  proto::ServerHomeGetBlueprintDetailDataRsp *rsp_0; // [rsp+28h] [rbp-118h]
  const std::string *share_code; // [rsp+30h] [rbp-110h]
  proto::HomeBlueprintDetailRedisData *detail_data; // [rsp+38h] [rbp-108h]
  std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp> p_rsp_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 13 is_exist:1386 64 16 12 req_ptr:1382 96 16 12 rsp_ptr:1382 128 16 15 config_ptr:1392";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeGetBlueprintDetailDataReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeGetBlueprintDetailDataReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::ServerHomeGetBlueprintDetailDataReq const>(
         (const std::shared_ptr<const proto::ServerHomeGetBlueprintDetailDataReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeGetBlueprintDetailDataReq",
      1382);
    common::milog::MiLogStream::operator()(&v25, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ServerHomeGetBlueprintDetailDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeGetBlueprintDetailDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::ServerHomeGetBlueprintDetailDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ServerHomeGetBlueprintDetailDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ServerHomeGetBlueprintDetailDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::ServerHomeGetBlueprintDetailDataRsp::set_retcode(rsp_0, -1);
    share_code = proto::ServerHomeGetBlueprintDetailDataReq::share_code[abi:cxx11](req);
    detail_data = proto::ServerHomeGetBlueprintDetailDataRsp::mutable_detail_data(rsp_0);
    *(_BYTE *)(v2 + 48) = 0;
    proto::ServerHomeGetBlueprintDetailDataRsp::set_retcode(rsp_0, 0);
    v6 = proto::ServerHomeGetBlueprintDetailDataReq::share_owner_uid(req);
    proto::ServerHomeGetBlueprintDetailDataRsp::set_share_owner_uid(rsp_0, v6);
    ServiceBox::findService<ActivityService>();
    ActivityService::getConfig((ActivityService *const)(v2 + 128));
    if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/activity_handler.cpp",
        "onServerHomeGetBlueprintDetailDataReq",
        1395);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v25, (const char (*)[18])off_1BB4F960);
      common::milog::MiLogStream::~MiLogStream(&v25);
      proto::ServerHomeGetBlueprintDetailDataRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v7->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) <= 3 )
      {
        v7 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->home_blueprint_detail_cache_max_size);
      }
      is_enable_cache = v7->home_blueprint_detail_cache_max_size != 0;
      v8 = proto::ServerHomeGetBlueprintDetailDataReq::share_owner_uid(req);
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      is_get_self = v8 == common::minet::Packet::getUserId(v9);
      if ( is_enable_cache
        && !is_get_self
        && (v10 = ServiceBox::findService<ActivityService>(),
            v11 = ActivityService::getHomeBlueprintDetailCache[abi:cxx11](v10),
            common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::get(v11, share_code, detail_data)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/activity_handler.cpp",
          "onServerHomeGetBlueprintDetailDataReq",
          1404);
        v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(&v25, (const char (*)[45])off_1BB52740);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, share_code);
        common::milog::MiLogStream::~MiLogStream(&v25);
        *(_BYTE *)(v2 + 48) = 1;
      }
      else if ( RedisOpHome::getHomeBlueprintDetailData(share_code, detail_data, (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/activity_handler.cpp",
          "onServerHomeGetBlueprintDetailDataReq",
          1411);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v25,
          (const char (*)[34])"getHomeBlueprintDetailData failed");
        common::milog::MiLogStream::~MiLogStream(&v25);
        proto::ServerHomeGetBlueprintDetailDataRsp::set_retcode(rsp_0, -1);
      }
      else if ( *(_BYTE *)(v2 + 48) != 1 )
      {
        proto::ServerHomeGetBlueprintDetailDataRsp::set_retcode(rsp_0, 9803);
      }
      else if ( is_enable_cache && !is_get_self )
      {
        v14 = ServiceBox::findService<ActivityService>();
        v15 = ActivityService::getHomeBlueprintDetailCache[abi:cxx11](v14);
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::put(v15, share_code, detail_data);
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    v16 = ServiceBox::findService<ActivityService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::ServerHomeGetBlueprintDetailDataRsp>(
      v16,
      &p_rsp_ptr,
      (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = proto::ServerHomeGetBlueprintDetailDataRsp::retcode(rsp_0);
    std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp>::~shared_ptr((std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::ServerHomeGetBlueprintDetailDataReq const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeGetBlueprintDetailDataReq> *const)(v2 + 64));
  result = v5;
  if ( v26 == (char *)v2 )
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

// Line 1434: range 000000000DEBBDCE-000000000DEBBF60
void __cdecl ActivityHandler::clearHomeBlueprintCache(ActivityHandler *const this, const std::string *share_code)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ActivityService *v6; // rax
  common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *v7; // rdx
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 config_ptr:1435";
  *(_QWORD *)(v2 + 16) = ActivityHandler::clearHomeBlueprintCache;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<ActivityService>();
  ActivityService::getConfig((ActivityService *const)(v2 + 32));
  if ( !std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v5->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v5->home_blueprint_detail_cache_max_size);
    }
    if ( v5->home_blueprint_detail_cache_max_size )
    {
      v6 = ServiceBox::findService<ActivityService>();
      v7 = ActivityService::getHomeBlueprintDetailCache[abi:cxx11](v6);
      common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::remove(v7, share_code);
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1447: range 000000000DEBBF62-000000000DEBC13E
int32_t __cdecl ActivityHandler::onServerHomeBlueprintCacheInvalidNotify(
        ActivityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  const std::string *v6; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerHomeBlueprintCacheInvalidNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1448";
  *(_QWORD *)(v2 + 16) = ActivityHandler::onServerHomeBlueprintCacheInvalidNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerHomeBlueprintCacheInvalidNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ServerHomeBlueprintCacheInvalidNotify const>(
         (const std::shared_ptr<const proto::ServerHomeBlueprintCacheInvalidNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/activity_handler.cpp",
      "onServerHomeBlueprintCacheInvalidNotify",
      1448);
    common::milog::MiLogStream::operator()(&v9, off_1BB528A0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ServerHomeBlueprintCacheInvalidNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerHomeBlueprintCacheInvalidNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::ServerHomeBlueprintCacheInvalidNotify::share_code[abi:cxx11](notify);
    ActivityHandler::clearHomeBlueprintCache(this, v6);
    v5 = 0;
  }
  std::shared_ptr<proto::ServerHomeBlueprintCacheInvalidNotify const>::~shared_ptr((std::shared_ptr<const proto::ServerHomeBlueprintCacheInvalidNotify> *const)(v2 + 32));
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
