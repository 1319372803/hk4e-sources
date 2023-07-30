// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/gadget_handler.cpp

// Line 39: range 00000000150F9864-00000000150FA3E6
int32_t __cdecl GadgetHandler::addPacketFuncToMap(GadgetHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  GadgetHandler **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-84h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v16; // [rsp+20h] [rbp-80h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  int (*__f[2])(GadgetHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+30h] [rbp-70h] BYREF
  std::_Bind_helper<false,int (GadgetHandler::*)(std::shared_ptr<common::minet::Packet>),GadgetHandler*,const std::_Placeholder<1>&>::type v19; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-40h] BYREF

  __x = 872;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v16, &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gadget_handler.cpp",
      "addPacketFuncToMap",
      40);
    common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 872LL);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 872;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 807;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v16, &__y) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gadget_handler.cpp",
        "addPacketFuncToMap",
        41);
      common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 807LL);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 807;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 881;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v16, &__y) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gadget_handler.cpp",
          "addPacketFuncToMap",
          42);
        common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 881LL);
        common::milog::MiLogStream::~MiLogStream(&v20);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 881;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 805;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v16, &__y) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gadget_handler.cpp",
            "addPacketFuncToMap",
            43);
          common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 805LL);
          common::milog::MiLogStream::~MiLogStream(&v20);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 805;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 865;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v16, &__y) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gadget_handler.cpp",
              "addPacketFuncToMap",
              44);
            common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 865LL);
            common::milog::MiLogStream::~MiLogStream(&v20);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __f[0] = (int (*)(GadgetHandler *, std::shared_ptr<common::minet::Packet>))GadgetHandler::onVehicleInteractReq;
            __f[1] = 0LL;
            std::bind<int (GadgetHandler::*)(std::shared_ptr<common::minet::Packet>),GadgetHandler*,std::_Placeholder<1> const&>(
              &v19,
              __f,
              (GadgetHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v7,
              v8);
            __x = 865;
            v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GadgetHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GadgetHandler*,std::_Placeholder<1>)>>(
              v9,
              &v19);
            __x = 893;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v16, &__y) )
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/gadget_handler.cpp",
                "addPacketFuncToMap",
                45);
              common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 893LL);
              common::milog::MiLogStream::~MiLogStream(&v20);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 893;
              v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_map,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                v10,
                (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 863;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v16, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v20,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/gadget_handler.cpp",
                  "addPacketFuncToMap",
                  46);
                common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 863LL);
                common::milog::MiLogStream::~MiLogStream(&v20);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 863;
                v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_map,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                  v11,
                  (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 894;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v16, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v20,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/gadget_handler.cpp",
                    "addPacketFuncToMap",
                    47);
                  common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 894LL);
                  common::milog::MiLogStream::~MiLogStream(&v20);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 894;
                  v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                    v12,
                    (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 843;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v16, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v20,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/gadget_handler.cpp",
                      "addPacketFuncToMap",
                      48);
                    common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 843LL);
                    common::milog::MiLogStream::~MiLogStream(&v20);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 843;
                    v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                      v13,
                      (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 876;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v16, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v20,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/gadget_handler.cpp",
                        "addPacketFuncToMap",
                        49);
                      common::milog::MiLogStream::operator()(&v20, off_2570C7C0, 876LL);
                      common::milog::MiLogStream::~MiLogStream(&v20);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 876;
                      v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}>(
                        v14,
                        (GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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
};

// Line 40: range 00000000150F7D90-00000000150F80AC
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::GadgetInteractReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GadgetInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GadgetInteractRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GadgetInteractReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GadgetInteractReq const>(
         (const std::shared_ptr<const proto::GadgetInteractReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      40);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GadgetInteractReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GadgetInteractReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GadgetInteractRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GadgetInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GadgetInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GadgetInteractRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GadgetInteractReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GadgetInteractReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onGadgetInteractReq(this, v8, rsp_0);
    proto::GadgetInteractRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GadgetInteractRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GadgetInteractRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GadgetInteractRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GadgetInteractRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GadgetInteractRsp>::~shared_ptr((std::shared_ptr<proto::GadgetInteractRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GadgetInteractReq const>::~shared_ptr((std::shared_ptr<const proto::GadgetInteractReq> *const)(v2 + 32));
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

// Line 41: range 00000000150F80AE-00000000150F83CA
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::SelectWorktopOptionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SelectWorktopOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SelectWorktopOptionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SelectWorktopOptionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SelectWorktopOptionReq const>(
         (const std::shared_ptr<const proto::SelectWorktopOptionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      41);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SelectWorktopOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SelectWorktopOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SelectWorktopOptionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SelectWorktopOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SelectWorktopOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SelectWorktopOptionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SelectWorktopOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SelectWorktopOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onSelectWorktopOptionReq(this, v8, rsp_0);
    proto::SelectWorktopOptionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SelectWorktopOptionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SelectWorktopOptionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SelectWorktopOptionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SelectWorktopOptionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SelectWorktopOptionRsp>::~shared_ptr((std::shared_ptr<proto::SelectWorktopOptionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SelectWorktopOptionReq const>::~shared_ptr((std::shared_ptr<const proto::SelectWorktopOptionReq> *const)(v2 + 32));
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

// Line 42: range 00000000150F83CC-00000000150F85AE
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int updated; // r14d
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::UpdateAbilityCreatedMovingPlatformNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:42";
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdateAbilityCreatedMovingPlatformNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdateAbilityCreatedMovingPlatformNotify const>(
         (const std::shared_ptr<const proto::UpdateAbilityCreatedMovingPlatformNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    updated = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::UpdateAbilityCreatedMovingPlatformNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdateAbilityCreatedMovingPlatformNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    updated = GadgetHandler::onUpdateAbilityCreatedMovingPlatformNotify(this, v7);
  }
  std::shared_ptr<proto::UpdateAbilityCreatedMovingPlatformNotify const>::~shared_ptr((std::shared_ptr<const proto::UpdateAbilityCreatedMovingPlatformNotify> *const)(v2 + 32));
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

// Line 43: range 00000000150F85B0-00000000150F88CC
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::FoundationReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FoundationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FoundationRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FoundationReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FoundationReq const>((const std::shared_ptr<const proto::FoundationReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      43);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FoundationReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FoundationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FoundationRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FoundationRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FoundationRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FoundationRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FoundationReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FoundationReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onFoundationReq(this, v8, rsp_0);
    proto::FoundationRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FoundationRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FoundationRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FoundationRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FoundationRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FoundationRsp>::~shared_ptr((std::shared_ptr<proto::FoundationRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FoundationReq const>::~shared_ptr((std::shared_ptr<const proto::FoundationReq> *const)(v2 + 32));
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

// Line 45: range 00000000150F88CE-00000000150F8BEA
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::CreateVehicleReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CreateVehicleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CreateVehicleRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CreateVehicleReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CreateVehicleReq const>(
         (const std::shared_ptr<const proto::CreateVehicleReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CreateVehicleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CreateVehicleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CreateVehicleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CreateVehicleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CreateVehicleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CreateVehicleRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CreateVehicleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CreateVehicleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onCreateVehicleReq(this, v8, rsp_0);
    proto::CreateVehicleRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CreateVehicleRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CreateVehicleRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CreateVehicleRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CreateVehicleRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CreateVehicleRsp>::~shared_ptr((std::shared_ptr<proto::CreateVehicleRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CreateVehicleReq const>::~shared_ptr((std::shared_ptr<const proto::CreateVehicleReq> *const)(v2 + 32));
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

// Line 46: range 00000000150F8BEC-00000000150F8F08
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::ProjectorOptionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ProjectorOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ProjectorOptionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ProjectorOptionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ProjectorOptionReq const>(
         (const std::shared_ptr<const proto::ProjectorOptionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      46);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ProjectorOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ProjectorOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ProjectorOptionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ProjectorOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ProjectorOptionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ProjectorOptionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ProjectorOptionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ProjectorOptionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onProjectorOptionReq(this, v8, rsp_0);
    proto::ProjectorOptionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ProjectorOptionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ProjectorOptionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ProjectorOptionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ProjectorOptionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ProjectorOptionRsp>::~shared_ptr((std::shared_ptr<proto::ProjectorOptionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ProjectorOptionReq const>::~shared_ptr((std::shared_ptr<const proto::ProjectorOptionReq> *const)(v2 + 32));
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

// Line 47: range 00000000150F8F0A-00000000150F9226
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::RequestLiveInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::RequestLiveInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::RequestLiveInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RequestLiveInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RequestLiveInfoReq const>(
         (const std::shared_ptr<const proto::RequestLiveInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      47);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::RequestLiveInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RequestLiveInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RequestLiveInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RequestLiveInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RequestLiveInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RequestLiveInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::RequestLiveInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RequestLiveInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onRequestLiveInfoReq(this, v8, rsp_0);
    proto::RequestLiveInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::RequestLiveInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::RequestLiveInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::RequestLiveInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::RequestLiveInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::RequestLiveInfoRsp>::~shared_ptr((std::shared_ptr<proto::RequestLiveInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RequestLiveInfoReq const>::~shared_ptr((std::shared_ptr<const proto::RequestLiveInfoReq> *const)(v2 + 32));
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

// Line 48: range 00000000150F9228-00000000150F9544
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::GadgetChangeLevelTagReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GadgetChangeLevelTagRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GadgetChangeLevelTagRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GadgetChangeLevelTagReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GadgetChangeLevelTagReq const>(
         (const std::shared_ptr<const proto::GadgetChangeLevelTagReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      48);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GadgetChangeLevelTagReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GadgetChangeLevelTagReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GadgetChangeLevelTagRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GadgetChangeLevelTagRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GadgetChangeLevelTagRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GadgetChangeLevelTagRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GadgetChangeLevelTagReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GadgetChangeLevelTagReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onGadgetChangeLevelTagReq(this, v8, rsp_0);
    proto::GadgetChangeLevelTagRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GadgetChangeLevelTagRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GadgetChangeLevelTagRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GadgetChangeLevelTagRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GadgetChangeLevelTagRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GadgetChangeLevelTagRsp>::~shared_ptr((std::shared_ptr<proto::GadgetChangeLevelTagRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GadgetChangeLevelTagReq const>::~shared_ptr((std::shared_ptr<const proto::GadgetChangeLevelTagReq> *const)(v2 + 32));
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

// Line 49: range 00000000150F9546-00000000150F9862
int __cdecl GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator()(
        const GadgetHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GadgetHandler *this; // r14
  std::__shared_ptr_access<const proto::NightCrowGadgetObservationMatchReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::NightCrowGadgetObservationMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = GadgetHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#9}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::NightCrowGadgetObservationMatchReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::NightCrowGadgetObservationMatchReq const>(
         (const std::shared_ptr<const proto::NightCrowGadgetObservationMatchReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "operator()",
      49);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::NightCrowGadgetObservationMatchReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NightCrowGadgetObservationMatchReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::NightCrowGadgetObservationMatchRsp>();
    rsp_0 = std::__shared_ptr_access<proto::NightCrowGadgetObservationMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::NightCrowGadgetObservationMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::NightCrowGadgetObservationMatchRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::NightCrowGadgetObservationMatchReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NightCrowGadgetObservationMatchReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = GadgetHandler::onNightCrowGadgetObservationMatchReq(this, v8, rsp_0);
    proto::NightCrowGadgetObservationMatchRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::NightCrowGadgetObservationMatchRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp>::~shared_ptr((std::shared_ptr<proto::NightCrowGadgetObservationMatchRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::NightCrowGadgetObservationMatchReq const>::~shared_ptr((std::shared_ptr<const proto::NightCrowGadgetObservationMatchReq> *const)(v2 + 32));
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

// Line 54: range 00000000150FA3E8-00000000150FB3C4
int32_t __cdecl GadgetHandler::onGadgetInteractReq(
        GadgetHandler *const this,
        const proto::GadgetInteractReq *req,
        proto::GadgetInteractRsp *rsp_0)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t GadgetId; // eax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  bool isGadgetInteractSystemClosed; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  const Vector3 *v31; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  const Vector3 *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  PlayerSceneComp *SceneComp; // r15
  float v44; // r14d
  Entity *v45; // rsi
  PlayerSceneComp *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 (__fastcall *v51)(unsigned __int64, Player *, unsigned __int64); // r8
  unsigned __int64 v52; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *avatar; // [rsp+8h] [rbp-1B8h]
  float check_dist; // [rsp+14h] [rbp-1ACh]
  unsigned int val; // [rsp+38h] [rbp-188h] BYREF
  int32_t ret; // [rsp+3Ch] [rbp-184h]
  proto::InterOpType op_type; // [rsp+40h] [rbp-180h]
  uint32_t gadget_id; // [rsp+44h] [rbp-17Ch]
  uint32_t normal_check_distance; // [rsp+48h] [rbp-178h]
  proto::InteractType type; // [rsp+4Ch] [rbp-174h]
  std::shared_ptr<Config> v64; // [rsp+50h] [rbp-170h] BYREF
  std::shared_ptr<Config> v65; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v66; // [rsp+70h] [rbp-150h] BYREF
  char v67[304]; // [rsp+90h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 12 entity_id:61 48 4 18 only_vision_uid:79 64 4 12 distance:103 80 4 28 forbid_interact_d"
                        "istance:104 96 16 12 scene_ptr:55 128 16 13 entity_ptr:67 160 16 13 avatar_ptr:73 192 16 13 gadg"
                        "et_ptr:85 224 16 9 param:121";
  *(_QWORD *)(v4 + 16) = GadgetHandler::onGadgetInteractReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
  {
    *(_DWORD *)(v4 + 32) = proto::GadgetInteractReq::gadget_entity_id(req);
    op_type = proto::GadgetInteractReq::op_type(req);
    gadget_id = proto::GadgetInteractReq::gadget_id(req);
    proto::GadgetInteractRsp::set_gadget_entity_id(rsp_0, *(_DWORD *)(v4 + 32));
    proto::GadgetInteractRsp::set_op_type(rsp_0, op_type);
    proto::GadgetInteractRsp::set_gadget_id(rsp_0, gadget_id);
    v9 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 120LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v10)(v4 + 128, v9, *(unsigned int *)(v4 + 32));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onGadgetInteractReq",
        70);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v66,
              (const char (*)[29])"findEntity fails, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v66);
      v8 = 504;
LABEL_73:
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 128));
      goto LABEL_74;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v4 + 160));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gadget_handler.cpp",
        "onGadgetInteractReq",
        76);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v66,
              (const char (*)[26])"getCurAvatar fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v66);
      v8 = -1;
      goto LABEL_72;
    }
    v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    *(_DWORD *)(v4 + 48) = Entity::getOnlyVisionUid(v13);
    if ( !*(_DWORD *)(v4 + 48) )
      goto LABEL_27;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Player::getUid(this->player_) == *(_DWORD *)(v4 + 48) )
LABEL_27:
      v14 = 0;
    else
      v14 = 1;
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onGadgetInteractReq",
        82);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v66,
              (const char (*)[35])"invalid interact, only_vision_uid:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v66);
      v8 = 802;
      goto LABEL_72;
    }
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v4 + 192));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 192), 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 224));
      p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224))->feature_switch_mgr;
      v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      GadgetId = Gadget::getGadgetId(v19);
      LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isGadgetInteractClosed(p_feature_switch_mgr, GadgetId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
      if ( (_BYTE)p_feature_switch_mgr )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onGadgetInteractReq",
          91);
        v21 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v66,
                (const char (*)[49])"[FEATURE_SWITCH] GadgetInteractSystem gadget_id:");
        v22 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        val = Gadget::getGadgetId(v22);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream(&v66);
        v8 = 142;
LABEL_71:
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 192));
LABEL_72:
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 160));
        goto LABEL_73;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 224));
      v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
      isGadgetInteractSystemClosed = FeatureSwitchMgr::isGadgetInteractSystemClosed(&v24->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
      if ( isGadgetInteractSystemClosed )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onGadgetInteractReq",
          96);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v66,
          (const char (*)[45])"[FEATURE_SWITCH] GadgetInteractSystem closed");
        common::milog::MiLogStream::~MiLogStream(&v66);
        v8 = 142;
        goto LABEL_71;
      }
    }
    v26 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_load8();
    v27 = *(_QWORD *)v26 + 192LL;
    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v27)(v26) != 1 )
    {
      v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      Position = Entity::getPosition((const Entity *const)v28);
      v30 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      v31 = Entity::getPosition(v30);
      *(float *)v3.m128i_i32 = getDistance(v31, Position);
      *(_DWORD *)(v4 + 64) = _mm_cvtsi128_si32(v3);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v64);
      v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
      *(_DWORD *)(v4 + 80) = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v32->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v64);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v65);
      v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
      normal_check_distance = ConstValueExcelConfigMgr::getGadgetInteractCheckDistance(&v33->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v65);
      if ( *(float *)(v4 + 64) > (float)*(int *)(v4 + 80) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onGadgetInteractReq",
          108);
        v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v66, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
        v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v35, (const char (*)[10])" avatar: ");
        v37 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v38 = Entity::getPosition((const Entity *const)v37);
        v39 = operator<<(v36, v38);
        v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])" distance:");
        v41 = common::milog::MiLogStream::operator<<<float,(float *)0>(v40, (const float *)(v4 + 64));
        v42 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])" limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v66);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        check_dist = (float)*(int *)(v4 + 80);
        v44 = *(float *)(v4 + 64);
        avatar = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v45 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        PlayerSceneComp::tryRecordGadgetInteractBeyondDistanceLog(SceneComp, v45, avatar, req, v44, check_dist);
        v8 = 520;
        goto LABEL_71;
      }
      if ( *(float *)(v4 + 64) > (float)(int)normal_check_distance )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v46 = Player::getSceneComp(this->player_);
        PlayerSceneComp::tryRecordGadgetInteractBeyondCheckDistanceLog(
          v46,
          *(float *)(v4 + 64),
          (float)(int)normal_check_distance);
      }
    }
    v47 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
      v47 = __asan_report_load8();
    v48 = *(_QWORD *)v47 + 192LL;
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      v47 = __asan_report_load8();
    type = (*(unsigned int (__fastcall **)(unsigned __int64))v48)(v47);
    proto::GadgetInteractRsp::set_interact_type(rsp_0, type);
    ret = -1;
    *(_DWORD *)(v4 + 224) = 0;
    *(_DWORD *)(v4 + 228) = 0;
    *(_DWORD *)(v4 + 232) = 0;
    *(_DWORD *)(v4 + 236) = 0;
    *(_DWORD *)(v4 + 224) = proto::GadgetInteractReq::resin_cost_type(req);
    *(_DWORD *)(v4 + 236) = proto::GadgetInteractReq::ui_interact_id(req);
    if ( op_type == INTER_OP_START )
    {
      v49 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
      v50 = *(_QWORD *)v49 + 200LL;
      if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
      v51 = *(__int64 (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v50;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
    }
    else
    {
      v49 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
      v52 = *(_QWORD *)v49 + 208LL;
      if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
      v51 = *(__int64 (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v52;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        v49 = __asan_report_load8();
    }
    ret = v51(v49, this->player_, v4 + 224);
    v8 = ret;
    goto LABEL_71;
  }
  common::milog::MiLogStream::create(
    &v66,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/gadget_handler.cpp",
    "onGadgetInteractReq",
    58);
  v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v66,
         (const char (*)[24])"scene_ptr is null, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v66);
  v8 = -1;
LABEL_74:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  result = v8;
  if ( v67 == (char *)v4 )
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

// Line 132: range 00000000150FB3C6-00000000150FBD27
int32_t __cdecl GadgetHandler::onFoundationReq(
        GadgetHandler *const this,
        const proto::FoundationReq *req,
        proto::FoundationRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::FoundationOpType v6; // edx
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerGmComp *GmComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const Vector3 *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 (__fastcall *v21)(unsigned __int64, Player *, unsigned __int64); // r8
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 (__fastcall *v26)(unsigned __int64, Player *, unsigned __int64); // r8
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  uint32_t check_distance; // [rsp+28h] [rbp-148h]
  int32_t ret; // [rsp+2Ch] [rbp-144h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-130h] BYREF
  char v34[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 entity_id:133 64 16 13 scene_ptr:136 96 16 14 gadget_ptr:142 128 16 14 avatar_ptr:148 "
                        "160 16 23 foundation_comp_ptr:162 192 16 9 param:169";
  *(_QWORD *)(v3 + 16) = GadgetHandler::onFoundationReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::FoundationReq::gadget_entity_id(req);
  proto::FoundationRsp::set_gadget_entity_id(rsp_0, *(_DWORD *)(v3 + 48));
  v6 = proto::FoundationReq::op_type(req);
  proto::FoundationRsp::set_op_type(rsp_0, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onFoundationReq",
      139);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v33,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v8 = -1;
  }
  else
  {
    v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v9);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onFoundationReq",
        145);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v33,
              (const char (*)[29])"findEntity fails, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v8 = 504;
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
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gadget_handler.cpp",
          "onFoundationReq",
          151);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v33,
                (const char (*)[26])"getCurAvatar fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v8 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v12->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GmComp = Player::getGmComp(this->player_);
        if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 7u)
          || (v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
              Position = Entity::getPosition((const Entity *const)v14),
              v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
              v17 = Entity::getPosition((const Entity *const)v16),
              getDistance(v17, Position) <= (float)(int)check_distance) )
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<FoundationComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 160));
          if ( std::operator==<FoundationComp>((const std::shared_ptr<FoundationComp> *)(v3 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/gadget_handler.cpp",
              "onFoundationReq",
              165);
            v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v33,
                    (const char (*)[42])"findComp FoundationComp fails, entity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v33);
            v8 = 504;
          }
          else
          {
            *(_DWORD *)(v3 + 192) = 0;
            *(_DWORD *)(v3 + 196) = 0;
            *(_DWORD *)(v3 + 200) = 0;
            *(_DWORD *)(v3 + 204) = 0;
            *(_DWORD *)(v3 + 196) = proto::FoundationReq::op_type(req);
            *(_DWORD *)(v3 + 200) = proto::FoundationReq::building_id(req);
            v19 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              v19 = __asan_report_load8();
            v20 = *(_QWORD *)v19 + 200LL;
            if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
              v19 = __asan_report_load8();
            v21 = *(__int64 (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v20;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              v19 = __asan_report_load8();
            ret = v21(v19, this->player_, v3 + 192);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gadget_handler.cpp",
                "onFoundationReq",
                175);
              v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v33,
                      (const char (*)[30])"interactCheck failed, entity:");
              v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v22, v23);
              common::milog::MiLogStream::~MiLogStream(&v33);
              v8 = ret;
            }
            else
            {
              v24 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8();
              v25 = *(_QWORD *)v24 + 208LL;
              if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8();
              v26 = *(__int64 (__fastcall **)(unsigned __int64, Player *, unsigned __int64))v25;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8();
              v8 = v26(v24, this->player_, v3 + 192);
            }
          }
          std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v3 + 160));
        }
        else
        {
          v8 = 520;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v8;
  if ( v34 == (char *)v3 )
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

// Line 182: range 00000000150FBD28-00000000150FC5DA
int32_t __cdecl GadgetHandler::onSelectWorktopOptionReq(
        GadgetHandler *const this,
        const proto::SelectWorktopOptionReq *req,
        proto::SelectWorktopOptionRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const Vector3 *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v19; // rax
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  WorktopComp *v22; // r14
  uint32_t Uid; // esi
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  uint32_t option_id; // [rsp+28h] [rbp-128h]
  uint32_t check_distance; // [rsp+2Ch] [rbp-124h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-120h] BYREF
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
  *(_QWORD *)(v3 + 8) = "5 48 4 13 entity_id:183 64 16 13 scene_ptr:187 96 16 14 gadget_ptr:193 128 16 14 avatar_ptr:199 "
                        "160 16 20 worktop_comp_ptr:210";
  *(_QWORD *)(v3 + 16) = GadgetHandler::onSelectWorktopOptionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::SelectWorktopOptionReq::gadget_entity_id(req);
  option_id = proto::SelectWorktopOptionReq::option_id(req);
  proto::SelectWorktopOptionRsp::set_gadget_entity_id(rsp_0, *(_DWORD *)(v3 + 48));
  proto::SelectWorktopOptionRsp::set_option_id(rsp_0, option_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onSelectWorktopOptionReq",
      190);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v30,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v8);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onSelectWorktopOptionReq",
        196);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v30,
             (const char (*)[29])"findEntity fails, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v7 = 504;
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
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onSelectWorktopOptionReq",
          202);
        v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v30,
                (const char (*)[26])"getCurAvatar fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v7 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v11->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        Position = Entity::getPosition((const Entity *const)v12);
        v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v15 = Entity::getPosition((const Entity *const)v14);
        if ( getDistance(v15, Position) <= (float)(int)check_distance )
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<WorktopComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 160));
          if ( std::operator==<WorktopComp>((const std::shared_ptr<WorktopComp> *)(v3 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/gadget_handler.cpp",
              "onSelectWorktopOptionReq",
              213);
            v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v30,
                    (const char (*)[39])"findComp WorktopComp fails, entity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v30);
            v7 = 504;
          }
          else
          {
            v17 = std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( WorktopComp::getIsGuestCanOperate(v17) )
              goto LABEL_30;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = Player::getSceneComp(this->player_);
            if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
              goto LABEL_30;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v19 = Player::getSceneComp(this->player_);
            if ( !PlayerSceneComp::isInMyHomeWorld(v19) )
              v20 = 1;
            else
LABEL_30:
              v20 = 0;
            if ( v20 )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gadget_handler.cpp",
                "onSelectWorktopOptionReq",
                218);
              v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v30,
                      (const char (*)[47])"guest cannot select worktop option, entity_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v30);
              v7 = 1201;
            }
            else
            {
              v22 = std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v7 = WorktopComp::selectOption(v22, this->player_, Uid, option_id);
            }
          }
          std::shared_ptr<WorktopComp>::~shared_ptr((std::shared_ptr<WorktopComp> *const)(v3 + 160));
        }
        else
        {
          v7 = 520;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
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

// Line 226: range 00000000150FC5DC-00000000150FCCA7
int32_t __cdecl GadgetHandler::onUpdateAbilityCreatedMovingPlatformNotify(
        GadgetHandler *const this,
        const proto::UpdateAbilityCreatedMovingPlatformNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  uint32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  Player *player; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto::UpdateAbilityCreatedMovingPlatformNotify_OpType v18; // eax
  PlatformComp *v19; // rax
  PlatformComp *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 scene_ptr:227 64 16 14 gadget_ptr:233 96 16 21 platform_comp_ptr:244";
  *(_QWORD *)(v2 + 16) = GadgetHandler::onUpdateAbilityCreatedMovingPlatformNotify;
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
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onUpdateAbilityCreatedMovingPlatformNotify",
      230);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::UpdateAbilityCreatedMovingPlatformNotify::entity_id(notify);
    Scene::findEntity<Gadget>((const Scene *const)(v2 + 64), v7);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onUpdateAbilityCreatedMovingPlatformNotify",
        236);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v26,
             (const char (*)[29])"findEntity fails, entity_id:");
      val = proto::UpdateAbilityCreatedMovingPlatformNotify::entity_id(notify);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v6 = 504;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( !Player::isAuthorityOf(player, v10) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onUpdateAbilityCreatedMovingPlatformNotify",
          241);
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v26, (const char (*)[8])"gadget:");
        v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, v12);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v6 = -1;
      }
      else
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<PlatformComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 96));
        if ( std::operator==<PlatformComp>((const std::shared_ptr<PlatformComp> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/gadget_handler.cpp",
            "onUpdateAbilityCreatedMovingPlatformNotify",
            247);
          v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v26,
                  (const char (*)[51])"gadget_ptr->findComp<PlatformComp> failed, gadget:");
          v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v6 = -1;
        }
        else
        {
          v15 = std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( PlatformComp::getMovingPlatformType(v15) == MOVING_PLATFORM_ABILITY )
          {
            ret = -1;
            v18 = proto::UpdateAbilityCreatedMovingPlatformNotify::op_type(notify);
            if ( v18 == UpdateAbilityCreatedMovingPlatformNotify_OpType_OP_ACTIVATE )
            {
              v19 = std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              ret = PlatformComp::active(v19);
            }
            else if ( v18 == UpdateAbilityCreatedMovingPlatformNotify_OpType_OP_DEACTIVATE )
            {
              v20 = std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              ret = PlatformComp::deactive(v20);
            }
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v26,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gadget_handler.cpp",
                "onUpdateAbilityCreatedMovingPlatformNotify",
                269);
              v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v26,
                      (const char (*)[22])"update fails, gadget:");
              v22 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v21, v22);
              common::milog::MiLogStream::~MiLogStream(&v26);
              v6 = ret;
            }
            else
            {
              v6 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/gadget_handler.cpp",
              "onUpdateAbilityCreatedMovingPlatformNotify",
              252);
            v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v26,
                    (const char (*)[49])"gadget is not created by ability failed, gadget:");
            v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v16, v17);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v6 = -1;
          }
        }
        std::shared_ptr<PlatformComp>::~shared_ptr((std::shared_ptr<PlatformComp> *const)(v2 + 96));
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
  if ( v27 == (char *)v2 )
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

