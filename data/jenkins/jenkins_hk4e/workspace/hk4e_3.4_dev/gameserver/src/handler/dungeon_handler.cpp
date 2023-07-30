// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/dungeon_handler.cpp

// Line 47: range 000000001310712A-000000001310859B
int32_t __cdecl DungeonHandler::addPacketFuncToMap(DungeonHandler *const this, PacketFuncMap *process_packet_func_map)
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
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v21; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v24; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-30h] BYREF

  __x = 972;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v24, &__y) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/dungeon_handler.cpp",
      "addPacketFuncToMap",
      48);
    common::milog::MiLogStream::operator()(&v26, format, 972LL);
    common::milog::MiLogStream::~MiLogStream(&v26);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 972;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 912;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v24, &__y) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/dungeon_handler.cpp",
        "addPacketFuncToMap",
        49);
      common::milog::MiLogStream::operator()(&v26, format, 912LL);
      common::milog::MiLogStream::~MiLogStream(&v26);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 912;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 990;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v24, &__y) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/dungeon_handler.cpp",
          "addPacketFuncToMap",
          50);
        common::milog::MiLogStream::operator()(&v26, format, 990LL);
        common::milog::MiLogStream::~MiLogStream(&v26);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 990;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 907;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v24, &__y) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/dungeon_handler.cpp",
            "addPacketFuncToMap",
            51);
          common::milog::MiLogStream::operator()(&v26, format, 907LL);
          common::milog::MiLogStream::~MiLogStream(&v26);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 907;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 975;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v24, &__y) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/dungeon_handler.cpp",
              "addPacketFuncToMap",
              52);
            common::milog::MiLogStream::operator()(&v26, format, 975LL);
            common::milog::MiLogStream::~MiLogStream(&v26);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 975;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 981;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v24, &__y) )
            {
              common::milog::MiLogStream::create(
                &v26,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/dungeon_handler.cpp",
                "addPacketFuncToMap",
                53);
              common::milog::MiLogStream::operator()(&v26, format, 981LL);
              common::milog::MiLogStream::~MiLogStream(&v26);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 981;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 995;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v24, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v26,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/dungeon_handler.cpp",
                  "addPacketFuncToMap",
                  54);
                common::milog::MiLogStream::operator()(&v26, format, 995LL);
                common::milog::MiLogStream::~MiLogStream(&v26);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 995;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 934;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v24, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v26,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/dungeon_handler.cpp",
                    "addPacketFuncToMap",
                    55);
                  common::milog::MiLogStream::operator()(&v26, format, 934LL);
                  common::milog::MiLogStream::~MiLogStream(&v26);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 934;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 943;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v24, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v26,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/dungeon_handler.cpp",
                      "addPacketFuncToMap",
                      56);
                    common::milog::MiLogStream::operator()(&v26, format, 943LL);
                    common::milog::MiLogStream::~MiLogStream(&v26);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 943;
                    v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                      v11,
                      (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 976;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v24, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v26,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/dungeon_handler.cpp",
                        "addPacketFuncToMap",
                        57);
                      common::milog::MiLogStream::operator()(&v26, format, 976LL);
                      common::milog::MiLogStream::~MiLogStream(&v26);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 976;
                      v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                        v12,
                        (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 941;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_map,
                                      &__x)._M_node;
                      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                      if ( std::operator!=(&v24, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v26,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/dungeon_handler.cpp",
                          "addPacketFuncToMap",
                          58);
                        common::milog::MiLogStream::operator()(&v26, format, 941LL);
                        common::milog::MiLogStream::~MiLogStream(&v26);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                        __x = 941;
                        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_map,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                          v13,
                          (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 991;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_map,
                                        &__x)._M_node;
                        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                        if ( std::operator!=(&v24, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v26,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/dungeon_handler.cpp",
                            "addPacketFuncToMap",
                            59);
                          common::milog::MiLogStream::operator()(&v26, format, 991LL);
                          common::milog::MiLogStream::~MiLogStream(&v26);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                          __x = 991;
                          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_map,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                            v14,
                            (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 956;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_map,
                                          &__x)._M_node;
                          v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                          if ( std::operator!=(&v24, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v26,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/dungeon_handler.cpp",
                              "addPacketFuncToMap",
                              60);
                            common::milog::MiLogStream::operator()(&v26, format, 956LL);
                            common::milog::MiLogStream::~MiLogStream(&v26);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                            __x = 956;
                            v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_map,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                              v15,
                              (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 930;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_map,
                                            &__x)._M_node;
                            v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                            if ( std::operator!=(&v24, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v26,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/dungeon_handler.cpp",
                                "addPacketFuncToMap",
                                61);
                              common::milog::MiLogStream::operator()(&v26, format, 930LL);
                              common::milog::MiLogStream::~MiLogStream(&v26);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                              __x = 930;
                              v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_map,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                v16,
                                (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 958;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_map,
                                              &__x)._M_node;
                              v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                              if ( std::operator!=(&v24, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v26,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/dungeon_handler.cpp",
                                  "addPacketFuncToMap",
                                  62);
                                common::milog::MiLogStream::operator()(&v26, format, 958LL);
                                common::milog::MiLogStream::~MiLogStream(&v26);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                __x = 958;
                                v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_map,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                  v17,
                                  (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 917;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_map,
                                                &__x)._M_node;
                                v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                if ( std::operator!=(&v24, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v26,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/dungeon_handler.cpp",
                                    "addPacketFuncToMap",
                                    63);
                                  common::milog::MiLogStream::operator()(&v26, format, 917LL);
                                  common::milog::MiLogStream::~MiLogStream(&v26);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                  __x = 917;
                                  v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_map,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                    v18,
                                    (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 919;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_map,
                                                  &__x)._M_node;
                                  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                  if ( std::operator!=(&v24, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v26,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/dungeon_handler.cpp",
                                      "addPacketFuncToMap",
                                      64);
                                    common::milog::MiLogStream::operator()(&v26, format, 919LL);
                                    common::milog::MiLogStream::~MiLogStream(&v26);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                    __x = 919;
                                    v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_map,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                      v19,
                                      (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 961;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_map,
                                                    &__x)._M_node;
                                    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                    if ( std::operator!=(&v24, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v26,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/dungeon_handler.cpp",
                                        "addPacketFuncToMap",
                                        65);
                                      common::milog::MiLogStream::operator()(&v26, format, 961LL);
                                      common::milog::MiLogStream::~MiLogStream(&v26);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                      __x = 961;
                                      v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_map,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                        v20,
                                        (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 1000;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_map,
                                                      &__x)._M_node;
                                      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                      if ( std::operator!=(&v24, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v26,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/dungeon_handler.cpp",
                                          "addPacketFuncToMap",
                                          66);
                                        common::milog::MiLogStream::operator()(&v26, format, 1000LL);
                                        common::milog::MiLogStream::~MiLogStream(&v26);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                        __x = 1000;
                                        v21 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_map,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}>(
                                          v21,
                                          (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 918;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_map,
                                                        &__x)._M_node;
                                        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                        if ( std::operator!=(&v24, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v26,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/dungeon_handler.cpp",
                                            "addPacketFuncToMap",
                                            67);
                                          common::milog::MiLogStream::operator()(&v26, format, 918LL);
                                          common::milog::MiLogStream::~MiLogStream(&v26);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                          __x = 918;
                                          v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_map,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}>(
                                            v22,
                                            (DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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
};

// Line 48: range 000000001310340C-0000000013103728
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonEntryInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonEntryInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonEntryInfoReq const>(
         (const std::shared_ptr<const proto::DungeonEntryInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      48);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonEntryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonEntryInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonEntryInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonEntryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonEntryInfoReq(this, v8, rsp_0);
    proto::DungeonEntryInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonEntryInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonEntryInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonEntryInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonEntryInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonEntryInfoRsp>::~shared_ptr((std::shared_ptr<proto::DungeonEntryInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonEntryInfoReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonEntryInfoReq> *const)(v2 + 32));
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

// Line 49: range 000000001310372A-0000000013103A46
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerEnterDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerEnterDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerEnterDungeonRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerEnterDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerEnterDungeonReq const>(
         (const std::shared_ptr<const proto::PlayerEnterDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      49);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerEnterDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerEnterDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerEnterDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerEnterDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerEnterDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerEnterDungeonRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerEnterDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerEnterDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onPlayerEnterDungeonReq(this, v8, rsp_0);
    proto::PlayerEnterDungeonRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerEnterDungeonRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerEnterDungeonRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerEnterDungeonRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerEnterDungeonRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerEnterDungeonRsp>::~shared_ptr((std::shared_ptr<proto::PlayerEnterDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerEnterDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerEnterDungeonReq> *const)(v2 + 32));
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

// Line 50: range 0000000013103A48-0000000013103D64
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonWayPointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonWayPointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonWayPointActivateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonWayPointActivateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonWayPointActivateReq const>(
         (const std::shared_ptr<const proto::DungeonWayPointActivateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      50);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonWayPointActivateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonWayPointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonWayPointActivateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonWayPointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonWayPointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonWayPointActivateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonWayPointActivateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonWayPointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonWayPointActivateReq(this, v8, rsp_0);
    proto::DungeonWayPointActivateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonWayPointActivateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonWayPointActivateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonWayPointActivateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonWayPointActivateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonWayPointActivateRsp>::~shared_ptr((std::shared_ptr<proto::DungeonWayPointActivateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonWayPointActivateReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonWayPointActivateReq> *const)(v2 + 32));
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

// Line 51: range 0000000013103D66-0000000013104082
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerQuitDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerQuitDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerQuitDungeonRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerQuitDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerQuitDungeonReq const>(
         (const std::shared_ptr<const proto::PlayerQuitDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      51);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerQuitDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerQuitDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerQuitDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerQuitDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerQuitDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerQuitDungeonRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerQuitDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerQuitDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onPlayerQuitDungeonReq(this, v8, rsp_0);
    proto::PlayerQuitDungeonRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerQuitDungeonRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerQuitDungeonRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerQuitDungeonRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerQuitDungeonRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerQuitDungeonRsp>::~shared_ptr((std::shared_ptr<proto::PlayerQuitDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerQuitDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerQuitDungeonReq> *const)(v2 + 32));
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

// Line 52: range 0000000013104084-00000000131043A0
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonDieOptionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonDieOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonDieOptionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonDieOptionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonDieOptionReq const>(
         (const std::shared_ptr<const proto::DungeonDieOptionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonDieOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonDieOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonDieOptionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonDieOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonDieOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonDieOptionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonDieOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonDieOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonDieOptionReq(this, v8, rsp_0);
    proto::DungeonDieOptionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonDieOptionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonDieOptionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonDieOptionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonDieOptionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonDieOptionRsp>::~shared_ptr((std::shared_ptr<proto::DungeonDieOptionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonDieOptionReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonDieOptionReq> *const)(v2 + 32));
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

// Line 53: range 00000000131043A2-00000000131046BE
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonPlayerDieReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonPlayerDieRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonPlayerDieRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonPlayerDieReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonPlayerDieReq const>(
         (const std::shared_ptr<const proto::DungeonPlayerDieReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      53);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonPlayerDieReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonPlayerDieReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonPlayerDieRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonPlayerDieRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonPlayerDieRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonPlayerDieRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonPlayerDieReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonPlayerDieReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonPlayerDieReq(this, v8, rsp_0);
    proto::DungeonPlayerDieRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonPlayerDieRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonPlayerDieRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonPlayerDieRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonPlayerDieRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonPlayerDieRsp>::~shared_ptr((std::shared_ptr<proto::DungeonPlayerDieRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonPlayerDieReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonPlayerDieReq> *const)(v2 + 32));
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

// Line 54: range 00000000131046C0-00000000131049DC
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamCreateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamCreateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamCreateReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamCreateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      54);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamCreateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamCreateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamCreateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamCreateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamCreateReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamCreateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamCreateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamCreateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamCreateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamCreateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamCreateRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamCreateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamCreateReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamCreateReq> *const)(v2 + 32));
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

// Line 55: range 00000000131049DE-0000000013104CFA
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamInviteReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      55);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamInviteReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamInviteRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamInviteReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamInviteReq> *const)(v2 + 32));
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

// Line 56: range 0000000013104CFC-0000000013105018
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamKickReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamKickRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamKickRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamKickReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamKickReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamKickReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      56);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamKickReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamKickReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamKickRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamKickRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamKickRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamKickRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamKickReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamKickReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamKickReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamKickRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamKickRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamKickRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamKickRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamKickRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamKickRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamKickRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamKickReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamKickReq> *const)(v2 + 32));
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

// Line 57: range 000000001310501A-0000000013105336
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamLeaveReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamLeaveRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamLeaveReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamLeaveReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamLeaveReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      57);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamLeaveReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamLeaveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamLeaveRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamLeaveRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamLeaveRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamLeaveRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamLeaveReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamLeaveReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamLeaveReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamLeaveRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamLeaveRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamLeaveRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamLeaveReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamLeaveReq> *const)(v2 + 32));
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

// Line 58: range 0000000013105338-0000000013105654
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamReplyInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamReplyInviteReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamReplyInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      58);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamReplyInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamReplyInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamReplyInviteReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamReplyInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamReplyInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamReplyInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamReplyInviteReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamReplyInviteReq> *const)(v2 + 32));
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

// Line 59: range 0000000013105656-0000000013105972
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamSetReadyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamSetReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamSetReadyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamSetReadyReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamSetReadyReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      59);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamSetReadyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamSetReadyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamSetReadyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamSetReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamSetReadyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamSetReadyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamSetReadyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamSetReadyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamSetReadyReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamSetReadyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamSetReadyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamSetReadyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamSetReadyReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamSetReadyReq> *const)(v2 + 32));
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

// Line 60: range 0000000013105974-0000000013105C90
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamChangeAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamChangeAvatarReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamChangeAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamChangeAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamChangeAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamChangeAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamChangeAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamChangeAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamChangeAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamChangeAvatarReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamChangeAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamChangeAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamChangeAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamChangeAvatarReq> *const)(v2 + 32));
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

// Line 61: range 0000000013105C92-0000000013105FAE
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::GetDailyDungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetDailyDungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:61 64 16 10 rsp_ptr:61";
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetDailyDungeonEntryInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetDailyDungeonEntryInfoReq const>(
         (const std::shared_ptr<const proto::GetDailyDungeonEntryInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      61);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetDailyDungeonEntryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetDailyDungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetDailyDungeonEntryInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetDailyDungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetDailyDungeonEntryInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetDailyDungeonEntryInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetDailyDungeonEntryInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetDailyDungeonEntryInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onGetDailyDungeonEntryInfoReq(this, v8, rsp_0);
    proto::GetDailyDungeonEntryInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetDailyDungeonEntryInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetDailyDungeonEntryInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetDailyDungeonEntryInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetDailyDungeonEntryInfoReq> *const)(v2 + 32));
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

