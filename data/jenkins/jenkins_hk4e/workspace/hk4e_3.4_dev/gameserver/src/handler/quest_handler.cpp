// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/quest_handler.cpp

// Line 34: range 0000000015C7BDB6-0000000015C7D334
int32_t __cdecl QuestHandler::addPacketFuncToMap(QuestHandler *const this, PacketFuncMap *process_packet_func_map)
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
  QuestHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-84h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v25; // [rsp+20h] [rbp-80h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  int (*__f[2])(QuestHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+30h] [rbp-70h] BYREF
  std::_Bind_helper<false,int (QuestHandler::*)(std::shared_ptr<common::minet::Packet>),QuestHandler*,const std::_Placeholder<1>&>::type v28; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-40h] BYREF

  __x = 421;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v25, &__y) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/quest_handler.cpp",
      "addPacketFuncToMap",
      35);
    common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 421LL);
    common::milog::MiLogStream::~MiLogStream(&v29);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 421;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 490;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v25, &__y) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/quest_handler.cpp",
        "addPacketFuncToMap",
        36);
      common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 490LL);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 490;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 499;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v25, &__y) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/quest_handler.cpp",
          "addPacketFuncToMap",
          37);
        common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 499LL);
        common::milog::MiLogStream::~MiLogStream(&v29);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 499;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 475;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v25, &__y) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/quest_handler.cpp",
            "addPacketFuncToMap",
            38);
          common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 475LL);
          common::milog::MiLogStream::~MiLogStream(&v29);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 475;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 447;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v25, &__y) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/quest_handler.cpp",
              "addPacketFuncToMap",
              39);
            common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 447LL);
            common::milog::MiLogStream::~MiLogStream(&v29);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 447;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 422;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v25, &__y) )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/quest_handler.cpp",
                "addPacketFuncToMap",
                40);
              common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 422LL);
              common::milog::MiLogStream::~MiLogStream(&v29);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 422;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 493;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v25, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v29,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/quest_handler.cpp",
                  "addPacketFuncToMap",
                  41);
                common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 493LL);
                common::milog::MiLogStream::~MiLogStream(&v29);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 493;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 488;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v25, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v29,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/quest_handler.cpp",
                    "addPacketFuncToMap",
                    42);
                  common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 488LL);
                  common::milog::MiLogStream::~MiLogStream(&v29);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 488;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 463;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v25, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v29,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/quest_handler.cpp",
                      "addPacketFuncToMap",
                      43);
                    common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 463LL);
                    common::milog::MiLogStream::~MiLogStream(&v29);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 463;
                    v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                      v11,
                      (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 450;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v25, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v29,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/quest_handler.cpp",
                        "addPacketFuncToMap",
                        44);
                      common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 450LL);
                      common::milog::MiLogStream::~MiLogStream(&v29);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 450;
                      v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                        v12,
                        (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 474;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_map,
                                      &__x)._M_node;
                      v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                      if ( std::operator!=(&v25, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v29,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/quest_handler.cpp",
                          "addPacketFuncToMap",
                          45);
                        common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 474LL);
                        common::milog::MiLogStream::~MiLogStream(&v29);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                        __x = 474;
                        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_map,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                          v13,
                          (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 446;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_map,
                                        &__x)._M_node;
                        v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                        if ( std::operator!=(&v25, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v29,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/quest_handler.cpp",
                            "addPacketFuncToMap",
                            46);
                          common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 446LL);
                          common::milog::MiLogStream::~MiLogStream(&v29);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                          __x = 446;
                          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_map,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                            v14,
                            (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                          __x = 449;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_map,
                                          &__x)._M_node;
                          v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                          if ( std::operator!=(&v25, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v29,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/quest_handler.cpp",
                              "addPacketFuncToMap",
                              47);
                            common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 449LL);
                            common::milog::MiLogStream::~MiLogStream(&v29);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                            __x = 449;
                            v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_map,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}>(
                              v15,
                              (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                            __x = 467;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_map,
                                            &__x)._M_node;
                            v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                            if ( std::operator!=(&v25, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v29,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/quest_handler.cpp",
                                "addPacketFuncToMap",
                                48);
                              common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 467LL);
                              common::milog::MiLogStream::~MiLogStream(&v29);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                              __x = 467;
                              v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_map,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}>(
                                v16,
                                (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                              __x = 470;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_map,
                                              &__x)._M_node;
                              v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                              if ( std::operator!=(&v25, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v29,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/quest_handler.cpp",
                                  "addPacketFuncToMap",
                                  49);
                                common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 470LL);
                                common::milog::MiLogStream::~MiLogStream(&v29);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                __x = 470;
                                v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_map,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}>(
                                  v17,
                                  (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                __x = 419;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_map,
                                                &__x)._M_node;
                                v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                if ( std::operator!=(&v25, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v29,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/quest_handler.cpp",
                                    "addPacketFuncToMap",
                                    50);
                                  common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 419LL);
                                  common::milog::MiLogStream::~MiLogStream(&v29);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                  __x = 419;
                                  v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_map,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}>(
                                    v18,
                                    (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 429;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_map,
                                                  &__x)._M_node;
                                  v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                  if ( std::operator!=(&v25, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v29,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/quest_handler.cpp",
                                      "addPacketFuncToMap",
                                      51);
                                    common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 429LL);
                                    common::milog::MiLogStream::~MiLogStream(&v29);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                    __x = 429;
                                    v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_map,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}>(
                                      v19,
                                      (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                    __x = 500;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_map,
                                                    &__x)._M_node;
                                    v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                    if ( std::operator!=(&v25, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v29,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/quest_handler.cpp",
                                        "addPacketFuncToMap",
                                        52);
                                      common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 500LL);
                                      common::milog::MiLogStream::~MiLogStream(&v29);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                      __x = 500;
                                      v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_map,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}>(
                                        v20,
                                        (QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                      __x = 487;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_map,
                                                      &__x)._M_node;
                                      v25._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                                      if ( std::operator!=(&v25, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v29,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/quest_handler.cpp",
                                          "addPacketFuncToMap",
                                          53);
                                        common::milog::MiLogStream::operator()(&v29, off_259BE5C0, 487LL);
                                        common::milog::MiLogStream::~MiLogStream(&v29);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                                        __f[0] = (int (*)(QuestHandler *, std::shared_ptr<common::minet::Packet>))QuestHandler::onQuestRenameAvatarReq;
                                        __f[1] = 0LL;
                                        std::bind<int (QuestHandler::*)(std::shared_ptr<common::minet::Packet>),QuestHandler*,std::_Placeholder<1> const&>(
                                          &v28,
                                          __f,
                                          (QuestHandler **)&__y,
                                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                                          v21,
                                          v22);
                                        __x = 487;
                                        v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_map,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (QuestHandler::*)(std::shared_ptr<common::minet::Packet>) ()(QuestHandler*,std::_Placeholder<1>)>>(
                                          v23,
                                          &v28);
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
};

// Line 35: range 0000000015C7859A-0000000015C788B6
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::AddQuestContentProgressReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AddQuestContentProgressRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AddQuestContentProgressRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:35 64 16 10 rsp_ptr:35";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddQuestContentProgressReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddQuestContentProgressReq const>(
         (const std::shared_ptr<const proto::AddQuestContentProgressReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AddQuestContentProgressReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddQuestContentProgressReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AddQuestContentProgressRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AddQuestContentProgressRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AddQuestContentProgressRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AddQuestContentProgressRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AddQuestContentProgressReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddQuestContentProgressReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onAddQuestContentProgressReq(this, v8, rsp_0);
    proto::AddQuestContentProgressRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AddQuestContentProgressRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AddQuestContentProgressRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AddQuestContentProgressRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AddQuestContentProgressRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AddQuestContentProgressRsp>::~shared_ptr((std::shared_ptr<proto::AddQuestContentProgressRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AddQuestContentProgressReq const>::~shared_ptr((std::shared_ptr<const proto::AddQuestContentProgressReq> *const)(v2 + 32));
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

// Line 36: range 0000000015C788B8-0000000015C78BD4
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::GetQuestTalkHistoryReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetQuestTalkHistoryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetQuestTalkHistoryRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:36 64 16 10 rsp_ptr:36";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetQuestTalkHistoryReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetQuestTalkHistoryReq const>(
         (const std::shared_ptr<const proto::GetQuestTalkHistoryReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      36);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetQuestTalkHistoryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetQuestTalkHistoryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetQuestTalkHistoryRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetQuestTalkHistoryRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetQuestTalkHistoryRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetQuestTalkHistoryRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetQuestTalkHistoryReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetQuestTalkHistoryReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onGetQuestTalkHistoryReq(this, v8, rsp_0);
    proto::GetQuestTalkHistoryRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetQuestTalkHistoryRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetQuestTalkHistoryRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetQuestTalkHistoryRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetQuestTalkHistoryRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetQuestTalkHistoryRsp>::~shared_ptr((std::shared_ptr<proto::GetQuestTalkHistoryRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetQuestTalkHistoryReq const>::~shared_ptr((std::shared_ptr<const proto::GetQuestTalkHistoryReq> *const)(v2 + 32));
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

// Line 37: range 0000000015C78BD6-0000000015C78EF2
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::QuestCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuestCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestCreateEntityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:37 64 16 10 rsp_ptr:37";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuestCreateEntityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuestCreateEntityReq const>(
         (const std::shared_ptr<const proto::QuestCreateEntityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      37);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuestCreateEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuestCreateEntityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuestCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestCreateEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuestCreateEntityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuestCreateEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestCreateEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onQuestCreateEntityReq(this, v8, rsp_0);
    proto::QuestCreateEntityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuestCreateEntityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuestCreateEntityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuestCreateEntityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuestCreateEntityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuestCreateEntityRsp>::~shared_ptr((std::shared_ptr<proto::QuestCreateEntityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuestCreateEntityReq const>::~shared_ptr((std::shared_ptr<const proto::QuestCreateEntityReq> *const)(v2 + 32));
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

// Line 38: range 0000000015C78EF4-0000000015C79210
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::QuestDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuestDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestDestroyEntityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:38 64 16 10 rsp_ptr:38";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuestDestroyEntityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuestDestroyEntityReq const>(
         (const std::shared_ptr<const proto::QuestDestroyEntityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      38);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuestDestroyEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuestDestroyEntityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuestDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestDestroyEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuestDestroyEntityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuestDestroyEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestDestroyEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onQuestDestroyEntityReq(this, v8, rsp_0);
    proto::QuestDestroyEntityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuestDestroyEntityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuestDestroyEntityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuestDestroyEntityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuestDestroyEntityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuestDestroyEntityRsp>::~shared_ptr((std::shared_ptr<proto::QuestDestroyEntityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuestDestroyEntityReq const>::~shared_ptr((std::shared_ptr<const proto::QuestDestroyEntityReq> *const)(v2 + 32));
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

// Line 39: range 0000000015C79212-0000000015C7952E
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::QuestUpdateQuestVarReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuestUpdateQuestVarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestUpdateQuestVarRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:39 64 16 10 rsp_ptr:39";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuestUpdateQuestVarReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuestUpdateQuestVarReq const>(
         (const std::shared_ptr<const proto::QuestUpdateQuestVarReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      39);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuestUpdateQuestVarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestUpdateQuestVarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuestUpdateQuestVarRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuestUpdateQuestVarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestUpdateQuestVarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuestUpdateQuestVarRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuestUpdateQuestVarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestUpdateQuestVarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onQuestUpdateQuestVarReq(this, v8, rsp_0);
    proto::QuestUpdateQuestVarRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuestUpdateQuestVarRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuestUpdateQuestVarRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuestUpdateQuestVarRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuestUpdateQuestVarRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuestUpdateQuestVarRsp>::~shared_ptr((std::shared_ptr<proto::QuestUpdateQuestVarRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuestUpdateQuestVarReq const>::~shared_ptr((std::shared_ptr<const proto::QuestUpdateQuestVarReq> *const)(v2 + 32));
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

// Line 40: range 0000000015C79530-0000000015C7984C
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::QuestDestroyNpcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuestDestroyNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestDestroyNpcRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:40 64 16 10 rsp_ptr:40";
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuestDestroyNpcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuestDestroyNpcReq const>(
         (const std::shared_ptr<const proto::QuestDestroyNpcReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      40);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuestDestroyNpcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestDestroyNpcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuestDestroyNpcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuestDestroyNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestDestroyNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuestDestroyNpcRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuestDestroyNpcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestDestroyNpcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onQuestDestroyNpcReq(this, v8, rsp_0);
    proto::QuestDestroyNpcRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuestDestroyNpcRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuestDestroyNpcRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuestDestroyNpcRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuestDestroyNpcRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuestDestroyNpcRsp>::~shared_ptr((std::shared_ptr<proto::QuestDestroyNpcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuestDestroyNpcReq const>::~shared_ptr((std::shared_ptr<const proto::QuestDestroyNpcReq> *const)(v2 + 32));
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

// Line 41: range 0000000015C7984E-0000000015C79B6A
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::BargainOfferPriceReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BargainOfferPriceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BargainOfferPriceRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BargainOfferPriceReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BargainOfferPriceReq const>(
         (const std::shared_ptr<const proto::BargainOfferPriceReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      41);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BargainOfferPriceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BargainOfferPriceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BargainOfferPriceRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BargainOfferPriceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BargainOfferPriceRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BargainOfferPriceRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BargainOfferPriceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BargainOfferPriceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onBargainOfferPriceReq(this, v8, rsp_0);
    proto::BargainOfferPriceRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BargainOfferPriceRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BargainOfferPriceRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BargainOfferPriceRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BargainOfferPriceRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BargainOfferPriceRsp>::~shared_ptr((std::shared_ptr<proto::BargainOfferPriceRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BargainOfferPriceReq const>::~shared_ptr((std::shared_ptr<const proto::BargainOfferPriceReq> *const)(v2 + 32));
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

// Line 42: range 0000000015C79B6C-0000000015C79E88
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::GetBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetBargainDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetBargainDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetBargainDataReq const>(
         (const std::shared_ptr<const proto::GetBargainDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetBargainDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetBargainDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetBargainDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetBargainDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onGetBargainDataReq(this, v8, rsp_0);
    proto::GetBargainDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetBargainDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetBargainDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetBargainDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetBargainDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetBargainDataRsp>::~shared_ptr((std::shared_ptr<proto::GetBargainDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetBargainDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetBargainDataReq> *const)(v2 + 32));
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

// Line 43: range 0000000015C79E8A-0000000015C7A1A6
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::GetAllActivatedBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetAllActivatedBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetAllActivatedBargainDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetAllActivatedBargainDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetAllActivatedBargainDataReq const>(
         (const std::shared_ptr<const proto::GetAllActivatedBargainDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      43);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetAllActivatedBargainDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllActivatedBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetAllActivatedBargainDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetAllActivatedBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAllActivatedBargainDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetAllActivatedBargainDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetAllActivatedBargainDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetAllActivatedBargainDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onGetAllActivatedBargainDataReq(this, v8, rsp_0);
    proto::GetAllActivatedBargainDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetAllActivatedBargainDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetAllActivatedBargainDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetAllActivatedBargainDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetAllActivatedBargainDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetAllActivatedBargainDataRsp>::~shared_ptr((std::shared_ptr<proto::GetAllActivatedBargainDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetAllActivatedBargainDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetAllActivatedBargainDataReq> *const)(v2 + 32));
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

// Line 44: range 0000000015C7A1A8-0000000015C7A4C4
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::QuestTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuestTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestTransmitRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuestTransmitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuestTransmitReq const>(
         (const std::shared_ptr<const proto::QuestTransmitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      44);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuestTransmitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuestTransmitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuestTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestTransmitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuestTransmitRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuestTransmitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestTransmitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onQuestTransmitReq(this, v8, rsp_0);
    proto::QuestTransmitRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuestTransmitRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuestTransmitRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuestTransmitRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuestTransmitRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuestTransmitRsp>::~shared_ptr((std::shared_ptr<proto::QuestTransmitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuestTransmitReq const>::~shared_ptr((std::shared_ptr<const proto::QuestTransmitReq> *const)(v2 + 32));
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

// Line 45: range 0000000015C7A4C6-0000000015C7A7E2
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::PersonalLineAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PersonalLineAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PersonalLineAllDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PersonalLineAllDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PersonalLineAllDataReq const>(
         (const std::shared_ptr<const proto::PersonalLineAllDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PersonalLineAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersonalLineAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PersonalLineAllDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PersonalLineAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PersonalLineAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PersonalLineAllDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PersonalLineAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PersonalLineAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onPersonalLineAllDataReq(this, v8, rsp_0);
    proto::PersonalLineAllDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PersonalLineAllDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PersonalLineAllDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PersonalLineAllDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PersonalLineAllDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PersonalLineAllDataRsp>::~shared_ptr((std::shared_ptr<proto::PersonalLineAllDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PersonalLineAllDataReq const>::~shared_ptr((std::shared_ptr<const proto::PersonalLineAllDataReq> *const)(v2 + 32));
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

// Line 46: range 0000000015C7A7E4-0000000015C7AB00
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::RedeemLegendaryKeyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::RedeemLegendaryKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::RedeemLegendaryKeyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RedeemLegendaryKeyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RedeemLegendaryKeyReq const>(
         (const std::shared_ptr<const proto::RedeemLegendaryKeyReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      46);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::RedeemLegendaryKeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RedeemLegendaryKeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RedeemLegendaryKeyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RedeemLegendaryKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RedeemLegendaryKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RedeemLegendaryKeyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::RedeemLegendaryKeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RedeemLegendaryKeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onRedeemLegendaryKeyReq(this, v8, rsp_0);
    proto::RedeemLegendaryKeyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::RedeemLegendaryKeyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::RedeemLegendaryKeyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::RedeemLegendaryKeyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::RedeemLegendaryKeyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::RedeemLegendaryKeyRsp>::~shared_ptr((std::shared_ptr<proto::RedeemLegendaryKeyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RedeemLegendaryKeyReq const>::~shared_ptr((std::shared_ptr<const proto::RedeemLegendaryKeyReq> *const)(v2 + 32));
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

// Line 47: range 0000000015C7AB02-0000000015C7AE1E
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::UnlockPersonalLineReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UnlockPersonalLineRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UnlockPersonalLineRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#13}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnlockPersonalLineReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UnlockPersonalLineReq const>(
         (const std::shared_ptr<const proto::UnlockPersonalLineReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      47);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UnlockPersonalLineReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockPersonalLineReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UnlockPersonalLineRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UnlockPersonalLineRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UnlockPersonalLineRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UnlockPersonalLineRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UnlockPersonalLineReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockPersonalLineReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onUnlockPersonalLineReq(this, v8, rsp_0);
    proto::UnlockPersonalLineRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UnlockPersonalLineRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UnlockPersonalLineRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UnlockPersonalLineRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UnlockPersonalLineRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UnlockPersonalLineRsp>::~shared_ptr((std::shared_ptr<proto::UnlockPersonalLineRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UnlockPersonalLineReq const>::~shared_ptr((std::shared_ptr<const proto::UnlockPersonalLineReq> *const)(v2 + 32));
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

// Line 48: range 0000000015C7AE20-0000000015C7B13C
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::GetQuestLackingResourceReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetQuestLackingResourceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetQuestLackingResourceRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#14}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetQuestLackingResourceReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetQuestLackingResourceReq const>(
         (const std::shared_ptr<const proto::GetQuestLackingResourceReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      48);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetQuestLackingResourceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetQuestLackingResourceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetQuestLackingResourceRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetQuestLackingResourceRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetQuestLackingResourceRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetQuestLackingResourceRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetQuestLackingResourceReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetQuestLackingResourceReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onGetQuestLackingResourceReq(this, v8, rsp_0);
    proto::GetQuestLackingResourceRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetQuestLackingResourceRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetQuestLackingResourceRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetQuestLackingResourceRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetQuestLackingResourceRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetQuestLackingResourceRsp>::~shared_ptr((std::shared_ptr<proto::GetQuestLackingResourceRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetQuestLackingResourceReq const>::~shared_ptr((std::shared_ptr<const proto::GetQuestLackingResourceReq> *const)(v2 + 32));
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

// Line 49: range 0000000015C7B13E-0000000015C7B45A
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::GetParentQuestVideoKeyReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetParentQuestVideoKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetParentQuestVideoKeyRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#15}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetParentQuestVideoKeyReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetParentQuestVideoKeyReq const>(
         (const std::shared_ptr<const proto::GetParentQuestVideoKeyReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      49);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetParentQuestVideoKeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetParentQuestVideoKeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetParentQuestVideoKeyRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetParentQuestVideoKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetParentQuestVideoKeyRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetParentQuestVideoKeyRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetParentQuestVideoKeyReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetParentQuestVideoKeyReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onGetParentQuestVideoKeyReq(this, v8, rsp_0);
    proto::GetParentQuestVideoKeyRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetParentQuestVideoKeyRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetParentQuestVideoKeyRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetParentQuestVideoKeyRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetParentQuestVideoKeyRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetParentQuestVideoKeyRsp>::~shared_ptr((std::shared_ptr<proto::GetParentQuestVideoKeyRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetParentQuestVideoKeyReq const>::~shared_ptr((std::shared_ptr<const proto::GetParentQuestVideoKeyReq> *const)(v2 + 32));
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

// Line 50: range 0000000015C7B45C-0000000015C7B778
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::InterpretInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::InterpretInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::InterpretInferenceWordRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#16}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InterpretInferenceWordReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InterpretInferenceWordReq const>(
         (const std::shared_ptr<const proto::InterpretInferenceWordReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      50);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::InterpretInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InterpretInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::InterpretInferenceWordRsp>();
    rsp_0 = std::__shared_ptr_access<proto::InterpretInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::InterpretInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::InterpretInferenceWordRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::InterpretInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InterpretInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onInterpretInferenceWordReq(this, v8, rsp_0);
    proto::InterpretInferenceWordRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::InterpretInferenceWordRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::InterpretInferenceWordRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::InterpretInferenceWordRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::InterpretInferenceWordRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::InterpretInferenceWordRsp>::~shared_ptr((std::shared_ptr<proto::InterpretInferenceWordRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::InterpretInferenceWordReq const>::~shared_ptr((std::shared_ptr<const proto::InterpretInferenceWordReq> *const)(v2 + 32));
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

// Line 51: range 0000000015C7B77A-0000000015C7BA96
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::AssociateInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AssociateInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AssociateInferenceWordRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#17}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AssociateInferenceWordReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AssociateInferenceWordReq const>(
         (const std::shared_ptr<const proto::AssociateInferenceWordReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      51);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AssociateInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AssociateInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AssociateInferenceWordRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AssociateInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AssociateInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AssociateInferenceWordRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AssociateInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AssociateInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onAssociateInferenceWordReq(this, v8, rsp_0);
    proto::AssociateInferenceWordRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AssociateInferenceWordRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AssociateInferenceWordRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AssociateInferenceWordRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AssociateInferenceWordRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AssociateInferenceWordRsp>::~shared_ptr((std::shared_ptr<proto::AssociateInferenceWordRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AssociateInferenceWordReq const>::~shared_ptr((std::shared_ptr<const proto::AssociateInferenceWordReq> *const)(v2 + 32));
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

// Line 52: range 0000000015C7BA98-0000000015C7BDB4
int __cdecl QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator()(
        const QuestHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  QuestHandler *this; // r14
  std::__shared_ptr_access<const proto::SubmitInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SubmitInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SubmitInferenceWordRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = QuestHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#18}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SubmitInferenceWordReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SubmitInferenceWordReq const>(
         (const std::shared_ptr<const proto::SubmitInferenceWordReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "operator()",
      52);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SubmitInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SubmitInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SubmitInferenceWordRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SubmitInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SubmitInferenceWordRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SubmitInferenceWordRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SubmitInferenceWordReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SubmitInferenceWordReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = QuestHandler::onSubmitInferenceWordReq(this, v8, rsp_0);
    proto::SubmitInferenceWordRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SubmitInferenceWordRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SubmitInferenceWordRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SubmitInferenceWordRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SubmitInferenceWordRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SubmitInferenceWordRsp>::~shared_ptr((std::shared_ptr<proto::SubmitInferenceWordRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SubmitInferenceWordReq const>::~shared_ptr((std::shared_ptr<const proto::SubmitInferenceWordReq> *const)(v2 + 32));
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

// Line 58: range 0000000015C7D336-0000000015C7D591
int32_t __cdecl QuestHandler::onAddQuestContentProgressReq(
        QuestHandler *const this,
        const proto::AddQuestContentProgressReq *req,
        proto::AddQuestContentProgressRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  PlayerQuestComp *QuestComp; // rax
  google::protobuf::uint32 param; // [rsp+28h] [rbp-88h]
  google::protobuf::uint32 add_progress; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 content_type:59";
  *(_QWORD *)(v3 + 16) = QuestHandler::onAddQuestContentProgressReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::AddQuestContentProgressReq::content_type(req);
  if ( !isQuestContentProcessedByClient(*(data::QuestContentType *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onAddQuestContentProgressReq",
      62);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v13,
           (const char (*)[49])"client try to add server progress, content_type:");
    v7 = common::milog::MiLogStream::operator<<<data::QuestContentType,(data::QuestContentType*)0>(
           v6,
           (const data::QuestContentType *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
  }
  else
  {
    param = proto::AddQuestContentProgressReq::param(req);
    add_progress = proto::AddQuestContentProgressReq::add_progress(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    PlayerQuestComp::updateQuestContentProgress(
      QuestComp,
      *(data::QuestContentType *)(v3 + 32),
      param,
      UPDATE_ADD,
      add_progress);
    proto::AddQuestContentProgressRsp::set_content_type(rsp_0, *(_DWORD *)(v3 + 32));
    result = 0;
  }
  if ( v14 == (char *)v3 )
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

// Line 73: range 0000000015C7D592-0000000015C7D81B
int32_t __cdecl QuestHandler::onGetQuestTalkHistoryReq(
        QuestHandler *const this,
        const proto::GetQuestTalkHistoryReq *req,
        proto::GetQuestTalkHistoryRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerQuestComp *QuestComp; // rax
  google::protobuf::uint32 *v7; // rdx
  int32_t result; // eax
  uint32_t parent_quest_id; // [rsp+2Ch] [rbp-B4h]
  int32_t ret; // [rsp+30h] [rbp-B0h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-98h]
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 19 history_talk_vec:77";
  *(_QWORD *)(v3 + 16) = QuestHandler::onGetQuestTalkHistoryReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  parent_quest_id = proto::GetQuestTalkHistoryReq::parent_quest_id(req);
  proto::GetQuestTalkHistoryRsp::set_parent_quest_id(rsp_0, parent_quest_id);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  ret = PlayerQuestComp::getQuestTalkHistory(QuestComp, parent_quest_id, (std::vector<unsigned int> *)(v3 + 32));
  __for_range = (std::vector<unsigned int> *)(v3 + 32);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 32))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 32))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GetQuestTalkHistoryRsp::add_talk_id_list(rsp_0, *v7);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = ret;
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

// Line 87: range 0000000015C7D81C-0000000015C7DD1D
int32_t __cdecl QuestHandler::onQuestCreateEntityReq(
        QuestHandler *const this,
        const proto::QuestCreateEntityReq *req,
        proto::QuestCreateEntityRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const proto::CreateEntityInfo *v6; // rax
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  bool is_rewind; // dl
  PlayerQuestComp *QuestComp; // r14
  uint32_t v11; // eax
  int32_t v12; // r14d
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Entity *v18; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t EntityId; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  proto::CreateEntityInfo *proto_entity; // [rsp+30h] [rbp-E0h]
  PlayerSceneComp *scene_comp; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 18 parent_quest_id:94 48 4 11 quest_id:95 64 16 13 scene_ptr:103 96 16 14 entity_ptr:110";
  *(_QWORD *)(v3 + 16) = QuestHandler::onQuestCreateEntityReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  proto_entity = proto::QuestCreateEntityRsp::mutable_entity(rsp_0);
  v6 = proto::QuestCreateEntityReq::entity(req);
  proto::CreateEntityInfo::CopyFrom(proto_entity, v6);
  v7 = proto::QuestCreateEntityReq::quest_id(req);
  proto::QuestCreateEntityRsp::set_quest_id(rsp_0, v7);
  v8 = proto::QuestCreateEntityReq::parent_quest_id(req);
  proto::QuestCreateEntityRsp::set_parent_quest_id(rsp_0, v8);
  is_rewind = proto::QuestCreateEntityReq::is_rewind(req);
  proto::QuestCreateEntityRsp::set_is_rewind(rsp_0, is_rewind);
  *(_DWORD *)(v3 + 32) = proto::QuestCreateEntityReq::parent_quest_id(req);
  *(_DWORD *)(v3 + 48) = proto::QuestCreateEntityReq::quest_id(req);
  if ( proto::QuestCreateEntityReq::quest_id(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    v11 = proto::QuestCreateEntityReq::quest_id(req);
    *(_DWORD *)(v3 + 32) = PlayerQuestComp::findParentQuestId(QuestComp, v11);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_comp = Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onQuestCreateEntityReq",
      106);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v26, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v12 = -1;
  }
  else
  {
    PlayerSceneComp::createEntityFromClient(
      (PlayerSceneComp *const)(v3 + 96),
      (const proto::CreateEntityInfo *)scene_comp,
      (uint32_t)proto_entity,
      *(_DWORD *)(v3 + 48));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/quest_handler.cpp",
        "onQuestCreateEntityReq",
        114);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v26,
              (const char (*)[26])"createEntity failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" quest_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v16,
              (const char (*)[18])" parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v12 = -1;
    }
    else
    {
      v18 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      PlayerSceneComp::addDisconnectDestroyEntity(scene_comp, v18);
      v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      EntityId = Entity::getEntityId(v19);
      proto::QuestCreateEntityRsp::set_entity_id(rsp_0, EntityId);
      v12 = 0;
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v12;
  if ( v27 == (char *)v3 )
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

// Line 124: range 0000000015C7DD1E-0000000015C7DEA1
int32_t __cdecl QuestHandler::onQuestDestroyEntityReq(
        QuestHandler *const this,
        const proto::QuestDestroyEntityReq *req,
        proto::QuestDestroyEntityRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v6; // r12d
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  v3 = proto::QuestDestroyEntityReq::entity_id(req);
  proto::QuestDestroyEntityRsp::set_entity_id(rsp_0, v3);
  v4 = proto::QuestDestroyEntityReq::scene_id(req);
  proto::QuestDestroyEntityRsp::set_scene_id(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v6 = proto::QuestDestroyEntityReq::entity_id(req);
  v7 = proto::QuestDestroyEntityReq::scene_id(req);
  if ( !PlayerSceneComp::destroyEntityFromClient(SceneComp, v7, v6) )
    return 0;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/quest_handler.cpp",
    "onQuestDestroyEntityReq",
    130);
  v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v13,
         (const char (*)[27])"destroyEntity failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  return -1;
};

// Line 137: range 0000000015C7DEA2-0000000015C7E532
int32_t __cdecl QuestHandler::onQuestUpdateQuestVarReq(
        QuestHandler *const this,
        const proto::QuestUpdateQuestVarReq *req,
        proto::QuestUpdateQuestVarRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  std::remove_reference<const proto::QuestVarOp&>::type *v9; // rax
  PlayerQuestComp *QuestComp; // r14
  uint32_t v11; // eax
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rax
  int32_t updated; // r14d
  ParentQuest *v15; // rax
  uint32_t QuestVarSeq; // r14d
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r14
  ParentQuest *v18; // rax
  unsigned int v19; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // r14
  unsigned int v22; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rax
  Player *player; // r14
  PlayerQuestComp *v26; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::QuestVarOp>::const_iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::QuestVarOp>::const_iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  const google::protobuf::RepeatedPtrField<proto::QuestVarOp> *__for_range; // [rsp+30h] [rbp-140h]
  const proto::QuestVarOp *op; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-110h] BYREF
  char v35[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 19 parent_quest_id:146 64 16 20 parent_quest_ptr:151 96 16 6 ss:160 128 24 10 op_vec:141";
  *(_QWORD *)(v3 + 16) = QuestHandler::onQuestUpdateQuestVarReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  v6 = proto::QuestUpdateQuestVarReq::parent_quest_id(req);
  proto::QuestUpdateQuestVarRsp::set_parent_quest_id(rsp_0, v6);
  v7 = proto::QuestUpdateQuestVarReq::quest_id(req);
  proto::QuestUpdateQuestVarRsp::set_quest_id(rsp_0, v7);
  v8 = proto::QuestUpdateQuestVarReq::parent_quest_var_seq(req);
  proto::QuestUpdateQuestVarRsp::set_parent_quest_var_seq(rsp_0, v8);
  std::vector<proto::QuestVarOp>::vector((std::vector<proto::QuestVarOp> *const)(v3 + 128));
  __for_range = proto::QuestUpdateQuestVarReq::quest_var_op_list(req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::QuestVarOp>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::QuestVarOp>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::QuestVarOp const>::operator!=(&__for_begin, &__for_end) )
  {
    op = google::protobuf::internal::RepeatedPtrIterator<proto::QuestVarOp const>::operator*(&__for_begin);
    v9 = std::move<proto::QuestVarOp const&>(op);
    std::vector<proto::QuestVarOp>::emplace_back<proto::QuestVarOp const>(
      (std::vector<proto::QuestVarOp> *const)(v3 + 128),
      v9,
      v9);
    google::protobuf::internal::RepeatedPtrIterator<proto::QuestVarOp const>::operator++(&__for_begin);
  }
  *(_DWORD *)(v3 + 48) = proto::QuestUpdateQuestVarReq::parent_quest_id(req);
  if ( proto::QuestUpdateQuestVarReq::quest_id(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    v11 = proto::QuestUpdateQuestVarReq::quest_id(req);
    *(_DWORD *)(v3 + 48) = PlayerQuestComp::findParentQuestId(QuestComp, v11);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned int)Player::getQuestComp(this->player_);
  PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v3 + 64), v12);
  if ( std::operator==<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/quest_handler.cpp",
      "onQuestUpdateQuestVarReq",
      154);
    v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(&v34, (const char (*)[45])byte_259BE980);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    updated = -1;
  }
  else
  {
    v15 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    QuestVarSeq = ParentQuest::getQuestVarSeq(v15);
    if ( QuestVarSeq == proto::QuestUpdateQuestVarReq::parent_quest_var_seq(req) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v26 = Player::getQuestComp(this->player_);
      updated = PlayerQuestComp::updateQuestVarByClient(
                  v26,
                  *(_DWORD *)(v3 + 48),
                  (const std::vector<proto::QuestVarOp> *)(v3 + 128));
    }
    else
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
      v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96),
              &byte_259BE9E0);
      v18 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v19 = ParentQuest::getQuestVarSeq(v18);
      v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, v19);
      v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, ", client: ");
      v22 = proto::QuestUpdateQuestVarReq::parent_quest_var_seq(req);
      v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, v22);
      v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, " parent_quest_id:");
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, *(_DWORD *)(v3 + 48));
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/quest_handler.cpp",
        "onQuestUpdateQuestVarReq",
        163);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        (std::string *)&v34,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v33, (const std::string *)&v34);
      std::string::~string(&v34);
      common::milog::MiLogStream::~MiLogStream(&v33);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        (std::string *)&v34,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
      Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)&v34);
      std::string::~string(&v34);
      updated = -1;
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
    }
  }
  std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v3 + 64));
  std::vector<proto::QuestVarOp>::~vector((std::vector<proto::QuestVarOp> *const)(v3 + 128));
  result = updated;
  if ( v35 == (char *)v3 )
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

// Line 172: range 0000000015C7E534-0000000015C7E846
int32_t __cdecl QuestHandler::onQuestDestroyNpcReq(
        QuestHandler *const this,
        const proto::QuestDestroyNpcReq *req,
        proto::QuestDestroyNpcRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  uint32_t SceneComp; // r14d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t v13; // r14d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 npc_ptr:175";
  *(_QWORD *)(v3 + 16) = QuestHandler::onQuestDestroyNpcReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::QuestDestroyNpcReq::parent_quest_id(req);
  proto::QuestDestroyNpcRsp::set_parent_quest_id(rsp_0, v6);
  v7 = proto::QuestDestroyNpcReq::npc_id(req);
  proto::QuestDestroyNpcRsp::set_npc_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  proto::QuestDestroyNpcReq::parent_quest_id(req);
  v9 = proto::QuestDestroyNpcReq::npc_id(req);
  PlayerSceneComp::findNpcEntity((PlayerSceneComp *const)(v3 + 32), SceneComp, v9);
  if ( std::operator==<Npc>(0LL, (const std::shared_ptr<Npc> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/quest_handler.cpp",
      "onQuestDestroyNpcReq",
      178);
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v20,
            (const char (*)[25])"find npc failed, npc_id:");
    val = proto::QuestDestroyNpcReq::npc_id(req);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" parent_quest_id:");
    v19 = proto::QuestDestroyNpcReq::parent_quest_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v19);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v13 = -1;
  }
  else
  {
    v14 = (unsigned __int64)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    v15 = *(_QWORD *)v14 + 128LL;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, VisionContext *))v15)(v14, &VisionContext::miss_context);
    v13 = 0;
  }
  std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v3 + 32));
  result = v13;
  if ( v21 == (char *)v3 )
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

// Line 186: range 0000000015C7E848-0000000015C7E8C4
int32_t __cdecl QuestHandler::onBargainOfferPriceReq(
        QuestHandler *const this,
        const proto::BargainOfferPriceReq *req,
        proto::BargainOfferPriceRsp *rsp_0)
{
  PlayerTalkComp *TalkComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TalkComp = Player::getTalkComp(this->player_);
  if ( PlayerTalkComp::clientOfferPrice(TalkComp, req, rsp_0) )
    return proto::BargainOfferPriceRsp::retcode(rsp_0);
  else
    return 0;
};

// Line 196: range 0000000015C7E8C6-0000000015C7E96A
int32_t __cdecl QuestHandler::onGetBargainDataReq(
        QuestHandler *const this,
        const proto::GetBargainDataReq *req,
        proto::GetBargainDataRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerTalkComp *TalkComp; // rbx
  uint32_t v5; // ecx
  proto::BargainSnapshot *snapshot; // [rsp+28h] [rbp-18h]

  snapshot = proto::GetBargainDataRsp::mutable_snapshot(rsp_0);
  v3 = proto::GetBargainDataReq::bargain_id(req);
  proto::GetBargainDataRsp::set_bargain_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TalkComp = Player::getTalkComp(this->player_);
  v5 = proto::GetBargainDataReq::bargain_id(req);
  return PlayerTalkComp::getBargainSnapshot(TalkComp, v5, snapshot);
};

// Line 205: range 0000000015C7E96C-0000000015C7E9C8
int32_t __cdecl QuestHandler::onGetAllActivatedBargainDataReq(
        QuestHandler *const this,
        const proto::GetAllActivatedBargainDataReq *req,
        proto::GetAllActivatedBargainDataRsp *rsp_0)
{
  PlayerTalkComp *TalkComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TalkComp = Player::getTalkComp(this->player_);
  return PlayerTalkComp::getAllActivatedBargainData(TalkComp, rsp_0);
};

// Line 210: range 0000000015C7E9CA-0000000015C7F634
int32_t __cdecl QuestHandler::onQuestTransmitReq(
        QuestHandler *const this,
        const proto::QuestTransmitReq *req,
        proto::QuestTransmitRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  PlayerQuestComp *QuestComp; // r14
  uint32_t v11; // eax
  PlayerQuestComp *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  Player *v15; // r14
  uint32_t v16; // eax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  Player *player; // r14
  uint32_t v22; // r14d
  uint32_t v23; // ecx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // r14
  unsigned int v25; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // r14
  unsigned int v28; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  common::milog::MiLogStream *v34; // rax
  DungeonScene *v35; // r14
  uint32_t Uid; // eax
  PlayerSceneComp *SceneComp; // r14
  Scene *v38; // rax
  int32_t result; // eax
  uint32_t parent_quest_id; // [rsp+2Ch] [rbp-1B4h]
  const ParentQuestScriptConfig *parent_quest_config_ptr; // [rsp+30h] [rbp-1B0h]
  const QuestTransmitPointScriptConfig *point_config_ptr; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<Scene> __r; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-190h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-170h] BYREF
  char v47[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 17 dest_scene_id:246 64 12 7 pos:264 96 12 7 rot:265 128 16 13 world_ptr:213 160 16 20 pa"
                        "rent_quest_ptr:228 192 16 13 scene_ptr:247 224 16 21 dungeon_scene_ptr:258";
  *(_QWORD *)(v3 + 16) = QuestHandler::onQuestTransmitReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  v6 = proto::QuestTransmitReq::quest_id(req);
  proto::QuestTransmitRsp::set_quest_id(rsp_0, v6);
  v7 = proto::QuestTransmitReq::point_id(req);
  proto::QuestTransmitRsp::set_point_id(rsp_0, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 128));
  if ( std::operator==<World>((const std::shared_ptr<World> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onQuestTransmitReq",
      216);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v45,
           (const char (*)[25])"getCurWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v45);
    v9 = -1;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v11 = proto::QuestTransmitReq::quest_id(req);
  parent_quest_id = PlayerQuestComp::findParentQuestId(QuestComp, v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = Player::getQuestComp(this->player_);
  parent_quest_config_ptr = PlayerQuestComp::findParentQuestScriptConfig(v12, parent_quest_id);
  if ( parent_quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = (unsigned int)Player::getQuestComp(this->player_);
    PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v3 + 160), v16);
    if ( std::operator==<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v3 + 160), 0LL)
      || (v17 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160)),
          ParentQuest::getParentQuestState(v17)) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
      v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224),
              aQuest_18);
      v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, parent_quest_id);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, &byte_259BED80);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v22 = proto::QuestTransmitReq::point_id(req);
      v23 = proto::QuestTransmitReq::quest_id(req);
      point_config_ptr = ParentQuestScriptConfig::findTransmitPointConfig(parent_quest_config_ptr, v23, v22);
      if ( point_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->scene_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = point_config_ptr->scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 192));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192))
          || (v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192)),
              Scene::getSceneId(v30) != *(_DWORD *)(v3 + 48)) )
        {
          v32 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            v32 = __asan_report_load8();
          v33 = *(_QWORD *)v32 + 80LL;
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            v32 = __asan_report_load8();
          (*(void (__fastcall **)(std::shared_ptr<Scene> *, unsigned __int64, _QWORD))v33)(
            &__r,
            v32,
            *(unsigned int *)(v3 + 48));
          std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v3 + 192), &__r);
          std::shared_ptr<Scene>::~shared_ptr(&__r);
        }
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 192), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/quest_handler.cpp",
            "onQuestTransmitReq",
            255);
          v34 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v45,
                  (const char (*)[26])"getScene fails, scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v45);
          v9 = -1;
        }
        else
        {
          std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 224));
          if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 224), 0LL) )
          {
            v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Uid = Player::getUid(this->player_);
            DungeonScene::setPlayerQuitReason(v35, Uid, 0xAu);
          }
          if ( *(char *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config_ptr + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config_ptr->pos, 12LL);
          }
          *(_QWORD *)(v3 + 64) = *(_QWORD *)&point_config_ptr->pos.x;
          *(float *)(v3 + 72) = point_config_ptr->pos.z;
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
          *(_QWORD *)(v3 + 96) = *(_QWORD *)&point_config_ptr->rot.x;
          *(float *)(v3 + 104) = point_config_ptr->rot.z;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          TransferReason::TransferReason(&p_reason, ENTER_REASON_CLIENT_TRANSMIT);
          v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v9 = PlayerSceneComp::jumpToScene(
                 SceneComp,
                 v38,
                 (const Vector3 *)(v3 + 64),
                 (const Vector3 *)(v3 + 96),
                 0,
                 &p_reason);
          TransferReason::~TransferReason(&p_reason);
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 224));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
        goto LABEL_60;
      }
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
      v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224),
              aQuest_19);
      v25 = proto::QuestTransmitReq::quest_id(req);
      v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, v25);
      v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, ",point_id:");
      v28 = proto::QuestTransmitReq::point_id(req);
      v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, v28);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, asc_259BECE0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    player = this->player_;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      (std::string *)&v45,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
    Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)&v45);
    std::string::~string(&v45);
    v9 = -1;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
