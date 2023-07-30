// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/offline_msg_handler.cpp

// Line 26: range 000000000E3090D0-000000000E309C81
int32_t __cdecl OfflineMsgHandler::addPacketFuncToMap(
        OfflineMsgHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  OfflineMsgHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  OfflineMsgHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  OfflineMsgHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  OfflineMsgHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  OfflineMsgHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  OfflineMsgHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  OfflineMsgHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  OfflineMsgHandler **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v28; // rax
  __m128i v29; // [rsp+0h] [rbp-120h] BYREF
  __m128i v30; // [rsp+10h] [rbp-110h] BYREF
  __m128i v31; // [rsp+20h] [rbp-100h] BYREF
  __m128i v32; // [rsp+30h] [rbp-F0h] BYREF
  __m128i v33; // [rsp+40h] [rbp-E0h] BYREF
  __m128i v34; // [rsp+50h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+60h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+68h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+70h] [rbp-B0h]
  OfflineMsgHandler *thisa; // [rsp+78h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+8Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v40; // [rsp+90h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+98h] [rbp-88h] BYREF
  int (*__f[2])(OfflineMsgHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+A0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,const std::_Placeholder<1>&>::type v43; // [rsp+B0h] [rbp-70h] BYREF
  common::milog::MiLogStream v44; // [rsp+D0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10390;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v40, &__y) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_msg_handler.cpp",
      "addPacketFuncToMap",
      28);
    common::milog::MiLogStream::operator()(&v44, off_1BD97720, 10390LL);
    common::milog::MiLogStream::~MiLogStream(&v44);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(OfflineMsgHandler *, std::shared_ptr<common::minet::Packet>))OfflineMsgHandler::onSendOfflineMsgReq;
    __f[1] = 0LL;
    std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
      &v43,
      __f,
      (OfflineMsgHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10390;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
      v7,
      &v43);
    __x = 10348;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v40, &__y) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/offline_msg_handler.cpp",
        "addPacketFuncToMap",
        29);
      common::milog::MiLogStream::operator()(&v44, off_1BD97720, 10348LL);
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(OfflineMsgHandler *, std::shared_ptr<common::minet::Packet>))OfflineMsgHandler::onRemoveOfflineMsgNotify;
      __f[1] = 0LL;
      std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
        &v43,
        __f,
        (OfflineMsgHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10348;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
        v10,
        &v43);
      __x = 10331;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v40, &__y) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/offline_msg_handler.cpp",
          "addPacketFuncToMap",
          30);
        common::milog::MiLogStream::operator()(&v44, off_1BD97720, 10331LL);
        common::milog::MiLogStream::~MiLogStream(&v44);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v29.m128i_i64[0] = (__int64)OfflineMsgHandler::onGetOfflineMsgReq;
        v29.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v29);
        std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
          &v43,
          __f,
          (OfflineMsgHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10331;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
          v13,
          &v43);
        __x = 10397;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v40, &__y) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/offline_msg_handler.cpp",
            "addPacketFuncToMap",
            31);
          common::milog::MiLogStream::operator()(&v44, off_1BD97720, 10397LL);
          common::milog::MiLogStream::~MiLogStream(&v44);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v30.m128i_i64[0] = (__int64)OfflineMsgHandler::onClearOfflineMsgNotify;
          v30.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v30);
          std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
            &v43,
            __f,
            (OfflineMsgHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10397;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
            v16,
            &v43);
          __x = 12031;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v40, &__y) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/offline_msg_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v44, off_1BD97720, 12031LL);
            common::milog::MiLogStream::~MiLogStream(&v44);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v31.m128i_i64[0] = (__int64)OfflineMsgHandler::onSendHomeOfflineMsgReq;
            v31.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v31);
            std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
              &v43,
              __f,
              (OfflineMsgHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 12031;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
              v19,
              &v43);
            __x = 12005;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v40, &__y) )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/offline_msg_handler.cpp",
                "addPacketFuncToMap",
                34);
              common::milog::MiLogStream::operator()(&v44, off_1BD97720, 12005LL);
              common::milog::MiLogStream::~MiLogStream(&v44);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v32.m128i_i64[0] = (__int64)OfflineMsgHandler::onRemoveHomeOfflineMsgNotify;
              v32.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v32);
              std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
                &v43,
                __f,
                (OfflineMsgHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 12005;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
                v22,
                &v43);
              __x = 12097;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v40, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/offline_msg_handler.cpp",
                  "addPacketFuncToMap",
                  35);
                common::milog::MiLogStream::operator()(&v44, off_1BD97720, 12097LL);
                common::milog::MiLogStream::~MiLogStream(&v44);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v33.m128i_i64[0] = (__int64)OfflineMsgHandler::onGetHomeOfflineMsgReq;
                v33.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v33);
                std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
                  &v43,
                  __f,
                  (OfflineMsgHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 12097;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v43);
                __x = 12082;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v40._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v40, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v44,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/offline_msg_handler.cpp",
                    "addPacketFuncToMap",
                    36);
                  common::milog::MiLogStream::operator()(&v44, off_1BD97720, 12082LL);
                  common::milog::MiLogStream::~MiLogStream(&v44);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v34.m128i_i64[0] = (__int64)OfflineMsgHandler::onClearHomeOfflineMsgNotify;
                  v34.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v34);
                  std::bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineMsgHandler*,std::_Placeholder<1> const&>(
                    &v43,
                    __f,
                    (OfflineMsgHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 12082;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineMsgHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineMsgHandler*,std::_Placeholder<1>)>>(
                    v28,
                    &v43);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 42: range 000000000E309C82-000000000E309F7E
int32_t __cdecl OfflineMsgHandler::onSendOfflineMsgReq(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  OfflineMsgService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SendOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::SendOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::SendOfflineMsgRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onSendOfflineMsgReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendOfflineMsgReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SendOfflineMsgReq const>(
         (const std::shared_ptr<const proto::SendOfflineMsgReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onSendOfflineMsgReq",
      44);
    common::milog::MiLogStream::operator()(&v15, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SendOfflineMsgReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SendOfflineMsgRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SendOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SendOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SendOfflineMsgRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    OfflineMsgHandler::sendOfflineMsg(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SendOfflineMsgRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendOfflineMsgRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::SendOfflineMsgRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SendOfflineMsgRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SendOfflineMsgRsp>::~shared_ptr((std::shared_ptr<proto::SendOfflineMsgRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SendOfflineMsgReq const>::~shared_ptr((std::shared_ptr<const proto::SendOfflineMsgReq> *const)(v2 + 32));
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

// Line 51: range 000000000E309F80-000000000E30B2B2
void __fastcall OfflineMsgHandler::sendOfflineMsg(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SendOfflineMsgReq *req,
        proto::SendOfflineMsgRsp *rsp_0)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  proto::OfflineMsgBin::DetailCase v7; // eax
  const proto::DelItemOp *v8; // rax
  uint32_t v9; // r14d
  const proto::DelItemOp *v10; // rax
  uint32_t v11; // eax
  const proto::DelItemNegativeOp *v12; // rax
  const proto::PlayerGotoOp *v13; // rax
  const proto::ResetParentQuestOp *v14; // rax
  uint32_t v15; // eax
  const proto::RefreshGroupOp *refreshed; // rax
  const proto::SetScenePointLockStatusOp *v17; // rax
  uint32_t v18; // r14d
  const proto::SetScenePointLockStatusOp *v19; // rax
  uint32_t v20; // eax
  const proto::SetPlayerNickNameOp *v21; // rax
  const proto::RefreshShopOp *v22; // rax
  const proto::UnlockTalentOp *v23; // rax
  const proto::TakeOffEquipOp *v24; // rax
  const proto::DelMailOp *v25; // rax
  const proto::UnlockAreaOp *v26; // rax
  const proto::FinishDailyTaskOp *v27; // rax
  uint32_t v28; // eax
  const proto::FinishDailyTaskUnloadGroupOp *v29; // rax
  uint32_t v30; // eax
  const proto::AddItemOp *v31; // rax
  const proto::ModifyBornPosOp *v32; // rax
  const proto::ProcSceneTagOp *v33; // rax
  const proto::SetQuestContentProgressOp *v34; // rax
  const proto::AddOrModifyWatcherOp *v35; // rax
  const proto::DelWatcherOp *v36; // rax
  const proto::SetSignatureOp *v37; // rax
  const proto::AddOrSubResinOp *v38; // rax
  const proto::SetQuestGlobalVarValueOp *v39; // rax
  const proto::GroupBinOp *v40; // rax
  const proto::DelOneOffOp *v41; // rax
  const proto::FinishRoutineOp *v42; // rax
  const proto::BlessingActivityGivePicOp *v43; // rax
  const proto::ExpeditionActivityAssistOp *v44; // rax
  const proto::RefreshBlossomCircleCampOp *v45; // rax
  const proto::ForceAcceptQuestOp *v46; // rax
  ActivityChannellerSlabExcelConfigMgr *p_activity_channeller_slab_config_mgr; // r14
  uint32_t v48; // r15d
  uint32_t v49; // eax
  common::milog::MiLogStream *v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  const proto::SetClimateAreaTypeOp *v55; // rax
  const proto::ChangeMapAreaInfoOp *v56; // rax
  const proto::SetFinishedParentQuestChildStateOp *v57; // rax
  const proto::SetLevel1AreaExplorePointOp *v58; // rax
  const proto::SetCodexOpenOrCloseOp *v59; // rax
  const proto::GroupLinkOp *v60; // rax
  const proto::RemoveInvalidMapMarksOp *v61; // rax
  const proto::RecalculateAreaExplorePointOp *v62; // rax
  const proto::PassHomeSceneArrangementAuditOp *v63; // rax
  const proto::FailHomeSceneArrangementAuditOp *v64; // rax
  const proto::FailHomeModulesArrangementAuditOp *v65; // rax
  const proto::ResetPlayerPersistentDungeonOp *v66; // rax
  uint32_t v67; // eax
  const proto::ResetPlayerPosInPersistentDungeonOp *v68; // rax
  uint32_t v69; // eax
  const proto::LevelTagChangeOp *v70; // rax
  const proto::ResetPlayerWayPointInPersistentDungeonOp *v71; // rax
  const proto::ExhibitionSetOp *v72; // rax
  const proto::SetAvatarExtraPropOp *v73; // rax
  const proto::AddItemWithLimitOp *v74; // rax
  const proto::SetGadgetChainLevelOp *v75; // rax
  const proto::SetDailyTaskVarOp *v76; // rax
  const proto::AvatarRenameAuditResultOp *v77; // rax
  const proto::ResetAvatarRenameOp *v78; // rax
  const proto::AddFinishedTalkOp *v79; // rax
  const proto::DelFinishedTalkOp *v80; // rax
  const proto::SetPlayerGCGMatchScoreOp *matched; // rax
  const proto::SetPushTipsStateOp *v82; // rax
  const proto::DeletePlayerGCGCardOp *v83; // rax
  const proto::DeletePlayerGCGCardFaceOp *v84; // rax
  const proto::DeletePlayerGCGCardBackOp *v85; // rax
  const proto::DeletePlayerGCGDeckFieldOp *v86; // rax
  common::milog::MiLogStream *v87; // r14
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  unsigned int val; // [rsp+34h] [rbp-ECh] BYREF
  proto::OfflineMsgBin::DetailCase v101; // [rsp+38h] [rbp-E8h] BYREF
  uint32_t try_count; // [rsp+3Ch] [rbp-E4h]
  const proto::OfflineMsgBin *msg; // [rsp+40h] [rbp-E0h]
  const std::string *ticket; // [rsp+48h] [rbp-D8h]
  const proto::ResetChannellerSlabCampGroupOp *op_data; // [rsp+50h] [rbp-D0h]
  const data::ChannellerSlabLevelExcelConfig *config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v107; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v108; // [rsp+70h] [rbp-B0h] BYREF
  char v109[144]; // [rsp+90h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:64 64 4 6 uid:50";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::sendOfflineMsg;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  proto::SendOfflineMsgRsp::set_retcode(rsp_0, -1);
  msg = proto::SendOfflineMsgReq::msg(req);
  ticket = proto::OfflineMsgBin::ticket[abi:cxx11](msg);
  proto::SendOfflineMsgRsp::set_ticket(rsp_0, ticket);
  if ( !*(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v108,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "sendOfflineMsg",
      59);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v108, (const char (*)[10])off_1BD978A0);
    common::milog::MiLogStream::~MiLogStream(&v108);
    goto LABEL_104;
  }
  *(_DWORD *)(v4 + 48) = -1;
  v7 = proto::OfflineMsgBin::detail_case(msg);
  if ( v7 <= kBanPlayerGcgPvpOp )
  {
    if ( v7 >= kAvatarRenameAuditResultOp )
    {
      switch ( v7 )
      {
        case kAvatarRenameAuditResultOp:
          v77 = proto::OfflineMsgBin::avatar_rename_audit_result_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAvatarRenameAuditResultOp(this, *(_DWORD *)(v4 + 64), v77);
          break;
        case kResetAvatarRenameOp:
          v78 = proto::OfflineMsgBin::reset_avatar_rename_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkResetAvatarRenameOp(this, *(_DWORD *)(v4 + 64), v78);
          break;
        case kAddFinishedTalkOp:
          v79 = proto::OfflineMsgBin::add_finished_talk_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAddFinishedTalkOp(this, *(_DWORD *)(v4 + 64), v79);
          break;
        case kDelFinishedTalkOp:
          v80 = proto::OfflineMsgBin::del_finished_talk_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelFinishedTalkOp(this, *(_DWORD *)(v4 + 64), v80);
          break;
        case kSetPlayerGcgMatchScoreOp:
          matched = proto::OfflineMsgBin::set_player_gcg_match_score_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetPlayerGCGMatchScore(this, *(_DWORD *)(v4 + 64), matched);
          break;
        case kSetPushTipsStateOp:
          v82 = proto::OfflineMsgBin::set_push_tips_state_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetPushTipsState(this, *(_DWORD *)(v4 + 64), v82);
          break;
        case kDeletePlayerGcgCardOp:
          v83 = proto::OfflineMsgBin::delete_player_gcg_card_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDeletePlayerGCGCardOp(this, *(_DWORD *)(v4 + 64), v83);
          break;
        case kDeletePlayerGcgCardFaceOp:
          v84 = proto::OfflineMsgBin::delete_player_gcg_card_face_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDeletePlayerGCGCardFaceOp(this, *(_DWORD *)(v4 + 64), v84);
          break;
        case kDeletePlayerGcgCardBackOp:
          v85 = proto::OfflineMsgBin::delete_player_gcg_card_back_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDeletePlayerGCGCardBackOp(this, *(_DWORD *)(v4 + 64), v85);
          break;
        case kDeletePlayerGcgDeckFieldOp:
          v86 = proto::OfflineMsgBin::delete_player_gcg_deck_field_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDeletePlayerGCGDeckFieldOp(this, *(_DWORD *)(v4 + 64), v86);
          break;
        case kBanPlayerGcgMatchOp:
        case kBanPlayerGcgPvpOp:
LABEL_44:
          *(_DWORD *)(v4 + 48) = 0;
          break;
        default:
          goto LABEL_94;
      }
      goto LABEL_95;
    }
    if ( v7 == kSetDailyTaskVarOp )
    {
      v76 = proto::OfflineMsgBin::set_daily_task_var_op(msg);
      *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetDailyTaskVarOp(this, *(_DWORD *)(v4 + 64), v76);
      goto LABEL_95;
    }
    if ( v7 <= kSetDailyTaskVarOp )
    {
      if ( v7 == kSetGadgetChainLevelOp )
      {
        v75 = proto::OfflineMsgBin::set_gadget_chain_level_op(msg);
        *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetGadgetChainLevel(this, *(_DWORD *)(v4 + 64), v75);
        goto LABEL_95;
      }
      if ( v7 <= kSetGadgetChainLevelOp )
      {
        if ( v7 == kAddItemWithLimitOp )
        {
          v74 = proto::OfflineMsgBin::add_item_with_limit_op(msg);
          *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAddItemWithLimit(this, *(_DWORD *)(v4 + 64), v74);
          goto LABEL_95;
        }
        if ( v7 <= kAddItemWithLimitOp )
        {
          switch ( v7 )
          {
            case kSetAvatarExtraPropOp:
              v73 = proto::OfflineMsgBin::set_avatar_extra_prop_op(msg);
              *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetAvatarExtraPropOp(this, *(_DWORD *)(v4 + 64), v73);
              goto LABEL_95;
            case kExhibitionSetOp:
              v72 = proto::OfflineMsgBin::exhibition_set_op(msg);
              *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkExhibitionSetOp(this, *(_DWORD *)(v4 + 64), v72);
              goto LABEL_95;
            case kResetPlayerWayPointInPersistentDungeonOp:
              v71 = proto::OfflineMsgBin::reset_player_way_point_in_persistent_dungeon_op(msg);
              *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkPersistentDungeonAndWayPointBySceneId(
                                       this,
                                       *(_DWORD *)(v4 + 64),
                                       v71);
              goto LABEL_95;
          }
          if ( v7 <= kResetPlayerWayPointInPersistentDungeonOp )
          {
            if ( v7 == kLevelTagChangeOp )
            {
              v70 = proto::OfflineMsgBin::level_tag_change_op(msg);
              *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkLevelTagChangeOp(this, *(_DWORD *)(v4 + 64), v70);
              goto LABEL_95;
            }
            if ( v7 == kResetPlayerPosInPersistentDungeonOp )
            {
              v68 = proto::OfflineMsgBin::reset_player_pos_in_persistent_dungeon_op(msg);
              v69 = proto::ResetPlayerPosInPersistentDungeonOp::scene_id(v68);
              *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkPersistentDungeonBySceneId(this, *(_DWORD *)(v4 + 64), v69);
              goto LABEL_95;
            }
            if ( v7 > kBanUgcPublishOp )
            {
              if ( v7 == kResetPlayerPersistentDungeonOp )
              {
                v66 = proto::OfflineMsgBin::reset_player_persistent_dungeon_op(msg);
                v67 = proto::ResetPlayerPersistentDungeonOp::scene_id(v66);
                *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkPersistentDungeonBySceneId(
                                         this,
                                         *(_DWORD *)(v4 + 64),
                                         v67);
                goto LABEL_95;
              }
            }
            else if ( v7 >= kDelItemOp )
            {
              switch ( v7 )
              {
                case kDelItemOp:
                  v8 = proto::OfflineMsgBin::del_item_op(msg);
                  v9 = proto::DelItemOp::item_num(v8);
                  v10 = proto::OfflineMsgBin::del_item_op(msg);
                  v11 = proto::DelItemOp::item_id(v10);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelItemParam(this, *(_DWORD *)(v4 + 64), v11, v9);
                  break;
                case kGotoOp:
                  v13 = proto::OfflineMsgBin::goto_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkGotoOp(this, *(_DWORD *)(v4 + 64), v13);
                  break;
                case kResetParentQuestOp:
                  v14 = proto::OfflineMsgBin::reset_parent_quest_op(msg);
                  v15 = proto::ResetParentQuestOp::parent_quest_id(v14);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkParentQuestId(this, *(_DWORD *)(v4 + 64), v15);
                  break;
                case kRefreshGroupOp:
                  refreshed = proto::OfflineMsgBin::refresh_group_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkGroupSuite(this, *(_DWORD *)(v4 + 64), refreshed);
                  break;
                case kSetScenePointLockStatusOp:
                  v17 = proto::OfflineMsgBin::set_scene_point_lock_status_op(msg);
                  v18 = proto::SetScenePointLockStatusOp::point_id(v17);
                  v19 = proto::OfflineMsgBin::set_scene_point_lock_status_op(msg);
                  v20 = proto::SetScenePointLockStatusOp::scene_id(v19);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkScenePoint(this, *(_DWORD *)(v4 + 64), v20, v18);
                  break;
                case kSetNickNameOp:
                  v21 = proto::OfflineMsgBin::set_nick_name_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAndSetNickName(this, *(_DWORD *)(v4 + 64), v21);
                  break;
                case kRefreshShopOp:
                  v22 = proto::OfflineMsgBin::refresh_shop_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkRefreshShop(this, *(_DWORD *)(v4 + 64), v22);
                  break;
                case kUnlockTalentOp:
                  v23 = proto::OfflineMsgBin::unlock_talent_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkUnlockTalent(this, *(_DWORD *)(v4 + 64), v23);
                  break;
                case kTakeOffEquipOp:
                  v24 = proto::OfflineMsgBin::take_off_equip_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkTakeoffEquip(this, *(_DWORD *)(v4 + 64), v24);
                  break;
                case kDelMailOp:
                  v25 = proto::OfflineMsgBin::del_mail_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelMail(this, *(_DWORD *)(v4 + 64), v25);
                  break;
                case kFinishDailyTaskOp:
                  v27 = proto::OfflineMsgBin::finish_daily_task_op(msg);
                  v28 = proto::FinishDailyTaskOp::daily_task_id(v27);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDailyTaskId(this, *(_DWORD *)(v4 + 64), v28);
                  break;
                case kUnlockAreaOp:
                  v26 = proto::OfflineMsgBin::unlock_area_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkUnlockArea(this, *(_DWORD *)(v4 + 64), v26);
                  break;
                case kDelItemNegativeOp:
                  v12 = proto::OfflineMsgBin::del_item_negative_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelItemNegativeOp(this, *(_DWORD *)(v4 + 64), v12);
                  break;
                case kDelEquipOp:
                  *(_DWORD *)(v4 + 48) = 0;
                  break;
                case kAddItemOp:
                  v31 = proto::OfflineMsgBin::add_item_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAddItem(this, *(_DWORD *)(v4 + 64), v31);
                  break;
                case kModifyBornPosOp:
                  v32 = proto::OfflineMsgBin::modify_born_pos_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkModifyBornPos(this, *(_DWORD *)(v4 + 64), v32);
                  break;
                case kSubCoinNegativeOp:
                case kFinishOrderOp:
                case kAddMcoinOp:
                case kRecoverWorldLevelOp:
                case kSetMainCoopConfidenceOp:
                case kAddCoopPointSavePointListOp:
                case kAddRegionSearchProgressOp:
                case kSetMatchPunishTimesOp:
                case kExchangeMcoinOp:
                case kBanCustomDungeonOp:
                case kNicknameAuditResultOp:
                case kSignatureAuditResultOp:
                case kBanUgcPublishOp:
                  goto LABEL_44;
                case kSetQuestContentProgressOp:
                  v34 = proto::OfflineMsgBin::set_quest_content_progress_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetQuestContentProgress(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v34);
                  break;
                case kAddOrModifyWatcherOp:
                  v35 = proto::OfflineMsgBin::add_or_modify_watcher_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAddOrModifyWatcherOp(this, *(_DWORD *)(v4 + 64), v35);
                  break;
                case kDelWatcherOp:
                  v36 = proto::OfflineMsgBin::del_watcher_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelWatcherOp(this, *(_DWORD *)(v4 + 64), v36);
                  break;
                case kSetSignatureOp:
                  v37 = proto::OfflineMsgBin::set_signature_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAndSetSignature(this, *(_DWORD *)(v4 + 64), v37);
                  break;
                case kAddOrSubResinOp:
                  v38 = proto::OfflineMsgBin::add_or_sub_resin_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkAddOrSubResin(this, *(_DWORD *)(v4 + 64), v38);
                  break;
                case kSetQuestGlobalVarValueOp:
                  v39 = proto::OfflineMsgBin::set_quest_global_var_value_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetQuestGlobalVarValue(this, *(_DWORD *)(v4 + 64), v39);
                  break;
                case kGroupBinOp:
                  v40 = proto::OfflineMsgBin::group_bin_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkGroupBinOp(this, *(_DWORD *)(v4 + 64), v40);
                  break;
                case kDelOneOffOp:
                  v41 = proto::OfflineMsgBin::del_one_off_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDelOneOffOp(this, *(_DWORD *)(v4 + 64), v41);
                  break;
                case kFinishRoutineOp:
                  v42 = proto::OfflineMsgBin::finish_routine_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkFinishRoutineOp(this, *(_DWORD *)(v4 + 64), v42);
                  break;
                case kFinishDailyTaskGroupOp:
                  v29 = proto::OfflineMsgBin::finish_daily_task_group_op(msg);
                  v30 = proto::FinishDailyTaskUnloadGroupOp::daily_task_id(v29);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkDailyTaskId(this, *(_DWORD *)(v4 + 64), v30);
                  break;
                case kRefreshBlossomCircleCampOp:
                  v45 = proto::OfflineMsgBin::refresh_blossom_circle_camp_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkRefreshBlossomCircleCampOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v45);
                  break;
                case kBlessingGivePicOp:
                  *(_DWORD *)(v4 + 48) = 0;
                  v43 = proto::OfflineMsgBin::blessing_give_pic_op(msg);
                  *(_DWORD *)(v4 + 64) = proto::BlessingActivityGivePicOp::target_uid(v43);
                  break;
                case kExpeditionAssistOp:
                  *(_DWORD *)(v4 + 48) = 0;
                  v44 = proto::OfflineMsgBin::expedition_assist_op(msg);
                  *(_DWORD *)(v4 + 64) = proto::ExpeditionActivityAssistOp::assist_uid(v44);
                  break;
                case kForceAcceptQuestOp:
                  v46 = proto::OfflineMsgBin::force_accept_quest_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkForceAcceptQuest(this, *(_DWORD *)(v4 + 64), v46);
                  break;
                case kResetChannellerSlabCampGroupOp:
                  op_data = proto::OfflineMsgBin::reset_channeller_slab_camp_group_op(msg);
                  Config::getConfig();
                  p_activity_channeller_slab_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v107)->design_config_.txt_config_mgr.activity_channeller_slab_config_mgr;
                  v48 = proto::ResetChannellerSlabCampGroupOp::round_id(op_data);
                  v49 = proto::ResetChannellerSlabCampGroupOp::stage_id(op_data);
                  config_ptr = ActivityChannellerSlabExcelConfigMgr::findLevelConfigByStageRoundCampIndex(
                                 p_activity_channeller_slab_config_mgr,
                                 v49,
                                 v48,
                                 0);
                  std::shared_ptr<Config>::~shared_ptr(&v107);
                  if ( config_ptr )
                  {
                    *(_DWORD *)(v4 + 48) = 0;
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v108,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/offline_msg_handler.cpp",
                      "sendOfflineMsg",
                      191);
                    v50 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                            &v108,
                            (const char (*)[28])"check config fails, stage: ");
                    val = proto::ResetChannellerSlabCampGroupOp::stage_id(op_data);
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &val);
                    v52 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v51,
                            (const char (*)[8])" round:");
                    v101 = proto::ResetChannellerSlabCampGroupOp::round_id(op_data);
                    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v52,
                            (const unsigned int *)&v101);
                    v54 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v53,
                            (const char (*)[7])" uid: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v54,
                      (const unsigned int *)(v4 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v108);
                    *(_DWORD *)(v4 + 48) = -1;
                  }
                  break;
                case kProcSceneTagOp:
                  v33 = proto::OfflineMsgBin::proc_scene_tag_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkProcSceneTagOp(this, *(_DWORD *)(v4 + 64), v33);
                  break;
                case kSetClimateAreaTypeOp:
                  v55 = proto::OfflineMsgBin::set_climate_area_type_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetClimateAreaTypeOp(this, *(_DWORD *)(v4 + 64), v55);
                  break;
                case kSetFinishedParentQuestChildStateOp:
                  v57 = proto::OfflineMsgBin::set_finished_parent_quest_child_state_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetFinishedParentQuestChildStateOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v57);
                  break;
                case kSetLevel1AreaExplorePointOp:
                  v58 = proto::OfflineMsgBin::set_level1_area_explore_point_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetLevel1AreaExplorePointOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v58);
                  break;
                case kSetCodexOpenOrCloseOp:
                  v59 = proto::OfflineMsgBin::set_codex_open_or_close_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkSetCodexOpenOrCloseOp(this, *(_DWORD *)(v4 + 64), v59);
                  break;
                case kChangeMapAreaInfoOp:
                  v56 = proto::OfflineMsgBin::change_map_area_info_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkChangeMapAreaInfo(this, *(_DWORD *)(v4 + 64), v56);
                  break;
                case kGroupLinkOp:
                  v60 = proto::OfflineMsgBin::group_link_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkGroupLinkOp(this, *(_DWORD *)(v4 + 64), v60);
                  break;
                case kSetWatcherCompRecordValueOp:
                  *(_DWORD *)(v4 + 48) = 0;
                  break;
                case kAddFriendOp:
                case kDelFriendOp:
                case kAddFriendAskOp:
                case kDelFriendAskOp:
                  *(_DWORD *)(v4 + 48) = 0;
                  break;
                case kRemoveInvalidMapMarksOp:
                  v61 = proto::OfflineMsgBin::remove_invalid_map_marks_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkRemoveInvalidMapMarksOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v61);
                  break;
                case kRecalculateAreaExplorePointOp:
                  v62 = proto::OfflineMsgBin::recalculate_area_explore_point_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkRecalculateAreaExplorePointOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v62);
                  break;
                case kPassHomeSceneArrangementAuditOp:
                  v63 = proto::OfflineMsgBin::pass_home_scene_arrangement_audit_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkPassHomeSceneArrangementAuditOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v63);
                  break;
                case kFailHomeSceneArrangementAuditOp:
                  v64 = proto::OfflineMsgBin::fail_home_scene_arrangement_audit_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkFailHomeSceneArrangementAuditOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v64);
                  break;
                case kFailHomeModulesArrangementAuditOp:
                  v65 = proto::OfflineMsgBin::fail_home_modules_arrangement_audit_op(msg);
                  *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkFailHomeModulesArrangementAuditOp(
                                           this,
                                           *(_DWORD *)(v4 + 64),
                                           v65);
                  break;
                default:
                  goto LABEL_94;
              }
              goto LABEL_95;
            }
          }
        }
      }
    }
  }
