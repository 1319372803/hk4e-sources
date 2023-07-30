// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mp_handler.cpp

// Line 31: range 000000001689E152-000000001689EDC5
int32_t __cdecl MpHandler::addPacketFuncToMap(MpHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  MpHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MpHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v18; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  int (*__f)(MpHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+30h] [rbp-80h] BYREF
  __int64 v21; // [rsp+38h] [rbp-78h]
  std::_Bind_helper<false,int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,const std::_Placeholder<1>&>::type v22; // [rsp+40h] [rbp-70h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-50h] BYREF

  __x = 1818;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v18, &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/mp_handler.cpp",
      "addPacketFuncToMap",
      32);
    common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1818LL);
    common::milog::MiLogStream::~MiLogStream(&v23);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 1818;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1807;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v18, &__y) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mp_handler.cpp",
        "addPacketFuncToMap",
        33);
      common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1807LL);
      common::milog::MiLogStream::~MiLogStream(&v23);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __f = (int (*)(MpHandler *, std::shared_ptr<common::minet::Packet>))MpHandler::onPlayerApplyEnterMpResultNotify;
      v21 = 0LL;
      std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
        &v22,
        &__f,
        (MpHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v4,
        v5);
      __x = 1807;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
        v6,
        &v22);
      __x = 1802;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v18, &__y) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mp_handler.cpp",
          "addPacketFuncToMap",
          34);
        common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1802LL);
        common::milog::MiLogStream::~MiLogStream(&v23);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 1802;
        v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
          v7,
          (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 1844;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v18, &__y) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/mp_handler.cpp",
            "addPacketFuncToMap",
            35);
          common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1844LL);
          common::milog::MiLogStream::~MiLogStream(&v23);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 1844;
          v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
            v8,
            (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 1820;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v18, &__y) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/mp_handler.cpp",
              "addPacketFuncToMap",
              36);
            common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1820LL);
            common::milog::MiLogStream::~MiLogStream(&v23);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 1820;
            v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
              v9,
              (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 1841;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v18, &__y) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/mp_handler.cpp",
                "addPacketFuncToMap",
                37);
              common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1841LL);
              common::milog::MiLogStream::~MiLogStream(&v23);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 1841;
              v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_map,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
                v10,
                (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 1826;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v18, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v23,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/mp_handler.cpp",
                  "addPacketFuncToMap",
                  38);
                common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1826LL);
                common::milog::MiLogStream::~MiLogStream(&v23);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __f = (int (*)(MpHandler *, std::shared_ptr<common::minet::Packet>))MpHandler::onPlayerApplyEnterMpNotify;
                v21 = 0LL;
                std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
                  &v22,
                  &__f,
                  (MpHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v11,
                  v12);
                __x = 1826;
                v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_map,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
                  v13,
                  &v22);
                __x = 1814;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v18, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v23,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/mp_handler.cpp",
                    "addPacketFuncToMap",
                    40);
                  common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1814LL);
                  common::milog::MiLogStream::~MiLogStream(&v23);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 1814;
                  v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                    v14,
                    (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  __x = 1837;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_map,
                                  &__x)._M_node;
                  v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                  if ( std::operator!=(&v18, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v23,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/mp_handler.cpp",
                      "addPacketFuncToMap",
                      41);
                    common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1837LL);
                    common::milog::MiLogStream::~MiLogStream(&v23);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                    __x = 1837;
                    v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_map,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                      v15,
                      (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                    __x = 1848;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_map,
                                    &__x)._M_node;
                    v18._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                    if ( std::operator!=(&v18, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v23,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/mp_handler.cpp",
                        "addPacketFuncToMap",
                        42);
                      common::milog::MiLogStream::operator()(&v23, off_25E0B640, 1848LL);
                      common::milog::MiLogStream::~MiLogStream(&v23);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                      __x = 1848;
                      v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_map,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                        v16,
                        (MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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

// Line 32: range 000000001689C862-000000001689CB7E
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerApplyEnterMpRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerApplyEnterMpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerApplyEnterMpReq const>(
         (const std::shared_ptr<const proto::PlayerApplyEnterMpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerApplyEnterMpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerApplyEnterMpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerApplyEnterMpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerApplyEnterMpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onPlayerApplyEnterMpReq(this, v8, rsp_0);
    proto::PlayerApplyEnterMpRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerApplyEnterMpRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerApplyEnterMpRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerApplyEnterMpRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerApplyEnterMpRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerApplyEnterMpRsp>::~shared_ptr((std::shared_ptr<proto::PlayerApplyEnterMpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerApplyEnterMpReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerApplyEnterMpReq> *const)(v2 + 32));
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

// Line 34: range 000000001689CB80-000000001689CE9C
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerApplyEnterMpResultReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerApplyEnterMpResultRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerApplyEnterMpResultRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:34 64 16 10 rsp_ptr:34";
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerApplyEnterMpResultReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerApplyEnterMpResultReq const>(
         (const std::shared_ptr<const proto::PlayerApplyEnterMpResultReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerApplyEnterMpResultReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerApplyEnterMpResultReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerApplyEnterMpResultRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerApplyEnterMpResultRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerApplyEnterMpResultRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerApplyEnterMpResultRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerApplyEnterMpResultReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerApplyEnterMpResultReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onPlayerApplyEnterMpResultReq(this, v8, rsp_0);
    proto::PlayerApplyEnterMpResultRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerApplyEnterMpResultRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerApplyEnterMpResultRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerApplyEnterMpResultRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerApplyEnterMpResultRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerApplyEnterMpResultRsp>::~shared_ptr((std::shared_ptr<proto::PlayerApplyEnterMpResultRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerApplyEnterMpResultReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerApplyEnterMpResultReq> *const)(v2 + 32));
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

// Line 35: range 000000001689CE9E-000000001689D1BA
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::GetPlayerMpModeAvailabilityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetPlayerMpModeAvailabilityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerMpModeAvailabilityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerMpModeAvailabilityReq const>(
         (const std::shared_ptr<const proto::GetPlayerMpModeAvailabilityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetPlayerMpModeAvailabilityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpModeAvailabilityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetPlayerMpModeAvailabilityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetPlayerMpModeAvailabilityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerMpModeAvailabilityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetPlayerMpModeAvailabilityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetPlayerMpModeAvailabilityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpModeAvailabilityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onGetPlayerMpModeAvailabilityReq(this, v8, rsp_0);
    proto::GetPlayerMpModeAvailabilityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetPlayerMpModeAvailabilityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerMpModeAvailabilityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetPlayerMpModeAvailabilityReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerMpModeAvailabilityReq> *const)(v2 + 32));
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

// Line 36: range 000000001689D1BC-000000001689D4D8
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerSetOnlyMPWithPSPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerSetOnlyMPWithPSPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerSetOnlyMPWithPSPlayerReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerSetOnlyMPWithPSPlayerReq const>(
         (const std::shared_ptr<const proto::PlayerSetOnlyMPWithPSPlayerReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      36);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerSetOnlyMPWithPSPlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetOnlyMPWithPSPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerSetOnlyMPWithPSPlayerRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerSetOnlyMPWithPSPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerSetOnlyMPWithPSPlayerRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerSetOnlyMPWithPSPlayerRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerSetOnlyMPWithPSPlayerReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerSetOnlyMPWithPSPlayerReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onPlayerSetOnlyMPWithPSPlayerReq(this, v8, rsp_0);
    proto::PlayerSetOnlyMPWithPSPlayerRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerSetOnlyMPWithPSPlayerRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp>::~shared_ptr((std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerSetOnlyMPWithPSPlayerReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerSetOnlyMPWithPSPlayerReq> *const)(v2 + 32));
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

// Line 37: range 000000001689D4DA-000000001689D7F6
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::PSPlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PSPlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PSPlayerApplyEnterMpRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PSPlayerApplyEnterMpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PSPlayerApplyEnterMpReq const>(
         (const std::shared_ptr<const proto::PSPlayerApplyEnterMpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      37);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PSPlayerApplyEnterMpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PSPlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PSPlayerApplyEnterMpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PSPlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PSPlayerApplyEnterMpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PSPlayerApplyEnterMpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PSPlayerApplyEnterMpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PSPlayerApplyEnterMpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onPSPlayerApplyEnterMpReq(this, v8, rsp_0);
    proto::PSPlayerApplyEnterMpRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PSPlayerApplyEnterMpRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PSPlayerApplyEnterMpRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PSPlayerApplyEnterMpRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PSPlayerApplyEnterMpRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PSPlayerApplyEnterMpRsp>::~shared_ptr((std::shared_ptr<proto::PSPlayerApplyEnterMpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PSPlayerApplyEnterMpReq const>::~shared_ptr((std::shared_ptr<const proto::PSPlayerApplyEnterMpReq> *const)(v2 + 32));
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

// Line 40: range 000000001689D7F8-000000001689DB14
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::MpPlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MpPlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MpPlayOwnerCheckRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MpPlayOwnerCheckReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MpPlayOwnerCheckReq const>(
         (const std::shared_ptr<const proto::MpPlayOwnerCheckReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      40);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MpPlayOwnerCheckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MpPlayOwnerCheckRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MpPlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MpPlayOwnerCheckRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MpPlayOwnerCheckRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MpPlayOwnerCheckReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayOwnerCheckReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onMpPlayOwnerCheckReq(this, v8, rsp_0);
    proto::MpPlayOwnerCheckRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MpPlayOwnerCheckRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MpPlayOwnerCheckRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MpPlayOwnerCheckRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MpPlayOwnerCheckRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MpPlayOwnerCheckRsp>::~shared_ptr((std::shared_ptr<proto::MpPlayOwnerCheckRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MpPlayOwnerCheckReq const>::~shared_ptr((std::shared_ptr<const proto::MpPlayOwnerCheckReq> *const)(v2 + 32));
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

// Line 41: range 000000001689DB16-000000001689DE32
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::MpPlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MpPlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MpPlayOwnerStartInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MpPlayOwnerStartInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MpPlayOwnerStartInviteReq const>(
         (const std::shared_ptr<const proto::MpPlayOwnerStartInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      41);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MpPlayOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MpPlayOwnerStartInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MpPlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MpPlayOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MpPlayOwnerStartInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MpPlayOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onMpPlayOwnerStartInviteReq(this, v8, rsp_0);
    proto::MpPlayOwnerStartInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MpPlayOwnerStartInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MpPlayOwnerStartInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MpPlayOwnerStartInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MpPlayOwnerStartInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MpPlayOwnerStartInviteRsp>::~shared_ptr((std::shared_ptr<proto::MpPlayOwnerStartInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MpPlayOwnerStartInviteReq const>::~shared_ptr((std::shared_ptr<const proto::MpPlayOwnerStartInviteReq> *const)(v2 + 32));
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

// Line 42: range 000000001689DE34-000000001689E150
int __cdecl MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const MpHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpHandler *this; // r14
  std::__shared_ptr_access<const proto::MpPlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MpPlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MpPlayGuestReplyInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MpHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MpPlayGuestReplyInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MpPlayGuestReplyInviteReq const>(
         (const std::shared_ptr<const proto::MpPlayGuestReplyInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "operator()",
      42);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MpPlayGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MpPlayGuestReplyInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MpPlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MpPlayGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MpPlayGuestReplyInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MpPlayGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MpPlayGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MpHandler::onMpPlayGuestReplyInviteReq(this, v8, rsp_0);
    proto::MpPlayGuestReplyInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MpPlayGuestReplyInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MpPlayGuestReplyInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MpPlayGuestReplyInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MpPlayGuestReplyInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MpPlayGuestReplyInviteRsp>::~shared_ptr((std::shared_ptr<proto::MpPlayGuestReplyInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MpPlayGuestReplyInviteReq const>::~shared_ptr((std::shared_ptr<const proto::MpPlayGuestReplyInviteReq> *const)(v2 + 32));
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

// Line 47: range 000000001689EEFA-000000001689FCA0
int32_t __cdecl MpHandler::onPlayerApplyEnterMpNotify(MpHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  int32_t v6; // r12d
  const proto::OnlinePlayerInfo *v7; // rax
  common::milog::MiLogStream *v8; // r12
  GameserverApp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdi
  common::milog::MiLogStream *v13; // r12
  const unsigned int *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  GameserverApp *v17; // rdi
  unsigned __int64 v18; // rdx
  char v19; // al
  GameserverService *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  bool *p_is_client_data_version_not_latest_ban_mp; // rax
  char v23; // r15
  PlayerSocialComp *SocialComp; // rax
  const proto::OnlinePlayerInfo *v25; // rax
  const google::protobuf::RepeatedField<unsigned int> *v26; // rax
  const unsigned int *v27; // r12
  const proto::OnlinePlayerInfo *v28; // rax
  const google::protobuf::RepeatedField<unsigned int> *v29; // rax
  const unsigned int *v30; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r12
  PlayerMpComp *MpComp; // rax
  time_t MpBlockEndTime; // r12
  PlayerMpComp *v34; // rax
  const proto::OnlinePlayerInfo *v35; // rax
  const std::string *v36; // rax
  PlayerMpComp *v38; // rax
  PlayerBasicComp *v39; // rax
  uint32_t WorldLevel; // r12d
  const proto::OnlinePlayerInfo *v41; // rax
  PlayerMatchComp *MatchComp; // rax
  PlayerMpComp *v43; // rax
  PlayerMpComp *v44; // rax
  PlayerMpComp *v45; // rax
  int32_t result; // eax
  MpHandler::onPlayerApplyEnterMpNotify::<lambda(Player&)> v47; // [rsp-20h] [rbp-1E0h]
  std::string v48; // [rsp+0h] [rbp-1C0h]
  char *v49; // [rsp+8h] [rbp-1B8h]
  common::minet::PacketPtr *p_packet_ptra; // [rsp+10h] [rbp-1B0h]
  MpHandler *thisa; // [rsp+18h] [rbp-1A8h]
  char is_blacklist_passed; // [rsp+2Fh] [rbp-191h]
  unsigned int val; // [rsp+30h] [rbp-190h] BYREF
  uint32_t source_uid; // [rsp+34h] [rbp-18Ch]
  proto::PlayerApplyEnterMpNotify *notify; // [rsp+38h] [rbp-188h]
  std::shared_ptr<Config> v56; // [rsp+40h] [rbp-180h] BYREF
  MpHandler::onPlayerApplyEnterMpNotify::<lambda(Player&)> __f; // [rsp+50h] [rbp-170h]
  std::string v58; // [rsp+70h] [rbp-150h] BYREF
  char v59[304]; // [rsp+90h] [rbp-130h] BYREF

  *(&v48._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v48._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v59;
  v48._M_string_length = (std::string::size_type)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 holder:48 48 1 19 is_in_blacklist:106 64 4 16 source_app_id:50 80 4 22 source_thread_in"
                        "dex:51 96 16 13 notify_ptr:49 128 16 12 world_ptr:74 160 56 17 src_blacklist:103";
  *(_QWORD *)(v2 + 16) = MpHandler::onPlayerApplyEnterMpNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v58, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x70Cu, v48);
  std::string::~string(&v58);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
  common::minet::Packet::getProto<proto::PlayerApplyEnterMpNotify>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::PlayerApplyEnterMpNotify>(
         (const std::shared_ptr<proto::PlayerApplyEnterMpNotify> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v58,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onPlayerApplyEnterMpNotify",
      49);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v58, off_25E0F420);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v58);
    v6 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PlayerApplyEnterMpNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerApplyEnterMpNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 64) = proto::PlayerApplyEnterMpNotify::src_app_id(notify);
    *(_DWORD *)(v2 + 80) = proto::PlayerApplyEnterMpNotify::src_thread_index(notify);
    if ( *(_DWORD *)(v2 + 64) )
    {
      v7 = proto::PlayerApplyEnterMpNotify::src_player_info(notify);
      source_uid = proto::OnlinePlayerInfo::uid(v7);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mp_handler.cpp",
        "onPlayerApplyEnterMpNotify",
        60);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
             (common::milog::MiLogStream *const)&v58,
             (const char (*)[9])" appid: ");
      v9 = Singleton<GameserverApp>::instance();
      val = AppBase::getAppId((AppBase *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" source appid: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v12,
              (const char (*)[33])"ThreadLocal::work_thread_index: ");
      v14 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v12, "ThreadLocal::work_thread_index: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v14);
      v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v15,
              (const char (*)[23])" source thread index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v58);
      v17 = Singleton<GameserverApp>::instance();
      if ( AppBase::getAppId((AppBase *const)v17) != *(_DWORD *)(v2 + 64) )
        goto LABEL_14;
      v18 = ZTWN11ThreadLocal17work_thread_indexE(v17, v2 + 80);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      if ( *(_DWORD *)v18 == *(_DWORD *)(v2 + 80) )
        v19 = 0;
      else
LABEL_14:
        v19 = 1;
      if ( v19 && (v20 = ServiceBox::findService<GameserverService>(), !GameserverService::isOnlinePlayerNumSafe(v20)) )
      {
        v6 = MpHandler::judgeApplyEnterMp(
               thisa,
               source_uid,
               0,
               PlayerApplyEnterMpResultNotify_Reason_MAX_PLAYER,
               *(_DWORD *)(v2 + 64));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(thisa->player_);
        PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 128));
        if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 128)) )
        {
          v6 = MpHandler::judgeApplyEnterMp(
                 thisa,
                 source_uid,
                 0,
                 PlayerApplyEnterMpResultNotify_Reason_PLAYER_NOT_IN_PLAYER_WORLD,
                 *(_DWORD *)(v2 + 64));
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v56);
          v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
          p_is_client_data_version_not_latest_ban_mp = &v21->is_client_data_version_not_latest_ban_mp;
          if ( *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_client_data_version_not_latest_ban_mp & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3)
                                                                                             + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_client_data_version_not_latest_ban_mp);
          }
          if ( !v21->is_client_data_version_not_latest_ban_mp )
            goto LABEL_30;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( !Player::isClientDataVersionLatest(thisa->player_) )
            v23 = 1;
          else
LABEL_30:
            v23 = 0;
          std::shared_ptr<Config>::~shared_ptr(&v56);
          if ( v23 )
          {
            v6 = MpHandler::judgeApplyEnterMp(
                   thisa,
                   source_uid,
                   0,
                   PlayerApplyEnterMpResultNotify_Reason_OTHER_DATA_VERSION_NOT_LATEST,
                   *(_DWORD *)(v2 + 64));
          }
          else
          {
            is_blacklist_passed = 0;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SocialComp = Player::getSocialComp(thisa->player_);
            if ( !PlayerSocialComp::isPlayerInBlacklist(SocialComp, source_uid)
              && !std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 128), 0LL) )
            {
              std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
              v25 = proto::PlayerApplyEnterMpNotify::src_player_info(notify);
              v26 = proto::OnlinePlayerInfo::blacklist_uid_list(v25);
              v27 = google::protobuf::RepeatedField<unsigned int>::end(v26);
              v28 = proto::PlayerApplyEnterMpNotify::src_player_info(notify);
              v29 = proto::OnlinePlayerInfo::blacklist_uid_list(v28);
              v30 = google::protobuf::RepeatedField<unsigned int>::begin(v29);
              std::unordered_set<unsigned int>::insert<unsigned int const*>(
                (std::unordered_set<unsigned int> *const)(v2 + 160),
                v30,
                v27);
              *(_BYTE *)(v2 + 48) = 0;
              v31 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              __f.__source_uid = source_uid;
              __f.__is_in_blacklist = (bool *)(v2 + 48);
              __f.__src_blacklist = (std::unordered_set<unsigned int> *)(v2 + 160);
              v47.__src_blacklist = (std::unordered_set<unsigned int> *)(v2 + 160);
              v47.__is_in_blacklist = (bool *)(v2 + 48);
              *(_QWORD *)&v47.__source_uid = *(_QWORD *)&__f.__source_uid;
              std::function<ForeachPolicy ()(Player &)>::function<MpHandler::onPlayerApplyEnterMpNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1},void,void>(
                (std::function<ForeachPolicy(Player&)> *const)&v58,
                v47);
              World::foreachPlayer(v31, (std::function<ForeachPolicy(Player&)> *)&v58);
              std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v58);
              is_blacklist_passed = *(_BYTE *)(v2 + 48) ^ 1;
              std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
            }
            if ( is_blacklist_passed != 1 )
            {
              v6 = MpHandler::judgeApplyEnterMp(
                     thisa,
                     source_uid,
                     0,
                     PlayerApplyEnterMpResultNotify_Reason_PLAYER_IN_BLACKLIST,
                     *(_DWORD *)(v2 + 64));
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              MpComp = Player::getMpComp(thisa->player_);
              MpBlockEndTime = PlayerMpComp::getMpBlockEndTime(MpComp);
              if ( MpBlockEndTime <= common::tools::TimeUtils::getNow() )
              {
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v34 = Player::getMpComp(thisa->player_);
                if ( PlayerMpComp::getIsOnlyMpWithPSPlayer(v34)
                  && (v35 = proto::PlayerApplyEnterMpNotify::src_player_info(notify),
                      v36 = proto::OnlinePlayerInfo::online_id[abi:cxx11](v35),
                      (unsigned __int8)std::string::empty(v36)) )
                {
                  v6 = MpHandler::judgeApplyEnterMp(
                         thisa,
                         source_uid,
                         0,
                         PlayerApplyEnterMpResultNotify_Reason_PS_PLAYER_NOT_ACCEPT_OTHERS,
                         *(_DWORD *)(v2 + 64));
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v38 = Player::getMpComp(thisa->player_);
                  if ( PlayerMpComp::checkMpSceneEnterable(v38, 0) )
                  {
                    v6 = MpHandler::judgeApplyEnterMp(
                           thisa,
                           source_uid,
                           0,
                           PlayerApplyEnterMpResultNotify_Reason_SCENE_CANNOT_ENTER,
                           *(_DWORD *)(v2 + 64));
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v39 = Player::getBasicComp(thisa->player_);
                    WorldLevel = PlayerBasicComp::getWorldLevel(v39);
                    v41 = proto::PlayerApplyEnterMpNotify::src_player_info(notify);
                    if ( WorldLevel <= proto::OnlinePlayerInfo::world_level(v41) )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      MatchComp = Player::getMatchComp(thisa->player_);
                      if ( PlayerMatchComp::isInMatch(MatchComp) )
                      {
                        v6 = MpHandler::judgeApplyEnterMp(
                               thisa,
                               source_uid,
                               0,
                               PlayerApplyEnterMpResultNotify_Reason_HOST_IN_MATCH,
                               *(_DWORD *)(v2 + 64));
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        v43 = Player::getMpComp(thisa->player_);
                        if ( PlayerMpComp::getMpSettingType(v43) == MP_SETTING_ENTER_FREELY )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          v44 = Player::getMpComp(thisa->player_);
                          if ( PlayerMpComp::isAllowEnterPlayerFull(v44) )
                            v6 = MpHandler::judgeApplyEnterMp(
                                   thisa,
                                   source_uid,
                                   0,
                                   PlayerApplyEnterMpResultNotify_Reason_ALLOW_ENTER_PLAYER_FULL,
                                   *(_DWORD *)(v2 + 64));
                          else
                            v6 = MpHandler::judgeApplyEnterMp(
                                   thisa,
                                   source_uid,
                                   1,
                                   PlayerApplyEnterMpResultNotify_Reason_SYSTEM_JUDGE,
                                   *(_DWORD *)(v2 + 64));
                        }
                        else
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          v45 = Player::getMpComp(thisa->player_);
                          PlayerMpComp::onBeApplied(v45, source_uid, *(_DWORD *)(v2 + 64));
                          proto::PlayerApplyEnterMpNotify::set_src_app_id(notify, 0);
                          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          Player::sendProto(thisa->player_, notify);
                          v6 = 0;
                        }
                      }
                    }
                    else
                    {
                      v6 = MpHandler::judgeApplyEnterMp(
                             thisa,
                             source_uid,
                             0,
                             PlayerApplyEnterMpResultNotify_Reason_WORLD_LEVEL_LOWER_THAN_HOST,
                             *(_DWORD *)(v2 + 64));
                    }
                  }
                }
              }
              else
              {
                v6 = MpHandler::judgeApplyEnterMp(
                       thisa,
                       source_uid,
                       0,
                       PlayerApplyEnterMpResultNotify_Reason_HOST_IS_BLOCKED,
                       *(_DWORD *)(v2 + 64));
              }
            }
          }
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v58,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mp_handler.cpp",
        "onPlayerApplyEnterMpNotify",
        54);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)&v58,
        (const char (*)[26])"source app id cannot be 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v58);
      v6 = 0;
    }
  }
  std::shared_ptr<proto::PlayerApplyEnterMpNotify>::~shared_ptr((std::shared_ptr<proto::PlayerApplyEnterMpNotify> *const)(v2 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = v6;
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 107: range 000000001689EDC6-000000001689EEF9
ForeachPolicy __cdecl MpHandler::onPlayerApplyEnterMpNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1}::operator()(
        const MpHandler::onPlayerApplyEnterMpNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerSocialComp *SocialComp; // rcx
  char v3; // al
  bool *is_in_blacklist; // rdx
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  SocialComp = Player::getSocialComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( PlayerSocialComp::isPlayerInBlacklist(SocialComp, __closure->__source_uid) )
    goto LABEL_7;
  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__src_blacklist >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         __closure->__src_blacklist,
         &value) )
  {
LABEL_7:
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_in_blacklist >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_in_blacklist = __closure->__is_in_blacklist;
  if ( *(_BYTE *)(((unsigned __int64)is_in_blacklist >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_in_blacklist & 7) >= *(_BYTE *)(((unsigned __int64)is_in_blacklist >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_in_blacklist);
  }
  *is_in_blacklist = 1;
  return 1;
};

// Line 186: range 000000001689FCA2-00000000168A03C5
__int64 __fastcall MpHandler::judgeApplyEnterMp(
        MpHandler *const this,
        uint32_t apply_uid,
        bool is_agreed,
        proto::PlayerApplyEnterMpResultNotify::Reason reason,
        uint32_t source_app_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerMpComp *MpComp; // rax
  uint32_t Uid; // eax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned int v13; // r14d
  PlayerMpComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerMpComp *v16; // rax
  common::minet::Packet *v17; // rax
  common::minet::Packet *v18; // r14
  GameserverApp *v19; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v21; // r14
  uint32_t v22; // r8d
  std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  Player *player; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-138h] BYREF
  uint32_t app_id; // [rsp+2Ch] [rbp-134h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-120h] BYREF
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
  *(_QWORD *)(v5 + 8) = "4 32 4 13 apply_uid:185 48 16 14 packet_ptr:197 80 16 11 log_ptr:220 112 40 17 result_notify:192";
  *(_QWORD *)(v5 + 16) = MpHandler::judgeApplyEnterMp;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 32) = apply_uid;
  if ( is_agreed )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    PlayerMpComp::setEnterAllowPlayerUid(MpComp, *(_DWORD *)(v5 + 32));
  }
  proto::PlayerApplyEnterMpResultNotify::PlayerApplyEnterMpResultNotify((proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::PlayerApplyEnterMpResultNotify::set_target_uid((proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112), Uid);
  proto::PlayerApplyEnterMpResultNotify::set_is_agreed(
    (proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112),
    is_agreed);
  proto::PlayerApplyEnterMpResultNotify::set_reason((proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112), reason);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v11 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  proto::PlayerApplyEnterMpResultNotify::set_target_nickname(
    (proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112),
    v11);
  common::minet::PacketUtils::createPacket<proto::PlayerApplyEnterMpResultNotify>((const proto::PlayerApplyEnterMpResultNotify *)(v5 + 48));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v5 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "judgeApplyEnterMp",
      200);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v35,
            (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v13 = -1;
  }
  else
  {
    app_id = source_app_id;
    if ( !source_app_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = Player::getMpComp(this->player_);
      app_id = PlayerMpComp::getApplyPlayerAppId(v14, *(_DWORD *)(v5 + 32));
      if ( !app_id )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/mp_handler.cpp",
          "judgeApplyEnterMp",
          210);
        v15 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v35,
                (const char (*)[55])"cannot find apply_uid corresponding app_id, apply_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v35);
        v13 = -1;
        goto LABEL_27;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getMpComp(this->player_);
      PlayerMpComp::removeApplyPlayer(v16, *(_DWORD *)(v5 + 32));
    }
    v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
    common::minet::Packet::setUserId(v17, *(_DWORD *)(v5 + 32));
    v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
    v19 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v19);
    common::minet::Packet::setSource(v18, 3u, AppId);
    v21 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v5 + 48));
    NetworkMgrBase::sendPacketToTargetService(v21, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), app_id, v22);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDealWithApply>();
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    proto_log::PlayerLogBodyDealWithApply::set_source_uid(v23, *(_DWORD *)(v5 + 32));
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    proto_log::PlayerLogBodyDealWithApply::set_is_agreed(v24, is_agreed);
    v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDealWithApply,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    proto_log::PlayerLogBodyDealWithApply::set_reason(v25, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)&packet_ptr,
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDealWithApply,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDealWithApply> *)(v5 + 80));
    Player::printStatLog(player, &p_body_ptr, (MessagePtr *)&packet_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&packet_ptr);
    v13 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyDealWithApply>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDealWithApply> *const)(v5 + 80));
  }