// Line 276: range 00000000150FCCA8-00000000150FD72B
int32_t __cdecl GadgetHandler::onVehicleInteractReq(GadgetHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  proto::VehicleInteractType v8; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint64_t Guid; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  GadgetVehicleComp *v20; // r14
  GadgetVehicleComp *v21; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1BCh] BYREF
  int32_t ret; // [rsp+18h] [rbp-1B8h]
  uint32_t slot; // [rsp+1Ch] [rbp-1B4h]
  const proto::VehicleInteractReq *req; // [rsp+20h] [rbp-1B0h]
  proto::VehicleMember *member_proto; // [rsp+28h] [rbp-1A8h]
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-190h] BYREF
  char v30[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 13 entity_id:285 48 16 11 req_ptr:277 80 16 13 scene_ptr:279 112 16 14 avatar_ptr:291 144"
                        " 16 14 entity_ptr:297 176 16 14 gadget_ptr:303 208 16 20 vehicle_comp_ptr:309 240 40 7 rsp:278";
  *(_QWORD *)(v3 + 16) = GadgetHandler::onVehicleInteractReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::VehicleInteractReq>((common::minet::Packet *const)(v3 + 48));
  if ( std::operator==<proto::VehicleInteractReq const>(
         (const std::shared_ptr<const proto::VehicleInteractReq> *)(v3 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "onVehicleInteractReq",
      277);
    common::milog::MiLogStream::operator()(&v29, off_2570E240);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::VehicleInteractReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::VehicleInteractReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    proto::VehicleInteractRsp::VehicleInteractRsp((proto::VehicleInteractRsp *const)(v3 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onVehicleInteractReq",
        282);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v29,
             (const char (*)[24])"scene_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 32) = proto::VehicleInteractReq::entity_id(req);
      proto::VehicleInteractRsp::set_entity_id((proto::VehicleInteractRsp *const)(v3 + 240), *(_DWORD *)(v3 + 32));
      v8 = proto::VehicleInteractReq::interact_type(req);
      proto::VehicleInteractRsp::set_interact_type((proto::VehicleInteractRsp *const)(v3 + 240), v8);
      member_proto = proto::VehicleInteractRsp::mutable_member((proto::VehicleInteractRsp *const)(v3 + 240));
      slot = proto::VehicleInteractReq::pos(req);
      proto::VehicleMember::set_pos(member_proto, slot);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getCurAvatar((Player *const)(v3 + 112));
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 112)) )
      {
        v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        Guid = Avatar::getGuid(v9);
        proto::VehicleMember::set_avatar_guid(member_proto, Guid);
      }
      v11 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(_QWORD *)v11 + 120LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v12)(
        v3 + 144,
        v11,
        *(unsigned int *)(v3 + 32));
      if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onVehicleInteractReq",
          300);
        v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v29,
                (const char (*)[30])"findEntity failed, entity_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v6 = 504;
      }
      else
      {
        std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v3 + 176));
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/gadget_handler.cpp",
            "onVehicleInteractReq",
            306);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v29, (const char (*)[11])"entity id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])off_2570E2C0);
          common::milog::MiLogStream::~MiLogStream(&v29);
          v6 = 801;
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 208));
          if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 208)) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/gadget_handler.cpp",
              "onVehicleInteractReq",
              312);
            v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v29,
                    (const char (*)[11])"entity_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])off_2570E340);
            common::milog::MiLogStream::~MiLogStream(&v29);
            v6 = 823;
          }
          else
          {
            ret = 0;
            if ( proto::VehicleInteractReq::interact_type(req) == VEHICLE_INTERACT_IN )
            {
              v20 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toPtr<Player,Player>((Player *)&p_player_ptr);
              ret = GadgetVehicleComp::enterVehicle(
                      v20,
                      slot,
                      (const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *)&p_player_ptr,
                      v2);
              std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
            }
            else
            {
              v21 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toPtr<Player,Player>((Player *)&p_player_ptr);
              ret = GadgetVehicleComp::exitVehicle(v21, &p_player_ptr);
              std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
            }
            proto::VehicleInteractRsp::set_retcode((proto::VehicleInteractRsp *const)(v3 + 240), ret);
            if ( ret )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 240));
            }
            v6 = ret;
          }
          std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 208));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 176));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 144));
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
    proto::VehicleInteractRsp::~VehicleInteractRsp((proto::VehicleInteractRsp *const)(v3 + 240));
  }
  std::shared_ptr<proto::VehicleInteractReq const>::~shared_ptr((std::shared_ptr<const proto::VehicleInteractReq> *const)(v3 + 48));
  result = v6;
  if ( v30 == (char *)v3 )
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

