// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/item_handler.cpp

// Line 40: range 000000001510C53C-000000001510DEA9
int32_t __cdecl ItemHandler::addPacketFuncToMap(ItemHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  ItemHandler **v10; // r8
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
  ItemHandler **v25; // r8
  const std::_Placeholder<1> *v26; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v27; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v29; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  int (*__f)(ItemHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+30h] [rbp-80h] BYREF
  __int64 v32; // [rsp+38h] [rbp-78h]
  std::_Bind_helper<false,int (ItemHandler::*)(std::shared_ptr<common::minet::Packet>),ItemHandler*,const std::_Placeholder<1>&>::type v33; // [rsp+40h] [rbp-70h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-50h] BYREF

  __x = 690;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v29, &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/item_handler.cpp",
      "addPacketFuncToMap",
      41);
    common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 690LL);
    common::milog::MiLogStream::~MiLogStream(&v34);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 690;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 699;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v29, &__y) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/item_handler.cpp",
        "addPacketFuncToMap",
        42);
      common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 699LL);
      common::milog::MiLogStream::~MiLogStream(&v34);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 699;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 697;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v29, &__y) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/item_handler.cpp",
          "addPacketFuncToMap",
          43);
        common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 697LL);
        common::milog::MiLogStream::~MiLogStream(&v34);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 697;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 605;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v29, &__y) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/item_handler.cpp",
            "addPacketFuncToMap",
            44);
          common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 605LL);
          common::milog::MiLogStream::~MiLogStream(&v34);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 605;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 639;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v29, &__y) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/item_handler.cpp",
              "addPacketFuncToMap",
              45);
            common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 639LL);
            common::milog::MiLogStream::~MiLogStream(&v34);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 639;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 622;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v29, &__y) )
            {
              common::milog::MiLogStream::create(
                &v34,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/item_handler.cpp",
                "addPacketFuncToMap",
                46);
              common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 622LL);
              common::milog::MiLogStream::~MiLogStream(&v34);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 622;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 604;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v29, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/item_handler.cpp",
                  "addPacketFuncToMap",
                  47);
                common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 604LL);
                common::milog::MiLogStream::~MiLogStream(&v34);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 604;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 695;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v29, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v34,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/item_handler.cpp",
                    "addPacketFuncToMap",
                    48);
                  common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 695LL);
                  common::milog::MiLogStream::~MiLogStream(&v34);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __f = (int (*)(ItemHandler *, std::shared_ptr<common::minet::Packet>))ItemHandler::onWeaponAwakenReq;
                  v32 = 0LL;
                  std::bind<int (ItemHandler::*)(std::shared_ptr<common::minet::Packet>),ItemHandler*,std::_Placeholder<1> const&>(
                    &v33,
                    &__f,
                    (ItemHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v10,
                    v11);
                  __x = 695;
                  v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ItemHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ItemHandler*,std::_Placeholder<1>)>>(
                    v12,
                    &v33);
                  __x = 643;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v29, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v34,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/item_handler.cpp",
                      "addPacketFuncToMap",
                      49);
                    common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 643LL);
                    common::milog::MiLogStream::~MiLogStream(&v34);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 643;
                    v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                      v13,
                      (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 646;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v29, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v34,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/item_handler.cpp",
                        "addPacketFuncToMap",
                        50);
                      common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 646LL);
                      common::milog::MiLogStream::~MiLogStream(&v34);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 646;
                      v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                        v14,
                        (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 649;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_map,
                                      &__x)._M_node;
                      v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                      if ( std::operator!=(&v29, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v34,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/item_handler.cpp",
                          "addPacketFuncToMap",
                          51);
                        common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 649LL);
                        common::milog::MiLogStream::~MiLogStream(&v34);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                        __x = 649;
                        v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_map,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                          v15,
                          (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 624;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_map,
                                        &__x)._M_node;
                        v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                        if ( std::operator!=(&v29, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v34,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/item_handler.cpp",
                            "addPacketFuncToMap",
                            52);
                          common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 624LL);
                          common::milog::MiLogStream::~MiLogStream(&v34);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                          __x = 624;
                          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_map,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                            v16,
                            (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 602;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_map,
                                          &__x)._M_node;
                          v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                          if ( std::operator!=(&v29, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v34,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/item_handler.cpp",
                              "addPacketFuncToMap",
                              53);
                            common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 602LL);
                            common::milog::MiLogStream::~MiLogStream(&v34);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                            __x = 602;
                            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_map,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                              v17,
                              (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 629;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_map,
                                            &__x)._M_node;
                            v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                            if ( std::operator!=(&v29, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v34,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/item_handler.cpp",
                                "addPacketFuncToMap",
                                54);
                              common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 629LL);
                              common::milog::MiLogStream::~MiLogStream(&v34);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                              __x = 629;
                              v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_map,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                                v18,
                                (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 616;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_map,
                                              &__x)._M_node;
                              v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                              if ( std::operator!=(&v29, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v34,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/item_handler.cpp",
                                  "addPacketFuncToMap",
                                  55);
                                common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 616LL);
                                common::milog::MiLogStream::~MiLogStream(&v34);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                __x = 616;
                                v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_map,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                  v19,
                                  (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 640;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_map,
                                                &__x)._M_node;
                                v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                if ( std::operator!=(&v29, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v34,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/item_handler.cpp",
                                    "addPacketFuncToMap",
                                    56);
                                  common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 640LL);
                                  common::milog::MiLogStream::~MiLogStream(&v34);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                  __x = 640;
                                  v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_map,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                    v20,
                                    (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 666;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_map,
                                                  &__x)._M_node;
                                  v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                  if ( std::operator!=(&v29, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v34,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/item_handler.cpp",
                                      "addPacketFuncToMap",
                                      57);
                                    common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 666LL);
                                    common::milog::MiLogStream::~MiLogStream(&v34);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                    __x = 666;
                                    v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_map,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                      v21,
                                      (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 633;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_map,
                                                    &__x)._M_node;
                                    v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                    if ( std::operator!=(&v29, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v34,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/item_handler.cpp",
                                        "addPacketFuncToMap",
                                        58);
                                      common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 633LL);
                                      common::milog::MiLogStream::~MiLogStream(&v34);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                      __x = 633;
                                      v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_map,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                        v22,
                                        (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 620;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_map,
                                                      &__x)._M_node;
                                      v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                      if ( std::operator!=(&v29, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v34,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/item_handler.cpp",
                                          "addPacketFuncToMap",
                                          59);
                                        common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 620LL);
                                        common::milog::MiLogStream::~MiLogStream(&v34);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                        __x = 620;
                                        v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_map,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                          v23,
                                          (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 638;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_map,
                                                        &__x)._M_node;
                                        v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                        if ( std::operator!=(&v29, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v34,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/item_handler.cpp",
                                            "addPacketFuncToMap",
                                            60);
                                          common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 638LL);
                                          common::milog::MiLogStream::~MiLogStream(&v34);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                          __x = 638;
                                          v24 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_map,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}>(
                                            v24,
                                            (ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                          __x = 644;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_map,
                                                          &__x)._M_node;
                                          v29._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                          if ( std::operator!=(&v29, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v34,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/item_handler.cpp",
                                              "addPacketFuncToMap",
                                              62);
                                            common::milog::MiLogStream::operator()(&v34, off_2570C7C0, 644LL);
                                            common::milog::MiLogStream::~MiLogStream(&v34);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                            __f = (int (*)(ItemHandler *, std::shared_ptr<common::minet::Packet>))ItemHandler::onReliquaryFilterStateSaveNotify;
                                            v32 = 0LL;
                                            std::bind<int (ItemHandler::*)(std::shared_ptr<common::minet::Packet>),ItemHandler*,std::_Placeholder<1> const&>(
                                              &v33,
                                              &__f,
                                              (ItemHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v25,
                                              v26);
                                            __x = 644;
                                            v27 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_map,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (ItemHandler::*)(std::shared_ptr<common::minet::Packet>) ()(ItemHandler*,std::_Placeholder<1>)>>(
                                              v27,
                                              &v33);
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

// Line 41: range 0000000015108A02-0000000015108D1E
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::UseItemReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UseItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UseItemRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:41 64 16 10 rsp_ptr:41";
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UseItemReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UseItemReq const>((const std::shared_ptr<const proto::UseItemReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      41);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UseItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UseItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UseItemRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UseItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UseItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UseItemRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UseItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UseItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onUseItemReq(this, v8, rsp_0);
    proto::UseItemRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UseItemRsp>::shared_ptr(&p_proto_ptr, (const std::shared_ptr<proto::UseItemRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UseItemRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UseItemRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UseItemRsp>::~shared_ptr((std::shared_ptr<proto::UseItemRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UseItemReq const>::~shared_ptr((std::shared_ptr<const proto::UseItemReq> *const)(v2 + 32));
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

// Line 42: range 0000000015108D20-000000001510903C
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::DropItemReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DropItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DropItemRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DropItemReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DropItemReq const>((const std::shared_ptr<const proto::DropItemReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DropItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DropItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DropItemRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DropItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DropItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DropItemRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DropItemReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DropItemReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onDropItemReq(this, v8, rsp_0);
    proto::DropItemRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DropItemRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DropItemRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DropItemRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DropItemRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DropItemRsp>::~shared_ptr((std::shared_ptr<proto::DropItemRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DropItemReq const>::~shared_ptr((std::shared_ptr<const proto::DropItemReq> *const)(v2 + 32));
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

// Line 43: range 000000001510903E-000000001510935A
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::WearEquipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WearEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WearEquipRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WearEquipReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WearEquipReq const>((const std::shared_ptr<const proto::WearEquipReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      43);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WearEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WearEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WearEquipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WearEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WearEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WearEquipRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WearEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WearEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onWearEquipReq(this, v8, rsp_0);
    proto::WearEquipRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WearEquipRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WearEquipRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WearEquipRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WearEquipRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WearEquipRsp>::~shared_ptr((std::shared_ptr<proto::WearEquipRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WearEquipReq const>::~shared_ptr((std::shared_ptr<const proto::WearEquipReq> *const)(v2 + 32));
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

// Line 44: range 000000001510935C-0000000015109678
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeoffEquipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeoffEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeoffEquipRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeoffEquipReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeoffEquipReq const>(
         (const std::shared_ptr<const proto::TakeoffEquipReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      44);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeoffEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeoffEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeoffEquipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeoffEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeoffEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeoffEquipRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeoffEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeoffEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onTakeoffEquipReq(this, v8, rsp_0);
    proto::TakeoffEquipRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeoffEquipRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeoffEquipRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeoffEquipRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeoffEquipRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeoffEquipRsp>::~shared_ptr((std::shared_ptr<proto::TakeoffEquipRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeoffEquipReq const>::~shared_ptr((std::shared_ptr<const proto::TakeoffEquipReq> *const)(v2 + 32));
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

// Line 45: range 000000001510967A-0000000015109996
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::WeaponUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WeaponUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WeaponUpgradeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WeaponUpgradeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WeaponUpgradeReq const>(
         (const std::shared_ptr<const proto::WeaponUpgradeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WeaponUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WeaponUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WeaponUpgradeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WeaponUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WeaponUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WeaponUpgradeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WeaponUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WeaponUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onWeaponUpgradeReq(this, v8, rsp_0);
    proto::WeaponUpgradeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WeaponUpgradeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WeaponUpgradeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WeaponUpgradeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WeaponUpgradeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WeaponUpgradeRsp>::~shared_ptr((std::shared_ptr<proto::WeaponUpgradeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WeaponUpgradeReq const>::~shared_ptr((std::shared_ptr<const proto::WeaponUpgradeReq> *const)(v2 + 32));
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

// Line 46: range 0000000015109998-0000000015109CB4
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::WeaponPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WeaponPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WeaponPromoteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WeaponPromoteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WeaponPromoteReq const>(
         (const std::shared_ptr<const proto::WeaponPromoteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      46);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WeaponPromoteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WeaponPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WeaponPromoteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WeaponPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WeaponPromoteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WeaponPromoteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WeaponPromoteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WeaponPromoteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onWeaponPromoteReq(this, v8, rsp_0);
    proto::WeaponPromoteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WeaponPromoteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WeaponPromoteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WeaponPromoteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WeaponPromoteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WeaponPromoteRsp>::~shared_ptr((std::shared_ptr<proto::WeaponPromoteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WeaponPromoteReq const>::~shared_ptr((std::shared_ptr<const proto::WeaponPromoteReq> *const)(v2 + 32));
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

// Line 47: range 0000000015109CB6-0000000015109FD2
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::ReliquaryUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ReliquaryUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ReliquaryUpgradeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReliquaryUpgradeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReliquaryUpgradeReq const>(
         (const std::shared_ptr<const proto::ReliquaryUpgradeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      47);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ReliquaryUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReliquaryUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReliquaryUpgradeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReliquaryUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReliquaryUpgradeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReliquaryUpgradeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ReliquaryUpgradeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReliquaryUpgradeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onReliquaryUpgradeReq(this, v8, rsp_0);
    proto::ReliquaryUpgradeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReliquaryUpgradeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReliquaryUpgradeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ReliquaryUpgradeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ReliquaryUpgradeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ReliquaryUpgradeRsp>::~shared_ptr((std::shared_ptr<proto::ReliquaryUpgradeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReliquaryUpgradeReq const>::~shared_ptr((std::shared_ptr<const proto::ReliquaryUpgradeReq> *const)(v2 + 32));
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

// Line 49: range 0000000015109FD4-000000001510A2F0
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::CombineReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CombineRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CombineRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CombineReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CombineReq const>((const std::shared_ptr<const proto::CombineReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      49);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CombineReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CombineReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CombineRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CombineRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CombineRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CombineRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CombineReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CombineReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onCombineReq(this, v8, rsp_0);
    proto::CombineRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CombineRsp>::shared_ptr(&p_proto_ptr, (const std::shared_ptr<proto::CombineRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CombineRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CombineRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CombineRsp>::~shared_ptr((std::shared_ptr<proto::CombineRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CombineReq const>::~shared_ptr((std::shared_ptr<const proto::CombineReq> *const)(v2 + 32));
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

// Line 50: range 000000001510A2F2-000000001510A60E
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::ForgeGetQueueDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ForgeGetQueueDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ForgeGetQueueDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForgeGetQueueDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ForgeGetQueueDataReq const>(
         (const std::shared_ptr<const proto::ForgeGetQueueDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      50);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ForgeGetQueueDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeGetQueueDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ForgeGetQueueDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ForgeGetQueueDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ForgeGetQueueDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ForgeGetQueueDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ForgeGetQueueDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeGetQueueDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onForgeGetQueueDataReq(this, v8, rsp_0);
    proto::ForgeGetQueueDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ForgeGetQueueDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ForgeGetQueueDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ForgeGetQueueDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ForgeGetQueueDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ForgeGetQueueDataRsp>::~shared_ptr((std::shared_ptr<proto::ForgeGetQueueDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ForgeGetQueueDataReq const>::~shared_ptr((std::shared_ptr<const proto::ForgeGetQueueDataReq> *const)(v2 + 32));
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

// Line 51: range 000000001510A610-000000001510A92C
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::ForgeStartReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ForgeStartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ForgeStartRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForgeStartReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ForgeStartReq const>((const std::shared_ptr<const proto::ForgeStartReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      51);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ForgeStartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeStartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ForgeStartRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ForgeStartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ForgeStartRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ForgeStartRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ForgeStartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeStartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onForgeStartReq(this, v8, rsp_0);
    proto::ForgeStartRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ForgeStartRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ForgeStartRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ForgeStartRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ForgeStartRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ForgeStartRsp>::~shared_ptr((std::shared_ptr<proto::ForgeStartRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ForgeStartReq const>::~shared_ptr((std::shared_ptr<const proto::ForgeStartReq> *const)(v2 + 32));
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

// Line 52: range 000000001510A92E-000000001510AC4A
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::ForgeQueueManipulateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ForgeQueueManipulateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ForgeQueueManipulateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ForgeQueueManipulateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ForgeQueueManipulateReq const>(
         (const std::shared_ptr<const proto::ForgeQueueManipulateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ForgeQueueManipulateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeQueueManipulateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ForgeQueueManipulateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ForgeQueueManipulateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ForgeQueueManipulateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ForgeQueueManipulateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ForgeQueueManipulateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ForgeQueueManipulateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onForgeQueueManipulateReq(this, v8, rsp_0);
    proto::ForgeQueueManipulateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ForgeQueueManipulateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ForgeQueueManipulateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ForgeQueueManipulateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ForgeQueueManipulateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ForgeQueueManipulateRsp>::~shared_ptr((std::shared_ptr<proto::ForgeQueueManipulateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ForgeQueueManipulateReq const>::~shared_ptr((std::shared_ptr<const proto::ForgeQueueManipulateReq> *const)(v2 + 32));
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

// Line 53: range 000000001510AC4C-000000001510AF68
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::BuyResinReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BuyResinRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BuyResinRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BuyResinReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BuyResinReq const>((const std::shared_ptr<const proto::BuyResinReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      53);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BuyResinReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyResinReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BuyResinRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BuyResinRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BuyResinRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BuyResinRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BuyResinReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyResinReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onBuyResinReq(this, v8, rsp_0);
    proto::BuyResinRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BuyResinRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BuyResinRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BuyResinRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BuyResinRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BuyResinRsp>::~shared_ptr((std::shared_ptr<proto::BuyResinRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BuyResinReq const>::~shared_ptr((std::shared_ptr<const proto::BuyResinReq> *const)(v2 + 32));
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

// Line 54: range 000000001510AF6A-000000001510B286
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeMaterialDeleteReturnReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeMaterialDeleteReturnRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeMaterialDeleteReturnRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeMaterialDeleteReturnReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeMaterialDeleteReturnReq const>(
         (const std::shared_ptr<const proto::TakeMaterialDeleteReturnReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      54);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeMaterialDeleteReturnReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeMaterialDeleteReturnReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeMaterialDeleteReturnRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeMaterialDeleteReturnRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeMaterialDeleteReturnRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeMaterialDeleteReturnRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeMaterialDeleteReturnReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeMaterialDeleteReturnReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onTakeMaterialDeleteReturnReq(this, v8, rsp_0);
    proto::TakeMaterialDeleteReturnRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeMaterialDeleteReturnRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeMaterialDeleteReturnRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeMaterialDeleteReturnRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeMaterialDeleteReturnRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeMaterialDeleteReturnRsp>::~shared_ptr((std::shared_ptr<proto::TakeMaterialDeleteReturnRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeMaterialDeleteReturnReq const>::~shared_ptr((std::shared_ptr<const proto::TakeMaterialDeleteReturnReq> *const)(v2 + 32));
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

// Line 55: range 000000001510B288-000000001510B5A4
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::McoinExchangeHcoinReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::McoinExchangeHcoinRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::McoinExchangeHcoinRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::McoinExchangeHcoinReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::McoinExchangeHcoinReq const>(
         (const std::shared_ptr<const proto::McoinExchangeHcoinReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      55);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::McoinExchangeHcoinReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::McoinExchangeHcoinReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::McoinExchangeHcoinRsp>();
    rsp_0 = std::__shared_ptr_access<proto::McoinExchangeHcoinRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::McoinExchangeHcoinRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::McoinExchangeHcoinRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::McoinExchangeHcoinReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::McoinExchangeHcoinReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onMcoinExchangeHcoinReq(this, v8, rsp_0);
    proto::McoinExchangeHcoinRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::McoinExchangeHcoinRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::McoinExchangeHcoinRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::McoinExchangeHcoinRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::McoinExchangeHcoinRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::McoinExchangeHcoinRsp>::~shared_ptr((std::shared_ptr<proto::McoinExchangeHcoinRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::McoinExchangeHcoinReq const>::~shared_ptr((std::shared_ptr<const proto::McoinExchangeHcoinReq> *const)(v2 + 32));
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

// Line 56: range 000000001510B5A6-000000001510B8C2
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::DestroyMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DestroyMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DestroyMaterialRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:56 64 16 10 rsp_ptr:56";
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DestroyMaterialReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DestroyMaterialReq const>(
         (const std::shared_ptr<const proto::DestroyMaterialReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      56);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DestroyMaterialReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DestroyMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DestroyMaterialRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DestroyMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DestroyMaterialRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DestroyMaterialRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DestroyMaterialReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DestroyMaterialReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onDestroyMaterialReq(this, v8, rsp_0);
    proto::DestroyMaterialRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DestroyMaterialRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DestroyMaterialRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DestroyMaterialRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DestroyMaterialRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DestroyMaterialRsp>::~shared_ptr((std::shared_ptr<proto::DestroyMaterialRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DestroyMaterialReq const>::~shared_ptr((std::shared_ptr<const proto::DestroyMaterialReq> *const)(v2 + 32));
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

// Line 57: range 000000001510B8C4-000000001510BBE0
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::SetEquipLockStateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetEquipLockStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetEquipLockStateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetEquipLockStateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetEquipLockStateReq const>(
         (const std::shared_ptr<const proto::SetEquipLockStateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      57);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetEquipLockStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetEquipLockStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetEquipLockStateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetEquipLockStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetEquipLockStateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetEquipLockStateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetEquipLockStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetEquipLockStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onSetEquipLockStateReq(this, v8, rsp_0);
    proto::SetEquipLockStateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetEquipLockStateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetEquipLockStateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetEquipLockStateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetEquipLockStateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetEquipLockStateRsp>::~shared_ptr((std::shared_ptr<proto::SetEquipLockStateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetEquipLockStateReq const>::~shared_ptr((std::shared_ptr<const proto::SetEquipLockStateReq> *const)(v2 + 32));
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

// Line 58: range 000000001510BBE2-000000001510BEFE
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::CalcWeaponUpgradeReturnItemsReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CalcWeaponUpgradeReturnItemsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CalcWeaponUpgradeReturnItemsReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CalcWeaponUpgradeReturnItemsReq const>(
         (const std::shared_ptr<const proto::CalcWeaponUpgradeReturnItemsReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      58);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CalcWeaponUpgradeReturnItemsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CalcWeaponUpgradeReturnItemsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CalcWeaponUpgradeReturnItemsRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CalcWeaponUpgradeReturnItemsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CalcWeaponUpgradeReturnItemsRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CalcWeaponUpgradeReturnItemsRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CalcWeaponUpgradeReturnItemsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CalcWeaponUpgradeReturnItemsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onCalcWeaponUpgradeReturnItemsReq(this, v8, rsp_0);
    proto::CalcWeaponUpgradeReturnItemsRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CalcWeaponUpgradeReturnItemsRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp>::~shared_ptr((std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CalcWeaponUpgradeReturnItemsReq const>::~shared_ptr((std::shared_ptr<const proto::CalcWeaponUpgradeReturnItemsReq> *const)(v2 + 32));
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

// Line 59: range 000000001510BF00-000000001510C21C
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::SetIsAutoUnlockSpecificEquipReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetIsAutoUnlockSpecificEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetIsAutoUnlockSpecificEquipReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetIsAutoUnlockSpecificEquipReq const>(
         (const std::shared_ptr<const proto::SetIsAutoUnlockSpecificEquipReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      59);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetIsAutoUnlockSpecificEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetIsAutoUnlockSpecificEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetIsAutoUnlockSpecificEquipRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetIsAutoUnlockSpecificEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetIsAutoUnlockSpecificEquipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetIsAutoUnlockSpecificEquipRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetIsAutoUnlockSpecificEquipReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetIsAutoUnlockSpecificEquipReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onSetIsAutoUnlockSpecificEquipReq(this, v8, rsp_0);
    proto::SetIsAutoUnlockSpecificEquipRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetIsAutoUnlockSpecificEquipRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp>::~shared_ptr((std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetIsAutoUnlockSpecificEquipReq const>::~shared_ptr((std::shared_ptr<const proto::SetIsAutoUnlockSpecificEquipReq> *const)(v2 + 32));
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

// Line 60: range 000000001510C21E-000000001510C53A
int __cdecl ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator()(
        const ItemHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ItemHandler *this; // r14
  std::__shared_ptr_access<const proto::ReliquaryDecomposeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ReliquaryDecomposeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ReliquaryDecomposeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ItemHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReliquaryDecomposeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReliquaryDecomposeReq const>(
         (const std::shared_ptr<const proto::ReliquaryDecomposeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ReliquaryDecomposeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReliquaryDecomposeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReliquaryDecomposeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReliquaryDecomposeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReliquaryDecomposeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReliquaryDecomposeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ReliquaryDecomposeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReliquaryDecomposeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ItemHandler::onReliquaryDecomposeReq(this, v8, rsp_0);
    proto::ReliquaryDecomposeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReliquaryDecomposeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReliquaryDecomposeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ReliquaryDecomposeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ReliquaryDecomposeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ReliquaryDecomposeRsp>::~shared_ptr((std::shared_ptr<proto::ReliquaryDecomposeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReliquaryDecomposeReq const>::~shared_ptr((std::shared_ptr<const proto::ReliquaryDecomposeReq> *const)(v2 + 32));
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

// Line 67: range 000000001510DEAA-000000001510E699
int32_t __cdecl ItemHandler::onUseItemReq(
        ItemHandler *const this,
        const proto::UseItemReq *req,
        proto::UseItemRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  google::protobuf::uint64 v9; // rdx
  PlayerItemComp *ItemComp; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isItemSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerItemComp *v20; // rax
  common::milog::MiLogStream *v21; // r14
  PlayerItemComp *v22; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  uint32_t count; // [rsp+28h] [rbp-118h]
  uint32_t option_idx; // [rsp+2Ch] [rbp-114h]
  uint32_t item_id; // [rsp+30h] [rbp-110h]
  int32_t ret; // [rsp+34h] [rbp-10Ch]
  uint64_t guid; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 10 reason:102 64 16 11 item_ptr:79 96 24 12 use_param:98";
  *(_QWORD *)(v3 + 16) = ItemHandler::onUseItemReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( !PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/item_handler.cpp",
      "onUseItemReq",
      70);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v35, (const char (*)[27])off_25719580);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = 103;
  }
  else
  {
    guid = proto::UseItemReq::guid(req);
    count = proto::UseItemReq::count(req);
    option_idx = proto::UseItemReq::option_idx(req);
    proto::UseItemRsp::set_guid(rsp_0, guid);
    v9 = proto::UseItemReq::target_guid(req);
    proto::UseItemRsp::set_target_guid(rsp_0, v9);
    proto::UseItemRsp::set_option_idx(rsp_0, option_idx);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::findItemInPack((PlayerItemComp *const)(v3 + 64), (uint64_t)ItemComp);
    if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
    {
      v8 = 601;
    }
    else
    {
      v11 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      item_id = Item::getItemId(v11);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
      isItemSystemClosed = FeatureSwitchMgr::isItemSystemClosed(&v12->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( isItemSystemClosed )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onUseItemReq",
          89);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v35,
          (const char (*)[35])"[FEATURE_SWITCH] ItemSystem closed");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v8 = 142;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->feature_switch_mgr;
        v15 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        ItemId = Item::getItemId(v15);
        LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isItemClosed(p_feature_switch_mgr, ItemId);
        std::shared_ptr<Config>::~shared_ptr(&v34);
        if ( (_BYTE)p_feature_switch_mgr )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/item_handler.cpp",
            "onUseItemReq",
            94);
          v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v35,
                  (const char (*)[38])"[FEATURE_SWITCH] ItemSystem item_id: ");
          v18 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = Item::getItemId(v18);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" closed");
          common::milog::MiLogStream::~MiLogStream(&v35);
          v8 = 142;
        }
        else
        {
          *(_DWORD *)(v3 + 96) = 0;
          *(_QWORD *)(v3 + 104) = 0LL;
          *(_DWORD *)(v3 + 112) = 0;
          *(_DWORD *)(v3 + 96) = count;
          *(_QWORD *)(v3 + 104) = proto::UseItemReq::target_guid(req);
          *(_DWORD *)(v3 + 112) = option_idx;
          SubItemReason::SubItemReason((SubItemReason *const)(v3 + 32), ACTION_REASON_PLAYER_USE_ITEM);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v20 = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkUseItem(
                  v20,
                  guid,
                  (const ItemUseParam *)(v3 + 96),
                  (const SubItemReason *)(v3 + 32));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/item_handler.cpp",
              "onUseItemReq",
              106);
            v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v35,
                    (const char (*)[26])"checkUseItem failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream(&v35);
            v8 = ret;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v22 = Player::getItemComp(this->player_);
            PlayerItemComp::useItem(v22, guid, (const ItemUseParam *)(v3 + 96), (const SubItemReason *)(v3 + 32));
            v23 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v24 = Item::getItemId(v23);
            proto::UseItemRsp::set_item_id(rsp_0, v24);
            if ( proto::UseItemReq::is_enter_mp_dungeon_team(req) && proto::UseItemReq::target_guid(req) )
              ItemHandler::tryAddAvatarToTeamAfterUseReviveItem(this, req, item_id);
            v8 = 0;
          }
        }
      }
    }
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
  }
  result = v8;
  if ( v36 == (char *)v3 )
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

// Line 120: range 000000001510E69A-000000001510E6B0
int32_t __cdecl ItemHandler::onDropItemReq(
        ItemHandler *const this,
        const proto::DropItemReq *req,
        proto::DropItemRsp *rsp_0)
{
  return 0;
};

// Line 167: range 000000001510E6B2-000000001510EE49
int32_t __cdecl ItemHandler::onWearEquipReq(
        ItemHandler *const this,
        const proto::WearEquipReq *req,
        proto::WearEquipRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerAvatarComp *v9; // r14
  common::milog::MiLogStream *v10; // r14
  google::protobuf::uint64 v11; // rdx
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  EquipComp *EquipComp; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  EquipComp *v19; // r14
  Equip *v20; // rax
  int32_t result; // eax
  unsigned __int64 val; // [rsp+28h] [rbp-178h] BYREF
  Equip __r[2]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)&__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 21 formal_avatar_ptr:175 64 16 13 equip_ptr:183 96 48 20 fight_prop_guard:168 176 48 25 "
                        "refresh_ability_guard:169";
  *(_QWORD *)(v3 + 16) = ItemHandler::onWearEquipReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 96));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( !PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__r[0].guid_,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/item_handler.cpp",
      "onWearEquipReq",
      172);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&__r[0].guid_,
           (const char (*)[27])off_25719580);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
    v8 = 103;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getAvatarComp(this->player_);
    proto::WearEquipReq::avatar_guid(req);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)v9);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0].guid_,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onWearEquipReq",
        178);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&__r[0].guid_,
              (const char (*)[37])"findFormalAvatar fails, avatar_guid:");
      val = proto::WearEquipReq::avatar_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
      v8 = 104;
    }
    else
    {
      v11 = proto::WearEquipReq::avatar_guid(req);
      proto::WearEquipRsp::set_avatar_guid(rsp_0, v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      proto::WearEquipReq::equip_guid(req);
      PlayerItemComp::findItemInPack<Equip>((PlayerItemComp *const)(v3 + 64), (uint64_t)ItemComp);
      if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__r[0].guid_,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/item_handler.cpp",
          "onWearEquipReq",
          186);
        v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)&__r[0].guid_,
                (const char (*)[27])"findItem fails, item_guid:");
        val = proto::WearEquipReq::equip_guid(req);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
        v8 = 601;
      }
      else
      {
        v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        EquipComp = Avatar::getEquipComp(v14);
        std::shared_ptr<Equip>::shared_ptr(
          (std::shared_ptr<Equip> *const)&__r[0]._M_weak_this._M_refcount,
          (const std::shared_ptr<Equip> *)(v3 + 64));
        LOBYTE(EquipComp) = EquipComp::isEquipSwitchClosed(EquipComp, (EquipPtr *)&__r[0]._M_weak_this._M_refcount);
        std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)&__r[0]._M_weak_this._M_refcount);
        if ( (_BYTE)EquipComp )
        {
          v8 = 142;
        }
        else
        {
          v16 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          FightPropGuard::addCreature((FightPropGuard *const)(v3 + 96), v16, 0);
          std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Equip::getOwner(__r);
          std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
            (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
            (std::shared_ptr<Avatar> *)__r);
          FightPropGuard::addCreature(
            (FightPropGuard *const)(v3 + 96),
            (CreaturePtr *)&__r[0]._M_weak_this._M_refcount,
            0);
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
          v17 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 176), v17);
          std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Equip::getOwner(__r);
          std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
            (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
            (std::shared_ptr<Avatar> *)__r);
          RefreshAbilityGuard::addCreature(
            (RefreshAbilityGuard *const)(v3 + 176),
            (CreaturePtr *)&__r[0]._M_weak_this._M_refcount);
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
          v18 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v19 = Avatar::getEquipComp(v18);
          v20 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v8 = EquipComp::wearEquipKeepHpRate(v19, v20, 1);
        }
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 64));
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
  }
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 176));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 96));
  result = v8;
  if ( &__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 204: range 000000001510EE4A-000000001510F33F
int32_t __cdecl ItemHandler::onTakeoffEquipReq(
        ItemHandler *const this,
        const proto::TakeoffEquipReq *req,
        proto::TakeoffEquipRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerAvatarComp *v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  EquipComp *EquipComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  google::protobuf::uint64 v15; // rdx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  EquipComp *v17; // rax
  int32_t result; // eax
  data::EquipType slot; // [rsp+24h] [rbp-13Ch]
  unsigned __int64 val; // [rsp+28h] [rbp-138h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-130h] BYREF
  char v23[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 21 formal_avatar_ptr:212 64 48 20 fight_prop_guard:205 144 48 25 refresh_ability_guard:206";
  *(_QWORD *)(v3 + 16) = ItemHandler::onTakeoffEquipReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 64));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 144));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( !PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/item_handler.cpp",
      "onTakeoffEquipReq",
      209);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v22, (const char (*)[27])off_25719580);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = 103;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getAvatarComp(this->player_);
    proto::TakeoffEquipReq::avatar_guid(req);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)v9);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onTakeoffEquipReq",
        215);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v22,
              (const char (*)[37])"findFormalAvatar fails, avatar_guid:");
      val = proto::TakeoffEquipReq::avatar_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = 104;
    }
    else
    {
      slot = proto::TakeoffEquipReq::slot(req);
      v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      EquipComp = Avatar::getEquipComp(v11);
      if ( EquipComp::isEquipSwitchClosed(EquipComp, slot) )
      {
        v8 = 142;
      }
      else
      {
        v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        FightPropGuard::addCreature((FightPropGuard *const)(v3 + 64), v13, 0);
        v14 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 144), v14);
        v15 = proto::TakeoffEquipReq::avatar_guid(req);
        proto::TakeoffEquipRsp::set_avatar_guid(rsp_0, v15);
        proto::TakeoffEquipRsp::set_slot(rsp_0, slot);
        v16 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v17 = Avatar::getEquipComp(v16);
        v8 = EquipComp::takeOffEquipKeepHpRate(v17, slot, 1);
      }
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
  }
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 144));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 64));
  result = v8;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
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
  return result;
};

// Line 234: range 000000001510F340-0000000015110112
int32_t __cdecl ItemHandler::onWeaponUpgradeReq(
        ItemHandler *const this,
        const proto::WeaponUpgradeReq *req,
        proto::WeaponUpgradeRsp *rsp_0)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isWeaponSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v22; // rax
  PlayerItemComp *v23; // r14
  uint64_t v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  PlayerItemComp *v28; // r14
  uint64_t v29; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t Level; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-224h] BYREF
  uint32_t old_level; // [rsp+30h] [rbp-220h]
  int32_t ret; // [rsp+34h] [rbp-21Ch]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_begin; // [rsp+38h] [rbp-218h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+40h] [rbp-210h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+48h] [rbp-208h]
  std::vector<ItemParam> *__for_range_0; // [rsp+50h] [rbp-200h]
  const ItemParam *ret_item_param; // [rsp+58h] [rbp-1F8h]
  proto::ItemParam *item_param; // [rsp+60h] [rbp-1F0h]
  const proto::ItemParam *proto_item_param; // [rsp+68h] [rbp-1E8h]
  Equip __r[3]; // [rsp+70h] [rbp-1E0h] BYREF

  p_M_refcount = (unsigned __int64)&__r[0].player_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "6 48 16 14 weapon_ptr:241 80 16 9 param:270 112 24 24 food_weapon_guid_vec:264 176 24 "
                                  "18 item_param_vec:267 240 24 22 ret_item_param_vec:274 304 48 20 fight_prop_guard:235";
  *(_QWORD *)(p_M_refcount + 16) = ItemHandler::onWeaponUpgradeReq;
  v5 = (_DWORD *)(p_M_refcount >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(p_M_refcount + 304));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    proto::WeaponUpgradeReq::target_weapon_guid(req);
    PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(p_M_refcount + 48), (uint64_t)ItemComp);
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(p_M_refcount + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onWeaponUpgradeReq",
        244);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[24])"findWeapon failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" target_weapon_guid:");
      __for_end.it_ = (void *const *)proto::WeaponUpgradeReq::target_weapon_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v12,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = 601;
      goto LABEL_45;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_refcount + 80));
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 80));
    isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v13->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_refcount + 80));
    if ( isWeaponSystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onWeaponUpgradeReq",
        251);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
        (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = 142;
LABEL_45:
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(p_M_refcount + 48));
      goto LABEL_46;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_refcount + 80));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 80))->feature_switch_mgr;
    v16 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    ItemId = Item::getItemId(v16);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_refcount + 80));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onWeaponUpgradeReq",
        256);
      v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
      v19 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
      val = Item::getItemId(v19);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = 142;
      goto LABEL_45;
    }
    std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    Equip::getOwner(__r);
    std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
      (std::shared_ptr<Creature> *const)(p_M_refcount + 80),
      (std::shared_ptr<Avatar> *)__r);
    FightPropGuard::addCreature((FightPropGuard *const)(p_M_refcount + 304), (CreaturePtr *)(p_M_refcount + 80), 0);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_M_refcount + 80));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
    v21 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    old_level = Weapon::getLevel(v21);
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(p_M_refcount + 112));
    v22 = proto::WeaponUpgradeReq::food_weapon_guid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
      v22,
      (std::vector<long unsigned int> *)(p_M_refcount + 112));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(p_M_refcount + 176));
    __for_range = proto::WeaponUpgradeReq::item_param_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      proto_item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
      *(_QWORD *)(p_M_refcount + 80) = 0LL;
      *(_QWORD *)(p_M_refcount + 88) = 0LL;
      *(_DWORD *)(p_M_refcount + 80) = proto::ItemParam::item_id(proto_item_param);
      *(_DWORD *)(p_M_refcount + 84) = proto::ItemParam::count(proto_item_param);
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(p_M_refcount + 176),
        (ItemParam *)(p_M_refcount + 80),
        (ItemParam *)(p_M_refcount + 80));
      google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
    }
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(p_M_refcount + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = Player::getItemComp(this->player_);
    v24 = proto::WeaponUpgradeReq::target_weapon_guid(req);
    ret = PlayerItemComp::checkWeaponUpgradeAndReturnItems(
            v23,
            v24,
            (const std::vector<long unsigned int> *)(p_M_refcount + 112),
            (const std::vector<ItemParam> *)(p_M_refcount + 176),
            (std::vector<ItemParam> *)(p_M_refcount + 240));
    if ( !ret || ret == 617 )
    {
      std::vector<ItemParam>::clear((std::vector<ItemParam> *const)(p_M_refcount + 240));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v28 = Player::getItemComp(this->player_);
      v29 = proto::WeaponUpgradeReq::target_weapon_guid(req);
      ret = PlayerItemComp::weaponUpgrade(
              v28,
              v29,
              (const std::vector<long unsigned int> *)(p_M_refcount + 112),
              (const std::vector<ItemParam> *)(p_M_refcount + 176),
              (std::vector<ItemParam> *)(p_M_refcount + 240));
      if ( !ret )
      {
        __for_range_0 = (std::vector<ItemParam> *)(p_M_refcount + 240);
        __for_begin.it_ = (void *const *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(p_M_refcount + 240))._M_current;
        __for_end.it_ = (void *const *)std::vector<ItemParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
        {
          ret_item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
          item_param = proto::WeaponUpgradeRsp::add_item_param_list(rsp_0);
          if ( *(_BYTE *)(((unsigned __int64)ret_item_param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_item_param >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ItemParam::set_item_id(item_param, ret_item_param->item_id);
          if ( *(_BYTE *)(((unsigned __int64)&ret_item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)ret_item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ret_item_param->count >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ItemParam::set_count(item_param, ret_item_param->count);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
        }
        proto::WeaponUpgradeRsp::set_old_level(rsp_0, old_level);
        v30 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
        Level = Weapon::getLevel(v30);
        proto::WeaponUpgradeRsp::set_cur_level(rsp_0, Level);
        v8 = 0;
        goto LABEL_44;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/item_handler.cpp",
        "onWeaponUpgradeReq",
        288);
      v25 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[27])"WeaponUpgrade failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onWeaponUpgradeReq",
        279);
      v25 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[46])"checkWeaponUpgradeAndReturnItems failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v26,
            (const char (*)[21])" target_weapon_guid:");
    __for_end.it_ = (void *const *)proto::WeaponUpgradeReq::target_weapon_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
    v8 = ret;
LABEL_44:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(p_M_refcount + 240));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(p_M_refcount + 176));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(p_M_refcount + 112));
    goto LABEL_45;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/item_handler.cpp",
    "onWeaponUpgradeReq",
    238);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
         (const char (*)[27])off_25719580);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
  v8 = 103;