LABEL_94:
  common::milog::MiLogStream::create(
    &v108,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "sendOfflineMsg",
    300);
  v87 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v108, (const char (*)[26])off_1BD979A0);
  v101 = proto::OfflineMsgBin::detail_case(msg);
  v88 = common::milog::MiLogStream::operator<<<proto::OfflineMsgBin::DetailCase,(proto::OfflineMsgBin::DetailCase*)0>(
          v87,
          &v101);
  v89 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v88, (const char (*)[7])" uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, (const unsigned int *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v108);
LABEL_95:
  if ( *(_DWORD *)(v4 + 48) )
  {
    proto::SendOfflineMsgRsp::set_retcode(rsp_0, *(_DWORD *)(v4 + 48));
  }
  else
  {
    for ( try_count = 0; try_count <= 2; ++try_count )
    {
      *(_DWORD *)(v4 + 48) = OfflineMsgHandler::getAndSetRedisData(this, *(_DWORD *)(v4 + 64), msg);
      if ( *(_DWORD *)(v4 + 48) != 5001 )
        break;
    }
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v108,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "sendOfflineMsg",
        320);
      v90 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v108,
              (const char (*)[31])"sendOfflineMsg fails, ticket: ");
      v91 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v90, ticket);
      v92 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v91, (const char (*)[7])" ret: ");
      v93 = common::milog::MiLogStream::operator<<<int,(int *)0>(v92, (const int *)(v4 + 48));
      v94 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v93, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v108);
      proto::SendOfflineMsgRsp::set_retcode(rsp_0, *(_DWORD *)(v4 + 48));
    }
    else
    {
      OfflineMsgHandler::notifyNewOfflineMsg(this, *(_DWORD *)(v4 + 64));
      common::milog::MiLogStream::create(
        &v108,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/offline_msg_handler.cpp",
        "sendOfflineMsg",
        327);
      v95 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v108,
              (const char (*)[30])"sendOfflineMsg succ, ticket: ");
      v96 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v95, ticket);
      v97 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v96, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v108);
      proto::SendOfflineMsgRsp::set_retcode(rsp_0, 0);
    }
  }
LABEL_104:
  if ( v109 == (char *)v4 )
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
};

// Line 333: range 000000000E30B2B4-000000000E30B588
__int64 __fastcall OfflineMsgHandler::checkDelItemParam(
        OfflineMsgHandler *const this,
        uint32_t uid,
        uint32_t item_id,
        uint32_t item_num)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:332";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::checkDelItemParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  Config::getConfig();
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(&v7->design_config_.txt_config_mgr.item_config_mgr, item_id);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( item_config_ptr )
  {
    if ( item_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&item_config_ptr->item_type);
      }
      if ( item_config_ptr->item_type == ITEM_RELIQUARY
        || item_config_ptr->item_type == ITEM_WEAPON
        || item_config_ptr->item_type == ITEM_VIRTUAL )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkDelItemParam",
          349);
        v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v15,
                (const char (*)[47])"delItem not support weapon or reliquary, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 638LL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDelItemParam",
        341);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v15,
             (const char (*)[21])"item_num is 0! uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    result = 601LL;
  }
  if ( v16 == (char *)v4 )
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

// Line 356: range 000000000E30B58A-000000000E30B6E3
int32_t __cdecl OfflineMsgHandler::checkDelItemNegativeOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DelItemNegativeOp *op)
{
  uint32_t v3; // ebx
  uint32_t v4; // edx
  google::protobuf::uint32 v6; // ebx
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  v3 = proto::DelItemNegativeOp::item_num(op);
  v4 = proto::DelItemNegativeOp::item_id(op);
  if ( (unsigned int)OfflineMsgHandler::checkDelItemParam(this, uid, v4, v3) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDelItemNegativeOp",
      359);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v8, (const char (*)[24])"checkDelItemParam fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    v6 = proto::DelItemNegativeOp::item_num(op);
    if ( v6 == proto::DelItemNegativeOp::remain_num(op) )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDelItemNegativeOp",
        364);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v8,
        (const char (*)[33])"op.item_num() != op.remain_num()");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
  }
};

// Line 371: range 000000000E30B6E4-000000000E30BAB7
__int64 __fastcall OfflineMsgHandler::checkGotoOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::PlayerGotoOp *goto_op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  __m128i v12; // xmm0
  const proto::VectorBin *v13; // rax
  const proto::VectorBin *v14; // rax
  const proto::VectorBin *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  const SceneScriptConfig *script_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:370 64 12 7 pos:380";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkGotoOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  *(_DWORD *)(v3 + 48) = uid;
  Config::getConfig();
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config_.lua_config_mgr;
  v7 = proto::PlayerGotoOp::scene_id(goto_op);
  script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( script_config_ptr )
  {
    v12 = 0LL;
    Vector3::Vector3((Vector3 *const)(v3 + 64), 0.0, 0.0, 0.0);
    v13 = proto::PlayerGotoOp::pos(goto_op);
    *(float *)v12.m128i_i32 = proto::VectorBin::x(v13);
    *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v12);
    v14 = proto::PlayerGotoOp::pos(goto_op);
    *(float *)v12.m128i_i32 = proto::VectorBin::y(v14);
    *(_DWORD *)(v3 + 68) = _mm_cvtsi128_si32(v12);
    v15 = proto::PlayerGotoOp::pos(goto_op);
    *(float *)v12.m128i_i32 = proto::VectorBin::z(v15);
    *(_DWORD *)(v3 + 72) = _mm_cvtsi128_si32(v12);
    if ( !SceneScriptConfig::isPosValid(script_config_ptr, (const Vector3 *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGotoOp",
        386);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"pos: ");
      Vector3::toString[abi:cxx11]((std::string *)&v24, (const Vector3 *const)(v3 + 64));
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v24);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])" invalud, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      std::string::~string(&v24);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkGotoOp",
      375);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v24,
           (const char (*)[39])"findSceneScriptConfig fails, scene_id:");
    val = proto::PlayerGotoOp::scene_id(goto_op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0xFFFFFFFFLL;
  }
  if ( v25 == (char *)v3 )
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

// Line 394: range 000000000E30BAB8-000000000E30BCF3
__int64 __fastcall OfflineMsgHandler::checkQuestId(OfflineMsgHandler *const this, uint32_t uid, uint32_t quest_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v14; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:393 64 4 12 quest_id:393";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkQuestId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = quest_id;
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  v7 = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
         &v6->design_config_.txt_config_mgr.quest_config_mgr,
         *(_DWORD *)(v3 + 64)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkQuestId",
      397);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v15, (const char (*)[6])"uid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 401LL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 404: range 000000000E30BCF4-000000000E30BF2F
__int64 __fastcall OfflineMsgHandler::checkParentQuestId(
        OfflineMsgHandler *const this,
        uint32_t uid,
        uint32_t parent_quest_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v14; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:403 64 4 19 parent_quest_id:403";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkParentQuestId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = parent_quest_id;
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  v7 = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
         &v6->design_config_.txt_config_mgr.quest_config_mgr,
         *(_DWORD *)(v3 + 64)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkParentQuestId",
      407);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v15, (const char (*)[6])"uid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" parent_quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 401LL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 415: range 000000000E30BF30-000000000E30C259
__int64 __fastcall OfflineMsgHandler::checkGroupSuite(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::RefreshGroupOp *op)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const GroupScriptConfig *group_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 group_id:416 48 4 12 suite_id:417 64 4 7 uid:414";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkGroupSuite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 32) = proto::RefreshGroupOp::group_id(op);
  *(_DWORD *)(v3 + 48) = proto::RefreshGroupOp::suite_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v6->design_config_.lua_config_mgr, *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( group_config_ptr )
  {
    if ( *(_DWORD *)(v3 + 48) && !GroupScriptConfig::getSuiteConfig(group_config_ptr, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGroupSuite",
        426);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v18,
              (const char (*)[26])"getSuiteConfig suite_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 513LL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkGroupSuite",
      421);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v18,
           (const char (*)[33])"findGroupScriptConfig group_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 513LL;
  }
  if ( v19 == (char *)v3 )
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

// Line 434: range 000000000E30C25A-000000000E30C4FC
__int64 __fastcall OfflineMsgHandler::checkScenePoint(
        OfflineMsgHandler *const this,
        uint32_t uid,
        uint32_t scene_id,
        uint32_t point_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  __int64 result; // rax
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 7 uid:433 64 4 12 scene_id:433 80 4 12 point_id:433 96 16 13 point_ptr:435";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::checkScenePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  *(_DWORD *)(v4 + 64) = scene_id;
  *(_DWORD *)(v4 + 80) = point_id;
  Config::getConfig();
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v4 + 96), v7 + 90088, *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( std::operator==<data::ConfigScenePoint>(0LL, (const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkScenePoint",
      438);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v18,
           (const char (*)[38])"findScenePointConfig fails, scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", point_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])",uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = -1;
  }
  else
  {
    v13 = 0;
  }
  std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 96));
  result = v13;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 446: range 000000000E30C4FE-000000000E30CB61
__int64 __fastcall OfflineMsgHandler::checkAndSetNickName(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetPlayerNickNameOp *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  uint32_t nickname_max_length; // [rsp+2Ch] [rbp-164h]
  int32_t ret; // [rsp+30h] [rbp-160h]
  uint32_t nickname_max_digits_num; // [rsp+34h] [rbp-15Ch]
  proto::PlayerBasicBriefData *basic_brief; // [rsp+38h] [rbp-158h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-150h] BYREF
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-140h] BYREF
  std::string s; // [rsp+60h] [rbp-130h] BYREF
  char v24[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 12 is_exist:465 48 4 7 uid:445 64 32 12 nickname:447 128 56 21 player_brief_data:466";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkAndSetNickName;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(&s, off_1BD98400, (const std::allocator<char> *)(v3 + 32));
  v6 = proto::SetPlayerNickNameOp::nick_name[abi:cxx11](op);
  common::tools::StringUtils::trim((std::string *)(v3 + 64), v6, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(v3 + 32);
  if ( (unsigned __int8)std::string::empty(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&s,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkAndSetNickName",
      450);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           (common::milog::MiLogStream *const)&s,
           (const char (*)[25])"nickname is empty, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
    v8 = -1;
  }
  else
  {
    Config::getConfig();
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    nickname_max_length = ConstValueExcelConfigMgr::getNicknameMaxLength(&v9->design_config_.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v3 + 64), nickname_max_length);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&s,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAndSetNickName",
        457);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&s,
              (const char (*)[29])"checkStrUtf8Len fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
      v8 = ret;
    }
    else
    {
      Config::getConfig();
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      nickname_max_digits_num = ConstValueExcelConfigMgr::getNicknameMaxDigitsNum(&v11->design_config_.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( Hk4eUtils::checkStrUtf8DigitsNum((const std::string *)(v3 + 64), nickname_max_digits_num) )
      {
        v8 = 133;
      }
      else
      {
        proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 128));
        if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                             *(_DWORD *)(v3 + 48),
                             (proto::PlayerBriefDataRedisData *)(v3 + 128),
                             v3 + 32) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&s,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkAndSetNickName",
            469);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)&s,
            (const char (*)[35])"[Social] getPlayerBriefData failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
          v8 = -1;
        }
        else if ( *(_BYTE *)(v3 + 32) != 1 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&s,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkAndSetNickName",
            475);
          v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  (common::milog::MiLogStream *const)&s,
                  (const char (*)[29])"[Social] uid not exist, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
          v8 = 2001;
        }
        else
        {
          basic_brief = proto::PlayerBriefDataRedisData::mutable_basic_brief((proto::PlayerBriefDataRedisData *const)(v3 + 128));
          v13 = proto::SetPlayerNickNameOp::nick_name[abi:cxx11](op);
          proto::PlayerBasicBriefData::set_nickname(basic_brief, v13);
          if ( (unsigned int)RedisOpSocialData::setPlayerBriefData(
                               *(_DWORD *)(v3 + 48),
                               (const proto::PlayerBriefDataRedisData *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&s,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "checkAndSetNickName",
              483);
            v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    (common::milog::MiLogStream *const)&s,
                    (const char (*)[41])"[Social] setPlayerBriefData failed, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
            v8 = -1;
          }
          else
          {
            v8 = 0;
          }
        }
        proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 128));
      }
    }
  }
  std::string::~string((void *)(v3 + 64));
  result = v8;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 491: range 000000000E30CB62-000000000E30CB77
int32_t __cdecl OfflineMsgHandler::checkRefreshShop(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::RefreshShopOp *op)
{
  return 0;
};