// Line 334: range 00000000150FD72C-00000000150FE117
int32_t __cdecl GadgetHandler::onCreateVehicleReq(
        GadgetHandler *const this,
        const proto::CreateVehicleReq *req,
        proto::CreateVehicleRsp *rsp_0)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const proto::Vector *v15; // rax
  const proto::Vector *v16; // rax
  uint32_t v17; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r14
  PlayerVehicleComp *VehicleComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  bool v30; // r14
  uint32_t v31; // r15d
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  PlayerVehicleComp *v36; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t EntityId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  float distance; // [rsp+28h] [rbp-168h]
  uint32_t last_create_vehicle_time; // [rsp+2Ch] [rbp-164h]
  uint32_t now; // [rsp+30h] [rbp-160h]
  Vector3 pos2; // [rsp+34h] [rbp-15Ch] BYREF
  std::shared_ptr<Config> v46; // [rsp+40h] [rbp-150h] BYREF
  std::shared_ptr<Player> v47; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-130h] BYREF
  char v49[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 scene_point_id:343 48 4 14 vehicle_id:350 64 12 7 pos:352 96 12 7 rot:353 128 16 13 sc"
                        "ene_ptr:336 160 16 19 scene_point_ptr:355 192 16 14 gadget_ptr:373";
  *(_QWORD *)(v4 + 16) = GadgetHandler::onCreateVehicleReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onCreateVehicleReq",
      339);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v48, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])off_2570E480);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v9 = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 32) = proto::CreateVehicleReq::scene_point_id(req);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( !Scene::isPointUnlocked(v10, *(_DWORD *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onCreateVehicleReq",
        346);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v48, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" point_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" not unlock");
      common::milog::MiLogStream::~MiLogStream(&v48);
      v9 = 828;
    }
    else
    {
      *(_DWORD *)(v4 + 48) = proto::CreateVehicleReq::vehicle_id(req);
      proto::CreateVehicleRsp::set_vehicle_id(rsp_0, *(_DWORD *)(v4 + 48));
      v15 = proto::CreateVehicleReq::pos(req);
      Vector3::Vector3((Vector3 *const)(v4 + 64), v15);
      v16 = proto::CreateVehicleReq::rot(req);
      Vector3::Vector3((Vector3 *const)(v4 + 96), v16);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v47);
      v17 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)
          + 93080;
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      SceneId = Scene::getSceneId(v18);
      JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v4 + 160), v17, SceneId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v47);
      if ( std::operator==<data::ConfigScenePoint>(0LL, (const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gadget_handler.cpp",
          "onCreateVehicleReq",
          358);
        v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v48, (const char (*)[10])"scene_id:");
        v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        val = Scene::getSceneId(v21);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" point_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v48);
        v9 = -1;
      }
      else
      {
        v25 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        Vector3::Vector3(&pos2, &v25->pos);
        *(float *)v3.m128i_i32 = getPlaneDistance((const Vector3 *)(v4 + 64), &pos2);
        distance = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        v27 = distance > ConstValueExcelConfigMgr::getCreateVehicleMaxDistance(&v26->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v46);
        if ( v27 )
        {
          v9 = 827;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          VehicleComp = Player::getVehicleComp(this->player_);
          last_create_vehicle_time = PlayerVehicleComp::getLastCreateVehicleTime(VehicleComp);
          now = common::tools::TimeUtils::getNow();
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v47);
          v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
          v30 = now < last_create_vehicle_time
                    + ConstValueExcelConfigMgr::getCreateVehicleCD(&v29->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v47);
          if ( v30 )
          {
            v9 = 826;
          }
          else
          {
            v31 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            toPtr<Player,Player>((Player *)&v47);
            Scene::createPlayerVehicle(
              (Scene *const)(v4 + 192),
              v31,
              (const Vector3 *)*(unsigned int *)(v4 + 48),
              (const Vector3 *)(v4 + 64),
              (PlayerPtr *)(v4 + 96),
              (proto::CreateGadgetReason)&v47,
              1u);
            std::shared_ptr<Player>::~shared_ptr(&v47);
            if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gadget_handler.cpp",
                "onCreateVehicleReq",
                376);
              v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v48, (const char (*)[6])"uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
              v34 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v33,
                      (const char (*)[21])" create vehicle_id: ");
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v4 + 48));
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])" failed");
              common::milog::MiLogStream::~MiLogStream(&v48);
              v9 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v36 = Player::getVehicleComp(this->player_);
              PlayerVehicleComp::setLastCreateVehicleTime(v36, now);
              v37 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              EntityId = Entity::getEntityId((const Entity *const)v37);
              proto::CreateVehicleRsp::set_entity_id(rsp_0, EntityId);
              v9 = 0;
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 192));
          }
        }
      }
      std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 160));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
  result = v9;
  if ( v49 == (char *)v4 )
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