LABEL_46:
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(p_M_refcount + 304));
  result = v8;
  if ( &__r[0].player_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 306: range 0000000015110114-0000000015110B11
int32_t __cdecl ItemHandler::onWeaponPromoteReq(
        ItemHandler *const this,
        const proto::WeaponPromoteReq *req,
        proto::WeaponPromoteRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isWeaponSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerItemComp *v22; // r14
  uint64_t v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  PlayerItemComp *v27; // r15
  uint32_t v28; // r14d
  uint64_t v29; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t PromoteLevel; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  uint32_t old_promote_level; // [rsp+30h] [rbp-120h]
  int32_t ret; // [rsp+34h] [rbp-11Ch]
  unsigned __int64 v37; // [rsp+38h] [rbp-118h] BYREF
  Equip __r[2]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)&__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 scoin_cost:336 48 16 14 weapon_ptr:313 80 48 20 fight_prop_guard:307";
  *(_QWORD *)(v3 + 16) = ItemHandler::onWeaponPromoteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    proto::WeaponPromoteReq::target_weapon_guid(req);
    PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v3 + 48), (uint64_t)ItemComp);
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0].guid_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onWeaponPromoteReq",
        316);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)&__r[0].guid_,
              (const char (*)[24])"findWeapon failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" target_weapon_guid:");
      v37 = proto::WeaponPromoteReq::target_weapon_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &v37);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
      v8 = 601;
      goto LABEL_33;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__r[0]._M_weak_this._M_refcount);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r[0]._M_weak_this._M_refcount);
    isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v13->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r[0]._M_weak_this._M_refcount);
    if ( isWeaponSystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0].guid_,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onWeaponPromoteReq",
        323);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&__r[0].guid_,
        (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
      v8 = 142;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r[0]._M_weak_this._M_refcount);
      p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r[0]._M_weak_this._M_refcount)->feature_switch_mgr;
      v16 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      ItemId = Item::getItemId(v16);
      LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r[0]._M_weak_this._M_refcount);
      if ( (_BYTE)p_feature_switch_mgr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__r[0].guid_,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onWeaponPromoteReq",
          328);
        v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)&__r[0].guid_,
                (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
        v19 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        val = Item::getItemId(v19);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
        v8 = 142;
      }
      else
      {
        std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        Equip::getOwner(__r);
        std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
          (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
          (std::shared_ptr<Avatar> *)__r);
        FightPropGuard::addCreature(
          (FightPropGuard *const)(v3 + 80),
          (CreaturePtr *)&__r[0]._M_weak_this._M_refcount,
          0);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
        v21 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        old_promote_level = Weapon::getPromoteLevel(v21);
        *(_DWORD *)(v3 + 32) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v22 = Player::getItemComp(this->player_);
        v23 = proto::WeaponPromoteReq::target_weapon_guid(req);
        ret = PlayerItemComp::checkWeaponPromote(v22, v23, (uint32_t *)(v3 + 32));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__r[0].guid_,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/item_handler.cpp",
            "onWeaponPromoteReq",
            340);
          v24 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)&__r[0].guid_,
                  (const char (*)[32])"checkWeaponUpgrade failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v27 = Player::getItemComp(this->player_);
          v28 = *(_DWORD *)(v3 + 32);
          v29 = proto::WeaponPromoteReq::target_weapon_guid(req);
          ret = PlayerItemComp::weaponPromote(v27, v29, v28);
          if ( !ret )
          {
            proto::WeaponPromoteRsp::set_old_promote_level(rsp_0, old_promote_level);
            v30 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            PromoteLevel = Weapon::getPromoteLevel(v30);
            proto::WeaponPromoteRsp::set_cur_promote_level(rsp_0, PromoteLevel);
            v8 = 0;
            goto LABEL_33;
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__r[0].guid_,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/item_handler.cpp",
            "onWeaponPromoteReq",
            347);
          v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  (common::milog::MiLogStream *const)&__r[0].guid_,
                  (const char (*)[27])"WeaponUpgrade failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        val = Player::getUid(this->player_);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v25,
                (const char (*)[21])" target_weapon_guid:");
        v37 = proto::WeaponPromoteReq::target_weapon_guid(req);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, &v37);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
        v8 = ret;
      }
    }
