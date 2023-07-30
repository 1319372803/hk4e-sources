// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/match_handler.cpp

// Line 27: range 0000000015119EA0-000000001511BC05
int32_t __cdecl MatchHandler::addPacketFuncToMap(MatchHandler *const this, PacketFuncMap *process_packet_func_map)
{
  MatchHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  MatchHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  MatchHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  MatchHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  MatchHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  MatchHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  MatchHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  MatchHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  MatchHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  MatchHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  MatchHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  MatchHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  MatchHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  MatchHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  MatchHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  MatchHandler **v48; // r8
  const std::_Placeholder<1> *v49; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v50; // rax
  MatchHandler **v51; // r8
  const std::_Placeholder<1> *v52; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v53; // rax
  MatchHandler **v54; // r8
  const std::_Placeholder<1> *v55; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v56; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v57; // rax
  MatchHandler **v58; // r8
  const std::_Placeholder<1> *v59; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v60; // rax
  __m128i v61; // [rsp+0h] [rbp-1C0h] BYREF
  __m128i v62; // [rsp+10h] [rbp-1B0h] BYREF
  __m128i v63; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v64; // [rsp+30h] [rbp-190h] BYREF
  __m128i v65; // [rsp+40h] [rbp-180h] BYREF
  __m128i v66; // [rsp+50h] [rbp-170h] BYREF
  __m128i v67; // [rsp+60h] [rbp-160h] BYREF
  __m128i v68; // [rsp+70h] [rbp-150h] BYREF
  __m128i v69; // [rsp+80h] [rbp-140h] BYREF
  __m128i v70; // [rsp+90h] [rbp-130h] BYREF
  __m128i v71; // [rsp+A0h] [rbp-120h] BYREF
  __m128i v72; // [rsp+B0h] [rbp-110h] BYREF
  __m128i v73; // [rsp+C0h] [rbp-100h] BYREF
  __m128i v74; // [rsp+D0h] [rbp-F0h] BYREF
  __m128i v75; // [rsp+E0h] [rbp-E0h] BYREF
  __m128i v76; // [rsp+F0h] [rbp-D0h] BYREF
  __m128i v77; // [rsp+100h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+110h] [rbp-B0h]
  MatchHandler *thisa; // [rsp+118h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+12Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v81; // [rsp+130h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+138h] [rbp-88h] BYREF
  int (*__f[2])(MatchHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+140h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,const std::_Placeholder<1>&>::type v84; // [rsp+150h] [rbp-70h] BYREF
  common::milog::MiLogStream v85; // [rsp+170h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 4176;
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
      "./src/handler/match_handler.cpp",
      "addPacketFuncToMap",
      28);
    common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4176LL);
    common::milog::MiLogStream::~MiLogStream(&v85);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(MatchHandler *, std::shared_ptr<common::minet::Packet>))MatchHandler::onPlayerStartMatchReq;
    __f[1] = 0LL;
    std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
      &v84,
      __f,
      (MatchHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 4176;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
      v5,
      &v84);
    __x = 4157;
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
        "./src/handler/match_handler.cpp",
        "addPacketFuncToMap",
        29);
      common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4157LL);
      common::milog::MiLogStream::~MiLogStream(&v85);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(MatchHandler *, std::shared_ptr<common::minet::Packet>))MatchHandler::onPlayerCancelMatchReq;
      __f[1] = 0LL;
      std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
        &v84,
        __f,
        (MatchHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 4157;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
        v8,
        &v84);
      __x = 4172;
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
          "./src/handler/match_handler.cpp",
          "addPacketFuncToMap",
          30);
        common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4172LL);
        common::milog::MiLogStream::~MiLogStream(&v85);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v61.m128i_i64[0] = (__int64)MatchHandler::onPlayerConfirmMatchReq;
        v61.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v61);
        std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
          &v84,
          __f,
          (MatchHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 4172;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
          v11,
          &v84);
        __x = 4170;
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
            "./src/handler/match_handler.cpp",
            "addPacketFuncToMap",
            31);
          common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4170LL);
          common::milog::MiLogStream::~MiLogStream(&v85);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v62.m128i_i64[0] = (__int64)MatchHandler::onPlayerMatchAgreedResultNotify;
          v62.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v62);
          std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
            &v84,
            __f,
            (MatchHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 4170;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
            v14,
            &v84);
          __x = 4195;
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
              "./src/handler/match_handler.cpp",
              "addPacketFuncToMap",
              32);
            common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4195LL);
            common::milog::MiLogStream::~MiLogStream(&v85);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v63.m128i_i64[0] = (__int64)MatchHandler::onPlayerApplyEnterMpAfterMatchAgreedNotify;
            v63.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v63);
            std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
              &v84,
              __f,
              (MatchHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 4195;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
              v17,
              &v84);
            __x = 10918;
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
                "./src/handler/match_handler.cpp",
                "addPacketFuncToMap",
                34);
              common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10918LL);
              common::milog::MiLogStream::~MiLogStream(&v85);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v64.m128i_i64[0] = (__int64)MatchHandler::onAddMatchUnitRsp;
              v64.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v64);
              std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                &v84,
                __f,
                (MatchHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 10918;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                v20,
                &v84);
              __x = 10902;
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
                  "./src/handler/match_handler.cpp",
                  "addPacketFuncToMap",
                  35);
                common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10902LL);
                common::milog::MiLogStream::~MiLogStream(&v85);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v65.m128i_i64[0] = (__int64)MatchHandler::onRemoveMatchUnitRsp;
                v65.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v65);
                std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                  &v84,
                  __f,
                  (MatchHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 10902;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v84);
                __x = 10944;
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
                    "./src/handler/match_handler.cpp",
                    "addPacketFuncToMap",
                    36);
                  common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10944LL);
                  common::milog::MiLogStream::~MiLogStream(&v85);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v66.m128i_i64[0] = (__int64)MatchHandler::onConfirmGuestUnitRsp;
                  v66.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v66);
                  std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                    &v84,
                    __f,
                    (MatchHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 10944;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v84);
                  __x = 10925;
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
                      "./src/handler/match_handler.cpp",
                      "addPacketFuncToMap",
                      37);
                    common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10925LL);
                    common::milog::MiLogStream::~MiLogStream(&v85);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v67.m128i_i64[0] = (__int64)MatchHandler::onMatchStartNotify;
                    v67.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v67);
                    std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                      &v84,
                      __f,
                      (MatchHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 10925;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v84);
                    __x = 10931;
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
                        "./src/handler/match_handler.cpp",
                        "addPacketFuncToMap",
                        38);
                      common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10931LL);
                      common::milog::MiLogStream::~MiLogStream(&v85);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v68.m128i_i64[0] = (__int64)MatchHandler::onMatchUnitRemovedNotify;
                      v68.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v68);
                      std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                        &v84,
                        __f,
                        (MatchHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 10931;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v84);
                      __x = 10929;
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
                          "./src/handler/match_handler.cpp",
                          "addPacketFuncToMap",
                          39);
                        common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10929LL);
                        common::milog::MiLogStream::~MiLogStream(&v85);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v69.m128i_i64[0] = (__int64)MatchHandler::onGuestUnitMatchSuccNotify;
                        v69.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v69);
                        std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                          &v84,
                          __f,
                          (MatchHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 10929;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v84);
                        __x = 10945;
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
                            "./src/handler/match_handler.cpp",
                            "addPacketFuncToMap",
                            40);
                          common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10945LL);
                          common::milog::MiLogStream::~MiLogStream(&v85);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v70.m128i_i64[0] = (__int64)MatchHandler::onGuestUnitAgreedResultNotify;
                          v70.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v70);
                          std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                            &v84,
                            __f,
                            (MatchHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v36,
                            v37);
                          __x = 10945;
                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                            v38,
                            &v84);
                          __x = 10914;
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
                              "./src/handler/match_handler.cpp",
                              "addPacketFuncToMap",
                              41);
                            common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10914LL);
                            common::milog::MiLogStream::~MiLogStream(&v85);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v71.m128i_i64[0] = (__int64)MatchHandler::onSyncMatchUnitRsp;
                            v71.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v71);
                            std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                              &v84,
                              __f,
                              (MatchHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v39,
                              v40);
                            __x = 10914;
                            v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                              v41,
                              &v84);
                            __x = 10923;
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
                                "./src/handler/match_handler.cpp",
                                "addPacketFuncToMap",
                                42);
                              common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10923LL);
                              common::milog::MiLogStream::~MiLogStream(&v85);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v72.m128i_i64[0] = (__int64)MatchHandler::onMatchIdentityNotify;
                              v72.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v72);
                              std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                &v84,
                                __f,
                                (MatchHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v42,
                                v43);
                              __x = 10923;
                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                v44,
                                &v84);
                              __x = 10935;
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
                                  "./src/handler/match_handler.cpp",
                                  "addPacketFuncToMap",
                                  43);
                                common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 10935LL);
                                common::milog::MiLogStream::~MiLogStream(&v85);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v73.m128i_i64[0] = (__int64)MatchHandler::onGeneralMatchFinishNotify;
                                v73.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v73);
                                std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                  &v84,
                                  __f,
                                  (MatchHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v45,
                                  v46);
                                __x = 10935;
                                v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                  v47,
                                  &v84);
                                __x = 4179;
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
                                    "./src/handler/match_handler.cpp",
                                    "addPacketFuncToMap",
                                    44);
                                  common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4179LL);
                                  common::milog::MiLogStream::~MiLogStream(&v85);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  v74.m128i_i64[0] = (__int64)MatchHandler::onPlayerMatchSuccNotify;
                                  v74.m128i_i64[1] = 0LL;
                                  *(__m128i *)__f = _mm_load_si128(&v74);
                                  std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                    &v84,
                                    __f,
                                    (MatchHandler **)&__y,
                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                    v48,
                                    v49);
                                  __x = 4179;
                                  v50 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                    v50,
                                    &v84);
                                  __x = 4191;
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
                                      "./src/handler/match_handler.cpp",
                                      "addPacketFuncToMap",
                                      45);
                                    common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4191LL);
                                    common::milog::MiLogStream::~MiLogStream(&v85);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v75.m128i_i64[0] = (__int64)MatchHandler::onPlayerGeneralMatchDismissNotify;
                                    v75.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v75);
                                    std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                      &v84,
                                      __f,
                                      (MatchHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v51,
                                      v52);
                                    __x = 4191;
                                    v53 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                      v53,
                                      &v84);
                                    __x = 4192;
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
                                        "./src/handler/match_handler.cpp",
                                        "addPacketFuncToMap",
                                        46);
                                      common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4192LL);
                                      common::milog::MiLogStream::~MiLogStream(&v85);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v76.m128i_i64[0] = (__int64)MatchHandler::onPlayerGeneralMatchConfirmNotify;
                                      v76.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v76);
                                      std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                        &v84,
                                        __f,
                                        (MatchHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v54,
                                        v55);
                                      __x = 4192;
                                      v56 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                        v56,
                                        &v84);
                                      __x = 4164;
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
                                          "./src/handler/match_handler.cpp",
                                          "addPacketFuncToMap",
                                          47);
                                        common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4164LL);
                                        common::milog::MiLogStream::~MiLogStream(&v85);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        __x = 4164;
                                        v57 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MatchHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
                                          v57,
                                          (MatchHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 4173;
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
                                            "./src/handler/match_handler.cpp",
                                            "addPacketFuncToMap",
                                            49);
                                          common::milog::MiLogStream::operator()(&v85, off_2570C7C0, 4173LL);
                                          common::milog::MiLogStream::~MiLogStream(&v85);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v77.m128i_i64[0] = (__int64)MatchHandler::onPlayerGCGMatchDismissNotify;
                                          v77.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v77);
                                          std::bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>),MatchHandler*,std::_Placeholder<1> const&>(
                                            &v84,
                                            __f,
                                            (MatchHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v58,
                                            v59);
                                          __x = 4173;
                                          v60 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MatchHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MatchHandler*,std::_Placeholder<1>)>>(
                                            v60,
                                            &v84);
                                          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                            __asan_report_load8();
                                          if ( Player::addMsgForwardClient(thisa->player_, 0x1059u) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v85,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/match_handler.cpp",
                                              "addPacketFuncToMap",
                                              50);
                                            common::milog::MiLogStream::operator()(&v85, off_2571C2A0, 4185LL);
                                            common::milog::MiLogStream::~MiLogStream(&v85);
                                            return -1;
                                          }
                                          else
                                          {
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

// Line 47: range 0000000015119B82-0000000015119E9E
int __cdecl MatchHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const MatchHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MatchHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerGetForceQuitBanInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerGetForceQuitBanInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:47 64 16 10 rsp_ptr:47";
  *(_QWORD *)(v2 + 16) = MatchHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerGetForceQuitBanInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerGetForceQuitBanInfoReq const>(
         (const std::shared_ptr<const proto::PlayerGetForceQuitBanInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "operator()",
      47);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerGetForceQuitBanInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerGetForceQuitBanInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerGetForceQuitBanInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerGetForceQuitBanInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerGetForceQuitBanInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerGetForceQuitBanInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerGetForceQuitBanInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerGetForceQuitBanInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MatchHandler::onPlayerGetForceQuitBanInfoReq(this, v8, rsp_0);
    proto::PlayerGetForceQuitBanInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerGetForceQuitBanInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp>::~shared_ptr((std::shared_ptr<proto::PlayerGetForceQuitBanInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerGetForceQuitBanInfoReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerGetForceQuitBanInfoReq> *const)(v2 + 32));
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

// Line 56: range 000000001511BC06-000000001511BE0B
int32_t __cdecl MatchHandler::onPlayerStartMatchReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t started; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerStartMatchReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:57";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerStartMatchReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerStartMatchReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerStartMatchReq const>(
         (const std::shared_ptr<const proto::PlayerStartMatchReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerStartMatchReq",
      57);
    common::milog::MiLogStream::operator()(&v9, off_2571C380);
    common::milog::MiLogStream::~MiLogStream(&v9);
    started = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerStartMatchReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerStartMatchReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    started = PlayerMatchComp::onPlayerStartMatchReq(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerStartMatchReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerStartMatchReq> *const)(v2 + 32));
  result = started;
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

// Line 62: range 000000001511BE0C-000000001511C011
int32_t __cdecl MatchHandler::onPlayerCancelMatchReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerCancelMatchReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:63";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerCancelMatchReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerCancelMatchReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerCancelMatchReq const>(
         (const std::shared_ptr<const proto::PlayerCancelMatchReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerCancelMatchReq",
      63);
    common::milog::MiLogStream::operator()(&v9, off_2571C420);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerCancelMatchReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerCancelMatchReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerCancelMatchReq(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerCancelMatchReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerCancelMatchReq> *const)(v2 + 32));
  result = matched;
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