LABEL_60:
    std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v3 + 160));
    goto LABEL_61;
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224),
          aQuest_17);
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, parent_quest_id);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, asc_259BECE0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = this->player_;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)&v45,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
  Player::notifyGMServerLog(v15, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)&v45);
  std::string::~string(&v45);
  v9 = -1;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 224));
LABEL_61:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 128));
  result = v9;
  if ( v47 == (char *)v3 )
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

// Line 270: range 0000000015C7F636-0000000015C7F692
int32_t __cdecl QuestHandler::onPersonalLineAllDataReq(
        QuestHandler *const this,
        const proto::PersonalLineAllDataReq *req,
        proto::PersonalLineAllDataRsp *rsp_0)
{
  PlayerPersonalLineComp *PersonalLineComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PersonalLineComp = Player::getPersonalLineComp(this->player_);
  return PlayerPersonalLineComp::requestAllPersonalLineData(PersonalLineComp, rsp_0);
};

// Line 275: range 0000000015C7F694-0000000015C7F739
int32_t __cdecl QuestHandler::onRedeemLegendaryKeyReq(
        QuestHandler *const this,
        const proto::RedeemLegendaryKeyReq *req,
        proto::RedeemLegendaryKeyRsp *rsp_0)
{
  PlayerPersonalLineComp *PersonalLineComp; // rax
  PlayerItemComp *ItemComp; // rax
  uint32_t LegendaryKey; // edx
  int32_t retcode; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PersonalLineComp = Player::getPersonalLineComp(this->player_);
  retcode = PlayerPersonalLineComp::redeemLegendaryKey(PersonalLineComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  LegendaryKey = PlayerItemComp::getLegendaryKey(ItemComp);
  proto::RedeemLegendaryKeyRsp::set_legendary_key_count(rsp_0, LegendaryKey);
  return retcode;
};

// Line 282: range 0000000015C7F73A-0000000015C7F7AC
int32_t __cdecl QuestHandler::onUnlockPersonalLineReq(
        QuestHandler *const this,
        const proto::UnlockPersonalLineReq *req,
        proto::UnlockPersonalLineRsp *rsp_0)
{
  PlayerPersonalLineComp *PersonalLineComp; // rbx
  uint32_t v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PersonalLineComp = Player::getPersonalLineComp(this->player_);
  v4 = proto::UnlockPersonalLineReq::personal_line_id(req);
  return PlayerPersonalLineComp::unlockPersonalLine(PersonalLineComp, v4, rsp_0);
};

// Line 287: range 0000000015C7F7AE-0000000015C7F83C
int32_t __cdecl QuestHandler::onGetQuestLackingResourceReq(
        QuestHandler *const this,
        const proto::GetQuestLackingResourceReq *req,
        proto::GetQuestLackingResourceRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerQuestComp *QuestComp; // rbx
  uint32_t v5; // ecx

  v3 = proto::GetQuestLackingResourceReq::quest_id(req);
  proto::GetQuestLackingResourceRsp::set_quest_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v5 = proto::GetQuestLackingResourceReq::quest_id(req);
  return PlayerQuestComp::calcQuestLackingResource(QuestComp, v5, rsp_0);
};

// Line 293: range 0000000015C7F83E-0000000015C7F8CC
int32_t __cdecl QuestHandler::onGetParentQuestVideoKeyReq(
        QuestHandler *const this,
        const proto::GetParentQuestVideoKeyReq *req,
        proto::GetParentQuestVideoKeyRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerQuestComp *QuestComp; // rbx
  uint32_t v5; // ecx

  v3 = proto::GetParentQuestVideoKeyReq::parent_quest_id(req);
  proto::GetParentQuestVideoKeyRsp::set_parent_quest_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v5 = proto::GetParentQuestVideoKeyReq::parent_quest_id(req);
  return PlayerQuestComp::getVideoKeyByParentQuestId(QuestComp, v5, rsp_0);
};

// Line 299: range 0000000015C7F8CE-0000000015C7F96F
int32_t __cdecl QuestHandler::onInterpretInferenceWordReq(
        QuestHandler *const this,
        const proto::InterpretInferenceWordReq *req,
        proto::InterpretInferenceWordRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerQuestComp *QuestComp; // rbx
  uint32_t v6; // eax

  v3 = proto::InterpretInferenceWordReq::word_id(req);
  proto::InterpretInferenceWordRsp::set_word_id(rsp_0, v3);
  v4 = proto::InterpretInferenceWordReq::page_id(req);
  proto::InterpretInferenceWordRsp::set_page_id(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v6 = proto::InterpretInferenceWordReq::word_id(req);
  return PlayerQuestComp::interpretInferenceWord(QuestComp, v6);
};

// Line 306: range 0000000015C7F970-0000000015C7FA43
int32_t __cdecl QuestHandler::onAssociateInferenceWordReq(
        QuestHandler *const this,
        const proto::AssociateInferenceWordReq *req,
        proto::AssociateInferenceWordRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // edx
  PlayerQuestComp *QuestComp; // rbx
  uint32_t v7; // r12d
  uint32_t v8; // eax

  v3 = proto::AssociateInferenceWordReq::page_id(req);
  proto::AssociateInferenceWordRsp::set_page_id(rsp_0, v3);
  v4 = proto::AssociateInferenceWordReq::base_word_id(req);
  proto::AssociateInferenceWordRsp::set_base_word_id(rsp_0, v4);
  v5 = proto::AssociateInferenceWordReq::associate_word_id(req);
  proto::AssociateInferenceWordRsp::set_associate_word_id(rsp_0, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v7 = proto::AssociateInferenceWordReq::associate_word_id(req);
  v8 = proto::AssociateInferenceWordReq::base_word_id(req);
  return PlayerQuestComp::associateInferenceWord(QuestComp, v8, v7);
};

// Line 314: range 0000000015C7FA44-0000000015C7FBD9
int32_t __cdecl QuestHandler::onSubmitInferenceWordReq(
        QuestHandler *const this,
        const proto::SubmitInferenceWordReq *req,
        proto::SubmitInferenceWordRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  PlayerQuestComp *QuestComp; // r14
  uint32_t v9; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-74h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 conclusion_id:317";
  *(_QWORD *)(v3 + 16) = QuestHandler::onSubmitInferenceWordReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  v6 = proto::SubmitInferenceWordReq::page_id(req);
  proto::SubmitInferenceWordRsp::set_page_id(rsp_0, v6);
  v7 = proto::SubmitInferenceWordReq::word_id(req);
  proto::SubmitInferenceWordRsp::set_word_id(rsp_0, v7);
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  v9 = proto::SubmitInferenceWordReq::word_id(req);
  ret = PlayerQuestComp::submitInferenceWord(QuestComp, v9, (uint32_t *)(v3 + 32));
  if ( !ret )
    proto::SubmitInferenceWordRsp::set_conclusion_id(rsp_0, *(_DWORD *)(v3 + 32));
  result = ret;
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

// Line 327: range 0000000015C7FEFE-0000000015C80EB4
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl QuestHandler::onQuestRenameAvatarReq(QuestHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  int32_t v6; // r14d
  const std::string *v7; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v9; // r14
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v10; // rsi
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v15; // rax
  GameserverService *v16; // r14
  const std::shared_ptr<common::minet::Packet> *v17; // rsi
  __suseconds_t v18; // rdx
  common::minet::PacketPtr v19; // rdi
  common::minet::Packet *v20; // rax
  common::minet::Packet *v21; // rax
  common::minet::PacketPtr v22; // rdi
  common::minet::Packet *v23; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v24; // rsi
  common::minet::Packet *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const std::string *v35; // rax
  GameserverService *v36; // r14
  const std::shared_ptr<common::minet::Packet> *v37; // rsi
  common::milog::MiLogStream *v38; // rcx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+12h] [rbp-2CEh] BYREF
  bool is_check; // [rsp+13h] [rbp-2CDh]
  int32_t ret; // [rsp+14h] [rbp-2CCh]
  uint32_t async_http_type; // [rsp+18h] [rbp-2C8h]
  int32_t ret_0; // [rsp+1Ch] [rbp-2C4h]
  char *val; // [rsp+20h] [rbp-2C0h] BYREF
  const proto::QuestRenameAvatarReq *req; // [rsp+28h] [rbp-2B8h]
  proto::QuestRenameAvatarRsp *rsp_0; // [rsp+30h] [rbp-2B0h]
  const data::AvatarRenameExcelConfig *rename_config_ptr; // [rsp+38h] [rbp-2A8h]
  std::shared_ptr<common::minet::Packet> v49; // [rsp+40h] [rbp-2A0h] BYREF
  QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v50; // [rsp+50h] [rbp-290h] BYREF
  common::milog::MiLogStream v51; // [rsp+70h] [rbp-270h] BYREF
  char v52[592]; // [rsp+90h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 13 rename_id:329 64 4 13 avatar_id:376 80 16 11 req_ptr:328 112 16 11 rsp_ptr:328 144 16 "
                        "9 timer:348 176 32 15 avatar_name:331 240 240 12 http_req:348";
  *(_QWORD *)(v2 + 16) = QuestHandler::onQuestRenameAvatarReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  common::minet::Packet::getConstProto<proto::QuestRenameAvatarReq>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::QuestRenameAvatarReq const>(
         (const std::shared_ptr<const proto::QuestRenameAvatarReq> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onQuestRenameAvatarReq",
      328);
    common::milog::MiLogStream::operator()(&v51, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = -1;
    goto LABEL_54;
  }
  req = std::__shared_ptr_access<proto::QuestRenameAvatarReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuestRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  common::tools::perf::make_shared<proto::QuestRenameAvatarRsp>();
  rsp_0 = std::__shared_ptr_access<proto::QuestRenameAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuestRenameAvatarRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  proto::QuestRenameAvatarRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v2 + 48) = proto::QuestRenameAvatarReq::rename_id(req);
  is_check = proto::QuestRenameAvatarReq::is_check(req);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v51, off_259BF020, &__a);
  v7 = proto::QuestRenameAvatarReq::avatar_name[abi:cxx11](req);
  common::tools::StringUtils::trim((std::string *)(v2 + 176), v7, (const std::string *)&v51, 1);
  std::string::~string(&v51);
  std::allocator<char>::~allocator(&__a);
  proto::QuestRenameAvatarRsp::set_rename_id(rsp_0, *(_DWORD *)(v2 + 48));
  proto::QuestRenameAvatarRsp::set_is_check(rsp_0, is_check);
  proto::QuestRenameAvatarRsp::set_retcode(rsp_0, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  ret = PlayerQuestComp::checkQuestAvatarRename(QuestComp, *(_DWORD *)(v2 + 48), (const std::string *)(v2 + 176));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/quest_handler.cpp",
      "onQuestRenameAvatarReq",
      341);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v51,
           (const char (*)[36])"checkQuestAvatarRename failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v51);
    proto::QuestRenameAvatarRsp::set_retcode(rsp_0, ret);
  }
  else
  {
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v10);
    if ( !common::minet::Packet::getExt(v11, 2u) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      if ( *(char *)(((unsigned __int64)&v12->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
        v12 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v12->is_word_filter_use_remote);
      is_word_filter_use_remote = v12->is_word_filter_use_remote;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
      if ( is_word_filter_use_remote )
      {
        common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v15 = proto::QuestRenameAvatarReq::avatar_name[abi:cxx11](req);
        RemoteWordFilter::buildQueryHttpReq((common::minet::http_client::HttpRequest *)(v2 + 240), v15, player, 0x12u);
        async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x1E7u);
        v16 = ServiceBox::findService<GameserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v50.__packet_ptr, v17);
        v18 = *(_QWORD *)(v2 + 152);
        v50.__timer.start_tv_.tv_sec = *(_QWORD *)(v2 + 144);
        v50.__timer.start_tv_.tv_usec = v18;
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
          (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v51,
          &v50);
        ret_0 = GameserverService::asyncHttpRequest(
                  v16,
                  (const common::minet::http_client::HttpRequest *)(v2 + 240),
                  5LL,
                  async_http_type,
                  (common::minet::http_client::ResponseCallBackFunc *)&v51);
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v51);
        QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v50);
        if ( ret_0 )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/quest_handler.cpp",
            "onQuestRenameAvatarReq",
            348);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v51,
            (const char (*)[23])"asyncHttpRequest fails");
          common::milog::MiLogStream::~MiLogStream(&v51);
          v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v19._M_refcount._M_pi);
          common::minet::Packet::setExt(v20, 2u, 1u);
          v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v19._M_refcount._M_pi);
          common::minet::Packet::setExt(v21, 3u, 4u);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v49,
            (const std::shared_ptr<common::minet::Packet> *)v19._M_refcount._M_pi);
          v19._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v49;
          ServiceBox::pushPacketToService(v19);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v49);
        }
        common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 240));
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 144));
      }
      else
      {
        v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22._M_refcount._M_pi);
        common::minet::Packet::setExt(v23, 2u, 1u);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v49,
          (const std::shared_ptr<common::minet::Packet> *)v22._M_refcount._M_pi);
        v22._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v49;
        ServiceBox::pushPacketToService(v22);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v49);
      }
      v6 = 0;
      goto LABEL_53;
    }
    v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v24);
    if ( common::minet::Packet::getExt(v25, 3u) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/quest_handler.cpp",
        "onQuestRenameAvatarReq",
        355);
      v26 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v51,
              (const char (*)[40])"checkNickName failed, word illegal uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v51);
      proto::QuestRenameAvatarRsp::set_retcode(rsp_0, 132);
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  rename_config_ptr = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(
                        &v27->design_config.txt_config_mgr.rename_config_mgr,
                        *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
  if ( !rename_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onQuestRenameAvatarReq",
      364);
    v28 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v51,
            (const char (*)[39])"cannot find rename config, rename_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v51);
    proto::QuestRenameAvatarRsp::set_retcode(rsp_0, -1);
  }
  if ( !proto::QuestRenameAvatarReq::is_check(req) && rename_config_ptr && !proto::QuestRenameAvatarRsp::retcode(rsp_0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( rename_config_ptr->type == AVATAR_RENAME_TYPE_WANDERER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = rename_config_ptr->related_avatar_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( PlayerAvatarComp::setAvatarRenameByQuest(
             AvatarComp,
             *(_DWORD *)(v2 + 48),
             *(_DWORD *)(v2 + 64),
             (const std::string *)(v2 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/quest_handler.cpp",
          "onQuestRenameAvatarReq",
          380);
        v31 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v51,
                (const char (*)[43])"setAvatarRenameByQuest failed, avatar_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v51);
        proto::QuestRenameAvatarRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        proto::QuestRenameAvatarRsp::set_retcode(rsp_0, 0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/quest_handler.cpp",
        "onQuestRenameAvatarReq",
        389);
      v32 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v51,
              (const char (*)[33])"unknown rename type ,rename_id: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 48));
      v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])"type: ");
      if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rename_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = (char *)data::enumValToStr(rename_config_ptr->type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v51);
    }
  }
  v35 = proto::QuestRenameAvatarReq::avatar_name[abi:cxx11](req);
  proto::QuestRenameAvatarRsp::set_avatar_name(rsp_0, v35);
  v36 = ServiceBox::findService<GameserverService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v49, v37);
  std::shared_ptr<proto::QuestRenameAvatarRsp>::shared_ptr(
    (std::shared_ptr<proto::QuestRenameAvatarRsp> *const)(v2 + 144),
    (const std::shared_ptr<proto::QuestRenameAvatarRsp> *)(v2 + 112));
  LOBYTE(v36) = ServiceBase::sendRsp<proto::QuestRenameAvatarRsp>(
                  v36,
                  (std::shared_ptr<proto::QuestRenameAvatarRsp> *)(v2 + 144),
                  &v49) != 0;
  std::shared_ptr<proto::QuestRenameAvatarRsp>::~shared_ptr((std::shared_ptr<proto::QuestRenameAvatarRsp> *const)(v2 + 144));
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v49);
  if ( (_BYTE)v36 )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/quest_handler.cpp",
      "onQuestRenameAvatarReq",
      398);
    v38 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v51,
            (const char (*)[25])"send rsp failed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v38, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = -1;
  }
  else
  {
    v6 = proto::QuestRenameAvatarRsp::retcode(rsp_0);
  }
