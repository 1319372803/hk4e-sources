// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/widget_handler.cpp

// Line 27: range 00000000180429CA-000000001804361B
int32_t __cdecl WidgetHandler::addPacketFuncToMap(WidgetHandler *const this, PacketFuncMap *process_packet_func_map)
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
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v16; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  __x = 4257;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v16, &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/widget_handler.cpp",
      "addPacketFuncToMap",
      28);
    common::milog::MiLogStream::operator()(&v18, off_2649F220, 4257LL);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 4257;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 4272;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v16, &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/widget_handler.cpp",
        "addPacketFuncToMap",
        29);
      common::milog::MiLogStream::operator()(&v18, off_2649F220, 4272LL);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 4272;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 4299;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v16, &__y) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/widget_handler.cpp",
          "addPacketFuncToMap",
          30);
        common::milog::MiLogStream::operator()(&v18, off_2649F220, 4299LL);
        common::milog::MiLogStream::~MiLogStream(&v18);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 4299;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 4291;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v16, &__y) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/widget_handler.cpp",
            "addPacketFuncToMap",
            31);
          common::milog::MiLogStream::operator()(&v18, off_2649F220, 4291LL);
          common::milog::MiLogStream::~MiLogStream(&v18);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 4291;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 4259;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v16, &__y) )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/widget_handler.cpp",
              "addPacketFuncToMap",
              32);
            common::milog::MiLogStream::operator()(&v18, off_2649F220, 4259LL);
            common::milog::MiLogStream::~MiLogStream(&v18);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 4259;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 4253;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v16, &__y) )
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/widget_handler.cpp",
                "addPacketFuncToMap",
                33);
              common::milog::MiLogStream::operator()(&v18, off_2649F220, 4253LL);
              common::milog::MiLogStream::~MiLogStream(&v18);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 4253;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 4255;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v16, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v18,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/widget_handler.cpp",
                  "addPacketFuncToMap",
                  36);
                common::milog::MiLogStream::operator()(&v18, off_2649F220, 4255LL);
                common::milog::MiLogStream::~MiLogStream(&v18);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 4255;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 4256;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v16, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v18,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/widget_handler.cpp",
                    "addPacketFuncToMap",
                    38);
                  common::milog::MiLogStream::operator()(&v18, off_2649F220, 4256LL);
                  common::milog::MiLogStream::~MiLogStream(&v18);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 4256;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 5960;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v16, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v18,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/widget_handler.cpp",
                      "addPacketFuncToMap",
                      39);
                    common::milog::MiLogStream::operator()(&v18, off_2649F220, 5960LL);
                    common::milog::MiLogStream::~MiLogStream(&v18);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 5960;
                    v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                      v11,
                      (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 6036;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v16, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v18,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/widget_handler.cpp",
                        "addPacketFuncToMap",
                        41);
                      common::milog::MiLogStream::operator()(&v18, off_2649F220, 6036LL);
                      common::milog::MiLogStream::~MiLogStream(&v18);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 6036;
                      v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}>(
                        v12,
                        (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                      __x = 6090;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_map,
                                      &__x)._M_node;
                      v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                      if ( std::operator!=(&v16, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v18,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/widget_handler.cpp",
                          "addPacketFuncToMap",
                          42);
                        common::milog::MiLogStream::operator()(&v18, off_2649F220, 6090LL);
                        common::milog::MiLogStream::~MiLogStream(&v18);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                        __x = 6090;
                        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_map,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}>(
                          v13,
                          (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                        __x = 5907;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_map,
                                        &__x)._M_node;
                        v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                        if ( std::operator!=(&v16, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v18,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/widget_handler.cpp",
                            "addPacketFuncToMap",
                            44);
                          common::milog::MiLogStream::operator()(&v18, off_2649F220, 5907LL);
                          common::milog::MiLogStream::~MiLogStream(&v18);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                          __x = 5907;
                          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_map,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}>(
                            v14,
                            (WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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
};

// Line 28: range 0000000018040462-000000001804077E
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::AnchorPointOpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::AnchorPointOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::AnchorPointOpRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:28 64 16 10 rsp_ptr:28";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AnchorPointOpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AnchorPointOpReq const>(
         (const std::shared_ptr<const proto::AnchorPointOpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::AnchorPointOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AnchorPointOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AnchorPointOpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AnchorPointOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AnchorPointOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AnchorPointOpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::AnchorPointOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AnchorPointOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onAnchorPointOpReq(this, v8, rsp_0);
    proto::AnchorPointOpRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::AnchorPointOpRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::AnchorPointOpRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::AnchorPointOpRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::AnchorPointOpRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::AnchorPointOpRsp>::~shared_ptr((std::shared_ptr<proto::AnchorPointOpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AnchorPointOpReq const>::~shared_ptr((std::shared_ptr<const proto::AnchorPointOpReq> *const)(v2 + 32));
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

// Line 29: range 0000000018040780-0000000018040A9C
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::SetUpLunchBoxWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetUpLunchBoxWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetUpLunchBoxWidgetRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:29 64 16 10 rsp_ptr:29";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetUpLunchBoxWidgetReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetUpLunchBoxWidgetReq const>(
         (const std::shared_ptr<const proto::SetUpLunchBoxWidgetReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetUpLunchBoxWidgetReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetUpLunchBoxWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetUpLunchBoxWidgetRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetUpLunchBoxWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetUpLunchBoxWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetUpLunchBoxWidgetRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetUpLunchBoxWidgetReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetUpLunchBoxWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onSetUpLunchBoxWidgetReq(this, v8, rsp_0);
    proto::SetUpLunchBoxWidgetRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetUpLunchBoxWidgetRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetUpLunchBoxWidgetRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetUpLunchBoxWidgetRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetUpLunchBoxWidgetRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetUpLunchBoxWidgetRsp>::~shared_ptr((std::shared_ptr<proto::SetUpLunchBoxWidgetRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetUpLunchBoxWidgetReq const>::~shared_ptr((std::shared_ptr<const proto::SetUpLunchBoxWidgetReq> *const)(v2 + 32));
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

// Line 30: range 0000000018040A9E-0000000018040DBA
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::QuickUseWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::QuickUseWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuickUseWidgetRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:30 64 16 10 rsp_ptr:30";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QuickUseWidgetReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::QuickUseWidgetReq const>(
         (const std::shared_ptr<const proto::QuickUseWidgetReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::QuickUseWidgetReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuickUseWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::QuickUseWidgetRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QuickUseWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QuickUseWidgetRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::QuickUseWidgetRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::QuickUseWidgetReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QuickUseWidgetReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onQuickUseWidgetReq(this, v8, rsp_0);
    proto::QuickUseWidgetRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::QuickUseWidgetRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::QuickUseWidgetRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::QuickUseWidgetRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::QuickUseWidgetRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::QuickUseWidgetRsp>::~shared_ptr((std::shared_ptr<proto::QuickUseWidgetRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::QuickUseWidgetReq const>::~shared_ptr((std::shared_ptr<const proto::QuickUseWidgetReq> *const)(v2 + 32));
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

// Line 31: range 0000000018040DBC-00000000180410D8
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::WidgetReportReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WidgetReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WidgetReportRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:31 64 16 10 rsp_ptr:31";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WidgetReportReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WidgetReportReq const>(
         (const std::shared_ptr<const proto::WidgetReportReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WidgetReportReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetReportReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WidgetReportRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WidgetReportRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WidgetReportRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WidgetReportRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WidgetReportReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetReportReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onWidgetReportReq(this, v8, rsp_0);
    proto::WidgetReportRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WidgetReportRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WidgetReportRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WidgetReportRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WidgetReportRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WidgetReportRsp>::~shared_ptr((std::shared_ptr<proto::WidgetReportRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WidgetReportReq const>::~shared_ptr((std::shared_ptr<const proto::WidgetReportReq> *const)(v2 + 32));
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

// Line 32: range 00000000180410DA-00000000180413F6
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::SetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetWidgetSlotRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:32 64 16 10 rsp_ptr:32";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetWidgetSlotReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetWidgetSlotReq const>(
         (const std::shared_ptr<const proto::SetWidgetSlotReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetWidgetSlotReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetWidgetSlotRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetWidgetSlotRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetWidgetSlotReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onSetWidgetSlotReq(this, v8, rsp_0);
    proto::SetWidgetSlotRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetWidgetSlotRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetWidgetSlotRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetWidgetSlotRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetWidgetSlotRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetWidgetSlotRsp>::~shared_ptr((std::shared_ptr<proto::SetWidgetSlotRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetWidgetSlotReq const>::~shared_ptr((std::shared_ptr<const proto::SetWidgetSlotReq> *const)(v2 + 32));
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

// Line 33: range 00000000180413F8-0000000018041714
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::GetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetWidgetSlotRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:33 64 16 10 rsp_ptr:33";
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetWidgetSlotReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetWidgetSlotReq const>(
         (const std::shared_ptr<const proto::GetWidgetSlotReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetWidgetSlotReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetWidgetSlotRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetWidgetSlotRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetWidgetSlotRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetWidgetSlotReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetWidgetSlotReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onGetWidgetSlotReq(this, v8, rsp_0);
    proto::GetWidgetSlotRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetWidgetSlotRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetWidgetSlotRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetWidgetSlotRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetWidgetSlotRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetWidgetSlotRsp>::~shared_ptr((std::shared_ptr<proto::GetWidgetSlotRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetWidgetSlotReq const>::~shared_ptr((std::shared_ptr<const proto::GetWidgetSlotReq> *const)(v2 + 32));
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

// Line 36: range 0000000018041716-0000000018041A32
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::WidgetDoBagReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WidgetDoBagRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WidgetDoBagRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WidgetDoBagReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WidgetDoBagReq const>(
         (const std::shared_ptr<const proto::WidgetDoBagReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      36);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WidgetDoBagReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetDoBagReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WidgetDoBagRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WidgetDoBagRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WidgetDoBagRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WidgetDoBagRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WidgetDoBagReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetDoBagReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onWidgetDoBagReq(this, v8, rsp_0);
    proto::WidgetDoBagRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WidgetDoBagRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WidgetDoBagRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WidgetDoBagRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WidgetDoBagRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WidgetDoBagRsp>::~shared_ptr((std::shared_ptr<proto::WidgetDoBagRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WidgetDoBagReq const>::~shared_ptr((std::shared_ptr<const proto::WidgetDoBagReq> *const)(v2 + 32));
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

// Line 38: range 0000000018041A34-0000000018041D50
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::WidgetCaptureAnimalReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WidgetCaptureAnimalRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WidgetCaptureAnimalRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WidgetCaptureAnimalReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WidgetCaptureAnimalReq const>(
         (const std::shared_ptr<const proto::WidgetCaptureAnimalReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      38);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WidgetCaptureAnimalReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetCaptureAnimalReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WidgetCaptureAnimalRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WidgetCaptureAnimalRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WidgetCaptureAnimalRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WidgetCaptureAnimalRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WidgetCaptureAnimalReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetCaptureAnimalReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onWidgetCaptureAnimalReq(this, v8, rsp_0);
    proto::WidgetCaptureAnimalRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WidgetCaptureAnimalRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WidgetCaptureAnimalRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WidgetCaptureAnimalRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WidgetCaptureAnimalRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WidgetCaptureAnimalRsp>::~shared_ptr((std::shared_ptr<proto::WidgetCaptureAnimalRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WidgetCaptureAnimalReq const>::~shared_ptr((std::shared_ptr<const proto::WidgetCaptureAnimalReq> *const)(v2 + 32));
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

// Line 39: range 0000000018041D52-000000001804206E
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::WidgetUpdateExtraCDReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::WidgetUpdateExtraCDRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::WidgetUpdateExtraCDRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::WidgetUpdateExtraCDReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::WidgetUpdateExtraCDReq const>(
         (const std::shared_ptr<const proto::WidgetUpdateExtraCDReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      39);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::WidgetUpdateExtraCDReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetUpdateExtraCDReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::WidgetUpdateExtraCDRsp>();
    rsp_0 = std::__shared_ptr_access<proto::WidgetUpdateExtraCDRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WidgetUpdateExtraCDRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::WidgetUpdateExtraCDRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::WidgetUpdateExtraCDReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::WidgetUpdateExtraCDReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onWidgetUpdateExtraCDReq(this, v8, rsp_0);
    proto::WidgetUpdateExtraCDRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::WidgetUpdateExtraCDRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::WidgetUpdateExtraCDRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::WidgetUpdateExtraCDRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::WidgetUpdateExtraCDRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::WidgetUpdateExtraCDRsp>::~shared_ptr((std::shared_ptr<proto::WidgetUpdateExtraCDRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::WidgetUpdateExtraCDReq const>::~shared_ptr((std::shared_ptr<const proto::WidgetUpdateExtraCDReq> *const)(v2 + 32));
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

// Line 41: range 0000000018042070-000000001804238C
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::ReformFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ReformFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ReformFireworksRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#10}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ReformFireworksReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReformFireworksReq const>(
         (const std::shared_ptr<const proto::ReformFireworksReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      41);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ReformFireworksReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReformFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ReformFireworksRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ReformFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReformFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ReformFireworksRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ReformFireworksReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ReformFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onReformFireworksReq(this, v8, rsp_0);
    proto::ReformFireworksRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReformFireworksRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReformFireworksRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ReformFireworksRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ReformFireworksRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ReformFireworksRsp>::~shared_ptr((std::shared_ptr<proto::ReformFireworksRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReformFireworksReq const>::~shared_ptr((std::shared_ptr<const proto::ReformFireworksReq> *const)(v2 + 32));
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

// Line 42: range 000000001804238E-00000000180426AA
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::LaunchFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::LaunchFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::LaunchFireworksRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#11}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::LaunchFireworksReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::LaunchFireworksReq const>(
         (const std::shared_ptr<const proto::LaunchFireworksReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::LaunchFireworksReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LaunchFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::LaunchFireworksRsp>();
    rsp_0 = std::__shared_ptr_access<proto::LaunchFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::LaunchFireworksRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::LaunchFireworksRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::LaunchFireworksReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::LaunchFireworksReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onLaunchFireworksReq(this, v8, rsp_0);
    proto::LaunchFireworksRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::LaunchFireworksRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::LaunchFireworksRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::LaunchFireworksRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::LaunchFireworksRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::LaunchFireworksRsp>::~shared_ptr((std::shared_ptr<proto::LaunchFireworksRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::LaunchFireworksReq const>::~shared_ptr((std::shared_ptr<const proto::LaunchFireworksReq> *const)(v2 + 32));
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

// Line 44: range 00000000180426AC-00000000180429C8
int __cdecl WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator()(
        const WidgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  WidgetHandler *this; // r14
  std::__shared_ptr_access<const proto::ChangeWidgetBackgroundActiveStateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ChangeWidgetBackgroundActiveStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = WidgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#12}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ChangeWidgetBackgroundActiveStateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ChangeWidgetBackgroundActiveStateReq const>(
         (const std::shared_ptr<const proto::ChangeWidgetBackgroundActiveStateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/widget_handler.cpp",
      "operator()",
      44);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ChangeWidgetBackgroundActiveStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeWidgetBackgroundActiveStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ChangeWidgetBackgroundActiveStateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ChangeWidgetBackgroundActiveStateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ChangeWidgetBackgroundActiveStateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ChangeWidgetBackgroundActiveStateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ChangeWidgetBackgroundActiveStateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ChangeWidgetBackgroundActiveStateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = WidgetHandler::onChangeWidgetBackgroundActiveStateReq(this, v8, rsp_0);
    proto::ChangeWidgetBackgroundActiveStateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ChangeWidgetBackgroundActiveStateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp>::~shared_ptr((std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ChangeWidgetBackgroundActiveStateReq const>::~shared_ptr((std::shared_ptr<const proto::ChangeWidgetBackgroundActiveStateReq> *const)(v2 + 32));
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

// Line 50: range 000000001804361C-0000000018043739
int32_t __cdecl WidgetHandler::onAnchorPointOpReq(
        WidgetHandler *const this,
        const proto::AnchorPointOpReq *req,
        proto::AnchorPointOpRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // eax
  PlayerWidgetComp *WidgetComp; // rbx
  uint32_t v7; // eax
  PlayerWidgetComp *v8; // rbx
  uint32_t v9; // eax
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  v3 = proto::AnchorPointOpReq::anchor_point_op_type(req);
  proto::AnchorPointOpRsp::set_anchor_point_op_type(rsp_0, v3);
  v4 = proto::AnchorPointOpReq::anchor_point_id(req);
  proto::AnchorPointOpRsp::set_anchor_point_id(rsp_0, v4);
  ret = -1;
  v5 = proto::AnchorPointOpReq::anchor_point_op_type(req);
  if ( v5 == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WidgetComp = Player::getWidgetComp(this->player_);
    v7 = proto::AnchorPointOpReq::anchor_point_id(req);
    return PlayerWidgetComp::transferToAnchorPoint(WidgetComp, v7);
  }
  else if ( v5 == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Player::getWidgetComp(this->player_);
    v9 = proto::AnchorPointOpReq::anchor_point_id(req);
    return PlayerWidgetComp::removeAnchorPoint(v8, v9);
  }
  return ret;
};

// Line 70: range 000000001804373A-00000000180439C9
int32_t __cdecl WidgetHandler::onSetUpLunchBoxWidgetReq(
        WidgetHandler *const this,
        const proto::SetUpLunchBoxWidgetReq *req,
        proto::SetUpLunchBoxWidgetRsp *rsp_0)
{
  WidgetLunchBoxData *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const proto::LunchBoxData *v6; // rax
  int32_t v7; // r14d
  PlayerWidgetComp *WidgetComp; // rax
  PlayerWidgetComp *v9; // r14
  WidgetLunchBoxData *v10; // rax
  PlayerWidgetComp *v11; // rax
  const WidgetLunchBoxData *LunchBoxData; // r14
  proto::LunchBoxData *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (WidgetLunchBoxData *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (WidgetLunchBoxData *)v4;
  }
  *(_QWORD *)v3->slot_material_map._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->slot_material_map._M_t._M_impl._M_header._M_color = "1 48 48 17 lunch_box_data:71";
  v3->slot_material_map._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)WidgetHandler::onSetUpLunchBoxWidgetReq;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  WidgetLunchBoxData::WidgetLunchBoxData(v3 + 1);
  v6 = proto::SetUpLunchBoxWidgetReq::lunch_box_data(req);
  if ( WidgetLunchBoxData::fromClient(v3 + 1, v6) )
  {
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WidgetComp = Player::getWidgetComp(this->player_);
    ret = PlayerWidgetComp::checkSetUpLunchBox(WidgetComp, v3 + 1);
    if ( ret )
    {
      v7 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getWidgetComp(this->player_);
      v10 = std::move<WidgetLunchBoxData &>(v3 + 1);
      PlayerWidgetComp::setUpLunchBox(v9, v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = Player::getWidgetComp(this->player_);
      LunchBoxData = PlayerWidgetComp::getLunchBoxData(v11);
      v13 = proto::SetUpLunchBoxWidgetRsp::mutable_lunch_box_data(rsp_0);
      WidgetLunchBoxData::toClient(LunchBoxData, v13);
      v7 = 0;
    }
  }
  WidgetLunchBoxData::~WidgetLunchBoxData(v3 + 1);
  result = v7;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->slot_material_map._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 00000000180439CA-0000000018043AE7
int32_t __cdecl WidgetHandler::onQuickUseWidgetReq(
        WidgetHandler *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  const proto::WidgetCreateLocationInfo *v3; // rax
  const proto::Vector *v4; // rax
  const proto::WidgetCreateLocationInfo *v5; // rax
  const proto::Vector *v6; // rax
  PlayerWidgetComp *WidgetComp; // rcx
  Vector3 v11; // [rsp+28h] [rbp-28h] BYREF
  Vector3 v12; // [rsp+34h] [rbp-1Ch] BYREF

  if ( proto::QuickUseWidgetReq::param_case(req) == kLocationInfo_0 )
  {
    v3 = proto::QuickUseWidgetReq::location_info(req);
    v4 = proto::WidgetCreateLocationInfo::pos(v3);
    Vector3::Vector3(&v11, v4);
    if ( !Vector3::isValid(&v11) )
      return 201;
    v5 = proto::QuickUseWidgetReq::location_info(req);
    v6 = proto::WidgetCreateLocationInfo::rot(v5);
    Vector3::Vector3(&v12, v6);
    if ( !Vector3::isValid(&v12) )
      return 201;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::quickUseWidgetNew(WidgetComp, req, rsp_0);
};

// Line 101: range 0000000018043AE8-0000000018043B48
int32_t __cdecl WidgetHandler::onWidgetReportReq(
        WidgetHandler *const this,
        const proto::WidgetReportReq *req,
        proto::WidgetReportRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::onClientReport(WidgetComp, req, rsp_0);
};

// Line 106: range 0000000018043B4A-0000000018043BAA
int32_t __cdecl WidgetHandler::onSetWidgetSlotReq(
        WidgetHandler *const this,
        const proto::SetWidgetSlotReq *req,
        proto::SetWidgetSlotRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::setSlot(WidgetComp, req, rsp_0);
};

// Line 111: range 0000000018043BAC-0000000018043C1B
int32_t __cdecl WidgetHandler::onGetWidgetSlotReq(
        WidgetHandler *const this,
        const proto::GetWidgetSlotReq *req,
        proto::GetWidgetSlotRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rbx
  google::protobuf::RepeatedPtrField<proto::WidgetSlotData> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  v4 = proto::GetWidgetSlotRsp::mutable_slot_list(rsp_0);
  PlayerWidgetComp::packSlotInfo(WidgetComp, v4);
  return 0;
};

// Line 117: range 0000000018043C1C-000000001804414C
int32_t __cdecl WidgetHandler::onWidgetDoBagReq(
        WidgetHandler *const this,
        const proto::WidgetDoBagReq *req,
        proto::WidgetDoBagRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const proto::WidgetCreateLocationInfo *v6; // rax
  const proto::Vector *v7; // rax
  const proto::WidgetCreateLocationInfo *v8; // rax
  const proto::Vector *v9; // rax
  char v10; // al
  int32_t v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t WidgetNewConfig; // r14d
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  PlayerWidgetComp *WidgetComp; // rdx
  common::milog::MiLogStream *v18; // r14
  PlayerWidgetComp *v19; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-BCh]
  Vector3 v24; // [rsp+28h] [rbp-B8h] BYREF
  Vector3 v25; // [rsp+34h] [rbp-ACh] BYREF
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-90h] BYREF
  char v28[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 config_widget_ptr:128";
  *(_QWORD *)(v3 + 16) = WidgetHandler::onWidgetDoBagReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( proto::WidgetDoBagReq::op_info_case(req) == kLocationInfo
    && ((v6 = proto::WidgetDoBagReq::location_info(req),
         v7 = proto::WidgetCreateLocationInfo::pos(v6),
         Vector3::Vector3(&v24, v7),
         Vector3::isValid(&v24))
     && (v8 = proto::WidgetDoBagReq::location_info(req),
         v9 = proto::WidgetCreateLocationInfo::rot(v8),
         Vector3::Vector3(&v25, v9),
         Vector3::isValid(&v25))
      ? (v10 = 0)
      : (v10 = 1),
        v10) )
  {
    v11 = 201;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v12->design_config.json_config_mgr);
    proto::WidgetDoBagReq::material_id(req);
    WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 32), WidgetNewConfig);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/widget_handler.cpp",
        "onWidgetDoBagReq",
        131);
      v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v27,
              (const char (*)[29])"fidnWidgetConfigById fails, ");
      val = proto::WidgetDoBagReq::material_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v11 = -1;
    }
    else
    {
      v15 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( !std::vector<data::WidgetOccupyTag>::empty(&v15->tags) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/widget_handler.cpp",
          "onWidgetDoBagReq",
          136);
        v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v27,
                (const char (*)[49])"do bag function, tags must be empty, matrial_id:");
        val = proto::WidgetDoBagReq::material_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v11 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WidgetComp = Player::getWidgetComp(this->player_);
        ret = PlayerWidgetComp::checkWidgetUse(WidgetComp, req);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/widget_handler.cpp",
            "onWidgetDoBagReq",
            142);
          v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v27,
                  (const char (*)[36])"checkWidgetUse failed, material_id:");
          val = proto::WidgetDoBagReq::material_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v11 = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = Player::getWidgetComp(this->player_);
          ret = PlayerWidgetComp::doBag(v19, req, rsp_0);
          v11 = ret;
        }
      }
    }
    std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 32));
  }
  result = v11;
  if ( v28 == (char *)v3 )
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

// Line 151: range 000000001804414E-00000000180441AE
int32_t __cdecl WidgetHandler::onWidgetCaptureAnimalReq(
        WidgetHandler *const this,
        const proto::WidgetCaptureAnimalReq *req,
        proto::WidgetCaptureAnimalRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::doCapture(WidgetComp, req, rsp_0);
};

// Line 156: range 00000000180441B0-0000000018044210
int32_t __cdecl WidgetHandler::onWidgetUpdateExtraCDReq(
        WidgetHandler *const this,
        const proto::WidgetUpdateExtraCDReq *req,
        proto::WidgetUpdateExtraCDRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::doUpdateExtraCDGroup(WidgetComp, req, rsp_0);
};

// Line 162: range 0000000018044212-0000000018044272
int32_t __cdecl WidgetHandler::onReformFireworksReq(
        WidgetHandler *const this,
        const proto::ReformFireworksReq *req,
        proto::ReformFireworksRsp *rsp_0)
{
  PlayerFireworksComp *FireworksComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FireworksComp = Player::getFireworksComp(this->player_);
  return PlayerFireworksComp::onReformFireworks(FireworksComp, req, rsp_0);
};

// Line 168: range 0000000018044274-00000000180442D4
int32_t __cdecl WidgetHandler::onLaunchFireworksReq(
        WidgetHandler *const this,
        const proto::LaunchFireworksReq *req,
        proto::LaunchFireworksRsp *rsp_0)
{
  PlayerFireworksComp *FireworksComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FireworksComp = Player::getFireworksComp(this->player_);
  return PlayerFireworksComp::onLaunchFireworks(FireworksComp, req, rsp_0);
};

// Line 173: range 00000000180442D6-0000000018044336
int32_t __cdecl WidgetHandler::onChangeWidgetBackgroundActiveStateReq(
        WidgetHandler *const this,
        const proto::ChangeWidgetBackgroundActiveStateReq *req,
        proto::ChangeWidgetBackgroundActiveStateRsp *rsp_0)
{
  PlayerWidgetComp *WidgetComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  return PlayerWidgetComp::changeWidgetBackgroundActiveState(WidgetComp, req, rsp_0);
};