// Line 62: range 0000000013105FB0-00000000131062CC
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonSlipRevivePointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonSlipRevivePointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonSlipRevivePointActivateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonSlipRevivePointActivateReq const>(
         (const std::shared_ptr<const proto::DungeonSlipRevivePointActivateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      62);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonSlipRevivePointActivateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonSlipRevivePointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonSlipRevivePointActivateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonSlipRevivePointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonSlipRevivePointActivateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonSlipRevivePointActivateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonSlipRevivePointActivateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonSlipRevivePointActivateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonSlipRevivePointActivateReq(this, v8, rsp_0);
    proto::DungeonSlipRevivePointActivateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonSlipRevivePointActivateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp>::~shared_ptr((std::shared_ptr<proto::DungeonSlipRevivePointActivateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonSlipRevivePointActivateReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonSlipRevivePointActivateReq> *const)(v2 + 32));
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

// Line 63: range 00000000131062CE-00000000131065EA
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonInterruptChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonInterruptChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonInterruptChallengeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonInterruptChallengeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonInterruptChallengeReq const>(
         (const std::shared_ptr<const proto::DungeonInterruptChallengeReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      63);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonInterruptChallengeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonInterruptChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonInterruptChallengeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonInterruptChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonInterruptChallengeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonInterruptChallengeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonInterruptChallengeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonInterruptChallengeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonInterruptChallengeReq(this, v8, rsp_0);
    proto::DungeonInterruptChallengeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonInterruptChallengeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonInterruptChallengeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonInterruptChallengeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonInterruptChallengeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonInterruptChallengeRsp>::~shared_ptr((std::shared_ptr<proto::DungeonInterruptChallengeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonInterruptChallengeReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonInterruptChallengeReq> *const)(v2 + 32));
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

// Line 64: range 00000000131065EC-00000000131067CE
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::InteractDailyDungeonInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InteractDailyDungeonInfoNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InteractDailyDungeonInfoNotify const>(
         (const std::shared_ptr<const proto::InteractDailyDungeonInfoNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      64);
    common::milog::MiLogStream::operator()(&v9, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::InteractDailyDungeonInfoNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InteractDailyDungeonInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = DungeonHandler::onInteractDailyDungeonInfoNotify(this, v7);
  }
  std::shared_ptr<proto::InteractDailyDungeonInfoNotify const>::~shared_ptr((std::shared_ptr<const proto::InteractDailyDungeonInfoNotify> *const)(v2 + 32));
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

// Line 65: range 00000000131067D0-0000000013106AEC
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonRestartReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonRestartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonRestartRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonRestartReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonRestartReq const>(
         (const std::shared_ptr<const proto::DungeonRestartReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      65);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonRestartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonRestartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonRestartRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonRestartRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonRestartRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonRestartRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonRestartReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonRestartReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonRestartReq(this, v8, rsp_0);
    proto::DungeonRestartRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonRestartRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonRestartRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonRestartRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonRestartRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonRestartRsp>::~shared_ptr((std::shared_ptr<proto::DungeonRestartRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonRestartReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonRestartReq> *const)(v2 + 32));
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

// Line 66: range 0000000013106AEE-0000000013106E0A
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonRestartInviteReplyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonRestartInviteReplyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonRestartInviteReplyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:66 64 16 10 rsp_ptr:66";
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#19}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonRestartInviteReplyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonRestartInviteReplyReq const>(
         (const std::shared_ptr<const proto::DungeonRestartInviteReplyReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      66);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonRestartInviteReplyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonRestartInviteReplyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonRestartInviteReplyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonRestartInviteReplyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonRestartInviteReplyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonRestartInviteReplyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonRestartInviteReplyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonRestartInviteReplyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonRestartInviteReplyReq(this, v8, rsp_0);
    proto::DungeonRestartInviteReplyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonRestartInviteReplyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonRestartInviteReplyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonRestartInviteReplyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonRestartInviteReplyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonRestartInviteReplyRsp>::~shared_ptr((std::shared_ptr<proto::DungeonRestartInviteReplyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonRestartInviteReplyReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonRestartInviteReplyReq> *const)(v2 + 32));
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

// Line 67: range 0000000013106E0C-0000000013107128
int __cdecl DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator()(
        const DungeonHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonHandler *this; // r14
  std::__shared_ptr_access<const proto::DungeonCandidateTeamSetChangingAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DungeonCandidateTeamSetChangingAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:67 64 16 10 rsp_ptr:67";
  *(_QWORD *)(v2 + 16) = DungeonHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#20}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DungeonCandidateTeamSetChangingAvatarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DungeonCandidateTeamSetChangingAvatarReq const>(
         (const std::shared_ptr<const proto::DungeonCandidateTeamSetChangingAvatarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "operator()",
      67);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DungeonCandidateTeamSetChangingAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamSetChangingAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DungeonCandidateTeamSetChangingAvatarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DungeonCandidateTeamSetChangingAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonCandidateTeamSetChangingAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DungeonCandidateTeamSetChangingAvatarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DungeonCandidateTeamSetChangingAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DungeonCandidateTeamSetChangingAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DungeonHandler::onDungeonCandidateTeamSetChangingAvatarReq(this, v8, rsp_0);
    proto::DungeonCandidateTeamSetChangingAvatarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DungeonCandidateTeamSetChangingAvatarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DungeonCandidateTeamSetChangingAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::DungeonCandidateTeamSetChangingAvatarReq> *const)(v2 + 32));
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

// Line 74: range 000000001310859C-00000000131089A7
void __cdecl getPlayerEnterDungeonQuestInfo(
        Player *player,
        uint32_t scene_id,
        uint32_t point_id,
        std::map<unsigned int,unsigned int> *dungeon_time_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int *v12; // r8
  unsigned int StartTime; // [rsp+28h] [rbp-128h] BYREF
  unsigned int quest_id; // [rsp+2Ch] [rbp-124h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-108h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+50h] [rbp-100h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+58h] [rbp-F8h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v23; // [rsp+60h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *dungeon_id; // [rsp+68h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *quest_id_vec; // [rsp+70h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-D8h]
  char v27[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 12 quest_ptr:81 64 56 27 dungeon_quest_config_map:75";
  *(_QWORD *)(v4 + 16) = getPlayerEnterDungeonQuestInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 32));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  QuestExcelConfigMgr::findDungeonQuestConfigMap(
    (std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v4 + 64),
    &v7->design_config.txt_config_mgr.quest_config_mgr,
    scene_id,
    point_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 32));
  quest_comp = Player::getQuestComp(player);
  __for_range = (std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v4 + 64);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 64))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 64))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
    dungeon_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v23);
    quest_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v23);
    __for_range_0 = quest_id_vec;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(quest_id_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      quest_id = *v8;
      PlayerQuestComp::findQuest((const PlayerQuestComp *const)(v4 + 32), (uint32_t)quest_comp);
      if ( !std::operator==<Quest>((const std::shared_ptr<Quest> *)(v4 + 32), 0LL) )
      {
        v9 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( Quest::getState(v9) == QUEST_STATE_UNFINISHED )
        {
          v11 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          StartTime = Quest::getStartTime(v11);
          std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int>(
            dungeon_time_map,
            dungeon_id,
            &StartTime,
            dungeon_id,
            v12);
        }
      }
      std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v4 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 64));
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 98: range 00000000131089A8-0000000013108C9A
void __cdecl getLevelDungeonRecommendDungeonId(
        Player *player,
        const std::multimap<unsigned int,unsigned int> *level_dungeon_map,
        uint32_t *recommend_dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  uint32_t second; // ecx
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > >::pointer v9; // rdx
  uint32_t v10; // ecx
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 9 level:101 64 8 6 it:102 96 8 7 rit:111";
  *(_QWORD *)(v3 + 16) = getLevelDungeonRecommendDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( !std::multimap<unsigned int,unsigned int>::empty(level_dungeon_map) )
  {
    BasicComp = Player::getBasicComp(player);
    *(_DWORD *)(v3 + 48) = PlayerBasicComp::getLevel(BasicComp);
    *(std::multimap<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::multimap<unsigned int,unsigned int>::upper_bound(
                                                                               level_dungeon_map,
                                                                               (const std::multimap<unsigned int,unsigned int>::key_type *)(v3 + 48));
    *(std::multimap<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::multimap<unsigned int,unsigned int>::end(level_dungeon_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96)) )
    {
      *(std::multimap<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::multimap<unsigned int,unsigned int>::begin(level_dungeon_map);
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96)) )
      {
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--(
          (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64),
          0);
      }
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      second = v7->second;
      if ( *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)recommend_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_store4(recommend_dungeon_id);
      }
      *recommend_dungeon_id = second;
    }
    else
    {
      std::multimap<unsigned int,unsigned int>::rbegin((const std::multimap<unsigned int,unsigned int> *const)(v3 + 96));
      v9 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = v9->second;
      if ( *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)recommend_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_store4(recommend_dungeon_id);
      }
      *recommend_dungeon_id = v10;
    }
  }
  if ( v12 == (char *)v3 )
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
};

// Line 119: range 0000000013108C9C-000000001310940A
__int64 __fastcall DungeonHandler::checkDungeonExists(
        DungeonHandler *const this,
        const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *p_scene_ptr,
        int32_t point_id,
        int32_t dungeon_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t SceneId; // esi
  uint32_t v12; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned int *M_current; // r14
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::vector<unsigned int>::iterator v22; // rax
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  PlayerDungeonComp *DungeonComp; // rdi
  uint32_t v25; // r8d
  uint32_t v26; // esi
  const PlayerDungeonComp *p_id; // rdi
  uint32_t v28; // esi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+24h] [rbp-19Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self v38; // [rsp+28h] [rbp-198h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-190h] BYREF
  const data::SceneExcelConfig *config_ptr; // [rsp+38h] [rbp-188h]
  std::shared_ptr<Config> v41; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-170h] BYREF
  char v43[336]; // [rsp+70h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 12 point_id:118 48 4 14 dungeon_id:118 64 8 6 it:145 96 16 21 dungeon_entry_ptr:139 128 4"
                        "8 20 dungeon_time_map:131 208 48 18 dungeon_id_set:156";
  *(_QWORD *)(v4 + 16) = DungeonHandler::checkDungeonExists;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 32) = point_id;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)p_scene_ptr, 0LL) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
    config_ptr = Scene::getConfig(v8);
    if ( config_ptr )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
      v9 = *(_DWORD *)(v4 + 32);
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
      SceneId = Scene::getSceneId(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      getPlayerEnterDungeonQuestInfo(this->player_, SceneId, v9, (std::map<unsigned int,unsigned int> *)(v4 + 128));
      __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v4 + 128))._M_node;
      __x = *(_DWORD *)(v4 + 48);
      v38._M_node = std::map<unsigned int,unsigned int>::find(
                      (std::map<unsigned int,unsigned int> *const)(v4 + 128),
                      &__x)._M_node;
      if ( std::operator!=(&v38, &__y) )
      {
        v7 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v41);
        v12 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)
            + 93080;
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
        v14 = Scene::getSceneId(v13);
        JsonConfigMgr::findScenePoint<data::DungeonEntry>((const JsonConfigMgr *const)(v4 + 96), v12, v14);
        std::shared_ptr<Config>::~shared_ptr(&v41);
        if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "checkDungeonExists",
            142);
          v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v42,
                  (const char (*)[32])"findScenePoint fails, scene_id:");
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
          __x = Scene::getSceneId(v16);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &__x);
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", point_id:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v7 = 5;
        }
        else
        {
          v19 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          M_current = std::vector<unsigned int>::end(&v19->dungeon_ids)._M_current;
          v21 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v22._M_current = std::vector<unsigned int>::begin(&v21->dungeon_ids)._M_current;
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                                                                                                   v22,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                   (const int *)(v4 + 48));
          v23 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(&v23->dungeon_ids)._M_current;
          if ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                 (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 64),
                 (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__y) )
          {
            v7 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            DungeonComp = Player::getDungeonComp(this->player_);
            v25 = *(_DWORD *)(v4 + 48);
            v26 = *(_DWORD *)(v4 + 32);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
            {
              DungeonComp = (PlayerDungeonComp *)&config_ptr->id;
              __asan_report_load4();
            }
            if ( (unsigned __int8)PlayerDungeonComp::isDungeonInRandomList(DungeonComp, config_ptr->id, v26, v25) )
            {
              v7 = 0;
            }
            else
            {
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 208));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              p_id = Player::getDungeonComp(this->player_);
              v28 = *(_DWORD *)(v4 + 32);
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
              {
                p_id = (const PlayerDungeonComp *)&config_ptr->id;
                __asan_report_load4();
              }
              PlayerDungeonComp::getDungeonRosterSet(p_id, config_ptr->id, v28, (std::set<unsigned int> *)(v4 + 208));
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,int>(
                     (std::set<unsigned int> *)(v4 + 208),
                     (const int *)(v4 + 48)) )
              {
                v7 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/dungeon_handler.cpp",
                  "checkDungeonExists",
                  162);
                v29 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v42,
                        (const char (*)[23])off_24F36740);
                v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v4 + 48));
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v30,
                        (const char (*)[16])", for point_id:");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v4 + 32));
                common::milog::MiLogStream::~MiLogStream(&v42);
                v7 = 5;
              }
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 208));
            }
          }
        }
        std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 96));
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
    }
    else
    {
      v7 = 5;
    }
  }
  result = v7;
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
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
  return result;
};

// Line 167: range 000000001310940C-0000000013109435
uint32_t __cdecl DungeonHandler::getDungeonPlayerLimit(const DungeonHandler *const this, data::DungeonType type)
{
  uint32_t player_limit; // [rsp+18h] [rbp-4h]

  player_limit = 4;
  if ( type == DUNGEON_CHESS || type == DUNGEON_WIND_FIELD )
    return 2;
  return player_limit;
};

