// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/ugc_handler.cpp

// Line 22: range 000000001803D414-000000001803E407
int32_t __cdecl UgcHandler::addPacketFuncToMap(UgcHandler *const this, PacketFuncMap *process_packet_func_map)
{
  UgcHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  UgcHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  UgcHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  UgcHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  UgcHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  UgcHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  UgcHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  UgcHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  UgcHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  UgcHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  UgcHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  __m128i v36; // [rsp+0h] [rbp-140h] BYREF
  __m128i v37; // [rsp+10h] [rbp-130h] BYREF
  __m128i v38; // [rsp+20h] [rbp-120h] BYREF
  __m128i v39; // [rsp+30h] [rbp-110h] BYREF
  __m128i v40; // [rsp+40h] [rbp-100h] BYREF
  __m128i v41; // [rsp+50h] [rbp-F0h] BYREF
  __m128i v42; // [rsp+60h] [rbp-E0h] BYREF
  __m128i v43; // [rsp+70h] [rbp-D0h] BYREF
  __m128i v44; // [rsp+80h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+90h] [rbp-B0h]
  UgcHandler *thisa; // [rsp+98h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+ACh] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v48; // [rsp+B0h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+B8h] [rbp-88h] BYREF
  int (*__f[2])(UgcHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+C0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,const std::_Placeholder<1>&>::type v51; // [rsp+D0h] [rbp-70h] BYREF
  common::milog::MiLogStream v52; // [rsp+F0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 6326;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v48, &__y) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/ugc_handler.cpp",
      "addPacketFuncToMap",
      23);
    common::milog::MiLogStream::operator()(&v52, off_2649F220, 6326LL);
    common::milog::MiLogStream::~MiLogStream(&v52);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(UgcHandler *, std::shared_ptr<common::minet::Packet>))UgcHandler::onGetUgcReq;
    __f[1] = 0LL;
    std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
      &v51,
      __f,
      (UgcHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 6326;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
      v5,
      &v51);
    __x = 10825;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v48, &__y) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/ugc_handler.cpp",
        "addPacketFuncToMap",
        24);
      common::milog::MiLogStream::operator()(&v52, off_2649F220, 10825LL);
      common::milog::MiLogStream::~MiLogStream(&v52);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(UgcHandler *, std::shared_ptr<common::minet::Packet>))UgcHandler::onServerGetUgcRsp;
      __f[1] = 0LL;
      std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
        &v51,
        __f,
        (UgcHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 10825;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
        v8,
        &v51);
      __x = 6325;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v48, &__y) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/ugc_handler.cpp",
          "addPacketFuncToMap",
          25);
        common::milog::MiLogStream::operator()(&v52, off_2649F220, 6325LL);
        common::milog::MiLogStream::~MiLogStream(&v52);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v36.m128i_i64[0] = (__int64)UgcHandler::onGetUgcBriefInfoReq;
        v36.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v36);
        std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
          &v51,
          __f,
          (UgcHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 6325;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
          v11,
          &v51);
        __x = 10836;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v48, &__y) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/ugc_handler.cpp",
            "addPacketFuncToMap",
            26);
          common::milog::MiLogStream::operator()(&v52, off_2649F220, 10836LL);
          common::milog::MiLogStream::~MiLogStream(&v52);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v37.m128i_i64[0] = (__int64)UgcHandler::onServerGetUgcBriefRsp;
          v37.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v37);
          std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
            &v51,
            __f,
            (UgcHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 10836;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
            v14,
            &v51);
          __x = 6329;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v48, &__y) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/ugc_handler.cpp",
              "addPacketFuncToMap",
              27);
            common::milog::MiLogStream::operator()(&v52, off_2649F220, 6329LL);
            common::milog::MiLogStream::~MiLogStream(&v52);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v38.m128i_i64[0] = (__int64)UgcHandler::onSaveUgcReq;
            v38.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v38);
            std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
              &v51,
              __f,
              (UgcHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 6329;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
              v17,
              &v51);
            __x = 10810;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v48, &__y) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/ugc_handler.cpp",
                "addPacketFuncToMap",
                28);
              common::milog::MiLogStream::operator()(&v52, off_2649F220, 10810LL);
              common::milog::MiLogStream::~MiLogStream(&v52);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v39.m128i_i64[0] = (__int64)UgcHandler::onServerSaveUgcRsp;
              v39.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v39);
              std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                &v51,
                __f,
                (UgcHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 10810;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                v20,
                &v51);
              __x = 6344;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v48, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/ugc_handler.cpp",
                  "addPacketFuncToMap",
                  29);
                common::milog::MiLogStream::operator()(&v52, off_2649F220, 6344LL);
                common::milog::MiLogStream::~MiLogStream(&v52);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v40.m128i_i64[0] = (__int64)UgcHandler::onPublishUgcReq;
                v40.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v40);
                std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                  &v51,
                  __f,
                  (UgcHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 6344;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v51);
                __x = 10862;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v48, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/ugc_handler.cpp",
                    "addPacketFuncToMap",
                    30);
                  common::milog::MiLogStream::operator()(&v52, off_2649F220, 10862LL);
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v41.m128i_i64[0] = (__int64)UgcHandler::onServerPublishUgcRsp;
                  v41.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v41);
                  std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                    &v51,
                    __f,
                    (UgcHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 10862;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v51);
                  __x = 6320;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v48, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v52,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/ugc_handler.cpp",
                      "addPacketFuncToMap",
                      31);
                    common::milog::MiLogStream::operator()(&v52, off_2649F220, 6320LL);
                    common::milog::MiLogStream::~MiLogStream(&v52);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v42.m128i_i64[0] = (__int64)UgcHandler::onCheckUgcUpdateReq;
                    v42.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v42);
                    std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                      &v51,
                      __f,
                      (UgcHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 6320;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v51);
                    __x = 10813;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v48, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/ugc_handler.cpp",
                        "addPacketFuncToMap",
                        32);
                      common::milog::MiLogStream::operator()(&v52, off_2649F220, 10813LL);
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v43.m128i_i64[0] = (__int64)UgcHandler::onServerCheckUgcUpdateRsp;
                      v43.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v43);
                      std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                        &v51,
                        __f,
                        (UgcHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 10813;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v51);
                      __x = 6342;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v48._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v48, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v52,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/ugc_handler.cpp",
                          "addPacketFuncToMap",
                          33);
                        common::milog::MiLogStream::operator()(&v52, off_2649F220, 6342LL);
                        common::milog::MiLogStream::~MiLogStream(&v52);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v44.m128i_i64[0] = (__int64)UgcHandler::onCheckUgcStateReq;
                        v44.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v44);
                        std::bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>),UgcHandler*,std::_Placeholder<1> const&>(
                          &v51,
                          __f,
                          (UgcHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 6342;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (UgcHandler::*)(std::shared_ptr<common::minet::Packet>) ()(UgcHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v51);
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
};

// Line 39: range 000000001803E408-000000001803E6FC
int32_t __cdecl UgcHandler::onGetUgcReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::GetUgcRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:40 64 16 10 rsp_ptr:40";
  *(_QWORD *)(v2 + 16) = UgcHandler::onGetUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetUgcReq const>((const std::shared_ptr<const proto::GetUgcReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onGetUgcReq",
      40);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetUgcRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::getUgc(UgcComp, req, rsp_0);
    if ( proto::GetUgcRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::GetUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::GetUgcRsp>::~shared_ptr((std::shared_ptr<proto::GetUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetUgcReq const>::~shared_ptr((std::shared_ptr<const proto::GetUgcReq> *const)(v2 + 32));
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

// Line 51: range 000000001803E6FE-000000001803EA10
int32_t __cdecl UgcHandler::onServerGetUgcRsp(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 17 server_rsp_ptr:52 80 72 6 rsp:53";
  *(_QWORD *)(v2 + 16) = UgcHandler::onServerGetUgcRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetUgcRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerGetUgcRsp const>(
         (const std::shared_ptr<const proto::ServerGetUgcRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onServerGetUgcRsp",
      52);
    common::milog::MiLogStream::operator()(&v9, off_264A26E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetUgcRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetUgcRsp::GetUgcRsp((proto::GetUgcRsp *const)(v2 + 80));
    proto::GetUgcRsp::set_retcode((proto::GetUgcRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::serverGetUgc(UgcComp, server_rsp, (proto::GetUgcRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::GetUgcRsp::retcode((const proto::GetUgcRsp *const)(v2 + 80));
    proto::GetUgcRsp::~GetUgcRsp((proto::GetUgcRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerGetUgcRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetUgcRsp> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 62: range 000000001803EA12-000000001803ED06
int32_t __cdecl UgcHandler::onGetUgcBriefInfoReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetUgcBriefInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::GetUgcBriefInfoRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:63 64 16 10 rsp_ptr:63";
  *(_QWORD *)(v2 + 16) = UgcHandler::onGetUgcBriefInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetUgcBriefInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetUgcBriefInfoReq const>(
         (const std::shared_ptr<const proto::GetUgcBriefInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onGetUgcBriefInfoReq",
      63);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetUgcBriefInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetUgcBriefInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetUgcBriefInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetUgcBriefInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetUgcBriefInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::getUgcBriefInfo(UgcComp, req, rsp_0);
    if ( proto::GetUgcBriefInfoRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::GetUgcBriefInfoRsp::retcode(rsp_0);
    std::shared_ptr<proto::GetUgcBriefInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetUgcBriefInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetUgcBriefInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetUgcBriefInfoReq> *const)(v2 + 32));
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

// Line 74: range 000000001803ED08-000000001803EFF9
int32_t __cdecl UgcHandler::onServerGetUgcBriefRsp(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 17 server_rsp_ptr:75 80 48 6 rsp:76";
  *(_QWORD *)(v2 + 16) = UgcHandler::onServerGetUgcBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerGetUgcBriefRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerGetUgcBriefRsp const>(
         (const std::shared_ptr<const proto::ServerGetUgcBriefRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onServerGetUgcBriefRsp",
      75);
    common::milog::MiLogStream::operator()(&v9, off_264A2820);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerGetUgcBriefRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerGetUgcBriefRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetUgcBriefInfoRsp::GetUgcBriefInfoRsp((proto::GetUgcBriefInfoRsp *const)(v2 + 80));
    proto::GetUgcBriefInfoRsp::set_retcode((proto::GetUgcBriefInfoRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::serverGetUgcBrief(UgcComp, server_rsp, (proto::GetUgcBriefInfoRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::GetUgcBriefInfoRsp::retcode((const proto::GetUgcBriefInfoRsp *const)(v2 + 80));
    proto::GetUgcBriefInfoRsp::~GetUgcBriefInfoRsp((proto::GetUgcBriefInfoRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerGetUgcBriefRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerGetUgcBriefRsp> *const)(v2 + 48));
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

// Line 85: range 000000001803EFFA-000000001803F2EE
int32_t __cdecl UgcHandler::onSaveUgcReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SaveUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::SaveUgcRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:86 64 16 10 rsp_ptr:86";
  *(_QWORD *)(v2 + 16) = UgcHandler::onSaveUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SaveUgcReq const>((const std::shared_ptr<const proto::SaveUgcReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onSaveUgcReq",
      86);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SaveUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SaveUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SaveUgcRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::saveUgc(UgcComp, req, rsp_0);
    if ( proto::SaveUgcRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::SaveUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::SaveUgcRsp>::~shared_ptr((std::shared_ptr<proto::SaveUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SaveUgcReq const>::~shared_ptr((std::shared_ptr<const proto::SaveUgcReq> *const)(v2 + 32));
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

// Line 97: range 000000001803F2F0-000000001803F5ED
int32_t __cdecl UgcHandler::onServerSaveUgcRsp(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerSaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 17 server_rsp_ptr:98 80 40 6 rsp:99";
  *(_QWORD *)(v2 + 16) = UgcHandler::onServerSaveUgcRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerSaveUgcRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerSaveUgcRsp const>(
         (const std::shared_ptr<const proto::ServerSaveUgcRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onServerSaveUgcRsp",
      98);
    common::milog::MiLogStream::operator()(&v9, off_264A2960);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerSaveUgcRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerSaveUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::SaveUgcRsp::SaveUgcRsp((proto::SaveUgcRsp *const)(v2 + 80));
    proto::SaveUgcRsp::set_retcode((proto::SaveUgcRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::serverSaveUgc(UgcComp, server_rsp, (proto::SaveUgcRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::SaveUgcRsp::retcode((const proto::SaveUgcRsp *const)(v2 + 80));
    proto::SaveUgcRsp::~SaveUgcRsp((proto::SaveUgcRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerSaveUgcRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerSaveUgcRsp> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 108: range 000000001803F5EE-000000001803F8E2
int32_t __cdecl UgcHandler::onPublishUgcReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PublishUgcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::PublishUgcRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:109 64 16 11 rsp_ptr:109";
  *(_QWORD *)(v2 + 16) = UgcHandler::onPublishUgcReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PublishUgcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PublishUgcReq const>((const std::shared_ptr<const proto::PublishUgcReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onPublishUgcReq",
      109);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PublishUgcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PublishUgcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PublishUgcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PublishUgcRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::publishUgc(UgcComp, req, rsp_0);
    if ( proto::PublishUgcRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::PublishUgcRsp::retcode(rsp_0);
    std::shared_ptr<proto::PublishUgcRsp>::~shared_ptr((std::shared_ptr<proto::PublishUgcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PublishUgcReq const>::~shared_ptr((std::shared_ptr<const proto::PublishUgcReq> *const)(v2 + 32));
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

// Line 120: range 000000001803F8E4-000000001803FBE1
int32_t __cdecl UgcHandler::onServerPublishUgcRsp(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerPublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 18 server_rsp_ptr:121 80 40 7 rsp:122";
  *(_QWORD *)(v2 + 16) = UgcHandler::onServerPublishUgcRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerPublishUgcRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerPublishUgcRsp const>(
         (const std::shared_ptr<const proto::ServerPublishUgcRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onServerPublishUgcRsp",
      121);
    common::milog::MiLogStream::operator()(&v9, off_264A2A60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerPublishUgcRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerPublishUgcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::PublishUgcRsp::PublishUgcRsp((proto::PublishUgcRsp *const)(v2 + 80));
    proto::PublishUgcRsp::set_retcode((proto::PublishUgcRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::serverPublishUgc(UgcComp, server_rsp, (proto::PublishUgcRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::PublishUgcRsp::retcode((const proto::PublishUgcRsp *const)(v2 + 80));
    proto::PublishUgcRsp::~PublishUgcRsp((proto::PublishUgcRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerPublishUgcRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerPublishUgcRsp> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000001803FBE2-000000001803FED6
int32_t __cdecl UgcHandler::onCheckUgcUpdateReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::CheckUgcUpdateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::CheckUgcUpdateRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:132 64 16 11 rsp_ptr:132";
  *(_QWORD *)(v2 + 16) = UgcHandler::onCheckUgcUpdateReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckUgcUpdateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CheckUgcUpdateReq const>(
         (const std::shared_ptr<const proto::CheckUgcUpdateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onCheckUgcUpdateReq",
      132);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::CheckUgcUpdateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckUgcUpdateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CheckUgcUpdateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CheckUgcUpdateRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::checkUgcUpdate(UgcComp, req, rsp_0);
    if ( proto::CheckUgcUpdateRsp::retcode(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, rsp_0);
    }
    v5 = proto::CheckUgcUpdateRsp::retcode(rsp_0);
    std::shared_ptr<proto::CheckUgcUpdateRsp>::~shared_ptr((std::shared_ptr<proto::CheckUgcUpdateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CheckUgcUpdateReq const>::~shared_ptr((std::shared_ptr<const proto::CheckUgcUpdateReq> *const)(v2 + 32));
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

// Line 143: range 000000001803FED8-00000000180401C9
int32_t __cdecl UgcHandler::onServerCheckUgcUpdateRsp(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ServerCheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *server_rsp; // [rsp+18h] [rbp-F8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 16 18 server_rsp_ptr:144 80 48 7 rsp:145";
  *(_QWORD *)(v2 + 16) = UgcHandler::onServerCheckUgcUpdateRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ServerCheckUgcUpdateRsp>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ServerCheckUgcUpdateRsp const>(
         (const std::shared_ptr<const proto::ServerCheckUgcUpdateRsp> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onServerCheckUgcUpdateRsp",
      144);
    common::milog::MiLogStream::operator()(&v9, off_264A2BA0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    server_rsp = std::__shared_ptr_access<proto::ServerCheckUgcUpdateRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerCheckUgcUpdateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::CheckUgcUpdateRsp::CheckUgcUpdateRsp((proto::CheckUgcUpdateRsp *const)(v2 + 80));
    proto::CheckUgcUpdateRsp::set_retcode((proto::CheckUgcUpdateRsp *const)(v2 + 80), -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::serverCheckUgcUpdate(UgcComp, server_rsp, (proto::CheckUgcUpdateRsp *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v5 = proto::CheckUgcUpdateRsp::retcode((const proto::CheckUgcUpdateRsp *const)(v2 + 80));
    proto::CheckUgcUpdateRsp::~CheckUgcUpdateRsp((proto::CheckUgcUpdateRsp *const)(v2 + 80));
  }
  std::shared_ptr<proto::ServerCheckUgcUpdateRsp const>::~shared_ptr((std::shared_ptr<const proto::ServerCheckUgcUpdateRsp> *const)(v2 + 48));
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

// Line 154: range 00000000180401CA-0000000018040461
int32_t __cdecl UgcHandler::onCheckUgcStateReq(UgcHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerUgcComp *UgcComp; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::CheckUgcStateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-C0h]
  proto::CheckUgcStateRsp *rsp_0; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:155 64 16 11 rsp_ptr:155";
  *(_QWORD *)(v2 + 16) = UgcHandler::onCheckUgcStateReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CheckUgcStateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CheckUgcStateReq const>(
         (const std::shared_ptr<const proto::CheckUgcStateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ugc_handler.cpp",
      "onCheckUgcStateReq",
      155);
    common::milog::MiLogStream::operator()(&v10, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::CheckUgcStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CheckUgcStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CheckUgcStateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CheckUgcStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CheckUgcStateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CheckUgcStateRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(this->player_);
    PlayerUgcComp::checkUgcState(UgcComp, req, rsp_0);
    v5 = proto::CheckUgcStateRsp::retcode(rsp_0);
    std::shared_ptr<proto::CheckUgcStateRsp>::~shared_ptr((std::shared_ptr<proto::CheckUgcStateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CheckUgcStateReq const>::~shared_ptr((std::shared_ptr<const proto::CheckUgcStateReq> *const)(v2 + 32));
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