// Line 385: range 00000000150FE118-00000000150FEF0F
int32_t __cdecl GadgetHandler::onProjectorOptionReq(
        GadgetHandler *const this,
        const proto::ProjectorOptionReq *req,
        proto::ProjectorOptionRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // r14d
  common::milog::MiLogStream *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  data::EntityType v27; // eax
  common::milog::MiLogStream *v28; // r14
  google::protobuf::uint32 v29; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  Group *v35; // r14
  uint32_t v36; // eax
  Gadget *v37; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  Gadget *v43; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  uint32_t State; // eax
  Player *player; // r14
  int32_t result; // eax
  std::string v52; // [rsp+0h] [rbp-180h]
  proto::ProjectorOptionRsp *const rsp_0a; // [rsp+8h] [rbp-178h]
  const proto::ProjectorOptionReq *reqa; // [rsp+10h] [rbp-170h]
  GadgetHandler *thisa; // [rsp+18h] [rbp-168h]
  unsigned int v56; // [rsp+20h] [rbp-160h] BYREF
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  char *v58; // [rsp+28h] [rbp-158h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-140h] BYREF
  std::string v61; // [rsp+50h] [rbp-130h] BYREF
  char v62[272]; // [rsp+70h] [rbp-110h] BYREF

  *(&v52._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v52._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v52._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:386 64 16 13 scene_ptr:389 96 16 17 cur_world_ptr:395 128 16 14 gadget_ptr:406 "
                        "160 16 13 group_ptr:417 192 16 11 log_ptr:450";
  *(_QWORD *)(v3 + 16) = GadgetHandler::onProjectorOptionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v61, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDA8u, v52);
  std::string::~string(&v61);
  v7 = proto::ProjectorOptionReq::op_type(reqa);
  proto::ProjectorOptionRsp::set_op_type(rsp_0a, v7);
  v8 = proto::ProjectorOptionReq::entity_id(reqa);
  proto::ProjectorOptionRsp::set_entity_id(rsp_0a, v8);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(thisa->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(thisa->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gadget_handler.cpp",
        "onProjectorOptionReq",
        398);
      v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&v61,
              (const char (*)[25])"getCurWorld fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
      v10 = -1;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(thisa->player_);
    v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( Uid != World::getOwnerUid(v13) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gadget_handler.cpp",
        "onProjectorOptionReq",
        404);
      v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&v61,
              (const char (*)[46])"only scene owner can opearate projector, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v56 = Player::getUid(thisa->player_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v56);
      v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v15,
              (const char (*)[19])", world_owner_uid:");
      v17 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      val = World::getOwnerUid(v17);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
    }
    v18 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto::ProjectorOptionReq::entity_id(reqa);
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 128), v18);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onProjectorOptionReq",
        409);
      v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&v61,
              (const char (*)[29])"findEntity fails, entity_id:");
      val = proto::ProjectorOptionReq::entity_id(reqa);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
      v10 = 504;