// Line 179: range 0000000013109436-000000001310A424
__int64 __fastcall DungeonHandler::getDungeonEntryPointInfo(
        const DungeonHandler *const this,
        Player *player,
        uint32_t scene_id,
        uint32_t point_id,
        DungeonHandler::DungeonEntryInfoList *dungeon_entry_list,
        uint32_t *recommend_dungeon_id)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  const unsigned int *v14; // r8
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rdx
  unsigned int *v16; // r8
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v26; // rdx
  unsigned int *v27; // r8
  common::milog::MiLogStream *v28; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v29; // rdx
  unsigned int *v30; // r8
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-360h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-358h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-350h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+48h] [rbp-348h] BYREF
  const DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+50h] [rbp-340h]
  PlayerDungeonComp *dungeon_cmp; // [rsp+58h] [rbp-338h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-330h]
  std::multimap<unsigned int,unsigned int> *__for_range_0; // [rsp+68h] [rbp-328h]
  std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-320h]
  std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-318h]
  std::set<unsigned int> *__for_range_3; // [rsp+80h] [rbp-310h]
  const data::DungeonExcelConfig *dungeon_config_ptr_1; // [rsp+88h] [rbp-308h]
  proto::DungeonEntryInfo *dungeon_entry_info_2; // [rsp+90h] [rbp-300h]
  const data::DungeonExcelConfig *dungeon_config_ptr_0; // [rsp+98h] [rbp-2F8h]
  proto::DungeonEntryInfo *dungeon_entry_info_1; // [rsp+A0h] [rbp-2F0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+A8h] [rbp-2E8h]
  proto::DungeonEntryInfo *dungeon_entry_info_0; // [rsp+B0h] [rbp-2E0h]
  std::pair<unsigned int const,unsigned int> *v55; // [rsp+B8h] [rbp-2D8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *accept_time_0; // [rsp+C0h] [rbp-2D0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *dungeon_id_0; // [rsp+C8h] [rbp-2C8h]
  proto::DungeonEntryInfo *dungeon_entry_info; // [rsp+D0h] [rbp-2C0h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+D8h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_id; // [rsp+E0h] [rbp-2B0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *accept_time; // [rsp+E8h] [rbp-2A8h]
  std::shared_ptr<Config> v62; // [rsp+F0h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v63; // [rsp+100h] [rbp-290h] BYREF
  common::milog::MiLogStream v64; // [rsp+120h] [rbp-270h] BYREF
  char v65[592]; // [rsp+140h] [rbp-250h] BYREF

  v6 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(544LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 4 14 dungeon_id:210 64 4 19 prev_dungeon_id:220 80 4 14 dungeon_id:253 96 4 12 scene_id:17"
                        "7 112 4 12 point_id:177 128 16 21 dungeon_entry_ptr:180 160 24 22 random_dungeon_vec:234 224 48 "
                        "20 dungeon_time_map:189 304 48 20 time_dungeon_map:195 384 48 21 level_dungeon_map:209 464 48 22"
                        " dungeon_roster_set:251";
  *(_QWORD *)(v6 + 16) = DungeonHandler::getDungeonEntryPointInfo;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -234556924;
  v8[536862724] = -219021312;
  v8[536862725] = -234881024;
  v8[536862726] = -218959118;
  v8[536862728] = -219021312;
  v8[536862729] = 62194;
  v8[536862731] = -218959118;
  v8[536862733] = -219021312;
  v8[536862734] = 62194;
  v8[536862736] = -202116109;
  *(_DWORD *)(v6 + 96) = scene_id;
  *(_DWORD *)(v6 + 112) = point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v62);
  v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
  JsonConfigMgr::findScenePoint<data::DungeonEntry>(
    (const JsonConfigMgr *const)(v6 + 128),
    v9 + 93080,
    *(_DWORD *)(v6 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v62);
  if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v6 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "getDungeonEntryPointInfo",
      183);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v64,
            (const char (*)[32])"findScenePoint fails, scene_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 96));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 112));
    common::milog::MiLogStream::~MiLogStream(&v64);
    v13 = 5;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v62);
    dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62)->design_config.txt_config_mgr.dungeon_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v62);
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 224));
    dungeon_cmp = Player::getDungeonComp(player);
    if ( *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recommend_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(recommend_dungeon_id);
    }
    *recommend_dungeon_id = 0;
    getPlayerEnterDungeonQuestInfo(
      player,
      *(_DWORD *)(v6 + 96),
      *(_DWORD *)(v6 + 112),
      (std::map<unsigned int,unsigned int> *)(v6 + 224));
    std::multimap<unsigned int,unsigned int>::multimap((std::multimap<unsigned int,unsigned int> *const)(v6 + 304));
    __for_range = (std::map<unsigned int,unsigned int> *)(v6 + 224);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v6 + 224))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v6 + 224))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      dungeon_id = std::get<0ul,unsigned int const,unsigned int>(__in);
      accept_time = std::get<1ul,unsigned int const,unsigned int>(__in);
      std::multimap<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
        (std::multimap<unsigned int,unsigned int> *const)(v6 + 304),
        accept_time,
        dungeon_id,
        accept_time,
        v14);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::multimap<unsigned int,unsigned int> *)(v6 + 304);
    __for_begin._M_node = std::multimap<unsigned int,unsigned int>::begin((std::multimap<unsigned int,unsigned int> *const)(v6 + 304))._M_node;
    __for_end._M_node = std::multimap<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v55 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      accept_time_0 = std::get<0ul,unsigned int const,unsigned int>(v55);
      dungeon_id_0 = std::get<1ul,unsigned int const,unsigned int>(v55);
      dungeon_entry_info = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::Add(dungeon_entry_list);
      if ( *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerDungeonComp::fillDungeonEntryInfo(dungeon_cmp, *dungeon_id_0, dungeon_entry_info);
      if ( *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)recommend_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !*recommend_dungeon_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dungeon_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *recommend_dungeon_id = *dungeon_id_0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::multimap<unsigned int,unsigned int>::multimap((std::multimap<unsigned int,unsigned int> *const)(v6 + 384));
    __for_range_1 = &std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128))->dungeon_ids;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(__for_range_1)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v6 + 48) = *v15;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v6 + 224))._M_node;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::find(
                              (std::map<unsigned int,unsigned int> *const)(v6 + 224),
                              (const std::map<unsigned int,unsigned int>::key_type *)(v6 + 48))._M_node;
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               dungeon_config_mgr,
                               *(_DWORD *)(v6 + 48));
        if ( dungeon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->prev_dungeon_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v6 + 64) = dungeon_config_ptr->prev_dungeon_id;
          if ( *(_DWORD *)(v6 + 64) && !PlayerDungeonComp::isDungeonPassed(dungeon_cmp, *(_DWORD *)(v6 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/dungeon_handler.cpp",
              "getDungeonEntryPointInfo",
              223);
            v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v64,
                    (const char (*)[17])"prev_dungeon_id:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v6 + 64));
            v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v20,
                    (const char (*)[30])" not passed, skip dungeon_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v6 + 48));
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" point_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v6 + 112));
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
            *(_DWORD *)(v6 + 80) = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v6 + 80));
            common::milog::MiLogStream::~MiLogStream(&v64);
          }
          else
          {
            std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              (std::multimap<unsigned int,unsigned int> *const)(v6 + 384),
              &dungeon_config_ptr->limit_level,
              (unsigned int *)(v6 + 48),
              &dungeon_config_ptr->limit_level,
              v16);
            dungeon_entry_info_0 = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::Add(dungeon_entry_list);
            PlayerDungeonComp::fillDungeonEntryInfo(dungeon_cmp, *(_DWORD *)(v6 + 48), dungeon_entry_info_0);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "getDungeonEntryPointInfo",
            217);
          v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v63,
                  (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 48));
          common::milog::MiLogStream::~MiLogStream(&v63);
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 160));
    PlayerDungeonComp::getRandomDungeonList(
      dungeon_cmp,
      *(_DWORD *)(v6 + 96),
      *(_DWORD *)(v6 + 112),
      (std::vector<unsigned int> *)(v6 + 160));
    __for_range_2 = (std::vector<unsigned int> *)(v6 + 160);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v6 + 160))._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_2)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v6 + 80) = *v26;
      dungeon_config_ptr_0 = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               dungeon_config_mgr,
                               *(_DWORD *)(v6 + 80));
      if ( dungeon_config_ptr_0 )
      {
        std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
          (std::multimap<unsigned int,unsigned int> *const)(v6 + 384),
          &dungeon_config_ptr_0->limit_level,
          (unsigned int *)(v6 + 80),
          &dungeon_config_ptr_0->limit_level,
          v27);
        dungeon_entry_info_1 = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::Add(dungeon_entry_list);
        PlayerDungeonComp::fillDungeonEntryInfo(dungeon_cmp, *(_DWORD *)(v6 + 80), dungeon_entry_info_1);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "getDungeonEntryPointInfo",
          241);
        v28 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v64,
                (const char (*)[45])"findDungeonExcelConfig fails, random_dungon:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v6 + 464));
    PlayerDungeonComp::getDungeonRosterSet(
      dungeon_cmp,
      *(_DWORD *)(v6 + 96),
      *(_DWORD *)(v6 + 112),
      (std::set<unsigned int> *)(v6 + 464));
    __for_range_3 = (std::set<unsigned int> *)(v6 + 464);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v6 + 464))._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::end(__for_range_3)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v29 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v6 + 80) = *v29;
      dungeon_config_ptr_1 = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               dungeon_config_mgr,
                               *(_DWORD *)(v6 + 80));
      if ( dungeon_config_ptr_1 )
      {
        std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
          (std::multimap<unsigned int,unsigned int> *const)(v6 + 384),
          &dungeon_config_ptr_1->limit_level,
          (unsigned int *)(v6 + 80),
          &dungeon_config_ptr_1->limit_level,
          v30);
        dungeon_entry_info_2 = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::Add(dungeon_entry_list);
        PlayerDungeonComp::fillDungeonEntryInfo(dungeon_cmp, *(_DWORD *)(v6 + 80), dungeon_entry_info_2);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "getDungeonEntryPointInfo",
          258);
        v31 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v64,
                (const char (*)[39])"findDungeonExcelConfig fails, dungeon:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recommend_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recommend_dungeon_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !*recommend_dungeon_id
      && !std::multimap<unsigned int,unsigned int>::empty((const std::multimap<unsigned int,unsigned int> *const)(v6 + 384)) )
    {
      getLevelDungeonRecommendDungeonId(
        player,
        (const std::multimap<unsigned int,unsigned int> *)(v6 + 384),
        recommend_dungeon_id);
    }
    v13 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v6 + 464));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 160));
    std::multimap<unsigned int,unsigned int>::~multimap((std::multimap<unsigned int,unsigned int> *const)(v6 + 384));
    std::multimap<unsigned int,unsigned int>::~multimap((std::multimap<unsigned int,unsigned int> *const)(v6 + 304));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 224));
  }
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v6 + 128));
  result = v13;
  if ( v65 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 275: range 000000001310A426-000000001310B053
int32_t __cdecl DungeonHandler::onDungeonEntryInfoReq(
        DungeonHandler *const this,
        const proto::DungeonEntryInfoReq *req,
        proto::DungeonEntryInfoRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // r14
  uint32_t v12; // r15d
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  _BOOL4 v16; // r15d
  int v17; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo> *v19; // r15
  Player *v20; // rsi
  google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo> *v21; // r14
  Player *v22; // rsi
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  uint32_t scene_id; // [rsp+28h] [rbp-168h]
  uint32_t point_id; // [rsp+2Ch] [rbp-164h]
  int32_t ret; // [rsp+30h] [rbp-160h]
  uint32_t scene_id_0; // [rsp+34h] [rbp-15Ch]
  uint32_t point_id_0; // [rsp+38h] [rbp-158h]
  int32_t ret_0; // [rsp+3Ch] [rbp-154h]
  google::protobuf::RepeatedPtrField<proto::Uint32Pair>::const_iterator __for_begin; // [rsp+40h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32Pair>::const_iterator __for_end; // [rsp+48h] [rbp-148h] BYREF
  uint64_t now_ms; // [rsp+50h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::Uint32Pair> *__for_range; // [rsp+58h] [rbp-138h]
  const proto::Uint32Pair *uint32_pair; // [rsp+60h] [rbp-130h]
  proto::DungeonEntryPointInfo *dungeon_entry_point_info; // [rsp+68h] [rbp-128h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v40; // [rsp+80h] [rbp-110h] BYREF
  char v41[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 24 recommend_dungeon_id:361 64 16 20 player_world_ptr:292 96 16 13 scene_ptr:315 128 16 1"
                        "3 world_ptr:294 160 16 20 owner_player_ptr:347";
  *(_QWORD *)(v4 + 16) = DungeonHandler::onDungeonEntryInfoReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  now_ms = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( now_ms >= this->last_get_dungeon_entry_info_req_time_ms_ + 1000 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->last_get_dungeon_entry_info_req_time_ms_);
    this->last_get_dungeon_entry_info_req_time_ms_ = now_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_get_dungeon_entry_info_req_count_);
    }
    this->last_get_dungeon_entry_info_req_count_ = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( ++this->last_get_dungeon_entry_info_req_count_ > 2 )
    {
      v3 = 3;
      goto LABEL_61;
    }
  }
  std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<World>((const std::shared_ptr<World> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonEntryInfoReq",
      297);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v40,
           (const char (*)[30])"getCurWorld is nullptr, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v40);
    v3 = -1;
    v8 = 0;
  }
  else
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 16LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9) == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 160));
      std::shared_ptr<World>::operator=<PlayerWorld>(
        (std::shared_ptr<World> *const)(v4 + 128),
        (std::shared_ptr<PlayerWorld> *)(v4 + 160));
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 160));
    }
    std::dynamic_pointer_cast<PlayerWorld,World>((const std::shared_ptr<World> *)(v4 + 160));
    std::shared_ptr<PlayerWorld>::operator=(
      (std::shared_ptr<PlayerWorld> *const)(v4 + 64),
      (std::shared_ptr<PlayerWorld> *)(v4 + 160));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 160));
    v8 = 1;
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 128));
  if ( v8 == 1 )
  {
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonEntryInfoReq",
        309);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v40,
              (const char (*)[35])"getMyPlayerWorld is nullptr, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v3 = -1;
    }
    else
    {
      if ( !proto::DungeonEntryInfoReq::point_id(req) )
        goto LABEL_51;
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_QWORD *)(v4 + 104) = 0LL;
      if ( proto::DungeonEntryInfoReq::scene_id(req) )
      {
        v12 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        proto::DungeonEntryInfoReq::scene_id(req);
        World::findScene((World *const)(v4 + 128), v12);
        std::shared_ptr<Scene>::operator=(
          (std::shared_ptr<Scene> *const)(v4 + 96),
          (std::shared_ptr<Scene> *)(v4 + 128));
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      }
      else
      {
        std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        PlayerWorld::getMainWorldScene((PlayerWorld *const)&__r);
        std::shared_ptr<Scene>::operator=<PlayerWorldScene>((std::shared_ptr<Scene> *const)(v4 + 96), &__r);
        std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
      }
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonEntryInfoReq",
          326);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v40,
                (const char (*)[28])"scene is nullptr, scene_id:");
        val = proto::DungeonEntryInfoReq::scene_id(req);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v40);
        v3 = -1;
        v16 = 0;
      }
      else
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        Scene::getOwnPlayer((const Scene *const)(v4 + 160));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonEntryInfoReq",
            332);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v40,
            (const char (*)[21])"owner player is null");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v3 = -1;
          v17 = 0;
        }
        else
        {
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          scene_id = Scene::getSceneId(v18);
          point_id = proto::DungeonEntryInfoReq::point_id(req);
          proto::DungeonEntryInfoRsp::set_point_id(rsp_0, point_id);
          *(_DWORD *)(v4 + 48) = 0;
          v19 = proto::DungeonEntryInfoRsp::mutable_dungeon_entry_list(rsp_0);
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          ret = DungeonHandler::getDungeonEntryPointInfo(this, v20, scene_id, point_id, v19, (uint32_t *)(v4 + 48));
          if ( ret )
          {
            v3 = ret;
            v17 = 0;
          }
          else
          {
            proto::DungeonEntryInfoRsp::set_recommend_dungeon_id(rsp_0, *(_DWORD *)(v4 + 48));
            v17 = 1;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
        v16 = v17 == 1;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
      if ( v16 )
      {
LABEL_51:
        std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v4 + 160));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonEntryInfoReq",
            350);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v40,
            (const char (*)[21])"owner player is null");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v3 = -1;
        }
        else
        {
          __for_range = proto::DungeonEntryInfoReq::scene_point_id_list(req);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32Pair>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32Pair>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            uint32_pair = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator*(&__for_begin);
            scene_id_0 = proto::Uint32Pair::key(uint32_pair);
            point_id_0 = proto::Uint32Pair::value(uint32_pair);
            dungeon_entry_point_info = proto::DungeonEntryInfoRsp::add_dungeon_entry_point_list(rsp_0);
            proto::DungeonEntryPointInfo::set_scene_id(dungeon_entry_point_info, scene_id_0);
            proto::DungeonEntryPointInfo::set_point_id(dungeon_entry_point_info, point_id_0);
            *(_DWORD *)(v4 + 48) = 0;
            v21 = proto::DungeonEntryPointInfo::mutable_dungeon_entry_list(dungeon_entry_point_info);
            v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            ret_0 = DungeonHandler::getDungeonEntryPointInfo(
                      this,
                      v22,
                      scene_id_0,
                      point_id_0,
                      v21,
                      (uint32_t *)(v4 + 48));
            if ( ret_0 )
            {
              v3 = ret_0;
              goto LABEL_59;
            }
            proto::DungeonEntryPointInfo::set_recommend_dungeon_id(dungeon_entry_point_info, *(_DWORD *)(v4 + 48));
            google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator++(&__for_begin);
          }
          v3 = 0;
        }
LABEL_59:
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
      }
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
LABEL_61:
  result = v3;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 374: range 000000001310B054-000000001310B9DB
