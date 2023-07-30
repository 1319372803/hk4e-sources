// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mail_handler.cpp

// Line 23: range 000000001511747C-0000000015118775
int32_t __cdecl MailHandler::addPacketFuncToMap(MailHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  MailHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  MailHandler **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  MailHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  MailHandler **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  MailHandler **v19; // r8
  const std::_Placeholder<1> *v20; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v21; // rax
  MailHandler **v22; // r8
  const std::_Placeholder<1> *v23; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v24; // rax
  MailHandler **v25; // r8
  const std::_Placeholder<1> *v26; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v27; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  MailHandler **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v31; // rax
  MailHandler **v32; // r8
  const std::_Placeholder<1> *v33; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v34; // rax
  __m128i v35; // [rsp+0h] [rbp-120h] BYREF
  __m128i v36; // [rsp+10h] [rbp-110h] BYREF
  __m128i v37; // [rsp+20h] [rbp-100h] BYREF
  __m128i v38; // [rsp+30h] [rbp-F0h] BYREF
  __m128i v39; // [rsp+40h] [rbp-E0h] BYREF
  __m128i v40; // [rsp+50h] [rbp-D0h] BYREF
  __m128i v41; // [rsp+60h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+70h] [rbp-B0h]
  MailHandler *thisa; // [rsp+78h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+8Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v45; // [rsp+90h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+98h] [rbp-88h] BYREF
  int (*__f[2])(MailHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+A0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,const std::_Placeholder<1>&>::type v48; // [rsp+B0h] [rbp-70h] BYREF
  common::milog::MiLogStream v49; // [rsp+D0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 1490;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v45, &__y) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/mail_handler.cpp",
      "addPacketFuncToMap",
      24);
    common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1490LL);
    common::milog::MiLogStream::~MiLogStream(&v49);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __x = 1490;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1431;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v45, &__y) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mail_handler.cpp",
        "addPacketFuncToMap",
        25);
      common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1431LL);
      common::milog::MiLogStream::~MiLogStream(&v49);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(MailHandler *, std::shared_ptr<common::minet::Packet>))MailHandler::onGetAllMailReq;
      __f[1] = 0LL;
      std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
        &v48,
        __f,
        (MailHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v4,
        v5);
      __x = 1431;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
        v6,
        &v48);
      __x = 1421;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v45, &__y) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mail_handler.cpp",
          "addPacketFuncToMap",
          26);
        common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1421LL);
        common::milog::MiLogStream::~MiLogStream(&v49);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(MailHandler *, std::shared_ptr<common::minet::Packet>))MailHandler::onDelMailReq;
        __f[1] = 0LL;
        std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
          &v48,
          __f,
          (MailHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v7,
          v8);
        __x = 1421;
        v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
          v9,
          &v48);
        __x = 1412;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v45, &__y) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/mail_handler.cpp",
            "addPacketFuncToMap",
            27);
          common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1412LL);
          common::milog::MiLogStream::~MiLogStream(&v49);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __x = 1412;
          v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
            v10,
            (MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 1448;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v45, &__y) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/mail_handler.cpp",
              "addPacketFuncToMap",
              28);
            common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1448LL);
            common::milog::MiLogStream::~MiLogStream(&v49);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __x = 1448;
            v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
              v11,
              (MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 1435;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v45, &__y) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/mail_handler.cpp",
                "addPacketFuncToMap",
                29);
              common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1435LL);
              common::milog::MiLogStream::~MiLogStream(&v49);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v35.m128i_i64[0] = (__int64)MailHandler::onGetMailItemReq;
              v35.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v35);
              std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                &v48,
                __f,
                (MailHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v12,
                v13);
              __x = 1435;
              v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                v14,
                &v48);
              __x = 1497;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v45, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/mail_handler.cpp",
                  "addPacketFuncToMap",
                  30);
                common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 1497LL);
                common::milog::MiLogStream::~MiLogStream(&v49);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __x = 1497;
                v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
                  v15,
                  (MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 10321;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v45, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/mail_handler.cpp",
                    "addPacketFuncToMap",
                    31);
                  common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10321LL);
                  common::milog::MiLogStream::~MiLogStream(&v49);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v36.m128i_i64[0] = (__int64)MailHandler::onGetRedisMailRsp;
                  v36.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v36);
                  std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                    &v48,
                    __f,
                    (MailHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v16,
                    v17);
                  __x = 10321;
                  v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                    v18,
                    &v48);
                  __x = 10335;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v45, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v49,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/mail_handler.cpp",
                      "addPacketFuncToMap",
                      32);
                    common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10335LL);
                    common::milog::MiLogStream::~MiLogStream(&v49);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v37.m128i_i64[0] = (__int64)MailHandler::onDelRedisMailRsp;
                    v37.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v37);
                    std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                      &v48,
                      __f,
                      (MailHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v19,
                      v20);
                    __x = 10335;
                    v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                      v21,
                      &v48);
                    __x = 10305;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v45, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v49,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/mail_handler.cpp",
                        "addPacketFuncToMap",
                        33);
                      common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10305LL);
                      common::milog::MiLogStream::~MiLogStream(&v49);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v38.m128i_i64[0] = (__int64)MailHandler::onUpdateRedisMailRsp;
                      v38.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v38);
                      std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                        &v48,
                        __f,
                        (MailHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v22,
                        v23);
                      __x = 10305;
                      v24 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                        v24,
                        &v48);
                      __x = 10398;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v45, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v49,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/mail_handler.cpp",
                          "addPacketFuncToMap",
                          34);
                        common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10398LL);
                        common::milog::MiLogStream::~MiLogStream(&v49);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v39.m128i_i64[0] = (__int64)MailHandler::onAddRedisMailRsp;
                        v39.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v39);
                        std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                          &v48,
                          __f,
                          (MailHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v25,
                          v26);
                        __x = 10398;
                        v27 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                          v27,
                          &v48);
                        __x = 10303;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v45, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v49,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/mail_handler.cpp",
                            "addPacketFuncToMap",
                            35);
                          common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10303LL);
                          common::milog::MiLogStream::~MiLogStream(&v49);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          __x = 10303;
                          v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                            v28,
                            (MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 10347;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v45, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v49,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/mail_handler.cpp",
                              "addPacketFuncToMap",
                              36);
                            common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10347LL);
                            common::milog::MiLogStream::~MiLogStream(&v49);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v40.m128i_i64[0] = (__int64)MailHandler::onGetRedisMailTransactionStatusRsp;
                            v40.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v40);
                            std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                              &v48,
                              __f,
                              (MailHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v29,
                              v30);
                            __x = 10347;
                            v31 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                              v31,
                              &v48);
                            __x = 10365;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v45._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v45, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v49,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/mail_handler.cpp",
                                "addPacketFuncToMap",
                                37);
                              common::milog::MiLogStream::operator()(&v49, off_2570C7C0, 10365LL);
                              common::milog::MiLogStream::~MiLogStream(&v49);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v41.m128i_i64[0] = (__int64)MailHandler::onResendRedisMailRsp;
                              v41.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v41);
                              std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                                &v48,
                                __f,
                                (MailHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v32,
                                v33);
                              __x = 10365;
                              v34 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                                v34,
                                &v48);
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
};