LABEL_27:
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 48));
  proto::PlayerApplyEnterMpResultNotify::~PlayerApplyEnterMpResultNotify((proto::PlayerApplyEnterMpResultNotify *const)(v5 + 112));
  result = v13;
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 229: range 00000000168A03C6-00000000168A0BA6
int32_t __cdecl MpHandler::onPlayerApplyEnterMpReq(
        MpHandler *const this,
        const proto::PlayerApplyEnterMpReq *req,
        proto::PlayerApplyEnterMpRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isMpClosed; // bl
  int32_t v6; // ebx
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rbx
  google::protobuf::uint32 v9; // ebx
  PlayerMpComp *MpComp; // rax
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  PlayerMpComp *v17; // rax
  PlayerMatchComp *MatchComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool *p_is_client_data_version_not_latest_ban_mp; // rax
  char v21; // r12
  PlayerMpComp *v22; // rbx
  uint32_t v23; // eax
  unsigned int val; // [rsp+28h] [rbp-78h] BYREF
  uint32_t mp_block_end_time; // [rsp+2Ch] [rbp-74h]
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *retcode; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *_; // [rsp+38h] [rbp-68h]
  std::shared_ptr<Config> v30; // [rsp+40h] [rbp-60h] BYREF
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-30h] BYREF

  v3 = proto::PlayerApplyEnterMpReq::target_uid(req);
  proto::PlayerApplyEnterMpRsp::set_target_uid(rsp_0, v3);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  isMpClosed = FeatureSwitchMgr::isMpClosed(&v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( isMpClosed )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/mp_handler.cpp",
      "onPlayerApplyEnterMpReq",
      234);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v32, (const char (*)[18])"mp feature closed");
    common::milog::MiLogStream::~MiLogStream(&v32);
    return 142;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x31u) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mp_handler.cpp",
        "onPlayerApplyEnterMpReq",
        240);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v32,
             (const char (*)[32])"player mp switch not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      return 1223;
    }
    else
    {
      v9 = proto::PlayerApplyEnterMpReq::target_uid(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( v9 == Player::getUid(this->player_) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mp_handler.cpp",
          "onPlayerApplyEnterMpReq",
          246);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v32,
          (const char (*)[22])"target cannot be self");
        common::milog::MiLogStream::~MiLogStream(&v32);
        return -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
        if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
        {
          proto::PlayerApplyEnterMpRsp::set_param(rsp_0, mp_block_end_time);
          return 1226;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SocialComp = Player::getSocialComp(this->player_);
          v13 = proto::PlayerApplyEnterMpReq::target_uid(req);
          if ( PlayerSocialComp::isPlayerInBlacklist(SocialComp, v13) )
          {
            return 1224;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::checkMpModeAvailability(&__in, this->player_);
            retcode = std::get<0ul,int,std::vector<unsigned int>>(&__in);
            _ = std::get<1ul,int,std::vector<unsigned int>>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *retcode )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/mp_handler.cpp",
                "onPlayerApplyEnterMpReq",
                265);
              v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v32,
                      (const char (*)[30])"checkMpModeAvailability ret: ");
              v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, retcode);
              v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              common::milog::MiLogStream::~MiLogStream(&v32);
              if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v6 = *retcode;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v17 = Player::getMpComp(this->player_);
              if ( PlayerMpComp::isInMpMode(v17) )
              {
                v6 = 1202;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                MatchComp = Player::getMatchComp(this->player_);
                if ( PlayerMatchComp::isInMatch(MatchComp) )
                {
                  v6 = 1562;
                }
                else
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v30);
                  v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
                  p_is_client_data_version_not_latest_ban_mp = &v19->is_client_data_version_not_latest_ban_mp;
                  if ( *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
                    && ((unsigned __int8)p_is_client_data_version_not_latest_ban_mp & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load1(p_is_client_data_version_not_latest_ban_mp);
                  }
                  if ( !v19->is_client_data_version_not_latest_ban_mp )
                    goto LABEL_50;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  if ( !Player::isClientDataVersionLatest(this->player_) )
                    v21 = 1;
                  else
LABEL_50:
                    v21 = 0;
                  std::shared_ptr<Config>::~shared_ptr(&v30);
                  if ( v21 )
                  {
                    v6 = 1232;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v22 = Player::getMpComp(this->player_);
                    v23 = proto::PlayerApplyEnterMpReq::target_uid(req);
                    PlayerMpComp::applyEnterMp(v22, v23);
                    proto::PlayerApplyEnterMpRsp::set_retcode(rsp_0, 0);
                    v6 = proto::PlayerApplyEnterMpRsp::retcode(rsp_0);
                  }
                }
              }
            }
            std::pair<int,std::vector<unsigned int>>::~pair(&__in);
          }
        }
      }
    }
  }
  return v6;
};