LABEL_33:
    std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 48));
    goto LABEL_34;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__r[0].guid_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/item_handler.cpp",
    "onWeaponPromoteReq",
    310);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         (common::milog::MiLogStream *const)&__r[0].guid_,
         (const char (*)[27])off_25719580);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
  v8 = 103;
LABEL_34:
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 80));
  result = v8;
  if ( &__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v3 )
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

// Line 357: range 0000000015110B12-00000000151117A6
int32_t __cdecl ItemHandler::onReliquaryUpgradeReq(
        ItemHandler *const this,
        const proto::ReliquaryUpgradeReq *req,
        proto::ReliquaryUpgradeRsp *rsp_0)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isReliquarySystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  google::protobuf::RepeatedField<unsigned int> *appended; // r14
  Reliquary *v23; // rax
  const std::vector<unsigned int> *AppendPropVec; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v25; // rax
  PlayerItemComp *v26; // r14
  uint64_t v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  PlayerItemComp *v31; // r14
  uint64_t v32; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t Level; // edx
  google::protobuf::RepeatedField<unsigned int> *v35; // r14
  Reliquary *v36; // rax
  const std::vector<unsigned int> *v37; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-1CCh] BYREF
  uint32_t old_level; // [rsp+28h] [rbp-1C8h]
  int32_t ret; // [rsp+2Ch] [rbp-1C4h]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+40h] [rbp-1B0h]
  const proto::ItemParam *proto_item_param; // [rsp+48h] [rbp-1A8h]
  Equip __r[3]; // [rsp+50h] [rbp-1A0h] BYREF

  p_M_refcount = (unsigned __int64)&__r[0].player_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "6 32 4 17 power_up_rate:406 48 16 17 reliquary_ptr:365 80 16 9 param:395 112 24 27 foo"
                                  "d_reliquary_guid_vec:389 176 24 18 item_param_vec:392 240 48 20 fight_prop_guard:358";
  *(_QWORD *)(p_M_refcount + 16) = ItemHandler::onReliquaryUpgradeReq;
  v5 = (_DWORD *)(p_M_refcount >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862729] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(p_M_refcount + 240));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    proto::ReliquaryUpgradeReq::target_reliquary_guid(req);
    PlayerItemComp::findItemInPack<Reliquary>((PlayerItemComp *const)(p_M_refcount + 48), (uint64_t)ItemComp);
    if ( std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(p_M_refcount + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onReliquaryUpgradeReq",
        368);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[27])"findReliquary failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" target_reliquary_guid:");
      __for_end.it_ = (void *const *)proto::ReliquaryUpgradeReq::target_reliquary_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v12,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = -1;
      goto LABEL_37;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_refcount + 80));
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 80));
    isReliquarySystemClosed = FeatureSwitchMgr::isReliquarySystemClosed(&v13->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_refcount + 80));
    if ( isReliquarySystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onReliquaryUpgradeReq",
        375);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
        (const char (*)[40])"[FEATURE_SWITCH] ReliquarySystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = 142;