int32_t __cdecl DungeonHandler::onPlayerEnterDungeonReq(
        DungeonHandler *const this,
        const proto::PlayerEnterDungeonReq *req,
        proto::PlayerEnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isBanGeneralEnterDungeon; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r15d
  uint32_t v16; // r14d
  uint32_t v17; // eax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int32 SceneId; // eax
  PlayerDungeonComp *v21; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  __int32 v23; // eax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  int32_t ret; // [rsp+28h] [rbp-198h]
  int32_t reta; // [rsp+28h] [rbp-198h]
  int retb; // [rsp+28h] [rbp-198h]
  uint32_t point_id; // [rsp+2Ch] [rbp-194h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+30h] [rbp-190h]
  const proto::DungeonEnterPosInfo *enter_pos_info; // [rsp+38h] [rbp-188h]
  std::shared_ptr<ManualTransportEvent> __r; // [rsp+40h] [rbp-180h] BYREF
  std::shared_ptr<Scene> v34; // [rsp+50h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > v35; // [rsp+60h] [rbp-160h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > v36; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+A0h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-100h] BYREF
  char v39[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 dungeon_id:383 64 16 13 scene_ptr:375 96 28 21 enter_dungeon_opt:408";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onPlayerEnterDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = 0x4000000;
  v5[536862724] = -202116109;
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
      "./src/handler/dungeon_handler.cpp",
      "onPlayerEnterDungeonReq",
      378);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v37,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v7 = 512;
  }
  else
  {
    point_id = proto::PlayerEnterDungeonReq::point_id(req);
    *(_DWORD *)(v3 + 48) = proto::PlayerEnterDungeonReq::dungeon_id(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v8->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
    if ( !dungeon_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onPlayerEnterDungeonReq",
        388);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v37,
             (const char (*)[30])"findDungeonExcelConfig fails:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v7 = -1;
      goto LABEL_28;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    isBanGeneralEnterDungeon = DungeonExcelConfigMgr::isBanGeneralEnterDungeon(
                                 &v10->design_config.txt_config_mgr.dungeon_config_mgr,
                                 *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
    if ( isBanGeneralEnterDungeon )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onPlayerEnterDungeonReq",
        394);
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(&v37, (const char (*)[46])off_24F36E80);
      v13 = common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(
              v12,
              &dungeon_config_ptr->type);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v7 = -1;
      goto LABEL_28;
    }
    v15 = *(_DWORD *)(v3 + 48);
    std::shared_ptr<Scene>::shared_ptr(&v34, (const std::shared_ptr<Scene> *)(v3 + 64));
    ret = DungeonHandler::checkDungeonExists(
            this,
            (const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *)&v34,
            point_id,
            v15);
    std::shared_ptr<Scene>::~shared_ptr(&v34);
    if ( ret )
    {
      v7 = ret;
      goto LABEL_28;
    }
    enter_pos_info = proto::PlayerEnterDungeonReq::enter_pos_info(req);
    if ( proto::DungeonEnterPosInfo::quest_id(enter_pos_info) )
    {
      EnterDungeonOption::EnterDungeonOption((EnterDungeonOption *const)(v3 + 96));
      *(_BYTE *)(v3 + 96) = 0;
      v16 = proto::DungeonEnterPosInfo::point_id(enter_pos_info);
      v17 = proto::DungeonEnterPosInfo::quest_id(enter_pos_info);
      reta = DungeonHandler::getEnterPosFromQuestConfig(
               this,
               *(_DWORD *)(v3 + 48),
               v17,
               v16,
               (Vector3 *)(v3 + 100),
               (Vector3 *)(v3 + 112));
      if ( reta )
      {
        v7 = reta;
        goto LABEL_28;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      DungeonComp = Player::getDungeonComp(this->player_);
      memset(&level_config_id_map, 0, sizeof(level_config_id_map));
      std::map<unsigned int,unsigned int>::map(&level_config_id_map);
      v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SceneId = Scene::getSceneId(v19);
      PlayerDungeonComp::enterDungeon(
        &v35,
        DungeonComp,
        *(_DWORD *)(v3 + 48),
        SceneId,
        point_id,
        &level_config_id_map,
        *(EnterDungeonOption *)(v3 + 96));
      retb = v35.first;
      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&v35);
      std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = Player::getDungeonComp(this->player_);
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_DWORD *)(v3 + 120) = 0;
      EnterDungeonOption::EnterDungeonOption((EnterDungeonOption *const)(v3 + 96));
      memset(&level_config_id_map, 0, sizeof(level_config_id_map));
      std::map<unsigned int,unsigned int>::map(&level_config_id_map);
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v23 = Scene::getSceneId(v22);
      PlayerDungeonComp::enterDungeon(
        &v36,
        v21,
        *(_DWORD *)(v3 + 48),
        v23,
        point_id,
        &level_config_id_map,
        *(EnterDungeonOption *)(v3 + 96));
      retb = v36.first;
      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&v36);
      std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
    }
    proto::PlayerEnterDungeonRsp::set_point_id(rsp_0, point_id);
    proto::PlayerEnterDungeonRsp::set_dungeon_id(rsp_0, *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    common::tools::perf::make_shared<ManualTransportEvent>();
    std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>((std::shared_ptr<BaseEvent> *const)&v34, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v34);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v34);
    std::shared_ptr<ManualTransportEvent>::~shared_ptr(&__r);
    v7 = retb;
  }
LABEL_28:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v39 == (char *)v3 )
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

// Line 430: range 000000001310B9DC-000000001310C37B
int32_t __cdecl DungeonHandler::getEnterPosFromQuestConfig(
        const DungeonHandler *const this,
        uint32_t dungeon_id,
        uint32_t quest_id,
        uint32_t point_id,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  PlayerQuestComp *QuestComp; // rax
  PlayerQuestComp *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  Player *v13; // r14
  int32_t v14; // r14d
  uint32_t v15; // eax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rax
  Player *player; // r14
  int32_t result; // eax
  uint32_t parent_quest_id; // [rsp+3Ch] [rbp-C4h]
  const ParentQuestScriptConfig *parent_quest_config_ptr; // [rsp+40h] [rbp-C0h]
  const QuestEnterDungeonPointScriptConfig *point_config_ptr; // [rsp+48h] [rbp-B8h]
  std::string server_log; // [rsp+50h] [rbp-B0h] BYREF
  char v42[144]; // [rsp+70h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 20 parent_quest_ptr:440 64 16 7 oss:460";
  *(_QWORD *)(v6 + 16) = DungeonHandler::getEnterPosFromQuestConfig;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  parent_quest_id = PlayerQuestComp::findParentQuestId(QuestComp, quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Player::getQuestComp(this->player_);
  parent_quest_config_ptr = PlayerQuestComp::findParentQuestScriptConfig(v10, parent_quest_id);
  if ( parent_quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = (unsigned int)Player::getQuestComp(this->player_);
    PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v6 + 32), v15);
    if ( std::operator==<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v6 + 32), 0LL)
      || (v16 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32)),
          ParentQuest::getParentQuestState(v16)) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
      v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64),
              aQuest_14);
      v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, parent_quest_id);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, &byte_24F370A0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      point_config_ptr = ParentQuestScriptConfig::findEnterDungeonPointConfig(
                           parent_quest_config_ptr,
                           quest_id,
                           point_id);
      if ( point_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->dungeon_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( dungeon_id == point_config_ptr->dungeon_id )
        {
          if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(pos, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config_ptr + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config_ptr->pos, 12LL);
          }
          *(_QWORD *)&pos->x = *(_QWORD *)&point_config_ptr->pos.x;
          pos->z = point_config_ptr->pos.z;
          if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(rot, 12LL);
          }
          if ( (((unsigned __int8)point_config_ptr + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->rot >> 3)
                                                                          + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_config_ptr->rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config_ptr + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config_ptr->rot, 12LL);
          }
          *(_QWORD *)&rot->x = *(_QWORD *)&point_config_ptr->rot.x;
          rot->z = point_config_ptr->rot.z;
          v14 = 0;
          goto LABEL_43;
        }
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64),
                aQuest_16);
        v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, dungeon_id);
        v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, &byte_24F37260);
        if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->dungeon_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v26,
                point_config_ptr->dungeon_id);
        v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, ",quest_id:");
        v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, quest_id);
        v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, ",point_id:");
        v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, point_id);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, asc_24F36FE0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
        v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64),
                aQuest_15);
        v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, quest_id);
        v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, ",point_id:");
        v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, point_id);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, asc_24F36FE0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
    }
    player = this->player_;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      &server_log,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
    Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, &server_log);
    std::string::~string(&server_log);
    v14 = -1;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
LABEL_43:
    std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v6 + 32));
    goto LABEL_44;
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64),
          aQuest_13);
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, parent_quest_id);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, asc_24F36FE0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = this->player_;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &server_log,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
  Player::notifyGMServerLog(v13, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, &server_log);
  std::string::~string(&server_log);
  v14 = -1;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 64));
LABEL_44:
  result = v14;
  if ( v42 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 475: range 000000001310C37C-000000001310C9BB
int32_t __cdecl DungeonHandler::handlePlayerQuitDungeon(
        DungeonHandler *const this,
        proto_log::DungeonQuitReason quit_dungeon_reason,
        uint32_t dungeon_result,
        bool is_quit_immediately)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t v7; // r14d
  char v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // r15d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char v12; // r15
  char v13; // r14
  char v14; // al
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerDungeonComp *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  int32_t result; // eax
  bool is_temp_leave_tower; // [rsp+2Fh] [rbp-B1h]
  unsigned int val; // [rsp+30h] [rbp-B0h] BYREF
  unsigned int DungeonId; // [rsp+34h] [rbp-ACh] BYREF
  int32_t ret_0; // [rsp+38h] [rbp-A8h]
  int32_t ret; // [rsp+3Ch] [rbp-A4h]
  std::shared_ptr<Player> __a; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-90h] BYREF
  char v32[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 21 dungeon_scene_ptr:476";
  *(_QWORD *)(v4 + 16) = DungeonHandler::handlePlayerQuitDungeon;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerQuitDungeon",
      479);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v31,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    v8 = 0;
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( Scene::getPlayerCount((const Scene *const)v9) != 1 )
      goto LABEL_14;
    v10 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    Scene::findPlayer((const Scene *const)&__a, v10);
    v8 = 1;
    if ( std::operator!=<Player>(&__a, 0LL)
      && (v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
          DungeonScene::getDungeonResult(v11) == DUNGEON_RESULT_NONE) )
    {
      v12 = 1;
    }
    else
    {
LABEL_14:
      v12 = 0;
    }
    if ( v8 )
      std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( !v12 )
      goto LABEL_47;
    v13 = 0;
    if ( dungeon_result != 3 )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getTowerComp(this->player_);
    PlayerTowerComp::getCurDungeonScene((const PlayerTowerComp *const)&__a);
    v13 = 1;
    if ( std::operator==<DungeonScene,DungeonScene>(
           (const std::shared_ptr<DungeonScene> *)&__a,
           (const std::shared_ptr<DungeonScene> *)(v4 + 32)) )
    {
      v14 = 1;
    }
    else
    {
LABEL_23:
      v14 = 0;
    }
    is_temp_leave_tower = v14;
    if ( v13 )
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DungeonComp = Player::getDungeonComp(this->player_);
    ret_0 = PlayerDungeonComp::settleCurDungeon(DungeonComp, quit_dungeon_reason, (DungeonResult)dungeon_result);
    if ( ret_0 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "handlePlayerQuitDungeon",
        491);
      v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v31,
              (const char (*)[30])"settleCurDungeon fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" dungeon_id: ");
      v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      DungeonId = DungeonScene::getDungeonId(v19);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &DungeonId);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    if ( !is_temp_leave_tower && !is_quit_immediately )
    {
      v7 = ret_0;
    }
    else
    {
LABEL_47:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = Player::getDungeonComp(this->player_);
      ret = PlayerDungeonComp::quitCurDungeon(v20, quit_dungeon_reason);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "handlePlayerQuitDungeon",
          505);
        v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v31,
                (const char (*)[22])"quitCurDungeon fails:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v21, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      v7 = ret;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 32));
  result = v7;
  if ( v32 == (char *)v4 )
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

// Line 511: range 000000001310C9BC-000000001310CAA6
int32_t __cdecl DungeonHandler::onPlayerQuitDungeonReq(
        DungeonHandler *const this,
        const proto::PlayerQuitDungeonReq *req,
        proto::PlayerQuitDungeonRsp *rsp_0)
{
  PlayerEventComp *EventComp; // rbx
  bool is_quit_immediately; // dl
  std::shared_ptr<ManualTransportEvent> __r; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<ManualTransportEvent>();
  std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(&p_event_ptr, &__r);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<ManualTransportEvent>::~shared_ptr(&__r);
  is_quit_immediately = proto::PlayerQuitDungeonReq::is_quit_immediately(req);
  return DungeonHandler::handlePlayerQuitDungeon(this, DUNGEON_QUIT_REASON_PLAYER_EXIT, 3u, is_quit_immediately);
};

