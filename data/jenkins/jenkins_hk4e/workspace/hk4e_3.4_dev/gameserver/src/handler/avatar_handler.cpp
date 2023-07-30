// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/avatar_handler.cpp

// Line 41: range 00000000130EA936-00000000130EC79D
int32_t __cdecl AvatarHandler::addPacketFuncToMap(AvatarHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  AvatarHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v21; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  AvatarHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v27; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v30; // rax
  AvatarHandler **v31; // r8
  const std::_Placeholder<1> *v32; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v33; // rax
  __m128i v34; // [rsp+0h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+10h] [rbp-B0h]
  AvatarHandler *thisa; // [rsp+18h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+2Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v38; // [rsp+30h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+38h] [rbp-88h] BYREF
  int (*__f[2])(AvatarHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+40h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>),AvatarHandler*,const std::_Placeholder<1>&>::type v41; // [rsp+50h] [rbp-70h] BYREF
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 1748;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v38, &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/avatar_handler.cpp",
      "addPacketFuncToMap",
      42);
    common::milog::MiLogStream::operator()(&v42, format, 1748LL);
    common::milog::MiLogStream::~MiLogStream(&v42);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __x = 1748;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1690;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v38, &__y) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/avatar_handler.cpp",
        "addPacketFuncToMap",
        43);
      common::milog::MiLogStream::operator()(&v42, format, 1690LL);
      common::milog::MiLogStream::~MiLogStream(&v42);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __x = 1690;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 1743;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v38, &__y) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/avatar_handler.cpp",
          "addPacketFuncToMap",
          44);
        common::milog::MiLogStream::operator()(&v42, format, 1743LL);
        common::milog::MiLogStream::~MiLogStream(&v42);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __x = 1743;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 1796;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v38, &__y) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/avatar_handler.cpp",
            "addPacketFuncToMap",
            45);
          common::milog::MiLogStream::operator()(&v42, format, 1796LL);
          common::milog::MiLogStream::~MiLogStream(&v42);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __x = 1796;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_mapa,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 1640;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v38, &__y) )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/avatar_handler.cpp",
              "addPacketFuncToMap",
              46);
            common::milog::MiLogStream::operator()(&v42, format, 1640LL);
            common::milog::MiLogStream::~MiLogStream(&v42);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __x = 1640;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_mapa,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 1770;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v38, &__y) )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/avatar_handler.cpp",
                "addPacketFuncToMap",
                47);
              common::milog::MiLogStream::operator()(&v42, format, 1770LL);
              common::milog::MiLogStream::~MiLogStream(&v42);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __x = 1770;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_mapa,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 1664;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v38, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/avatar_handler.cpp",
                  "addPacketFuncToMap",
                  48);
                common::milog::MiLogStream::operator()(&v42, format, 1664LL);
                common::milog::MiLogStream::~MiLogStream(&v42);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __x = 1664;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_mapa,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 1610;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v38, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v42,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/avatar_handler.cpp",
                    "addPacketFuncToMap",
                    49);
                  common::milog::MiLogStream::operator()(&v42, format, 1610LL);
                  common::milog::MiLogStream::~MiLogStream(&v42);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  __x = 1610;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 1785;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v38, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v42,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/avatar_handler.cpp",
                      "addPacketFuncToMap",
                      50);
                    common::milog::MiLogStream::operator()(&v42, format, 1785LL);
                    common::milog::MiLogStream::~MiLogStream(&v42);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    __x = 1785;
                    v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                      v11,
                      (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 1722;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v38, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v42,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/avatar_handler.cpp",
                        "addPacketFuncToMap",
                        51);
                      common::milog::MiLogStream::operator()(&v42, format, 1722LL);
                      common::milog::MiLogStream::~MiLogStream(&v42);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      __x = 1722;
                      v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                        v12,
                        (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 1715;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v38, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v42,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/avatar_handler.cpp",
                          "addPacketFuncToMap",
                          52);
                        common::milog::MiLogStream::operator()(&v42, format, 1715LL);
                        common::milog::MiLogStream::~MiLogStream(&v42);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        __x = 1715;
                        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                          v13,
                          (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 1752;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v38, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v42,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/avatar_handler.cpp",
                            "addPacketFuncToMap",
                            53);
                          common::milog::MiLogStream::operator()(&v42, format, 1752LL);
                          common::milog::MiLogStream::~MiLogStream(&v42);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          __x = 1752;
                          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                            v14,
                            (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 1623;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v38, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v42,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/avatar_handler.cpp",
                              "addPacketFuncToMap",
                              54);
                            common::milog::MiLogStream::operator()(&v42, format, 1623LL);
                            common::milog::MiLogStream::~MiLogStream(&v42);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            __x = 1623;
                            v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                              v15,
                              (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 1708;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v38, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v42,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/avatar_handler.cpp",
                                "addPacketFuncToMap",
                                55);
                              common::milog::MiLogStream::operator()(&v42, format, 1708LL);
                              common::milog::MiLogStream::~MiLogStream(&v42);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              __x = 1708;
                              v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                v16,
                                (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 1603;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v38, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v42,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/avatar_handler.cpp",
                                  "addPacketFuncToMap",
                                  56);
                                common::milog::MiLogStream::operator()(&v42, format, 1603LL);
                                common::milog::MiLogStream::~MiLogStream(&v42);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v34.m128i_i64[0] = (__int64)AvatarHandler::onChangeTeamNameReq;
                                v34.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v34);
                                std::bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>),AvatarHandler*,std::_Placeholder<1> const&>(
                                  &v41,
                                  __f,
                                  (AvatarHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v17,
                                  v18);
                                __x = 1603;
                                v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AvatarHandler*,std::_Placeholder<1>)>>(
                                  v19,
                                  &v41);
                                __x = 1654;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v38, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v42,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/avatar_handler.cpp",
                                    "addPacketFuncToMap",
                                    57);
                                  common::milog::MiLogStream::operator()(&v42, format, 1654LL);
                                  common::milog::MiLogStream::~MiLogStream(&v42);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  __x = 1654;
                                  v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                    v20,
                                    (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 1737;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v38, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v42,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/avatar_handler.cpp",
                                      "addPacketFuncToMap",
                                      58);
                                    common::milog::MiLogStream::operator()(&v42, format, 1737LL);
                                    common::milog::MiLogStream::~MiLogStream(&v42);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    __x = 1737;
                                    v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                      v21,
                                      (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 1653;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v38, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v42,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/avatar_handler.cpp",
                                        "addPacketFuncToMap",
                                        59);
                                      common::milog::MiLogStream::operator()(&v42, format, 1653LL);
                                      common::milog::MiLogStream::~MiLogStream(&v42);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      __x = 1653;
                                      v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                        v22,
                                        (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 1696;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v38, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v42,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/avatar_handler.cpp",
                                          "addPacketFuncToMap",
                                          60);
                                        common::milog::MiLogStream::operator()(&v42, format, 1696LL);
                                        common::milog::MiLogStream::~MiLogStream(&v42);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        __x = 1696;
                                        v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                          v23,
                                          (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 1778;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v38, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v42,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/avatar_handler.cpp",
                                            "addPacketFuncToMap",
                                            61);
                                          common::milog::MiLogStream::operator()(&v42, format, 1778LL);
                                          common::milog::MiLogStream::~MiLogStream(&v42);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          __f[0] = (int (*)(AvatarHandler *, std::shared_ptr<common::minet::Packet>))AvatarHandler::onAvatarChangeCostumeReq;
                                          __f[1] = 0LL;
                                          std::bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>),AvatarHandler*,std::_Placeholder<1> const&>(
                                            &v41,
                                            __f,
                                            (AvatarHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v24,
                                            v25);
                                          __x = 1778;
                                          v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AvatarHandler*,std::_Placeholder<1>)>>(
                                            v26,
                                            &v41);
                                          __x = 1711;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v38, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v42,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/avatar_handler.cpp",
                                              "addPacketFuncToMap",
                                              62);
                                            common::milog::MiLogStream::operator()(&v42, format, 1711LL);
                                            common::milog::MiLogStream::~MiLogStream(&v42);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            __x = 1711;
                                            v27 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}>(
                                              v27,
                                              (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                            __x = 1684;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v38, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v42,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/avatar_handler.cpp",
                                                "addPacketFuncToMap",
                                                63);
                                              common::milog::MiLogStream::operator()(&v42, format, 1684LL);
                                              common::milog::MiLogStream::~MiLogStream(&v42);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              __x = 1684;
                                              v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}>(
                                                v28,
                                                (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                              __x = 1687;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v38, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v42,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/avatar_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  64);
                                                common::milog::MiLogStream::operator()(&v42, format, 1687LL);
                                                common::milog::MiLogStream::~MiLogStream(&v42);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                __x = 1687;
                                                v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}>(
                                                  v29,
                                                  (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                __x = 1731;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v38, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v42,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/avatar_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    65);
                                                  common::milog::MiLogStream::operator()(&v42, format, 1731LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v42);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  __x = 1731;
                                                  v30 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}>(
                                                    v30,
                                                    (AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                                  __x = 1750;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v38._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v38, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v42,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/avatar_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      66);
                                                    common::milog::MiLogStream::operator()(&v42, format, 1750LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v42);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    __f[0] = (int (*)(AvatarHandler *, std::shared_ptr<common::minet::Packet>))AvatarHandler::onItemRenameAvatarReq;
                                                    __f[1] = 0LL;
                                                    std::bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>),AvatarHandler*,std::_Placeholder<1> const&>(
                                                      &v41,
                                                      __f,
                                                      (AvatarHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v31,
                                                      v32);
                                                    __x = 1750;
                                                    v33 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AvatarHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AvatarHandler*,std::_Placeholder<1>)>>(
                                                      v33,
                                                      &v41);
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
};