LABEL_37:
      std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(p_M_refcount + 48));
      goto LABEL_38;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_refcount + 80));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 80))->feature_switch_mgr;
    v16 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    ItemId = Item::getItemId(v16);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isReliquaryClosed(p_feature_switch_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_refcount + 80));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onReliquaryUpgradeReq",
        380);
      v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[43])"[FEATURE_SWITCH] ReliquarySystem item_id: ");
      v19 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
      val = Item::getItemId(v19);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
      v8 = 142;
      goto LABEL_37;
    }
    std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    Equip::getOwner(__r);
    std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
      (std::shared_ptr<Creature> *const)(p_M_refcount + 80),
      (std::shared_ptr<Avatar> *)__r);
    FightPropGuard::addCreature((FightPropGuard *const)(p_M_refcount + 240), (CreaturePtr *)(p_M_refcount + 80), 0);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_M_refcount + 80));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
    v21 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    old_level = Reliquary::getLevel(v21);
    appended = proto::ReliquaryUpgradeRsp::mutable_old_append_prop_list(rsp_0);
    v23 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
    AppendPropVec = Reliquary::getAppendPropVec(v23);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(AppendPropVec, appended);
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(p_M_refcount + 112));
    v25 = proto::ReliquaryUpgradeReq::food_reliquary_guid_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
      v25,
      (std::vector<long unsigned int> *)(p_M_refcount + 112));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(p_M_refcount + 176));
    __for_range = proto::ReliquaryUpgradeReq::item_param_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      proto_item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
      *(_QWORD *)(p_M_refcount + 80) = 0LL;
      *(_QWORD *)(p_M_refcount + 88) = 0LL;
      *(_DWORD *)(p_M_refcount + 80) = proto::ItemParam::item_id(proto_item_param);
      *(_DWORD *)(p_M_refcount + 84) = proto::ItemParam::count(proto_item_param);
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(p_M_refcount + 176),
        (ItemParam *)(p_M_refcount + 80),
        (ItemParam *)(p_M_refcount + 80));
      google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = Player::getItemComp(this->player_);
    v27 = proto::ReliquaryUpgradeReq::target_reliquary_guid(req);
    ret = PlayerItemComp::checkReliquaryUpgrade(
            v26,
            v27,
            (const std::vector<long unsigned int> *)(p_M_refcount + 112),
            (const std::vector<ItemParam> *)(p_M_refcount + 176));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onReliquaryUpgradeReq",
        402);
      v28 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[35])"checkReliquaryUpgrade failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      *(_DWORD *)(p_M_refcount + 32) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v31 = Player::getItemComp(this->player_);
      v32 = proto::ReliquaryUpgradeReq::target_reliquary_guid(req);
      ret = PlayerItemComp::reliquaryUpgrade(
              v31,
              v32,
              (const std::vector<long unsigned int> *)(p_M_refcount + 112),
              (uint32_t *)(p_M_refcount + 32),
              (const std::vector<ItemParam> *)(p_M_refcount + 176));
      if ( !ret )
      {
        proto::ReliquaryUpgradeRsp::set_old_level(rsp_0, old_level);
        v33 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
        Level = Reliquary::getLevel(v33);
        proto::ReliquaryUpgradeRsp::set_cur_level(rsp_0, Level);
        proto::ReliquaryUpgradeRsp::set_power_up_rate(rsp_0, *(_DWORD *)(p_M_refcount + 32));
        v35 = proto::ReliquaryUpgradeRsp::mutable_cur_append_prop_list(rsp_0);
        v36 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 48));
        v37 = Reliquary::getAppendPropVec(v36);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(v37, v35);
        v8 = 0;
        goto LABEL_36;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/item_handler.cpp",
        "onReliquaryUpgradeReq",
        410);
      v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
              (const char (*)[27])"WeaponUpgrade failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v29,
            (const char (*)[24])" target_reliquary_guid:");
    __for_end.it_ = (void *const *)proto::ReliquaryUpgradeReq::target_reliquary_guid(req);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v30, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
    v8 = ret;