LABEL_51:
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
LABEL_52:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
      goto LABEL_53;
    }
    v20 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    v21 = *(_QWORD *)v20 + 32LL;
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v21)(v20) != 58 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gadget_handler.cpp",
        "onProjectorOptionReq",
        414);
      v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)&v61,
              (const char (*)[38])"entity is not a projector, entity_id:");
      val = proto::ProjectorOptionReq::entity_id(reqa);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", entity_type:");
      v25 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8();
      v26 = *(_QWORD *)v25 + 32LL;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8();
      v27 = (*(unsigned int (__fastcall **)(unsigned __int64))v26)(v25);
      v58 = (char *)data::enumValToStr(v27);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v24, (const char *const *)&v58);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
      v10 = -1;
      goto LABEL_51;
    }
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    Entity::getGroup((const Entity *const)(v3 + 160));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gadget_handler.cpp",
        "onProjectorOptionReq",
        420);
      v28 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v61,
              (const char (*)[37])"entity group_ptr nullptr, entity_id:");
      val = proto::ProjectorOptionReq::entity_id(reqa);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
      v10 = -1;
LABEL_50:
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
      goto LABEL_51;
    }
    v29 = proto::ProjectorOptionReq::op_type(reqa);
    if ( v29 == 1 )
    {
      v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Gadget::getState(v30) == 201 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onProjectorOptionReq",
          429);
        v31 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)&v61,
                (const char (*)[45])"projector cannot create a screen, entity_id:");
        v56 = proto::ProjectorOptionReq::entity_id(reqa);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &v56);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v32,
                (const char (*)[16])", gadget_state:");
        v34 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        val = Gadget::getState(v34);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
        v10 = -1;
        goto LABEL_50;
      }
      v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      v36 = proto::ProjectorOptionReq::entity_id(reqa);
      Group::setProjectorEntityId(v35, v36);
      v37 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Gadget::setState(v37, 0xC9u, 0, 1);
    }
    else
    {
      if ( v29 != 2 )
      {
        v10 = -1;
        goto LABEL_50;
      }
      v38 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Gadget::getState(v38) != 201 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onProjectorOptionReq",
          440);
        v39 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&v61,
                (const char (*)[46])"projector cannot destroy a screen, entity_id:");
        v56 = proto::ProjectorOptionReq::entity_id(reqa);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &v56);
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v40,
                (const char (*)[16])", gadget_state:");
        v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        val = Gadget::getState(v42);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
        v10 = -1;
        goto LABEL_50;
      }
      v43 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Gadget::setState(v43, 0, 0, 1);
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyProjectorInteract>();
    v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    v45 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    GadgetId = Gadget::getGadgetId(v45);
    proto_log::PlayerLogBodyProjectorInteract::set_gadget_id(v44, GadgetId);
    v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProjectorInteract,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    v48 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    State = Gadget::getState(v48);
    proto_log::PlayerLogBodyProjectorInteract::set_gadget_state(v47, State);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyProjectorInteract,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyProjectorInteract> *)(v3 + 192));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v10 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyProjectorInteract>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyProjectorInteract> *const)(v3 + 192));
    goto LABEL_50;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v61,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/gadget_handler.cpp",
    "onProjectorOptionReq",
    392);
  v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         (common::milog::MiLogStream *const)&v61,
         (const char (*)[24])"scene_ptr is null, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(thisa->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
  v10 = -1;