// Line 496: range 000000000E30CB78-000000000E30CDD4
int32_t __cdecl OfflineMsgHandler::checkUnlockTalent(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::UnlockTalentOp *op)
{
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rbx
  uint32_t v8; // r12d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  unsigned int v14; // [rsp+28h] [rbp-48h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config_.txt_config_mgr.avatar_talent_config_mgr;
  v4 = proto::UnlockTalentOp::talent_id(op);
  LOBYTE(p_avatar_talent_config_mgr) = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
                                         p_avatar_talent_config_mgr,
                                         v4) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( (_BYTE)p_avatar_talent_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkUnlockTalent",
      499);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v17,
           (const char (*)[44])"find talent excel config failed talent_id: ");
    val = proto::UnlockTalentOp::talent_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    Config::getConfig();
    p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config_.txt_config_mgr.avatar_skill_config_mgr;
    v8 = proto::UnlockTalentOp::talent_id(op);
    v9 = proto::UnlockTalentOp::skill_depot_id(op);
    LOBYTE(p_avatar_skill_config_mgr) = !AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot(
                                           p_avatar_skill_config_mgr,
                                           v9,
                                           v8);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( (_BYTE)p_avatar_skill_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkUnlockTalent",
        504);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v17,
              (const char (*)[22])"can't find talent_id:");
      v14 = proto::UnlockTalentOp::talent_id(op);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v14);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])off_1BD986E0);
      val = proto::UnlockTalentOp::skill_depot_id(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 511: range 000000000E30CDD6-000000000E30CEC0
int32_t __cdecl OfflineMsgHandler::checkTakeoffEquip(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::TakeOffEquipOp *op)
{
  uint32_t v3; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::TakeOffEquipOp::equip_type(op) )
  {
    v3 = proto::TakeOffEquipOp::equip_type(op);
    if ( data::isValidEquipType(v3) )
      return 0;
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkTakeoffEquip",
    514);
  v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"wrong equip_type: ");
  val = proto::TakeOffEquipOp::equip_type(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 522: range 000000000E30CEC2-000000000E30CED7
int32_t __cdecl OfflineMsgHandler::checkDelMail(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DelMailOp *op)
{
  return 0;
};

// Line 527: range 000000000E30CED8-000000000E30D0F7
__int64 __fastcall OfflineMsgHandler::checkUnlockArea(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::UnlockAreaOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:526";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkUnlockArea;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config_.txt_config_mgr.world_area_config_mgr;
  v7 = proto::UnlockAreaOp::area_id(op);
  LOBYTE(p_world_area_config_mgr) = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(p_world_area_config_mgr, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( (_BYTE)p_world_area_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkUnlockArea",
      530);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"find scene area failed uid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" area_id: ");
    val = proto::UnlockAreaOp::area_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 537: range 000000000E30D0F8-000000000E30D324
__int64 __fastcall OfflineMsgHandler::checkDailyTaskId(
        OfflineMsgHandler *const this,
        uint32_t uid,
        uint32_t daily_task_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:536 64 4 17 daily_task_id:536";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDailyTaskId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = daily_task_id;
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v7 = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
         &v6->design_config_.txt_config_mgr.daily_task_config_mgr,
         *(_DWORD *)(v3 + 64)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDailyTaskId",
      540);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v14,
           (const char (*)[48])"findDailyTaskExcelConfig fails, daily_task_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 547: range 000000000E30D326-000000000E30E349
__int64 __fastcall OfflineMsgHandler::checkAddItem(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AddItemOp *op)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // r15
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  data::ItemType item_type; // eax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const proto::ReliquaryBin *v18; // rax
  google::protobuf::uint32 v19; // eax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r14
  const proto::ReliquaryBin *v21; // rax
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  const proto::ReliquaryBin *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  bool v26; // r14
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  const proto::WeaponBin *v33; // rax
  google::protobuf::uint32 v34; // eax
  const proto::WeaponBin *v35; // rax
  google::protobuf::uint32 v36; // eax
  const proto::WeaponBin *v37; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v38; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  bool v40; // r15
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  int v44; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  __int64 result; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1B0h]
  data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-1A8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-1A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+38h] [rbp-198h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-190h]
  unsigned int affix_id; // [rsp+48h] [rbp-188h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-184h] BYREF
  std::shared_ptr<Config> v69; // [rsp+50h] [rbp-180h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+60h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v72; // [rsp+A0h] [rbp-130h] BYREF
  common::milog::MiLogStream v73; // [rsp+C0h] [rbp-110h] BYREF
  common::milog::MiLogStream v74; // [rsp+E0h] [rbp-F0h] BYREF
  char v75[208]; // [rsp+100h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 ret:622 64 4 7 uid:546 80 40 18 item_param_bin:571";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::checkAddItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  Config::getConfig();
  p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69)->design_config_.txt_config_mgr.item_config_mgr;
  v8 = proto::AddItemOp::item_id(op);
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, v8);
  std::shared_ptr<Config>::~shared_ptr(&v69);
  if ( !item_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkAddItem",
      551);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v74,
           (const char (*)[34])"find item config failed item_id: ");
    *(_DWORD *)(v4 + 48) = proto::AddItemOp::item_id(op);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v74);
    v3 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&item_config_ptr->item_type);
  }
  item_type = item_config_ptr->item_type;
  if ( item_type == ITEM_RELIQUARY )
  {
    if ( !proto::AddItemOp::has_reliquary(op) )
    {
      v3 = -1;
      goto LABEL_50;
    }
  }
  else if ( item_type == ITEM_WEAPON && !proto::AddItemOp::has_weapon(op) )
  {
    v3 = -1;
    goto LABEL_50;
  }
  proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v4 + 80));
  v13 = proto::AddItemOp::item_id(op);
  proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v4 + 80), v13);
  v14 = proto::AddItemOp::item_count(op);
  proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v4 + 80), v14);
  if ( !proto::AddItemOp::has_reliquary(op) )
  {
    if ( proto::AddItemOp::has_weapon(op) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&item_config_ptr->item_type);
      }
      if ( item_config_ptr->item_type != ITEM_WEAPON )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkAddItem",
          602);
        v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v73, (const char (*)[5])"uid:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v4 + 64));
        v32 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v31, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&v74);
        std::string::~string(&v74);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v3 = -1;
        goto LABEL_49;
      }
      v33 = proto::AddItemOp::weapon(op);
      v34 = proto::WeaponBin::level(v33);
      proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v4 + 80), v34);
      v35 = proto::AddItemOp::weapon(op);
      v36 = proto::WeaponBin::promote_level(v35);
      proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v4 + 80), v36);
      v37 = proto::AddItemOp::weapon(op);
      __for_range_0 = proto::WeaponBin::affix_map(v37);
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
      while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v38 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
        google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
          (google::protobuf::MapPair<unsigned int,unsigned int> *const)&affix_id,
          v38);
        Config::getConfig();
        v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69);
        v40 = !EquipAffixExcelConfigMgr::isEquipAffixValid(
                 &v39->design_config_.txt_config_mgr.equip_affix_config_mgr,
                 affix_id);
        std::shared_ptr<Config>::~shared_ptr(&v69);
        if ( v40 )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkAddItem",
            611);
          v41 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v73,
                  (const char (*)[36])"isEquipAffixValid failed, affix_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &affix_id);
          v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])" op:");
          google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)&v74);
          std::string::~string(&v74);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v3 = -1;
          v44 = 0;
        }
        else
        {
          Config::getConfig();
          v45 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69);
          *(_DWORD *)(v4 + 48) = EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(
                                   &v45->design_config_.txt_config_mgr.equip_affix_config_mgr,
                                   affix_id);
          std::shared_ptr<Config>::~shared_ptr(&v69);
          if ( *(int *)(v4 + 48) >= 0 && v68 <= *(_DWORD *)(v4 + 48) )
          {
            v44 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v73,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "checkAddItem",
              617);
            v46 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v73,
                    (const char (*)[41])"findEquipAffixMaxLevel failed, affix_id:");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &affix_id);
            v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v47,
                    (const char (*)[14])" affix_level:");
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &v68);
            v50 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v49,
                    (const char (*)[18])" affix_max_level:");
            v51 = common::milog::MiLogStream::operator<<<int,(int *)0>(v50, (const int *)(v4 + 48));
            v52 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v51, (const char (*)[5])" op:");
            google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, (const std::string *)&v74);
            std::string::~string(&v74);
            common::milog::MiLogStream::~MiLogStream(&v73);
            v3 = -1;
            v44 = 0;
          }
        }
        google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)&affix_id);
        if ( v44 != 1 )
          goto LABEL_49;
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
      }
    }
    Config::getConfig();
    v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69);
    *(_DWORD *)(v4 + 48) = TxtConfigMgr::checkItemParamBin(
                             &v53->design_config_.txt_config_mgr,
                             (const proto::ItemParamBin *)(v4 + 80),
                             ITEM_LIMIT_OPERATION_DAILY_ACTIVITY);
    std::shared_ptr<Config>::~shared_ptr(&v69);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAddItem",
        625);
      v54 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v72,
              (const char (*)[29])"checkItemParamBin fail, ret:");
      v55 = common::milog::MiLogStream::operator<<<int,(int *)0>(v54, (const int *)(v4 + 48));
      v56 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v55, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v73, &op->google::protobuf::Message);
      v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, (const std::string *)&v73);
      v58 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v57, (const char (*)[17])" item_param_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v74,
        (google::protobuf::Message *)(v4 + 80));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, (const std::string *)&v74);
      std::string::~string(&v74);
      std::string::~string(&v73);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v3 = *(_DWORD *)(v4 + 48);
      goto LABEL_49;
    }
    goto LABEL_46;
  }
  if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&item_config_ptr->item_type);
  }
  if ( item_config_ptr->item_type == ITEM_RELIQUARY )
  {
    v18 = proto::AddItemOp::reliquary(op);
    v19 = proto::ReliquaryBin::level(v18);
    proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v4 + 80), v19);
    Config::getConfig();
    p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69)->design_config_.txt_config_mgr.reliquary_config_mgr;
    v21 = proto::AddItemOp::reliquary(op);
    v22 = proto::ReliquaryBin::main_prop_id(v21);
    LOBYTE(p_reliquary_config_mgr) = data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(
                                       p_reliquary_config_mgr,
                                       v22) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v69);
    if ( (_BYTE)p_reliquary_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAddItem",
        584);
      v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v73,
              (const char (*)[43])"findReliquaryMainPropExcelConfig fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v74);
      std::string::~string(&v74);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v3 = -1;
      goto LABEL_49;
    }
    v24 = proto::AddItemOp::reliquary(op);
    __for_range = proto::ReliquaryBin::append_prop_id_list(v24);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v4 + 48) = *__for_begin;
      Config::getConfig();
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69);
      v26 = data::ReliquaryExcelConfigMgrBase::findReliquaryAffixExcelConfig(
              &v25->design_config_.txt_config_mgr.reliquary_config_mgr,
              *(_DWORD *)(v4 + 48)) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v69);
      if ( v26 )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkAddItem",
          591);
        v27 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v73,
                (const char (*)[40])"findReliquaryAffixExcelConfig fail, op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
        v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&v74);
        v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v28,
                (const char (*)[17])" append_prop_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 48));
        std::string::~string(&v74);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v3 = -1;
        goto LABEL_49;
      }
      ++__for_begin;
    }
LABEL_46:
    if ( proto::AddItemOp::item_id(op) == 203 )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAddItem",
        631);
      v59 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v74,
              (const char (*)[48])"AddItem instruct Not Support mcoin! target uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v74);
      v3 = -1;
    }
    else
    {
      v3 = 0;
    }
    goto LABEL_49;
  }
  common::milog::MiLogStream::create(
    &v73,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkAddItem",
    578);
  v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v73, (const char (*)[5])"uid:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])" op:");
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &op->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v74);
  std::string::~string(&v74);
  common::milog::MiLogStream::~MiLogStream(&v73);
  v3 = -1;
LABEL_49:
  proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v4 + 80));
LABEL_50:
  result = v3;
  if ( v75 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 638: range 000000000E30E34A-000000000E30E8FD
__int64 __fastcall OfflineMsgHandler::checkModifyBornPos(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ModifyBornPosOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  const proto::VectorBin *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // r13
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // r13
  common::milog::MiLogStream *v19; // r13
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  const SceneScriptConfig *script_config_ptr; // [rsp+30h] [rbp-F0h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:637 64 12 7 pos:646";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkModifyBornPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  *(_DWORD *)(v3 + 48) = uid;
  Config::getConfig();
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config_.lua_config_mgr;
  v7 = proto::ModifyBornPosOp::scene_id(op);
  script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( script_config_ptr )
  {
    v12 = proto::ModifyBornPosOp::pos(op);
    Vector3::Vector3((Vector3 *const)(v3 + 64), v12);
    if ( !SceneScriptConfig::isPosValid(script_config_ptr, (const Vector3 *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkModifyBornPos",
        649);
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v25, (const char (*)[20])off_1BD98F00);
      Vector3::toString[abi:cxx11]((std::string *)&v26, (const Vector3 *const)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v26);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      std::string::~string(&v26);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      Config::getConfig();
      p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config_.txt_config_mgr.scene_config_mgr;
      v17 = proto::ModifyBornPosOp::scene_id(op);
      scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, v17);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( scene_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( scene_config_ptr->type == SCENE_WORLD || scene_config_ptr->type == SCENE_ROOM )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkModifyBornPos",
            661);
          v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v26,
                  (const char (*)[45])"just support world and room scene, scene_id:");
          val = proto::ModifyBornPosOp::scene_id(op);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkModifyBornPos",
          656);
        v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v26,
                (const char (*)[38])"findSceneExcelConfig fails, scene_id:");
        val = proto::ModifyBornPosOp::scene_id(op);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkModifyBornPos",
      643);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v26,
           (const char (*)[40])"findSceneScriptConfig fails, scene_id: ");
    val = proto::ModifyBornPosOp::scene_id(op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  if ( v27 == (char *)v3 )
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

// Line 668: range 000000000E30E8FE-000000000E30EB22
__int64 __fastcall OfflineMsgHandler::checkSetQuestContentProgress(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetQuestContentProgressOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:667";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetQuestContentProgress;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config_.txt_config_mgr.quest_config_mgr;
  v7 = proto::SetQuestContentProgressOp::quest_id(op);
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( quest_config_ptr )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetQuestContentProgress",
      672);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v16,
           (const char (*)[34])"findQuestConfig fails, quest_id: ");
    val = proto::SetQuestContentProgressOp::quest_id(op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
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

// Line 679: range 000000000E30EB24-000000000E30EEEC
__int64 __fastcall OfflineMsgHandler::checkAddOrModifyWatcherOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AddOrModifyWatcherOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  google::protobuf::uint32 v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const WatcherConfig *watcher_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  std::string val; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:678";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkAddOrModifyWatcherOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config_.txt_config_mgr.watcher_config_mgr;
  v7 = proto::AddOrModifyWatcherOp::watcher_id(op);
  watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( watcher_config_ptr )
  {
    v12 = proto::AddOrModifyWatcherOp::progress(op);
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&watcher_config_ptr->progress);
    }
    if ( v12 <= watcher_config_ptr->progress )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAddOrModifyWatcherOp",
        688);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v21, (const char (*)[14])"max_progress:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &watcher_config_ptr->progress);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkAddOrModifyWatcherOp",
      683);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v21,
           (const char (*)[28])"findWatcherConfig fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 5LL;
  }
  if ( v23 == (char *)v3 )
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

// Line 695: range 000000000E30EEEE-000000000E30F139
__int64 __fastcall OfflineMsgHandler::checkDelWatcherOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DelWatcherOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  const WatcherConfig *watcher_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  std::string val; // [rsp+60h] [rbp-90h] BYREF
  char v17[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:694";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDelWatcherOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config_.txt_config_mgr.watcher_config_mgr;
  v7 = proto::DelWatcherOp::watcher_id(op);
  watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( watcher_config_ptr )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDelWatcherOp",
      699);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"findWatcherConfig fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 5LL;
  }
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

// Line 706: range 000000000E30F13A-000000000E30F7B6
__int64 __fastcall OfflineMsgHandler::checkAndSetSignature(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetSignatureOp *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  uint32_t signature_max_length; // [rsp+20h] [rbp-150h]
  int32_t ret; // [rsp+24h] [rbp-14Ch]
  proto::PlayerSocialBriefData *social_brief; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-140h] BYREF
  std::string s; // [rsp+40h] [rbp-130h] BYREF
  char v25[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 12 is_exist:721 48 4 7 uid:705 64 32 13 signature:707 128 56 21 player_brief_data:722";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkAndSetSignature;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(&s, off_1BD98400, (const std::allocator<char> *)(v3 + 32));
  v6 = proto::SetSignatureOp::signature[abi:cxx11](op);
  common::tools::StringUtils::trim((std::string *)(v3 + 64), v6, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(v3 + 32);
  Config::getConfig();
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  signature_max_length = ConstValueExcelConfigMgr::getSignatureLength(&v7->design_config_.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v3 + 64), signature_max_length);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&s,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkAndSetSignature",
      712);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)&s,
           (const char (*)[29])"checkStrUtf8Len fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
    v9 = ret;
  }
  else
  {
    ServiceBox::findService<OfflineMsgService>();
    OfflineMsgService::getConfig((OfflineMsgService *const)&v23);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    v11 = !common::tools::WordFilter::isValid(&v10->word_filter, (const std::string *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&s,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkAndSetSignature",
        717);
      v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&s,
              (const char (*)[34])"signature is invalid, signature: ");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
      v9 = 7011;
    }
    else
    {
      proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 128));
      if ( (unsigned int)RedisOpSocialData::getPlayerBriefData(
                           *(_DWORD *)(v3 + 48),
                           (proto::PlayerBriefDataRedisData *)(v3 + 128),
                           v3 + 32) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&s,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkAndSetSignature",
          725);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&s,
          (const char (*)[35])"[Social] getPlayerBriefData failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        v9 = -1;
      }
      else if ( *(_BYTE *)(v3 + 32) != 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&s,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkAndSetSignature",
          731);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)&s,
                (const char (*)[29])"[Social] uid not exist, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        v9 = 2001;
      }
      else
      {
        social_brief = proto::PlayerBriefDataRedisData::mutable_social_brief((proto::PlayerBriefDataRedisData *const)(v3 + 128));
        v16 = proto::SetSignatureOp::signature[abi:cxx11](op);
        proto::PlayerSocialBriefData::set_signature(social_brief, v16);
        if ( (unsigned int)RedisOpSocialData::setPlayerBriefData(
                             *(_DWORD *)(v3 + 48),
                             (const proto::PlayerBriefDataRedisData *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&s,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkAndSetSignature",
            739);
          v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  (common::milog::MiLogStream *const)&s,
                  (const char (*)[41])"[Social] setPlayerBriefData failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
          v9 = -1;
        }
        else
        {
          v9 = 0;
        }
      }
      proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v3 + 128));
    }
  }
  std::string::~string((void *)(v3 + 64));
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 746: range 000000000E30F7B8-000000000E30F7CD
int32_t __cdecl OfflineMsgHandler::checkAddOrSubResin(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AddOrSubResinOp *op)
{
  return 0;
};

// Line 751: range 000000000E30F7CE-000000000E30F9ED
__int64 __fastcall OfflineMsgHandler::checkSetQuestGlobalVarValue(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetQuestGlobalVarValueOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:750";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetQuestGlobalVarValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config_.txt_config_mgr.quest_config_mgr;
  v7 = proto::SetQuestGlobalVarValueOp::id(op);
  LOBYTE(p_quest_config_mgr) = data::QuestExcelConfigMgrBase::findQuestGlobalVarConfig(p_quest_config_mgr, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( (_BYTE)p_quest_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetQuestGlobalVarValue",
      754);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])" global var id:");
    val = proto::SetQuestGlobalVarValueOp::id(op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])off_1BD993E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 761: range 000000000E30F9EE-000000000E3105F2
__int64 __fastcall OfflineMsgHandler::checkGroupBinOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::GroupBinOp *op)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  signed int v17; // eax
  const char *v18; // rax
  _BYTE *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // r14
  const std::string *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // r14
  const std::string *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  uint32_t v37; // eax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t scene_id; // [rsp+2Ch] [rbp-D4h]
  const GroupScriptConfig *group_config_ptr; // [rsp+30h] [rbp-D0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v56; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v57; // [rsp+50h] [rbp-B0h] BYREF
  char v58[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 group_id:763 64 4 7 uid:760";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkGroupBinOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  scene_id = proto::GroupBinOp::scene_id(op);
  *(_DWORD *)(v3 + 48) = proto::GroupBinOp::group_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
  v7 = scene_id != LuaConfigMgr::getSceneIdByGroupId(&v6->design_config_.lua_config_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v56);
  if ( v7 )
  {
    result = 531LL;
  }
  else
  {
    Config::getConfig();
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v9->design_config_.lua_config_mgr, *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v56);
    if ( group_config_ptr )
    {
      switch ( proto::GroupBinOp::op_type(op) )
      {
        case GROUP_OP_GADGET_MAP_DEL:
        case GROUP_OP_DEL_GADGET_LIST:
        case GROUP_OP_SET_GADGET_STATE:
          v13 = proto::GroupBinOp::config_id(op);
          if ( GroupScriptConfig::findGadgetConfig(group_config_ptr, v13) )
          {
            if ( proto::GroupBinOp::op_type(op) != GROUP_OP_SET_GADGET_STATE )
              goto LABEL_31;
            v17 = proto::GroupBinOp::state(op);
            v18 = data::enumValToStr((data::GadgetState)v17);
            v19 = v18;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v18);
            }
            if ( *v19 )
              goto LABEL_31;
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "checkGroupBinOp",
              789);
            v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v57,
                    (const char (*)[23])"invalid gadget state: ");
            val = proto::GroupBinOp::state(op);
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v57);
            result = 513LL;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "checkGroupBinOp",
              782);
            v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v57,
                    (const char (*)[29])"findGadgetConfig config_id: ");
            val = proto::GroupBinOp::config_id(op);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])" fails, uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v57);
            result = 513LL;
          }
          break;
        case GROUP_OP_MONSTER_MAP_DEL:
        case GROUP_OP_DEL_MONSTER_LIST:
          v23 = proto::GroupBinOp::config_id(op);
          if ( GroupScriptConfig::findMonsterConfig(group_config_ptr, v23) )
            goto LABEL_31;
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkGroupBinOp",
            800);
          v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v57,
                  (const char (*)[30])"findMonsterConfig config_id: ");
          val = proto::GroupBinOp::config_id(op);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])" fails, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          result = 513LL;
          break;
        case GORUP_OP_DEL_TRIGGER:
        case GROUP_OP_SET_TRIGGER_COUNT:
          v27 = proto::GroupBinOp::trigger_name[abi:cxx11](op);
          if ( GroupScriptConfig::findTriggerConfig(group_config_ptr, v27) )
            goto LABEL_31;
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkGroupBinOp",
            810);
          v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v57,
                  (const char (*)[33])"findTriggerConfig trigger_name: ");
          v29 = proto::GroupBinOp::trigger_name[abi:cxx11](op);
          v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, v29);
          v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v30,
                  (const char (*)[14])" fails, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          result = 513LL;
          break;
        case GROUP_OP_SET_VARIABLE_VAL:
          v32 = proto::GroupBinOp::variable_name[abi:cxx11](op);
          if ( std::unordered_map<std::string,VariableScriptConfig>::count(&group_config_ptr->variable_map, v32) )
            goto LABEL_31;
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkGroupBinOp",
            819);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v57,
                  (const char (*)[16])"varaible_name: ");
          v34 = proto::GroupBinOp::variable_name[abi:cxx11](op);
          v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, v34);
          v36 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v35,
                  (const char (*)[18])" not found, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          result = 513LL;
          break;
        case GROUP_OP_SET_TARGET_SUITE:
          v37 = proto::GroupBinOp::target_suite(op);
          if ( GroupScriptConfig::getSuiteConfig(group_config_ptr, v37) )
            goto LABEL_31;
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkGroupBinOp",
            828);
          v38 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v57,
                  (const char (*)[30])"getSuiteConfig target_suite: ");
          val = proto::GroupBinOp::target_suite(op);
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v39,
                  (const char (*)[14])" fails, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          result = 513LL;
          break;
        case GROUP_OP_SET_DEAD:
          goto LABEL_31;
        case GROUP_OP_SET_UNREGISTER:
          Config::getConfig();
          v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
          group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                    &v41->design_config_.lua_config_mgr,
                                    *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v56);
          if ( group_info_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
            if ( !group_info_config_ptr->is_dynamic_load )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/offline_msg_handler.cpp",
                "checkGroupBinOp",
                843);
              v45 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v57,
                      (const char (*)[21])"unregister group_id:");
              v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v3 + 48));
              v47 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v46,
                      (const char (*)[28])off_1BD99740);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v47,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v57);
              result = 513LL;
            }
            else
            {
LABEL_31:
              result = 0LL;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "checkGroupBinOp",
              838);
            v42 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v57,
                    (const char (*)[31])"findGroupInfoConfig group_id: ");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v3 + 48));
            v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v43,
                    (const char (*)[14])" fails, uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v57);
            result = 513LL;
          }
          break;
        default:
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkGroupBinOp",
            855);
          v48 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v57, (const char (*)[27])off_1BD99780);
          val = proto::GroupBinOp::op_type(op);
          v49 = common::milog::MiLogStream::operator<<<proto::GroupBinOperation,(proto::GroupBinOperation*)0>(
                  v48,
                  (const proto::GroupBinOperation *)&val);
          v50 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v49, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          goto LABEL_31;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGroupBinOp",
        771);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v57,
              (const char (*)[33])"findGroupScriptConfig group_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v57);
      result = 513LL;
    }
  }
  if ( v58 == (char *)v3 )
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