// Line 42: range 00000000130E64A2-00000000130E67BE
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::SpringUseReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SpringUseRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SpringUseRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:42 64 16 10 rsp_ptr:42";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SpringUseReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SpringUseReq const>((const std::shared_ptr<const proto::SpringUseReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SpringUseReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SpringUseReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SpringUseRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SpringUseRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SpringUseRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SpringUseRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SpringUseReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SpringUseReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onSpringUseReq(this, v8, rsp_0);
    proto::SpringUseRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SpringUseRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SpringUseRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SpringUseRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SpringUseRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SpringUseRsp>::~shared_ptr((std::shared_ptr<proto::SpringUseRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SpringUseReq const>::~shared_ptr((std::shared_ptr<const proto::SpringUseReq> *const)(v2 + 32));
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

// Line 43: range 00000000130E67C0-00000000130E6ADC
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::SetUpAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetUpAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetUpAvatarTeamRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:43 64 16 10 rsp_ptr:43";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetUpAvatarTeamReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetUpAvatarTeamReq const>(
         (const std::shared_ptr<const proto::SetUpAvatarTeamReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      43);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetUpAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetUpAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetUpAvatarTeamRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetUpAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetUpAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetUpAvatarTeamRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetUpAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetUpAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onSetUpAvatarTeamReq(this, v8, rsp_0);
    proto::SetUpAvatarTeamRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetUpAvatarTeamRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetUpAvatarTeamRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetUpAvatarTeamRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetUpAvatarTeamRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetUpAvatarTeamRsp>::~shared_ptr((std::shared_ptr<proto::SetUpAvatarTeamRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetUpAvatarTeamReq const>::~shared_ptr((std::shared_ptr<const proto::SetUpAvatarTeamReq> *const)(v2 + 32));
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

// Line 44: range 00000000130E6ADE-00000000130E6DFA
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::RefreshBackgroundAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::RefreshBackgroundAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::RefreshBackgroundAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:44 64 16 10 rsp_ptr:44";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RefreshBackgroundAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RefreshBackgroundAvatarReq const>(
         (const std::shared_ptr<const proto::RefreshBackgroundAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      44);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::RefreshBackgroundAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RefreshBackgroundAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RefreshBackgroundAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RefreshBackgroundAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RefreshBackgroundAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RefreshBackgroundAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::RefreshBackgroundAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RefreshBackgroundAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onRefreshBackgroundAvatarReq(this, v8, rsp_0);
    proto::RefreshBackgroundAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::RefreshBackgroundAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::RefreshBackgroundAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::RefreshBackgroundAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::RefreshBackgroundAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::RefreshBackgroundAvatarRsp>::~shared_ptr((std::shared_ptr<proto::RefreshBackgroundAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RefreshBackgroundAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::RefreshBackgroundAvatarReq> *const)(v2 + 32));
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

// Line 45: range 00000000130E6DFC-00000000130E7118
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::ChooseCurAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChooseCurAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChooseCurAvatarTeamRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:45 64 16 10 rsp_ptr:45";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChooseCurAvatarTeamReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChooseCurAvatarTeamReq const>(
         (const std::shared_ptr<const proto::ChooseCurAvatarTeamReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChooseCurAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChooseCurAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChooseCurAvatarTeamRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChooseCurAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChooseCurAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChooseCurAvatarTeamRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChooseCurAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChooseCurAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onChooseCurAvatarTeamReq(this, v8, rsp_0);
    proto::ChooseCurAvatarTeamRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChooseCurAvatarTeamRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChooseCurAvatarTeamRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChooseCurAvatarTeamRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChooseCurAvatarTeamRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChooseCurAvatarTeamRsp>::~shared_ptr((std::shared_ptr<proto::ChooseCurAvatarTeamRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChooseCurAvatarTeamReq const>::~shared_ptr((std::shared_ptr<const proto::ChooseCurAvatarTeamReq> *const)(v2 + 32));
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

// Line 46: range 00000000130E711A-00000000130E7436
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChangeAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:46 64 16 10 rsp_ptr:46";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeAvatarReq const>(
         (const std::shared_ptr<const proto::ChangeAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      46);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChangeAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChangeAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onChangeAvatarReq(this, v8, rsp_0);
    proto::ChangeAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChangeAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChangeAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChangeAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChangeAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChangeAvatarRsp>::~shared_ptr((std::shared_ptr<proto::ChangeAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeAvatarReq> *const)(v2 + 32));
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

// Line 47: range 00000000130E7438-00000000130E7754
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarUpgradeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarUpgradeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarUpgradeReq const>(
         (const std::shared_ptr<const proto::AvatarUpgradeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      47);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarUpgradeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarUpgradeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarUpgradeReq(this, v8, rsp_0);
    proto::AvatarUpgradeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarUpgradeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarUpgradeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarUpgradeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarUpgradeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarUpgradeRsp>::~shared_ptr((std::shared_ptr<proto::AvatarUpgradeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarUpgradeReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarUpgradeReq> *const)(v2 + 32));
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

// Line 48: range 00000000130E7756-00000000130E7A72
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarPromoteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:48 64 16 10 rsp_ptr:48";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarPromoteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarPromoteReq const>(
         (const std::shared_ptr<const proto::AvatarPromoteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      48);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarPromoteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarPromoteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarPromoteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarPromoteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarPromoteReq(this, v8, rsp_0);
    proto::AvatarPromoteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarPromoteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarPromoteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarPromoteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarPromoteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarPromoteRsp>::~shared_ptr((std::shared_ptr<proto::AvatarPromoteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarPromoteReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarPromoteReq> *const)(v2 + 32));
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

// Line 49: range 00000000130E7A74-00000000130E7D90
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarDieAnimationEndReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarDieAnimationEndRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarDieAnimationEndRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:49 64 16 10 rsp_ptr:49";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarDieAnimationEndReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarDieAnimationEndReq const>(
         (const std::shared_ptr<const proto::AvatarDieAnimationEndReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      49);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarDieAnimationEndReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarDieAnimationEndReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarDieAnimationEndRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarDieAnimationEndRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarDieAnimationEndRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarDieAnimationEndRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarDieAnimationEndReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarDieAnimationEndReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarDieAnimationEndReq(this, v8, rsp_0);
    proto::AvatarDieAnimationEndRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarDieAnimationEndRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarDieAnimationEndRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarDieAnimationEndRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarDieAnimationEndRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarDieAnimationEndRsp>::~shared_ptr((std::shared_ptr<proto::AvatarDieAnimationEndRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarDieAnimationEndReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarDieAnimationEndReq> *const)(v2 + 32));
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

// Line 50: range 00000000130E7D92-00000000130E80AE
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarChangeElementTypeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarChangeElementTypeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarChangeElementTypeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:50 64 16 10 rsp_ptr:50";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarChangeElementTypeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarChangeElementTypeReq const>(
         (const std::shared_ptr<const proto::AvatarChangeElementTypeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      50);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarChangeElementTypeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarChangeElementTypeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarChangeElementTypeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarChangeElementTypeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarChangeElementTypeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarChangeElementTypeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarChangeElementTypeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarChangeElementTypeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarChangeElementTypeReq(this, v8, rsp_0);
    proto::AvatarChangeElementTypeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarChangeElementTypeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarChangeElementTypeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarChangeElementTypeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarChangeElementTypeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarChangeElementTypeRsp>::~shared_ptr((std::shared_ptr<proto::AvatarChangeElementTypeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarChangeElementTypeReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarChangeElementTypeReq> *const)(v2 + 32));
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

// Line 51: range 00000000130E80B0-00000000130E83CC
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarExpeditionAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarExpeditionAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarExpeditionAllDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:51 64 16 10 rsp_ptr:51";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarExpeditionAllDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarExpeditionAllDataReq const>(
         (const std::shared_ptr<const proto::AvatarExpeditionAllDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      51);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarExpeditionAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarExpeditionAllDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarExpeditionAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarExpeditionAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarExpeditionAllDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarExpeditionAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarExpeditionAllDataReq(this, v8, rsp_0);
    proto::AvatarExpeditionAllDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarExpeditionAllDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarExpeditionAllDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarExpeditionAllDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarExpeditionAllDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarExpeditionAllDataRsp>::~shared_ptr((std::shared_ptr<proto::AvatarExpeditionAllDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarExpeditionAllDataReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarExpeditionAllDataReq> *const)(v2 + 32));
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

// Line 52: range 00000000130E83CE-00000000130E86EA
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarExpeditionStartReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarExpeditionStartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarExpeditionStartRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:52 64 16 10 rsp_ptr:52";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarExpeditionStartReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarExpeditionStartReq const>(
         (const std::shared_ptr<const proto::AvatarExpeditionStartReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarExpeditionStartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionStartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarExpeditionStartRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarExpeditionStartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarExpeditionStartRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarExpeditionStartRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarExpeditionStartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionStartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarExpeditionStartReq(this, v8, rsp_0);
    proto::AvatarExpeditionStartRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarExpeditionStartRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarExpeditionStartRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarExpeditionStartRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarExpeditionStartRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarExpeditionStartRsp>::~shared_ptr((std::shared_ptr<proto::AvatarExpeditionStartRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarExpeditionStartReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarExpeditionStartReq> *const)(v2 + 32));
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

// Line 53: range 00000000130E86EC-00000000130E8A08
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarExpeditionCallBackReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarExpeditionCallBackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarExpeditionCallBackRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:53 64 16 10 rsp_ptr:53";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarExpeditionCallBackReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarExpeditionCallBackReq const>(
         (const std::shared_ptr<const proto::AvatarExpeditionCallBackReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      53);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarExpeditionCallBackReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionCallBackReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarExpeditionCallBackRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarExpeditionCallBackRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarExpeditionCallBackRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarExpeditionCallBackRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarExpeditionCallBackReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionCallBackReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarExpeditionCallBackReq(this, v8, rsp_0);
    proto::AvatarExpeditionCallBackRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarExpeditionCallBackRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarExpeditionCallBackRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarExpeditionCallBackRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarExpeditionCallBackRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarExpeditionCallBackRsp>::~shared_ptr((std::shared_ptr<proto::AvatarExpeditionCallBackRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarExpeditionCallBackReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarExpeditionCallBackReq> *const)(v2 + 32));
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

// Line 54: range 00000000130E8A0A-00000000130E8D26
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarExpeditionGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarExpeditionGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarExpeditionGetRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:54 64 16 10 rsp_ptr:54";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarExpeditionGetRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarExpeditionGetRewardReq const>(
         (const std::shared_ptr<const proto::AvatarExpeditionGetRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      54);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarExpeditionGetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarExpeditionGetRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarExpeditionGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarExpeditionGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarExpeditionGetRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarExpeditionGetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarExpeditionGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarExpeditionGetRewardReq(this, v8, rsp_0);
    proto::AvatarExpeditionGetRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarExpeditionGetRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarExpeditionGetRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarExpeditionGetRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarExpeditionGetRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarExpeditionGetRewardRsp>::~shared_ptr((std::shared_ptr<proto::AvatarExpeditionGetRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarExpeditionGetRewardReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarExpeditionGetRewardReq> *const)(v2 + 32));
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

// Line 55: range 00000000130E8D28-00000000130E9044
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeMpTeamAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChangeMpTeamAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChangeMpTeamAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:55 64 16 10 rsp_ptr:55";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeMpTeamAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeMpTeamAvatarReq const>(
         (const std::shared_ptr<const proto::ChangeMpTeamAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      55);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChangeMpTeamAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeMpTeamAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeMpTeamAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeMpTeamAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeMpTeamAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeMpTeamAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChangeMpTeamAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeMpTeamAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onChangeMpTeamAvatarReq(this, v8, rsp_0);
    proto::ChangeMpTeamAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChangeMpTeamAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChangeMpTeamAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChangeMpTeamAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChangeMpTeamAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChangeMpTeamAvatarRsp>::~shared_ptr((std::shared_ptr<proto::ChangeMpTeamAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeMpTeamAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeMpTeamAvatarReq> *const)(v2 + 32));
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

// Line 57: range 00000000130E9046-00000000130E9362
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::FocusAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FocusAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FocusAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:57 64 16 10 rsp_ptr:57";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FocusAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FocusAvatarReq const>(
         (const std::shared_ptr<const proto::FocusAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      57);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FocusAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FocusAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FocusAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FocusAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FocusAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FocusAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FocusAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FocusAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onFocusAvatarReq(this, v8, rsp_0);
    proto::FocusAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FocusAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FocusAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FocusAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FocusAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FocusAvatarRsp>::~shared_ptr((std::shared_ptr<proto::FocusAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FocusAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::FocusAvatarReq> *const)(v2 + 32));
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

// Line 58: range 00000000130E9364-00000000130E9680
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarWearFlycloakReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarWearFlycloakRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarWearFlycloakRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarWearFlycloakReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarWearFlycloakReq const>(
         (const std::shared_ptr<const proto::AvatarWearFlycloakReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      58);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarWearFlycloakReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarWearFlycloakReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarWearFlycloakRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarWearFlycloakRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarWearFlycloakRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarWearFlycloakRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarWearFlycloakReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarWearFlycloakReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarWearFlycloakReq(this, v8, rsp_0);
    proto::AvatarWearFlycloakRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarWearFlycloakRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarWearFlycloakRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarWearFlycloakRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarWearFlycloakRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarWearFlycloakRsp>::~shared_ptr((std::shared_ptr<proto::AvatarWearFlycloakRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarWearFlycloakReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarWearFlycloakReq> *const)(v2 + 32));
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

// Line 59: range 00000000130E9682-00000000130E999E
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarFetterLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarFetterLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarFetterLevelRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarFetterLevelRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarFetterLevelRewardReq const>(
         (const std::shared_ptr<const proto::AvatarFetterLevelRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      59);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarFetterLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarFetterLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarFetterLevelRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarFetterLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarFetterLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarFetterLevelRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarFetterLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarFetterLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarFetterLevelRewardReq(this, v8, rsp_0);
    proto::AvatarFetterLevelRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarFetterLevelRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarFetterLevelRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarFetterLevelRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarFetterLevelRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarFetterLevelRewardRsp>::~shared_ptr((std::shared_ptr<proto::AvatarFetterLevelRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarFetterLevelRewardReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarFetterLevelRewardReq> *const)(v2 + 32));
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

// Line 60: range 00000000130E99A0-00000000130E9CBC
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarPromoteGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarPromoteGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarPromoteGetRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarPromoteGetRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarPromoteGetRewardReq const>(
         (const std::shared_ptr<const proto::AvatarPromoteGetRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarPromoteGetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarPromoteGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarPromoteGetRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarPromoteGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarPromoteGetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarPromoteGetRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarPromoteGetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarPromoteGetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarPromoteGetRewardReq(this, v8, rsp_0);
    proto::AvatarPromoteGetRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarPromoteGetRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarPromoteGetRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarPromoteGetRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarPromoteGetRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarPromoteGetRewardRsp>::~shared_ptr((std::shared_ptr<proto::AvatarPromoteGetRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarPromoteGetRewardReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarPromoteGetRewardReq> *const)(v2 + 32));
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

// Line 62: range 00000000130E9CBE-00000000130E9FDA
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AvatarChangeAnimHashReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AvatarChangeAnimHashRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AvatarChangeAnimHashRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:62 64 16 10 rsp_ptr:62";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarChangeAnimHashReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarChangeAnimHashReq const>(
         (const std::shared_ptr<const proto::AvatarChangeAnimHashReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      62);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AvatarChangeAnimHashReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarChangeAnimHashReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarChangeAnimHashRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarChangeAnimHashRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarChangeAnimHashRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarChangeAnimHashRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AvatarChangeAnimHashReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarChangeAnimHashReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAvatarChangeAnimHashReq(this, v8, rsp_0);
    proto::AvatarChangeAnimHashRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AvatarChangeAnimHashRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AvatarChangeAnimHashRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AvatarChangeAnimHashRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AvatarChangeAnimHashRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AvatarChangeAnimHashRsp>::~shared_ptr((std::shared_ptr<proto::AvatarChangeAnimHashRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarChangeAnimHashReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarChangeAnimHashReq> *const)(v2 + 32));
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

// Line 63: range 00000000130E9FDC-00000000130EA2F8
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::PersistentDungeonSwitchAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PersistentDungeonSwitchAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PersistentDungeonSwitchAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PersistentDungeonSwitchAvatarReq const>(
         (const std::shared_ptr<const proto::PersistentDungeonSwitchAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      63);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PersistentDungeonSwitchAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersistentDungeonSwitchAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PersistentDungeonSwitchAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PersistentDungeonSwitchAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PersistentDungeonSwitchAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PersistentDungeonSwitchAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PersistentDungeonSwitchAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersistentDungeonSwitchAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onPersistentDungeonSwitchAvatarReq(this, v8, rsp_0);
    proto::PersistentDungeonSwitchAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PersistentDungeonSwitchAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp>::~shared_ptr((std::shared_ptr<proto::PersistentDungeonSwitchAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PersistentDungeonSwitchAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::PersistentDungeonSwitchAvatarReq> *const)(v2 + 32));
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

// Line 64: range 00000000130EA2FA-00000000130EA616
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::AddBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AddBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AddBackupAvatarTeamRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:64 64 16 10 rsp_ptr:64";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#21}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddBackupAvatarTeamReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddBackupAvatarTeamReq const>(
         (const std::shared_ptr<const proto::AddBackupAvatarTeamReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      64);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AddBackupAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AddBackupAvatarTeamRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AddBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AddBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AddBackupAvatarTeamRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AddBackupAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onAddBackupAvatarTeamReq(this, v8, rsp_0);
    proto::AddBackupAvatarTeamRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AddBackupAvatarTeamRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AddBackupAvatarTeamRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AddBackupAvatarTeamRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AddBackupAvatarTeamRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AddBackupAvatarTeamRsp>::~shared_ptr((std::shared_ptr<proto::AddBackupAvatarTeamRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AddBackupAvatarTeamReq const>::~shared_ptr((std::shared_ptr<const proto::AddBackupAvatarTeamReq> *const)(v2 + 32));
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

// Line 65: range 00000000130EA618-00000000130EA934
int __cdecl AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator()(
        const AvatarHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AvatarHandler *this; // r14
  std::__shared_ptr_access<const proto::DelBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DelBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DelBackupAvatarTeamRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:65 64 16 10 rsp_ptr:65";
  *(_QWORD *)(v2 + 16) = AvatarHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#22}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DelBackupAvatarTeamReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DelBackupAvatarTeamReq const>(
         (const std::shared_ptr<const proto::DelBackupAvatarTeamReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "operator()",
      65);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DelBackupAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DelBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DelBackupAvatarTeamRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DelBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DelBackupAvatarTeamRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DelBackupAvatarTeamRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DelBackupAvatarTeamReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DelBackupAvatarTeamReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AvatarHandler::onDelBackupAvatarTeamReq(this, v8, rsp_0);
    proto::DelBackupAvatarTeamRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DelBackupAvatarTeamRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DelBackupAvatarTeamRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DelBackupAvatarTeamRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DelBackupAvatarTeamRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DelBackupAvatarTeamRsp>::~shared_ptr((std::shared_ptr<proto::DelBackupAvatarTeamRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DelBackupAvatarTeamReq const>::~shared_ptr((std::shared_ptr<const proto::DelBackupAvatarTeamReq> *const)(v2 + 32));
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

// Line 72: range 00000000130EC79E-00000000130ECF4F
int32_t __cdecl AvatarHandler::onSetUpAvatarTeamReq(
        AvatarHandler *const this,
        const proto::SetUpAvatarTeamReq *req,
        proto::SetUpAvatarTeamRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint64 v7; // rdx
  PlayerTowerComp *TowerComp; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v17; // r14
  uint64_t v18; // r15
  uint32_t v19; // eax
  common::milog::MiLogStream *v20; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 ret:97 64 8 7 guid:74 96 24 18 avatar_guid_vec:73";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onSetUpAvatarTeamReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 96));
  __for_range = proto::SetUpAvatarTeamReq::avatar_team_guid_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v3 + 64) = *__for_begin;
    std::vector<unsigned long>::push_back(
      (std::vector<long unsigned int> *const)(v3 + 96),
      (const std::vector<long unsigned int>::value_type *)(v3 + 64));
    proto::SetUpAvatarTeamRsp::add_avatar_team_guid_list(rsp_0, *(_QWORD *)(v3 + 64));
    ++__for_begin;
  }
  v6 = proto::SetUpAvatarTeamReq::team_id(req);
  proto::SetUpAvatarTeamRsp::set_team_id(rsp_0, v6);
  v7 = proto::SetUpAvatarTeamReq::cur_avatar_guid(req);
  proto::SetUpAvatarTeamRsp::set_cur_avatar_guid(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  if ( PlayerTowerComp::isInTowerLevel(TowerComp) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onSetUpAvatarTeamReq",
      89);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v27,
           (const char (*)[31])"player in tower level, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v10 = 1531;
  }
  else if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 96)) <= 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::checkIsInSafeStateForChangeTeam(this->player_, 0);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onSetUpAvatarTeamReq",
        100);
      v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v27,
              (const char (*)[47])"setUpAvatarTeam fails, not in safe state, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v10 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarGuidVecAllFormal(
                               AvatarComp,
                               (const std::vector<long unsigned int> *)(v3 + 96));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/avatar_handler.cpp",
          "onSetUpAvatarTeamReq",
          106);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v27,
          (const char (*)[32])"checkAvatarTeamAllFormal failed");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v10 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getAvatarComp(this->player_);
        v18 = proto::SetUpAvatarTeamReq::cur_avatar_guid(req);
        v19 = proto::SetUpAvatarTeamReq::team_id(req);
        *(_DWORD *)(v3 + 48) = PlayerAvatarComp::setUpAvatarTeam(
                                 v17,
                                 v19,
                                 (const std::vector<long unsigned int> *)(v3 + 96),
                                 v18);
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/avatar_handler.cpp",
            "onSetUpAvatarTeamReq",
            112);
          v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v27,
                  (const char (*)[28])"setUpAvatarTeam fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v10 = *(_DWORD *)(v3 + 48);
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onSetUpAvatarTeamReq",
      94);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v27,
            (const char (*)[33])"avatar_guid_list_size too large:");
    *(_QWORD *)(v3 + 64) = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 96));
    v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v10 = -1;
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 96));
  result = v10;
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

// Line 120: range 00000000130ECF50-00000000130ED88A
int32_t __cdecl AvatarHandler::onChooseCurAvatarTeamReq(
        AvatarHandler *const this,
        const proto::ChooseCurAvatarTeamReq *req,
        proto::ChooseCurAvatarTeamRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint32_t v13; // eax
  PlayerAvatarComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  PlayerAvatarComp *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 v21; // edx
  PlayerAvatarComp *v22; // rax
  PlayerAvatarComp *v23; // r14
  uint32_t v24; // eax
  PlayerAvatarComp *v25; // rax
  PlayerMpComp *MpComp; // rax
  PlayerAvatarComp *v27; // rax
  int32_t result; // eax
  std::string v29; // [rsp+0h] [rbp-120h]
  proto::ChooseCurAvatarTeamRsp *const rsp_0a; // [rsp+8h] [rbp-118h]
  const proto::ChooseCurAvatarTeamReq *reqa; // [rsp+10h] [rbp-110h]
  AvatarHandler *thisa; // [rsp+18h] [rbp-108h]
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  uint32_t old_team_id; // [rsp+24h] [rbp-FCh]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  uint64_t guid; // [rsp+38h] [rbp-E8h]
  std::vector<long unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  unsigned __int64 avatar_guid; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+70h] [rbp-B0h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v29._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v29._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 10 holder:161 48 4 11 retcode:127 64 24 12 team_vec:139";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onChooseCurAvatarTeamReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Player::checkIsInSafeStateForChangeTeam(this->player_, 0);
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onChooseCurAvatarTeamReq",
      130);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v40,
           (const char (*)[54])"ChooseCurAvatarTeam fails, not in safe state,retcode:");
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = *(_DWORD *)(v3 + 48);
    goto LABEL_51;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Player::checkIsAllowChangeTeam(this->player_);
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onChooseCurAvatarTeamReq",
      136);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v40,
            (const char (*)[39])"checkIsAllowChangeTeam fails, retcode:");
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  v13 = proto::ChooseCurAvatarTeamReq::team_id(req);
  PlayerAvatarComp::getAvatarTeamWithTempAvatar((std::vector<long unsigned int> *)(v3 + 64), AvatarComp, v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = Player::getAvatarComp(this->player_);
  *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                           v14,
                           (const std::vector<long unsigned int> *)(v3 + 64));
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onChooseCurAvatarTeamReq",
      144);
    v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v40,
            (const char (*)[39])"choose cur avatar team faild. retcode:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = *(_DWORD *)(v3 + 48);
  }
  else
  {
    guid = 0LL;
    __for_range = (std::vector<long unsigned int> *)(v3 + 64);
    __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v16 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      avatar_guid = *(_QWORD *)v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = Player::getAvatarComp(this->player_);
      if ( !PlayerAvatarComp::checkChangeCurAvatar(v17, avatar_guid) )
      {
        guid = avatar_guid;
        break;
      }
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    if ( guid )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v40, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x45Bu, v29);
      std::string::~string(&v40);
      v21 = proto::ChooseCurAvatarTeamReq::team_id(reqa);
      proto::ChooseCurAvatarTeamRsp::set_cur_team_id(rsp_0a, v21);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = Player::getAvatarComp(thisa->player_);
      old_team_id = PlayerAvatarComp::getCurAvatarTeamId(v22);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = Player::getAvatarComp(thisa->player_);
      v24 = proto::ChooseCurAvatarTeamReq::team_id(reqa);
      PlayerAvatarComp::setCurAvatarTeamId(v23, v24);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = Player::getAvatarComp(thisa->player_);
      PlayerAvatarComp::logChooseCurAvatarTeam(v25, old_team_id);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(thisa->player_);
      if ( !PlayerMpComp::isInMpMode(MpComp) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v27 = Player::getAvatarComp(thisa->player_);
        PlayerAvatarComp::syncCurAvatarTeamToSceneTeam(v27, guid, CHANGE_SCENE_TEAM_REASON_CHOOSE_CUR_TEAM);
      }
      v9 = 0;
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onChooseCurAvatarTeamReq",
        158);
      v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v40,
              (const char (*)[30])"checkChangeCurAvatar, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = operator<<(v18, this->player_);
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" guid: 0");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v9 = -1;
    }
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 64));
LABEL_51:
  result = v9;
  if ( v41 == (char *)v3 )
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