LABEL_53:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v10;
  if ( v62 == (char *)v3 )
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

// Line 458: range 00000000150FEF10-00000000150FF1A7
int32_t __cdecl GadgetHandler::onRequestLiveInfoReq(
        GadgetHandler *const this,
        const proto::RequestLiveInfoReq *req,
        proto::RequestLiveInfoRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  data::DbLiveConfigMgr *p_live_config_mgr; // rbx
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+20h] [rbp-50h] BYREF
  uint32_t now; // [rsp+24h] [rbp-4Ch]
  const data::LiveScheduleConfig *schedule_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  v3 = proto::RequestLiveInfoReq::live_id(req);
  proto::RequestLiveInfoRsp::set_live_id(rsp_0, v3);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_live_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.db_config_mgr.db_local_config_mgr.live_config_mgr;
  v5 = proto::RequestLiveInfoReq::live_id(req);
  schedule_config_ptr = data::DbLiveConfigMgr::findLiveScheduleConfig(p_live_config_mgr, v5);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( schedule_config_ptr )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now >= schedule_config_ptr->end_time )
      goto LABEL_9;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now >= schedule_config_ptr->begin_time )
    {
      proto::RequestLiveInfoRsp::set_live_url(rsp_0, &schedule_config_ptr->live_url);
      proto::RequestLiveInfoRsp::set_spare_live_url(rsp_0, &schedule_config_ptr->spare_live_url);
      return 0;
    }
    else
    {
LABEL_9:
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onRequestLiveInfoReq",
        469);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v14,
             (const char (*)[29])"live is not active, live_id:");
      val = proto::RequestLiveInfoReq::live_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gadget_handler.cpp",
      "onRequestLiveInfoReq",
      463);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v14,
           (const char (*)[36])"request live id not exist, live_id:");
    val = proto::RequestLiveInfoReq::live_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 478: range 00000000150FF1A8-0000000015100D46