// Line 517: range 000000001310CAA8-000000001310D1AE
int32_t __cdecl DungeonHandler::onDungeonWayPointActivateReq(
        DungeonHandler *const this,
        const proto::DungeonWayPointActivateReq *req,
        proto::DungeonWayPointActivateRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  uint32_t v7; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const Vector3 *Position; // rax
  DungeonScene *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-138h] BYREF
  uint32_t check_distance; // [rsp+2Ch] [rbp-134h]
  int32_t ret; // [rsp+30h] [rbp-130h]
  Vector3 pos2; // [rsp+34h] [rbp-12Ch] BYREF
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-110h] BYREF
  char v28[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 point_id:530 64 16 13 scene_ptr:518 96 16 21 dungeon_scene_ptr:524 128 16 17 way_point"
                        "_ptr:531 160 16 14 avatar_ptr:537";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonWayPointActivateReq;
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
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonWayPointActivateReq",
      521);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 96));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonWayPointActivateReq",
        527);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v27,
        (const char (*)[26])"dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = proto::DungeonWayPointActivateReq::way_point_id(req);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)
         + 93080;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SceneId = Scene::getSceneId(v8);
      JsonConfigMgr::findScenePoint<data::DungeonWayPoint>((const JsonConfigMgr *const)(v3 + 128), v7, SceneId);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( std::operator==<data::DungeonWayPoint>((const std::shared_ptr<data::DungeonWayPoint> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonWayPointActivateReq",
          534);
        v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v27,
                (const char (*)[32])"findScenePoint fails, scene_id:");
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Scene::getSceneId(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getCurAvatar((Player *const)(v3 + 160));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonWayPointActivateReq",
            540);
          v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v27,
                  (const char (*)[25])"getCurAvatar fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = 104;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v15->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          v16 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          Vector3::Vector3(&pos2, &v16->pos);
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          Position = Entity::getPosition((const Entity *const)v17);
          if ( getDistance(Position, &pos2) <= (float)(int)check_distance )
          {
            v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            ret = DungeonScene::activateWayPoint(v19, *(_DWORD *)(v3 + 48), 0);
            proto::DungeonWayPointActivateRsp::set_way_point_id(rsp_0, *(_DWORD *)(v3 + 48));
            v6 = ret;
          }
          else
          {
            v6 = 520;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
      }
      std::shared_ptr<data::DungeonWayPoint>::~shared_ptr((std::shared_ptr<data::DungeonWayPoint> *const)(v3 + 128));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v6;
  if ( v28 == (char *)v3 )
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

// Line 555: range 000000001310D1E6-000000001310DAEC
int32_t __cdecl DungeonHandler::handlePlayerReplayDungeon(DungeonHandler *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  int32_t v4; // r13d
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v8; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  DungeonScene *v16; // r13
  uint32_t Uid; // eax
  DungeonHandler::handlePlayerReplayDungeon::<lambda(Player&)> v18; // si
  common::milog::MiLogStream *v19; // r13
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  DungeonScene *v23; // rax
  DungeonScene *v24; // rax
  Scene *v26; // r13
  DungeonScene *v27; // rax
  int32_t result; // eax
  data::DungeonType val; // [rsp+20h] [rbp-140h] BYREF
  unsigned int OwnerUid; // [rsp+24h] [rbp-13Ch] BYREF
  int32_t foreach_ret; // [rsp+28h] [rbp-138h]
  int32_t ret; // [rsp+2Ch] [rbp-134h]
  PlayerDungeonComp *dungeon_comp; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *retcode; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *_; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Config> v37; // [rsp+50h] [rbp-110h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+60h] [rbp-100h] BYREF
  EnterDungeonOption v39; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-A0h] BYREF
  char v42[112]; // [rsp+F0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:557";
  *(_QWORD *)(v1 + 16) = DungeonHandler::handlePlayerReplayDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReplayDungeon",
      560);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v40,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v4 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.dungeon_config_mgr;
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonId = DungeonScene::getDungeonId(v6);
    LOBYTE(p_dungeon_config_mgr) = DungeonExcelConfigMgr::isSpecialReplayDungeon(p_dungeon_config_mgr, DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( (_BYTE)p_dungeon_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "handlePlayerReplayDungeon",
        567);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v40,
             (const char (*)[43])"dungeon_scene cannot replay, dungeon_type:");
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      val = DungeonScene::getDungeonType(v9);
      v10 = common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(v8, &val);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" dungeon_id:");
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      OwnerUid = DungeonScene::getDungeonId(v12);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v4 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( Scene::getScriptConfig((const Scene *const)v13) )
      {
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v18.gap0[0] = Uid;
        if ( !DungeonScene::isLeader(v16, Uid) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/dungeon_handler.cpp",
            "handlePlayerReplayDungeon",
            579);
          v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v40,
                  (const char (*)[36])"only leader can replay player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)&val);
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" owner_uid: ");
          v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          OwnerUid = Scene::getOwnerUid((const Scene *const)v22);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &OwnerUid);
          common::milog::MiLogStream::~MiLogStream(&v40);
          v4 = -1;
        }
        else
        {
          v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( DungeonScene::getLeftReviveCount(v23)
            && (v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
                DungeonScene::isMpDungeonMode(v24)) )
          {
            v4 = 1115;
          }
          else
          {
            v26 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
            std::function<ForeachPolicy ()(Player &)>::function<DungeonHandler::handlePlayerReplayDungeon(void)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v40,
              v18);
            foreach_ret = Scene::foreachPlayer(v26, (std::function<ForeachPolicy(Player&)> *)&v40);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v40);
            if ( foreach_ret )
            {
              v4 = 1114;
            }
            else
            {
              v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
              DungeonScene::recordSettleSnapshot(v27);
              ret = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/dungeon_handler.cpp",
                  "handlePlayerReplayDungeon",
                  607);
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v40,
                  (const char (*)[27])"checkRestartDungeon failed");
                common::milog::MiLogStream::~MiLogStream(&v40);
                v4 = ret;
              }
              else
              {
                memset(&v39, 0, sizeof(v39));
                EnterDungeonOption::EnterDungeonOption(&v39);
                memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v39);
                std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                _ = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( *retcode )
                {
                  common::milog::MiLogStream::create(
                    &v40,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/dungeon_handler.cpp",
                    "handlePlayerReplayDungeon",
                    613);
                  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v40,
                    (const char (*)[22])"restartDungeon failed");
                  common::milog::MiLogStream::~MiLogStream(&v40);
                  if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v4 = *retcode;
                }
                else
                {
                  v4 = 0;
                }
                std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              }
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "handlePlayerReplayDungeon",
          574);
        v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v40,
                (const char (*)[22])"getScriptConfig fails");
        v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v14, v15);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v4 = -1;
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v4;
  if ( v42 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 587: range 000000001310D1B0-000000001310D1E5
ForeachPolicy __cdecl DungeonHandler::handlePlayerReplayDungeon(void)::{lambda(Player &)#1}::operator()(
        const DungeonHandler::handlePlayerReplayDungeon::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerAvatarComp *AvatarComp; // rax

  AvatarComp = Player::getAvatarComp(player);
  return !PlayerAvatarComp::isAllAvatarDead(AvatarComp);
};

// Line 620: range 000000001310DAEE-000000001310E1F8
int32_t __cdecl DungeonHandler::handlePlayerReviveInDungeon(DungeonHandler *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  DungeonScene *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v13; // r14
  DungeonScene *v14; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  PlayerDungeonComp *dungeon_comp; // [rsp+20h] [rbp-D0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 cur_dungeon_id:628 64 16 21 dungeon_scene_ptr:622";
  *(_QWORD *)(v1 + 16) = DungeonHandler::handlePlayerReviveInDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      625);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v22,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = -1;
    goto LABEL_33;
  }
  *(_DWORD *)(v1 + 48) = PlayerDungeonComp::getCurDungeonId(dungeon_comp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v5->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      632);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v22,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = -1;
    goto LABEL_33;
  }
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( DungeonScene::getDungeonResult(v7) == DUNGEON_RESULT_NONE )
    goto LABEL_15;
  if ( *(char *)(((unsigned __int64)&dungeon_config_ptr->is_ban_die_option_revive_after_settle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&dungeon_config_ptr->is_ban_die_option_revive_after_settle);
  if ( dungeon_config_ptr->is_ban_die_option_revive_after_settle )
    v8 = 1;
  else
LABEL_15:
    v8 = 0;
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      638);
    v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v22,
           (const char (*)[61])"dungeon settled and not allow dieOption revive, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = 1126;
    goto LABEL_33;
  }
  v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( !DungeonScene::getLeftReviveCount(v10) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      643);
    v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v22,
            (const char (*)[25])"revive count exceed max:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &dungeon_config_ptr->revive_max_count);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = 1104;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( !PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      648);
    v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v22,
            (const char (*)[36])"is not all avatar dead player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = -1;
    goto LABEL_33;
  }
  now = common::tools::TimeUtils::getNow();
  v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  if ( (unsigned __int8)DungeonScene::isPlayerReviveInCd(v14, Uid, now) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "handlePlayerReviveInDungeon",
      656);
    v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v22,
            (const char (*)[20])"revive in cd, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  v4 = PlayerDungeonComp::reviveOnWayPoint(dungeon_comp);
LABEL_33:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  result = v4;
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 664: range 000000001310E1FA-000000001310E6E1
int32_t __cdecl DungeonHandler::onDungeonDieOptionReq(
        DungeonHandler *const this,
        const proto::DungeonDieOptionReq *req,
        proto::DungeonDieOptionRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  proto::PlayerDieOption v7; // eax
  bool is_quit_immediately; // dl
  proto::PlayerDieOption v9; // edx
  DungeonScene *v10; // rax
  uint32_t AllPlayerReviveCount; // edx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  DungeonScene *v16; // rax
  const std::string *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  google::protobuf::uint32 v19; // eax
  Player *player; // r14
  int32_t result; // eax
  std::string v22; // [rsp+0h] [rbp-120h]
  proto::DungeonDieOptionRsp *rsp_0a; // [rsp+8h] [rbp-118h]
  const proto::DungeonDieOptionReq *reqa; // [rsp+10h] [rbp-110h]
  DungeonHandler *thisa; // [rsp+18h] [rbp-108h]
  int32_t ret; // [rsp+20h] [rbp-100h]
  google::protobuf::uint32 dungeon_id; // [rsp+24h] [rbp-FCh]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::string v30; // [rsp+50h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+70h] [rbp-B0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v22._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:665 64 16 21 dungeon_scene_ptr:683 96 16 11 log_ptr:691";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonDieOptionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x57Fu, v22);
  std::string::~string(&v30);
  ret = -1;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(thisa->player_);
  v7 = proto::DungeonDieOptionReq::die_option(reqa);
  if ( v7 == DIE_OPT_REVIVE )
  {
    ret = DungeonHandler::handlePlayerReviveInDungeon(thisa);
  }
  else if ( v7 <= DIE_OPT_REVIVE )
  {
    if ( v7 == DIE_OPT_REPLAY )
    {
      ret = DungeonHandler::handlePlayerReplayDungeon(thisa);
    }
    else if ( v7 == DIE_OPT_CANCEL )
    {
      is_quit_immediately = proto::DungeonDieOptionReq::is_quit_immediately(reqa);
      ret = DungeonHandler::handlePlayerQuitDungeon(thisa, DUNGEON_QUIT_REASON_DIE_OPTION, 2u, is_quit_immediately);
    }
  }
  v9 = proto::DungeonDieOptionReq::die_option(reqa);
  proto::DungeonDieOptionRsp::set_die_option(rsp_0a, v9);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 64));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 64), 0LL) )
  {
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    AllPlayerReviveCount = DungeonScene::getAllPlayerReviveCount(v10);
    proto::DungeonDieOptionRsp::set_revive_count(rsp_0a, AllPlayerReviveCount);
  }
  if ( !ret && std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 64), 0LL) )
  {
    v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    dungeon_id = DungeonScene::getDungeonId(v13);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonDieOption>();
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyDungeonDieOption::set_dungeon_id(v14, dungeon_id);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v17 = DungeonScene::getTransaction[abi:cxx11](v16);
    proto_log::PlayerLogBodyDungeonDieOption::set_transaction(v15, v17);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonDieOption,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v19 = proto::DungeonDieOptionReq::die_option(reqa);
    proto_log::PlayerLogBodyDungeonDieOption::set_die_option(v18, v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonDieOption,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDungeonDieOption> *)(v3 + 96));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyDungeonDieOption>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonDieOption> *const)(v3 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = ret;
  if ( v31 == (char *)v3 )
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

// Line 701: range 000000001310E6E2-000000001310E8A2
int32_t __cdecl DungeonHandler::onDungeonPlayerDieReq(
        DungeonHandler *const this,
        const proto::DungeonPlayerDieReq *req,
        proto::DungeonPlayerDieRsp *rsp_0)
{
  bool v3; // bl
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rbx
  proto::PlayerDieType v8; // eax
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<Scene> __a; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
  v3 = std::operator!=<Scene>(&__a, 0LL);
  std::shared_ptr<Scene>::~shared_ptr(&__a);
  if ( v3 )
    return 506;
  if ( proto::DungeonPlayerDieReq::die_type(req) == PLAYER_DIE_ABYSS )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    v8 = proto::DungeonPlayerDieReq::die_type(req);
    return PlayerAvatarComp::allAvatarDie(AvatarComp, v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonPlayerDieReq",
      709);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v11, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v6,
      (const char (*)[31])" just support PLAYER_DIE_ABYSS");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
};

// Line 718: range 000000001310E8A4-000000001310F7A8
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamCreateReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamCreateReq *req,
        proto::DungeonCandidateTeamCreateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  PlayerWorld *v7; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  int32_t v10; // r14d
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // r14d
  PlayerSceneComp *v21; // rax
  uint32_t CurSceneId; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  PlayerActivityComp *ActivityComp; // r14
  uint32_t v27; // eax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  Scene *v31; // rax
  SceneGalleryComp *GalleryComp; // rax
  uint32_t v33; // r14d
  uint32_t v34; // eax
  bool v35; // r14
  common::milog::MiLogStream *v36; // r14
  int32_t result; // eax
  unsigned int Uid; // [rsp+20h] [rbp-100h] BYREF
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  int32_t ret; // [rsp+28h] [rbp-F8h]
  uint32_t player_limit; // [rsp+2Ch] [rbp-F4h]
  DungeonCandidateTeam *dungeon_team; // [rsp+30h] [rbp-F0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Player> v44; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-D0h] BYREF
  char v46[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 17 cur_world_ptr:719 64 16 21 dungeon_entry_ptr:748 96 16 13 scene_ptr:782";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamCreateReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamCreateReq",
      722);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v45,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_21:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v10 = -1;
    goto LABEL_63;
  }
  v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamCreateReq",
      729);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v45,
           (const char (*)[32])"is not in my world player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamCreateReq",
      734);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v45,
           (const char (*)[31])"is not in mp mode player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_21;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.dungeon_config_mgr;
  v12 = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, v12);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DungeonComp = Player::getDungeonComp(this->player_);
    if ( !PlayerDungeonComp::isCanMulEnter(DungeonComp, dungeon_config_ptr) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamCreateReq",
        745);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v45, (const char (*)[31])off_24F37C60);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &Uid);
      v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v18,
              (const char (*)[21])" dungeon_config_id: ");
      val = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v10 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      v20 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)
          + 93080;
      proto::DungeonCandidateTeamCreateReq::point_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = Player::getSceneComp(this->player_);
      CurSceneId = PlayerSceneComp::getCurSceneId(v21);
      JsonConfigMgr::findScenePoint<data::DungeonEntry>((const JsonConfigMgr *const)(v3 + 64), v20, CurSceneId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
      if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamCreateReq",
          751);
        v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v45,
                (const char (*)[41])"find dungeon_entry_ptr failed scene_id: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &dungeon_config_ptr->scene_id);
        v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" point_id: ");
        val = proto::DungeonCandidateTeamCreateReq::point_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v10 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        switch ( dungeon_config_ptr->type )
        {
          case DUNGEON_FLEUR_FAIR:
          case DUNGEON_CHANNELLER_SLAB_LOOP:
          case DUNGEON_BLITZ_RUSH:
          case DUNGEON_CHESS:
          case DUNGEON_HACHI:
          case DUNGEON_SUMMER_V2:
          case DUNGEON_WIND_FIELD:
          case DUNGEON_EFFIGY_CHALLENGE_V2:
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ActivityComp = Player::getActivityComp(this->player_);
            v27 = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
            ret = PlayerActivityComp::checkEnterActivityDungeon(ActivityComp, v27);
            if ( !ret )
              goto LABEL_45;
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/dungeon_handler.cpp",
              "onDungeonCandidateTeamCreateReq",
              770);
            v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v45,
                    (const char (*)[40])"checkEnterActivityDungeon failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Uid = Player::getUid(this->player_);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &Uid);
            v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v29,
                    (const char (*)[15])" ,dungeon_id: ");
            val = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v10 = ret;
            break;
          default:
LABEL_45:
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
            if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL)
              && (v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
                  GalleryComp = Scene::getGalleryComp(v31),
                  SceneGalleryComp::isAnyGalleryStarted(GalleryComp)) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/dungeon_handler.cpp",
                "onDungeonCandidateTeamCreateReq",
                787);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v45,
                (const char (*)[40])"[GALLERY] cur_scene has started gallery");
              common::milog::MiLogStream::~MiLogStream(&v45);
              v10 = 523;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              player_limit = DungeonHandler::getDungeonPlayerLimit(this, dungeon_config_ptr->type);
              v33 = proto::DungeonCandidateTeamCreateReq::point_id(req);
              v34 = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
              DungeonCandidateTeam::resetAll(dungeon_team, v34, v33, 1u, player_limit);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toThisPtr<Player>((Player *)&v44);
              v35 = DungeonCandidateTeam::addPlayer(dungeon_team, &v44) != 0;
              std::shared_ptr<Player>::~shared_ptr(&v44);
              if ( v35 )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/dungeon_handler.cpp",
                  "onDungeonCandidateTeamCreateReq",
                  796);
                v36 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v45,
                        (const char (*)[30])off_24F37E40);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
                common::milog::MiLogStream::~MiLogStream(&v45);
                v10 = -1;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                toThisPtr<Player>((Player *)&v44);
                DungeonCandidateTeam::setPlayerIsReady(dungeon_team, &v44, 1);
                std::shared_ptr<Player>::~shared_ptr(&v44);
                DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
                v10 = 0;
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
            break;
        }
      }
      std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamCreateReq",
      740);
    v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v45,
            (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    Uid = proto::DungeonCandidateTeamCreateReq::dungeon_id(req);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v10 = -1;
  }
LABEL_63:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v10;
  if ( v46 == (char *)v3 )
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