// Line 176: range 00000000130ED88C-00000000130EE5C4
int32_t __cdecl AvatarHandler::onChangeAvatarReq(
        AvatarHandler *const this,
        const proto::ChangeAvatarReq *req,
        proto::ChangeAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  int32_t v7; // r14d
  google::protobuf::uint32 v8; // edx
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const proto::Vector *v21; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Scene *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const Vector3 *Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  unsigned __int64 n; // rax
  Scene *v37; // r14
  Entity *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rcx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-1BCh]
  int32_t reta; // [rsp+24h] [rbp-1BCh]
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-1B8h]
  common::milog::MiLogStream v50; // [rsp+30h] [rbp-1B0h] BYREF
  std::string val; // [rsp+50h] [rbp-190h] BYREF
  common::milog::MiLogStream v52; // [rsp+70h] [rbp-170h] BYREF
  char v53[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 8 guid:184 64 12 12 move_pos:213 96 16 18 cur_avatar_ptr:199 128 16 18 cur_avatar_ptr:214"
                        " 160 16 13 scene_ptr:217 192 56 18 motion_context:220";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onChangeAvatarReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219020288;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 160));
  v6 = std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 160), 0LL);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onChangeAvatarReq",
      180);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v52,
      (const char (*)[42])"intransfer cannot choose cur avatar team.");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 103;
  }
  else
  {
    *(_QWORD *)(v3 + 32) = proto::ChangeAvatarReq::guid(req);
    proto::ChangeAvatarRsp::set_cur_guid(rsp_0, *(_QWORD *)(v3 + 32));
    v8 = proto::ChangeAvatarReq::skill_id(req);
    proto::ChangeAvatarRsp::set_skill_id(rsp_0, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar_comp = Player::getAvatarComp(this->player_);
    if ( *(_QWORD *)(v3 + 32) )
    {
      if ( !PlayerAvatarComp::isMyAvatarInSceneTeam(avatar_comp, *(_QWORD *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/avatar_handler.cpp",
          "onChangeAvatarReq",
          195);
        v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v52,
                (const char (*)[32])"avatar not in cur team, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = operator<<(v10, this->player_);
        v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v7 = 122;
      }
      else
      {
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
        if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96))
          && (v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
              Avatar::getGuid(v13) == *(_QWORD *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/avatar_handler.cpp",
            "onChangeAvatarReq",
            202);
          v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v52, (const char (*)[26])off_24F2CDA0);
          v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v15,
                  (const unsigned __int64 *)(v3 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v52);
          v7 = 0;
        }
        else
        {
          ret = PlayerAvatarComp::checkChangeCurAvatar(avatar_comp, *(_QWORD *)(v3 + 32));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/avatar_handler.cpp",
              "onChangeAvatarReq",
              208);
            v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v52,
                    (const char (*)[30])"checkChangeCurAvatar, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v19 = operator<<(v18, this->player_);
            v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" guid:");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v20,
              (const unsigned __int64 *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v52);
            v7 = ret;
          }
          else
          {
            if ( proto::ChangeAvatarReq::is_move(req) )
            {
              v21 = proto::ChangeAvatarReq::move_pos(req);
              Vector3::Vector3((Vector3 *const)(v3 + 64), v21);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getCurAvatar((Player *const)(v3 + 128));
              if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 128), 0LL) )
              {
                v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                if ( Entity::isOnScene((const Entity *const)v22) )
                {
                  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  Entity::getScene((const Entity *const)(v3 + 160));
                  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 160), 0LL) )
                  {
                    MotionContext::MotionContext((MotionContext *const)(v3 + 192));
                    v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    *(_DWORD *)(v3 + 192) = Scene::getSceneTimeMs(v24);
                    v25 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                      v25 = __asan_report_load8();
                    v26 = *(_QWORD *)v25 + 112LL;
                    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                      v25 = __asan_report_load8();
                    if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))v26)(
                           v25,
                           0LL,
                           v3 + 64,
                           v3 + 192) )
                    {
                      common::milog::MiLogStream::create(
                        &v50,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/handler/avatar_handler.cpp",
                        "onChangeAvatarReq",
                        224);
                      v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              &v50,
                              (const char (*)[29])"checkMoveSpeed fail, avatar:");
                      v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      v29 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v27, v28);
                      v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v29,
                              (const char (*)[11])" move_pos:");
                      Vector3::toString[abi:cxx11](&val, (const Vector3 *const)(v3 + 64));
                      v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &val);
                      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              v31,
                              (const char (*)[16])" drag_back_pos:");
                      v33 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      Position = Entity::getPosition((const Entity *const)v33);
                      Vector3::toString[abi:cxx11]((std::string *)&v52, Position);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v32,
                        (const std::string *)&v52);
                      std::string::~string(&v52);
                      std::string::~string(&val);
                      common::milog::MiLogStream::~MiLogStream(&v50);
                      v35 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      n = (unsigned __int64)Entity::getPosition((const Entity *const)v35);
                      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
                        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
                      {
                        n = __asan_report_load_n(n, 12LL);
                      }
                      *(_QWORD *)(v3 + 64) = *(_QWORD *)n;
                      *(_DWORD *)(v3 + 72) = *(_DWORD *)(n + 8);
                    }
                    v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    v38 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    if ( Scene::entityMoveTo(v37, v38, (const Vector3 *)(v3 + 64)) )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/avatar_handler.cpp",
                        "onChangeAvatarReq",
                        229);
                      v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              &v52,
                              (const char (*)[33])"changeCurAvatar move fails, pos:");
                      v40 = operator<<(v39, (const Vector3 *)(v3 + 64));
                      v41 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v40, v41);
                      common::milog::MiLogStream::~MiLogStream(&v52);
                    }
                    MotionContext::~MotionContext((MotionContext *const)(v3 + 192));
                  }
                  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
                }
              }
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
            }
            reta = PlayerAvatarComp::checkChangeCurAvatar(avatar_comp, *(_QWORD *)(v3 + 32));
            if ( reta )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/avatar_handler.cpp",
                "onChangeAvatarReq",
                238);
              v42 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v52,
                      (const char (*)[41])"move after checkChangeCurAvatar, player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v43 = operator<<(v42, this->player_);
              v44 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])" guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v44,
                (const unsigned __int64 *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v52);
              v7 = reta;
            }
            else
            {
              PlayerAvatarComp::changeCurAvatar(avatar_comp, *(_QWORD *)(v3 + 32), 1);
              v7 = 0;
            }
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onChangeAvatarReq",
        190);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v52,
             (const char (*)[22])"guid != 0 !!! player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = -1;
    }
  }
  result = v7;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 247: range 00000000130EE5C6-00000000130EE72E