// Line 290: range 00000000168A0BA8-00000000168A125C
int32_t __cdecl MpHandler::onPlayerApplyEnterMpResultNotify(
        MpHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMpComp *MpComp; // r14
  uint64_t NowMs; // rax
  char v8; // r15
  PlayerMpComp *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  google::protobuf::uint32 v12; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  bool is_agreed; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  google::protobuf::uint32 v16; // eax
  PlayerSocialComp *SocialComp; // r14
  uint32_t v18; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  int32_t result; // eax
  std::string v22; // [rsp+0h] [rbp-120h]
  uint32_t source; // [rsp+24h] [rbp-FCh]
  std::__shared_ptr_access<proto::PlayerApplyEnterMpResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v28;
  v22._M_dataplus._M_p = v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:306 64 16 14 notify_ptr:291 96 16 11 log_ptr:307";
  *(_QWORD *)(v2 + 16) = MpHandler::onPlayerApplyEnterMpResultNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::PlayerApplyEnterMpResultNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::PlayerApplyEnterMpResultNotify>(
         (const std::shared_ptr<proto::PlayerApplyEnterMpResultNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onPlayerApplyEnterMpResultNotify",
      291);
    common::milog::MiLogStream::operator()(&v27, off_25E0F980);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PlayerApplyEnterMpResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerApplyEnterMpResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    NowMs = common::tools::TimeUtils::getNowMs();
    PlayerMpComp::onApplyEnterMpEnd(MpComp, NowMs);
    v8 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
    if ( std::operator!=<Scene>(&__a, 0LL) )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability((std::pair<int,std::vector<unsigned int> > *)&v27, this->player_);
    v8 = 1;
    if ( LODWORD(v27.log_) || (v9 = Player::getMpComp(this->player_), PlayerMpComp::isInMpMode(v9)) )
LABEL_15:
      HIBYTE(v22._M_string_length) = 1;
    else
      HIBYTE(v22._M_string_length) = 0;
    if ( v8 )
      std::pair<int,std::vector<unsigned int>>::~pair((std::pair<int,std::vector<unsigned int> > *const)&v27);
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( HIBYTE(v22._M_string_length) )
    {
      proto::PlayerApplyEnterMpResultNotify::set_is_agreed(notify, 0);
      proto::PlayerApplyEnterMpResultNotify::set_reason(
        notify,
        PlayerApplyEnterMpResultNotify_Reason_PLAYER_CANNOT_ENTER_MP);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x70Bu, v22);
    std::string::~string(&v27);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyApplyResult>();
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v12 = proto::PlayerApplyEnterMpResultNotify::target_uid(notify);
    proto_log::PlayerLogBodyApplyResult::set_target_uid(v11, v12);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    is_agreed = proto::PlayerApplyEnterMpResultNotify::is_agreed(notify);
    proto_log::PlayerLogBodyApplyResult::set_is_agreed(v13, is_agreed);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v16 = proto::PlayerApplyEnterMpResultNotify::reason(notify);
    proto_log::PlayerLogBodyApplyResult::set_reason(v15, v16);
    if ( *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(*(Player *const *)(*(&v22._anon_0._M_allocated_capacity + 1) + 8));
    v18 = proto::PlayerApplyEnterMpResultNotify::target_uid(notify);
    source = PlayerSocialComp::isPlayerFriend(SocialComp, v18);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyApplyResult::set_request_source(v19, source);
    if ( *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = *(Player **)(*(&v22._anon_0._M_allocated_capacity + 1) + 8);
    std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyApplyResult,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyApplyResult> *)(v2 + 96));
    Player::printStatLog(v20, &p_body_ptr, (MessagePtr *)&__a, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
    v5 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyApplyResult>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyApplyResult> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<proto::PlayerApplyEnterMpResultNotify>::~shared_ptr((std::shared_ptr<proto::PlayerApplyEnterMpResultNotify> *const)(v2 + 64));
  result = v5;
  if ( v22._M_dataplus._M_p == (std::string::pointer)v2 )
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

// Line 319: range 00000000168A125E-00000000168A1BA6
int32_t __cdecl MpHandler::onPlayerApplyEnterMpResultReq(
        MpHandler *const this,
        const proto::PlayerApplyEnterMpResultReq *req,
        proto::PlayerApplyEnterMpResultRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 v8; // edx
  PlayerMpComp *MpComp; // rax
  bool is_agreed; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerMpComp *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // r14
  int v20; // r15d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerMpComp *v22; // rax
  PlayerMatchComp *MatchComp; // rax
  bool v24; // r14
  uint32_t v25; // esi
  common::milog::MiLogStream *v26; // r14
  int32_t result; // eax
  std::string v28; // [rsp+0h] [rbp-110h]
  char *v29; // [rsp+0h] [rbp-110h]
  proto::PlayerApplyEnterMpResultRsp *rsp_0a; // [rsp+8h] [rbp-108h]
  const proto::PlayerApplyEnterMpResultReq *reqa; // [rsp+10h] [rbp-100h]
  MpHandler *thisa; // [rsp+18h] [rbp-F8h]
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  uint32_t mp_block_end_time; // [rsp+2Ch] [rbp-E4h]
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *retcode; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *_; // [rsp+38h] [rbp-D8h]
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+40h] [rbp-D0h] BYREF
  std::string v38; // [rsp+60h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&v28._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v28._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v28._M_string_length = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v39;
  v28._M_dataplus._M_p = v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 10 holder:320 48 4 7 ret:339 64 16 13 world_ptr:349";
  *(_QWORD *)(v4 + 16) = MpHandler::onPlayerApplyEnterMpResultReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v38, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x70Cu, v28);
  std::string::~string(&v38);
  v8 = proto::PlayerApplyEnterMpResultReq::apply_uid(reqa);
  proto::PlayerApplyEnterMpResultRsp::set_apply_uid(rsp_0a, v8);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(thisa->player_);
  mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
  if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
  {
    proto::PlayerApplyEnterMpResultRsp::set_param(rsp_0a, mp_block_end_time);
    proto::PlayerApplyEnterMpResultRsp::set_retcode(rsp_0a, 1226);
    v3 = 1226;
  }
  else
  {
    is_agreed = proto::PlayerApplyEnterMpResultReq::is_agreed(reqa);
    proto::PlayerApplyEnterMpResultRsp::set_is_agreed(rsp_0a, is_agreed);
    proto::PlayerApplyEnterMpResultRsp::set_retcode(rsp_0a, 0);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability(&__in, thisa->player_);
    retcode = std::get<0ul,int,std::vector<unsigned int>>(&__in);
    _ = std::get<1ul,int,std::vector<unsigned int>>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *retcode )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mp_handler.cpp",
        "onPlayerApplyEnterMpResultReq",
        335);
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v38,
              (const char (*)[30])"checkMpModeAvailability ret: ");
      v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, retcode);
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
      v3 = proto::PlayerApplyEnterMpResultRsp::retcode(rsp_0a);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = Player::getMpComp(thisa->player_);
      *(_DWORD *)(v4 + 48) = PlayerMpComp::checkMpSceneEnterable(v15, 0);
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/mp_handler.cpp",
          "onPlayerApplyEnterMpResultReq",
          342);
        v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&v38,
                (const char (*)[36])"checkMpSceneEnterable failed, ret: ");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v4 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(thisa->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
        v3 = 1205;
      }
      else
      {
        if ( !proto::PlayerApplyEnterMpResultReq::is_agreed(reqa) )
          goto LABEL_47;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(thisa->player_);
        PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 64));
        if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mp_handler.cpp",
            "onPlayerApplyEnterMpResultReq",
            352);
          v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)&v38,
                  (const char (*)[24])off_25E0FAC0);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(thisa->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
          v3 = -1;
          v20 = 0;
        }
        else
        {
          v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( World::isWorldFull(v21) )
          {
            v3 = 1208;
            v20 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v22 = Player::getMpComp(thisa->player_);
            if ( PlayerMpComp::isAllowEnterPlayerFull(v22) )
            {
              v3 = 1213;
              v20 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              MatchComp = Player::getMatchComp(thisa->player_);
              if ( PlayerMatchComp::isInMatch(MatchComp) )
              {
                v3 = 1562;
                v20 = 0;
              }
              else
              {
                v20 = 1;
              }
            }
          }
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
        if ( v20 == 1 )
        {
LABEL_47:
          v24 = proto::PlayerApplyEnterMpResultReq::is_agreed(reqa);
          v25 = proto::PlayerApplyEnterMpResultReq::apply_uid(reqa);
          if ( (unsigned int)MpHandler::judgeApplyEnterMp(
                               thisa,
                               v25,
                               v24,
                               PlayerApplyEnterMpResultNotify_Reason_PLAYER_JUDGE,
                               0) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/mp_handler.cpp",
              "onPlayerApplyEnterMpResultReq",
              374);
            v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)&v38,
                    (const char (*)[31])"judgeApplyEnterMp fails, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(thisa->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
            v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
      }
    }
    std::pair<int,std::vector<unsigned int>>::~pair(&__in);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v3;
  if ( v29 == (char *)v4 )
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