// Line 68: range 000000001511C012-000000001511C217
int32_t __cdecl MatchHandler::onPlayerConfirmMatchReq(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerConfirmMatchReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:69";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerConfirmMatchReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerConfirmMatchReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerConfirmMatchReq const>(
         (const std::shared_ptr<const proto::PlayerConfirmMatchReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerConfirmMatchReq",
      69);
    common::milog::MiLogStream::operator()(&v9, off_2571C4C0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerConfirmMatchReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerConfirmMatchReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerConfirmMatchReq(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerConfirmMatchReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerConfirmMatchReq> *const)(v2 + 32));
  result = matched;
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

// Line 74: range 000000001511C218-000000001511C41D
int32_t __cdecl MatchHandler::onPlayerMatchAgreedResultNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:75";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerMatchAgreedResultNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerMatchAgreedResultNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerMatchAgreedResultNotify const>(
         (const std::shared_ptr<const proto::PlayerMatchAgreedResultNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerMatchAgreedResultNotify",
      75);
    common::milog::MiLogStream::operator()(&v9, off_2571C580);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerMatchAgreedResultNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerMatchAgreedResultNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerMatchAgreedResultNotify> *const)(v2 + 32));
  result = matched;
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

// Line 80: range 000000001511C41E-000000001511C623
int32_t __cdecl MatchHandler::onPlayerApplyEnterMpAfterMatchAgreedNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerApplyEnterMpAfterMatchAgreedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:81";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerApplyEnterMpAfterMatchAgreedNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerApplyEnterMpAfterMatchAgreedNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerApplyEnterMpAfterMatchAgreedNotify const>(
         (const std::shared_ptr<const proto::PlayerApplyEnterMpAfterMatchAgreedNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      81);
    common::milog::MiLogStream::operator()(&v9, off_2571C660);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerApplyEnterMpAfterMatchAgreedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerApplyEnterMpAfterMatchAgreedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerApplyEnterMpAfterMatchAgreedNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerApplyEnterMpAfterMatchAgreedNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerApplyEnterMpAfterMatchAgreedNotify> *const)(v2 + 32));
  result = matched;
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