LABEL_53:
  std::string::~string((void *)(v2 + 176));
  std::shared_ptr<proto::QuestRenameAvatarRsp>::~shared_ptr((std::shared_ptr<proto::QuestRenameAvatarRsp> *const)(v2 + 112));
LABEL_54:
  std::shared_ptr<proto::QuestRenameAvatarReq const>::~shared_ptr((std::shared_ptr<const proto::QuestRenameAvatarReq> *const)(v2 + 80));
  result = v6;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 348: range 0000000015D13316-0000000015D1339F
void __cdecl QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 348: range 0000000015D1346A-0000000015D134F3
void __cdecl QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
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

// Line 348: range 0000000015C7FBDA-0000000015C7FED0
void __cdecl QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
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
  proto::QuestRenameAvatarReq *v11; // rax
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
  *(_QWORD *)(v4 + 8) = "1 32 16 11 msg_ptr:348";
  *(_QWORD *)(v4 + 16) = QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
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
    common::minet::Packet::getProto<proto::QuestRenameAvatarReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::QuestRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestRenameAvatarReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::QuestRenameAvatarReq::mutable_avatar_name[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::QuestRenameAvatarReq>::~shared_ptr((std::shared_ptr<proto::QuestRenameAvatarReq> *const)(v4 + 32));
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

// Line 348: range 0000000015C7FED2-0000000015C7FEFC
void __cdecl QuestHandler::onQuestRenameAvatarReq(std::shared_ptr<common::minet::Packet>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        QuestHandler::onQuestRenameAvatarReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};