// Line 381: range 00000000168A1BA8-00000000168A1D47
int32_t __cdecl MpHandler::onGetPlayerMpModeAvailabilityReq(
        MpHandler *const this,
        const proto::GetPlayerMpModeAvailabilityReq *req,
        proto::GetPlayerMpModeAvailabilityRsp *rsp_0)
{
  google::protobuf::uint32 *v3; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *ret; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *vec; // [rsp+40h] [rbp-40h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-38h]
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::checkMpModeAvailability(&__in, this->player_);
  ret = std::get<0ul,int,std::vector<unsigned int>>(&__in);
  vec = std::get<1ul,int,std::vector<unsigned int>>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GetPlayerMpModeAvailabilityRsp::set_mp_ret(rsp_0, *ret);
  __for_range = vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v3 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GetPlayerMpModeAvailabilityRsp::add_param_list(rsp_0, *v3);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::pair<int,std::vector<unsigned int>>::~pair(&__in);
  return 0;
};

// Line 392: range 00000000168A1D48-00000000168A2160
int32_t __cdecl MpHandler::onPlayerSetOnlyMPWithPSPlayerReq(
        MpHandler *const this,
        const proto::PlayerSetOnlyMPWithPSPlayerReq *req,
        proto::PlayerSetOnlyMPWithPSPlayerRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool is_only; // dl
  int32_t v7; // r14d
  bool v8; // dl
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPsMpSwitchChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  bool v11; // al
  Player *player; // r14
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-100h]
  const proto::PlayerSetOnlyMPWithPSPlayerReq *const reqa; // [rsp+10h] [rbp-F0h]
  MpHandler *thisa; // [rsp+18h] [rbp-E8h]
  PlayerMpComp *mp_comp; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v14._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v14._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:402 64 16 11 log_ptr:403";
  *(_QWORD *)(v3 + 16) = MpHandler::onPlayerSetOnlyMPWithPSPlayerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  is_only = proto::PlayerSetOnlyMPWithPSPlayerReq::is_only(req);
  proto::PlayerSetOnlyMPWithPSPlayerRsp::set_is_only(
    (proto::PlayerSetOnlyMPWithPSPlayerRsp *const)v14._M_string_length,
    is_only);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isPsnPlatform(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onPlayerSetOnlyMPWithPSPlayerReq",
      396);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v20,
      (const char (*)[35])"None PS4 player should not be here");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = 1218;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    mp_comp = Player::getMpComp(this->player_);
    v8 = proto::PlayerSetOnlyMPWithPSPlayerReq::is_only(req);
    PlayerMpComp::setIsOnlyMpWithPSPlayer(mp_comp, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x711u, v14);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyPsMpSwitchChange>();
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyPsMpSwitchChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPsMpSwitchChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v11 = proto::PlayerSetOnlyMPWithPSPlayerReq::is_only(reqa);
    proto_log::PlayerLogBodyPsMpSwitchChange::set_op(v10, v11);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPsMpSwitchChange,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyPsMpSwitchChange> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v7 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyPsMpSwitchChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPsMpSwitchChange> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = v7;
  if ( v21 == (char *)v3 )
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