// Line 86: range 000000001511C624-000000001511C829
int32_t __cdecl MatchHandler::onAddMatchUnitRsp(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:87";
  *(_QWORD *)(v2 + 16) = MatchHandler::onAddMatchUnitRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddMatchUnitRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddMatchUnitRsp const>(
         (const std::shared_ptr<const proto::AddMatchUnitRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onAddMatchUnitRsp",
      87);
    common::milog::MiLogStream::operator()(&v9, off_2571C720);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::AddMatchUnitRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onAddMatchUnitRsp(MatchComp, proto);
  }
  std::shared_ptr<proto::AddMatchUnitRsp const>::~shared_ptr((std::shared_ptr<const proto::AddMatchUnitRsp> *const)(v2 + 32));
  result = matched;
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

// Line 92: range 000000001511C82A-000000001511CA2F
int32_t __cdecl MatchHandler::onRemoveMatchUnitRsp(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::RemoveMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:93";
  *(_QWORD *)(v2 + 16) = MatchHandler::onRemoveMatchUnitRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveMatchUnitRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveMatchUnitRsp const>(
         (const std::shared_ptr<const proto::RemoveMatchUnitRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onRemoveMatchUnitRsp",
      93);
    common::milog::MiLogStream::operator()(&v9, off_2571C7C0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::RemoveMatchUnitRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v5 = PlayerMatchComp::onRemoveMatchUnitRsp(MatchComp, proto);
  }
  std::shared_ptr<proto::RemoveMatchUnitRsp const>::~shared_ptr((std::shared_ptr<const proto::RemoveMatchUnitRsp> *const)(v2 + 32));
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

// Line 98: range 000000001511CA30-000000001511CC35
int32_t __cdecl MatchHandler::onConfirmGuestUnitRsp(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ConfirmGuestUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 proto_ptr:99";
  *(_QWORD *)(v2 + 16) = MatchHandler::onConfirmGuestUnitRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ConfirmGuestUnitRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ConfirmGuestUnitRsp const>(
         (const std::shared_ptr<const proto::ConfirmGuestUnitRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onConfirmGuestUnitRsp",
      99);
    common::milog::MiLogStream::operator()(&v9, off_2571C860);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::ConfirmGuestUnitRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ConfirmGuestUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v5 = PlayerMatchComp::onConfirmGuestUnitRsp(MatchComp, proto);
  }
  std::shared_ptr<proto::ConfirmGuestUnitRsp const>::~shared_ptr((std::shared_ptr<const proto::ConfirmGuestUnitRsp> *const)(v2 + 32));
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

// Line 104: range 000000001511CC36-000000001511CE59
int32_t __cdecl MatchHandler::onMatchStartNotify(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:105";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchStartNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchStartNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchStartNotify const>(
         (const std::shared_ptr<const proto::MatchStartNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchStartNotify",
      105);
    common::milog::MiLogStream::operator()(&v11, off_2571C900);
    common::milog::MiLogStream::~MiLogStream(&v11);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::MatchStartNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    matched = PlayerMatchComp::onMatchStartNotify(MatchComp, SourceAppId, proto);
  }
  std::shared_ptr<proto::MatchStartNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchStartNotify> *const)(v2 + 32));
  result = matched;
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

// Line 110: range 000000001511CE5A-000000001511D07D
int32_t __cdecl MatchHandler::onMatchUnitRemovedNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchUnitRemovedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:111";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchUnitRemovedNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchUnitRemovedNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchUnitRemovedNotify const>(
         (const std::shared_ptr<const proto::MatchUnitRemovedNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchUnitRemovedNotify",
      111);
    common::milog::MiLogStream::operator()(&v11, off_2571C9A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::MatchUnitRemovedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchUnitRemovedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    matched = PlayerMatchComp::onMatchUnitRemovedNotify(MatchComp, SourceAppId, proto);
  }
  std::shared_ptr<proto::MatchUnitRemovedNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchUnitRemovedNotify> *const)(v2 + 32));
  result = matched;
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