LABEL_36:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(p_M_refcount + 176));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(p_M_refcount + 112));
    goto LABEL_37;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__r[0]._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/item_handler.cpp",
    "onReliquaryUpgradeReq",
    361);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         (common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount,
         (const char (*)[27])off_25719580);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0]._M_weak_this._M_refcount);
  v8 = 103;
LABEL_38:
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(p_M_refcount + 240));
  result = v8;
  if ( &__r[0].player_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 422: range 00000000151117A8-0000000015111B09
int32_t __cdecl ItemHandler::onWeaponAwakenReq(ItemHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+18h] [rbp-138h]
  google::protobuf::int32 ret; // [rsp+1Ch] [rbp-134h]
  std::__shared_ptr_access<const proto::WeaponAwakenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-130h]
  std::__shared_ptr_access<proto::WeaponAwakenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-128h]
  std::shared_ptr<proto::WeaponAwakenRsp> p_proto_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-110h] BYREF
  char v15[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 11 req_ptr:423 80 16 11 rsp_ptr:423 112 48 25 refresh_ability_guard:425";
  *(_QWORD *)(v2 + 16) = ItemHandler::onWeaponAwakenReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WeaponAwakenReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::WeaponAwakenReq const>(
         (const std::shared_ptr<const proto::WeaponAwakenReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "onWeaponAwakenReq",
      423);
    common::milog::MiLogStream::operator()(&v14, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::WeaponAwakenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WeaponAwakenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    common::tools::perf::make_shared<proto::WeaponAwakenRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WeaponAwakenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WeaponAwakenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    proto::WeaponAwakenRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 112));
    ret = ItemHandler::processWeaponAwakenReq(this, req, rsp_0, (RefreshAbilityGuard *)(v2 + 112));
    proto::WeaponAwakenRsp::set_retcode(rsp_0, ret);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WeaponAwakenRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WeaponAwakenRsp> *)(v2 + 80));
    GameserverService::sendRspToClient<proto::WeaponAwakenRsp>(v7, uid, &p_proto_ptr);
    std::shared_ptr<proto::WeaponAwakenRsp>::~shared_ptr(&p_proto_ptr);
    v5 = ret;
    RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 112));
    std::shared_ptr<proto::WeaponAwakenRsp>::~shared_ptr((std::shared_ptr<proto::WeaponAwakenRsp> *const)(v2 + 80));
  }
  std::shared_ptr<proto::WeaponAwakenReq const>::~shared_ptr((std::shared_ptr<const proto::WeaponAwakenReq> *const)(v2 + 48));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 433: range 0000000015111D6E-00000000151134C0
int32_t __cdecl ItemHandler::processWeaponAwakenReq(
        ItemHandler *const this,
        const proto::WeaponAwakenReq *req,
        proto::WeaponAwakenRsp *rsp_0,
        RefreshAbilityGuard *refresh_ability_guard)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v9; // rcx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool isWeaponSystemClosed; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint64_t Guid; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // r15d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t v32; // ecx
  common::milog::MiLogStream *v33; // rax
  PlayerItemComp *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // r15d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // r14
  common::milog::MiLogStream *v49; // rax
  PlayerItemComp *v50; // r15
  uint64_t v51; // r14
  Weapon *v52; // rax
  common::milog::MiLogStream *v53; // rcx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v58; // rax
  std::pair<unsigned int const,unsigned int> *v59; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rcx
  uint32_t AffixLevel; // r14d
  unsigned int *v62; // rax
  uint32_t *v63; // rdx
  PlayerItemComp *v64; // r15
  uint64_t v65; // r14
  Weapon *v66; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v67; // rax
  std::pair<unsigned int const,unsigned int> *v68; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rcx
  uint32_t v70; // r14d
  unsigned int *v71; // rax
  uint32_t *v72; // rdx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  uint32_t AwakenLevel; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+4Ch] [rbp-244h] BYREF
  uint32_t food_weapon_awaken_level; // [rsp+50h] [rbp-240h]
  int32_t ret; // [rsp+54h] [rbp-23Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+58h] [rbp-238h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+60h] [rbp-230h] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+68h] [rbp-228h]
  PlayerItemComp *item_comp; // [rsp+70h] [rbp-220h]
  google::protobuf::Map<unsigned int,unsigned int> *old_affix_level_map; // [rsp+78h] [rbp-218h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+80h] [rbp-210h]
  google::protobuf::Map<unsigned int,unsigned int> *cur_affix_level_map; // [rsp+88h] [rbp-208h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+90h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id_0; // [rsp+98h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level_0; // [rsp+A0h] [rbp-1F0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+A8h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+B0h] [rbp-1E0h]
  std::pair<unsigned int const,unsigned int> v93; // [rsp+B8h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v94; // [rsp+C0h] [rbp-1D0h] BYREF
  char v95[432]; // [rsp+E0h] [rbp-1B0h] BYREF

  v5 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 19 delta_add_level:480 64 8 22 target_weapon_guid:441 96 8 13 food_guid:442 128 16 14 wea"
                        "pon_ptr:443 160 16 14 avatar_ptr:462 192 16 19 food_weapon_ptr:499 224 48 20 fight_prop_guard:43"
                        "4 304 48 19 affix_level_map:520";
  *(_QWORD *)(v5 + 16) = ItemHandler::processWeaponAwakenReq;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862728] = -219021312;
  v7[536862729] = 62194;
  v7[536862731] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v5 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    *(_QWORD *)(v5 + 64) = proto::WeaponAwakenReq::target_weapon_guid(req);
    *(_QWORD *)(v5 + 96) = proto::WeaponAwakenReq::item_guid(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v5 + 128), (uint64_t)ItemComp);
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v5 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "processWeaponAwakenReq",
        446);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v94,
              (const char (*)[27])"findWeapon failed, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = operator<<(v11, this->player_);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])" target_weapon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = 601;
      goto LABEL_89;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 192));
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
    isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v14->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
    if ( isWeaponSystemClosed )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "processWeaponAwakenReq",
        453);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v94,
        (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = 142;
LABEL_89:
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v5 + 128));
      goto LABEL_90;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 192));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192))->feature_switch_mgr;
    v17 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    ItemId = Item::getItemId(v17);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "processWeaponAwakenReq",
        458);
      v19 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v94,
              (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
      v20 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      val = Item::getItemId(v20);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = 142;
      goto LABEL_89;
    }
    std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    Equip::getOwner((const Equip *const)(v5 + 160));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 160), 0LL) )
    {
      v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      Guid = Avatar::getGuid(v22);
      proto::WeaponAwakenRsp::set_avatar_guid(rsp_0, Guid);
      v24 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      FightPropGuard::addCreature((FightPropGuard *const)(v5 + 224), v24, 0);
      v25 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      RefreshAbilityGuard::addCreature(refresh_ability_guard, v25);
    }
    proto::WeaponAwakenRsp::set_target_weapon_guid(rsp_0, *(_QWORD *)(v5 + 64));
    v26 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    weapon_config_ptr = Weapon::getWeaponExcelConfig(v26);
    if ( !weapon_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "processWeaponAwakenReq",
        475);
      v27 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v94,
              (const char (*)[39])"weapon config cannot find, weapon_id: ");
      v28 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      val = Item::getItemId(v28);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = -1;