// Line 807: range 000000001310F7AA-0000000013110851
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamInviteReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamInviteReq *req,
        proto::DungeonCandidateTeamInviteRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int v16; // eax
  uint32_t v17; // r14d
  common::milog::MiLogStream *v18; // r14
  Player *v19; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *v23; // rax
  PlayerAvatarComp *AvatarComp; // rax
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // r14
  uint32_t DungeonId; // eax
  Player *v27; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  Player *v29; // rax
  PlayerActivityComp *ActivityComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  DungeonCandidateInviteInfo *InviteInfo; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t v38; // eax
  std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  uint32_t v40; // eax
  std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  uint32_t v42; // eax
  std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  DungeonCandidateInviteInfo *v44; // rax
  uint32_t VaildSec; // eax
  Player *v46; // r14
  PlayerMatchComp *MatchComp; // rax
  PlayerMatchComp *v48; // rax
  unsigned int *v49; // rdx
  int32_t result; // eax
  int Now; // [rsp+4h] [rbp-1ACh]
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  int32_t ret; // [rsp+30h] [rbp-180h]
  int i; // [rsp+34h] [rbp-17Ch]
  int32_t enter_activity_dungeon_ret; // [rsp+38h] [rbp-178h]
  unsigned int invalid_candidate_uid; // [rsp+3Ch] [rbp-174h]
  uint32_t difficult_level; // [rsp+40h] [rbp-170h]
  int32_t mechanicus_ret; // [rsp+44h] [rbp-16Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-168h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-160h] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+58h] [rbp-158h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+60h] [rbp-150h]
  std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-148h]
  std::shared_ptr<const google::protobuf::Message> v65; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v66; // [rsp+80h] [rbp-130h] BYREF
  char v67[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 dungeon_id:839 48 16 17 cur_world_ptr:808 80 16 24 be_invite_player_ptr:850 112 16 14 "
                        "notify_ptr:917 144 48 29 invalid_candidate_uid_set:847";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 48));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamInviteReq",
      811);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v66,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v66);
    v7 = -1;
    goto LABEL_73;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamInviteReq",
      817);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v66,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamInviteReq",
      822);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v66, (const char (*)[19])"is not in my world");
    common::milog::MiLogStream::~MiLogStream(&v66);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( !PlayerMpComp::isInMpMode(MpComp) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamInviteReq",
        827);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v66, (const char (*)[18])"is not in mp mode");
      common::milog::MiLogStream::~MiLogStream(&v66);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      if ( !DungeonCandidateTeam::isLeader(dungeon_team, Uid) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamInviteReq",
          832);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v66, (const char (*)[14])"is not leader");
        common::milog::MiLogStream::~MiLogStream(&v66);
        v7 = -1;
      }
      else if ( DungeonCandidateTeam::isFull(dungeon_team) )
      {
        v7 = 1109;
      }
      else
      {
        *(_DWORD *)(v3 + 32) = DungeonCandidateTeam::getDungeonId(dungeon_team);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v65);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               &v12->design_config.txt_config_mgr.dungeon_config_mgr,
                               *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v65);
        if ( dungeon_config_ptr )
        {
          ret = 0;
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 144));
          for ( i = 0; ; ++i )
          {
            v16 = proto::DungeonCandidateTeamInviteReq::player_uids_size(req);
            if ( i >= v16 )
              break;
            v17 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            proto::DungeonCandidateTeamInviteReq::player_uids(req, i);
            World::findPlayerPtr((World *const)(v3 + 80), v17);
            if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 80), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/dungeon_handler.cpp",
                "onDungeonCandidateTeamInviteReq",
                853);
              v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v66,
                      (const char (*)[39])"find invite player failed player_uid: ");
              val = proto::DungeonCandidateTeamInviteReq::player_uids(req, i);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              common::milog::MiLogStream::~MiLogStream(&v66);
            }
            else
            {
              v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              DungeonComp = Player::getDungeonComp(v19);
              if ( PlayerDungeonComp::isInDungeon(DungeonComp) )
              {
                common::milog::MiLogStream::create(
                  &v66,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/dungeon_handler.cpp",
                  "onDungeonCandidateTeamInviteReq",
                  860);
                v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v66,
                        (const char (*)[28])"player is in dungeon, uid: ");
                v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                val = Player::getUid(v22);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
                common::milog::MiLogStream::~MiLogStream(&v66);
              }
              else
              {
                v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                AvatarComp = Player::getAvatarComp(v23);
                if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
                {
                  ret = 1120;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( dungeon_config_ptr->type != DUNGEON_THEATRE_MECHANICUS )
                    goto LABEL_45;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v65);
                  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)->design_config.txt_config_mgr.mechanicus_config_mgr;
                  DungeonId = DungeonCandidateTeam::getDungeonId(dungeon_team);
                  difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                                      p_mechanicus_config_mgr,
                                      DungeonId);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v65);
                  v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                  MechanicusComp = Player::getMechanicusComp(v27);
                  mechanicus_ret = PlayerMechanicusComp::checkEnterDungeon(MechanicusComp, difficult_level, 1u);
                  if ( mechanicus_ret )
                  {
                    ret = mechanicus_ret;
                  }
                  else
                  {
LABEL_45:
                    enter_activity_dungeon_ret = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    switch ( dungeon_config_ptr->type )
                    {
                      case DUNGEON_FLEUR_FAIR:
                      case DUNGEON_CHANNELLER_SLAB_LOOP:
                      case DUNGEON_BLITZ_RUSH:
                      case DUNGEON_CHESS:
                      case DUNGEON_HACHI:
                      case DUNGEON_SUMMER_V2:
                      case DUNGEON_WIND_FIELD:
                      case DUNGEON_EFFIGY_CHALLENGE_V2:
                        v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                        ActivityComp = Player::getActivityComp(v29);
                        enter_activity_dungeon_ret = PlayerActivityComp::checkEnterActivityDungeon(
                                                       ActivityComp,
                                                       *(_DWORD *)(v3 + 32));
                        if ( enter_activity_dungeon_ret )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                              + 0x7FFF8000) )
                          {
                            __asan_report_load4();
                          }
                          if ( dungeon_config_ptr->type == DUNGEON_HACHI )
                          {
                            v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                            val = Player::getUid(v31);
                            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 144), &val);
                          }
                        }
                        break;
                      default:
                        break;
                    }
                    if ( enter_activity_dungeon_ret )
                    {
                      common::milog::MiLogStream::create(
                        &v66,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/handler/dungeon_handler.cpp",
                        "onDungeonCandidateTeamInviteReq",
                        910);
                      v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              &v66,
                              (const char (*)[40])"checkEnterActivityDungeon failed, uid: ");
                      v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                      val = Player::getUid(v33);
                      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
                      v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                              v34,
                              (const char (*)[15])" ,dungeon_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v35,
                        (const unsigned int *)(v3 + 32));
                      common::milog::MiLogStream::~MiLogStream(&v66);
                      ret = enter_activity_dungeon_ret;
                    }
                    else
                    {
                      InviteInfo = DungeonCandidateTeam::getInviteInfo(dungeon_team);
                      v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                      v38 = Player::getUid(v37);
                      DungeonCandidateInviteInfo::setState(InviteInfo, v38, DUNGEON_CANDIDATE_TEAM_INVITE_STATE_SEND);
                      common::tools::perf::make_shared<proto::DungeonCandidateTeamInviteNotify>();
                      v39 = std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v40 = Player::getUid(this->player_);
                      proto::DungeonCandidateTeamInviteNotify::set_player_uid(v39, v40);
                      v41 = std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                      v42 = DungeonCandidateTeam::getDungeonId(dungeon_team);
                      proto::DungeonCandidateTeamInviteNotify::set_dungeon_id(v41, v42);
                      v43 = std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonCandidateTeamInviteNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                      Now = common::tools::TimeUtils::getNow();
                      v44 = DungeonCandidateTeam::getInviteInfo(dungeon_team);
                      VaildSec = DungeonCandidateInviteInfo::getVaildSec(v44);
                      proto::DungeonCandidateTeamInviteNotify::set_vaild_deadline_time_sec(v43, Now + VaildSec);
                      v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                      std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonCandidateTeamInviteNotify>((const std::shared_ptr<proto::DungeonCandidateTeamInviteNotify> *)&v65);
                      Player::sendMessage(v46, &v65, 0LL);
                      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v65);
                      std::shared_ptr<proto::DungeonCandidateTeamInviteNotify>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamInviteNotify> *const)(v3 + 112));
                    }
                  }
                }
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 80));
          }
          if ( !ret )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MatchComp = Player::getMatchComp(this->player_);
            if ( PlayerMatchComp::isInMatch(MatchComp) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v48 = Player::getMatchComp(this->player_);
              PlayerMatchComp::sendRemoveMatchUnitReq(v48, MATCH_UNIT_REMOVE_OP_INTERRUPTED);
            }
          }
          if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 144)) )
          {
            __for_range = (std::set<unsigned int> *)(v3 + 144);
            __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 144))._M_node;
            __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              v49 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              invalid_candidate_uid = *v49;
              proto::DungeonCandidateTeamInviteRsp::add_invalid_player_uids(rsp_0, invalid_candidate_uid);
              std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
            }
          }
          v7 = ret;
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 144));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonCandidateTeamInviteReq",
            843);
          v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v66,
                  (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])" player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v66);
          v7 = -1;
        }
      }
    }
  }
LABEL_73:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 48));
  result = v7;
  if ( v67 == (char *)v3 )
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
  return result;
};

// Line 945: range 0000000013110852-0000000013111122
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamKickReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamKickReq *req,
        proto::DungeonCandidateTeamKickRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  uint32_t Uid; // eax
  GameserverService *v12; // rax
  uint32_t v13; // r14d
  common::milog::MiLogStream *v14; // r14
  uint32_t v15; // r14d
  common::milog::MiLogStream *v16; // r14
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // r14
  Player *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+28h] [rbp-B8h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 17 cur_world_ptr:946 64 16 22 be_kick_player_ptr:973";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamKickReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamKickReq",
      949);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v23,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
    goto LABEL_38;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamKickReq",
      955);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v23,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamKickReq",
      960);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])"is not in my world");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( !PlayerMpComp::isInMpMode(MpComp) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamKickReq",
        965);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v23, (const char (*)[18])"is not in mp mode");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      if ( !DungeonCandidateTeam::isLeader(dungeon_team, Uid) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamKickReq",
          970);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"is not leader");
        common::milog::MiLogStream::~MiLogStream(&v23);
        v7 = -1;
      }
      else
      {
        v12 = ServiceBox::findService<GameserverService>();
        v13 = (unsigned int)GameserverService::getGameThreadLocal(v12) + 16;
        proto::DungeonCandidateTeamKickReq::player_uid(req);
        PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), v13);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonCandidateTeamKickReq",
            976);
          v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v23,
                  (const char (*)[37])"find kick player failed player_uid: ");
          val = proto::DungeonCandidateTeamKickReq::player_uid(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v23);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = Player::getUid(this->player_);
          if ( v15 == proto::DungeonCandidateTeamKickReq::player_uid(req) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/dungeon_handler.cpp",
              "onDungeonCandidateTeamKickReq",
              981);
            v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v23,
                    (const char (*)[23])"kick self player_uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v23);
            v7 = -1;
          }
          else
          {
            v17 = proto::DungeonCandidateTeamKickReq::player_uid(req);
            if ( DungeonCandidateTeam::delPlayer(dungeon_team, v17) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/dungeon_handler.cpp",
                "onDungeonCandidateTeamKickReq",
                986);
              v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v23,
                      (const char (*)[29])"kick error kick_player_uid: ");
              val = proto::DungeonCandidateTeamKickReq::player_uid(req);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              common::milog::MiLogStream::~MiLogStream(&v23);
              v7 = -1;
            }
            else
            {
              DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
              v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              DungeonCandidateTeam::notifyPlayerLeave(dungeon_team, v19, DUNGEON_CANDIDATE_TPLR_BE_KICK);
              v7 = 0;
            }
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
      }
    }
  }
LABEL_38:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v7;
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

// Line 999: range 0000000013111124-0000000013111496
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamLeaveReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamLeaveReq *req,
        proto::DungeonCandidateTeamLeaveRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-9Ch] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+28h] [rbp-98h]
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
  *(_QWORD *)(v3 + 8) = "1 32 16 18 cur_world_ptr:1000";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamLeaveReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamLeaveReq",
      1003);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v12,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
    goto LABEL_17;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamLeaveReq",
      1009);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = DungeonCandidateTeam::handlePlayerLeave(dungeon_team, this->player_, DUNGEON_CANDIDATE_TPLR_NORMAL);
LABEL_17:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
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