// Line 116: range 000000001511D07E-000000001511D2A1
int32_t __cdecl MatchHandler::onGuestUnitMatchSuccNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GuestUnitMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:117";
  *(_QWORD *)(v2 + 16) = MatchHandler::onGuestUnitMatchSuccNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GuestUnitMatchSuccNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GuestUnitMatchSuccNotify const>(
         (const std::shared_ptr<const proto::GuestUnitMatchSuccNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onGuestUnitMatchSuccNotify",
      117);
    common::milog::MiLogStream::operator()(&v11, off_2571CA60);
    common::milog::MiLogStream::~MiLogStream(&v11);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::GuestUnitMatchSuccNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GuestUnitMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    matched = PlayerMatchComp::onGuestUnitMatchSuccNotify(MatchComp, SourceAppId, proto);
  }
  std::shared_ptr<proto::GuestUnitMatchSuccNotify const>::~shared_ptr((std::shared_ptr<const proto::GuestUnitMatchSuccNotify> *const)(v2 + 32));
  result = matched;
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

// Line 122: range 000000001511D2A2-000000001511D4C5
int32_t __cdecl MatchHandler::onGuestUnitAgreedResultNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GuestUnitAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:123";
  *(_QWORD *)(v2 + 16) = MatchHandler::onGuestUnitAgreedResultNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GuestUnitAgreedResultNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GuestUnitAgreedResultNotify const>(
         (const std::shared_ptr<const proto::GuestUnitAgreedResultNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onGuestUnitAgreedResultNotify",
      123);
    common::milog::MiLogStream::operator()(&v11, off_2571CB20);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::GuestUnitAgreedResultNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GuestUnitAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    v5 = PlayerMatchComp::onGuestUnitAgreedResultNotify(MatchComp, SourceAppId, proto);
  }
  std::shared_ptr<proto::GuestUnitAgreedResultNotify const>::~shared_ptr((std::shared_ptr<const proto::GuestUnitAgreedResultNotify> *const)(v2 + 32));
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