LABEL_88:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 160));
      goto LABEL_89;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    item_comp = Player::getItemComp(this->player_);
    *(_DWORD *)(v5 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->awaken_material >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->awaken_material >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( weapon_config_ptr->awaken_material )
    {
      PlayerItemComp::findItemInPack((PlayerItemComp *const)(v5 + 192), (uint64_t)item_comp);
      if ( std::operator==<Item>(0LL, (const std::shared_ptr<Item> *)(v5 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "processWeaponAwakenReq",
          486);
        v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v94,
                (const char (*)[31])"food matrial not found, guid: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v29,
          (const unsigned __int64 *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v94);
        v4 = -1;
        v30 = 0;
      }
      else
      {
        v31 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        v32 = Item::getItemId(v31);
        if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->awaken_material >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->awaken_material >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v32 == weapon_config_ptr->awaken_material )
        {
          *(_DWORD *)(v5 + 48) = 1;
          v30 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v94,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/item_handler.cpp",
            "processWeaponAwakenReq",
            491);
          v33 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v94,
                  (const char (*)[49])"food material id not match, awaken_material_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v33,
            &weapon_config_ptr->awaken_material);
          common::milog::MiLogStream::~MiLogStream(&v94);
          v4 = -1;
          v30 = 0;
        }
      }
      std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v5 + 192));
      if ( v30 != 1 )
        goto LABEL_88;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v34 = Player::getItemComp(this->player_);
      PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v5 + 192), (uint64_t)v34);
      if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v5 + 192), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "processWeaponAwakenReq",
          502);
        v35 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v94,
                (const char (*)[24])"findWeapon failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
        v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])" food_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v37,
          (const unsigned __int64 *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v94);
        v4 = -1;
        v38 = 0;
      }
      else
      {
        v39 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        if ( !Weapon::isCanFood(v39) )
        {
          common::milog::MiLogStream::create(
            &v94,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/item_handler.cpp",
            "processWeaponAwakenReq",
            507);
          v40 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v94,
                  (const char (*)[38])"food_weapon can not food others, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
          v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v41,
                  (const char (*)[19])" food_weapon_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v42,
            (const unsigned __int64 *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream(&v94);
          v4 = -1;
          v38 = 0;
        }
        else
        {
          v43 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          if ( Equip::getIsLocked((const Equip *const)v43) )
          {
            common::milog::MiLogStream::create(
              &v94,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/item_handler.cpp",
              "processWeaponAwakenReq",
              513);
            v44 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v94,
                    (const char (*)[36])"food_weapon can not be locked, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
            v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v45,
                    (const char (*)[12])" food_guid:");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v46,
              (const unsigned __int64 *)(v5 + 96));
            common::milog::MiLogStream::~MiLogStream(&v94);
            v4 = 691;
            v38 = 0;
          }
          else
          {
            v47 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
            food_weapon_awaken_level = Weapon::getAwakenLevel(v47);
            *(_DWORD *)(v5 + 48) = SAFE_ADD<unsigned int,int>(food_weapon_awaken_level, 1);
            v38 = 1;
          }
        }
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v5 + 192));
      if ( v38 != 1 )
        goto LABEL_88;
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 304));
    v48 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<ItemHandler::processWeaponAwakenReq(proto::WeaponAwakenReq const&,proto::WeaponAwakenRsp &,RefreshAbilityGuard &)::{lambda(unsigned int,unsigned int)#1},void,void>(
      (std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v94,
      (ItemHandler::processWeaponAwakenReq::<lambda(uint32_t, uint32_t)>)__PAIR128__(v5 + 48, v5 + 304));
    Weapon::foreachSkillAffix(v48, (std::function<ForeachPolicy(unsigned int,unsigned int)> *)&v94);
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function((std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v94);
    if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v5 + 304)) )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "processWeaponAwakenReq",
        532);
      v49 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v94,
              (const char (*)[47])"no more affix can levelup, target_weapon_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v49, (const unsigned __int64 *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = 654;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v50 = Player::getItemComp(this->player_);
      v51 = *(_QWORD *)(v5 + 96);
      v52 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      ret = PlayerItemComp::checkWeaponAwaken(v50, v52, v51, (const std::map<unsigned int,unsigned int> *)(v5 + 304));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "processWeaponAwakenReq",
          539);
        v53 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v94,
                (const char (*)[34])"checkWeaponAwaken failed, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        old_affix_level_map = proto::WeaponAwakenRsp::mutable_old_affix_level_map(rsp_0);
        __for_range = (std::map<unsigned int,unsigned int> *)(v5 + 304);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 304))._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v58 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v59 = v58;
          if ( ((unsigned __int8)v58 & 7) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v58->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v58 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v58->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v58, 8LL);
          }
          v93 = *v59;
          affix_id = std::get<0ul,unsigned int const,unsigned int>(&v93);
          affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v93);
          v60 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          AffixLevel = Weapon::getAffixLevel(v60, *affix_id);
          v62 = google::protobuf::Map<unsigned int,unsigned int>::operator[](old_affix_level_map, affix_id);
          v63 = v62;
          if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v62);
          }
          *v63 = AffixLevel;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v64 = Player::getItemComp(this->player_);
        v65 = *(_QWORD *)(v5 + 96);
        v66 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        ret = PlayerItemComp::weaponAwaken(v64, v66, v65, (const std::map<unsigned int,unsigned int> *)(v5 + 304));
        if ( !ret )
        {
          cur_affix_level_map = proto::WeaponAwakenRsp::mutable_cur_affix_level_map(rsp_0);
          __for_range_0 = (std::map<unsigned int,unsigned int> *)(v5 + 304);
          __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 304))._M_node;
          __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v67 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
            v68 = v67;
            if ( ((unsigned __int8)v67 & 7) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v67->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v67 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v67->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v67, 8LL);
            }
            v93 = *v68;
            affix_id_0 = std::get<0ul,unsigned int const,unsigned int>(&v93);
            affix_level_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v93);
            v69 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            if ( *(_BYTE *)(((unsigned __int64)affix_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)affix_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id_0 >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v70 = Weapon::getAffixLevel(v69, *affix_id_0);
            v71 = google::protobuf::Map<unsigned int,unsigned int>::operator[](cur_affix_level_map, affix_id_0);
            v72 = v71;
            if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v71);
            }
            *v72 = v70;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
          }
          v73 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          AwakenLevel = Weapon::getAwakenLevel(v73);
          proto::WeaponAwakenRsp::set_target_weapon_awaken_level(rsp_0, AwakenLevel);
          v4 = 0;
          goto LABEL_87;
        }
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/item_handler.cpp",
          "processWeaponAwakenReq",
          552);
        v53 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v94,
                (const char (*)[29])"WeaponAwaken failed, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      v54 = operator<<(v53, this->player_);
      v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v54,
              (const char (*)[21])" target_weapon_guid:");
      v56 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v55,
              (const unsigned __int64 *)(v5 + 64));
      v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v56, (const char (*)[12])" food_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v57, (const unsigned __int64 *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v94);
      v4 = ret;
    }
LABEL_87:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 304));
    goto LABEL_88;
  }
  common::milog::MiLogStream::create(
    &v94,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/item_handler.cpp",
    "processWeaponAwakenReq",
    437);
  v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v94, (const char (*)[35])off_2571A120);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v94);
  v4 = 103;
LABEL_90:
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v5 + 224));
  result = v4;
  if ( v95 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 521: range 0000000015111B0A-0000000015111D6D
__int64 __fastcall ItemHandler::processWeaponAwakenReq(proto::WeaponAwakenReq const&,proto::WeaponAwakenRsp &,RefreshAbilityGuard &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t affix_id,
        uint32_t affix_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t *v7; // rdx
  const unsigned int *v8; // rdx
  int v9; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  __int64 result; // rax
  unsigned int __a; // [rsp+18h] [rbp-88h] BYREF
  uint32_t affix_max_level; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-80h] BYREF
  char v17[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 affix_id:521";
  *(_QWORD *)(v3 + 16) = ItemHandler::processWeaponAwakenReq(proto::WeaponAwakenReq const&,proto::WeaponAwakenRsp &,RefreshAbilityGuard &)::{lambda(unsigned int,unsigned int)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = affix_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  affix_max_level = EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(
                      &v6->design_config.txt_config_mgr.equip_affix_config_mgr,
                      *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( affix_level < affix_max_level )
  {
    if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = *(uint32_t **)(__closure + 8);
    __a = affix_max_level - affix_level;
    v8 = std::min<unsigned int>(&__a, v7);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = *v8;
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = std::map<unsigned int,unsigned int>::operator[](
            *(std::map<unsigned int,unsigned int> *const *)__closure,
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = v9;
  }
  result = 0LL;
  if ( v17 == (char *)v3 )
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

// Line 566: range 00000000151134C2-0000000015113522
int32_t __cdecl ItemHandler::onCombineReq(
        ItemHandler *const this,
        const proto::CombineReq *req,
        proto::CombineRsp *rsp_0)
{
  PlayerCombineComp *CombineComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CombineComp = Player::getCombineComp(this->player_);
  return PlayerCombineComp::onCombineReq(CombineComp, req, rsp_0);
};

// Line 572: range 0000000015113524-0000000015113676
int32_t __cdecl ItemHandler::onForgeGetQueueDataReq(
        ItemHandler *const this,
        const proto::ForgeGetQueueDataReq *req,
        proto::ForgeGetQueueDataRsp *rsp_0)
{
  PlayerForgeComp *ForgeComp; // rax
  uint32_t MaxForgeQueueNum; // edx
  PlayerForgeComp *v5; // rax
  proto::ForgeQueueData *v6; // rax
  std::map<unsigned int,ForgeQueue>::const_iterator __for_begin; // [rsp+28h] [rbp-38h] BYREF
  std::map<unsigned int,ForgeQueue>::const_iterator __for_end; // [rsp+30h] [rbp-30h] BYREF
  google::protobuf::Map<unsigned int,proto::ForgeQueueData> *proto_forge_queue_map; // [rsp+38h] [rbp-28h]
  const std::map<unsigned int,ForgeQueue> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,ForgeQueue> *v13; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_id; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ForgeComp = Player::getForgeComp(this->player_);
  MaxForgeQueueNum = PlayerForgeComp::getMaxForgeQueueNum(ForgeComp);
  proto::ForgeGetQueueDataRsp::set_max_queue_num(rsp_0, MaxForgeQueueNum);
  proto_forge_queue_map = proto::ForgeGetQueueDataRsp::mutable_forge_queue_map(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getForgeComp(this->player_);
  __for_range = PlayerForgeComp::getForgeQueueMap(v5);
  __for_begin._M_node = std::map<unsigned int,ForgeQueue>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,ForgeQueue>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*(&__for_begin);
    forge_queue_id = std::get<0ul,unsigned int const,ForgeQueue>(v13);
    forge_queue = (std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *)std::get<1ul,unsigned int const,ForgeQueue>(v13);
    v6 = google::protobuf::Map<unsigned int,proto::ForgeQueueData>::operator[](proto_forge_queue_map, forge_queue_id);
    ForgeQueue::toClient(forge_queue, v6);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 584: range 0000000015113678-00000000151136D8
int32_t __cdecl ItemHandler::onForgeStartReq(
        ItemHandler *const this,
        const proto::ForgeStartReq *req,
        proto::ForgeStartRsp *rsp_0)
{
  PlayerForgeComp *ForgeComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ForgeComp = Player::getForgeComp(this->player_);
  return PlayerForgeComp::startForge(ForgeComp, req, rsp_0);
};

// Line 590: range 00000000151136DA-000000001511373A
int32_t __cdecl ItemHandler::onForgeQueueManipulateReq(
        ItemHandler *const this,
        const proto::ForgeQueueManipulateReq *req,
        proto::ForgeQueueManipulateRsp *rsp_0)
{
  PlayerForgeComp *ForgeComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ForgeComp = Player::getForgeComp(this->player_);
  return PlayerForgeComp::manipulateForge(ForgeComp, req, rsp_0);
};

// Line 595: range 000000001511373C-00000000151137EE
int32_t __cdecl ItemHandler::onBuyResinReq(
        ItemHandler *const this,
        const proto::BuyResinReq *req,
        proto::BuyResinRsp *rsp_0)
{
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v5; // rax
  uint32_t Resin; // edx
  int32_t retcode; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  retcode = PlayerItemComp::buyResin(ItemComp);
  if ( retcode )
    return retcode;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getItemComp(this->player_);
  Resin = PlayerItemComp::getResin(v5);
  proto::BuyResinRsp::set_cur_value(rsp_0, Resin);
  return 0;
};

// Line 609: range 00000000151137F0-000000001511386F
int32_t __cdecl ItemHandler::onTakeMaterialDeleteReturnReq(
        ItemHandler *const this,
        const proto::TakeMaterialDeleteReturnReq *req,
        proto::TakeMaterialDeleteReturnRsp *rsp_0)
{
  PlayerItemComp *ItemComp; // rbx
  proto::MaterialDeleteReturnType v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  v4 = proto::TakeMaterialDeleteReturnReq::type(req);
  PlayerItemComp::takeMaterialDeleteReturnItem(ItemComp, v4);
  proto::TakeMaterialDeleteReturnRsp::set_retcode(rsp_0, 0);
  return 0;
};

// Line 617: range 0000000015113870-000000001511393E
int32_t __cdecl ItemHandler::onMcoinExchangeHcoinReq(
        ItemHandler *const this,
        const proto::McoinExchangeHcoinReq *req,
        proto::McoinExchangeHcoinRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerItemComp *ItemComp; // rbx
  uint32_t v6; // r12d
  uint32_t v7; // eax
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  v3 = proto::McoinExchangeHcoinReq::mcoin_cost(req);
  proto::McoinExchangeHcoinRsp::set_mcoin_cost(rsp_0, v3);
  v4 = proto::McoinExchangeHcoinReq::hcoin(req);
  proto::McoinExchangeHcoinRsp::set_hcoin(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  v6 = proto::McoinExchangeHcoinReq::hcoin(req);
  v7 = proto::McoinExchangeHcoinReq::mcoin_cost(req);
  ret = PlayerItemComp::mcoinExchangeHcoin(ItemComp, v7, v6);
  proto::McoinExchangeHcoinRsp::set_retcode(rsp_0, ret);
  return ret;
};

// Line 627: range 0000000015113940-0000000015113E11
int32_t __cdecl ItemHandler::onDestroyMaterialReq(
        ItemHandler *const this,
        const proto::DestroyMaterialReq *req,
        proto::DestroyMaterialRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerItemComp *ItemComp; // rax
  int v7; // r14d
  int32_t result; // eax
  unsigned int __args_0; // [rsp+20h] [rbp-150h] BYREF
  int ret; // [rsp+24h] [rbp-14Ch]
  google::protobuf::RepeatedPtrField<proto::MaterilaInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+30h] [rbp-140h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const google::protobuf::RepeatedPtrField<proto::MaterilaInfo> *__for_range; // [rsp+40h] [rbp-130h]
  std::vector<ItemParam> *__for_range_0; // [rsp+48h] [rbp-128h]
  ItemParam *item_param; // [rsp+50h] [rbp-120h]
  const proto::MaterilaInfo *material; // [rsp+58h] [rbp-118h]
  char v19[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 12 guid_vec:629 96 24 13 count_vec:630 160 24 22 add_item_param_vec:637";
  *(_QWORD *)(v3 + 16) = ItemHandler::onDestroyMaterialReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 32));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  __for_range = proto::DestroyMaterialReq::material_list(req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MaterilaInfo>::begin(__for_range).it_;
  __for_begin_0._M_current = (ItemParam *)google::protobuf::RepeatedPtrField<proto::MaterilaInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MaterilaInfo const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::MaterilaInfo>::iterator *)&__for_begin_0) )
  {
    material = google::protobuf::internal::RepeatedPtrIterator<proto::MaterilaInfo const>::operator*(&__for_begin);
    __for_end._M_current = (ItemParam *)proto::MaterilaInfo::guid(material);
    std::vector<unsigned long>::emplace_back<unsigned long>(
      (std::vector<long unsigned int> *const)(v3 + 32),
      (unsigned __int64 *)&__for_end,
      (unsigned __int64 *)&__for_end);
    __args_0 = proto::MaterilaInfo::count(material);
    std::vector<unsigned int>::emplace_back<unsigned int>(
      (std::vector<unsigned int> *const)(v3 + 96),
      &__args_0,
      &__args_0);
    google::protobuf::internal::RepeatedPtrIterator<proto::MaterilaInfo const>::operator++(&__for_begin);
  }
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  ret = PlayerItemComp::destroyItemAndReturnMaterial(
          ItemComp,
          (const std::vector<long unsigned int> *)(v3 + 32),
          (const std::vector<unsigned int> *)(v3 + 96),
          (std::vector<ItemParam> *)(v3 + 160));
  if ( !ret )
  {
    __for_range_0 = (std::vector<ItemParam> *)(v3 + 160);
    __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 160))._M_current;
    __for_end._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end) )
    {
      item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( item_param->count )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::DestroyMaterialRsp::add_item_id_list(rsp_0, item_param->item_id);
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::DestroyMaterialRsp::add_item_count_list(rsp_0, item_param->count);
      }
      __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
    }
  }
  v7 = ret;
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 32));
  result = v7;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 657: range 0000000015113E12-0000000015114D9D