// Line 1017: range 0000000013111498-0000000013112A39
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamReplyInviteReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamReplyInviteReq *req,
        proto::DungeonCandidateTeamReplyInviteRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // r14
  PlayerWorld *v10; // rax
  Player *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  DungeonCandidateInviteInfo *v14; // r15
  uint32_t v15; // eax
  DungeonCandidateInviteInfo *v16; // r15
  uint32_t v17; // eax
  bool v18; // r15
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  _BOOL4 v27; // r15d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int v31; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  bool v33; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  const Vector3 *Position; // rax
  PlayerSceneComp *v37; // r15
  Scene *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // rax
  DungeonCandidateInviteInfo *InviteInfo; // r14
  uint32_t Uid; // eax
  DungeonCandidateInviteInfo *v46; // r14
  uint32_t v47; // eax
  std::__shared_ptr_access<proto::DungeonCandidateTeamRefuseNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // r14
  uint32_t v49; // eax
  Player *v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  int32_t result; // eax
  uint32_t point_id; // [rsp+14h] [rbp-21Ch]
  unsigned int val; // [rsp+34h] [rbp-1FCh] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+38h] [rbp-1F8h]
  Vector3 v59; // [rsp+44h] [rbp-1ECh] BYREF
  PlayerPtr p_player_ptr; // [rsp+50h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v61; // [rsp+60h] [rbp-1D0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-1B0h] BYREF
  char v63[368]; // [rsp+C0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 14 cur_state:1056 64 4 24 need_trans_distance:1098 80 4 14 cur_state:1129 96 12 13 tran_"
                        "pos:1087 128 16 18 cur_world_ptr:1018 160 16 18 cur_scene_ptr:1029 192 16 22 player_leader_ptr:1"
                        "041 224 16 21 leader_scene_ptr:1047 256 16 22 leader_player_ptr:1133 288 16 15 notify_ptr:1136";
  *(_QWORD *)(v4 + 16) = DungeonHandler::onDungeonCandidateTeamReplyInviteReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamReplyInviteReq",
      1021);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v61,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v61);
    v3 = -1;
    goto LABEL_97;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamReplyInviteReq",
      1026);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v61, (const char (*)[29])off_24F38520);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 160));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamReplyInviteReq",
      1032);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v61,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v61);
    v3 = -1;
    goto LABEL_96;
  }
  v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v10);
  if ( DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    DungeonCandidateTeam::getLeaderPlayerPtr((DungeonCandidateTeam *const)(v4 + 192));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1044);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v61, (const char (*)[18])" leader_ptr null ");
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = -1;
LABEL_95:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 192));
      goto LABEL_96;
    }
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    Player::getSceneComp(v11);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 224));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 224), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1050);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v61,
              (const char (*)[35])"leader_scene_ptr null leader_uid: ");
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      val = Player::getUid(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = -1;
LABEL_94:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 224));
      goto LABEL_95;
    }
    if ( !proto::DungeonCandidateTeamReplyInviteReq::is_accept(req) )
    {
      InviteInfo = DungeonCandidateTeam::getInviteInfo(dungeon_team);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      *(_DWORD *)(v4 + 80) = DungeonCandidateInviteInfo::getState(InviteInfo, Uid);
      if ( *(_DWORD *)(v4 + 80) == 1 || *(_DWORD *)(v4 + 80) == 3 )
      {
        v46 = DungeonCandidateTeam::getInviteInfo(dungeon_team);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v47 = Player::getUid(this->player_);
        DungeonCandidateInviteInfo::setState(v46, v47, DUNGEON_CANDIDATE_TEAM_INVITE_STATE_REFUSE);
        DungeonCandidateTeam::getLeaderPlayerPtr((DungeonCandidateTeam *const)(v4 + 256));
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 256), 0LL) )
        {
          common::tools::perf::make_shared<proto::DungeonCandidateTeamRefuseNotify>();
          v48 = std::__shared_ptr_access<proto::DungeonCandidateTeamRefuseNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonCandidateTeamRefuseNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v49 = Player::getUid(this->player_);
          proto::DungeonCandidateTeamRefuseNotify::set_player_uid(v48, v49);
          v50 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonCandidateTeamRefuseNotify>((const std::shared_ptr<proto::DungeonCandidateTeamRefuseNotify> *)&p_player_ptr);
          Player::sendMessage(v50, (common::minet::ConstMessagePtr *)&p_player_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&p_player_ptr);
          std::shared_ptr<proto::DungeonCandidateTeamRefuseNotify>::~shared_ptr((std::shared_ptr<proto::DungeonCandidateTeamRefuseNotify> *const)(v4 + 288));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonCandidateTeamReplyInviteReq",
            1142);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v61,
            (const char (*)[23])"leader_player_ptr null");
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 256));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamReplyInviteReq",
          1147);
        v51 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v61,
                (const char (*)[29])" state not match cur_state: ");
        v52 = common::milog::MiLogStream::operator<<<proto::DungeonCandidateTeamInviteState,(proto::DungeonCandidateTeamInviteState*)0>(
                v51,
                (const proto::DungeonCandidateTeamInviteState *)(v4 + 80));
        v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v52, (const char (*)[14])" player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &val);
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      goto LABEL_93;
    }
    v14 = DungeonCandidateTeam::getInviteInfo(dungeon_team);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = Player::getUid(this->player_);
    *(_DWORD *)(v4 + 48) = DungeonCandidateInviteInfo::getState(v14, v15);
    if ( *(_DWORD *)(v4 + 48) != 1 )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1123);
      v43 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v61, (const char (*)[15])"server_state: ");
      common::milog::MiLogStream::operator<<<proto::DungeonCandidateTeamInviteState,(proto::DungeonCandidateTeamInviteState*)0>(
        v43,
        (const proto::DungeonCandidateTeamInviteState *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = 1225;
      goto LABEL_94;
    }
    if ( DungeonCandidateTeam::isFull(dungeon_team) )
    {
      v3 = 1109;
      goto LABEL_94;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !DungeonCandidateTeam::isPlayerHasValidAvatar(dungeon_team, this->player_) )
    {
      v3 = 1250;
      goto LABEL_94;
    }
    v16 = DungeonCandidateTeam::getInviteInfo(dungeon_team);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = Player::getUid(this->player_);
    DungeonCandidateInviteInfo::setState(v16, v17, DUNGEON_CANDIDATE_TEAM_INVITE_STATE_ACCEPT);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Player>((Player *)&p_player_ptr);
    v18 = DungeonCandidateTeam::addPlayer(dungeon_team, &p_player_ptr) != 0;
    std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
    if ( v18 )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1070);
      v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v61, (const char (*)[31])off_24F38600);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = -1;
      goto LABEL_94;
    }
    DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
    if ( !DungeonCandidateTeam::getEntryPointId(dungeon_team) )
    {
      v3 = 0;
      goto LABEL_94;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&p_player_ptr);
    v20 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_player_ptr)
        + 93080;
    DungeonCandidateTeam::getEntryPointId(dungeon_team);
    v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    SceneId = Scene::getSceneId(v21);
    JsonConfigMgr::findScenePoint<data::SceneTransPoint>((const JsonConfigMgr *const)(v4 + 256), v20, SceneId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_player_ptr);
    if ( std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v4 + 256), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1084);
      v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v61,
              (const char (*)[32])"findScenePoint fails, scene_id:");
      v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
      *(_DWORD *)(v4 + 80) = Scene::getSceneId(v24);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])", point_id:");
      val = DungeonCandidateTeam::getEntryPointId(dungeon_team);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = 0;
      v27 = 0;
      goto LABEL_75;
    }
    v28 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
    Vector3::Vector3((Vector3 *const)(v4 + 96), &v28->tran_pos);
    if ( Vector3::isZero((const Vector3 *const)(v4 + 96)) )
    {
      v29 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
      Vector3::Vector3(&v59, &v29->pos);
      *(Vector3 *)(v4 + 96) = v59;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getCurAvatar((Player *const)(v4 + 288));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 288)) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonCandidateTeamReplyInviteReq",
        1095);
      v30 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v61,
              (const char (*)[36])" get cur avatar failed player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
      v3 = 0;
      v31 = 0;
    }
    else
    {
      *(_DWORD *)(v4 + 64) = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_player_ptr);
      v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_player_ptr);
      v33 = ConstValueExcelConfigMgr::findConstValue<unsigned int>(
              &v32->design_config.txt_config_mgr.const_value_config_mgr,
              CONST_VALUE_DUNGEON_INVITE_NEED_TRANS_DISTANCE,
              (unsigned int *)(v4 + 64)) != 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_player_ptr);
      if ( v33 )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamReplyInviteReq",
          1101);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v61,
          (const char (*)[54])"find dungeon invite need_trans_distance config failed");
        common::milog::MiLogStream::~MiLogStream(&v61);
        *(_DWORD *)(v4 + 64) = 10;
      }
      if ( std::operator!=<Scene,Scene>(
             (const std::shared_ptr<Scene> *)(v4 + 224),
             (const std::shared_ptr<Scene> *)(v4 + 160))
        || (v34 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288)),
            Position = Entity::getPosition((const Entity *const)v34),
            getDistance(Position, (const Vector3 *)(v4 + 96)) > (float)*(int *)(v4 + 64)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v37 = Player::getSceneComp(this->player_);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_DUNGEON_INVITE_ACCEPT);
        point_id = DungeonCandidateTeam::getEntryPointId(dungeon_team);
        v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        LOBYTE(v37) = PlayerSceneComp::jumpToScene(v37, v38, point_id, &p_reason) != 0;
        TransferReason::~TransferReason(&p_reason);
        if ( (_BYTE)v37 )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonCandidateTeamReplyInviteReq",
            1108);
          v39 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v61,
                  (const char (*)[34])"jump to scene failed player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v4 + 80));
          v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])" scene_id: ");
          v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
          val = Scene::getSceneId(v42);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
          common::milog::MiLogStream::~MiLogStream(&v61);
          v3 = 0;
          v31 = 0;
          goto LABEL_74;
        }
        proto::DungeonCandidateTeamReplyInviteRsp::set_is_trans_point(rsp_0, 1);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonCandidateTeamReplyInviteReq",
          1118);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v61,
          (const char (*)[26])" distance closer not jump");
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      v31 = 1;
    }
LABEL_74:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 288));
    v27 = v31 == 1;
LABEL_75:
    std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 256));
    if ( !v27 )
      goto LABEL_94;
LABEL_93:
    v3 = 0;
    goto LABEL_94;
  }
  v3 = 1110;
LABEL_96:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160));
LABEL_97:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 128));
  result = v3;
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1154: range 0000000013112A3A-0000000013112EEC
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamSetReadyReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamSetReadyReq *req,
        proto::DungeonCandidateTeamSetReadyRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  bool is_ready; // r14
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+28h] [rbp-A8h]
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 cur_world_ptr:1155";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamSetReadyReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetReadyReq",
      1158);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
    goto LABEL_21;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetReadyReq",
      1164);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v16,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  is_ready = proto::DungeonCandidateTeamSetReadyReq::is_ready(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&p_player_ptr);
  v10 = DungeonCandidateTeam::setPlayerIsReady(dungeon_team, &p_player_ptr, is_ready) != 0;
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( v10 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetReadyReq",
      1169);
    v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v16, (const char (*)[29])off_24F38920);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
    v7 = 0;
  }
LABEL_21:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v7;
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

// Line 1177: range 0000000013112EEE-0000000013113404
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamChangeAvatarReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamChangeAvatarReq *req,
        proto::DungeonCandidateTeamChangeAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  int32_t i; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  std::vector<long unsigned int>::value_type __x; // [rsp+30h] [rbp-F0h] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+38h] [rbp-E8h]
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 18 cur_world_ptr:1178 64 24 20 avatar_guid_vec:1191";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamChangeAvatarReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamChangeAvatarReq",
      1181);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
    goto LABEL_23;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamChangeAvatarReq",
      1187);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v16,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 64));
  for ( i = 0; i < proto::DungeonCandidateTeamChangeAvatarReq::avatar_guid_list_size(req); ++i )
  {
    __x = proto::DungeonCandidateTeamChangeAvatarReq::avatar_guid_list(req, i);
    std::vector<unsigned long>::push_back((std::vector<long unsigned int> *const)(v3 + 64), &__x);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&p_player_ptr);
  ret = DungeonCandidateTeam::setPlayerAvatarVec(
          dungeon_team,
          &p_player_ptr,
          (const std::vector<long unsigned int> *)(v3 + 64));
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamChangeAvatarReq",
      1200);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v16,
      (const char (*)[39])"dungeon_team setPlayerAvatarVec failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = ret;
  }
  else
  {
    DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
    v7 = 0;
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 64));
LABEL_23:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v7;
  if ( v17 == (char *)v3 )
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

// Line 1209: range 0000000013113406-0000000013114376
int32_t __cdecl DungeonHandler::onGetDailyDungeonEntryInfoReq(
        DungeonHandler *const this,
        const proto::GetDailyDungeonEntryInfoReq *req,
        proto::GetDailyDungeonEntryInfoRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _BOOL4 v15; // r15d
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // r15d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  int v20; // r15d
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned int *M_current; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v24; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned int *v26; // r8
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r15
  uint32_t v36; // r15d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t v38; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v39; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned int *v41; // r8
  common::milog::MiLogStream *v42; // rax
  PlayerDungeonComp *DungeonComp; // rax
  int32_t result; // eax
  JsonConfigMgr *scene_id; // [rsp+10h] [rbp-2C0h]
  unsigned int *scene_ida; // [rsp+10h] [rbp-2C0h]
  std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-298h] BYREF
  std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator __for_end; // [rsp+40h] [rbp-290h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+48h] [rbp-288h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+50h] [rbp-280h] BYREF
  PlayerDungeonComp *dungeon_cmp; // [rsp+58h] [rbp-278h]
  const std::unordered_map<unsigned int,data::DungeonEntryExcelConfig> *__for_range; // [rsp+60h] [rbp-270h]
  const std::pair<unsigned int const,data::DungeonEntryExcelConfig> *v54; // [rsp+68h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *config_id; // [rsp+70h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *dungeon_entry_config; // [rsp+78h] [rbp-258h]
  std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-250h]
  std::set<unsigned int> *__for_range_1; // [rsp+88h] [rbp-248h]
  proto::DailyDungeonEntryInfo *daily_dungeon_entry_info; // [rsp+90h] [rbp-240h]
  proto::DungeonEntryInfo *recommend_dungeon_entry_info; // [rsp+98h] [rbp-238h]
  const data::DungeonExcelConfig *dungeon_config_ptr_0; // [rsp+A0h] [rbp-230h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+A8h] [rbp-228h]
  std::shared_ptr<Config> v63; // [rsp+B0h] [rbp-220h] BYREF
  common::milog::MiLogStream v64; // [rsp+C0h] [rbp-210h] BYREF
  common::milog::MiLogStream v65; // [rsp+E0h] [rbp-1F0h] BYREF
  char v66[464]; // [rsp+100h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 21 dungeon_entry_id:1226 64 4 25 recommend_dungeon_id:1239 80 4 15 dungeon_id:1251 96 4 "
                        "20 prev_dungeon_id:1259 112 4 15 dungeon_id:1272 128 16 14 scene_ptr:1210 160 16 22 dungeon_entr"
                        "y_ptr:1232 192 24 19 dungeon_id_vec:1240 256 48 22 level_dungeon_map:1250 336 48 23 dungeon_roster_set:1270";
  *(_QWORD *)(v4 + 16) = DungeonHandler::onGetDailyDungeonEntryInfoReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onGetDailyDungeonEntryInfoReq",
      1213);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v65, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v65);
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    dungeon_cmp = Player::getDungeonComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.txt_config_mgr.dungeon_entry_config_mgr.dungeon_entry_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v63);
    __for_begin._M_cur = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v54 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator*(&__for_begin);
      config_id = std::get<0ul,unsigned int const,data::DungeonEntryExcelConfig>(v54);
      dungeon_entry_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonEntryExcelConfig>(v54);
      if ( *(char *)(((unsigned __int64)&dungeon_entry_config->is_show_in_adv_handbook >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&dungeon_entry_config->is_show_in_adv_handbook);
      if ( dungeon_entry_config->is_show_in_adv_handbook )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 48) = dungeon_entry_config->dungeon_entry_id;
        v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( Scene::isPointUnlocked((const Scene *const)v8, *(_DWORD *)(v4 + 48)) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v63);
          scene_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.json_config_mgr;
          v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          SceneId = Scene::getSceneId((const Scene *const)v9);
          JsonConfigMgr::findScenePoint<data::DungeonEntry>(
            (const JsonConfigMgr *const)(v4 + 160),
            (uint32_t)scene_id,
            SceneId);
          std::shared_ptr<Config>::~shared_ptr(&v63);
          if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/dungeon_handler.cpp",
              "onGetDailyDungeonEntryInfoReq",
              1235);
            v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v65,
                    (const char (*)[32])"findScenePoint fails, scene_id:");
            v12 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            *(_DWORD *)(v4 + 112) = Scene::getSceneId((const Scene *const)v12);
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v4 + 112));
            v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v13,
                    (const char (*)[12])", point_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v65);
            v3 = 5;
            v15 = 0;
          }
          else
          {
            *(_DWORD *)(v4 + 64) = 0;
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 192));
            v16 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            if ( !std::vector<unsigned int>::empty(&v16->dungeon_random_list)
              && (v17 = *(_DWORD *)(v4 + 48),
                  v18 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
                  v19 = Scene::getSceneId((const Scene *const)v18),
                  (unsigned int)PlayerDungeonComp::getRandomDungeonList(
                                  dungeon_cmp,
                                  v19,
                                  v17,
                                  (std::vector<unsigned int> *)(v4 + 192))) )
            {
              v3 = -1;
              v20 = 0;
            }
            else
            {
              v21 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              scene_ida = std::vector<unsigned int>::end(&v21->dungeon_ids)._M_current;
              v22 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              M_current = std::vector<unsigned int>::begin(&v22->dungeon_ids)._M_current;
              __for_begin_0._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 192))._M_current;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
                &__for_begin_0);
              std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
                (std::vector<unsigned int> *const)(v4 + 192),
                (std::vector<unsigned int>::const_iterator)__for_end_0._M_current,
                (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)scene_ida);
              std::multimap<unsigned int,unsigned int>::multimap((std::multimap<unsigned int,unsigned int> *const)(v4 + 256));
              __for_range_0 = (std::vector<unsigned int> *)(v4 + 192);
              __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 192))._M_current;
              __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
              {
                v24 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
                if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v4 + 80) = *v24;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v63);
                v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
                dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                       &v25->design_config.txt_config_mgr.dungeon_config_mgr,
                                       *(_DWORD *)(v4 + 80));
                std::shared_ptr<Config>::~shared_ptr(&v63);
                if ( dungeon_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)dungeon_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->prev_dungeon_id >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v4 + 96) = dungeon_config_ptr->prev_dungeon_id;
                  if ( *(_DWORD *)(v4 + 96) && !PlayerDungeonComp::isDungeonPassed(dungeon_cmp, *(_DWORD *)(v4 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v65,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/handler/dungeon_handler.cpp",
                      "onGetDailyDungeonEntryInfoReq",
                      1262);
                    v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            &v65,
                            (const char (*)[17])"prev_dungeon_id:");
                    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v29,
                            (const unsigned int *)(v4 + 96));
                    v31 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            v30,
                            (const char (*)[30])" not passed, skip dungeon_id:");
                    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v31,
                            (const unsigned int *)(v4 + 80));
                    v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v32,
                            (const char (*)[11])" point_id:");
                    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v33,
                            (const unsigned int *)(v4 + 48));
                    v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    *(_DWORD *)(v4 + 112) = Player::getUid(this->player_);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v4 + 112));
                    common::milog::MiLogStream::~MiLogStream(&v65);
                  }
                  else
                  {
                    std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                      (std::multimap<unsigned int,unsigned int> *const)(v4 + 256),
                      &dungeon_config_ptr->limit_level,
                      (unsigned int *)(v4 + 80),
                      &dungeon_config_ptr->limit_level,
                      v26);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/dungeon_handler.cpp",
                    "onGetDailyDungeonEntryInfoReq",
                    1256);
                  v27 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v64,
                          (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v4 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v64);
                }
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
              }
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 336));
              v36 = *(_DWORD *)(v4 + 48);
              v37 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              v38 = Scene::getSceneId((const Scene *const)v37);
              PlayerDungeonComp::getDungeonRosterSet(dungeon_cmp, v38, v36, (std::set<unsigned int> *)(v4 + 336));
              __for_range_1 = (std::set<unsigned int> *)(v4 + 336);
              __for_begin_0._M_current = (unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 336))._M_node;
              __for_end_0._M_current = (unsigned int *)std::set<unsigned int>::end(__for_range_1)._M_node;
              while ( std::operator!=(
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0,
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
              {
                v39 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
                if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v4 + 112) = *v39;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v63);
                v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
                dungeon_config_ptr_0 = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                         &v40->design_config.txt_config_mgr.dungeon_config_mgr,
                                         *(_DWORD *)(v4 + 112));
                std::shared_ptr<Config>::~shared_ptr(&v63);
                if ( dungeon_config_ptr_0 )
                {
                  std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                    (std::multimap<unsigned int,unsigned int> *const)(v4 + 256),
                    &dungeon_config_ptr_0->limit_level,
                    (unsigned int *)(v4 + 112),
                    &dungeon_config_ptr_0->limit_level,
                    v41);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v65,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/dungeon_handler.cpp",
                    "onGetDailyDungeonEntryInfoReq",
                    1277);
                  v42 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          &v65,
                          (const char (*)[39])"findDungeonExcelConfig fails, dungeon:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v4 + 112));
                  common::milog::MiLogStream::~MiLogStream(&v65);
                }
                std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              getLevelDungeonRecommendDungeonId(
                this->player_,
                (const std::multimap<unsigned int,unsigned int> *)(v4 + 256),
                (uint32_t *)(v4 + 64));
              daily_dungeon_entry_info = proto::GetDailyDungeonEntryInfoRsp::add_daily_dungeon_info_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::DailyDungeonEntryInfo::set_dungeon_entry_config_id(
                daily_dungeon_entry_info,
                dungeon_entry_config->id);
              proto::DailyDungeonEntryInfo::set_dungeon_entry_id(daily_dungeon_entry_info, *(_DWORD *)(v4 + 48));
              recommend_dungeon_entry_info = proto::DailyDungeonEntryInfo::mutable_recommend_dungeon_entry_info(daily_dungeon_entry_info);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              DungeonComp = Player::getDungeonComp(this->player_);
              PlayerDungeonComp::fillDungeonEntryInfo(DungeonComp, *(_DWORD *)(v4 + 64), recommend_dungeon_entry_info);
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 336));
              std::multimap<unsigned int,unsigned int>::~multimap((std::multimap<unsigned int,unsigned int> *const)(v4 + 256));
              v20 = 1;
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 192));
            v15 = v20 == 1;
          }
          std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 160));
          if ( !v15 )
            goto LABEL_62;
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator++(&__for_begin);
    }
    v3 = 0;
  }