// Line 128: range 000000001511D4C6-000000001511D6CB
int32_t __cdecl MatchHandler::onSyncMatchUnitRsp(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:129";
  *(_QWORD *)(v2 + 16) = MatchHandler::onSyncMatchUnitRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SyncMatchUnitRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SyncMatchUnitRsp const>(
         (const std::shared_ptr<const proto::SyncMatchUnitRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onSyncMatchUnitRsp",
      129);
    common::milog::MiLogStream::operator()(&v9, off_2571CBE0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::SyncMatchUnitRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onSyncMatchUnitRsp(MatchComp, proto);
  }
  std::shared_ptr<proto::SyncMatchUnitRsp const>::~shared_ptr((std::shared_ptr<const proto::SyncMatchUnitRsp> *const)(v2 + 32));
  result = matched;
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

// Line 134: range 000000001511D6CC-000000001511D8EF
int32_t __cdecl MatchHandler::onMatchIdentityNotify(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // r14
  common::minet::Packet *v7; // rax
  uint32_t SourceAppId; // ecx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::MatchIdentityNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:135";
  *(_QWORD *)(v2 + 16) = MatchHandler::onMatchIdentityNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchIdentityNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchIdentityNotify const>(
         (const std::shared_ptr<const proto::MatchIdentityNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onMatchIdentityNotify",
      135);
    common::milog::MiLogStream::operator()(&v11, off_2571CC80);
    common::milog::MiLogStream::~MiLogStream(&v11);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::MatchIdentityNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchIdentityNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SourceAppId = common::minet::Packet::getSourceAppId(v7);
    matched = PlayerMatchComp::onMatchIdentityNotify(MatchComp, SourceAppId, proto);
  }
  std::shared_ptr<proto::MatchIdentityNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchIdentityNotify> *const)(v2 + 32));
  result = matched;
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

// Line 140: range 000000001511D8F0-000000001511DAF5
int32_t __cdecl MatchHandler::onGeneralMatchFinishNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GeneralMatchFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:141";
  *(_QWORD *)(v2 + 16) = MatchHandler::onGeneralMatchFinishNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GeneralMatchFinishNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GeneralMatchFinishNotify const>(
         (const std::shared_ptr<const proto::GeneralMatchFinishNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onGeneralMatchFinishNotify",
      141);
    common::milog::MiLogStream::operator()(&v9, off_2571CD20);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::GeneralMatchFinishNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GeneralMatchFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onGeneralMatchFinishNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::GeneralMatchFinishNotify const>::~shared_ptr((std::shared_ptr<const proto::GeneralMatchFinishNotify> *const)(v2 + 32));
  result = matched;
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

// Line 146: range 000000001511DAF6-000000001511DCFB
int32_t __cdecl MatchHandler::onPlayerMatchSuccNotify(MatchHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:147";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerMatchSuccNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerMatchSuccNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerMatchSuccNotify const>(
         (const std::shared_ptr<const proto::PlayerMatchSuccNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerMatchSuccNotify",
      147);
    common::milog::MiLogStream::operator()(&v9, off_2571CDE0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerMatchSuccNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerMatchSuccNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerMatchSuccNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerMatchSuccNotify> *const)(v2 + 32));
  result = matched;
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

// Line 152: range 000000001511DCFC-000000001511DF01
int32_t __cdecl MatchHandler::onPlayerGeneralMatchDismissNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerGeneralMatchDismissNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:153";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerGeneralMatchDismissNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerGeneralMatchDismissNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerGeneralMatchDismissNotify const>(
         (const std::shared_ptr<const proto::PlayerGeneralMatchDismissNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerGeneralMatchDismissNotify",
      153);
    common::milog::MiLogStream::operator()(&v9, off_2571CEC0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerGeneralMatchDismissNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerGeneralMatchDismissNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerGeneralMatchDismissNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerGeneralMatchDismissNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerGeneralMatchDismissNotify> *const)(v2 + 32));
  result = matched;
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

// Line 158: range 000000001511DF02-000000001511E107
int32_t __cdecl MatchHandler::onPlayerGeneralMatchConfirmNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t matched; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerGeneralMatchConfirmNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:159";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerGeneralMatchConfirmNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerGeneralMatchConfirmNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerGeneralMatchConfirmNotify const>(
         (const std::shared_ptr<const proto::PlayerGeneralMatchConfirmNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerGeneralMatchConfirmNotify",
      159);
    common::milog::MiLogStream::operator()(&v9, off_2571CFA0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    matched = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerGeneralMatchConfirmNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerGeneralMatchConfirmNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    matched = PlayerMatchComp::onPlayerGeneralMatchConfirmNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerGeneralMatchConfirmNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerGeneralMatchConfirmNotify> *const)(v2 + 32));
  result = matched;
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