int32_t __cdecl AvatarHandler::onAvatarDieAnimationEndReq(
        AvatarHandler *const this,
        const proto::AvatarDieAnimationEndReq *req,
        proto::AvatarDieAnimationEndRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint64 v6; // rdx
  google::protobuf::uint32 v7; // edx
  const proto::Vector *v8; // rax
  int32_t result; // eax
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 14 reborn_pos:251";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarDieAnimationEndReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  v6 = proto::AvatarDieAnimationEndReq::die_guid(req);
  proto::AvatarDieAnimationEndRsp::set_die_guid(rsp_0, v6);
  v7 = proto::AvatarDieAnimationEndReq::skill_id(req);
  proto::AvatarDieAnimationEndRsp::set_skill_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_comp = Player::getAvatarComp(this->player_);
  v8 = proto::AvatarDieAnimationEndReq::reborn_pos(req);
  Vector3::Vector3((Vector3 *const)(v3 + 32), v8);
  result = PlayerAvatarComp::procAfterAvatarDie(avatar_comp, (const Vector3 *)(v3 + 32));
  if ( v12 == (char *)v3 )
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

// Line 258: range 00000000130EE730-00000000130EE9E9
int32_t __cdecl AvatarHandler::onAvatarPromoteReq(
        AvatarHandler *const this,
        const proto::AvatarPromoteReq *req,
        proto::AvatarPromoteRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  PlayerAvatarComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t ret; // [rsp+2Ch] [rbp-84h]
  int32_t reta; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 guid:259";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarPromoteReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = proto::AvatarPromoteReq::guid(req);
  proto::AvatarPromoteRsp::set_guid(rsp_0, *(_QWORD *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  ret = PlayerAvatarComp::checkAvatarPromote(AvatarComp, *(_QWORD *)(v3 + 32));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarPromoteReq",
      264);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v14,
           (const char (*)[32])"checkAvatarPromote fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getAvatarComp(this->player_);
    reta = PlayerAvatarComp::avatarPromote(v9, *(_QWORD *)(v3 + 32));
    if ( reta )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarPromoteReq",
        270);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v14,
              (const char (*)[32])"checkAvatarPromote fails, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = reta;
    }
    else
    {
      result = 0;
    }
  }
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

// Line 278: range 00000000130EE9EA-00000000130EF635
int32_t __cdecl AvatarHandler::onSpringUseReq(
        AvatarHandler *const this,
        const proto::SpringUseReq *req,
        proto::SpringUseRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAvatarComp *v11; // r14
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // esi
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const Vector3 *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  PlayerWorldScene *v34; // rax
  int32_t result; // eax
  uint32_t scene_id; // [rsp+28h] [rbp-148h]
  int check_distance; // [rsp+2Ch] [rbp-144h]
  uint64_t guid; // [rsp+30h] [rbp-140h]
  const data::WorldAreaConfig *area_config_ptr; // [rsp+38h] [rbp-138h]
  Vector3 pos2; // [rsp+44h] [rbp-12Ch] BYREF
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-110h] BYREF
  char v44[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 area_id:307 64 16 21 formal_avatar_ptr:281 96 16 19 world_scene_ptr:287 128 16 18 cur_"
                        "avatar_ptr:293 160 16 19 tower_point_ptr:318";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onSpringUseReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  guid = proto::SpringUseReq::guid(req);
  proto::SpringUseRsp::set_guid(rsp_0, guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onSpringUseReq",
      284);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v43,
           (const char (*)[23])"findFormalAvatar fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v8 = 104;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<PlayerWorldScene>((PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onSpringUseReq",
        290);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v43,
             (const char (*)[18])"getCurScene fails");
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, v10);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 128));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/avatar_handler.cpp",
          "onSpringUseReq",
          296);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v43, (const char (*)[19])"getCurAvatar fails");
        common::milog::MiLogStream::~MiLogStream(&v43);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getAvatarComp(this->player_);
        std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v3 + 128));
        LOBYTE(v11) = PlayerAvatarComp::isAvatarSwitchClosed(v11, &p_avatar_ptr);
        std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
        if ( (_BYTE)v11 )
        {
          v8 = 142;
        }
        else
        {
          v12 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          scene_id = Scene::getSceneId((const Scene *const)v12);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          *(_DWORD *)(v3 + 48) = PlayerSceneComp::getLevel1AreaId(SceneComp);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&p_avatar_ptr);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_avatar_ptr);
          area_config_ptr = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(
                              &v14->design_config.txt_config_mgr.world_area_config_mgr,
                              *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_avatar_ptr);
          if ( area_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->tower_point_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&area_config_ptr->tower_point_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( area_config_ptr->tower_point_id )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&p_avatar_ptr);
              v16 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_avatar_ptr)
                  + 93080;
              if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->tower_point_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&area_config_ptr->tower_point_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
                (const JsonConfigMgr *const)(v3 + 160),
                v16,
                scene_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_avatar_ptr);
              if ( std::operator==<data::SceneTransPoint>(
                     (const std::shared_ptr<data::SceneTransPoint> *)(v3 + 160),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/avatar_handler.cpp",
                  "onSpringUseReq",
                  321);
                v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v43,
                        (const char (*)[35])"find tower point fails, point_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &area_config_ptr->tower_point_id);
                common::milog::MiLogStream::~MiLogStream(&v43);
                v8 = -1;
              }
              else
              {
                v18 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                if ( *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( v18->type == TOWER )
                {
                  v23 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v23->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v23 - 83) & 7) >= *(_BYTE *)(((unsigned __int64)&v23->is_forbid_avatar_auto_use_spring >> 3)
                                                                     + 0x7FFF8000) )
                  {
                    __asan_report_load1(&v23->is_forbid_avatar_auto_use_spring);
                  }
                  if ( v23->is_forbid_avatar_auto_use_spring )
                  {
                    common::milog::MiLogStream::create(
                      &v43,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/avatar_handler.cpp",
                      "onSpringUseReq",
                      332);
                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v43,
                      (const char (*)[41])"transpoint forbid avatar auto use spring");
                    common::milog::MiLogStream::~MiLogStream(&v43);
                    v8 = -1;
                  }
                  else
                  {
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&p_avatar_ptr);
                    v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_avatar_ptr);
                    check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v24->design_config.txt_config_mgr.const_value_config_mgr);
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_avatar_ptr);
                    v25 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    Vector3::Vector3(&pos2, &v25->pos);
                    v26 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    Position = Entity::getPosition((const Entity *const)v26);
                    if ( getDistance(Position, &pos2) <= (float)check_distance )
                    {
                      v33 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                      LOBYTE(pos2.x) = 0;
                      pos2.y = 0.0;
                      pos2.z = 0.0;
                      SpringUseParam::SpringUseParam((SpringUseParam *const)&pos2);
                      v34 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                      v8 = Avatar::useSpring(v33, v34, (const SpringUseParam *)&pos2);
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v43,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/handler/avatar_handler.cpp",
                        "onSpringUseReq",
                        340);
                      v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              &v43,
                              (const char (*)[13])"avatar pos: ");
                      v29 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      v30 = Entity::getPosition((const Entity *const)v29);
                      v31 = operator<<(v28, v30);
                      v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                              v31,
                              (const char (*)[9])" tower: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v32,
                        &area_config_ptr->tower_point_id);
                      common::milog::MiLogStream::~MiLogStream(&v43);
                      v8 = 520;
                    }
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v43,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/avatar_handler.cpp",
                    "onSpringUseReq",
                    326);
                  v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          &v43,
                          (const char (*)[10])"area_id: ");
                  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v19,
                          (const unsigned int *)(v3 + 48));
                  v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v20,
                          (const char (*)[12])" point_id: ");
                  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v21,
                          &area_config_ptr->tower_point_id);
                  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v22,
                    (const char (*)[12])" not tower!");
                  common::milog::MiLogStream::~MiLogStream(&v43);
                  v8 = -1;
                }
              }
              std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 160));
            }
            else
            {
              v8 = 558;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/avatar_handler.cpp",
              "onSpringUseReq",
              311);
            v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v43,
                    (const char (*)[47])"findFirstLevelWorldAreaConfig fails, area_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v43);
            v8 = -1;
          }
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 96));
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  result = v8;
  if ( v44 == (char *)v3 )
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

// Line 349: range 00000000130EF636-00000000130EF74C
int32_t __cdecl AvatarHandler::onRefreshBackgroundAvatarReq(
        AvatarHandler *const this,
        const proto::RefreshBackgroundAvatarReq *req,
        proto::RefreshBackgroundAvatarRsp *rsp_0)
{
  PlayerAvatarComp *AvatarComp; // rdx
  common::milog::MiLogStream *v4; // rcx
  int32_t ret; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  ret = PlayerAvatarComp::refreshBackgroundAvatar(AvatarComp, rsp_0);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onRefreshBackgroundAvatarReq",
      353);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v8,
           (const char (*)[30])"refreshBackgroundAvatar fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  return ret;
};

// Line 359: range 00000000130EF74E-00000000130EFD62
int32_t __cdecl AvatarHandler::onAvatarUpgradeReq(
        AvatarHandler *const this,
        const proto::AvatarUpgradeReq *req,
        proto::AvatarUpgradeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Level; // edx
  uint32_t v13; // r15d
  uint32_t v14; // r14d
  uint64_t v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  uint32_t v23; // r15d
  uint32_t v24; // r14d
  uint64_t v25; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  FightPropComp *v27; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  FightPropComp *v29; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // edx
  int32_t result; // eax
  unsigned int Uid; // [rsp+20h] [rbp-120h] BYREF
  unsigned int v35; // [rsp+24h] [rbp-11Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-118h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  unsigned __int64 v38; // [rsp+30h] [rbp-110h] BYREF
  PlayerAvatarComp *avatar_comp; // [rsp+38h] [rbp-108h]
  google::protobuf::Map<unsigned int,float> *proto_old_prop_map; // [rsp+40h] [rbp-100h]
  google::protobuf::Map<unsigned int,float> *proto_cur_prop_map; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 21 formal_avatar_ptr:362 80 48 20 fight_prop_guard:360";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarUpgradeReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_comp = Player::getAvatarComp(this->player_);
  proto::AvatarUpgradeReq::avatar_guid(req);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 48), (uint64_t)avatar_comp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarUpgradeReq",
      365);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v42,
           (const char (*)[30])"findFormalAvatar failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v7 = 104;
  }
  else
  {
    v8 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    FightPropGuard::addCreature((FightPropGuard *const)(v3 + 80), v8, 0);
    proto_old_prop_map = proto::AvatarUpgradeRsp::mutable_old_fight_prop_map(rsp_0);
    v9 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    FightPropComp = Creature::getFightPropComp(v9);
    FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(FightPropComp, proto_old_prop_map, 0);
    v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    Level = Creature::getLevel(v11);
    proto::AvatarUpgradeRsp::set_old_level(rsp_0, Level);
    v13 = proto::AvatarUpgradeReq::count(req);
    v14 = proto::AvatarUpgradeReq::item_id(req);
    v15 = proto::AvatarUpgradeReq::avatar_guid(req);
    ret = PlayerAvatarComp::checkAvatarUpgrade(avatar_comp, v15, v14, v13);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarUpgradeReq",
        378);
      v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v42,
              (const char (*)[32])"checkAvatarUpgrade failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Uid);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" avatar_guid:");
      v38 = proto::AvatarUpgradeReq::avatar_guid(req);
      v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &v38);
      v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" item_id:");
      v35 = proto::AvatarUpgradeReq::item_id(req);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v35);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" count:");
      val = proto::AvatarUpgradeReq::count(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v7 = ret;
    }
    else
    {
      v23 = proto::AvatarUpgradeReq::count(req);
      v24 = proto::AvatarUpgradeReq::item_id(req);
      v25 = proto::AvatarUpgradeReq::avatar_guid(req);
      PlayerAvatarComp::avatarUpgrade(avatar_comp, v25, v24, v23);
      proto_cur_prop_map = proto::AvatarUpgradeRsp::mutable_cur_fight_prop_map(rsp_0);
      v26 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v27 = Creature::getFightPropComp(v26);
      FightPropComp::flushModifiedProps(v27, 1);
      v28 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v29 = Creature::getFightPropComp(v28);
      FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(v29, proto_cur_prop_map, 0);
      v30 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v31 = Creature::getLevel(v30);
      proto::AvatarUpgradeRsp::set_cur_level(rsp_0, v31);
      v7 = 0;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 48));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 80));
  result = v7;
  if ( v43 == (char *)v3 )
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
  return result;
};

// Line 392: range 00000000130EFD64-00000000130EFDE3
int32_t __cdecl AvatarHandler::onAvatarChangeElementTypeReq(
        AvatarHandler *const this,
        const proto::AvatarChangeElementTypeReq *req,
        proto::AvatarChangeElementTypeRsp *rsp_0)
{
  PlayerAvatarComp *AvatarComp; // rbx
  uint32_t v4; // r12d
  uint32_t v5; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  v4 = proto::AvatarChangeElementTypeReq::area_id(req);
  v5 = proto::AvatarChangeElementTypeReq::scene_id(req);
  return PlayerAvatarComp::avatarChangeElementType(AvatarComp, v5, v4);
};