void __cdecl ItemHandler::tryAddAvatarToTeamAfterUseReviveItem(
        ItemHandler *const this,
        const proto::UseItemReq *req,
        uint32_t item_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneTeam *v7; // r14
  uint64_t v8; // r15
  uint32_t Uid; // eax
  char v10; // al
  PlayerAvatarComp *AvatarComp; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t v17; // eax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  uint32_t v19; // eax
  uint32_t *v20; // rdx
  std::vector<long unsigned int>::size_type v21; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::vector<long unsigned int>::size_type v23; // rax
  unsigned __int64 v25; // rax
  std::vector<long unsigned int>::size_type v26; // rax
  PlayerAvatarComp *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  PlayerAvatarComp *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  bool is_contain_revive_use_op; // [rsp+27h] [rbp-229h]
  unsigned int val; // [rsp+28h] [rbp-228h] BYREF
  uint32_t allow_num; // [rsp+2Ch] [rbp-224h]
  std::vector<data::ItemUseConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-220h] BYREF
  std::vector<data::ItemUseConfig>::const_iterator __for_end; // [rsp+38h] [rbp-218h] BYREF
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+40h] [rbp-210h]
  const std::vector<data::ItemUseConfig> *__for_range; // [rsp+48h] [rbp-208h]
  const data::ItemUseConfig *item_use_config; // [rsp+50h] [rbp-200h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+58h] [rbp-1F8h]
  common::milog::MiLogStream v46; // [rsp+60h] [rbp-1F0h] BYREF
  char v47[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 7 ret:696 48 4 17 max_allow_num:706 64 8 22 target_avatar_guid:705 96 8 19 cur_avatar_gu"
                        "id:714 128 8 8 guid:727 160 16 18 scene_team_ptr:662 192 16 14 avatar_ptr:667 224 16 13 scene_pt"
                        "r:745 256 16 18 cur_avatar_ptr:715 288 24 12 guid_vec:704 352 24 16 old_guid_vec:720";
  *(_QWORD *)(v3 + 16) = ItemHandler::tryAddAvatarToTeamAfterUseReviveItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  if ( proto::UseItemReq::is_enter_mp_dungeon_team(req) && proto::UseItemReq::target_guid(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v3 + 160));
    if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v3 + 160)) )
      goto LABEL_15;
    v7 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    v8 = proto::UseItemReq::target_guid(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    if ( SceneTeam::isAvatarInTeam(v7, Uid, v8) )
LABEL_15:
      v10 = 1;
    else
      v10 = 0;
    if ( !v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      proto::UseItemReq::target_guid(req);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 192), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/item_handler.cpp",
          "tryAddAvatarToTeamAfterUseReviveItem",
          670);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v46,
                (const char (*)[30])"findAvatar fail, target_guid:");
        __for_end._M_current = (const data::ItemUseConfig *)proto::UseItemReq::target_guid(req);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 256));
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                &v13->design_config.txt_config_mgr.material_config_mgr,
                                item_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
        if ( material_config_ptr )
        {
          is_contain_revive_use_op = 0;
          __for_range = &material_config_ptr->item_use;
          __for_begin._M_current = std::vector<data::ItemUseConfig>::begin(&material_config_ptr->item_use)._M_current;
          __for_end._M_current = std::vector<data::ItemUseConfig>::end(&material_config_ptr->item_use)._M_current;
          while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
                    &__for_begin,
                    &__for_end) )
          {
            item_use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( item_use_config->use_op == ITEM_USE_RELIVE_AVATAR )
            {
              is_contain_revive_use_op = 1;
              break;
            }
            __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++(&__for_begin);
          }
          if ( is_contain_revive_use_op )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 32) = Player::checkIsInSafeStateForChangeTeam(this->player_, 0);
            if ( *(_DWORD *)(v3 + 32) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/item_handler.cpp",
                "tryAddAvatarToTeamAfterUseReviveItem",
                699);
              v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v46,
                      (const char (*)[43])"checkIsInSafeStateForChangeTeam fail, ret:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
            else
            {
              v16 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v17 = Player::getUid(this->player_);
              SceneTeam::getAvatarGuidVec((std::vector<long unsigned int> *)(v3 + 288), v16, v17);
              *(_QWORD *)(v3 + 64) = proto::UseItemReq::target_guid(req);
              *(_DWORD *)(v3 + 48) = 4;
              v18 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v19 = Player::getUid(this->player_);
              val = SceneTeam::getAllowAvatarNum(v18, v19);
              v20 = (uint32_t *)std::min<unsigned int>(&val, (const unsigned int *)(v3 + 48));
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              allow_num = *v20;
              v21 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 288));
              if ( v21 >= allow_num )
              {
                *(_QWORD *)(v3 + 96) = 0LL;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getAvatarComp(this->player_);
                PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 256));
                if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 256)) )
                {
                  v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  *(_QWORD *)(v3 + 96) = Avatar::getGuid(v22);
                }
                std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 352));
                std::vector<unsigned long>::swap(
                  (std::vector<long unsigned int> *const)(v3 + 352),
                  (std::vector<long unsigned int> *)(v3 + 288));
                std::vector<unsigned long>::push_back(
                  (std::vector<long unsigned int> *const)(v3 + 288),
                  (const std::vector<long unsigned int>::value_type *)(v3 + 64));
                v23 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 288));
                if ( v23 < allow_num
                  && *(_QWORD *)(v3 + 96)
                  && !common::tools::MiscUtils::isContains<unsigned long>(
                        (std::vector<long unsigned int> *)(v3 + 288),
                        (const unsigned __int64 *)(v3 + 96)) )
                {
                  std::vector<unsigned long>::push_back(
                    (std::vector<long unsigned int> *const)(v3 + 288),
                    (const std::vector<long unsigned int>::value_type *)(v3 + 96));
                }
                __for_range_0 = (std::vector<long unsigned int> *)(v3 + 352);
                __for_begin._M_current = (const data::ItemUseConfig *)std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 352))._M_current;
                __for_end._M_current = (const data::ItemUseConfig *)std::vector<unsigned long>::end(__for_range_0)._M_current;
                while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                          (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_begin,
                          (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_end) )
                {
                  v25 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_begin);
                  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                    v25 = __asan_report_load8();
                  *(_QWORD *)(v3 + 128) = *(_QWORD *)v25;
                  v26 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 288));
                  if ( v26 < allow_num
                    && *(_QWORD *)(v3 + 128)
                    && !common::tools::MiscUtils::isContains<unsigned long>(
                          (std::vector<long unsigned int> *)(v3 + 288),
                          (const unsigned __int64 *)(v3 + 128)) )
                  {
                    std::vector<unsigned long>::push_back(
                      (std::vector<long unsigned int> *const)(v3 + 288),
                      (const std::vector<long unsigned int>::value_type *)(v3 + 128));
                  }
                  __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_begin);
                }
                if ( common::tools::MiscUtils::isContains<unsigned long>(
                       (std::vector<long unsigned int> *)(v3 + 288),
                       (const unsigned __int64 *)(v3 + 96)) )
                {
                  *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 96);
                }
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 352));
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 256));
              }
              else
              {
                __for_end._M_current = (const data::ItemUseConfig *)proto::UseItemReq::target_guid(req);
                std::vector<unsigned long>::push_back(
                  (std::vector<long unsigned int> *const)(v3 + 288),
                  (std::vector<long unsigned int>::value_type *)&__for_end);
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v28 = Player::getAvatarComp(this->player_);
              *(_DWORD *)(v3 + 32) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                                       v28,
                                       (const std::vector<long unsigned int> *)(v3 + 288));
              if ( *(_DWORD *)(v3 + 32) )
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/item_handler.cpp",
                  "tryAddAvatarToTeamAfterUseReviveItem",
                  742);
                v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        &v46,
                        (const char (*)[48])"checkAvatarTeamCanJoinSceneTeam fails. retcode:");
                v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v3 + 32));
                v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v30,
                        (const char (*)[11])" guid_vec:");
                common::milog::MiLogStream::operator<<<unsigned long>(
                  v31,
                  (const std::vector<long unsigned int> *)(v3 + 288));
                common::milog::MiLogStream::~MiLogStream(&v46);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getSceneComp(this->player_);
                PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 224));
                if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 224)) )
                {
                  common::milog::MiLogStream::create(
                    &v46,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/item_handler.cpp",
                    "tryAddAvatarToTeamAfterUseReviveItem",
                    748);
                  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v46,
                    (const char (*)[22])"cannot find cur scene");
                  common::milog::MiLogStream::~MiLogStream(&v46);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v32 = Player::getAvatarComp(this->player_);
                  std::shared_ptr<Scene>::shared_ptr(
                    (std::shared_ptr<Scene> *const)(v3 + 256),
                    (const std::shared_ptr<Scene> *)(v3 + 224));
                  *(_DWORD *)(v3 + 32) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                           v32,
                                           (const std::vector<long unsigned int> *)(v3 + 288),
                                           *(_QWORD *)(v3 + 64),
                                           (ScenePtr *)(v3 + 256),
                                           CHANGE_SCENE_TEAM_REASON_USE_ITEM_REVIVE);
                  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 256));
                  if ( *(_DWORD *)(v3 + 32) )
                  {
                    common::milog::MiLogStream::create(
                      &v46,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/item_handler.cpp",
                      "tryAddAvatarToTeamAfterUseReviveItem",
                      755);
                    v33 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            &v46,
                            (const char (*)[42])"setSceneTeamAndAddToScene fail, guid_vec:");
                    v34 = common::milog::MiLogStream::operator<<<unsigned long>(
                            v33,
                            (const std::vector<long unsigned int> *)(v3 + 288));
                    v35 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v34,
                            (const char (*)[21])" target_avatar_guid:");
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v35,
                      (const unsigned __int64 *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v46);
                  }
                }
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 224));
              }
              std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 288));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/item_handler.cpp",
            "tryAddAvatarToTeamAfterUseReviveItem",
            678);
          v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v46,
                  (const char (*)[31])"getMaterialConfig failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v46);
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 192));
    }
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 160));
  }
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 761: range 0000000015114D9E-00000000151158BD
int32_t __cdecl ItemHandler::onSetEquipLockStateReq(
        ItemHandler *const this,
        const proto::SetEquipLockStateReq *req,
        proto::SetEquipLockStateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool isWeaponSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  bool isReliquarySystemClosed; // r14
  FeatureSwitchMgr *v27; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // eax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  PlayerItemComp *v35; // r15
  bool is_locked; // r14
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  google::protobuf::uint64 v40; // rdx
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  bool IsLocked; // dl
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-B0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-ACh]
  unsigned __int64 Guid; // [rsp+28h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v48; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v49; // [rsp+40h] [rbp-90h] BYREF
  char v50[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 equip_ptr:767";
  *(_QWORD *)(v3 + 16) = ItemHandler::onSetEquipLockStateReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    proto::SetEquipLockStateReq::target_equip_guid(req);
    PlayerItemComp::findItemInPack<Equip>((PlayerItemComp *const)(v3 + 32), (uint64_t)ItemComp);
    if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/item_handler.cpp",
        "onSetEquipLockStateReq",
        770);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v49,
              (const char (*)[23])"findEquip failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v11,
              (const char (*)[20])" target_equip_guid:");
      Guid = proto::SetEquipLockStateReq::target_equip_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &Guid);
      common::milog::MiLogStream::~MiLogStream(&v49);
      v8 = 601;
      goto LABEL_42;
    }
    v13 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    v14 = *(_QWORD *)v13 + 72LL;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) == 4 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
      isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v15->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      if ( isWeaponSystemClosed )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onSetEquipLockStateReq",
          778);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v49,
          (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
        common::milog::MiLogStream::~MiLogStream(&v49);
        v8 = 142;
LABEL_42:
        std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 32));
        goto LABEL_43;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->feature_switch_mgr;
      v18 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ItemId = Item::getItemId(v18);
      LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      if ( (_BYTE)p_feature_switch_mgr )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onSetEquipLockStateReq",
          783);
        v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v49,
                (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
        v21 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        val = Item::getItemId(v21);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream(&v49);
        v8 = 142;
        goto LABEL_42;
      }
    }
    else
    {
      v23 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      v24 = *(_QWORD *)v23 + 72LL;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v24)(v23) != 3 )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/item_handler.cpp",
          "onSetEquipLockStateReq",
          804);
        v33 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v49,
                (const char (*)[30])"unexpected lock target, guid:");
        v34 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Guid = Item::getGuid(v34);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, &Guid);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v8 = -1;
        goto LABEL_42;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
      isReliquarySystemClosed = FeatureSwitchMgr::isReliquarySystemClosed(&v25->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      if ( isReliquarySystemClosed )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onSetEquipLockStateReq",
          793);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v49,
          (const char (*)[40])"[FEATURE_SWITCH] ReliquarySystem closed");
        common::milog::MiLogStream::~MiLogStream(&v49);
        v8 = 142;
        goto LABEL_42;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v27 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->feature_switch_mgr;
      v28 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v29 = Item::getItemId(v28);
      LOBYTE(v27) = FeatureSwitchMgr::isReliquaryClosed(v27, v29);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      if ( (_BYTE)v27 )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onSetEquipLockStateReq",
          798);
        v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v49,
                (const char (*)[43])"[FEATURE_SWITCH] ReliquarySystem item_id: ");
        v31 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        val = Item::getItemId(v31);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream(&v49);
        v8 = 142;
        goto LABEL_42;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v35 = Player::getItemComp(this->player_);
    is_locked = proto::SetEquipLockStateReq::is_locked(req);
    std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)&v48, (const std::shared_ptr<Equip> *)(v3 + 32));
    ret = PlayerItemComp::setEquipLockState(v35, (EquipPtr *)&v48, is_locked);
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)&v48);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onSetEquipLockStateReq",
        811);
      v37 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v49,
              (const char (*)[31])"setEquipLockState failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
      v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v38,
              (const char (*)[20])" target_equip_guid:");
      Guid = proto::SetEquipLockStateReq::target_equip_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v39, &Guid);
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    v40 = proto::SetEquipLockStateReq::target_equip_guid(req);
    proto::SetEquipLockStateRsp::set_target_equip_guid(rsp_0, v40);
    v41 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    IsLocked = Equip::getIsLocked(v41);
    proto::SetEquipLockStateRsp::set_is_locked(rsp_0, IsLocked);
    v8 = ret;
    goto LABEL_42;
  }
  common::milog::MiLogStream::create(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/item_handler.cpp",
    "onSetEquipLockStateReq",
    764);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v49, (const char (*)[27])off_25719580);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v49);
  v8 = 103;