int32_t __cdecl GadgetHandler::onGadgetChangeLevelTagReq(
        GadgetHandler *const this,
        const proto::GadgetChangeLevelTagReq *req,
        proto::GadgetChangeLevelTagRsp *rsp_0)
{
  int32_t v3; // r14d
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const Vector3 *Position; // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const Vector3 *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  const Vector3 *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v39; // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // eax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  uint32_t ItemCount; // ecx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  common::milog::MiLogStream *v54; // rax
  std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::shared_ptr<CustomCommonNodeData> *v56; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<CustomCommonNodeData> > >::pointer v64; // rax
  int v65; // r15d
  std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  common::milog::MiLogStream *v67; // r14
  std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v72; // rax
  CustomGadgetComp *v73; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMountainInteractChangeLevelTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  Player *v76; // r14
  int32_t result; // eax
  std::string v78; // [rsp+0h] [rbp-3B0h]
  unsigned int GadgetId; // [rsp+2Ch] [rbp-384h] BYREF
  unsigned int val; // [rsp+30h] [rbp-380h] BYREF
  int32_t change_ret; // [rsp+34h] [rbp-37Ch]
  std::vector<data::CustomGadgetSlotGroup>::const_iterator __for_begin; // [rsp+38h] [rbp-378h] BYREF
  std::vector<data::CustomGadgetSlotGroup>::const_iterator __for_end_0; // [rsp+40h] [rbp-370h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+48h] [rbp-368h] BYREF
  const proto::CustomGadgetTreeInfo *info; // [rsp+50h] [rbp-360h]
  const JsonConfigMgr *json_config_mgr; // [rsp+58h] [rbp-358h]
  PlayerItemComp *player_item_comp; // [rsp+60h] [rbp-350h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+68h] [rbp-348h]
  std::vector<std::shared_ptr<CustomCommonNodeData>> *__for_range_0; // [rsp+70h] [rbp-340h]
  const data::CustomGadgetSlotLevelTagConfig *gadget_slot_config_ptr; // [rsp+78h] [rbp-338h]
  const std::vector<data::CustomGadgetSlotGroup> *__for_range_1; // [rsp+80h] [rbp-330h]
  const data::CustomGadgetSlotGroup *gadget_slot; // [rsp+88h] [rbp-328h]
  const std::shared_ptr<CustomCommonNodeData> *node_ptr; // [rsp+90h] [rbp-320h]
  const std::pair<unsigned int const,unsigned int> *v94; // [rsp+98h] [rbp-318h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+A0h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+A8h] [rbp-308h]
  std::shared_ptr<google::protobuf::Message> v97; // [rsp+B0h] [rbp-300h] BYREF
  common::milog::MiLogStream v98; // [rsp+C0h] [rbp-2F0h] BYREF
  char v99[720]; // [rsp+E0h] [rbp-2D0h] BYREF

  *(&v78._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v78._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v78._M_string_length = (std::string::size_type)rsp_0;
  v5 = (unsigned __int64)v99;
  v78._M_dataplus._M_p = v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(672LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "16 48 1 10 holder:621 64 4 16 level_tag_id:479 80 4 20 gadget_entity_id:480 96 4 12 distance:513"
                        " 112 4 28 forbid_interact_distance:514 128 8 13 node_iter:586 160 16 13 scene_ptr:487 192 16 14 "
                        "gadget_ptr:493 224 16 14 avatar_ptr:501 256 16 26 custom_gadget_comp_ptr:522 288 16 11 log_ptr:6"
                        "22 320 16 12 node_ptr:593 352 24 12 node_vec:533 416 48 23 used_item_count_map:536 496 48 25 ide"
                        "ntifier_2_node_map:565 576 56 28 pass_part_item_count_map:537";
  *(_QWORD *)(v5 + 16) = GadgetHandler::onGadgetChangeLevelTagReq;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862727] = -219021312;
  v7[536862728] = -219021312;
  v7[536862729] = -219021312;
  v7[536862730] = -219021312;
  v7[536862731] = -234881024;
  v7[536862732] = -218959118;
  v7[536862734] = -219021312;
  v7[536862735] = 62194;
  v7[536862737] = -218959118;
  v7[536862739] = -218103808;
  v7[536862740] = -202116109;
  *(_DWORD *)(v5 + 64) = proto::GadgetChangeLevelTagReq::level_tag_id(req);
  *(_DWORD *)(v5 + 80) = proto::GadgetChangeLevelTagReq::gadget_entity_id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onGadgetChangeLevelTagReq",
      484);
    v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v98,
           (const char (*)[64])"[2.8 mountain] gadget cannnot changeToTargetLevelTag in mp mode");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v98);
    v3 = 1202;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 160));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onGadgetChangeLevelTagReq",
        490);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v98,
              (const char (*)[39])"[2.8 mountain] scene_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v98);
      v3 = -1;
    }
    else
    {
      v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      Scene::findEntity<Gadget>((const Scene *const)(v5 + 192), v11);
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v5 + 192), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v98,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onGadgetChangeLevelTagReq",
          496);
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v98,
                (const char (*)[44])"[2.8 mountain] findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream(&v98);
        v3 = 504;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v5 + 224));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 224), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v98,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gadget_handler.cpp",
            "onGadgetChangeLevelTagReq",
            504);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v98,
                  (const char (*)[41])"[2.8 mountain] getCurAvatar fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v98);
          v3 = -1;
        }
        else
        {
          v14 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8();
          v15 = *(_QWORD *)v14 + 192LL;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v15)(v14) == 1 )
          {
            common::milog::MiLogStream::create(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/gadget_handler.cpp",
              "onGadgetChangeLevelTagReq",
              510);
            v16 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                    &v98,
                    (const char (*)[70])"[2.8 mountain] gadget ineract type is INTERACT_PICK_ITEM, gadget_id: ");
            v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
            val = Gadget::getGadgetId(v17);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v98);
            v3 = -1;
          }
          else
          {
            v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            Position = Entity::getPosition((const Entity *const)v18);
            v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
            v21 = Entity::getPosition((const Entity *const)v20);
            *(float *)v4.m128i_i32 = getDistance(v21, Position);
            *(_DWORD *)(v5 + 96) = _mm_cvtsi128_si32(v4);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v97);
            v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97);
            *(_DWORD *)(v5 + 112) = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v22->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v97);
            if ( *(float *)(v5 + 96) <= (float)*(int *)(v5 + 112) )
            {
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
              EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v5 + 256));
              if ( std::operator==<CustomGadgetComp>(0LL, (const std::shared_ptr<CustomGadgetComp> *)(v5 + 256)) )
              {
                common::milog::MiLogStream::create(
                  &v98,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/gadget_handler.cpp",
                  "onGadgetChangeLevelTagReq",
                  525);
                v32 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        &v98,
                        (const char (*)[26])"[2.8 mountain] entity id:");
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v32,
                        (const unsigned int *)(v5 + 80));
                v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v33,
                        (const char (*)[12])"gadget_id: ");
                v35 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                GadgetId = Gadget::getGadgetId(v35);
                v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &GadgetId);
                v37 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        v36,
                        (const char (*)[22])off_256F3FA0);
                v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
                common::milog::MiLogStream::~MiLogStream(&v98);
                v3 = 831;
              }
              else
              {
                info = proto::GadgetChangeLevelTagReq::combination_info(req);
                std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 352));
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v5 + 320));
                json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320))->design_config.json_config_mgr;
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 320));
                v39 = proto::CustomGadgetTreeInfo::node_list(info);
                v40 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                v41 = Gadget::getGadgetId(v40);
                JsonConfigMgr::convertCustomTreeInfo(
                  json_config_mgr,
                  v41,
                  v39,
                  (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v5 + 352));
                std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 416));
                std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v5 + 576));
                if ( JsonConfigMgr::checkCustomTreeInfo(
                       json_config_mgr,
                       (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v5 + 352),
                       (std::map<unsigned int,unsigned int> *)(v5 + 416),
                       (std::unordered_map<unsigned int,unsigned int> *)(v5 + 576)) )
                {
                  common::milog::MiLogStream::create(
                    &v98,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/handler/gadget_handler.cpp",
                    "onGadgetChangeLevelTagReq",
                    540);
                  v42 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                          &v98,
                          (const char (*)[52])"[2.8 mountain] checkCustomTreeInfo fail, gadget_id:");
                  v43 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                  GadgetId = Gadget::getGadgetId(v43);
                  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &GadgetId);
                  v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
                  common::milog::MiLogStream::~MiLogStream(&v98);
                  v3 = 831;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  player_item_comp = Player::getItemComp(this->player_);
                  __for_range = (std::map<unsigned int,unsigned int> *)(v5 + 416);
                  *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 128) = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 416));
                  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
                  while ( std::operator!=(
                            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 128),
                            &__for_end) )
                  {
                    v94 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 128));
                    item_id = std::get<0ul,unsigned int const,unsigned int>(v94);
                    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v94);
                    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3)
                                                                                + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *item_id);
                    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( ItemCount < *count )
                    {
                      common::milog::MiLogStream::create(
                        &v98,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/handler/gadget_handler.cpp",
                        "onGadgetChangeLevelTagReq",
                        551);
                      v47 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                              &v98,
                              (const char (*)[41])"[2.8 mountain] item not enough. item id:");
                      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, item_id);
                      v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v48,
                              (const char (*)[13])" need count:");
                      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, count);
                      v51 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v50,
                              (const char (*)[12])" has count:");
                      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3)
                                                                                  + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      GadgetId = PlayerItemComp::getItemCount(player_item_comp, *item_id);
                      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &GadgetId);
                      v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v52,
                              (const char (*)[6])" uid:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &val);
                      common::milog::MiLogStream::~MiLogStream(&v98);
                      v3 = 609;
                      goto LABEL_92;
                    }
                    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 128));
                  }
                  if ( !std::unordered_map<unsigned int,unsigned int>::empty((const std::unordered_map<unsigned int,unsigned int> *const)(v5 + 576)) )
                  {
                    common::milog::MiLogStream::create(
                      &v98,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/gadget_handler.cpp",
                      "onGadgetChangeLevelTagReq",
                      560);
                    v54 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                            &v98,
                            (const char (*)[70])"[2.8 mountain] used pass item in mountain, pass_part_item_count_map: ");
                    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      v54,
                      (const std::unordered_map<unsigned int,unsigned int> *)(v5 + 576));
                    common::milog::MiLogStream::~MiLogStream(&v98);
                    v3 = -1;
                  }
                  else
                  {
                    std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::map((std::map<std::string,std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 496));
                    __for_range_0 = (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v5 + 352);
                    *(std::vector<std::shared_ptr<CustomCommonNodeData>>::iterator *)(v5 + 128) = std::vector<std::shared_ptr<CustomCommonNodeData>>::begin((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 352));
                    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::shared_ptr<CustomCommonNodeData>>::end(__for_range_0)._M_current;
                    while ( __gnu_cxx::operator!=<std::shared_ptr<CustomCommonNodeData> *,std::vector<std::shared_ptr<CustomCommonNodeData>>>(
                              (const __gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData>*,std::vector<std::shared_ptr<CustomCommonNodeData>> > *)(v5 + 128),
                              (const __gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData>*,std::vector<std::shared_ptr<CustomCommonNodeData>> > *)&__for_end) )
                    {
                      node_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData> *,std::vector<std::shared_ptr<CustomCommonNodeData>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData>*,std::vector<std::shared_ptr<CustomCommonNodeData>> > *const)(v5 + 128));
                      if ( std::operator==<CustomCommonNodeData>(0LL, node_ptr) )
                      {
                        common::milog::MiLogStream::create(
                          &v98,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/gadget_handler.cpp",
                          "onGadgetChangeLevelTagReq",
                          570);
                        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v98,
                          (const char (*)[35])"[2.8 mountain] node_ptr is nullptr");
                        common::milog::MiLogStream::~MiLogStream(&v98);
                        v3 = -1;
                        goto LABEL_91;
                      }
                      v55 = std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_ptr);
                      v56 = std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::operator[](
                              (std::map<std::string,std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 496),
                              &v55->slot_identifier);
                      std::shared_ptr<CustomCommonNodeData>::operator=(v56, node_ptr);
                      __gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData> *,std::vector<std::shared_ptr<CustomCommonNodeData>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<CustomCommonNodeData>*,std::vector<std::shared_ptr<CustomCommonNodeData>> > *const)(v5 + 128));
                    }
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)(v5 + 320));
                    v57 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320));
                    gadget_slot_config_ptr = LevelTagExcelConfigMgr::findCustomGadgetSlotByLevelTagId(
                                               &v57->design_config.txt_config_mgr.level_tag_config_mgr,
                                               *(_DWORD *)(v5 + 64));
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 320));
                    if ( gadget_slot_config_ptr )
                    {
                      __for_range_1 = &gadget_slot_config_ptr->slot_map;
                      __for_begin._M_current = std::vector<data::CustomGadgetSlotGroup>::begin(&gadget_slot_config_ptr->slot_map)._M_current;
                      __for_end_0._M_current = std::vector<data::CustomGadgetSlotGroup>::end(__for_range_1)._M_current;
                      while ( __gnu_cxx::operator!=<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>(
                                &__for_begin,
                                &__for_end_0) )
                      {
                        gadget_slot = __gnu_cxx::__normal_iterator<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>::operator*(&__for_begin);
                        if ( (unsigned __int8)std::string::empty(&gadget_slot->slot_identifier) != 1
                          && !std::vector<unsigned int>::empty(&gadget_slot->slot_list) )
                        {
                          *(std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::iterator *)(v5 + 128) = std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::find((std::map<std::string,std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 496), &gadget_slot->slot_identifier);
                          __for_end._M_node = std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::end((std::map<std::string,std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 496))._M_node;
                          if ( std::operator==(
                                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<CustomCommonNodeData> > >::_Self *)(v5 + 128),
                                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<CustomCommonNodeData> > >::_Self *)&__for_end) )
                          {
                            common::milog::MiLogStream::create(
                              &v98,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/handler/gadget_handler.cpp",
                              "onGadgetChangeLevelTagReq",
                              589);
                            v60 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                    &v98,
                                    (const char (*)[43])"[2.8 mountain] failed to find identifier: ");
                            v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                    v60,
                                    &gadget_slot->slot_identifier);
                            v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v61,
                                    (const char (*)[14])", gadget_id: ");
                            v63 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                            val = Gadget::getGadgetId(v63);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &val);
                            common::milog::MiLogStream::~MiLogStream(&v98);
                            v3 = -1;
                            goto LABEL_91;
                          }
                          v64 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<CustomCommonNodeData>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<CustomCommonNodeData> > > *const)(v5 + 128));
                          std::shared_ptr<CustomCommonNodeData>::shared_ptr(
                            (std::shared_ptr<CustomCommonNodeData> *const)(v5 + 320),
                            &v64->second);
                          if ( std::operator==<CustomCommonNodeData>(
                                 0LL,
                                 (const std::shared_ptr<CustomCommonNodeData> *)(v5 + 320)) )
                          {
                            common::milog::MiLogStream::create(
                              &v98,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/gadget_handler.cpp",
                              "onGadgetChangeLevelTagReq",
                              596);
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              &v98,
                              (const char (*)[35])"[2.8 mountain] node_ptr is nullptr");
                            common::milog::MiLogStream::~MiLogStream(&v98);
                            v3 = -1;
                            v65 = 0;
                          }
                          else
                          {
                            v66 = std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320));
                            if ( !common::tools::MiscUtils::isContains<unsigned int>(
                                    &gadget_slot->slot_list,
                                    &v66->config_id) )
                            {
                              common::milog::MiLogStream::create(
                                &v98,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/handler/gadget_handler.cpp",
                                "onGadgetChangeLevelTagReq",
                                601);
                              v67 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                      &v98,
                                      (const char (*)[38])"[2.8 mountain] wrong node config id: ");
                              v68 = std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomCommonNodeData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320));
                              v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v67,
                                      &v68->config_id);
                              v70 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                      v69,
                                      (const char (*)[15])", identifier: ");
                              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v70,
                                &gadget_slot->slot_identifier);
                              common::milog::MiLogStream::~MiLogStream(&v98);
                              v3 = -1;
                              v65 = 0;
                            }
                            else
                            {
                              v65 = 1;
                            }
                          }
                          std::shared_ptr<CustomCommonNodeData>::~shared_ptr((std::shared_ptr<CustomCommonNodeData> *const)(v5 + 320));
                          if ( v65 != 1 )
                            goto LABEL_91;
                        }
                        __gnu_cxx::__normal_iterator<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>::operator++(&__for_begin);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      SceneComp = Player::getSceneComp(this->player_);
                      change_ret = PlayerSceneComp::changeToTargetLevelTag(SceneComp, *(_DWORD *)(v5 + 64), 1, 0LL);
                      if ( change_ret )
                      {
                        common::milog::MiLogStream::create(
                          &v98,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/handler/gadget_handler.cpp",
                          "onGadgetChangeLevelTagReq",
                          613);
                        v72 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                                &v98,
                                (const char (*)[61])"[2.8 mountain] changeToTargetLevelTag failed, level_tag_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v72,
                          (const unsigned int *)(v5 + 64));
                        common::milog::MiLogStream::~MiLogStream(&v98);
                        v3 = change_ret;
                      }
                      else
                      {
                        v73 = std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
                        CustomGadgetComp::updateCustomGadgetInfo(v73, info);
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        BasicComp = Player::getBasicComp(this->player_);
                        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v98, BasicComp);
                        StatLogUtils::ContextHolder::ContextHolder(
                          (StatLogUtils::ContextHolder *const)(v5 + 48),
                          0xE30u,
                          v78);
                        std::string::~string(&v98);
                        common::tools::perf::make_shared<proto_log::PlayerLogBodyMountainInteractChangeLevelTag>();
                        v75 = std::__shared_ptr_access<proto_log::PlayerLogBodyMountainInteractChangeLevelTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMountainInteractChangeLevelTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 288));
                        proto_log::PlayerLogBodyMountainInteractChangeLevelTag::set_target_level_tag_id(
                          v75,
                          *(_DWORD *)(v5 + 64));
                        if ( *(_BYTE *)(((*(&v78._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        v76 = *(Player **)(*(&v78._anon_0._M_allocated_capacity + 1) + 8);
                        std::shared_ptr<google::protobuf::Message>::shared_ptr(
                          (std::shared_ptr<google::protobuf::Message> *const)(v5 + 320),
                          0LL);
                        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMountainInteractChangeLevelTag,void>(
                          &v97,
                          (const std::shared_ptr<proto_log::PlayerLogBodyMountainInteractChangeLevelTag> *)(v5 + 288));
                        Player::printStatLog(v76, &v97, (MessagePtr *)(v5 + 320), 0xEu);
                        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v97);
                        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v5 + 320));
                        v3 = 0;
                        std::shared_ptr<proto_log::PlayerLogBodyMountainInteractChangeLevelTag>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMountainInteractChangeLevelTag> *const)(v5 + 288));
                        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v98,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/handler/gadget_handler.cpp",
                        "onGadgetChangeLevelTagReq",
                        579);
                      v58 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                              &v98,
                              (const char (*)[79])"[2.8 mountain] cannot find corresponding gadget slot config for level_tag_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v58,
                        (const unsigned int *)(v5 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v98);
                      v3 = -1;
                    }