// Line 397: range 00000000130EFDE4-00000000130F0118
void __cdecl AvatarHandler::fillAllAvatarExpeditionInfo(
        AvatarHandler *const this,
        google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *info_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerAvatarComp *AvatarComp; // rax
  unsigned __int64 v6; // rax
  PlayerAvatarComp *v7; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ExpeditionComp *ExpeditionComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  ExpeditionComp *v12; // r14
  proto::AvatarExpeditionInfo *v13; // rax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 guid:399 64 16 21 formal_avatar_ptr:401 96 24 13 guids_vec:398";
  *(_QWORD *)(v2 + 16) = AvatarHandler::fillAllAvatarExpeditionInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getAllAvatarGuids((std::vector<long unsigned int> *)(v2 + 96), AvatarComp);
  __for_range = (std::vector<long unsigned int> *)(v2 + 96);
  __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    *(_QWORD *)(v2 + 32) = *(_QWORD *)v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v2 + 64), (uint64_t)v7);
    if ( std::operator!=<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 64), 0LL) )
    {
      v8 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      ExpeditionComp = FormalAvatar::getExpeditionComp(v8);
      if ( ExpeditionComp::getState(ExpeditionComp) )
      {
        v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v12 = FormalAvatar::getExpeditionComp(v11);
        v13 = google::protobuf::Map<unsigned long,proto::AvatarExpeditionInfo>::operator[](
                info_map,
                (const google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo>::key_type *)(v2 + 32));
        ExpeditionComp::toClientInfo(v12, v13);
      }
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 96));
  if ( v17 == (char *)v2 )
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

// Line 410: range 00000000130F011A-00000000130F03DB
int32_t __cdecl AvatarHandler::onAvatarExpeditionAllDataReq(
        AvatarHandler *const this,
        const proto::AvatarExpeditionAllDataReq *req,
        proto::AvatarExpeditionAllDataRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t AvatarExpeditionCountLimit; // edx
  google::protobuf::uint32 *v8; // rdx
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *v9; // rdx
  int32_t result; // eax
  size_t i; // [rsp+28h] [rbp-A8h]
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 14 opened_vec:412";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarExpeditionAllDataReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  AvatarExpeditionCountLimit = PlayerAvatarComp::getAvatarExpeditionCountLimit(AvatarComp);
  proto::AvatarExpeditionAllDataRsp::set_expedition_count_limit(rsp_0, AvatarExpeditionCountLimit);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&p_player_ptr);
  ExpeditionComp::getAllOpenedExpedition((std::vector<unsigned int> *)(v3 + 32), &p_player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  for ( i = 0LL; i < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 32)); ++i )
  {
    v8 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), i);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarExpeditionAllDataRsp::add_open_expedition_list(rsp_0, *v8);
  }
  v9 = proto::AvatarExpeditionAllDataRsp::mutable_expedition_info_map(rsp_0);
  AvatarHandler::fillAllAvatarExpeditionInfo(this, v9);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = 0;
  if ( v14 == (char *)v3 )
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

// Line 423: range 00000000130F03DC-00000000130F0AF7
int32_t __cdecl AvatarHandler::onAvatarExpeditionStartReq(
        AvatarHandler *const this,
        const proto::AvatarExpeditionStartReq *req,
        proto::AvatarExpeditionStartRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  int32_t v7; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t AvatarExpeditionNotNoneCount; // r14d
  PlayerAvatarComp *v10; // rax
  PlayerAvatarComp *v11; // r14
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rbx
  PlayerAvatarComp *v14; // r14
  common::milog::MiLogStream *v15; // r14
  PlayerAvatarComp *v16; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerAvatarComp *v18; // rax
  uint64_t ChooseAvatarGuid; // r14
  std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  ExpeditionComp *ExpeditionComp; // r14
  uint32_t v25; // r15d
  uint32_t v26; // eax
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *v27; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-BCh]
  unsigned __int64 v32; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 21 formal_avatar_ptr:440 64 16 16 activity_ptr:464";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarExpeditionStartReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x27u) )
  {
    v7 = 141;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    AvatarExpeditionNotNoneCount = PlayerAvatarComp::getAvatarExpeditionNotNoneCount(AvatarComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getAvatarComp(this->player_);
    if ( AvatarExpeditionNotNoneCount < PlayerAvatarComp::getAvatarExpeditionCountLimit(v10) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = Player::getAvatarComp(this->player_);
      v12 = proto::AvatarExpeditionStartReq::exp_id(req);
      if ( !PlayerAvatarComp::isExpeditionIdInNoneState(v11, v12) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/avatar_handler.cpp",
          "onAvatarExpeditionStartReq",
          436);
        v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v33,
                (const char (*)[40])"expedtion_id not in none state exp_id: ");
        val = proto::AvatarExpeditionStartReq::exp_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = Player::getAvatarComp(this->player_);
        proto::AvatarExpeditionStartReq::avatar_guid(req);
        PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)v14);
        if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/avatar_handler.cpp",
            "onAvatarExpeditionStartReq",
            443);
          v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v33,
                  (const char (*)[33])"find formal_avatar failed guid: ");
          v32 = proto::AvatarExpeditionStartReq::avatar_guid(req);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &v32);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v16 = Player::getAvatarComp(this->player_);
          std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
            (std::shared_ptr<Avatar> *const)(v3 + 64),
            (const std::shared_ptr<FormalAvatar> *)(v3 + 32));
          LOBYTE(v16) = PlayerAvatarComp::isAvatarSwitchClosed(v16, (AvatarPtr *)(v3 + 64));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
          if ( (_BYTE)v16 )
          {
            v7 = 142;
          }
          else
          {
            v17 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            if ( Creature::getLifeState(v17) == LIFE_ALIVE )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v18 = Player::getAvatarComp(this->player_);
              ChooseAvatarGuid = PlayerAvatarComp::getChooseAvatarGuid(v18);
              if ( ChooseAvatarGuid == proto::AvatarExpeditionStartReq::avatar_guid(req) )
              {
                v7 = 154;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getActivityComp(this->player_);
                PlayerActivityComp::findOpenningActivity<ExpeditionActivity>((PlayerActivityComp *const)(v3 + 64));
                if ( std::operator!=<ExpeditionActivity>(0LL, (const std::shared_ptr<ExpeditionActivity> *)(v3 + 64))
                  && (v20 = std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
                      v21 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
                      AvatarId = Avatar::getAvatarId(v21),
                      ExpeditionActivity::isAvatarInExpedition(v20, AvatarId)) )
                {
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/avatar_handler.cpp",
                    "onAvatarExpeditionStartReq",
                    469);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v33,
                    (const char (*)[39])" avatar already in expedition activity");
                  common::milog::MiLogStream::~MiLogStream(&v33);
                  v7 = -1;
                }
                else
                {
                  v23 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
                  ExpeditionComp = FormalAvatar::getExpeditionComp(v23);
                  v25 = proto::AvatarExpeditionStartReq::hour_time(req);
                  v26 = proto::AvatarExpeditionStartReq::exp_id(req);
                  ret = ExpeditionComp::startExpedition(ExpeditionComp, v26, v25);
                  if ( ret )
                  {
                    v7 = ret;
                  }
                  else
                  {
                    v27 = proto::AvatarExpeditionStartRsp::mutable_expedition_info_map(rsp_0);
                    AvatarHandler::fillAllAvatarExpeditionInfo(this, v27);
                    v7 = 0;
                  }
                }
                std::shared_ptr<ExpeditionActivity>::~shared_ptr((std::shared_ptr<ExpeditionActivity> *const)(v3 + 64));
              }
            }
            else
            {
              v7 = 152;
            }
          }
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
      }
    }
    else
    {
      v7 = 153;
    }
  }
  result = v7;
  if ( v34 == (char *)v3 )
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

// Line 485: range 00000000130F0AF8-00000000130F0FB9
int32_t __cdecl AvatarHandler::onAvatarExpeditionCallBackReq(
        AvatarHandler *const this,
        const proto::AvatarExpeditionCallBackReq *req,
        proto::AvatarExpeditionCallBackRsp *rsp_0)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int v7; // eax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  PlayerAvatarComp *v13; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  ExpeditionComp *ExpeditionComp; // rax
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *v16; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  int i; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v4 + 8) = "2 32 8 8 guid:488 64 16 21 formal_avatar_ptr:489";
  *(_QWORD *)(v4 + 16) = AvatarHandler::onAvatarExpeditionCallBackReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  for ( i = 0; ; ++i )
  {
    v7 = proto::AvatarExpeditionCallBackReq::avatar_guid_size(req);
    if ( i >= v7 )
      break;
    *(_QWORD *)(v4 + 32) = proto::AvatarExpeditionCallBackReq::avatar_guid(req, i);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v4 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarExpeditionCallBackReq",
        492);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v22,
             (const char (*)[39])"find formal_avatar failed player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = Player::getAvatarComp(this->player_);
      std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
        &p_avatar_ptr,
        (const std::shared_ptr<FormalAvatar> *)(v4 + 64));
      LOBYTE(v13) = PlayerAvatarComp::isAvatarSwitchClosed(v13, &p_avatar_ptr);
      std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
      if ( (_BYTE)v13 )
      {
        v3 = 142;
        v12 = 1;
        goto LABEL_21;
      }
      v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      ExpeditionComp = FormalAvatar::getExpeditionComp(v14);
      if ( !ExpeditionComp::callBack(ExpeditionComp) )
      {
        v12 = 2;
        goto LABEL_21;
      }
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarExpeditionCallBackReq",
        504);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v22,
             (const char (*)[41])"call back expedition failed player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" avatar_guid: ");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v12 = 0;
LABEL_21:
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 64));
    if ( v12 && v12 != 2 )
      goto LABEL_25;
  }
  v16 = proto::AvatarExpeditionCallBackRsp::mutable_expedition_info_map(rsp_0);
  AvatarHandler::fillAllAvatarExpeditionInfo(this, v16);
  v3 = 0;
LABEL_25:
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