// Line 410: range 00000000168A2162-00000000168A295C
int32_t __cdecl MpHandler::onPSPlayerApplyEnterMpReq(
        MpHandler *const this,
        const proto::PSPlayerApplyEnterMpReq *req,
        proto::PSPlayerApplyEnterMpRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  const std::string *v6; // rdx
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // r12
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  PlayerMpComp *v15; // rax
  PlayerMatchComp *MatchComp; // rax
  const std::string *v17; // rax
  common::milog::MiLogStream *i; // r14
  google::protobuf::RepeatedPtrField<std::string > *v19; // rax
  int32_t result; // eax
  std::allocator<std::string > __a; // [rsp+37h] [rbp-149h] BYREF
  unsigned int val; // [rsp+38h] [rbp-148h] BYREF
  uint32_t mp_block_end_time; // [rsp+3Ch] [rbp-144h]
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *retcode; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *_; // [rsp+48h] [rbp-138h]
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-110h] BYREF
  char v29[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 14 psn_id_vec:449 112 48 18 get_ps_uid_req:447";
  *(_QWORD *)(v3 + 16) = MpHandler::onPSPlayerApplyEnterMpReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  v6 = proto::PSPlayerApplyEnterMpReq::target_psn_id[abi:cxx11](req);
  proto::PSPlayerApplyEnterMpRsp::set_target_psn_id(rsp_0, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isPsnPlatform(this->player_) )
  {
    v7 = 1218;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x31u) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mp_handler.cpp",
        "onPSPlayerApplyEnterMpReq",
        420);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v28,
             (const char (*)[32])"player mp switch not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = 1223;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
      if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
      {
        proto::PSPlayerApplyEnterMpRsp::set_param(rsp_0, mp_block_end_time);
        v7 = 1226;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::checkMpModeAvailability(&__in, this->player_);
        retcode = std::get<0ul,int,std::vector<unsigned int>>(&__in);
        _ = std::get<1ul,int,std::vector<unsigned int>>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *retcode )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mp_handler.cpp",
            "onPSPlayerApplyEnterMpReq",
            434);
          v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v28,
                  (const char (*)[30])"checkMpModeAvailability ret: ");
          v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, retcode);
          v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v28);
          if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v7 = *retcode;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = Player::getMpComp(this->player_);
          if ( PlayerMpComp::isInMpMode(v15) )
          {
            v7 = 1202;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MatchComp = Player::getMatchComp(this->player_);
            if ( PlayerMatchComp::isInMatch(MatchComp) )
            {
              v7 = 1562;
            }
            else
            {
              proto::SeverGetPS4FriendUidReq::SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v3 + 112));
              proto::SeverGetPS4FriendUidReq::set_request_reason(
                (proto::SeverGetPS4FriendUidReq *const)(v3 + 112),
                PS_REASON_APPLY_ENTER_MP);
              v17 = proto::PSPlayerApplyEnterMpReq::target_psn_id[abi:cxx11](req);
              std::string::basic_string(&v28, v17);
              std::allocator<std::string>::allocator(&__a);
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v3 + 48),
                (std::initializer_list<std::string >)__PAIR128__(1LL, &v28),
                &__a);
              std::allocator<std::string>::~allocator(&__a);
              for ( i = (common::milog::MiLogStream *)v29; i != &v28; std::string::~string(i) )
                --i;
              v19 = proto::SeverGetPS4FriendUidReq::mutable_psn_id_list[abi:cxx11]((proto::SeverGetPS4FriendUidReq *const)(v3 + 112));
              common::tools::MiscUtils::toRepeated<std::string,std::string>(
                (const std::vector<std::string> *)(v3 + 48),
                v19);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
                this->player_,
                (proto::SeverGetPS4FriendUidReq *)(v3 + 112));
              proto::PSPlayerApplyEnterMpRsp::set_retcode(rsp_0, 0);
              v7 = proto::PSPlayerApplyEnterMpRsp::retcode(rsp_0);
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 48));
              proto::SeverGetPS4FriendUidReq::~SeverGetPS4FriendUidReq((proto::SeverGetPS4FriendUidReq *const)(v3 + 112));
            }
          }
        }
        std::pair<int,std::vector<unsigned int>>::~pair(&__in);
      }
    }
  }
  result = v7;
  if ( v29 == (char *)v3 )
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
  return result;
};