// Line 24: range 00000000151169CE-0000000015116CEA
int __cdecl MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MailHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAuthkeyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAuthkeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAuthkeyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:24 64 16 10 rsp_ptr:24";
  *(_QWORD *)(v2 + 16) = MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAuthkeyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAuthkeyReq const>((const std::shared_ptr<const proto::GetAuthkeyReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "operator()",
      24);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAuthkeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAuthkeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAuthkeyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAuthkeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAuthkeyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAuthkeyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAuthkeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAuthkeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MailHandler::onGetAuthkeyReq(this, v8, rsp_0);
    proto::GetAuthkeyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAuthkeyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAuthkeyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAuthkeyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAuthkeyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAuthkeyRsp>::~shared_ptr((std::shared_ptr<proto::GetAuthkeyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAuthkeyReq const>::~shared_ptr((std::shared_ptr<const proto::GetAuthkeyReq> *const)(v2 + 32));
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

// Line 27: range 0000000015116CEC-0000000015116ECE
int __cdecl MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int MailNotify; // r14d
  MailHandler *this; // r14
  std::__shared_ptr_access<const proto::ReadMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:27";
  *(_QWORD *)(v2 + 16) = MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReadMailNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReadMailNotify const>(
         (const std::shared_ptr<const proto::ReadMailNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "operator()",
      27);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    MailNotify = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ReadMailNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReadMailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MailNotify = MailHandler::onReadMailNotify(this, v7);
  }
  std::shared_ptr<proto::ReadMailNotify const>::~shared_ptr((std::shared_ptr<const proto::ReadMailNotify> *const)(v2 + 32));
  result = MailNotify;
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

// Line 28: range 0000000015116ED0-00000000151170B2
int __cdecl MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  MailHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeMailStarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:28";
  *(_QWORD *)(v2 + 16) = MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeMailStarNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeMailStarNotify const>(
         (const std::shared_ptr<const proto::ChangeMailStarNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::ChangeMailStarNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeMailStarNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = MailHandler::onChangeMailStarNotify(this, v7);
  }
  std::shared_ptr<proto::ChangeMailStarNotify const>::~shared_ptr((std::shared_ptr<const proto::ChangeMailStarNotify> *const)(v2 + 32));
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

// Line 30: range 00000000151170B4-0000000015117296
int __cdecl MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int AllMailNotify; // r14d
  MailHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAllMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:30";
  *(_QWORD *)(v2 + 16) = MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllMailNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllMailNotify const>(
         (const std::shared_ptr<const proto::GetAllMailNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    AllMailNotify = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::GetAllMailNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllMailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AllMailNotify = MailHandler::onGetAllMailNotify(this, v7);
  }
  std::shared_ptr<proto::GetAllMailNotify const>::~shared_ptr((std::shared_ptr<const proto::GetAllMailNotify> *const)(v2 + 32));
  result = AllMailNotify;
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

// Line 35: range 0000000015117298-000000001511747A
int __cdecl MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const MailHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  MailHandler *this; // r14
  std::__shared_ptr_access<const proto::RedisMailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:35";
  *(_QWORD *)(v2 + 16) = MailHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RedisMailChangeNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RedisMailChangeNotify const>(
         (const std::shared_ptr<const proto::RedisMailChangeNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::RedisMailChangeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RedisMailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = MailHandler::onRedisMailChangeNotify(this, v7);
  }
  std::shared_ptr<proto::RedisMailChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::RedisMailChangeNotify> *const)(v2 + 32));
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

// Line 43: range 0000000015118776-00000000151187D6
int32_t __cdecl MailHandler::onGetAuthkeyReq(
        MailHandler *const this,
        const proto::GetAuthkeyReq *req,
        proto::GetAuthkeyRsp *rsp_0)
{
  PlayerMailComp *MailComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MailComp = Player::getMailComp(this->player_);
  return PlayerMailComp::getAuthkey(MailComp, req, rsp_0);
};

// Line 48: range 00000000151187D8-00000000151189DD
int32_t __cdecl MailHandler::onGetAllMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t AllMailReq; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetAllMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:49";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetAllMailReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllMailReq const>((const std::shared_ptr<const proto::GetAllMailReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetAllMailReq",
      49);
    common::milog::MiLogStream::operator()(&v9, off_2571ADC0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    AllMailReq = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetAllMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    AllMailReq = PlayerMailComp::onGetAllMailReq(MailComp, req);
  }
  std::shared_ptr<proto::GetAllMailReq const>::~shared_ptr((std::shared_ptr<const proto::GetAllMailReq> *const)(v2 + 32));
  result = AllMailReq;
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

// Line 54: range 00000000151189DE-0000000015118BE3
int32_t __cdecl MailHandler::onDelMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::DelMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:55";
  *(_QWORD *)(v2 + 16) = MailHandler::onDelMailReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DelMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DelMailReq const>((const std::shared_ptr<const proto::DelMailReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onDelMailReq",
      55);
    common::milog::MiLogStream::operator()(&v9, off_2571AE60);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::DelMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DelMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    v5 = PlayerMailComp::onDelMailReq(MailComp, req);
  }
  std::shared_ptr<proto::DelMailReq const>::~shared_ptr((std::shared_ptr<const proto::DelMailReq> *const)(v2 + 32));
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

// Line 60: range 0000000015118BE4-0000000015118C41
int32_t __cdecl MailHandler::onReadMailNotify(MailHandler *const this, const proto::ReadMailNotify *notify)
{
  PlayerMailComp *MailComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MailComp = Player::getMailComp(this->player_);
  PlayerMailComp::onReadMailNotify(MailComp, notify);
  return 0;
};

// Line 66: range 0000000015118C42-0000000015118C9F
int32_t __cdecl MailHandler::onChangeMailStarNotify(MailHandler *const this, const proto::ChangeMailStarNotify *notify)
{
  PlayerMailComp *MailComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MailComp = Player::getMailComp(this->player_);
  PlayerMailComp::onChangeMailStarNotify(MailComp, notify);
  return 0;
};

// Line 72: range 0000000015118CA0-0000000015118EA5
int32_t __cdecl MailHandler::onGetMailItemReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t MailItemReq; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetMailItemReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 req_ptr:73";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetMailItemReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetMailItemReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetMailItemReq const>(
         (const std::shared_ptr<const proto::GetMailItemReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetMailItemReq",
      73);
    common::milog::MiLogStream::operator()(&v9, off_2571AF00);
    common::milog::MiLogStream::~MiLogStream(&v9);
    MailItemReq = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetMailItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMailItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    MailItemReq = PlayerMailComp::onGetMailItemReq(MailComp, req);
  }
  std::shared_ptr<proto::GetMailItemReq const>::~shared_ptr((std::shared_ptr<const proto::GetMailItemReq> *const)(v2 + 32));
  result = MailItemReq;
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

// Line 78: range 0000000015118EA6-0000000015118EFE
int32_t __cdecl MailHandler::onGetAllMailNotify(MailHandler *const this, const proto::GetAllMailNotify *notify)
{
  PlayerMailComp *MailComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MailComp = Player::getMailComp(this->player_);
  return PlayerMailComp::onGetAllMailNotify(MailComp, notify);
};

// Line 83: range 0000000015118F00-0000000015119105
int32_t __cdecl MailHandler::onGetRedisMailRsp(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t RedisMailRsp; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 rsp_ptr:84";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRedisMailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetRedisMailRsp const>(
         (const std::shared_ptr<const proto::GetRedisMailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailRsp",
      84);
    common::milog::MiLogStream::operator()(&v9, off_2571AFA0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    RedisMailRsp = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetRedisMailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    RedisMailRsp = PlayerMailComp::onGetRedisMailRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::GetRedisMailRsp const>::~shared_ptr((std::shared_ptr<const proto::GetRedisMailRsp> *const)(v2 + 32));
  result = RedisMailRsp;
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

// Line 89: range 0000000015119106-000000001511930B
int32_t __cdecl MailHandler::onDelRedisMailRsp(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::DelRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 rsp_ptr:90";
  *(_QWORD *)(v2 + 16) = MailHandler::onDelRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DelRedisMailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DelRedisMailRsp const>(
         (const std::shared_ptr<const proto::DelRedisMailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onDelRedisMailRsp",
      90);
    common::milog::MiLogStream::operator()(&v9, off_2571B040);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::DelRedisMailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DelRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    v5 = PlayerMailComp::onDelRedisMailRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::DelRedisMailRsp const>::~shared_ptr((std::shared_ptr<const proto::DelRedisMailRsp> *const)(v2 + 32));
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

// Line 95: range 000000001511930C-0000000015119511
int32_t __cdecl MailHandler::onUpdateRedisMailRsp(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t updated; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::UpdateRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 10 rsp_ptr:96";
  *(_QWORD *)(v2 + 16) = MailHandler::onUpdateRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdateRedisMailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdateRedisMailRsp const>(
         (const std::shared_ptr<const proto::UpdateRedisMailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onUpdateRedisMailRsp",
      96);
    common::milog::MiLogStream::operator()(&v9, off_2571B0E0);
    common::milog::MiLogStream::~MiLogStream(&v9);
    updated = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::UpdateRedisMailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdateRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    updated = PlayerMailComp::onUpdateRedisMailRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::UpdateRedisMailRsp const>::~shared_ptr((std::shared_ptr<const proto::UpdateRedisMailRsp> *const)(v2 + 32));
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

// Line 101: range 0000000015119512-0000000015119717
int32_t __cdecl MailHandler::onAddRedisMailRsp(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::AddRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:102";
  *(_QWORD *)(v2 + 16) = MailHandler::onAddRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddRedisMailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddRedisMailRsp const>(
         (const std::shared_ptr<const proto::AddRedisMailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onAddRedisMailRsp",
      102);
    common::milog::MiLogStream::operator()(&v9, off_2571B180);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::AddRedisMailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    v5 = PlayerMailComp::onAddRedisMailRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::AddRedisMailRsp const>::~shared_ptr((std::shared_ptr<const proto::AddRedisMailRsp> *const)(v2 + 32));
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

// Line 107: range 0000000015119718-0000000015119775
int32_t __cdecl MailHandler::onRedisMailChangeNotify(
        MailHandler *const this,
        const proto::RedisMailChangeNotify *notify)
{
  PlayerMailComp *MailComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MailComp = Player::getMailComp(this->player_);
  PlayerMailComp::onRedisMailChangeNotify(MailComp, notify);
  return 0;
};

// Line 113: range 0000000015119776-000000001511997B
int32_t __cdecl MailHandler::onGetRedisMailTransactionStatusRsp(
        MailHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t RedisMailTransactionStatusRsp; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetRedisMailTransactionStatusRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:114";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetRedisMailTransactionStatusRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRedisMailTransactionStatusRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetRedisMailTransactionStatusRsp const>(
         (const std::shared_ptr<const proto::GetRedisMailTransactionStatusRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailTransactionStatusRsp",
      114);
    common::milog::MiLogStream::operator()(&v9, off_2571B240);
    common::milog::MiLogStream::~MiLogStream(&v9);
    RedisMailTransactionStatusRsp = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetRedisMailTransactionStatusRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRedisMailTransactionStatusRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    RedisMailTransactionStatusRsp = PlayerMailComp::onGetRedisMailTransactionStatusRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::GetRedisMailTransactionStatusRsp const>::~shared_ptr((std::shared_ptr<const proto::GetRedisMailTransactionStatusRsp> *const)(v2 + 32));
  result = RedisMailTransactionStatusRsp;
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

// Line 119: range 000000001511997C-0000000015119B81
int32_t __cdecl MailHandler::onResendRedisMailRsp(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerMailComp *MailComp; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ResendRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:120";
  *(_QWORD *)(v2 + 16) = MailHandler::onResendRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ResendRedisMailRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ResendRedisMailRsp const>(
         (const std::shared_ptr<const proto::ResendRedisMailRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onResendRedisMailRsp",
      120);
    common::milog::MiLogStream::operator()(&v9, off_2571B300);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::ResendRedisMailRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ResendRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MailComp = Player::getMailComp(this->player_);
    v5 = PlayerMailComp::onResendRedisMailRsp(MailComp, rsp_0);
  }
  std::shared_ptr<proto::ResendRedisMailRsp const>::~shared_ptr((std::shared_ptr<const proto::ResendRedisMailRsp> *const)(v2 + 32));
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