// Line 514: range 00000000130F0FBA-00000000130F131D
int32_t __cdecl AvatarHandler::onAvatarExpeditionGetRewardReq(
        AvatarHandler *const this,
        const proto::AvatarExpeditionGetRewardReq *req,
        proto::AvatarExpeditionGetRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerAvatarComp *AvatarComp; // r14
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ExpeditionComp *ExpeditionComp; // rdx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *v14; // rdx
  int32_t result; // eax
  int ret; // [rsp+24h] [rbp-9Ch]
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 formal_avatar_ptr:515";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarExpeditionGetRewardReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  proto::AvatarExpeditionGetRewardReq::avatar_guid(req);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarExpeditionGetRewardReq",
      518);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"find formal_avatar failed guid: ");
    val = proto::AvatarExpeditionGetRewardReq::avatar_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ExpeditionComp = FormalAvatar::getExpeditionComp(v9);
    ret = ExpeditionComp::takeReward(ExpeditionComp, rsp_0);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarExpeditionGetRewardReq",
        525);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v19,
              (const char (*)[23])"takeReward fail, guid:");
      val = proto::AvatarExpeditionGetRewardReq::avatar_guid(req);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v13, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = ret;
    }
    else
    {
      v14 = proto::AvatarExpeditionGetRewardRsp::mutable_expedition_info_map(rsp_0);
      AvatarHandler::fillAllAvatarExpeditionInfo(this, v14);
      v8 = 0;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
  result = v8;
  if ( v20 == (char *)v3 )
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

// Line 534: range 00000000130F131E-00000000130F1F48
int32_t __cdecl AvatarHandler::onChangeMpTeamAvatarReq(
        AvatarHandler *const this,
        const proto::ChangeMpTeamAvatarReq *req,
        proto::ChangeMpTeamAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint64 v6; // rdx
  int32_t v7; // r14d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  uint32_t Uid; // eax
  const unsigned int *v12; // rdx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  PlayerAvatarComp *v24; // r14
  uint64_t v25; // rax
  common::milog::MiLogStream *v26; // rax
  PlayerAvatarComp *v27; // r14
  uint64_t v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  unsigned int __a; // [rsp+24h] [rbp-18Ch] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __lhs; // [rsp+28h] [rbp-188h] BYREF
  unsigned __int64 __val; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-178h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-150h] BYREF
  char v40[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 7 ret:542 64 4 17 max_allow_num:560 80 4 13 allow_num:561 96 8 8 guid:536 128 16 18 scene"
                        "_team_ptr:543 160 16 13 scene_ptr:549 192 24 12 guid_vec:535";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onChangeMpTeamAvatarReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 192));
  __for_range = proto::ChangeMpTeamAvatarReq::avatar_guid_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v3 + 96) = *__for_begin;
    std::vector<unsigned long>::push_back(
      (std::vector<long unsigned int> *const)(v3 + 192),
      (const std::vector<long unsigned int>::value_type *)(v3 + 96));
    proto::ChangeMpTeamAvatarRsp::add_avatar_guid_list(rsp_0, *(_QWORD *)(v3 + 96));
    ++__for_begin;
  }
  v6 = proto::ChangeMpTeamAvatarReq::cur_avatar_guid(req);
  proto::ChangeMpTeamAvatarRsp::set_cur_avatar_guid(rsp_0, v6);
  *(_DWORD *)(v3 + 48) = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v3 + 128));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onChangeMpTeamAvatarReq",
      546);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v39, (const char (*)[23])"cannot find scene_team");
    common::milog::MiLogStream::~MiLogStream(&v39);
    v7 = *(_DWORD *)(v3 + 48);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 160));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onChangeMpTeamAvatarReq",
        552);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v39, (const char (*)[22])"cannot find cur scene");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v7 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      if ( !PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/avatar_handler.cpp",
          "onChangeMpTeamAvatarReq",
          557);
        v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v39, (const char (*)[32])off_24F2DC20);
        common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v39);
        v7 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        *(_DWORD *)(v3 + 64) = 4;
        v10 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        __a = SceneTeam::getAllowAvatarNum(v10, Uid);
        v12 = std::min<unsigned int>(&__a, (const unsigned int *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 80) = *v12;
        if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 192)) <= *(unsigned int *)(v3 + 80) )
        {
          __val = proto::ChangeMpTeamAvatarReq::cur_avatar_guid(req);
          M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
          v17._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
          *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(v17, (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current, &__val);
          __lhs._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
          if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
                 &__lhs,
                 (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/avatar_handler.cpp",
              "onChangeMpTeamAvatarReq",
              569);
            v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v39,
                    (const char (*)[41])"team size overflow, req cur_avatar_guid:");
            *(_QWORD *)(v3 + 96) = proto::ChangeMpTeamAvatarReq::cur_avatar_guid(req);
            v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v18,
                    (const unsigned __int64 *)(v3 + 96));
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])" not in vec:");
            common::milog::MiLogStream::operator<<<unsigned long>(
              v20,
              (const std::vector<long unsigned int> *)(v3 + 192));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v7 = 122;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarComp = Player::getAvatarComp(this->player_);
            *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarGuidVecAllFormal(
                                     AvatarComp,
                                     (const std::vector<long unsigned int> *)(v3 + 192));
            if ( *(_DWORD *)(v3 + 48) )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/avatar_handler.cpp",
                "onChangeMpTeamAvatarReq",
                575);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v39,
                (const char (*)[32])"checkAvatarTeamAllFormal failed");
              common::milog::MiLogStream::~MiLogStream(&v39);
              v7 = *(_DWORD *)(v3 + 48);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v22 = Player::getAvatarComp(this->player_);
              *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                                       v22,
                                       (const std::vector<long unsigned int> *)(v3 + 192));
              if ( *(_DWORD *)(v3 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v39,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/avatar_handler.cpp",
                  "onChangeMpTeamAvatarReq",
                  581);
                v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        &v39,
                        (const char (*)[48])"checkAvatarTeamCanJoinSceneTeam fails. retcode:");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v39);
                v7 = *(_DWORD *)(v3 + 48);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v24 = Player::getAvatarComp(this->player_);
                v25 = proto::ChangeMpTeamAvatarReq::cur_avatar_guid(req);
                *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkChangeCurAvatar(v24, v25);
                if ( *(_DWORD *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v39,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/handler/avatar_handler.cpp",
                    "onChangeMpTeamAvatarReq",
                    587);
                  v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          &v39,
                          (const char (*)[27])"checkChangeCurAvatar fails");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v39);
                  v7 = *(_DWORD *)(v3 + 48);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v27 = Player::getAvatarComp(this->player_);
                  std::shared_ptr<Scene>::shared_ptr(&p_dest_scene_ptr, (const std::shared_ptr<Scene> *)(v3 + 160));
                  v28 = proto::ChangeMpTeamAvatarReq::cur_avatar_guid(req);
                  *(_DWORD *)(v3 + 48) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                           v27,
                                           (const std::vector<long unsigned int> *)(v3 + 192),
                                           v28,
                                           &p_dest_scene_ptr,
                                           CHANGE_SCENE_TEAM_REASON_MP_CHANGE);
                  std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
                  if ( *(_DWORD *)(v3 + 48) )
                  {
                    common::milog::MiLogStream::create(
                      &v39,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/avatar_handler.cpp",
                      "onChangeMpTeamAvatarReq",
                      593);
                    v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v39,
                            (const char (*)[38])"setSceneTeamAndAddToScene fails, ret:");
                    common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v39);
                    v7 = *(_DWORD *)(v3 + 48);
                  }
                  else
                  {
                    v7 = 0;
                  }
                }
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/avatar_handler.cpp",
            "onChangeMpTeamAvatarReq",
            564);
          v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v39,
                  (const char (*)[30])"team size overflow, req size:");
          *(_QWORD *)(v3 + 96) = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 192));
          v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v13,
                  (const unsigned __int64 *)(v3 + 96));
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" allow size:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v39);
          v7 = *(_DWORD *)(v3 + 48);
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 128));
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 192));
  result = v7;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 600: range 00000000130F226E-00000000130F2EB2
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl AvatarHandler::onChangeTeamNameReq(AvatarHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v6; // rsi
  google::protobuf::int32 v7; // eax
  PlayerAvatarComp *AvatarComp; // r15
  uint32_t v9; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // r15
  int v13; // r15d
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v14; // rsi
  common::minet::Packet *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v19; // rax
  GameserverService *v20; // r14
  const std::shared_ptr<common::minet::Packet> *v21; // rsi
  __suseconds_t v22; // rdx
  common::minet::PacketPtr v23; // rdi
  common::minet::Packet *v24; // rax
  common::minet::Packet *v25; // rax
  common::minet::PacketPtr v26; // rdi
  common::minet::Packet *v27; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v28; // rsi
  common::minet::Packet *v29; // rax
  common::milog::MiLogStream *v30; // r15
  GameserverService *v31; // r14
  const std::shared_ptr<common::minet::Packet> *v32; // rsi
  common::milog::MiLogStream *v33; // rcx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+23h] [rbp-2ADh] BYREF
  unsigned int val; // [rsp+24h] [rbp-2ACh] BYREF
  uint32_t team_name_max_length; // [rsp+28h] [rbp-2A8h]
  int32_t ret; // [rsp+2Ch] [rbp-2A4h]
  uint32_t async_http_type; // [rsp+30h] [rbp-2A0h]
  int32_t ret_0; // [rsp+34h] [rbp-29Ch]
  const proto::ChangeTeamNameReq *req; // [rsp+38h] [rbp-298h]
  proto::ChangeTeamNameRsp *rsp_0; // [rsp+40h] [rbp-290h]
  AvatarTeam *avatar_team_ptr; // [rsp+48h] [rbp-288h]
  std::shared_ptr<common::minet::Packet> v45; // [rsp+50h] [rbp-280h] BYREF
  AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v46; // [rsp+60h] [rbp-270h] BYREF
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-250h] BYREF
  char v48[560]; // [rsp+A0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 16 11 req_ptr:601 80 16 11 rsp_ptr:601 112 16 9 timer:623 144 32 13 team_name:612 208 240 12 http_req:623";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onChangeTeamNameReq;
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
  common::minet::Packet::getConstProto<proto::ChangeTeamNameReq>((common::minet::Packet *const)(v3 + 48));
  if ( std::operator==<proto::ChangeTeamNameReq const>(
         (const std::shared_ptr<const proto::ChangeTeamNameReq> *)(v3 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onChangeTeamNameReq",
      601);
    common::milog::MiLogStream::operator()(&v47, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v2 = -1;
    goto LABEL_38;
  }
  req = std::__shared_ptr_access<proto::ChangeTeamNameReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeTeamNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  common::tools::perf::make_shared<proto::ChangeTeamNameRsp>();
  rsp_0 = std::__shared_ptr_access<proto::ChangeTeamNameRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeTeamNameRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  proto::ChangeTeamNameRsp::set_retcode(rsp_0, -1);
  v7 = proto::ChangeTeamNameReq::team_id(req);
  proto::ChangeTeamNameRsp::set_team_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  v9 = proto::ChangeTeamNameReq::team_id(req);
  avatar_team_ptr = PlayerAvatarComp::findAvatarTeam(AvatarComp, v9);
  if ( avatar_team_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 112));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    team_name_max_length = ConstValueExcelConfigMgr::getTeamNameMaxLength(&v10->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 112));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v47, off_24F2DF60, &__a);
    v11 = proto::ChangeTeamNameReq::team_name[abi:cxx11](req);
    common::tools::StringUtils::trim((std::string *)(v3 + 144), v11, (const std::string *)&v47, 1);
    std::string::~string(&v47);
    std::allocator<char>::~allocator(&__a);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v3 + 144), team_name_max_length);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onChangeTeamNameReq",
        616);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v47,
              (const char (*)[29])"checkStrUtf8Len fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v47);
      proto::ChangeTeamNameRsp::set_retcode(rsp_0, ret);
      v13 = 0;
    }
    else
    {
      v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v14);
      if ( common::minet::Packet::getExt(v15, 2u) )
      {
        v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v28);
        if ( common::minet::Packet::getExt(v29, 3u) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/avatar_handler.cpp",
            "onChangeTeamNameReq",
            630);
          v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v47,
                  (const char (*)[38])"setTeamName failed, word illegal uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
          common::milog::MiLogStream::~MiLogStream(&v47);
          proto::ChangeTeamNameRsp::set_retcode(rsp_0, 156);
          v13 = 0;
        }
        else
        {
          AvatarTeam::setTeamName(avatar_team_ptr, (const std::string *)(v3 + 144));
          proto::ChangeTeamNameRsp::set_team_name(rsp_0, (const std::string *)(v3 + 144));
          proto::ChangeTeamNameRsp::set_retcode(rsp_0, 0);
          v13 = 2;
        }
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v45);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
        if ( *(char *)(((unsigned __int64)&v16->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v16 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v16->is_word_filter_use_remote);
        is_word_filter_use_remote = v16->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v19 = proto::ChangeTeamNameReq::team_name[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v3 + 208), v19, player, 2u);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x643u);
          v20 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v46.__packet_ptr, v21);
          v22 = *(_QWORD *)(v3 + 120);
          v46.__timer.start_tv_.tv_sec = *(_QWORD *)(v3 + 112);
          v46.__timer.start_tv_.tv_usec = v22;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v47,
            &v46);
          ret_0 = GameserverService::asyncHttpRequest(
                    v20,
                    (const common::minet::http_client::HttpRequest *)(v3 + 208),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v47);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v47);
          AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v46);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/avatar_handler.cpp",
              "onChangeTeamNameReq",
              623);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v47,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v47);
            v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
            common::minet::Packet::setExt(v24, 2u, 1u);
            v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
            common::minet::Packet::setExt(v25, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v45,
              (const std::shared_ptr<common::minet::Packet> *)v23._M_refcount._M_pi);
            v23._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v45;
            ServiceBox::pushPacketToService(v23);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v45);
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 208));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
        }
        else
        {
          v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26._M_refcount._M_pi);
          common::minet::Packet::setExt(v27, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v45,
            (const std::shared_ptr<common::minet::Packet> *)v26._M_refcount._M_pi);
          v26._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v45;
          ServiceBox::pushPacketToService(v26);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v45);
        }
        v2 = 0;
        v13 = 1;
      }
    }
    std::string::~string((void *)(v3 + 144));
    if ( v13 && v13 != 2 )
      goto LABEL_37;
  }
  else
  {
    proto::ChangeTeamNameRsp::set_retcode(rsp_0, 120);
  }
  v31 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v45, v32);
  std::shared_ptr<proto::ChangeTeamNameRsp>::shared_ptr(
    (std::shared_ptr<proto::ChangeTeamNameRsp> *const)(v3 + 112),
    (const std::shared_ptr<proto::ChangeTeamNameRsp> *)(v3 + 80));
  LOBYTE(v31) = ServiceBase::sendRsp<proto::ChangeTeamNameRsp>(
                  v31,
                  (std::shared_ptr<proto::ChangeTeamNameRsp> *)(v3 + 112),
                  &v45) != 0;
  std::shared_ptr<proto::ChangeTeamNameRsp>::~shared_ptr((std::shared_ptr<proto::ChangeTeamNameRsp> *const)(v3 + 112));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v45);
  if ( (_BYTE)v31 )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onChangeTeamNameReq",
      642);
    v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v47,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v33, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v2 = -1;
  }
  else
  {
    v2 = proto::ChangeTeamNameRsp::retcode(rsp_0);
  }
LABEL_37:
  std::shared_ptr<proto::ChangeTeamNameRsp>::~shared_ptr((std::shared_ptr<proto::ChangeTeamNameRsp> *const)(v3 + 80));
LABEL_38:
  std::shared_ptr<proto::ChangeTeamNameReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeTeamNameReq> *const)(v3 + 48));
  result = v2;
  if ( v48 == (char *)v3 )
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

// Line 623: range 000000001319D204-000000001319D28D
void __cdecl AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 623: range 000000001319D358-000000001319D3E1
void __cdecl AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 623: range 00000000130F1F4A-00000000130F2240
void __cdecl AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::ChangeTeamNameReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:623";
  *(_QWORD *)(v4 + 16) = AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::ChangeTeamNameReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::ChangeTeamNameReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ChangeTeamNameReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::ChangeTeamNameReq::mutable_team_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::ChangeTeamNameReq>::~shared_ptr((std::shared_ptr<proto::ChangeTeamNameReq> *const)(v4 + 32));
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