// Line 164: range 000000001511E108-000000001511E30D
int32_t __cdecl MatchHandler::onPlayerGCGMatchDismissNotify(
        MatchHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::PlayerGCGMatchDismissNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *proto; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 proto_ptr:165";
  *(_QWORD *)(v2 + 16) = MatchHandler::onPlayerGCGMatchDismissNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerGCGMatchDismissNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerGCGMatchDismissNotify const>(
         (const std::shared_ptr<const proto::PlayerGCGMatchDismissNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/match_handler.cpp",
      "onPlayerGCGMatchDismissNotify",
      165);
    common::milog::MiLogStream::operator()(&v9, off_2571D060);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    proto = std::__shared_ptr_access<proto::PlayerGCGMatchDismissNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerGCGMatchDismissNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    v5 = PlayerMatchComp::onPlayerGCGMatchDismissNotify(MatchComp, proto);
  }
  std::shared_ptr<proto::PlayerGCGMatchDismissNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerGCGMatchDismissNotify> *const)(v2 + 32));
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

// Line 170: range 000000001511E30E-000000001511E713
int32_t __cdecl MatchHandler::onPlayerGetForceQuitBanInfoReq(
        MatchHandler *const this,
        const proto::PlayerGetForceQuitBanInfoReq *req,
        proto::PlayerGetForceQuitBanInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Player *v6; // rax
  std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerMatchComp *MatchComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  uint32_t match_id; // [rsp+24h] [rbp-ECh]
  uint32_t punish_times; // [rsp+28h] [rbp-E8h]
  uint32_t punish_time; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-E0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 13 scene_ptr:171 64 16 20 owner_player_ptr:176 96 16 16 activity_ptr:181 128 16 12 play_ptr:186";
  *(_QWORD *)(v3 + 16) = MatchHandler::onPlayerGetForceQuitBanInfoReq;
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
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Scene::getOwnPlayer((const Scene *const)(v3 + 64));
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Player::getActivityComp(v6);
      PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v3 + 96));
      if ( !std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v3 + 96)) )
      {
        std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v3 + 128));
        if ( !std::operator==<HideAndSeekMultistagePlay>(
                0LL,
                (const std::shared_ptr<HideAndSeekMultistagePlay> *)(v3 + 128)) )
        {
          v7 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          match_id = HideAndSeekMultistagePlay::getMatchId(v7);
          if ( match_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MatchComp = Player::getMatchComp(this->player_);
            punish_times = PlayerMatchComp::getMatchPunishTimes(MatchComp, match_id);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v15);
            v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
            punish_time = MatchExcelConfigMgr::getMatchPunishTime(
                            &v9->design_config.txt_config_mgr.match_config_mgr,
                            punish_times + 1);
            std::shared_ptr<Config>::~shared_ptr(&v15);
            proto::PlayerGetForceQuitBanInfoRsp::set_match_id(rsp_0, match_id);
            proto::PlayerGetForceQuitBanInfoRsp::set_expire_time(rsp_0, punish_time);
          }
        }
        std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v3 + 128));
      }
      std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v3 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = 0;
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
  return result;
};