LABEL_43:
  result = v8;
  if ( v50 == (char *)v3 )
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

// Line 820: range 00000000151158BE-00000000151163B2
int32_t __cdecl ItemHandler::onCalcWeaponUpgradeReturnItemsReq(
        ItemHandler *const this,
        const proto::CalcWeaponUpgradeReturnItemsReq *req,
        proto::CalcWeaponUpgradeReturnItemsRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isWeaponSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v21; // rax
  PlayerItemComp *v22; // r14
  uint64_t v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  google::protobuf::uint64 v27; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-1B0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-1ACh]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+38h] [rbp-198h]
  std::vector<ItemParam> *__for_range_0; // [rsp+40h] [rbp-190h]
  const ItemParam *ret_item_param; // [rsp+48h] [rbp-188h]
  proto::ItemParam *item_param; // [rsp+50h] [rbp-180h]
  const proto::ItemParam *proto_item_param; // [rsp+58h] [rbp-178h]
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-170h] BYREF
  char v40[336]; // [rsp+80h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 14 weapon_ptr:826 64 16 9 param:851 96 24 24 food_weapon_guid_vec:845 160 24 18 item_par"
                        "am_vec:848 224 24 22 ret_item_param_vec:855";
  *(_QWORD *)(v3 + 16) = ItemHandler::onCalcWeaponUpgradeReturnItemsReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( !PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/item_handler.cpp",
      "onCalcWeaponUpgradeReturnItemsReq",
      823);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v39, (const char (*)[27])off_25719580);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v8 = 103;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    proto::CalcWeaponUpgradeReturnItemsReq::target_weapon_guid(req);
    PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v3 + 32), (uint64_t)ItemComp);
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/item_handler.cpp",
        "onCalcWeaponUpgradeReturnItemsReq",
        829);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v39,
              (const char (*)[24])"findWeapon failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" target_weapon_guid:");
      __for_end.it_ = (void *const *)proto::CalcWeaponUpgradeReturnItemsReq::target_weapon_guid(req);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v12,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v8 = 601;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 64));
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v13->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
      if ( isWeaponSystemClosed )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/item_handler.cpp",
          "onCalcWeaponUpgradeReturnItemsReq",
          836);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v39,
          (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
        common::milog::MiLogStream::~MiLogStream(&v39);
        v8 = 142;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 64));
        p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->feature_switch_mgr;
        v16 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        ItemId = Item::getItemId(v16);
        LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
        if ( (_BYTE)p_feature_switch_mgr )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/item_handler.cpp",
            "onCalcWeaponUpgradeReturnItemsReq",
            841);
          v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v39,
                  (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
          v19 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          val = Item::getItemId(v19);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" closed");
          common::milog::MiLogStream::~MiLogStream(&v39);
          v8 = 142;
        }
        else
        {
          std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 96));
          v21 = proto::CalcWeaponUpgradeReturnItemsReq::food_weapon_guid_list(req);
          common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
            v21,
            (std::vector<long unsigned int> *)(v3 + 96));
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
          __for_range = proto::CalcWeaponUpgradeReturnItemsReq::item_param_list(req);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            proto_item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
            *(_QWORD *)(v3 + 64) = 0LL;
            *(_QWORD *)(v3 + 72) = 0LL;
            *(_DWORD *)(v3 + 64) = proto::ItemParam::item_id(proto_item_param);
            *(_DWORD *)(v3 + 68) = proto::ItemParam::count(proto_item_param);
            std::vector<ItemParam>::emplace_back<ItemParam&>(
              (std::vector<ItemParam> *const)(v3 + 160),
              (ItemParam *)(v3 + 64),
              (ItemParam *)(v3 + 64));
            google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
          }
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 224));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = Player::getItemComp(this->player_);
          v23 = proto::CalcWeaponUpgradeReturnItemsReq::target_weapon_guid(req);
          ret = PlayerItemComp::checkWeaponUpgradeAndReturnItems(
                  v22,
                  v23,
                  (const std::vector<long unsigned int> *)(v3 + 96),
                  (const std::vector<ItemParam> *)(v3 + 160),
                  (std::vector<ItemParam> *)(v3 + 224));
          if ( !ret || ret == 617 )
          {
            __for_range_0 = (std::vector<ItemParam> *)(v3 + 224);
            __for_begin.it_ = (void *const *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 224))._M_current;
            __for_end.it_ = (void *const *)std::vector<ItemParam>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
            {
              ret_item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
              item_param = proto::CalcWeaponUpgradeReturnItemsRsp::add_item_param_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)ret_item_param >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret_item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_item_param >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ItemParam::set_item_id(item_param, ret_item_param->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&ret_item_param->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)ret_item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ret_item_param->count >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ItemParam::set_count(item_param, ret_item_param->count);
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
            }
            v27 = proto::CalcWeaponUpgradeReturnItemsReq::target_weapon_guid(req);
            proto::CalcWeaponUpgradeReturnItemsRsp::set_target_weapon_guid(rsp_0, v27);
            v8 = ret;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/item_handler.cpp",
              "onCalcWeaponUpgradeReturnItemsReq",
              859);
            v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v39,
                    (const char (*)[46])"checkWeaponUpgradeAndReturnItems failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v25,
                    (const char (*)[21])" target_weapon_guid:");
            __for_end.it_ = (void *const *)proto::CalcWeaponUpgradeReturnItemsReq::target_weapon_guid(req);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v26,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v39);
            v8 = ret;
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 224));
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 96));
        }
      }
    }
    std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 32));
  }
  result = v8;
  if ( v40 == (char *)v3 )
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

// Line 876: range 00000000151163B4-0000000015116617
int32_t __cdecl ItemHandler::onSetIsAutoUnlockSpecificEquipReq(
        ItemHandler *const this,
        const proto::SetIsAutoUnlockSpecificEquipReq *req,
        proto::SetIsAutoUnlockSpecificEquipRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // r14
  bool is_auto_unlock_specific_equip; // al
  PlayerBasicComp *v8; // rax
  bool IsAutoUnlockSpecificEquip; // al
  int32_t result; // eax
  proto::PropValue __args_0; // [rsp+20h] [rbp-C0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 19 notify_prop_vec:878";
  *(_QWORD *)(v3 + 16) = ItemHandler::onSetIsAutoUnlockSpecificEquipReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  is_auto_unlock_specific_equip = proto::SetIsAutoUnlockSpecificEquipReq::is_auto_unlock_specific_equip(req);
  PlayerBasicComp::setIsAutoUnlockSpecificEquip(BasicComp, is_auto_unlock_specific_equip);
  std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = Player::getBasicComp(this->player_);
  IsAutoUnlockSpecificEquip = PlayerBasicComp::getIsAutoUnlockSpecificEquip(v8);
  buildIntProp(&__args_0, 0x273Cu, IsAutoUnlockSpecificEquip);
  std::vector<proto::PropValue>::emplace_back<proto::PropValue>(
    (std::vector<proto::PropValue> *const)(v3 + 32),
    &__args_0,
    &__args_0);
  proto::PropValue::~PropValue(&__args_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::notifyPlayerPropList(this->player_, (const std::vector<proto::PropValue> *)(v3 + 32));
  std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
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

// Line 885: range 0000000015116618-0000000015116678
int32_t __cdecl ItemHandler::onReliquaryDecomposeReq(
        ItemHandler *const this,
        const proto::ReliquaryDecomposeReq *req,
        proto::ReliquaryDecomposeRsp *rsp_0)
{
  PlayerCombineComp *CombineComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CombineComp = Player::getCombineComp(this->player_);
  return PlayerCombineComp::processReliquaryDecomposeReq(CombineComp, req, rsp_0);
};

// Line 890: range 000000001511667A-00000000151169CD
int32_t __cdecl ItemHandler::onReliquaryFilterStateSaveNotify(
        ItemHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  const google::protobuf::Map<unsigned int,unsigned int> *v6; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v7; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-13Ch]
  std::__shared_ptr_access<proto::ReliquaryFilterStateSaveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-138h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __last; // [rsp+20h] [rbp-130h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __first; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 notify_ptr:891 80 48 20 filter_state_map:892";
  *(_QWORD *)(v2 + 16) = ItemHandler::onReliquaryFilterStateSaveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ReliquaryFilterStateSaveNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ReliquaryFilterStateSaveNotify>(
         (const std::shared_ptr<proto::ReliquaryFilterStateSaveNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/item_handler.cpp",
      "onReliquaryFilterStateSaveNotify",
      891);
    common::milog::MiLogStream::operator()(&v15, off_2571AC60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ReliquaryFilterStateSaveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReliquaryFilterStateSaveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v6 = proto::ReliquaryFilterStateSaveNotify::reliquary_filter_state_map(notify);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__last, v6);
    v7 = proto::ReliquaryFilterStateSaveNotify::reliquary_filter_state_map(notify);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__first, v7);
    std::map<unsigned int,unsigned int>::map<google::protobuf::Map<unsigned int,unsigned int>::const_iterator>(
      (std::map<unsigned int,unsigned int> *const)(v2 + 80),
      __first,
      __last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    ret = PlayerItemComp::checkReliquaryFilterState(ItemComp, (const std::map<unsigned int,unsigned int> *)(v2 + 80));
    if ( ret )
    {
      v5 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getItemComp(this->player_);
      PlayerItemComp::resetReliquaryFilterState(v9, (const std::map<unsigned int,unsigned int> *)(v2 + 80));
      v5 = 0;
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
  }
  std::shared_ptr<proto::ReliquaryFilterStateSaveNotify>::~shared_ptr((std::shared_ptr<proto::ReliquaryFilterStateSaveNotify> *const)(v2 + 48));
  result = v5;
  if ( v16 == (char *)v2 )
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