// Line 623: range 00000000130F2242-00000000130F226C
void __cdecl AvatarHandler::onChangeTeamNameReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        AvatarHandler::onChangeTeamNameReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 649: range 00000000130F2EB4-00000000130F316C
int32_t __cdecl AvatarHandler::onFocusAvatarReq(
        AvatarHandler *const this,
        const proto::FocusAvatarReq *req,
        proto::FocusAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerAvatarComp *AvatarComp; // r14
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  FormalAvatar *v9; // r14
  bool is_focus; // al
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isFocus; // dl
  google::protobuf::uint64 v13; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 32 16 21 formal_avatar_ptr:650";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onFocusAvatarReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  proto::FocusAvatarReq::avatar_guid(req);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onFocusAvatarReq",
      653);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v17,
           (const char (*)[30])"findFormalAvatar failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = 104;
  }
  else
  {
    v9 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    is_focus = proto::FocusAvatarReq::is_focus(req);
    FormalAvatar::setFocus(v9, is_focus);
    v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isFocus = FormalAvatar::isFocus(v11);
    proto::FocusAvatarRsp::set_is_focus(rsp_0, isFocus);
    v13 = proto::FocusAvatarReq::avatar_guid(req);
    proto::FocusAvatarRsp::set_avatar_guid(rsp_0, v13);
    v8 = 0;
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
  result = v8;
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

// Line 663: range 00000000130F316E-00000000130F346B
int32_t __cdecl AvatarHandler::onAvatarWearFlycloakReq(
        AvatarHandler *const this,
        const proto::AvatarWearFlycloakReq *req,
        proto::AvatarWearFlycloakRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint64 v6; // rdx
  google::protobuf::uint32 v7; // edx
  uint32_t v8; // eax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  FashionComp *FashionComp; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-A0h] BYREF
  uint32_t flycloak_id; // [rsp+24h] [rbp-9Ch]
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 formal_avatar_ptr:673";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarWearFlycloakReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_comp = Player::getAvatarComp(this->player_);
  flycloak_id = proto::AvatarWearFlycloakReq::flycloak_id(req);
  v6 = proto::AvatarWearFlycloakReq::avatar_guid(req);
  proto::AvatarWearFlycloakRsp::set_avatar_guid(rsp_0, v6);
  v7 = proto::AvatarWearFlycloakReq::flycloak_id(req);
  proto::AvatarWearFlycloakRsp::set_flycloak_id(rsp_0, v7);
  v8 = proto::AvatarWearFlycloakReq::flycloak_id(req);
  if ( !PlayerAvatarComp::hasFlycloak(avatar_comp, v8) )
  {
    v9 = 162;
  }
  else
  {
    proto::AvatarWearFlycloakReq::avatar_guid(req);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)avatar_comp);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarWearFlycloakReq",
        676);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v18,
              (const char (*)[30])"findFormalAvatar failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v9 = 104;
    }
    else
    {
      v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      FashionComp = Avatar::getFashionComp(v11);
      v9 = FashionComp::wearFlycloak(FashionComp, flycloak_id);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
  }
  result = v9;
  if ( v19 == (char *)v3 )
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

// Line 685: range 00000000130F346C-00000000130F376E
int32_t __cdecl AvatarHandler::onAvatarFetterLevelRewardReq(
        AvatarHandler *const this,
        const proto::AvatarFetterLevelRewardReq *req,
        proto::AvatarFetterLevelRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  google::protobuf::uint64 v6; // rdx
  google::protobuf::uint32 v7; // edx
  PlayerAvatarComp *AvatarComp; // r14
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  FetterComp *FetterComp; // r14
  uint32_t v13; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 reward_id:694 64 16 21 formal_avatar_ptr:688";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarFetterLevelRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  v6 = proto::AvatarFetterLevelRewardReq::avatar_guid(req);
  proto::AvatarFetterLevelRewardRsp::set_avatar_guid(rsp_0, v6);
  v7 = proto::AvatarFetterLevelRewardReq::fetter_level(req);
  proto::AvatarFetterLevelRewardRsp::set_fetter_level(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  proto::AvatarFetterLevelRewardReq::avatar_guid(req);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarFetterLevelRewardReq",
      691);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v17,
           (const char (*)[30])"findFormalAvatar failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v10 = 104;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = 0;
    v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    FetterComp = FormalAvatar::getFetterComp(v11);
    v13 = proto::AvatarFetterLevelRewardReq::fetter_level(req);
    ret = FetterComp::getFetterLevelReward(FetterComp, v13, (uint32_t *)(v3 + 48));
    proto::AvatarFetterLevelRewardRsp::set_reward_id(rsp_0, *(_DWORD *)(v3 + 48));
    v10 = ret;
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  result = v10;
  if ( v18 == (char *)v3 )
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

// Line 702: range 00000000130F3770-00000000130F39DA
int32_t __cdecl AvatarHandler::onAvatarPromoteGetRewardReq(
        AvatarHandler *const this,
        const proto::AvatarPromoteGetRewardReq *req,
        proto::AvatarPromoteGetRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-A4h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 promote_level:704 48 4 13 reward_id:707 64 8 8 guid:703";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarPromoteGetRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = proto::AvatarPromoteGetRewardReq::avatar_guid(req);
  *(_DWORD *)(v3 + 32) = proto::AvatarPromoteGetRewardReq::promote_level(req);
  proto::AvatarPromoteGetRewardRsp::set_avatar_guid(rsp_0, *(_QWORD *)(v3 + 64));
  proto::AvatarPromoteGetRewardRsp::set_promote_level(rsp_0, *(_DWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  ret = PlayerAvatarComp::takeAvatarPromoteReward(
          AvatarComp,
          *(_QWORD *)(v3 + 64),
          *(_DWORD *)(v3 + 32),
          (uint32_t *)(v3 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarPromoteGetRewardReq",
      711);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v13,
           (const char (*)[38])"takeAvatarPromoteReward failed, guid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v7,
           (const unsigned __int64 *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", promote_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    proto::AvatarPromoteGetRewardRsp::set_reward_id(rsp_0, *(_DWORD *)(v3 + 48));
  }
  result = ret;
  if ( v14 == (char *)v3 )
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

// Line 722: range 00000000130F39DC-00000000130F3E89
int32_t __cdecl AvatarHandler::onAvatarChangeCostumeReq(
        AvatarHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v7; // rcx
  PlayerAvatarComp *v8; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  SkillComp *SkillComp; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::AvatarChangeCostumeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-F0h]
  std::__shared_ptr_access<proto::AvatarChangeCostumeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<FormalAvatar> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 req_ptr:723 64 16 11 rsp_ptr:723 96 16 14 avatar_ptr:734";
  *(_QWORD *)(v2 + 16) = AvatarHandler::onAvatarChangeCostumeReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AvatarChangeCostumeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AvatarChangeCostumeReq const>(
         (const std::shared_ptr<const proto::AvatarChangeCostumeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarChangeCostumeReq",
      723);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AvatarChangeCostumeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarChangeCostumeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AvatarChangeCostumeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AvatarChangeCostumeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AvatarChangeCostumeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AvatarChangeCostumeRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::avatarChangeCostume(AvatarComp, req, rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Player::sendProto(this->player_, rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/avatar_handler.cpp",
        "onAvatarChangeCostumeReq",
        727);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v15,
             (const char (*)[25])"send rsp failed, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    if ( proto::AvatarChangeCostumeRsp::retcode(rsp_0) )
    {
      v5 = proto::AvatarChangeCostumeRsp::retcode(rsp_0);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getAvatarComp(this->player_);
      proto::AvatarChangeCostumeReq::avatar_guid(req);
      PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)&__r, (uint64_t)v8);
      std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>((std::shared_ptr<Avatar> *const)(v2 + 96), &__r);
      std::shared_ptr<FormalAvatar>::~shared_ptr(&__r);
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
      {
        v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        SkillComp = Avatar::getSkillComp(v9);
        SkillComp::notifySkillInfo(SkillComp);
      }
      v5 = proto::AvatarChangeCostumeRsp::retcode(rsp_0);
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    std::shared_ptr<proto::AvatarChangeCostumeRsp>::~shared_ptr((std::shared_ptr<proto::AvatarChangeCostumeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AvatarChangeCostumeReq const>::~shared_ptr((std::shared_ptr<const proto::AvatarChangeCostumeReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 744: range 00000000130F3E8A-00000000130F4172
int32_t __cdecl AvatarHandler::onAvatarChangeAnimHashReq(
        AvatarHandler *const this,
        const proto::AvatarChangeAnimHashReq *req,
        proto::AvatarChangeAnimHashRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  Avatar *v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t AnimHash; // edx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  int32_t result; // eax
  google::protobuf::uint32 anim_hash; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:745 64 16 14 avatar_ptr:748";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onAvatarChangeAnimHashReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = proto::AvatarChangeAnimHashReq::avatar_guid(req);
  anim_hash = proto::AvatarChangeAnimHashReq::anim_hash(req);
  proto::AvatarChangeAnimHashRsp::set_avatar_guid(rsp_0, *(_QWORD *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
  if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Avatar::setAnimHash(v7, anim_hash);
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    AnimHash = Avatar::getAnimHash(v8);
    proto::AvatarChangeAnimHashRsp::set_anim_hash(rsp_0, AnimHash);
    v10 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/avatar_handler.cpp",
      "onAvatarChangeAnimHashReq",
      756);
    v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v17,
            (const char (*)[47])"AvatarChangeAnimHash fail, not find avatar id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v3 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v10 = 104;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  result = v10;
  if ( v18 == (char *)v3 )
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

// Line 763: range 00000000130F4174-00000000130F4E64
int32_t __cdecl AvatarHandler::onPersistentDungeonSwitchAvatarReq(
        AvatarHandler *const this,
        const proto::PersistentDungeonSwitchAvatarReq *req,
        proto::PersistentDungeonSwitchAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerAvatarComp *v22; // r14
  uint64_t v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerAvatarComp *v25; // r14
  uint64_t v26; // rax
  common::milog::MiLogStream *v27; // rax
  google::protobuf::uint64 v28; // rdx
  google::protobuf::RepeatedField<long unsigned int> *v29; // r14
  const google::protobuf::RepeatedField<long unsigned int> *v30; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-18Ch] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __lhs; // [rsp+28h] [rbp-188h] BYREF
  unsigned __int64 __val; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-178h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-150h] BYREF
  char v41[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 ret:797 64 8 8 guid:765 96 16 18 scene_team_ptr:779 128 16 13 scene_ptr:785 160 16 32 p"
                        "ersistent_dungeon_scene_ptr:791 192 24 12 guid_vec:764";
  *(_QWORD *)(v3 + 16) = AvatarHandler::onPersistentDungeonSwitchAvatarReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 192));
  __for_range = proto::PersistentDungeonSwitchAvatarReq::avatar_team_guid_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v3 + 64) = *__for_begin;
    std::vector<unsigned long>::push_back(
      (std::vector<long unsigned int> *const)(v3 + 192),
      (const std::vector<long unsigned int>::value_type *)(v3 + 64));
    ++__for_begin;
  }
  if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 192)) <= 4 )
  {
    __val = proto::PersistentDungeonSwitchAvatarReq::cur_avatar_guid(req);
    M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
    v10._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
    *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(v10, (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current, &__val);
    __lhs._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 192))._M_current;
    if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
           &__lhs,
           (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onPersistentDungeonSwitchAvatarReq",
        776);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v40, (const char (*)[21])off_24F2E640);
      *(_QWORD *)(v3 + 64) = proto::PersistentDungeonSwitchAvatarReq::cur_avatar_guid(req);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" not in vec:");
      common::milog::MiLogStream::operator<<<unsigned long>(v13, (const std::vector<long unsigned int> *)(v3 + 192));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v8 = 122;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v3 + 96));
      if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/avatar_handler.cpp",
          "onPersistentDungeonSwitchAvatarReq",
          782);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v40,
          (const char (*)[23])"cannot find scene_team");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/avatar_handler.cpp",
            "onPersistentDungeonSwitchAvatarReq",
            788);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v40,
            (const char (*)[22])"cannot find cur scene");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v8 = -1;
        }
        else
        {
          std::dynamic_pointer_cast<PersistentDungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 160));
          if ( std::operator==<PersistentDungeonScene>(0LL, (const std::shared_ptr<PersistentDungeonScene> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/avatar_handler.cpp",
              "onPersistentDungeonSwitchAvatarReq",
              794);
            v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v40,
                    (const char (*)[52])"persistent_dungeon_scene_ptr is null. cur_scene_id:");
            v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            val = Scene::getSceneId(v15);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            common::milog::MiLogStream::~MiLogStream(&v40);
            v8 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 48) = Player::checkIsInSafeStateForChangeTeam(this->player_, 1);
            if ( *(_DWORD *)(v3 + 48) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/avatar_handler.cpp",
                "onPersistentDungeonSwitchAvatarReq",
                800);
              v16 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      &v40,
                      (const char (*)[63])"checkIsInSafeStateForChangeTeam fails, not in safe state, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", ret:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v40);
              v8 = *(_DWORD *)(v3 + 48);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarGuidVecAllFormal(
                                       AvatarComp,
                                       (const std::vector<long unsigned int> *)(v3 + 192));
              if ( *(_DWORD *)(v3 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/avatar_handler.cpp",
                  "onPersistentDungeonSwitchAvatarReq",
                  806);
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v40,
                  (const char (*)[32])"checkAvatarTeamAllFormal failed");
                common::milog::MiLogStream::~MiLogStream(&v40);
                v8 = *(_DWORD *)(v3 + 48);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v20 = Player::getAvatarComp(this->player_);
                *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                                         v20,
                                         (const std::vector<long unsigned int> *)(v3 + 192));
                if ( *(_DWORD *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v40,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/handler/avatar_handler.cpp",
                    "onPersistentDungeonSwitchAvatarReq",
                    812);
                  v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v40,
                          (const char (*)[48])"checkAvatarTeamCanJoinSceneTeam fails. retcode:");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v40);
                  v8 = *(_DWORD *)(v3 + 48);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v22 = Player::getAvatarComp(this->player_);
                  v23 = proto::PersistentDungeonSwitchAvatarReq::cur_avatar_guid(req);
                  *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkChangeCurAvatar(v22, v23);
                  if ( *(_DWORD *)(v3 + 48) )
                  {
                    common::milog::MiLogStream::create(
                      &v40,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/handler/avatar_handler.cpp",
                      "onPersistentDungeonSwitchAvatarReq",
                      818);
                    v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            &v40,
                            (const char (*)[27])"checkChangeCurAvatar fails");
                    common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v40);
                    v8 = *(_DWORD *)(v3 + 48);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v25 = Player::getAvatarComp(this->player_);
                    std::shared_ptr<Scene>::shared_ptr(&p_dest_scene_ptr, (const std::shared_ptr<Scene> *)(v3 + 128));
                    v26 = proto::PersistentDungeonSwitchAvatarReq::cur_avatar_guid(req);
                    *(_DWORD *)(v3 + 48) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                             v25,
                                             (const std::vector<long unsigned int> *)(v3 + 192),
                                             v26,
                                             &p_dest_scene_ptr,
                                             CHANGE_SCENE_TEAM_REASON_PERSISTENT_DUNGEON);
                    std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
                    if ( *(_DWORD *)(v3 + 48) )
                    {
                      common::milog::MiLogStream::create(
                        &v40,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/avatar_handler.cpp",
                        "onPersistentDungeonSwitchAvatarReq",
                        824);
                      v27 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                              &v40,
                              (const char (*)[38])"setSceneTeamAndAddToScene fails, ret:");
                      common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v3 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v40);
                      v8 = *(_DWORD *)(v3 + 48);
                    }
                    else
                    {
                      v28 = proto::PersistentDungeonSwitchAvatarReq::cur_avatar_guid(req);
                      proto::PersistentDungeonSwitchAvatarRsp::set_cur_avatar_guid(rsp_0, v28);
                      v29 = proto::PersistentDungeonSwitchAvatarRsp::mutable_avatar_team_guid_list(rsp_0);
                      v30 = proto::PersistentDungeonSwitchAvatarReq::avatar_team_guid_list(req);
                      google::protobuf::RepeatedField<unsigned long>::CopyFrom(v29, v30);
                      v8 = 0;
                    }
                  }
                }
              }
            }
          }
          std::shared_ptr<PersistentDungeonScene>::~shared_ptr((std::shared_ptr<PersistentDungeonScene> *const)(v3 + 160));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      }
      std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onPersistentDungeonSwitchAvatarReq",
      771);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v40,
           (const char (*)[33])"avatar_guid_list_size too large:");
    *(_QWORD *)(v3 + 64) = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 192));
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v8 = -1;
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 192));
  result = v8;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 834: range 00000000130F4E66-00000000130F4EB8