LABEL_91:
                    std::map<std::string,std::shared_ptr<CustomCommonNodeData>>::~map((std::map<std::string,std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 496));
                  }
                }
LABEL_92:
                std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v5 + 576));
                std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 416));
                std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v5 + 352));
              }
              std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v5 + 256));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v98,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/gadget_handler.cpp",
                "onGadgetChangeLevelTagReq",
                517);
              v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v98,
                      (const char (*)[21])"[2.8 mountain] uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v24,
                      (const char (*)[10])" avatar: ");
              v26 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
              v27 = Entity::getPosition((const Entity *const)v26);
              v28 = operator<<(v25, v27);
              v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v28,
                      (const char (*)[11])" distance:");
              v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v29, (const float *)(v5 + 96));
              v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" limit:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v5 + 112));
              common::milog::MiLogStream::~MiLogStream(&v98);
              v3 = 520;
            }
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 224));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 192));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 160));
  }
  result = v3;
  if ( v78._M_dataplus._M_p == (std::string::pointer)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 631: range 0000000015100D48-00000000151017C7
int32_t __cdecl GadgetHandler::onNightCrowGadgetObservationMatchReq(
        GadgetHandler *const this,
        const proto::NightCrowGadgetObservationMatchReq *req,
        proto::NightCrowGadgetObservationMatchRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<NightCrowComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  uint32_t *p_uid; // rax
  Group *v36; // rax
  int32_t result; // eax
  unsigned int GadgetId; // [rsp+20h] [rbp-140h] BYREF
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  uint32_t target_gadget_state; // [rsp+28h] [rbp-138h]
  int32_t ret; // [rsp+2Ch] [rbp-134h]
  common::milog::MiLogStream v42; // [rsp+30h] [rbp-130h] BYREF
  char v43[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 20 gadget_entity_id:632 64 16 13 scene_ptr:640 96 16 14 gadget_ptr:646 128 16 23 night_cr"
                        "ow_comp_ptr:653 160 16 13 group_ptr:669 192 16 13 event_ptr:675";
  *(_QWORD *)(v3 + 16) = GadgetHandler::onNightCrowGadgetObservationMatchReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::NightCrowGadgetObservationMatchReq::gadget_entity_id(req);
  target_gadget_state = proto::NightCrowGadgetObservationMatchReq::target_gadget_state(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/gadget_handler.cpp",
      "onNightCrowGadgetObservationMatchReq",
      637);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v42,
           (const char (*)[49])"[2.8 Fischel] gadget cannnot interact in mp mode");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = 1202;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/gadget_handler.cpp",
        "onNightCrowGadgetObservationMatchReq",
        643);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v42,
             (const char (*)[38])"[2.8 Fischel] scene_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v8 = -1;
    }
    else
    {
      v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v10);
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/gadget_handler.cpp",
          "onNightCrowGadgetObservationMatchReq",
          649);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v42,
                (const char (*)[43])"[2.8 Fischel] findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v8 = 504;
      }
      else
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<NightCrowComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 128));
        if ( std::operator==<NightCrowComp>(0LL, (const std::shared_ptr<NightCrowComp> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gadget_handler.cpp",
            "onNightCrowGadgetObservationMatchReq",
            656);
          v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v42,
                  (const char (*)[25])"[2.8 Fischel] entity id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 48));
          v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])"gadget_id: ");
          v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          GadgetId = Gadget::getGadgetId(v15);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &GadgetId);
          v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v16, (const char (*)[26])off_2570F5C0);
          v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v42);
          v8 = -1;
        }
        else
        {
          v19 = std::__shared_ptr_access<NightCrowComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NightCrowComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          ret = NightCrowComp::checkObservationAvailability(v19, target_gadget_state);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/gadget_handler.cpp",
              "onNightCrowGadgetObservationMatchReq",
              664);
            v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v42,
                    (const char (*)[25])"[2.8 Fischel] entity id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 48));
            v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v21,
                    (const char (*)[12])"gadget_id: ");
            v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            GadgetId = Gadget::getGadgetId(v23);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &GadgetId);
            v25 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    v24,
                    (const char (*)[37])" checkObservationAvailability failed");
            v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
            common::milog::MiLogStream::~MiLogStream(&v42);
            v8 = ret;
          }
          else
          {
            std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Entity::getGroup((const Entity *const)(v3 + 160));
            if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/gadget_handler.cpp",
                "onNightCrowGadgetObservationMatchReq",
                672);
              v27 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v42,
                      (const char (*)[51])"[2.8 Fischel] entity group_ptr nullptr, entity_id:");
              val = proto::NightCrowGadgetObservationMatchReq::gadget_entity_id(req);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
              common::milog::MiLogStream::~MiLogStream(&v42);
              v8 = -1;
            }
            else
            {
              EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 192), 114);
              if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 192), 0LL) )
              {
                v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                ConfigId = Entity::getConfigId((const Entity *const)v28);
                v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                p_param1 = &v30->param1;
                if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(p_param1);
                }
                v30->param1 = ConfigId;
                v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&v32->param2 >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v32->param2 >> 3) + 0x7FFF8000) <= 3 )
                {
                  v32 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v32->param2);
                }
                v32->param2 = target_gadget_state;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Uid = Player::getUid(this->player_);
                v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                p_uid = &v34->uid;
                if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(p_uid);
                }
                v34->uid = Uid;
                v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                Group::handleEvent(v36, (EventPtr *)(v3 + 192));
              }
              v8 = 0;
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 192));
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
          }
        }
        std::shared_ptr<NightCrowComp>::~shared_ptr((std::shared_ptr<NightCrowComp> *const)(v3 + 128));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  result = v8;
  if ( v43 == (char *)v3 )
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