// Line 863: range 000000000E3105F4-000000000E310ACC
__int64 __fastcall OfflineMsgHandler::checkDelOneOffOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DelOneOffOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t scene_id; // [rsp+24h] [rbp-CCh]
  const GroupScriptConfig *group_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 group_id:865 64 4 7 uid:862";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDelOneOffOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  scene_id = proto::DelOneOffOp::scene_id(op);
  *(_DWORD *)(v3 + 48) = proto::DelOneOffOp::group_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  v7 = scene_id != LuaConfigMgr::getSceneIdByGroupId(&v6->design_config_.lua_config_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( v7 )
  {
    result = 531LL;
    goto LABEL_14;
  }
  Config::getConfig();
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v9->design_config_.lua_config_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !group_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDelOneOffOp",
      873);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v26,
            (const char (*)[33])"findGroupScriptConfig group_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 513LL;
    goto LABEL_14;
  }
  if ( proto::DelOneOffOp::is_monster(op) )
  {
    v13 = proto::DelOneOffOp::config_id(op);
    if ( !GroupScriptConfig::findMonsterConfig(group_config_ptr, v13) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDelOneOffOp",
        881);
      v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v26,
              (const char (*)[30])"findMonsterConfig config_id: ");
      val = proto::DelOneOffOp::config_id(op);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 513LL;
      goto LABEL_14;
    }
  }
  else
  {
    v17 = proto::DelOneOffOp::config_id(op);
    if ( !GroupScriptConfig::findGadgetConfig(group_config_ptr, v17) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDelOneOffOp",
        889);
      v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v26,
              (const char (*)[29])"findGadgetConfig config_id: ");
      val = proto::DelOneOffOp::config_id(op);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 513LL;
      goto LABEL_14;
    }
  }
  result = 0LL;
LABEL_14:
  if ( v27 == (char *)v3 )
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

// Line 898: range 000000000E310ACE-000000000E310CA3
int32_t __cdecl OfflineMsgHandler::checkRefreshBlossomCircleCampOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::RefreshBlossomCircleCampOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 refresh_id:899";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkRefreshBlossomCircleCampOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::RefreshBlossomCircleCampOp::refresh_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v6->design_config_.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( refresh_config_ptr )
  {
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkRefreshBlossomCircleCampOp",
      903);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v12,
           (const char (*)[50])"findBlossomRefreshExcelConfig failed, refresh_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
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

// Line 911: range 000000000E310CA4-000000000E310E84
int32_t __cdecl OfflineMsgHandler::checkFinishRoutineOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::FinishRoutineOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 32 4 14 routine_id:912";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkFinishRoutineOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::FinishRoutineOp::routine_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  v7 = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
         &v6->design_config_.txt_config_mgr.routine_config_mgr,
         *(_DWORD *)(v3 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkFinishRoutineOp",
      915);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    result = 0;
  }
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

// Line 922: range 000000000E310E86-000000000E31161D
__int64 __fastcall OfflineMsgHandler::getAndSetRedisData(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::OfflineMsgBin *offline_msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  int32_t reta; // [rsp+2Ch] [rbp-154h]
  uint32_t new_index; // [rsp+30h] [rbp-150h]
  uint32_t now; // [rsp+34h] [rbp-14Ch]
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator __for_begin; // [rsp+38h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator __for_end; // [rsp+40h] [rbp-140h] BYREF
  const std::string *ticket; // [rsp+48h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::TicketTimeBin> *__for_range; // [rsp+50h] [rbp-130h]
  const proto::TicketTimeBin *ticket_bin; // [rsp+58h] [rbp-128h]
  proto::TicketTimeBin *ticket_bin_0; // [rsp+60h] [rbp-120h]
  proto::OfflineMsgBin *new_offline_msg; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-110h] BYREF
  char v30[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:921 48 16 12 tran_ptr:924 80 72 14 redis_data:923";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::getAndSetRedisData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  proto::OfflineMsgRedisData::OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v3 + 80));
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  ret = RedisOpOfflineMsg::getOfflineMsgDataWithTran(
          *(_DWORD *)(v3 + 32),
          (proto::OfflineMsgRedisData *)(v3 + 80),
          (common::midb::GetAndSetTranPtr *)(v3 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getAndSetRedisData",
      928);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v29,
           (const char (*)[34])"getOfflineMsgWithTran fails uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = ret;
  }
  else if ( OfflineMsgHandler::checkOfflineMsgData(
              this,
              *(_DWORD *)(v3 + 32),
              (const proto::OfflineMsgRedisData *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getAndSetRedisData",
      933);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v29,
           (const char (*)[33])"checkOfflineMsgData fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  else
  {
    reta = OfflineMsgHandler::checkSocialOfflineMsgData(
             this,
             *(_DWORD *)(v3 + 32),
             (const proto::OfflineMsgRedisData *)(v3 + 80),
             offline_msg);
    if ( reta )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/offline_msg_handler.cpp",
        "getAndSetRedisData",
        940);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v29,
             (const char (*)[39])"checkSocialOfflineMsgData fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = reta;
    }
    else if ( (unsigned int)proto::OfflineMsgRedisData::offline_msg_list_size((const proto::OfflineMsgRedisData *const)(v3 + 80)) <= 0x7CF )
    {
      ticket = proto::OfflineMsgBin::ticket[abi:cxx11](offline_msg);
      if ( (unsigned __int8)std::string::empty(ticket) != 1 )
      {
        __for_range = proto::OfflineMsgRedisData::recent_ticket_list((const proto::OfflineMsgRedisData *const)(v3 + 80));
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          ticket_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator*(&__for_begin);
          v11 = proto::TicketTimeBin::ticket[abi:cxx11](ticket_bin);
          if ( std::operator==<char>(v11, ticket) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/offline_msg_handler.cpp",
              "getAndSetRedisData",
              959);
            v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v29, (const char (*)[9])"ticket: ");
            v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, ticket);
            v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v13,
                    (const char (*)[22])" has been sent! uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v29);
            v7 = 1309;
            goto LABEL_23;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator++(&__for_begin);
        }
      }
      new_index = proto::OfflineMsgRedisData::last_index((const proto::OfflineMsgRedisData *const)(v3 + 80)) + 1;
      proto::OfflineMsgRedisData::set_last_index((proto::OfflineMsgRedisData *const)(v3 + 80), new_index);
      now = common::tools::TimeUtils::getNow();
      if ( (unsigned __int8)std::string::empty(ticket) != 1 )
      {
        ticket_bin_0 = proto::OfflineMsgRedisData::add_recent_ticket_list((proto::OfflineMsgRedisData *const)(v3 + 80));
        proto::TicketTimeBin::set_enque_time(ticket_bin_0, now);
        proto::TicketTimeBin::set_ticket(ticket_bin_0, ticket);
      }
      new_offline_msg = proto::OfflineMsgRedisData::add_offline_msg_list((proto::OfflineMsgRedisData *const)(v3 + 80));
      proto::OfflineMsgBin::operator=(new_offline_msg, offline_msg);
      proto::OfflineMsgBin::set_enque_time(new_offline_msg, now);
      proto::OfflineMsgBin::set_index(new_offline_msg, new_index);
      if ( RedisOpOfflineMsg::modifyOfflineMsgDataWithTran(
             *(_DWORD *)(v3 + 32),
             (const proto::OfflineMsgRedisData *)(v3 + 80),
             (common::midb::GetAndSetTranPtr *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "getAndSetRedisData",
          985);
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v29,
                (const char (*)[42])"modifyOfflineMsgDataWithTran fails, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v7 = 5001;
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/offline_msg_handler.cpp",
        "getAndSetRedisData",
        947);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v29,
              (const char (*)[42])"offline_msg_list_size exceed limit, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = 1308;
    }
  }
LABEL_23:
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v3 + 48));
  proto::OfflineMsgRedisData::~OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v3 + 80));
  result = v7;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 993: range 000000000E31161E-000000000E31196B
void __cdecl OfflineMsgHandler::notifyNewOfflineMsg(OfflineMsgHandler *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // rax
  OfflineMsgService *v6; // r14
  unsigned __int64 v7; // rdx
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:994 64 24 11 notify:1000";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::notifyNewOfflineMsg;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "notifyNewOfflineMsg",
      997);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    proto::NewOfflineMsgNotify::NewOfflineMsgNotify((proto::NewOfflineMsgNotify *const)(v2 + 64));
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::NewOfflineMsgNotify>(v5, (const proto::NewOfflineMsgNotify *)(v2 + 64));
    v6 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setUserId(v8, uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v9, 3u);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v13(v11, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    proto::NewOfflineMsgNotify::~NewOfflineMsgNotify((proto::NewOfflineMsgNotify *const)(v2 + 64));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
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
};

// Line 1010: range 000000000E311A38-000000000E312588
int32_t __cdecl OfflineMsgHandler::onRemoveOfflineMsgNotify(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  common::minet::Packet *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  void *const *it; // r14
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator v23; // rax
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator v24; // rax
  void *const *v25; // r14
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator v26; // rax
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-228h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-224h]
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin> *offline_msg_list; // [rsp+20h] [rbp-220h]
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin> *recent_ticket_list; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream v47; // [rsp+30h] [rbp-210h] BYREF
  char v48[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 8 uid:1011 64 4 10 index:1025 80 4 8 ret:1033 96 4 14 list_size:1045 112 4 15 last_index"
                        ":1052 128 4 16 first_index:1053 144 4 12 rm_func:1067 160 4 9 pred:1077 176 8 9 iter:1071 208 8 "
                        "16 ticket_iter:1081 240 16 13 tran_ptr:1032 272 24 11 notify:1017 336 72 15 redis_data:1031";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onRemoveOfflineMsgNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v5);
  if ( *(_DWORD *)(v2 + 48) )
  {
    proto::RemoveOfflineMsgNotify::RemoveOfflineMsgNotify((proto::RemoveOfflineMsgNotify *const)(v2 + 272));
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getProto<proto::RemoveOfflineMsgNotify>(v7, (proto::RemoveOfflineMsgNotify *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onRemoveOfflineMsgNotify",
        1020);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v47, (const char (*)[15])"getProto fails");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 64) = proto::RemoveOfflineMsgNotify::index((const proto::RemoveOfflineMsgNotify *const)(v2 + 272));
      if ( *(_DWORD *)(v2 + 64) )
      {
        proto::OfflineMsgRedisData::OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v2 + 336));
        *(_QWORD *)(v2 + 240) = 0LL;
        *(_QWORD *)(v2 + 248) = 0LL;
        *(_DWORD *)(v2 + 80) = RedisOpOfflineMsg::getOfflineMsgDataWithTran(
                                 *(_DWORD *)(v2 + 48),
                                 (proto::OfflineMsgRedisData *)(v2 + 336),
                                 (common::midb::GetAndSetTranPtr *)(v2 + 240));
        if ( *(_DWORD *)(v2 + 80) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "onRemoveOfflineMsgNotify",
            1036);
          v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v47,
                 (const char (*)[34])"getOfflineMsgWithTran fails uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v47);
          v6 = *(_DWORD *)(v2 + 80);
        }
        else if ( OfflineMsgHandler::checkOfflineMsgData(
                    this,
                    *(_DWORD *)(v2 + 48),
                    (const proto::OfflineMsgRedisData *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "onRemoveOfflineMsgNotify",
            1041);
          v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                 &v47,
                 (const char (*)[33])"checkOfflineMsgData fails, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v47);
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(v2 + 96) = proto::OfflineMsgRedisData::offline_msg_list_size((const proto::OfflineMsgRedisData *const)(v2 + 336));
          if ( *(_DWORD *)(v2 + 96) )
          {
            *(_DWORD *)(v2 + 112) = proto::OfflineMsgRedisData::last_index((const proto::OfflineMsgRedisData *const)(v2 + 336));
            *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 112) - *(_DWORD *)(v2 + 96) + 1;
            if ( *(_DWORD *)(v2 + 64) >= *(_DWORD *)(v2 + 128) )
            {
              if ( *(_DWORD *)(v2 + 64) <= *(_DWORD *)(v2 + 112) )
              {
                offline_msg_list = proto::OfflineMsgRedisData::mutable_offline_msg_list((proto::OfflineMsgRedisData *const)(v2 + 336));
                *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 64);
                it = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::cend(offline_msg_list).it_;
                v23.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::cbegin(offline_msg_list).it_;
                *(google::protobuf::internal::RepeatedPtrIterator<const proto::OfflineMsgBin> *)(v2 + 176) = std::find_if<google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>,OfflineMsgHandler::onRemoveOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::OfflineMsgBin const&)#1}>(v23, (google::protobuf::internal::RepeatedPtrIterator<const proto::OfflineMsgBin>)it, *(OfflineMsgHandler::onRemoveOfflineMsgNotify::<lambda(const proto::OfflineMsgBin&)> *)(v2 + 144));
                v24.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::cbegin(offline_msg_list).it_;
                google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::erase(
                  offline_msg_list,
                  v24,
                  *(google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator *)(v2 + 176));
                now = common::tools::TimeUtils::getNow();
                recent_ticket_list = proto::OfflineMsgRedisData::mutable_recent_ticket_list((proto::OfflineMsgRedisData *const)(v2 + 336));
                *(_DWORD *)(v2 + 160) = now;
                v25 = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cend(recent_ticket_list).it_;
                v26.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cbegin(recent_ticket_list).it_;
                *(google::protobuf::internal::RepeatedPtrIterator<const proto::TicketTimeBin> *)(v2 + 208) = std::find_if<google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>,OfflineMsgHandler::onRemoveOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::TicketTimeBin const&)#2}>(v26, (google::protobuf::internal::RepeatedPtrIterator<const proto::TicketTimeBin>)v25, *(OfflineMsgHandler::onRemoveOfflineMsgNotify::<lambda(const proto::TicketTimeBin&)> *)(v2 + 160));
                v27.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cbegin(recent_ticket_list).it_;
                google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::erase(
                  recent_ticket_list,
                  v27,
                  *(google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator *)(v2 + 208));
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/offline_msg_handler.cpp",
                  "onRemoveOfflineMsgNotify",
                  1084);
                v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v28,
                        (const unsigned int *)(v2 + 48));
                v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v29,
                        (const char (*)[17])" old list_size: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v2 + 96));
                v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v31,
                        (const char (*)[17])" new list_size: ");
                val = proto::OfflineMsgRedisData::offline_msg_list_size((const proto::OfflineMsgRedisData *const)(v2 + 336));
                v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &val);
                v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v33,
                        (const char (*)[15])" first_index: ");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        (const unsigned int *)(v2 + 128));
                v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v35,
                        (const char (*)[14])" last_index: ");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v2 + 112));
                v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" index: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::~MiLogStream(&v47);
                *(_DWORD *)(v2 + 80) = RedisOpOfflineMsg::modifyOfflineMsgDataWithTran(
                                         *(_DWORD *)(v2 + 48),
                                         (const proto::OfflineMsgRedisData *)(v2 + 336),
                                         (common::midb::GetAndSetTranPtr *)(v2 + 240));
                if ( *(_DWORD *)(v2 + 80) )
                {
                  common::milog::MiLogStream::create(
                    &v47,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/offline_msg_handler.cpp",
                    "onRemoveOfflineMsgNotify",
                    1090);
                  v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 48));
                  v41 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          v40,
                          (const char (*)[43])" modifyOfflineMsgDataWithTran fails, ret: ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v41, (const int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v47);
                }
                v6 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/offline_msg_handler.cpp",
                  "onRemoveOfflineMsgNotify",
                  1061);
                v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v17,
                        (const unsigned int *)(v2 + 48));
                v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" index: ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v2 + 64));
                v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v20,
                        (const char (*)[14])" last_index: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 112));
                common::milog::MiLogStream::~MiLogStream(&v47);
                v6 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/offline_msg_handler.cpp",
                "onRemoveOfflineMsgNotify",
                1056);
              v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      (const unsigned int *)(v2 + 48));
              v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" index: ");
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v14,
                      (const unsigned int *)(v2 + 64));
              v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v15,
                      (const char (*)[15])" first_index: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 128));
              common::milog::MiLogStream::~MiLogStream(&v47);
              v6 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/offline_msg_handler.cpp",
              "onRemoveOfflineMsgNotify",
              1048);
            v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" offline_msg_list empty");
            common::milog::MiLogStream::~MiLogStream(&v47);
            v6 = 0;
          }
        }
        std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 240));
        proto::OfflineMsgRedisData::~OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v2 + 336));
      }
      else
      {
        v6 = 0;
      }
    }
    proto::RemoveOfflineMsgNotify::~RemoveOfflineMsgNotify((proto::RemoveOfflineMsgNotify *const)(v2 + 272));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onRemoveOfflineMsgNotify",
      1014);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v47, (const char (*)[10])off_1BD99EE0);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v6 = -1;
  }
  result = v6;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 1067: range 000000000E31196C-000000000E3119CE
bool __cdecl OfflineMsgHandler::onRemoveOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::OfflineMsgBin const&)#1}::operator()(
        const OfflineMsgHandler::onRemoveOfflineMsgNotify::<lambda(const proto::OfflineMsgBin&)> *const __closure,
        const proto::OfflineMsgBin *offline_msg)
{
  uint32_t v2; // ecx

  v2 = proto::OfflineMsgBin::index(offline_msg);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 > __closure->__index;
};

// Line 1077: range 000000000E3119D0-000000000E311A36
bool __cdecl OfflineMsgHandler::onRemoveOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::TicketTimeBin const&)#2}::operator()(
        const OfflineMsgHandler::onRemoveOfflineMsgNotify::<lambda(const proto::TicketTimeBin&)> *const __closure,
        const proto::TicketTimeBin *ticket_bin)
{
  uint32_t v2; // ecx

  v2 = proto::TicketTimeBin::enque_time(ticket_bin) + 2592000;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 >= __closure->__now;
};

// Line 1098: range 000000000E31258A-000000000E312886
int32_t __cdecl OfflineMsgHandler::onGetOfflineMsgReq(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t OfflineMsg; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  OfflineMsgService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::GetOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::GetOfflineMsgRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1100 64 16 12 rsp_ptr:1100";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onGetOfflineMsgReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOfflineMsgReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetOfflineMsgReq const>(
         (const std::shared_ptr<const proto::GetOfflineMsgReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onGetOfflineMsgReq",
      1100);
    common::milog::MiLogStream::operator()(&v15, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v15);
    OfflineMsg = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetOfflineMsgReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetOfflineMsgRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetOfflineMsgRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    OfflineMsgHandler::getOfflineMsg(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetOfflineMsgRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetOfflineMsgRsp> *)(v2 + 64));
    OfflineMsg = ServiceBase::sendRsp<proto::GetOfflineMsgRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::GetOfflineMsgRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::GetOfflineMsgRsp>::~shared_ptr((std::shared_ptr<proto::GetOfflineMsgRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetOfflineMsgReq const>::~shared_ptr((std::shared_ptr<const proto::GetOfflineMsgReq> *const)(v2 + 32));
  result = OfflineMsg;
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

// Line 1107: range 000000000E312888-000000000E312EA2
void __fastcall OfflineMsgHandler::getOfflineMsg(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::GetOfflineMsgReq *req,
        proto::GetOfflineMsgRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool is_login; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  proto::OfflineMsgBin *v17; // rax
  int list_size; // [rsp+2Ch] [rbp-154h]
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const google::protobuf::RepeatedPtrField<proto::OfflineMsgBin> *__for_range; // [rsp+40h] [rbp-140h]
  const proto::OfflineMsgBin *msg; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-130h] BYREF
  char v26[272]; // [rsp+70h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 10 index:1108 64 4 15 last_index:1139 80 4 16 first_index:1140 96 4 8 uid:1106 112 72 15 redis_data:1119";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::getOfflineMsg;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 96) = uid;
  *(_DWORD *)(v4 + 48) = proto::GetOfflineMsgReq::index(req);
  proto::GetOfflineMsgRsp::set_last_index(rsp_0, *(_DWORD *)(v4 + 48));
  is_login = proto::GetOfflineMsgReq::is_login(req);
  proto::GetOfflineMsgRsp::set_is_login(rsp_0, is_login);
  proto::GetOfflineMsgRsp::set_retcode(rsp_0, -1);
  if ( *(_DWORD *)(v4 + 96) )
  {
    proto::OfflineMsgRedisData::OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v4 + 112));
    if ( RedisOpOfflineMsg::getOfflineMsgData(*(_DWORD *)(v4 + 96), (proto::OfflineMsgRedisData *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "getOfflineMsg",
        1123);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v25,
             (const char (*)[30])"getOfflineMsgData fails uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else if ( OfflineMsgHandler::checkOfflineMsgData(
                this,
                *(_DWORD *)(v4 + 96),
                (const proto::OfflineMsgRedisData *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "getOfflineMsg",
        1128);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v25,
             (const char (*)[33])"checkOfflineMsgData fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      list_size = proto::OfflineMsgRedisData::offline_msg_list_size((const proto::OfflineMsgRedisData *const)(v4 + 112));
      if ( list_size )
      {
        *(_DWORD *)(v4 + 64) = proto::OfflineMsgRedisData::last_index((const proto::OfflineMsgRedisData *const)(v4 + 112));
        *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 64) - list_size + 1;
        if ( (unsigned int)(*(_DWORD *)(v4 + 48) + 1) < *(_DWORD *)(v4 + 80)
          || (unsigned int)(*(_DWORD *)(v4 + 48) + 1) > *(_DWORD *)(v4 + 64) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "getOfflineMsg",
            1144);
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v4 + 96));
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" index: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v4 + 48));
          v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v13,
                  (const char (*)[15])" first_index: ");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v4 + 80));
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v15,
                  (const char (*)[14])" last_index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        __for_range = proto::OfflineMsgRedisData::offline_msg_list((const proto::OfflineMsgRedisData *const)(v4 + 112));
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          msg = google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator*(&__for_begin);
          if ( proto::OfflineMsgBin::index(msg) > *(_DWORD *)(v4 + 48) )
          {
            v17 = proto::GetOfflineMsgRsp::add_offline_msg_list(rsp_0);
            proto::OfflineMsgBin::operator=(v17, msg);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator++(&__for_begin);
        }
        proto::GetOfflineMsgRsp::set_retcode(rsp_0, 0);
      }
      else
      {
        proto::GetOfflineMsgRsp::set_retcode(rsp_0, 0);
      }
    }
    proto::OfflineMsgRedisData::~OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v4 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getOfflineMsg",
      1115);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])"0 == uid!");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1170: range 000000000E312EA4-000000000E313231