int32_t __cdecl AvatarHandler::onAddBackupAvatarTeamReq(
        AvatarHandler *const this,
        const proto::AddBackupAvatarTeamReq *req,
        proto::AddBackupAvatarTeamRsp *rsp_0)
{
  PlayerAvatarComp *AvatarComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  return PlayerAvatarComp::checkAndAddBackupAvatarTeam(AvatarComp);
};

// Line 840: range 00000000130F4EBA-00000000130F4F34
int32_t __cdecl AvatarHandler::onDelBackupAvatarTeamReq(
        AvatarHandler *const this,
        const proto::DelBackupAvatarTeamReq *req,
        proto::DelBackupAvatarTeamRsp *rsp_0)
{
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t backup_team_id; // [rsp+2Ch] [rbp-4h]

  backup_team_id = proto::DelBackupAvatarTeamReq::backup_avatar_team_id(req);
  proto::DelBackupAvatarTeamRsp::set_backup_avatar_team_id(rsp_0, backup_team_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  return PlayerAvatarComp::checkAndDelBackupAvatarTeam(AvatarComp, backup_team_id);
};

// Line 847: range 00000000130F525A-00000000130F6450
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl AvatarHandler::onItemRenameAvatarReq(AvatarHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  const std::string *v7; // rax
  time_t NextAvatarRenameTime; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v11; // rsi
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v16; // rax
  GameserverService *v17; // r14
  const std::shared_ptr<common::minet::Packet> *v18; // rsi
  __suseconds_t v19; // rdx
  common::minet::PacketPtr v20; // rdi
  common::minet::Packet *v21; // rax
  common::minet::Packet *v22; // rax
  common::minet::PacketPtr v23; // rdi
  common::minet::Packet *v24; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v25; // rsi
  common::minet::Packet *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v32; // r14
  PlayerItemComp *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  GameserverService *v40; // r14
  const std::shared_ptr<common::minet::Packet> *v41; // rsi
  common::milog::MiLogStream *v42; // rcx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-2E9h] BYREF
  unsigned int val; // [rsp+18h] [rbp-2E8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-2E4h]
  uint32_t async_http_type; // [rsp+20h] [rbp-2E0h]
  int32_t ret_0; // [rsp+24h] [rbp-2DCh]
  int32_t ret_1; // [rsp+28h] [rbp-2D8h]
  uint32_t avatar_id; // [rsp+2Ch] [rbp-2D4h]
  const proto::ItemRenameAvatarReq *req; // [rsp+30h] [rbp-2D0h]
  proto::ItemRenameAvatarRsp *rsp_0; // [rsp+38h] [rbp-2C8h]
  PlayerAvatarComp *avatar_comp; // [rsp+40h] [rbp-2C0h]
  const data::AvatarRenameExcelConfig *rename_config_ptr; // [rsp+48h] [rbp-2B8h]
  AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v55; // [rsp+50h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-290h] BYREF
  char v57[624]; // [rsp+90h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 13 rename_id:849 48 8 10 reason:912 80 16 11 req_ptr:848 112 16 11 rsp_ptr:848 144 16 9 t"
                        "imer:875 176 16 9 param:904 208 32 15 avatar_name:850 272 240 12 http_req:875";
  *(_QWORD *)(v2 + 16) = AvatarHandler::onItemRenameAvatarReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::ItemRenameAvatarReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::ItemRenameAvatarReq const>(
         (const std::shared_ptr<const proto::ItemRenameAvatarReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onItemRenameAvatarReq",
      848);
    common::milog::MiLogStream::operator()(&v56, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v6 = -1;
    goto LABEL_63;
  }
  req = std::__shared_ptr_access<proto::ItemRenameAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ItemRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  common::tools::perf::make_shared<proto::ItemRenameAvatarRsp>();
  rsp_0 = std::__shared_ptr_access<proto::ItemRenameAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ItemRenameAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  proto::ItemRenameAvatarRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v2 + 32) = proto::ItemRenameAvatarReq::rename_id(req);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v56, off_24F2DF60, &__a);
  v7 = proto::ItemRenameAvatarReq::avatar_name[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v2 + 208), v7, (const std::string *)&v56, 1);
  std::string::~string(&v56);
  std::allocator<char>::~allocator(&__a);
  proto::ItemRenameAvatarRsp::set_rename_id(rsp_0, *(_DWORD *)(v2 + 32));
  proto::ItemRenameAvatarRsp::set_retcode(rsp_0, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_comp = Player::getAvatarComp(this->player_);
  NextAvatarRenameTime = PlayerAvatarComp::getNextAvatarRenameTime(avatar_comp);
  if ( NextAvatarRenameTime <= common::tools::TimeUtils::getNow() )
  {
    ret = PlayerAvatarComp::checkItemAvatarRename(avatar_comp, *(_DWORD *)(v2 + 32), (const std::string *)(v2 + 208));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/avatar_handler.cpp",
        "onItemRenameAvatarReq",
        868);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v56,
              (const char (*)[35])"checkItemAvatarRename failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v56);
      proto::ItemRenameAvatarRsp::set_retcode(rsp_0, ret);
    }
    else
    {
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v11);
      if ( !common::minet::Packet::getExt(v12, 2u) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 176));
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        if ( *(char *)(((unsigned __int64)&v13->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
          v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->is_word_filter_use_remote);
        is_word_filter_use_remote = v13->is_word_filter_use_remote;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
        if ( is_word_filter_use_remote )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v16 = proto::ItemRenameAvatarReq::avatar_name[abi:cxx11](req);
          RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 272), v16, player, 0x12u);
          async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x6D6u);
          v17 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v55.__packet_ptr, v18);
          v19 = *(_QWORD *)(v2 + 152);
          v55.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 144);
          v55.__timer.start_tv_.tv_usec = v19;
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v56,
            &v55);
          ret_0 = GameserverService::asyncHttpRequest(
                    v17,
                    (const common::minet::http_client::HttpRequest *)(v2 + 272),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v56);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v56);
          AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v55);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/avatar_handler.cpp",
              "onItemRenameAvatarReq",
              875);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v56,
              (const char (*)[23])"asyncHttpRequest fails");
            common::milog::MiLogStream::~MiLogStream(&v56);
            v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v20._M_refcount._M_pi);
            common::minet::Packet::setExt(v21, 2u, 1u);
            v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v20._M_refcount._M_pi);
            common::minet::Packet::setExt(v22, 3u, 4u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)(v2 + 176),
              (const std::shared_ptr<common::minet::Packet> *)v20._M_refcount._M_pi);
            v20._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 176);
            ServiceBox::pushPacketToService(v20);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176));
          }
          common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 272));
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
        }
        else
        {
          v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v23._M_refcount._M_pi);
          common::minet::Packet::setExt(v24, 2u, 1u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)(v2 + 176),
            (const std::shared_ptr<common::minet::Packet> *)v23._M_refcount._M_pi);
          v23._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 176);
          ServiceBox::pushPacketToService(v23);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176));
        }
        v6 = 0;
        goto LABEL_62;
      }
      v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v25);
      if ( common::minet::Packet::getExt(v26, 3u) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/avatar_handler.cpp",
          "onItemRenameAvatarReq",
          882);
        v27 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v56,
                (const char (*)[40])"checkNickName failed, word illegal uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::~MiLogStream(&v56);
        proto::ItemRenameAvatarRsp::set_retcode(rsp_0, 132);
      }
    }
  }
  else
  {
    v9 = PlayerAvatarComp::getNextAvatarRenameTime(avatar_comp);
    proto::ItemRenameAvatarRsp::set_cd_time(rsp_0, v9);
    proto::ItemRenameAvatarRsp::set_retcode(rsp_0, 175);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 176));
  v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
  rename_config_ptr = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(
                        &v28->design_config.txt_config_mgr.rename_config_mgr,
                        *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
  if ( !rename_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onItemRenameAvatarReq",
      891);
    v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v56,
            (const char (*)[39])"cannot find rename config, rename_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v56);
    proto::ItemRenameAvatarRsp::set_retcode(rsp_0, -1);
  }
  if ( rename_config_ptr && !proto::ItemRenameAvatarRsp::retcode(rsp_0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( rename_config_ptr->type == AVATAR_RENAME_TYPE_WANDERER )
    {
      *(_QWORD *)(v2 + 176) = 0LL;
      *(_QWORD *)(v2 + 184) = 0LL;
      *(_DWORD *)(v2 + 180) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->rename_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rename_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config_ptr->rename_item_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 176) = rename_config_ptr->rename_item_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/avatar_handler.cpp",
          "onItemRenameAvatarReq",
          908);
        v32 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v56,
                (const char (*)[42])"wanderer rename item is not enough!, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
        common::milog::MiLogStream::~MiLogStream(&v56);
        proto::ItemRenameAvatarRsp::set_retcode(rsp_0, 609);
      }
      else
      {
        SubItemReason::SubItemReason((SubItemReason *const)(v2 + 48), ACTION_REASON_AVATAR_RENAME);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = Player::getItemComp(this->player_);
        ret_1 = PlayerItemComp::subItem(v33, (const ItemParam *)(v2 + 176), (const SubItemReason *)(v2 + 48));
        if ( ret_1 )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/avatar_handler.cpp",
            "onItemRenameAvatarReq",
            916);
          v34 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v56,
                  (const char (*)[31])"wanderer subItem fails! count:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 180));
          v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])", item_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 176));
          common::milog::MiLogStream::~MiLogStream(&v56);
          proto::ItemRenameAvatarRsp::set_retcode(rsp_0, ret_1);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          avatar_id = rename_config_ptr->related_avatar_id;
          val = 1;
          PlayerAvatarComp::setAuditAvatarData(
            avatar_comp,
            avatar_id,
            (const std::string *)(v2 + 208),
            (const proto::AvatarRenameAuditSourceType *)&val);
          proto::ItemRenameAvatarRsp::set_retcode(rsp_0, 0);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/avatar_handler.cpp",
        "onItemRenameAvatarReq",
        928);
      v37 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v56,
              (const char (*)[33])"unknown rename type ,rename_id: ");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 32));
      v39 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])"type: ");
      if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rename_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_QWORD *)(v2 + 48) = data::enumValToStr(rename_config_ptr->type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v39, (const char *const *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
  }
  v40 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176), v41);
  std::shared_ptr<proto::ItemRenameAvatarRsp>::shared_ptr(
    (std::shared_ptr<proto::ItemRenameAvatarRsp> *const)(v2 + 144),
    (const std::shared_ptr<proto::ItemRenameAvatarRsp> *)(v2 + 112));
  LOBYTE(v40) = ServiceBase::sendRsp<proto::ItemRenameAvatarRsp>(
                  v40,
                  (std::shared_ptr<proto::ItemRenameAvatarRsp> *)(v2 + 144),
                  (common::minet::PacketPtr *)(v2 + 176)) != 0;
  std::shared_ptr<proto::ItemRenameAvatarRsp>::~shared_ptr((std::shared_ptr<proto::ItemRenameAvatarRsp> *const)(v2 + 144));
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176));
  if ( (_BYTE)v40 )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/avatar_handler.cpp",
      "onItemRenameAvatarReq",
      935);
    v42 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v56,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v42, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v6 = -1;
  }
  else
  {
    v6 = proto::ItemRenameAvatarRsp::retcode(rsp_0);
  }
LABEL_62:
  std::string::~string((void *)(v2 + 208));
  std::shared_ptr<proto::ItemRenameAvatarRsp>::~shared_ptr((std::shared_ptr<proto::ItemRenameAvatarRsp> *const)(v2 + 112));
LABEL_63:
  std::shared_ptr<proto::ItemRenameAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::ItemRenameAvatarReq> *const)(v2 + 80));
  result = v6;
  if ( v57 == (char *)v2 )
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

// Line 875: range 000000001319D4D4-000000001319D55D
void __cdecl AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 875: range 000000001319D628-000000001319D6B1
void __cdecl AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 875: range 00000000130F4F36-00000000130F522C
void __cdecl AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::ItemRenameAvatarReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:875";
  *(_QWORD *)(v4 + 16) = AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::ItemRenameAvatarReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::ItemRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ItemRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::ItemRenameAvatarReq::mutable_avatar_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::ItemRenameAvatarReq>::~shared_ptr((std::shared_ptr<proto::ItemRenameAvatarReq> *const)(v4 + 32));
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

// Line 875: range 00000000130F522E-00000000130F5258
void __cdecl AvatarHandler::onItemRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        AvatarHandler::onItemRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};