// Line 461: range 00000000168A295E-00000000168A2DDA
int32_t __cdecl MpHandler::onMpPlayOwnerCheckReq(
        MpHandler *const this,
        const proto::MpPlayOwnerCheckReq *req,
        proto::MpPlayOwnerCheckRsp *rsp_0)
{
  unsigned __int64 p_M_bucket_count; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t MpPlayComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  uint32_t v11; // eax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Uid; // edx
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  uint32_t v16; // eax
  uint32_t v17; // edx
  int32_t result; // eax
  bool is_skip_match; // [rsp+23h] [rbp-BDh]
  uint32_t mp_play_id; // [rsp+24h] [rbp-BCh]
  PlayerMpPlayComp v22; // [rsp+28h] [rbp-B8h] BYREF

  p_M_bucket_count = (unsigned __int64)&v22.mp_play_map_._M_h._M_bucket_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      p_M_bucket_count = v4;
  }
  *(_QWORD *)p_M_bucket_count = 1102416563LL;
  *(_QWORD *)(p_M_bucket_count + 8) = "3 32 4 7 ret:467 48 4 13 wrong_uid:468 64 16 15 mp_play_ptr:477";
  *(_QWORD *)(p_M_bucket_count + 16) = MpHandler::onMpPlayOwnerCheckReq;
  v5 = (_DWORD *)(p_M_bucket_count >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  mp_play_id = proto::MpPlayOwnerCheckReq::mp_play_id(req);
  is_skip_match = proto::MpPlayOwnerCheckReq::is_skip_match(req);
  proto::MpPlayOwnerCheckRsp::set_mp_play_id(rsp_0, mp_play_id);
  proto::MpPlayOwnerCheckRsp::set_is_skip_match(rsp_0, is_skip_match);
  *(_DWORD *)(p_M_bucket_count + 32) = 0;
  *(_DWORD *)(p_M_bucket_count + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpPlayComp = (unsigned int)Player::getMpPlayComp(this->player_);
  PlayerMpPlayComp::checkInviteFlowCond(&v22, MpPlayComp, mp_play_id);
  std::tie<int,unsigned int>(
    (int *)(p_M_bucket_count + 64),
    (unsigned int *)(p_M_bucket_count + 32),
    (int *)(p_M_bucket_count + 48),
    (unsigned int *)(p_M_bucket_count + 32));
  std::tuple<int &,unsigned int &>::operator=<int,unsigned int>(
    (std::tuple<int&,unsigned int&> *const)(p_M_bucket_count + 64),
    (std::tuple<int,unsigned int> *)&v22);
  if ( *(_DWORD *)(p_M_bucket_count + 32) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v22.std::enable_shared_from_this<PlayerCompBase>,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/mp_handler.cpp",
      "onMpPlayOwnerCheckReq",
      472);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&v22.std::enable_shared_from_this<PlayerCompBase>,
           (const char (*)[34])"checkInviteFlowCond failed, ret: ");
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(p_M_bucket_count + 32));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v9,
      (const unsigned int *)(p_M_bucket_count + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.std::enable_shared_from_this<PlayerCompBase>);
    proto::MpPlayOwnerCheckRsp::set_wrong_uid(rsp_0, *(_DWORD *)(p_M_bucket_count + 48));
    v10 = *(_DWORD *)(p_M_bucket_count + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned int)Player::getMpPlayComp(this->player_);
    PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(p_M_bucket_count + 64), v11);
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(p_M_bucket_count + 64))
      || (v12 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 64)),
          BaseMpPlay::isClose(v12)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::MpPlayOwnerCheckRsp::set_wrong_uid(rsp_0, Uid);
      v10 = 1219;
    }
    else
    {
      v15 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_bucket_count + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getUid(this->player_);
      if ( BaseMpPlay::isRemainRewards(v15, v16) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getUid(this->player_);
        proto::MpPlayOwnerCheckRsp::set_wrong_uid(rsp_0, v17);
        v10 = 1220;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(p_M_bucket_count + 64));
  }
  result = v10;
  if ( &v22.mp_play_map_._M_h._M_bucket_count == (std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_bucket_count )
  {
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_bucket_count = 1172321806LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 497: range 00000000168A2DDC-00000000168A3168
int32_t __cdecl MpHandler::onMpPlayOwnerStartInviteReq(
        MpHandler *const this,
        const proto::MpPlayOwnerStartInviteReq *req,
        proto::MpPlayOwnerStartInviteRsp *rsp_0)
{
  unsigned __int64 p_M_element_count; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t MpPlayComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  PlayerMpPlayComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool is_skip_match; // [rsp+27h] [rbp-B9h]
  PlayerMpPlayComp v16; // [rsp+28h] [rbp-B8h] BYREF

  p_M_element_count = (unsigned __int64)&v16.mp_play_map_._M_h._M_element_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      p_M_element_count = v4;
  }
  *(_QWORD *)p_M_element_count = 1102416563LL;
  *(_QWORD *)(p_M_element_count + 8) = "3 32 4 14 mp_play_id:498 48 4 7 ret:503 64 4 13 wrong_uid:504";
  *(_QWORD *)(p_M_element_count + 16) = MpHandler::onMpPlayOwnerStartInviteReq;
  v5 = (_DWORD *)(p_M_element_count >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(p_M_element_count + 32) = proto::MpPlayOwnerStartInviteReq::mp_play_id(req);
  is_skip_match = proto::MpPlayOwnerStartInviteReq::is_skip_match(req);
  proto::MpPlayOwnerStartInviteRsp::set_mp_play_id(rsp_0, *(_DWORD *)(p_M_element_count + 32));
  proto::MpPlayOwnerStartInviteRsp::set_is_skip_match(rsp_0, is_skip_match);
  *(_DWORD *)(p_M_element_count + 48) = 0;
  *(_DWORD *)(p_M_element_count + 64) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpPlayComp = (unsigned int)Player::getMpPlayComp(this->player_);
  PlayerMpPlayComp::checkInviteFlowCond(&v16, MpPlayComp, *(_DWORD *)(p_M_element_count + 32));
  std::tie<int,unsigned int>(
    (int *)&v16.std::enable_shared_from_this<PlayerCompBase>,
    (unsigned int *)(p_M_element_count + 48),
    (int *)(p_M_element_count + 64),
    (unsigned int *)(p_M_element_count + 48));
  std::tuple<int &,unsigned int &>::operator=<int,unsigned int>(
    (std::tuple<int&,unsigned int&> *const)&v16.std::enable_shared_from_this<PlayerCompBase>,
    (std::tuple<int,unsigned int> *)&v16);
  if ( *(_DWORD *)(p_M_element_count + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v16.player_,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/mp_handler.cpp",
      "onMpPlayOwnerStartInviteReq",
      508);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&v16.player_,
           (const char (*)[34])"checkInviteFlowCond failed, ret: ");
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(p_M_element_count + 48));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v9,
      (const unsigned int *)(p_M_element_count + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v16.player_);
    result = *(_DWORD *)(p_M_element_count + 48);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getMpPlayComp(this->player_);
    *(_DWORD *)(p_M_element_count + 48) = PlayerMpPlayComp::startInviteFlow(
                                            v11,
                                            *(_DWORD *)(p_M_element_count + 32),
                                            is_skip_match);
    if ( *(_DWORD *)(p_M_element_count + 48) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v16.player_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mp_handler.cpp",
        "onMpPlayOwnerStartInviteReq",
        515);
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)&v16.player_,
              (const char (*)[17])"startInviteFlow ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              (const unsigned int *)(p_M_element_count + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v16.player_);
      result = *(_DWORD *)(p_M_element_count + 48);
    }
    else
    {
      result = 0;
    }
  }
  if ( &v16.mp_play_map_._M_h._M_element_count == (std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,std::allocator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_element_count )
  {
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_element_count = 1172321806LL;
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 523: range 00000000168A316A-00000000168A3590
int32_t __cdecl MpHandler::onMpPlayGuestReplyInviteReq(
        MpHandler *const this,
        const proto::MpPlayGuestReplyInviteReq *req,
        proto::MpPlayGuestReplyInviteRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  uint32_t v7; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rax
  PlayerMpPlayComp *MpPlayComp; // r15
  bool is_agree; // r14
  uint32_t v12; // eax
  int32_t result; // eax
  uint32_t uid; // [rsp+14h] [rbp-CCh]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 world_ptr:524 64 16 20 owner_player_ptr:530";
  *(_QWORD *)(v3 + 16) = MpHandler::onMpPlayGuestReplyInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onMpPlayGuestReplyInviteReq",
      527);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mp_handler.cpp",
        "onMpPlayGuestReplyInviteReq",
        533);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"getOwnPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = Player::getUid(this->player_);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( v7 == Player::getUid(v8) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mp_handler.cpp",
          "onMpPlayGuestReplyInviteReq",
          538);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v15,
          (const char (*)[22])"guest is world owner!");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v6 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        MpPlayComp = Player::getMpPlayComp(v9);
        is_agree = proto::MpPlayGuestReplyInviteReq::is_agree(req);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        uid = Player::getUid(this->player_);
        v12 = proto::MpPlayGuestReplyInviteReq::mp_play_id(req);
        v6 = PlayerMpPlayComp::onGuestReply(MpPlayComp, v12, uid, is_agree);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v6;
  if ( v16 == (char *)v3 )
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