__int64 __fastcall OfflineMsgHandler::checkOfflineMsgData(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::OfflineMsgRedisData *redis_data)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  const proto::OfflineMsgBin *msg; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 list_size:1171 48 4 15 last_index:1172 64 4 16 first_index:1178 80 4 8 idx:1179 96 4 8 uid:1169";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkOfflineMsgData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = uid;
  *(_DWORD *)(v3 + 32) = proto::OfflineMsgRedisData::offline_msg_list_size(redis_data);
  *(_DWORD *)(v3 + 48) = proto::OfflineMsgRedisData::last_index(redis_data);
  if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 32) )
  {
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48) - *(_DWORD *)(v3 + 32) + 1;
    for ( *(_DWORD *)(v3 + 80) = 0; *(_DWORD *)(v3 + 80) < *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 80) )
    {
      msg = proto::OfflineMsgRedisData::offline_msg_list(redis_data, *(_DWORD *)(v3 + 80));
      if ( proto::OfflineMsgBin::index(msg) != *(_DWORD *)(v3 + 64) + *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/offline_msg_handler.cpp",
          "checkOfflineMsgData",
          1184);
        v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" msg.index:");
        val = proto::OfflineMsgBin::index(msg);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" first_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_msg_handler.cpp",
      "checkOfflineMsgData",
      1175);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v22, (const char (*)[6])"uid: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 96));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" last_index: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" list_size: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  if ( v23 == (char *)v3 )
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

// Line 1193: range 000000000E313232-000000000E3135FE
__int64 __fastcall OfflineMsgHandler::checkSocialOfflineMsgData(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::OfflineMsgRedisData *redis_data,
        const proto::OfflineMsgBin *offline_msg)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 result; // rax
  proto::OfflineMsgBin::DetailCase v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  std::less<unsigned int> __comp; // [rsp+36h] [rbp-BAh] BYREF
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-B9h] BYREF
  proto::OfflineMsgBin::DetailCase value; // [rsp+38h] [rbp-B8h] BYREF
  uint32_t count; // [rsp+3Ch] [rbp-B4h]
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::OfflineMsgBin> *__for_range; // [rsp+48h] [rbp-A8h]
  const proto::OfflineMsgBin *redis_msg; // [rsp+50h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::const_iterator __for_end; // [rsp+58h] [rbp-98h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 8 uid:1192";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::checkSocialOfflineMsgData;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( !(_BYTE)`guard variable for'OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set
    && __cxa_guard_acquire(&`guard variable for'OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set) )
  {
    __for_end.it_ = (void *const *)0x2300000022LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      &OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set,
      (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__for_end),
      &__comp,
      &__a);
    __cxa_guard_release(&`guard variable for'OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      &OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set,
      &_dso_handle);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  value = proto::OfflineMsgBin::detail_case(offline_msg);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,proto::OfflineMsgBin::DetailCase>(
          &OfflineMsgHandler::checkSocialOfflineMsgData(unsigned int,proto::OfflineMsgRedisData const&,proto::OfflineMsgBin const&)::social_related_offline_msg_type_set,
          &value) )
  {
    result = 0LL;
  }
  else
  {
    count = 0;
    __for_range = proto::OfflineMsgRedisData::offline_msg_list(redis_data);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::OfflineMsgBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      redis_msg = google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator*(&__for_begin);
      v8 = proto::OfflineMsgBin::detail_case(redis_msg);
      if ( v8 == proto::OfflineMsgBin::detail_case(offline_msg) )
        ++count;
      if ( count > 0x31 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/offline_msg_handler.cpp",
          "checkSocialOfflineMsgData",
          1214);
        v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v10,
                (const char (*)[39])" social msg exceed limit, detail_case:");
        value = proto::OfflineMsgBin::detail_case(offline_msg);
        common::milog::MiLogStream::operator<<<proto::OfflineMsgBin::DetailCase,(proto::OfflineMsgBin::DetailCase*)0>(
          v11,
          &value);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 1332LL;
        goto LABEL_17;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::OfflineMsgBin const>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_17:
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

// Line 1222: range 000000000E313600-000000000E313824
__int64 __fastcall OfflineMsgHandler::checkForceAcceptQuest(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ForceAcceptQuestOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1221";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkForceAcceptQuest;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config_.txt_config_mgr.quest_config_mgr;
  v7 = proto::ForceAcceptQuestOp::quest_id(op);
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( quest_config_ptr )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkForceAcceptQuest",
      1226);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v16,
           (const char (*)[40])"checkForceAcceptQuest fails, quest_id: ");
    val = proto::ForceAcceptQuestOp::quest_id(op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
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

// Line 1234: range 000000000E313826-000000000E313B54
int32_t __cdecl OfflineMsgHandler::onClearOfflineMsgNotify(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-110h] BYREF
  char v12[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 uid:1235 48 16 13 tran_ptr:1238 80 72 15 redis_data:1237";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onClearOfflineMsgNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v5);
  proto::OfflineMsgRedisData::OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v2 + 80));
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  ret = RedisOpOfflineMsg::getOfflineMsgDataWithTran(
          *(_DWORD *)(v2 + 32),
          (proto::OfflineMsgRedisData *)(v2 + 80),
          (common::midb::GetAndSetTranPtr *)(v2 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onClearOfflineMsgNotify",
      1242);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v11,
           (const char (*)[34])"getOfflineMsgWithTran fails uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = ret;
  }
  else
  {
    proto::OfflineMsgRedisData::Clear((proto::OfflineMsgRedisData *const)(v2 + 80));
    if ( RedisOpOfflineMsg::modifyOfflineMsgDataWithTran(
           *(_DWORD *)(v2 + 32),
           (const proto::OfflineMsgRedisData *)(v2 + 80),
           (common::midb::GetAndSetTranPtr *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onClearOfflineMsgNotify",
        1250);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v11,
             (const char (*)[42])"modifyOfflineMsgDataWithTran fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 48));
  proto::OfflineMsgRedisData::~OfflineMsgRedisData((proto::OfflineMsgRedisData *const)(v2 + 80));
  result = v7;
  if ( v12 == (char *)v2 )
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

// Line 1261: range 000000000E313B56-000000000E313E52
int32_t __cdecl OfflineMsgHandler::onSendHomeOfflineMsgReq(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t HomeUserId; // esi
  OfflineMsgService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SendHomeOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::SendHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::SendHomeOfflineMsgRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1263 64 16 12 rsp_ptr:1263";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onSendHomeOfflineMsgReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendHomeOfflineMsgReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SendHomeOfflineMsgReq const>(
         (const std::shared_ptr<const proto::SendHomeOfflineMsgReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onSendHomeOfflineMsgReq",
      1263);
    common::milog::MiLogStream::operator()(&v15, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SendHomeOfflineMsgReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendHomeOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SendHomeOfflineMsgRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SendHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SendHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SendHomeOfflineMsgRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    HomeUserId = common::minet::Packet::getHomeUserId(v6);
    OfflineMsgHandler::sendHomeOfflineMsg(this, HomeUserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SendHomeOfflineMsgRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendHomeOfflineMsgRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::SendHomeOfflineMsgRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SendHomeOfflineMsgRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SendHomeOfflineMsgRsp>::~shared_ptr((std::shared_ptr<proto::SendHomeOfflineMsgRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SendHomeOfflineMsgReq const>::~shared_ptr((std::shared_ptr<const proto::SendHomeOfflineMsgReq> *const)(v2 + 32));
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

// Line 1270: range 000000000E313E54-000000000E3143CD
void __fastcall OfflineMsgHandler::sendHomeOfflineMsg(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::SendHomeOfflineMsgReq *req,
        proto::SendHomeOfflineMsgRsp *rsp_0)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  proto::HomeOfflineMsgBin::DetailCase v7; // eax
  const proto::HomeRestoreDefaultsArrangementOp *v8; // rax
  const proto::HomeRestoreDefaultsSceneArrangementOp *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  proto::HomeOfflineMsgBin::DetailCase val; // [rsp+28h] [rbp-C8h] BYREF
  uint32_t try_count; // [rsp+2Ch] [rbp-C4h]
  const proto::HomeOfflineMsgBin *msg; // [rsp+30h] [rbp-C0h]
  const std::string *ticket; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 ret:1283 64 4 13 home_uid:1269";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::sendHomeOfflineMsg;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = home_uid;
  proto::SendHomeOfflineMsgRsp::set_retcode(rsp_0, -1);
  msg = proto::SendHomeOfflineMsgReq::msg(req);
  ticket = proto::HomeOfflineMsgBin::ticket[abi:cxx11](msg);
  proto::SendHomeOfflineMsgRsp::set_ticket(rsp_0, ticket);
  if ( !*(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "sendHomeOfflineMsg",
      1278);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v27, (const char (*)[15])"home_uid == 0!");
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_24;
  }
  *(_DWORD *)(v4 + 48) = -1;
  v7 = proto::HomeOfflineMsgBin::detail_case(msg);
  if ( v7 == kRestoreDefaultsSceneArrangementOp )
  {
    v9 = proto::HomeOfflineMsgBin::restore_defaults_scene_arrangement_op(msg);
    *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkHomeRestoreDefaultsSceneArrangementOp(this, *(_DWORD *)(v4 + 64), v9);
  }
  else
  {
    if ( v7 > kRestoreDefaultsSceneArrangementOp )
      goto LABEL_14;
    if ( v7 == kTestOp_0 )
    {
      *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkHomeTestOp(this);
      goto LABEL_15;
    }
    if ( v7 == kRestoreDefaultsArrangementOp )
    {
      v8 = proto::HomeOfflineMsgBin::restore_defaults_arrangement_op(msg);
      *(_DWORD *)(v4 + 48) = OfflineMsgHandler::checkHomeRestoreDefaultsArrangementOp(this, *(_DWORD *)(v4 + 64), v8);
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "sendHomeOfflineMsg",
        1296);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v27, (const char (*)[26])off_1BD979A0);
      val = proto::HomeOfflineMsgBin::detail_case(msg);
      v11 = common::milog::MiLogStream::operator<<<proto::HomeOfflineMsgBin::DetailCase,(proto::HomeOfflineMsgBin::DetailCase*)0>(
              v10,
              &val);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
LABEL_15:
  if ( *(_DWORD *)(v4 + 48) )
  {
    proto::SendHomeOfflineMsgRsp::set_retcode(rsp_0, *(_DWORD *)(v4 + 48));
  }
  else
  {
    for ( try_count = 0; try_count <= 2; ++try_count )
    {
      *(_DWORD *)(v4 + 48) = OfflineMsgHandler::getAndSetHomeRedisData(this, *(_DWORD *)(v4 + 64), msg);
      if ( *(_DWORD *)(v4 + 48) != 5001 )
        break;
    }
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "sendHomeOfflineMsg",
        1316);
      v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v27,
              (const char (*)[35])"sendHomeOfflineMsg fails, ticket: ");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, ticket);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" ret: ");
      v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      proto::SendHomeOfflineMsgRsp::set_retcode(rsp_0, *(_DWORD *)(v4 + 48));
    }
    else
    {
      OfflineMsgHandler::notifyNewHomeOfflineMsg(this, *(_DWORD *)(v4 + 64));
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/offline_msg_handler.cpp",
        "sendHomeOfflineMsg",
        1323);
      v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v27,
              (const char (*)[34])"sendHomeOfflineMsg succ, ticket: ");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, ticket);
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      proto::SendHomeOfflineMsgRsp::set_retcode(rsp_0, 0);
      OfflineMsgHandler::onPostSendHomeOfflineMsg(this, *(_DWORD *)(v4 + 64), msg);
    }
  }
LABEL_24:
  if ( v28 == (char *)v4 )
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
};

// Line 1332: range 000000000E3143CE-000000000E3143DC
int32_t __cdecl OfflineMsgHandler::checkHomeTestOp(OfflineMsgHandler *const this)
{
  return 0;
};

// Line 1337: range 000000000E3143DE-000000000E3147E5
__int64 __fastcall OfflineMsgHandler::checkHomeRestoreDefaultsArrangementOp(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::HomeRestoreDefaultsArrangementOp *proto)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 module_id:1344 64 4 13 home_uid:1336 80 48 18 module_id_set:1343";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkHomeRestoreDefaultsArrangementOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 64) = home_uid;
  if ( proto::HomeRestoreDefaultsArrangementOp::is_all_module(proto) )
  {
    v6 = 0;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
    __for_range = proto::HomeRestoreDefaultsArrangementOp::module_id_list(proto);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 48) = *__for_begin;
      v7 = std::set<unsigned int>::insert(
             (std::set<unsigned int> *const)(v3 + 80),
             (const std::set<unsigned int>::value_type *)(v3 + 48));
      if ( !v7.second )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkHomeRestoreDefaultsArrangementOp",
          1348);
        v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v22,
               (const char (*)[34])"module_id duplicated, module_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = -1;
        goto LABEL_16;
      }
      Config::getConfig();
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      v12 = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
              &v11->design_config_.txt_config_mgr.home_config_mgr,
              *(_DWORD *)(v3 + 48)) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkHomeRestoreDefaultsArrangementOp",
          1353);
        v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v22,
                (const char (*)[56])"findHomeworldModuleExcelConfig return null, module_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = -1;
        goto LABEL_16;
      }
      ++__for_begin;
    }
    v6 = 0;
LABEL_16:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  }
  result = v6;
  if ( v23 == (char *)v3 )
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

// Line 1362: range 000000000E3147E6-000000000E314B95
__int64 __fastcall OfflineMsgHandler::checkHomeRestoreDefaultsSceneArrangementOp(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::HomeRestoreDefaultsSceneArrangementOp *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  data::SceneType scene_type; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 module_id:1363 48 4 13 scene_id:1369 64 4 13 home_uid:1361";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkHomeRestoreDefaultsSceneArrangementOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = home_uid;
  *(_DWORD *)(v3 + 32) = proto::HomeRestoreDefaultsSceneArrangementOp::module_id(proto);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  v7 = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
         &v6->design_config_.txt_config_mgr.home_config_mgr,
         *(_DWORD *)(v3 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkHomeRestoreDefaultsSceneArrangementOp",
      1366);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v20,
           (const char (*)[56])"findHomeworldModuleExcelConfig return null, module_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::HomeRestoreDefaultsSceneArrangementOp::scene_id(proto);
    Config::getConfig();
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    scene_type = SceneExcelConfigMgr::getSceneTypeBySceneId(
                   &v12->design_config_.txt_config_mgr.scene_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    Config::getConfig();
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v13 = !SceneExcelConfigMgr::isHomeScene(scene_type);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkHomeRestoreDefaultsSceneArrangementOp",
        1373);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v20,
              (const char (*)[36])"scene id not home scene. scene id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
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

// Line 1381: range 000000000E314B96-000000000E315275
__int64 __fastcall OfflineMsgHandler::getAndSetHomeRedisData(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::HomeOfflineMsgBin *offline_msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  uint32_t new_index; // [rsp+30h] [rbp-150h]
  uint32_t now; // [rsp+34h] [rbp-14Ch]
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator __for_begin; // [rsp+38h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator __for_end; // [rsp+40h] [rbp-140h] BYREF
  const std::string *ticket; // [rsp+48h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::TicketTimeBin> *__for_range; // [rsp+50h] [rbp-130h]
  const proto::TicketTimeBin *ticket_bin; // [rsp+58h] [rbp-128h]
  proto::TicketTimeBin *ticket_bin_0; // [rsp+60h] [rbp-120h]
  proto::HomeOfflineMsgBin *new_offline_msg; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-110h] BYREF
  char v28[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 home_uid:1380 48 16 13 tran_ptr:1383 80 72 15 redis_data:1382";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::getAndSetHomeRedisData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = home_uid;
  proto::HomeOfflineMsgRedisData::HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v3 + 80));
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  ret = RedisOpOfflineMsg::getHomeOfflineMsgDataWithTran(
          *(_DWORD *)(v3 + 32),
          (proto::HomeOfflineMsgRedisData *)(v3 + 80),
          (common::midb::GetAndSetTranPtr *)(v3 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getAndSetHomeRedisData",
      1387);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"getHomeOfflineMsgWithTran fails home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = ret;
  }
  else if ( OfflineMsgHandler::checkHomeOfflineMsgData(
              this,
              *(_DWORD *)(v3 + 32),
              (const proto::HomeOfflineMsgRedisData *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getAndSetHomeRedisData",
      1392);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v27,
           (const char (*)[42])"checkHomeOfflineMsgData fails, home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  else if ( (unsigned int)proto::HomeOfflineMsgRedisData::offline_msg_list_size((const proto::HomeOfflineMsgRedisData *const)(v3 + 80)) <= 0x7CF )
  {
    ticket = proto::HomeOfflineMsgBin::ticket[abi:cxx11](offline_msg);
    if ( (unsigned __int8)std::string::empty(ticket) != 1 )
    {
      __for_range = proto::HomeOfflineMsgRedisData::recent_ticket_list((const proto::HomeOfflineMsgRedisData *const)(v3 + 80));
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        ticket_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator*(&__for_begin);
        v10 = proto::TicketTimeBin::ticket[abi:cxx11](ticket_bin);
        if ( std::operator==<char>(v10, ticket) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "getAndSetHomeRedisData",
            1411);
          v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"ticket: ");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, ticket);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v12,
                  (const char (*)[27])" has been sent! home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
          v7 = 1309;
          goto LABEL_21;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>::operator++(&__for_begin);
      }
    }
    new_index = proto::HomeOfflineMsgRedisData::last_index((const proto::HomeOfflineMsgRedisData *const)(v3 + 80)) + 1;
    proto::HomeOfflineMsgRedisData::set_last_index((proto::HomeOfflineMsgRedisData *const)(v3 + 80), new_index);
    now = common::tools::TimeUtils::getNow();
    if ( (unsigned __int8)std::string::empty(ticket) != 1 )
    {
      ticket_bin_0 = proto::HomeOfflineMsgRedisData::add_recent_ticket_list((proto::HomeOfflineMsgRedisData *const)(v3 + 80));
      proto::TicketTimeBin::set_enque_time(ticket_bin_0, now);
      proto::TicketTimeBin::set_ticket(ticket_bin_0, ticket);
    }
    new_offline_msg = proto::HomeOfflineMsgRedisData::add_offline_msg_list((proto::HomeOfflineMsgRedisData *const)(v3 + 80));
    proto::HomeOfflineMsgBin::operator=(new_offline_msg, offline_msg);
    proto::HomeOfflineMsgBin::set_enque_time(new_offline_msg, now);
    proto::HomeOfflineMsgBin::set_index(new_offline_msg, new_index);
    if ( RedisOpOfflineMsg::modifyHomeOfflineMsgDataWithTran(
           *(_DWORD *)(v3 + 32),
           (const proto::HomeOfflineMsgRedisData *)(v3 + 80),
           (common::midb::GetAndSetTranPtr *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "getAndSetHomeRedisData",
        1437);
      v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v27,
              (const char (*)[51])"modifyHomeOfflineMsgDataWithTran fails, home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = 5001;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_msg_handler.cpp",
      "getAndSetHomeRedisData",
      1399);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v27,
           (const char (*)[47])"offline_msg_list_size exceed limit, home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = 1308;
  }
LABEL_21:
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v3 + 48));
  proto::HomeOfflineMsgRedisData::~HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v3 + 80));
  result = v7;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1445: range 000000000E315276-000000000E3155E2