LABEL_62:
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v4 + 128));
  result = v3;
  if ( v66 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1296: range 0000000013114378-0000000013114A7E
int32_t __cdecl DungeonHandler::onDungeonSlipRevivePointActivateReq(
        DungeonHandler *const this,
        const proto::DungeonSlipRevivePointActivateReq *req,
        proto::DungeonSlipRevivePointActivateRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  uint32_t v7; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const Vector3 *Position; // rax
  DungeonScene *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-138h] BYREF
  uint32_t check_distance; // [rsp+2Ch] [rbp-134h]
  int32_t ret; // [rsp+30h] [rbp-130h]
  Vector3 pos2; // [rsp+34h] [rbp-12Ch] BYREF
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-110h] BYREF
  char v28[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 point_id:1310 64 16 14 scene_ptr:1297 96 16 22 dungeon_scene_ptr:1303 128 16 21 revive"
                        "_point_ptr:1311 160 16 15 avatar_ptr:1317";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonSlipRevivePointActivateReq;
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
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonSlipRevivePointActivateReq",
      1300);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 96));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonSlipRevivePointActivateReq",
        1306);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v27,
        (const char (*)[26])"dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = proto::DungeonSlipRevivePointActivateReq::slip_revive_point_id(req);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)
         + 93080;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SceneId = Scene::getSceneId(v8);
      JsonConfigMgr::findScenePoint<data::DungeonSlipRevivePoint>((const JsonConfigMgr *const)(v3 + 128), v7, SceneId);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( std::operator==<data::DungeonSlipRevivePoint>(
             (const std::shared_ptr<data::DungeonSlipRevivePoint> *)(v3 + 128),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonSlipRevivePointActivateReq",
          1314);
        v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v27,
                (const char (*)[32])"findScenePoint fails, scene_id:");
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Scene::getSceneId(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getCurAvatar((Player *const)(v3 + 160));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonSlipRevivePointActivateReq",
            1320);
          v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v27,
                  (const char (*)[25])"getCurAvatar fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = 104;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v15->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          v16 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          Vector3::Vector3(&pos2, &v16->pos);
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          Position = Entity::getPosition((const Entity *const)v17);
          if ( getDistance(Position, &pos2) <= (float)(int)check_distance )
          {
            v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            ret = DungeonScene::activateSlipRevivePoint(v19, *(_DWORD *)(v3 + 48), 0);
            proto::DungeonSlipRevivePointActivateRsp::set_slip_revive_point_id(rsp_0, *(_DWORD *)(v3 + 48));
            v6 = ret;
          }
          else
          {
            v6 = 520;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
      }
      std::shared_ptr<data::DungeonSlipRevivePoint>::~shared_ptr((std::shared_ptr<data::DungeonSlipRevivePoint> *const)(v3 + 128));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v6;
  if ( v28 == (char *)v3 )
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

// Line 1335: range 0000000013114A80-00000000131151D6
int32_t __cdecl DungeonHandler::onDungeonInterruptChallengeReq(
        DungeonHandler *const this,
        const proto::DungeonInterruptChallengeReq *req,
        proto::DungeonInterruptChallengeRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  PlayerSceneComp *SceneComp; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // rbx
  Scene *v14; // rax
  uint32_t BlockGroupComp; // r14d
  common::milog::MiLogStream *v16; // r14
  Group *v17; // rax
  ChallengeComp *ChallengeComp; // r14
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // r14
  google::protobuf::uint32 v21; // edx
  google::protobuf::uint32 v22; // edx
  google::protobuf::uint32 v23; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  data::InterruptButtonType interrupt_type; // [rsp+24h] [rbp-BCh]
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 scene_ptr:1351 64 16 14 group_ptr:1358";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonInterruptChallengeReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.dungeon_config_mgr;
  v7 = proto::DungeonInterruptChallengeReq::challenge_id(req);
  dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(p_dungeon_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( dungeon_challenge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->interrupt_button_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_challenge_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->interrupt_button_type >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    interrupt_type = dungeon_challenge_config_ptr->interrupt_button_type;
    if ( interrupt_type == INTERRUPT_BUTTON_TYPE_NONE )
      goto LABEL_13;
    if ( interrupt_type != INTERRUPT_BUTTON_TYPE_HOST )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
LABEL_13:
      v12 = 1;
    else
LABEL_14:
      v12 = 0;
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonInterruptChallengeReq",
        1347);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v29,
              (const char (*)[33])"interrupt_type is invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonInterruptChallengeReq",
          1354);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v29, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v10 = -1;
      }
      else
      {
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v14);
        proto::DungeonInterruptChallengeReq::group_id(req);
        SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v3 + 64), BlockGroupComp);
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonInterruptChallengeReq",
            1361);
          v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])off_24F38E40);
          val = proto::DungeonInterruptChallengeReq::group_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          common::milog::MiLogStream::~MiLogStream(&v29);
          v10 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          ChallengeComp = Group::getChallengeComp(v17);
          v19 = proto::DungeonInterruptChallengeReq::challenge_index(req);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( (unsigned int)ChallengeComp::finishChallengeByClient(ChallengeComp, this->player_, v19) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/dungeon_handler.cpp",
              "onDungeonInterruptChallengeReq",
              1367);
            v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v29,
                    (const char (*)[50])"finishChallengeByClient failed, challenge index: ");
            val = proto::DungeonInterruptChallengeReq::challenge_index(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            common::milog::MiLogStream::~MiLogStream(&v29);
            v10 = -1;
          }
          else
          {
            v21 = proto::DungeonInterruptChallengeReq::challenge_id(req);
            proto::DungeonInterruptChallengeRsp::set_challenge_id(rsp_0, v21);
            v22 = proto::DungeonInterruptChallengeReq::challenge_index(req);
            proto::DungeonInterruptChallengeRsp::set_challenge_index(rsp_0, v22);
            v23 = proto::DungeonInterruptChallengeReq::group_id(req);
            proto::DungeonInterruptChallengeRsp::set_group_id(rsp_0, v23);
            v10 = 0;
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonInterruptChallengeReq",
      1339);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])"challenge_id:");
    val = proto::DungeonInterruptChallengeReq::challenge_id(req);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = -1;
  }
  result = v10;
  if ( v30 == (char *)v3 )
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

// Line 1379: range 00000000131151D8-0000000013115460
int32_t __cdecl DungeonHandler::onInteractDailyDungeonInfoNotify(
        DungeonHandler *const this,
        const proto::InteractDailyDungeonInfoNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Scene *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1380";
  *(_QWORD *)(v2 + 16) = DungeonHandler::onInteractDailyDungeonInfoNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onInteractDailyDungeonInfoNotify",
      1383);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( Uid == Scene::getOwnerUid((const Scene *const)v8) )
    {
      v9 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Scene::clientInteractsDailyDungeonInfo(v9);
    }
    v6 = 0;
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  result = v6;
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

// Line 1395: range 0000000013115462-0000000013115AFB
int32_t __cdecl DungeonHandler::onDungeonRestartReq(
        DungeonHandler *const this,
        const proto::DungeonRestartReq *req,
        proto::DungeonRestartRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t OwnerUid; // r15d
  DungeonScene *v9; // rax
  DungeonSceneTeam *DungeonSceneTeam; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int v13; // r15d
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-11Ch]
  int32_t reta; // [rsp+24h] [rbp-11Ch]
  PlayerDungeonComp *dungeon_comp; // [rsp+28h] [rbp-118h]
  int32_t *ret_0; // [rsp+30h] [rbp-110h]
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+40h] [rbp-100h] BYREF
  EnterDungeonOption v20; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+A0h] [rbp-A0h] BYREF
  char v23[112]; // [rsp+D0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 dungeon_scene_ptr:1397";
  *(_QWORD *)(v4 + 16) = DungeonHandler::onDungeonRestartReq;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonRestartReq",
      1401);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v21,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v3 = -1;
    goto LABEL_30;
  }
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  OwnerUid = Scene::getOwnerUid((const Scene *const)v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid != Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonRestartReq",
      1406);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v21,
      (const char (*)[44])"guest can not send DungeonRestartReq, error");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v3 = -1;
    goto LABEL_30;
  }
  ret = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DAILY_RESTART);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonRestartReq",
      1412);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v21,
      (const char (*)[27])"checkRestartDungeon failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v3 = ret;
    goto LABEL_30;
  }
  v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(v9);
  if ( DungeonSceneTeam::isInMpMode(DungeonSceneTeam) )
  {
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( Scene::getPlayerCount((const Scene *const)v11) > 1 )
    {
      reta = PlayerDungeonComp::startRestartInviteFlow(dungeon_comp);
      if ( reta )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonRestartReq",
          1421);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v21,
          (const char (*)[30])"startRestartInviteFlow failed");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v3 = reta;
        goto LABEL_30;
      }
      goto LABEL_29;
    }
  }
  memset(&v20, 0, sizeof(v20));
  EnterDungeonOption::EnterDungeonOption(&v20);
  memset(&level_config_id_map, 0, sizeof(level_config_id_map));
  std::map<unsigned int,unsigned int>::map(&level_config_id_map);
  PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v20);
  std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
  ret_0 = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
  std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret_0 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonRestartReq",
      1430);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v21, (const char (*)[22])"restartDungeon failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v3 = *ret_0;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
  if ( v13 == 1 )
LABEL_29:
    v3 = 0;
LABEL_30:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 32));
  result = v3;
  if ( v23 == (char *)v4 )
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

// Line 1438: range 0000000013115AFC-000000001311603B
int32_t __cdecl DungeonHandler::onDungeonRestartInviteReplyReq(
        DungeonHandler *const this,
        const proto::DungeonRestartInviteReplyReq *req,
        proto::DungeonRestartInviteReplyRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool is_accept; // dl
  int32_t restarted; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerDungeonComp *DungeonComp; // r15
  bool v12; // r14
  uint32_t v13; // eax
  int32_t result; // eax
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 14 world_ptr:1440 64 16 22 dungeon_scene_ptr:1447 96 16 21 owner_player_ptr:1454";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonRestartInviteReplyReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  is_accept = proto::DungeonRestartInviteReplyReq::is_accept(req);
  proto::DungeonRestartInviteReplyRsp::set_is_accept(rsp_0, is_accept);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonRestartInviteReplyReq",
      1443);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v16, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    restarted = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 64));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/dungeon_handler.cpp",
        "onDungeonRestartInviteReplyReq",
        1450);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
      restarted = -1;
    }
    else
    {
      std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Scene::getOwnPlayer((const Scene *const)(v3 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/dungeon_handler.cpp",
          "onDungeonRestartInviteReplyReq",
          1457);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"getOwnPlayer fails");
        common::milog::MiLogStream::~MiLogStream(&v16);
        restarted = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( Uid == Player::getUid(v9) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/dungeon_handler.cpp",
            "onDungeonRestartInviteReplyReq",
            1463);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v16,
            (const char (*)[22])"guest is world owner!");
          common::milog::MiLogStream::~MiLogStream(&v16);
          restarted = -1;
        }
        else
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          DungeonComp = Player::getDungeonComp(v10);
          v12 = proto::DungeonRestartInviteReplyReq::is_accept(req);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getUid(this->player_);
          restarted = PlayerDungeonComp::onRestartGuestReply(DungeonComp, v13, v12);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = restarted;
  if ( v17 == (char *)v3 )
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

// Line 1471: range 000000001311603C-00000000131164EE
int32_t __cdecl DungeonHandler::onDungeonCandidateTeamSetChangingAvatarReq(
        DungeonHandler *const this,
        const proto::DungeonCandidateTeamSetChangingAvatarReq *req,
        proto::DungeonCandidateTeamSetChangingAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  PlayerWorld *v8; // rax
  bool is_changing_avatar; // r14
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  DungeonCandidateTeam *dungeon_team; // [rsp+28h] [rbp-A8h]
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 cur_world_ptr:1472";
  *(_QWORD *)(v3 + 16) = DungeonHandler::onDungeonCandidateTeamSetChangingAvatarReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetChangingAvatarReq",
      1475);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
    goto LABEL_21;
  }
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  dungeon_team = PlayerWorld::getDungeonCandidateTeam(v8);
  if ( !DungeonCandidateTeam::isVaild(dungeon_team) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetChangingAvatarReq",
      1481);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v16,
           (const char (*)[34])"dungeon_team invaild palyer_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  is_changing_avatar = proto::DungeonCandidateTeamSetChangingAvatarReq::is_changing_avatar(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&p_player_ptr);
  v10 = DungeonCandidateTeam::setPlayerIsChangingAvatar(dungeon_team, &p_player_ptr, is_changing_avatar) != 0;
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( v10 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/dungeon_handler.cpp",
      "onDungeonCandidateTeamSetChangingAvatarReq",
      1486);
    v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v16, (const char (*)[42])off_24F39260);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
    v7 = 0;
  }
LABEL_21:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v7;
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