void __cdecl OfflineMsgHandler::notifyNewHomeOfflineMsg(OfflineMsgHandler *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // rax
  OfflineMsgService *v6; // r14
  unsigned __int64 v7; // rdx
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 packet_ptr:1446 64 24 11 notify:1452";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::notifyNewHomeOfflineMsg;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "notifyNewHomeOfflineMsg",
      1449);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    proto::NewHomeOfflineMsgNotify::NewHomeOfflineMsgNotify((proto::NewHomeOfflineMsgNotify *const)(v2 + 64));
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::NewHomeOfflineMsgNotify>(
      v5,
      (const proto::NewHomeOfflineMsgNotify *)(v2 + 64));
    v6 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setUserId(v8, home_uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setHomeUserId(v9, home_uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 3u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v13 = (unsigned __int64)(v12->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12->_vptr_NetworkMgrBase + 8);
    v14 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v13;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14(v12, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    proto::NewHomeOfflineMsgNotify::~NewHomeOfflineMsgNotify((proto::NewHomeOfflineMsgNotify *const)(v2 + 64));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v17 == (char *)v2 )
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
};

// Line 1463: range 000000000E3156B0-000000000E316200
int32_t __cdecl OfflineMsgHandler::onRemoveHomeOfflineMsgNotify(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  common::minet::Packet *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  void *const *it; // r14
  google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::const_iterator v23; // rax
  google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::const_iterator v24; // rax
  void *const *v25; // r14
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator v26; // rax
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-228h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-224h]
  google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin> *offline_msg_list; // [rsp+20h] [rbp-220h]
  google::protobuf::RepeatedPtrField<proto::TicketTimeBin> *recent_ticket_list; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream v47; // [rsp+30h] [rbp-210h] BYREF
  char v48[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 13 home_uid:1464 64 4 10 index:1478 80 4 8 ret:1486 96 4 14 list_size:1498 112 4 15 last"
                        "_index:1505 128 4 16 first_index:1506 144 4 12 rm_func:1520 160 4 9 pred:1530 176 8 9 iter:1524 "
                        "208 8 16 ticket_iter:1534 240 16 13 tran_ptr:1485 272 24 11 notify:1470 336 72 15 redis_data:1484";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onRemoveHomeOfflineMsgNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getHomeUserId(v5);
  if ( *(_DWORD *)(v2 + 48) )
  {
    proto::RemoveHomeOfflineMsgNotify::RemoveHomeOfflineMsgNotify((proto::RemoveHomeOfflineMsgNotify *const)(v2 + 272));
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getProto<proto::RemoveHomeOfflineMsgNotify>(
           v7,
           (proto::RemoveHomeOfflineMsgNotify *)(v2 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onRemoveHomeOfflineMsgNotify",
        1473);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v47, (const char (*)[15])"getProto fails");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 64) = proto::RemoveHomeOfflineMsgNotify::index((const proto::RemoveHomeOfflineMsgNotify *const)(v2 + 272));
      if ( *(_DWORD *)(v2 + 64) )
      {
        proto::HomeOfflineMsgRedisData::HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v2 + 336));
        *(_QWORD *)(v2 + 240) = 0LL;
        *(_QWORD *)(v2 + 248) = 0LL;
        *(_DWORD *)(v2 + 80) = RedisOpOfflineMsg::getHomeOfflineMsgDataWithTran(
                                 *(_DWORD *)(v2 + 48),
                                 (proto::HomeOfflineMsgRedisData *)(v2 + 336),
                                 (common::midb::GetAndSetTranPtr *)(v2 + 240));
        if ( *(_DWORD *)(v2 + 80) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "onRemoveHomeOfflineMsgNotify",
            1489);
          v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v47,
                 (const char (*)[43])"getHomeOfflineMsgWithTran fails home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v47);
          v6 = *(_DWORD *)(v2 + 80);
        }
        else if ( OfflineMsgHandler::checkHomeOfflineMsgData(
                    this,
                    *(_DWORD *)(v2 + 48),
                    (const proto::HomeOfflineMsgRedisData *)(v2 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "onRemoveHomeOfflineMsgNotify",
            1494);
          v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v47,
                 (const char (*)[42])"checkHomeOfflineMsgData fails, home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v47);
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(v2 + 96) = proto::HomeOfflineMsgRedisData::offline_msg_list_size((const proto::HomeOfflineMsgRedisData *const)(v2 + 336));
          if ( *(_DWORD *)(v2 + 96) )
          {
            *(_DWORD *)(v2 + 112) = proto::HomeOfflineMsgRedisData::last_index((const proto::HomeOfflineMsgRedisData *const)(v2 + 336));
            *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 112) - *(_DWORD *)(v2 + 96) + 1;
            if ( *(_DWORD *)(v2 + 64) >= *(_DWORD *)(v2 + 128) )
            {
              if ( *(_DWORD *)(v2 + 64) <= *(_DWORD *)(v2 + 112) )
              {
                offline_msg_list = proto::HomeOfflineMsgRedisData::mutable_offline_msg_list((proto::HomeOfflineMsgRedisData *const)(v2 + 336));
                *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 64);
                it = google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::cend(offline_msg_list).it_;
                v23.it_ = google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::cbegin(offline_msg_list).it_;
                *(google::protobuf::internal::RepeatedPtrIterator<const proto::HomeOfflineMsgBin> *)(v2 + 176) = std::find_if<google::protobuf::internal::RepeatedPtrIterator<proto::HomeOfflineMsgBin const>,OfflineMsgHandler::onRemoveHomeOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::HomeOfflineMsgBin const&)#1}>(v23, (google::protobuf::internal::RepeatedPtrIterator<const proto::HomeOfflineMsgBin>)it, *(OfflineMsgHandler::onRemoveHomeOfflineMsgNotify::<lambda(const proto::HomeOfflineMsgBin&)> *)(v2 + 144));
                v24.it_ = google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::cbegin(offline_msg_list).it_;
                google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::erase(
                  offline_msg_list,
                  v24,
                  *(google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::const_iterator *)(v2 + 176));
                now = common::tools::TimeUtils::getNow();
                recent_ticket_list = proto::HomeOfflineMsgRedisData::mutable_recent_ticket_list((proto::HomeOfflineMsgRedisData *const)(v2 + 336));
                *(_DWORD *)(v2 + 160) = now;
                v25 = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cend(recent_ticket_list).it_;
                v26.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cbegin(recent_ticket_list).it_;
                *(google::protobuf::internal::RepeatedPtrIterator<const proto::TicketTimeBin> *)(v2 + 208) = std::find_if<google::protobuf::internal::RepeatedPtrIterator<proto::TicketTimeBin const>,OfflineMsgHandler::onRemoveHomeOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::TicketTimeBin const&)#2}>(v26, (google::protobuf::internal::RepeatedPtrIterator<const proto::TicketTimeBin>)v25, *(OfflineMsgHandler::onRemoveHomeOfflineMsgNotify::<lambda(const proto::TicketTimeBin&)> *)(v2 + 160));
                v27.it_ = google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::cbegin(recent_ticket_list).it_;
                google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::erase(
                  recent_ticket_list,
                  v27,
                  *(google::protobuf::RepeatedPtrField<proto::TicketTimeBin>::const_iterator *)(v2 + 208));
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/offline_msg_handler.cpp",
                  "onRemoveHomeOfflineMsgNotify",
                  1537);
                v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v47,
                        (const char (*)[11])"home_uid: ");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v28,
                        (const unsigned int *)(v2 + 48));
                v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v29,
                        (const char (*)[17])" old list_size: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v2 + 96));
                v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v31,
                        (const char (*)[17])" new list_size: ");
                val = proto::HomeOfflineMsgRedisData::offline_msg_list_size((const proto::HomeOfflineMsgRedisData *const)(v2 + 336));
                v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &val);
                v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v33,
                        (const char (*)[15])" first_index: ");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        (const unsigned int *)(v2 + 128));
                v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v35,
                        (const char (*)[14])" last_index: ");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v2 + 112));
                v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" index: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::~MiLogStream(&v47);
                *(_DWORD *)(v2 + 80) = RedisOpOfflineMsg::modifyHomeOfflineMsgDataWithTran(
                                         *(_DWORD *)(v2 + 48),
                                         (const proto::HomeOfflineMsgRedisData *)(v2 + 336),
                                         (common::midb::GetAndSetTranPtr *)(v2 + 240));
                if ( *(_DWORD *)(v2 + 80) )
                {
                  common::milog::MiLogStream::create(
                    &v47,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/offline_msg_handler.cpp",
                    "onRemoveHomeOfflineMsgNotify",
                    1543);
                  v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          &v47,
                          (const char (*)[11])"home_uid: ");
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 48));
                  v41 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          v40,
                          (const char (*)[47])" modifyHomeOfflineMsgDataWithTran fails, ret: ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v41, (const int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v47);
                }
                v6 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/offline_msg_handler.cpp",
                  "onRemoveHomeOfflineMsgNotify",
                  1514);
                v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v47,
                        (const char (*)[11])"home_uid: ");
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v17,
                        (const unsigned int *)(v2 + 48));
                v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" index: ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v2 + 64));
                v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v20,
                        (const char (*)[14])" last_index: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 112));
                common::milog::MiLogStream::~MiLogStream(&v47);
                v6 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/offline_msg_handler.cpp",
                "onRemoveHomeOfflineMsgNotify",
                1509);
              v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      &v47,
                      (const char (*)[11])"home_uid: ");
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      (const unsigned int *)(v2 + 48));
              v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" index: ");
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v14,
                      (const unsigned int *)(v2 + 64));
              v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v15,
                      (const char (*)[15])" first_index: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 128));
              common::milog::MiLogStream::~MiLogStream(&v47);
              v6 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/offline_msg_handler.cpp",
              "onRemoveHomeOfflineMsgNotify",
              1501);
            v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v47,
                    (const char (*)[11])"home_uid: ");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" offline_msg_list empty");
            common::milog::MiLogStream::~MiLogStream(&v47);
            v6 = 0;
          }
        }
        std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 240));
        proto::HomeOfflineMsgRedisData::~HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v2 + 336));
      }
      else
      {
        v6 = 0;
      }
    }
    proto::RemoveHomeOfflineMsgNotify::~RemoveHomeOfflineMsgNotify((proto::RemoveHomeOfflineMsgNotify *const)(v2 + 272));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onRemoveHomeOfflineMsgNotify",
      1467);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v47, (const char (*)[15])"home_uid is 0!");
    common::milog::MiLogStream::~MiLogStream(&v47);
    v6 = -1;
  }
  result = v6;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 1520: range 000000000E3155E4-000000000E315646
bool __cdecl OfflineMsgHandler::onRemoveHomeOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::HomeOfflineMsgBin const&)#1}::operator()(
        const OfflineMsgHandler::onRemoveHomeOfflineMsgNotify::<lambda(const proto::HomeOfflineMsgBin&)> *const __closure,
        const proto::HomeOfflineMsgBin *offline_msg)
{
  uint32_t v2; // ecx

  v2 = proto::HomeOfflineMsgBin::index(offline_msg);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 > __closure->__index;
};

// Line 1530: range 000000000E315648-000000000E3156AE
bool __cdecl OfflineMsgHandler::onRemoveHomeOfflineMsgNotify(std::shared_ptr<common::minet::Packet>)::{lambda(proto::TicketTimeBin const&)#2}::operator()(
        const OfflineMsgHandler::onRemoveHomeOfflineMsgNotify::<lambda(const proto::TicketTimeBin&)> *const __closure,
        const proto::TicketTimeBin *ticket_bin)
{
  uint32_t v2; // ecx

  v2 = proto::TicketTimeBin::enque_time(ticket_bin) + 2592000;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 >= __closure->__now;
};

// Line 1551: range 000000000E316202-000000000E3164FE
int32_t __cdecl OfflineMsgHandler::onGetHomeOfflineMsgReq(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HomeOfflineMsg; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t HomeUserId; // esi
  OfflineMsgService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetHomeOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::GetHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::GetHomeOfflineMsgRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 req_ptr:1553 64 16 12 rsp_ptr:1553";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onGetHomeOfflineMsgReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetHomeOfflineMsgReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetHomeOfflineMsgReq const>(
         (const std::shared_ptr<const proto::GetHomeOfflineMsgReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onGetHomeOfflineMsgReq",
      1553);
    common::milog::MiLogStream::operator()(&v15, off_1BD97800);
    common::milog::MiLogStream::~MiLogStream(&v15);
    HomeOfflineMsg = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetHomeOfflineMsgReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHomeOfflineMsgReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetHomeOfflineMsgRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetHomeOfflineMsgRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetHomeOfflineMsgRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    HomeUserId = common::minet::Packet::getHomeUserId(v6);
    OfflineMsgHandler::getHomeOfflineMsg(this, HomeUserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineMsgService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetHomeOfflineMsgRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetHomeOfflineMsgRsp> *)(v2 + 64));
    HomeOfflineMsg = ServiceBase::sendRsp<proto::GetHomeOfflineMsgRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::GetHomeOfflineMsgRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::GetHomeOfflineMsgRsp>::~shared_ptr((std::shared_ptr<proto::GetHomeOfflineMsgRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetHomeOfflineMsgReq const>::~shared_ptr((std::shared_ptr<const proto::GetHomeOfflineMsgReq> *const)(v2 + 32));
  result = HomeOfflineMsg;
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

// Line 1560: range 000000000E316500-000000000E316AF7
void __fastcall OfflineMsgHandler::getHomeOfflineMsg(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::GetHomeOfflineMsgReq *req,
        proto::GetHomeOfflineMsgRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  proto::HomeOfflineMsgBin *v16; // rax
  int list_size; // [rsp+2Ch] [rbp-154h]
  google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin> *__for_range; // [rsp+40h] [rbp-140h]
  const proto::HomeOfflineMsgBin *msg; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-130h] BYREF
  char v25[272]; // [rsp+70h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 10 index:1561 64 4 15 last_index:1591 80 4 16 first_index:1592 96 4 13 home_uid:1559 112 "
                        "72 15 redis_data:1571";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::getHomeOfflineMsg;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 96) = home_uid;
  *(_DWORD *)(v4 + 48) = proto::GetHomeOfflineMsgReq::index(req);
  proto::GetHomeOfflineMsgRsp::set_last_index(rsp_0, *(_DWORD *)(v4 + 48));
  proto::GetHomeOfflineMsgRsp::set_retcode(rsp_0, -1);
  if ( *(_DWORD *)(v4 + 96) )
  {
    proto::HomeOfflineMsgRedisData::HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v4 + 112));
    if ( RedisOpOfflineMsg::getHomeOfflineMsgData(*(_DWORD *)(v4 + 96), (proto::HomeOfflineMsgRedisData *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "getHomeOfflineMsg",
        1575);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v24,
             (const char (*)[39])"getHomeOfflineMsgData fails home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else if ( OfflineMsgHandler::checkHomeOfflineMsgData(
                this,
                *(_DWORD *)(v4 + 96),
                (const proto::HomeOfflineMsgRedisData *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "getHomeOfflineMsg",
        1580);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v24,
             (const char (*)[42])"checkHomeOfflineMsgData fails, home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      list_size = proto::HomeOfflineMsgRedisData::offline_msg_list_size((const proto::HomeOfflineMsgRedisData *const)(v4 + 112));
      if ( list_size )
      {
        *(_DWORD *)(v4 + 64) = proto::HomeOfflineMsgRedisData::last_index((const proto::HomeOfflineMsgRedisData *const)(v4 + 112));
        *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 64) - list_size + 1;
        if ( (unsigned int)(*(_DWORD *)(v4 + 48) + 1) < *(_DWORD *)(v4 + 80)
          || (unsigned int)(*(_DWORD *)(v4 + 48) + 1) > *(_DWORD *)(v4 + 64) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/offline_msg_handler.cpp",
            "getHomeOfflineMsg",
            1596);
          v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v24, (const char (*)[11])"home_uid: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v4 + 96));
          v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" index: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])" first_index: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v4 + 80));
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])" last_index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        __for_range = proto::HomeOfflineMsgRedisData::offline_msg_list((const proto::HomeOfflineMsgRedisData *const)(v4 + 112));
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeOfflineMsgBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeOfflineMsgBin const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          msg = google::protobuf::internal::RepeatedPtrIterator<proto::HomeOfflineMsgBin const>::operator*(&__for_begin);
          if ( proto::HomeOfflineMsgBin::index(msg) > *(_DWORD *)(v4 + 48) )
          {
            v16 = proto::GetHomeOfflineMsgRsp::add_offline_msg_list(rsp_0);
            proto::HomeOfflineMsgBin::operator=(v16, msg);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeOfflineMsgBin const>::operator++(&__for_begin);
        }
        proto::GetHomeOfflineMsgRsp::set_retcode(rsp_0, 0);
      }
      else
      {
        proto::GetHomeOfflineMsgRsp::set_retcode(rsp_0, 0);
      }
    }
    proto::HomeOfflineMsgRedisData::~HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v4 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "getHomeOfflineMsg",
      1567);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v24, (const char (*)[15])"0 == home_uid!");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1614: range 000000000E316AF8-000000000E316E85
__int64 __fastcall OfflineMsgHandler::checkHomeOfflineMsgData(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::HomeOfflineMsgRedisData *redis_data)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  const proto::HomeOfflineMsgBin *msg; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 list_size:1615 48 4 15 last_index:1616 64 4 16 first_index:1622 80 4 8 idx:1623 96 4 13 home_uid:1613";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkHomeOfflineMsgData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = home_uid;
  *(_DWORD *)(v3 + 32) = proto::HomeOfflineMsgRedisData::offline_msg_list_size(redis_data);
  *(_DWORD *)(v3 + 48) = proto::HomeOfflineMsgRedisData::last_index(redis_data);
  if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 32) )
  {
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48) - *(_DWORD *)(v3 + 32) + 1;
    for ( *(_DWORD *)(v3 + 80) = 0; *(_DWORD *)(v3 + 80) < *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 80) )
    {
      msg = proto::HomeOfflineMsgRedisData::offline_msg_list(redis_data, *(_DWORD *)(v3 + 80));
      if ( proto::HomeOfflineMsgBin::index(msg) != *(_DWORD *)(v3 + 64) + *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/offline_msg_handler.cpp",
          "checkHomeOfflineMsgData",
          1628);
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v22, (const char (*)[10])"home_uid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" msg.index:");
        val = proto::HomeOfflineMsgBin::index(msg);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" first_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_msg_handler.cpp",
      "checkHomeOfflineMsgData",
      1619);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])"home_uid: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 96));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" last_index: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" list_size: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  if ( v23 == (char *)v3 )
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

// Line 1638: range 000000000E316E86-000000000E3171B4
int32_t __cdecl OfflineMsgHandler::onClearHomeOfflineMsgNotify(
        OfflineMsgHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-110h] BYREF
  char v12[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 home_uid:1639 48 16 13 tran_ptr:1642 80 72 15 redis_data:1641";
  *(_QWORD *)(v2 + 16) = OfflineMsgHandler::onClearHomeOfflineMsgNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getHomeUserId(v5);
  proto::HomeOfflineMsgRedisData::HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v2 + 80));
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  ret = RedisOpOfflineMsg::getHomeOfflineMsgDataWithTran(
          *(_DWORD *)(v2 + 32),
          (proto::HomeOfflineMsgRedisData *)(v2 + 80),
          (common::midb::GetAndSetTranPtr *)(v2 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "onClearHomeOfflineMsgNotify",
      1646);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v11,
           (const char (*)[43])"getHomeOfflineMsgWithTran fails home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = ret;
  }
  else
  {
    proto::HomeOfflineMsgRedisData::Clear((proto::HomeOfflineMsgRedisData *const)(v2 + 80));
    if ( RedisOpOfflineMsg::modifyHomeOfflineMsgDataWithTran(
           *(_DWORD *)(v2 + 32),
           (const proto::HomeOfflineMsgRedisData *)(v2 + 80),
           (common::midb::GetAndSetTranPtr *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onClearHomeOfflineMsgNotify",
        1654);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v11,
             (const char (*)[51])"modifyHomeOfflineMsgDataWithTran fails, home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v2 + 48));
  proto::HomeOfflineMsgRedisData::~HomeOfflineMsgRedisData((proto::HomeOfflineMsgRedisData *const)(v2 + 80));
  result = v7;
  if ( v12 == (char *)v2 )
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

// Line 1662: range 000000000E3171B6-000000000E31742B
__int64 __fastcall OfflineMsgHandler::checkSetClimateAreaTypeOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetClimateAreaTypeOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t v7; // r15d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1661";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetClimateAreaTypeOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config_.json_config_mgr;
  v7 = proto::SetClimateAreaTypeOp::climate_area_id(op);
  v8 = proto::SetClimateAreaTypeOp::scene_id(op);
  LOBYTE(p_json_config_mgr) = JsonConfigMgr::findClimateAreaConfig(p_json_config_mgr, v8, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( (_BYTE)p_json_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetClimateAreaTypeOp",
      1665);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v19,
           (const char (*)[39])"findClimateAreaConfig fails, scene_id:");
    val = proto::SetClimateAreaTypeOp::scene_id(op);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" climate_area_id:");
    v17 = proto::SetClimateAreaTypeOp::climate_area_id(op);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v17);
    v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 1673: range 000000000E31742C-000000000E31777A
__int64 __fastcall OfflineMsgHandler::checkSetFinishedParentQuestChildStateOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetFinishedParentQuestChildStateOp *op)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 quest_id:1674 48 4 10 state:1675 64 4 8 uid:1672";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetFinishedParentQuestChildStateOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 32) = proto::SetFinishedParentQuestChildStateOp::quest_id(op);
  *(_DWORD *)(v3 + 48) = proto::SetFinishedParentQuestChildStateOp::state(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v7 = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
         &v6->design_config_.txt_config_mgr.quest_config_mgr,
         *(_DWORD *)(v3 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetFinishedParentQuestChildStateOp",
      1678);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v21, (const char (*)[6])"uid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 401LL;
  }
  else if ( *(_DWORD *)(v3 + 48) == 3 || *(_DWORD *)(v3 + 48) == 4 )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetFinishedParentQuestChildStateOp",
      1683);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v21, (const char (*)[6])"uid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", quest_id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])", state:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  if ( v22 == (char *)v3 )
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

// Line 1690: range 000000000E31777C-000000000E3179C2
__int64 __fastcall OfflineMsgHandler::checkChangeMapAreaInfo(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ChangeMapAreaInfoOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1689";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkChangeMapAreaInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config_.txt_config_mgr.world_area_config_mgr;
  v7 = proto::ChangeMapAreaInfoOp::map_area_id(op);
  LOBYTE(p_world_area_config_mgr) = data::WorldAreaExcelConfigMgrBase::findMapAreaConfig(p_world_area_config_mgr, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( (_BYTE)p_world_area_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkChangeMapAreaInfo",
      1693);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"findMapAreaConfig fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 5LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 1701: range 000000000E3179C4-000000000E317D33
__int64 __fastcall OfflineMsgHandler::checkSetLevel1AreaExplorePointOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetLevel1AreaExplorePointOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  WorldAreaExcelConfigMgr *v12; // r13
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // r13
  unsigned int v16; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  std::string val; // [rsp+60h] [rbp-90h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1700";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetLevel1AreaExplorePointOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  Config::getConfig();
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config_.txt_config_mgr.world_area_config_mgr;
  v7 = proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
  LOBYTE(p_world_area_config_mgr) = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(p_world_area_config_mgr, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( (_BYTE)p_world_area_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetLevel1AreaExplorePointOp",
      1704);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v18,
           (const char (*)[40])"findFirstLevelWorldAreaConfig fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    Config::getConfig();
    v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config_.txt_config_mgr.world_area_config_mgr;
    v13 = proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
    LOBYTE(v12) = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(v12, v13) == 0;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( (_BYTE)v12 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetLevel1AreaExplorePointOp",
        1709);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[41])"findSceneIdByLevel1AreaId fail, area_id:");
      v16 = proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v16);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
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

// Line 1716: range 000000000E317D34-000000000E318468
__int64 __fastcall OfflineMsgHandler::checkSetCodexOpenOrCloseOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetCodexOpenOrCloseOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  CodexExcelConfigMgr *p_codex_config_mgr; // r14
  uint32_t v7; // eax
  CodexExcelConfigMgr *v8; // r14
  uint32_t v9; // eax
  CodexExcelConfigMgr *v10; // r14
  uint32_t v11; // eax
  CodexExcelConfigMgr *v12; // r14
  uint32_t v13; // eax
  CodexExcelConfigMgr *v14; // r14
  uint32_t v15; // eax
  CodexExcelConfigMgr *v16; // r14
  uint32_t v17; // eax
  CodexExcelConfigMgr *v18; // r14
  uint32_t v19; // eax
  CodexExcelConfigMgr *v20; // r14
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool is_config_found; // [rsp+2Bh] [rbp-C5h]
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-B0h] BYREF
  std::string output; // [rsp+60h] [rbp-90h] BYREF
  char v37[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1715";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetCodexOpenOrCloseOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  switch ( proto::SetCodexOpenOrCloseOp::codex_type(op) )
  {
    case 1u:
      Config::getConfig();
      p_codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v7 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findQuestCodexExcelConfig(p_codex_config_mgr, v7) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 2u:
      Config::getConfig();
      v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v9 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findWeaponCodexExcelConfig(v8, v9) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 3u:
      Config::getConfig();
      v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v11 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(v10, v11) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 4u:
      Config::getConfig();
      v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v13 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findMaterialCodexExcelConfig(v12, v13) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 5u:
      Config::getConfig();
      v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v15 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findBooksCodexExcelConfig(v14, v15) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 6u:
      Config::getConfig();
      v16 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v17 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findPushTipsCodexExcelConfig(v16, v17) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 7u:
      Config::getConfig();
      v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v19 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findViewCodexExcelConfig(v18, v19) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
      goto LABEL_14;
    case 8u:
      Config::getConfig();
      v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config_.txt_config_mgr.codex_config_mgr;
      v21 = proto::SetCodexOpenOrCloseOp::codex_id(op);
      is_config_found = data::CodexExcelConfigMgrBase::findReliquaryCodexExcelConfig(v20, v21) != 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v34);
LABEL_14:
      if ( !is_config_found )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkSetCodexOpenOrCloseOp",
          1750);
        v28 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v35,
                (const char (*)[28])"codex config not found! op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &output);
        v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 32));
        std::string::~string(&output);
        common::milog::MiLogStream::~MiLogStream(&v35);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetCodexOpenOrCloseOp",
        1745);
      v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v35,
              (const char (*)[19])"unkown codex_type:");
      val = proto::SetCodexOpenOrCloseOp::codex_type(op);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v23, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
      v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &output);
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
      std::string::~string(&output);
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = 0xFFFFFFFFLL;
      break;
  }
  if ( v37 == (char *)v3 )
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

// Line 1758: range 000000000E31846A-000000000E318C3B
__int64 __fastcall OfflineMsgHandler::checkGroupLinkOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::GroupLinkOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::GroupLinkOpType v6; // eax
  ActivityGroupLinksExcelConfigMgr *v7; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r14
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  ActivityGroupLinksExcelConfigMgr *v17; // r14
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // r14
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  unsigned int ret; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v33; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-B0h] BYREF
  std::string val; // [rsp+60h] [rbp-90h] BYREF
  char v36[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1757";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkGroupLinkOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  ret = -1;
  v6 = proto::GroupLinkOp::op_type(op);
  if ( v6 == GROUP_LINK_OP_BUNDLE_UNREGISTER )
  {
    Config::getConfig();
    p_activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config_.txt_config_mgr.activity_group_links_config_mgr;
    v23 = proto::GroupLinkOp::group_bundle_id(op);
    LOBYTE(p_activity_group_links_config_mgr) = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                                                  p_activity_group_links_config_mgr,
                                                  v23) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( (_BYTE)p_activity_group_links_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGroupLinkOp",
        1791);
      v24 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v34,
              (const char (*)[42])"findGroupLinksBundleExcelConfig fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &val);
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      ret = 0;
    }
    goto LABEL_21;
  }
  if ( v6 > GROUP_LINK_OP_BUNDLE_UNREGISTER )
    goto LABEL_20;
  if ( v6 == GROUP_LINK_OP_BUNDLE_REGISTER )
  {
    Config::getConfig();
    v7 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config_.txt_config_mgr.activity_group_links_config_mgr;
    v8 = proto::GroupLinkOp::group_bundle_id(op);
    LOBYTE(v7) = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(v7, v8) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( (_BYTE)v7 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGroupLinkOp",
        1766);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v34,
             (const char (*)[42])"findGroupLinksBundleExcelConfig fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      Config::getConfig();
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config_.txt_config_mgr.new_activity_config_mgr;
      v13 = proto::GroupLinkOp::activity_id(op);
      LOBYTE(p_new_activity_config_mgr) = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                                            p_new_activity_config_mgr,
                                            v13) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v33);
      if ( (_BYTE)p_new_activity_config_mgr )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkGroupLinkOp",
          1771);
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v34,
                (const char (*)[37])"findNewActivityExcelConfig fail, op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      else
      {
        ret = 0;
      }
    }
    goto LABEL_21;
  }
  if ( v6 == GROUP_LINK_OP_BUNDLE_FINISH )
  {
    Config::getConfig();
    v17 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config_.txt_config_mgr.activity_group_links_config_mgr;
    v18 = proto::GroupLinkOp::group_bundle_id(op);
    LOBYTE(v17) = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(v17, v18) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( (_BYTE)v17 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkGroupLinkOp",
        1781);
      v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v34,
              (const char (*)[42])"findGroupLinksBundleExcelConfig fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &val);
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      ret = 0;
    }
  }
  else
  {
LABEL_20:
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_msg_handler.cpp",
      "checkGroupLinkOp",
      1799);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v34, (const char (*)[16])"error op_type: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &val);
    v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
LABEL_21:
  result = ret;
  if ( v36 == (char *)v3 )
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

// Line 1807: range 000000000E318C58-000000000E319616
__int64 __fastcall OfflineMsgHandler::checkRemoveInvalidMapMarksOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::RemoveInvalidMapMarksOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const proto::FloatPairBin *v6; // rax
  const proto::FloatPairBin *v7; // rax
  const proto::FloatPairBin *v8; // rax
  const proto::FloatPairBin *v9; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const proto::FloatPairBin *v18; // rax
  float v19; // xmm0_4
  const proto::FloatPairBin *v20; // rax
  float v21; // xmm0_4
  const proto::FloatPairBin *v22; // rax
  float v23; // xmm0_4
  const proto::FloatPairBin *v24; // rax
  float v25; // xmm0_4
  char v26; // al
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  float v40; // [rsp+14h] [rbp-14Ch]
  float v41; // [rsp+14h] [rbp-14Ch]
  std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > >::hasher __hf; // [rsp+39h] [rbp-127h] BYREF
  std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > >::key_equal __eql; // [rsp+3Ah] [rbp-126h] BYREF
  std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > __a; // [rsp+3Bh] [rbp-125h] BYREF
  std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > >::key_type __x; // [rsp+3Ch] [rbp-124h] BYREF
  std::__detail::_Node_iterator_base<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange>,false> __y; // [rsp+40h] [rbp-120h] BYREF
  const OfflineMsgHandler::checkRemoveInvalidMapMarksOp::SceneMapMarkCoordinateRange *config; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v49; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  std::initializer_list<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > __l; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-C0h]
  __int64 v53; // [rsp+A8h] [rbp-B8h]
  __int64 v54; // [rsp+B0h] [rbp-B0h]
  __int64 v55; // [rsp+B8h] [rbp-A8h]
  __int64 v56; // [rsp+C0h] [rbp-A0h]
  int v57; // [rsp+C8h] [rbp-98h]
  char v58[144]; // [rsp+D0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1806 64 8 9 iter:1859";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkRemoveInvalidMapMarksOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  if ( !(_BYTE)`guard variable for'OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map
    && __cxa_guard_acquire(&`guard variable for'OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map) )
  {
    __l._M_array = (std::initializer_list<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> >::iterator)0xC606600040400000LL;
    __l._M_len = 0xC5EA600045F6E000LL;
    v52 = 0x40A0000045B86000LL;
    v53 = 0x45480000C5098000LL;
    v54 = 0x452F0000C4E10000LL;
    v55 = 0xC509800040E00000LL;
    v56 = 0xC4E1000045480000LL;
    v57 = 1160708096;
    std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>::allocator(&__a);
    std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>>::unordered_map(
      (std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > > *const)&OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map,
      (std::initializer_list<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> >)__PAIR128__(3LL, &__l),
      0LL,
      &__hf,
      &__eql,
      &__a);
    __cxa_guard_release(&`guard variable for'OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>>::~unordered_map,
      (void *)&OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map,
      &_dso_handle);
    std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>::~allocator(&__a);
  }
  v6 = proto::RemoveInvalidMapMarksOp::x_range(op);
  v40 = proto::FloatPairBin::first(v6);
  v7 = proto::RemoveInvalidMapMarksOp::x_range(op);
  if ( v40 >= proto::FloatPairBin::second(v7)
    || (v8 = proto::RemoveInvalidMapMarksOp::z_range(op),
        v41 = proto::FloatPairBin::first(v8),
        v9 = proto::RemoveInvalidMapMarksOp::z_range(op),
        v41 >= proto::FloatPairBin::second(v9)) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkRemoveInvalidMapMarksOp",
      1854);
    v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v49,
            (const char (*)[26])"invalid coordinate range:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __x = (float)(int)proto::RemoveInvalidMapMarksOp::scene_id(op);
    *(std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange> > >::const_iterator *)(v3 + 64) = std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>>::find(&OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map, &__x);
    __y._M_cur = std::unordered_map<float,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange,std::hash<float>,std::equal_to<float>,std::allocator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>>>::end(&OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::config_scene_coordinate_range_map)._M_cur;
    if ( std::__detail::operator==<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange>,false> *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/offline_msg_handler.cpp",
        "checkRemoveInvalidMapMarksOp",
        1862);
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v49,
              (const char (*)[22])"invalid scene_id, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v49);
      result = 552LL;
    }
    else
    {
      config = &std::__detail::_Node_const_iterator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(unsigned int,proto::RemoveInvalidMapMarksOp const&)::SceneMapMarkCoordinateRange>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<float const,OfflineMsgHandler::checkRemoveInvalidMapMarksOp(uint32_t,const proto::RemoveInvalidMapMarksOp&)::SceneMapMarkCoordinateRange>,false,false> *const)(v3 + 64))->second;
      v18 = proto::RemoveInvalidMapMarksOp::x_range(op);
      v19 = proto::FloatPairBin::first(v18);
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config);
      }
      if ( v19 > config->min_x )
        goto LABEL_27;
      v20 = proto::RemoveInvalidMapMarksOp::x_range(op);
      v21 = proto::FloatPairBin::second(v20);
      if ( *(_BYTE *)(((unsigned __int64)&config->max_x >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->max_x >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->max_x);
      }
      if ( config->max_x > v21 )
        goto LABEL_27;
      v22 = proto::RemoveInvalidMapMarksOp::z_range(op);
      v23 = proto::FloatPairBin::first(v22);
      if ( *(_BYTE *)(((unsigned __int64)&config->min_z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->min_z);
      }
      if ( v23 > config->min_z )
        goto LABEL_27;
      v24 = proto::RemoveInvalidMapMarksOp::z_range(op);
      v25 = proto::FloatPairBin::second(v24);
      if ( *(_BYTE *)(((unsigned __int64)&config->max_z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->max_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->max_z);
      }
      if ( config->max_z <= v25 )
        v26 = 0;
      else
LABEL_27:
        v26 = 1;
      if ( v26 )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/offline_msg_handler.cpp",
          "checkRemoveInvalidMapMarksOp",
          1872);
        v27 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v49,
                (const char (*)[28])"invalid coordinate range, {");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
        v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &val);
        v29 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v28, (const char (*)[3])"} ");
        v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v29,
                (const char (*)[22])"config_range: {min_x:");
        v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, &config->min_x);
        v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" max_x:");
        v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, &config->max_x);
        v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" min_z:");
        v35 = common::milog::MiLogStream::operator<<<float,(float *)0>(v34, &config->min_z);
        v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])" max_z:");
        v37 = common::milog::MiLogStream::operator<<<float,(float *)0>(v36, &config->max_z);
        v38 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v37, (const char (*)[3])"} ");
        v39 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v38, (const char (*)[5])"uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 48));
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  if ( v58 == (char *)v3 )
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

// Line 1882: range 000000000E319618-000000000E319764
int32_t __cdecl OfflineMsgHandler::checkRecalculateAreaExplorePointOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::RecalculateAreaExplorePointOp *op)
{
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  const data::WorldAreaConfig *world_area_config_ptr; // [rsp+28h] [rbp-68h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-50h] BYREF
  std::string val; // [rsp+60h] [rbp-30h] BYREF

  Config::getConfig();
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config_.txt_config_mgr.world_area_config_mgr;
  v4 = proto::RecalculateAreaExplorePointOp::area_id(op);
  world_area_config_ptr = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(p_world_area_config_mgr, v4);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( world_area_config_ptr )
    return 0;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkRecalculateAreaExplorePointOp",
    1886);
  v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v10,
         (const char (*)[40])"findFirstLevelWorldAreaConfig fail, op:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 565;
};

// Line 1893: range 000000000E319766-000000000E319DAB
int32_t __cdecl OfflineMsgHandler::checkProcSceneTagOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ProcSceneTagOp *op)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v11; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // [rsp+17h] [rbp-109h]
  proto::SceneTagOpType op_type; // [rsp+3Ch] [rbp-E4h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+40h] [rbp-E0h]
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 scene_id:1894 64 4 17 scene_tag_id:1895";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkProcSceneTagOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::ProcSceneTagOp::scene_id(op);
  *(_DWORD *)(v3 + 64) = proto::ProcSceneTagOp::scene_tag_id(op);
  op_type = proto::ProcSceneTagOp::op_type(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                       &v6->design_config_.txt_config_mgr.scene_config_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( scene_config_ptr )
  {
    Config::getConfig();
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                             &v9->design_config_.txt_config_mgr.scene_config_mgr,
                             *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( scene_tag_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&scene_tag_config_ptr->scene_id);
      }
      if ( scene_tag_config_ptr->scene_id == *(_DWORD *)(v3 + 48) )
      {
        v11 = 0;
        Config::getConfig();
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
        v17 = 0;
        if ( !SceneExcelConfigMgr::isPlayerWorldScene(
                &v12->design_config_.txt_config_mgr.scene_config_mgr,
                *(_DWORD *)(v3 + 48)) )
        {
          Config::getConfig();
          v11 = 1;
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
          if ( !SceneExcelConfigMgr::isPersistentDungeonScene(
                  &v13->design_config_.txt_config_mgr.scene_config_mgr,
                  *(_DWORD *)(v3 + 48)) )
            v17 = 1;
        }
        if ( v11 )
          std::shared_ptr<Config>::~shared_ptr(&v23);
        std::shared_ptr<Config>::~shared_ptr(&v22);
        if ( v17 )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkProcSceneTagOp",
            1921);
          v14 = common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(&v24, (const char (*)[94])byte_1BD9BEE0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v3 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v15,
                  (const char (*)[17])" ,scene_tag_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = -1;
        }
        else if ( op_type == SCENE_TAG_OP_ADD || op_type == SCENE_TAG_OP_DEL )
        {
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/offline_msg_handler.cpp",
            "checkProcSceneTagOp",
            1927);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"op_type invalid");
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkProcSceneTagOp",
          1914);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"scene_id not match");
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkProcSceneTagOp",
        1908);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v24,
              (const char (*)[42])"findSceneTagConfig failed, scene_tag_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkProcSceneTagOp",
      1901);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v24,
           (const char (*)[38])"findSceneExcelConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v3 )
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

// Line 1935: range 000000000E319DAC-000000000E31A15B
__int64 __fastcall OfflineMsgHandler::checkPassHomeSceneArrangementAuditOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::PassHomeSceneArrangementAuditOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  data::SceneType scene_type; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 module_id:1936 48 4 13 scene_id:1942 64 4 8 uid:1934";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkPassHomeSceneArrangementAuditOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 32) = proto::PassHomeSceneArrangementAuditOp::module_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  v7 = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
         &v6->design_config_.txt_config_mgr.home_config_mgr,
         *(_DWORD *)(v3 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkPassHomeSceneArrangementAuditOp",
      1939);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v20,
           (const char (*)[56])"findHomeworldModuleExcelConfig return null, module_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::PassHomeSceneArrangementAuditOp::scene_id(op);
    Config::getConfig();
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    scene_type = SceneExcelConfigMgr::getSceneTypeBySceneId(
                   &v12->design_config_.txt_config_mgr.scene_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    Config::getConfig();
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v13 = !SceneExcelConfigMgr::isHomeScene(scene_type);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkPassHomeSceneArrangementAuditOp",
        1946);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v20,
              (const char (*)[36])"scene id not home scene. scene id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
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

// Line 1953: range 000000000E31A15C-000000000E31A50B
__int64 __fastcall OfflineMsgHandler::checkFailHomeSceneArrangementAuditOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::FailHomeSceneArrangementAuditOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  data::SceneType scene_type; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 module_id:1954 48 4 13 scene_id:1960 64 4 8 uid:1952";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkFailHomeSceneArrangementAuditOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 32) = proto::FailHomeSceneArrangementAuditOp::module_id(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  v7 = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
         &v6->design_config_.txt_config_mgr.home_config_mgr,
         *(_DWORD *)(v3 + 32)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkFailHomeSceneArrangementAuditOp",
      1957);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v20,
           (const char (*)[56])"findHomeworldModuleExcelConfig return null, module_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::FailHomeSceneArrangementAuditOp::scene_id(op);
    Config::getConfig();
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    scene_type = SceneExcelConfigMgr::getSceneTypeBySceneId(
                   &v12->design_config_.txt_config_mgr.scene_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    Config::getConfig();
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v13 = !SceneExcelConfigMgr::isHomeScene(scene_type);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkFailHomeSceneArrangementAuditOp",
        1964);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v20,
              (const char (*)[36])"scene id not home scene. scene id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
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

// Line 1971: range 000000000E31A50C-000000000E31A913
__int64 __fastcall OfflineMsgHandler::checkFailHomeModulesArrangementAuditOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::FailHomeModulesArrangementAuditOp *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 module_id:1978 64 4 8 uid:1970 80 48 18 module_id_set:1977";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkFailHomeModulesArrangementAuditOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 64) = uid;
  if ( proto::FailHomeModulesArrangementAuditOp::is_all_module(op) )
  {
    v6 = 0;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
    __for_range = proto::FailHomeModulesArrangementAuditOp::module_id_list(op);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 48) = *__for_begin;
      v7 = std::set<unsigned int>::insert(
             (std::set<unsigned int> *const)(v3 + 80),
             (const std::set<unsigned int>::value_type *)(v3 + 48));
      if ( !v7.second )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkFailHomeModulesArrangementAuditOp",
          1982);
        v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v22,
               (const char (*)[34])"module_id duplicated, module_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = -1;
        goto LABEL_16;
      }
      Config::getConfig();
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      v12 = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
              &v11->design_config_.txt_config_mgr.home_config_mgr,
              *(_DWORD *)(v3 + 48)) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkFailHomeModulesArrangementAuditOp",
          1987);
        v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v22,
                (const char (*)[56])"findHomeworldModuleExcelConfig return null, module_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = -1;
        goto LABEL_16;
      }
      ++__for_begin;
    }
    v6 = 0;
LABEL_16:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  }
  result = v6;
  if ( v23 == (char *)v3 )
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

// Line 1996: range 000000000E31A914-000000000E31AB3F
__int64 __fastcall OfflineMsgHandler::checkPersistentDungeonBySceneId(
        OfflineMsgHandler *const this,
        uint32_t uid,
        uint32_t scene_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1995 64 4 13 scene_id:1995";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkPersistentDungeonBySceneId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = scene_id;
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v7 = !SceneExcelConfigMgr::isPersistentDungeonScene(
          &v6->design_config_.txt_config_mgr.scene_config_mgr,
          *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkPersistentDungeonBySceneId",
      1999);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v14, (const char (*)[34])off_1BD9C260);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 2006: range 000000000E31AB40-000000000E31AC57
int32_t __cdecl OfflineMsgHandler::checkLevelTagChangeOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::LevelTagChangeOp *op)
{
  LevelTagExcelConfigMgr *p_level_tag_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_level_tag_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config_.txt_config_mgr.level_tag_config_mgr;
  v4 = proto::LevelTagChangeOp::level_tag_id(op);
  LOBYTE(p_level_tag_config_mgr) = data::LevelTagExcelConfigMgrBase::findLevelTagExcelConfig(p_level_tag_config_mgr, v4) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( !(_BYTE)p_level_tag_config_mgr )
    return 0;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkLevelTagChangeOp",
    2009);
  v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v10,
         (const char (*)[47])"findLevelTagExcelConfig failed, level_tag_id: ");
  val = proto::LevelTagChangeOp::level_tag_id(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return -1;
};

// Line 2017: range 000000000E31AC58-000000000E31B137
__int64 __fastcall OfflineMsgHandler::checkPersistentDungeonAndWayPointBySceneId(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ResetPlayerWayPointInPersistentDungeonOp *op)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r15
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::_Self __x; // [rsp+20h] [rbp-110h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::_Self __y; // [rsp+28h] [rbp-108h] BYREF
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 scene_id:2018 48 4 17 way_point_id:2024 64 4 8 uid:2016 80 48 18 way_point_map:2027";
  *(_QWORD *)(v4 + 16) = OfflineMsgHandler::checkPersistentDungeonAndWayPointBySceneId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  *(_DWORD *)(v4 + 32) = proto::ResetPlayerWayPointInPersistentDungeonOp::scene_id(op);
  Config::getConfig();
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  v8 = !SceneExcelConfigMgr::isPersistentDungeonScene(
          &v7->design_config_.txt_config_mgr.scene_config_mgr,
          *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkPersistentDungeonAndWayPointBySceneId",
      2021);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v26, (const char (*)[34])off_1BD9C260);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v3 = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = proto::ResetPlayerWayPointInPersistentDungeonOp::way_point_id(op);
    if ( !*(_DWORD *)(v4 + 48) )
      goto LABEL_13;
    std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v4 + 80));
    Config::getConfig();
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    v13 = JsonConfigMgr::findAllScenePoint<data::DungeonWayPoint>(
            &v12->design_config_.json_config_mgr,
            *(_DWORD *)(v4 + 32),
            (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *)(v4 + 80)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkPersistentDungeonAndWayPointBySceneId",
        2030);
      v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v26,
              (const char (*)[35])"findAllScenePoint fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v3 = -1;
      v15 = 0;
    }
    else
    {
      __y._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::end((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v4 + 80))._M_node;
      __x._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::find(
                      (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v4 + 80),
                      (const std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::key_type *)(v4 + 48))._M_node;
      if ( std::operator==(&__x, &__y) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkPersistentDungeonAndWayPointBySceneId",
          2036);
        v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v26,
                (const char (*)[20])"invalid way point: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", scene_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v4 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v3 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
    }
    std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::~map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v4 + 80));
    if ( v15 == 1 )
LABEL_13:
      v3 = 0;
  }
  result = v3;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2044: range 000000000E31B138-000000000E31B24F
int32_t __cdecl OfflineMsgHandler::checkExhibitionSetOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ExhibitionSetOp *op)
{
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config_.txt_config_mgr.exhibition_config_mgr;
  v4 = proto::ExhibitionSetOp::exhibition_id(op);
  LOBYTE(p_exhibition_config_mgr) = data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(
                                      p_exhibition_config_mgr,
                                      v4) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( !(_BYTE)p_exhibition_config_mgr )
    return 0;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkExhibitionSetOp",
    2047);
  v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
         &v10,
         (const char (*)[56])"findPlayerExhibitionExcelConfig failed, exhibition_id: ");
  val = proto::ExhibitionSetOp::exhibition_id(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return -1;
};

// Line 2054: range 000000000E31B250-000000000E31B5A4
int32_t __cdecl OfflineMsgHandler::checkSetAvatarExtraPropOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetAvatarExtraPropOp *op)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  AvatarExtraPropExcelConfigMgr *p_avatar_extra_prop_config_mgr; // rbx
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rbx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-50h] BYREF
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  data::AvatarExtraPropExcelConfig *extra_prop_excel_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config_.txt_config_mgr.avatar_config_mgr;
  v4 = proto::SetAvatarExtraPropOp::avatar_id(op);
  LOBYTE(p_avatar_config_mgr) = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, v4) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( (_BYTE)p_avatar_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetAvatarExtraPropOp",
      2057);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v21,
           (const char (*)[42])"findAvatarExcelConfig failed, avatar_id: ");
    val = proto::SetAvatarExtraPropOp::avatar_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return -1;
  }
  else
  {
    Config::getConfig();
    p_avatar_extra_prop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config_.txt_config_mgr.avatar_extra_prop_config_mgr;
    v8 = proto::SetAvatarExtraPropOp::extra_prop_id(op);
    extra_prop_excel_config_ptr = data::AvatarExtraPropExcelConfigMgrBase::findAvatarExtraPropExcelConfig(
                                    p_avatar_extra_prop_config_mgr,
                                    v8);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( extra_prop_excel_config_ptr )
    {
      v10 = proto::SetAvatarExtraPropOp::extra_prop_count(op);
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_excel_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_excel_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&extra_prop_excel_config_ptr->max_count);
      }
      if ( v10 <= extra_prop_excel_config_ptr->max_count )
      {
        return 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_msg_handler.cpp",
          "checkSetAvatarExtraPropOp",
          2068);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v21,
                (const char (*)[26])"invalid extra_prop_count:");
        v17 = proto::SetAvatarExtraPropOp::extra_prop_count(op);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v17);
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", max_count:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &extra_prop_excel_config_ptr->max_count);
        v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v14,
                (const char (*)[18])", extra_prop_id: ");
        val = proto::SetAvatarExtraPropOp::extra_prop_id(op);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetAvatarExtraPropOp",
        2063);
      v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v21,
             (const char (*)[55])"findAvatarExtraPropExcelConfig failed, extra_prop_id: ");
      val = proto::SetAvatarExtraPropOp::extra_prop_id(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      return -1;
    }
  }
};

// Line 2075: range 000000000E31B5A6-000000000E31B5DA
int32_t __cdecl OfflineMsgHandler::checkAddItemWithLimit(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AddItemWithLimitOp *op)
{
  const proto::AddItemOp *v3; // rdx

  v3 = proto::AddItemWithLimitOp::add_item_op(op);
  return OfflineMsgHandler::checkAddItem(this, uid, v3);
};

// Line 2080: range 000000000E31B5DC-000000000E31B912
int32_t __cdecl OfflineMsgHandler::checkSetGadgetChainLevel(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetGadgetChainLevelOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  data::GadgetChainExcelConfig *gadgetchain_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 gadgetchain_id:2081 64 4 22 gadgetchain_level:2082";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetGadgetChainLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::SetGadgetChainLevelOp::gadgetchain_id(op);
  *(_DWORD *)(v3 + 64) = proto::SetGadgetChainLevelOp::gadgetchain_level(op);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  gadgetchain_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(
                             &v6->design_config_.txt_config_mgr.gadget_config_mgr,
                             *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( gadgetchain_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadgetchain_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadgetchain_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gadgetchain_config_ptr->max_level);
    }
    if ( gadgetchain_config_ptr->max_level >= *(_DWORD *)(v3 + 64) )
    {
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetGadgetChainLevel",
        2091);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v17,
              (const char (*)[17])"gadgetchian id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" level: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" invalid");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetGadgetChainLevel",
      2086);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"gadgetchian id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
  }
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

// Line 2098: range 000000000E31B914-000000000E31BAF9
int32_t __cdecl OfflineMsgHandler::checkSetDailyTaskVarOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetDailyTaskVarOp *op)
{
  uint32_t v3; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rbx
  uint32_t v9; // eax
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  v3 = proto::SetDailyTaskVarOp::index(op) + 1;
  Config::getConfig();
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  LOBYTE(v3) = v3 > ConstValueExcelConfigMgr::getDailyTaskVarNum(&v4->design_config_.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( (_BYTE)v3 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetDailyTaskVarOp",
      2101);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v13, (const char (*)[9])" index: ");
    val = proto::SetDailyTaskVarOp::index(op);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" too large");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    Config::getConfig();
    p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config_.txt_config_mgr.daily_task_config_mgr;
    v9 = proto::SetDailyTaskVarOp::task_id(op);
    LOBYTE(p_daily_task_config_mgr) = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                        p_daily_task_config_mgr,
                                        v9) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( (_BYTE)p_daily_task_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetDailyTaskVarOp",
        2106);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"task id not exist");
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 2113: range 000000000E31BAFA-000000000E31BC36
int32_t __cdecl OfflineMsgHandler::checkAvatarRenameAuditResultOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AvatarRenameAuditResultOp *op)
{
  RenameExcelConfigMgr *p_rename_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-60h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-50h] BYREF
  std::string val; // [rsp+50h] [rbp-30h] BYREF

  Config::getConfig();
  p_rename_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config_.txt_config_mgr.rename_config_mgr;
  v4 = proto::AvatarRenameAuditResultOp::rename_id(op);
  LOBYTE(p_rename_config_mgr) = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(p_rename_config_mgr, v4) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( !(_BYTE)p_rename_config_mgr )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkAvatarRenameAuditResultOp",
    2116);
  v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v9,
         (const char (*)[32])"cannot find rename config, op: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 2123: range 000000000E31BC38-000000000E31BF2D
int32_t __cdecl OfflineMsgHandler::checkResetAvatarRenameOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::ResetAvatarRenameOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  RenameExcelConfigMgr *p_rename_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v11; // rax
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 reason:2129";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkResetAvatarRenameOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  Config::getConfig();
  p_rename_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config_.txt_config_mgr.rename_config_mgr;
  v7 = proto::ResetAvatarRenameOp::avatar_id(op);
  LOBYTE(p_rename_config_mgr) = RenameExcelConfigMgr::findAvatarRenameExcelConfigByAvatarId(p_rename_config_mgr, v7) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( (_BYTE)p_rename_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkResetAvatarRenameOp",
      2126);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v14,
           (const char (*)[51])"cannot find rename config by given avatar id, op: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = proto::ResetAvatarRenameOp::reason(op);
    if ( !proto::ResetAvatarRenameReason_IsValid(*(_DWORD *)(v3 + 32)) || *(_DWORD *)(v3 + 32) <= 1u )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkResetAvatarRenameOp",
        2133);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[30])"reason is not valid, reason: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 2140: range 000000000E31BF2E-000000000E31C046
int32_t __cdecl OfflineMsgHandler::checkAddFinishedTalkOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::AddFinishedTalkOp *op)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::TalkExcelConfig *talk_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config_.txt_config_mgr.quest_config_mgr;
  v4 = proto::AddFinishedTalkOp::talk_id(op);
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(p_quest_config_mgr, v4);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( talk_config_ptr )
    return 0;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkAddFinishedTalkOp",
    2144);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v11,
         (const char (*)[43])"[TALK] findTalkExcelConfig fails, talk_id:");
  val = proto::AddFinishedTalkOp::talk_id(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return -1;
};

// Line 2150: range 000000000E31C048-000000000E31C160
int32_t __cdecl OfflineMsgHandler::checkDelFinishedTalkOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DelFinishedTalkOp *op)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::TalkExcelConfig *talk_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  Config::getConfig();
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config_.txt_config_mgr.quest_config_mgr;
  v4 = proto::DelFinishedTalkOp::talk_id(op);
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(p_quest_config_mgr, v4);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( talk_config_ptr )
    return 0;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/offline_msg_handler.cpp",
    "checkDelFinishedTalkOp",
    2154);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v11,
         (const char (*)[43])"[TALK] findTalkExcelConfig fails, talk_id:");
  val = proto::DelFinishedTalkOp::talk_id(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return -1;
};

// Line 2161: range 000000000E31C162-000000000E31C46D
__int64 __fastcall OfflineMsgHandler::checkSetPushTipsState(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetPushTipsStateOp *op)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  WatcherExcelConfigMgr *watcher_config_mgr; // [rsp+20h] [rbp-C0h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 push_tips_id:2162 48 4 20 push_tips_state:2163 64 4 8 uid:2160";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetPushTipsState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 32) = proto::SetPushTipsStateOp::push_tips_id(op);
  *(_DWORD *)(v3 + 48) = proto::SetPushTipsStateOp::push_tips_state(op);
  Config::getConfig();
  watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config_.txt_config_mgr.watcher_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( data::WatcherExcelConfigMgrBase::findPushTipsConfig(watcher_config_mgr, *(_DWORD *)(v3 + 32)) )
  {
    if ( !proto::PushTipsState_IsValid(*(_DWORD *)(v3 + 48)) || !*(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetPushTipsState",
        2173);
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v17, (const char (*)[7])off_1BD9CCA0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v12,
              (const char (*)[50])" checkSetPushTipsState fail. can state invalid : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetPushTipsState",
      2168);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v17, (const char (*)[7])off_1BD9CCA0);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           v7,
           (const char (*)[57])" checkSetPushTipsState fail. can not find PushTips id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 1505LL;
  }
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

// Line 2180: range 000000000E31C46E-000000000E31C810
int32_t __cdecl OfflineMsgHandler::checkSetPlayerGCGMatchScore(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::SetPlayerGCGMatchScoreOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-C0h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 match_id:2181 64 4 10 score:2182";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkSetPlayerGCGMatchScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::SetPlayerGCGMatchScoreOp::match_id(op);
  *(_DWORD *)(v3 + 64) = proto::SetPlayerGCGMatchScoreOp::score(op);
  Config::getConfig();
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config_.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v3 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->min_score);
    }
    if ( config_ptr->min_score > *(_DWORD *)(v3 + 64) )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->max_score);
    }
    if ( config_ptr->max_score >= *(_DWORD *)(v3 + 64) )
    {
      result = 0;
    }
    else
    {
LABEL_12:
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkSetPlayerGCGMatchScore",
        2192);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v19,
             (const char (*)[26])"invalid score. match_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" score:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" min_score:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config_ptr->min_score);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" max_score:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config_ptr->max_score);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkSetPlayerGCGMatchScore",
      2187);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v19,
           (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
  if ( v20 == (char *)v3 )
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

// Line 2199: range 000000000E31C812-000000000E31CAD4
int32_t __cdecl OfflineMsgHandler::checkDeletePlayerGCGCardOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DeletePlayerGCGCardOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+20h] [rbp-C0h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 card_id:2200 64 4 12 del_num:2201";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDeletePlayerGCGCardOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::DeletePlayerGCGCardOp::card_id(op);
  *(_DWORD *)(v3 + 64) = proto::DeletePlayerGCGCardOp::del_num(op);
  Config::getConfig();
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config_.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v3 + 48)) )
  {
    if ( *(_DWORD *)(v3 + 64) )
    {
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDeletePlayerGCGCardOp",
        2211);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"invalid del_num:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDeletePlayerGCGCardOp",
      2206);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v14,
           (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
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

// Line 2218: range 000000000E31CAD6-000000000E31CDDF
int32_t __cdecl OfflineMsgHandler::checkDeletePlayerGCGCardFaceOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DeletePlayerGCGCardFaceOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+30h] [rbp-A0h]
  const data::GCGCardFaceExcelConfig *config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-80h] BYREF
  char v17[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 card_face_id:2219";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDeletePlayerGCGCardFaceOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::DeletePlayerGCGCardFaceOp::card_face_id(op);
  Config::getConfig();
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config_.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGCardFaceExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v3 + 32));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->card_face_type);
    }
    if ( config_ptr->card_face_type )
    {
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDeletePlayerGCGCardFaceOp",
        2229);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v16,
             (const char (*)[39])"invalid card_face_type. card_face_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" card_face_type:");
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->card_face_type);
      }
      val = config_ptr->card_face_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDeletePlayerGCGCardFaceOp",
      2224);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v16,
           (const char (*)[48])"findGCGCardFaceExcelConfig fail. card_face_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
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

// Line 2236: range 000000000E31CDE0-000000000E31D06A
int32_t __cdecl OfflineMsgHandler::checkDeletePlayerGCGCardBackOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DeletePlayerGCGCardBackOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::GCGDeckBackExcelConfig *config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 card_back_id:2237";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDeletePlayerGCGCardBackOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::DeletePlayerGCGCardBackOp::card_back_id(op);
  Config::getConfig();
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config_.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckBackExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v3 + 32));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->id);
    }
    if ( config_ptr->id )
    {
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDeletePlayerGCGCardBackOp",
        2247);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v13,
             (const char (*)[23])"invalid card_back_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDeletePlayerGCGCardBackOp",
      2242);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v13,
           (const char (*)[48])"findGCGCardBackExcelConfig fail. card_back_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
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

// Line 2254: range 000000000E31D06C-000000000E31D2F6
int32_t __cdecl OfflineMsgHandler::checkDeletePlayerGCGDeckFieldOp(
        OfflineMsgHandler *const this,
        uint32_t uid,
        const proto::DeletePlayerGCGDeckFieldOp *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::GCGDeckFieldExcelConfig *config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 deck_field_id:2255";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::checkDeletePlayerGCGDeckFieldOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::DeletePlayerGCGDeckFieldOp::deck_field_id(op);
  Config::getConfig();
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config_.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckFieldExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v3 + 32));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->id);
    }
    if ( config_ptr->id )
    {
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "checkDeletePlayerGCGDeckFieldOp",
        2265);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v13,
             (const char (*)[24])"invalid deck_field_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_msg_handler.cpp",
      "checkDeletePlayerGCGDeckFieldOp",
      2260);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v13,
           (const char (*)[50])"findGCGDeckFieldExcelConfig fail. deck_field_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
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

// Line 2272: range 000000000E31D2F8-000000000E31D904
void __fastcall OfflineMsgHandler::onPostSendHomeOfflineMsg(
        OfflineMsgHandler *const this,
        uint32_t home_uid,
        const proto::HomeOfflineMsgBin *msg_bin)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  proto::HomeOfflineMsgBin::DetailCase v7; // eax
  bool is_all_module; // al
  google::protobuf::RepeatedField<unsigned int> *v9; // r14
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::uint32 v11; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  google::protobuf::uint32 v19; // eax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  unsigned int v30; // [rsp+28h] [rbp-168h] BYREF
  unsigned int v31; // [rsp+2Ch] [rbp-164h] BYREF
  unsigned int v32; // [rsp+30h] [rbp-160h] BYREF
  int v33; // [rsp+34h] [rbp-15Ch] BYREF
  proto::OfflineMsgBin *msg; // [rsp+38h] [rbp-158h]
  const proto::HomeRestoreDefaultsSceneArrangementOp *op_0; // [rsp+40h] [rbp-150h]
  proto::FailHomeSceneArrangementAuditOp *op_data_0; // [rsp+48h] [rbp-148h]
  const proto::HomeRestoreDefaultsArrangementOp *op; // [rsp+50h] [rbp-140h]
  proto::FailHomeModulesArrangementAuditOp *op_data; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-130h] BYREF
  std::string val; // [rsp+80h] [rbp-110h] BYREF
  char v41[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 home_uid:2271 64 32 8 req:2273 128 32 8 rsp:2276";
  *(_QWORD *)(v3 + 16) = OfflineMsgHandler::onPostSendHomeOfflineMsg;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = home_uid;
  proto::SendOfflineMsgReq::SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v3 + 64));
  msg = proto::SendOfflineMsgReq::mutable_msg((proto::SendOfflineMsgReq *const)(v3 + 64));
  v6 = proto::HomeOfflineMsgBin::ticket[abi:cxx11](msg_bin);
  proto::OfflineMsgBin::set_ticket(msg, v6);
  proto::SendOfflineMsgRsp::SendOfflineMsgRsp((proto::SendOfflineMsgRsp *const)(v3 + 128));
  v7 = proto::HomeOfflineMsgBin::detail_case(msg_bin);
  if ( v7 == kRestoreDefaultsArrangementOp )
  {
    op = proto::HomeOfflineMsgBin::restore_defaults_arrangement_op(msg_bin);
    op_data = proto::OfflineMsgBin::mutable_fail_home_modules_arrangement_audit_op(msg);
    is_all_module = proto::HomeRestoreDefaultsArrangementOp::is_all_module(op);
    proto::FailHomeModulesArrangementAuditOp::set_is_all_module(op_data, is_all_module);
    v9 = proto::FailHomeModulesArrangementAuditOp::mutable_module_id_list(op_data);
    v10 = proto::HomeRestoreDefaultsArrangementOp::module_id_list(op);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(v9, v10);
    v11 = proto::HomeRestoreDefaultsArrangementOp::version(op);
    proto::FailHomeModulesArrangementAuditOp::set_version(op_data, v11);
    OfflineMsgHandler::sendOfflineMsg(
      this,
      *(_DWORD *)(v3 + 48),
      (const proto::SendOfflineMsgReq *)(v3 + 64),
      (proto::SendOfflineMsgRsp *)(v3 + 128));
    if ( proto::SendOfflineMsgRsp::retcode((const proto::SendOfflineMsgRsp *const)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onPostSendHomeOfflineMsg",
        2290);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v39,
              (const char (*)[25])"fail audit home modules:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, op_data);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" for uid:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])" return with err:");
      v33 = proto::SendOfflineMsgRsp::retcode((const proto::SendOfflineMsgRsp *const)(v3 + 128));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v16, &v33);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
  }
  else if ( v7 == kRestoreDefaultsSceneArrangementOp )
  {
    op_0 = proto::HomeOfflineMsgBin::restore_defaults_scene_arrangement_op(msg_bin);
    op_data_0 = proto::OfflineMsgBin::mutable_fail_home_scene_arrangement_audit_op(msg);
    v17 = proto::HomeRestoreDefaultsSceneArrangementOp::module_id(op_0);
    proto::FailHomeSceneArrangementAuditOp::set_module_id(op_data_0, v17);
    v18 = proto::HomeRestoreDefaultsSceneArrangementOp::scene_id(op_0);
    proto::FailHomeSceneArrangementAuditOp::set_scene_id(op_data_0, v18);
    v19 = proto::HomeRestoreDefaultsSceneArrangementOp::version(op_0);
    proto::FailHomeSceneArrangementAuditOp::set_version(op_data_0, v19);
    OfflineMsgHandler::sendOfflineMsg(
      this,
      *(_DWORD *)(v3 + 48),
      (const proto::SendOfflineMsgReq *)(v3 + 64),
      (proto::SendOfflineMsgRsp *)(v3 + 128));
    if ( proto::SendOfflineMsgRsp::retcode((const proto::SendOfflineMsgRsp *const)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_msg_handler.cpp",
        "onPostSendHomeOfflineMsg",
        2304);
      v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[24])"fail audit home module:");
      v30 = proto::HomeRestoreDefaultsSceneArrangementOp::module_id(op_0);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v30);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" scene:");
      v31 = proto::HomeRestoreDefaultsSceneArrangementOp::scene_id(op_0);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v31);
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" version:");
      v32 = proto::HomeRestoreDefaultsSceneArrangementOp::version(op_0);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v32);
      v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" for uid:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
      v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v27,
              (const char (*)[18])" return with err:");
      v33 = proto::SendOfflineMsgRsp::retcode((const proto::SendOfflineMsgRsp *const)(v3 + 128));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &v33);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
  }
  proto::SendOfflineMsgRsp::~SendOfflineMsgRsp((proto::SendOfflineMsgRsp *const)(v3 + 128));
  proto::SendOfflineMsgReq::~SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v3 + 64));
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
