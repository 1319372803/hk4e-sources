// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/mail_handler.cpp

// Line 27: range 000000000DEBC140-000000000DEBCCF1
int32_t __cdecl MailHandler::addPacketFuncToMap(
        MailHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  MailHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  MailHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MailHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  MailHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  MailHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  MailHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  MailHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  MailHandler **v26; // r8
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
  MailHandler *thisa; // [rsp+78h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+8Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v40; // [rsp+90h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+98h] [rbp-88h] BYREF
  int (*__f[2])(MailHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+A0h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,const std::_Placeholder<1>&>::type v43; // [rsp+B0h] [rbp-70h] BYREF
  common::milog::MiLogStream v44; // [rsp+D0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10372;
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
      "./src/handler/mail_handler.cpp",
      "addPacketFuncToMap",
      29);
    common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10372LL);
    common::milog::MiLogStream::~MiLogStream(&v44);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(MailHandler *, std::shared_ptr<common::minet::Packet>))MailHandler::onAddRedisMailReq;
    __f[1] = 0LL;
    std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
      &v43,
      __f,
      (MailHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10372;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
      v7,
      &v43);
    __x = 10312;
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
        "./src/handler/mail_handler.cpp",
        "addPacketFuncToMap",
        30);
      common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10312LL);
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(MailHandler *, std::shared_ptr<common::minet::Packet>))MailHandler::onDelRedisMailReq;
      __f[1] = 0LL;
      std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
        &v43,
        __f,
        (MailHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10312;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
        v10,
        &v43);
      __x = 10307;
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
          "./src/handler/mail_handler.cpp",
          "addPacketFuncToMap",
          31);
        common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10307LL);
        common::milog::MiLogStream::~MiLogStream(&v44);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v29.m128i_i64[0] = (__int64)MailHandler::onGetRedisMailReq;
        v29.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v29);
        std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
          &v43,
          __f,
          (MailHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10307;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
          v13,
          &v43);
        __x = 10381;
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
            "./src/handler/mail_handler.cpp",
            "addPacketFuncToMap",
            32);
          common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10381LL);
          common::milog::MiLogStream::~MiLogStream(&v44);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v30.m128i_i64[0] = (__int64)MailHandler::onUpdateRedisMailReq;
          v30.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v30);
          std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
            &v43,
            __f,
            (MailHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10381;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
            v16,
            &v43);
          __x = 10382;
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
              "./src/handler/mail_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10382LL);
            common::milog::MiLogStream::~MiLogStream(&v44);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v31.m128i_i64[0] = (__int64)MailHandler::onGetRedisMailTransactionStatusReq;
            v31.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v31);
            std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
              &v43,
              __f,
              (MailHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10382;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
              v19,
              &v43);
            __x = 10339;
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
                "./src/handler/mail_handler.cpp",
                "addPacketFuncToMap",
                34);
              common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10339LL);
              common::milog::MiLogStream::~MiLogStream(&v44);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v32.m128i_i64[0] = (__int64)MailHandler::onClearUpRedisMailNotify;
              v32.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v32);
              std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                &v43,
                __f,
                (MailHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10339;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                v22,
                &v43);
              __x = 10353;
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
                  "./src/handler/mail_handler.cpp",
                  "addPacketFuncToMap",
                  35);
                common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10353LL);
                common::milog::MiLogStream::~MiLogStream(&v44);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v33.m128i_i64[0] = (__int64)MailHandler::onCleanRedisMailNotify;
                v33.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v33);
                std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                  &v43,
                  __f,
                  (MailHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v23,
                  v24);
                __x = 10353;
                v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
                  v25,
                  &v43);
                __x = 10322;
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
                    "./src/handler/mail_handler.cpp",
                    "addPacketFuncToMap",
                    36);
                  common::milog::MiLogStream::operator()(&v44, off_1BB4F780, 10322LL);
                  common::milog::MiLogStream::~MiLogStream(&v44);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v34.m128i_i64[0] = (__int64)MailHandler::onResendRedisMailReq;
                  v34.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v34);
                  std::bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>),MailHandler*,std::_Placeholder<1> const&>(
                    &v43,
                    __f,
                    (MailHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v26,
                    v27);
                  __x = 10322;
                  v28 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MailHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MailHandler*,std::_Placeholder<1>)>>(
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

// Line 42: range 000000000DEBCCF2-000000000DEBD1C3
int32_t __cdecl MailHandler::onAddRedisMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::MailAddOpType v6; // edx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::MailAddOpType v8; // eax
  common::minet::Packet *v9; // rax
  uint32_t SourceAppId; // edi
  google::protobuf::int32 v11; // edx
  google::protobuf::int32 v12; // edx
  proto::MailAddOpType v13; // eax
  MailService *v14; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+1Ch] [rbp-E4h]
  std::__shared_ptr_access<const proto::AddRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-E0h]
  proto::AddRedisMailRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::AddRedisMailRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:43 64 16 10 rsp_ptr:43";
  *(_QWORD *)(v2 + 16) = MailHandler::onAddRedisMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddRedisMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddRedisMailReq const>(
         (const std::shared_ptr<const proto::AddRedisMailReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onAddRedisMailReq",
      43);
    common::milog::MiLogStream::operator()(&v22, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AddRedisMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AddRedisMailRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AddRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AddRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AddRedisMailRsp::set_retcode(rsp_0, -1);
    proto::AddRedisMailRsp::set_retcode(rsp_0, -1);
    v6 = proto::AddRedisMailReq::op_type(req);
    proto::AddRedisMailRsp::set_op_type(rsp_0, v6);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v7);
    v8 = proto::AddRedisMailReq::op_type(req);
    if ( v8 == MAIL_ADD_OP_GAME )
    {
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      SourceAppId = common::minet::Packet::getSourceAppId(v9);
      v11 = MailHandler::addRedisMailByGame(this, uid, req, rsp_0, SourceAppId);
      proto::AddRedisMailRsp::set_retcode(rsp_0, v11);
    }
    else if ( v8 == MAIL_ADD_OP_MUIP )
    {
      v12 = MailHandler::addRedisMailByMuip(this, uid, req, rsp_0);
      proto::AddRedisMailRsp::set_retcode(rsp_0, v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onAddRedisMailReq",
        63);
      v13 = proto::AddRedisMailReq::op_type(req);
      common::milog::MiLogStream::operator()(&v22, "invalid op_type=%u", (unsigned int)v13);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    v14 = ServiceBox::findService<MailService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::AddRedisMailRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::AddRedisMailRsp> *)(v2 + 64));
    LOBYTE(v14) = ServiceBase::sendRsp<proto::AddRedisMailRsp>(v14, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::AddRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v14 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onAddRedisMailReq",
        72);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v22,
        (const char (*)[23])"[MAIL] send rsp failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v5 = -1;
    }
    else
    {
      v5 = proto::AddRedisMailRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::AddRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::AddRedisMailRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AddRedisMailReq const>::~shared_ptr((std::shared_ptr<const proto::AddRedisMailReq> *const)(v2 + 32));
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 79: range 000000000DEBD1C4-000000000DEBD6C3
int32_t __cdecl MailHandler::onDelRedisMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::MailDelOpType v6; // edx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::MailDelOpType v8; // eax
  proto::MailDelOpType v9; // eax
  MailService *v10; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+1Ch] [rbp-E4h]
  std::__shared_ptr_access<const proto::DelRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-E0h]
  proto::DelRedisMailRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::DelRedisMailRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:80 64 16 10 rsp_ptr:80";
  *(_QWORD *)(v2 + 16) = MailHandler::onDelRedisMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DelRedisMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DelRedisMailReq const>(
         (const std::shared_ptr<const proto::DelRedisMailReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onDelRedisMailReq",
      80);
    common::milog::MiLogStream::operator()(&v17, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
    goto LABEL_21;
  }
  req = std::__shared_ptr_access<proto::DelRedisMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DelRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  common::tools::perf::make_shared<proto::DelRedisMailRsp>();
  rsp_0 = std::__shared_ptr_access<proto::DelRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DelRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto::DelRedisMailRsp::set_retcode(rsp_0, -1);
  proto::DelRedisMailRsp::set_retcode(rsp_0, -1);
  v6 = proto::DelRedisMailReq::op_type(req);
  proto::DelRedisMailRsp::set_op_type(rsp_0, v6);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  v8 = proto::DelRedisMailReq::op_type(req);
  if ( v8 == MAIL_DEL_OP_MUIP_BY_TICKET )
  {
    MailHandler::delRedisMailByTicketByMuip(this, uid, req, rsp_0);
  }
  else
  {
    if ( v8 > MAIL_DEL_OP_MUIP_BY_TICKET )
    {
LABEL_16:
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onDelRedisMailReq",
        111);
      v9 = proto::DelRedisMailReq::op_type(req);
      common::milog::MiLogStream::operator()(&v17, "invalid op_type=%u", (unsigned int)v9);
      common::milog::MiLogStream::~MiLogStream(&v17);
      goto LABEL_17;
    }
    switch ( v8 )
    {
      case MAIL_DEL_OP_MUIP:
        MailHandler::delRedisMailByMuip(this, uid, req, rsp_0);
        break;
      case MAIL_DEL_OP_CLIENT:
        MailHandler::delRedisMailByClient(this, uid, req, rsp_0);
        break;
      case MAIL_DEL_OP_GAME:
        MailHandler::delRedisMailByGame(this, uid, req, rsp_0);
        break;
      default:
        goto LABEL_16;
    }
  }
LABEL_17:
  v10 = ServiceBox::findService<MailService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
  std::shared_ptr<proto::DelRedisMailRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::DelRedisMailRsp> *)(v2 + 64));
  LOBYTE(v10) = ServiceBase::sendRsp<proto::DelRedisMailRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr) != 0;
  std::shared_ptr<proto::DelRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  if ( (_BYTE)v10 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onDelRedisMailReq",
      120);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v17, (const char (*)[23])"[MAIL] send rsp failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    v5 = proto::DelRedisMailRsp::retcode(rsp_0);
  }
  std::shared_ptr<proto::DelRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::DelRedisMailRsp> *const)(v2 + 64));
LABEL_21:
  std::shared_ptr<proto::DelRedisMailReq const>::~shared_ptr((std::shared_ptr<const proto::DelRedisMailReq> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 127: range 000000000DEBD6C4-000000000DEBE985
int32_t __cdecl MailHandler::onGetRedisMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::int32 v5; // r14d
  proto::MailGetOPType v6; // eax
  proto::MailGetType type; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto::MailGetType v9; // eax
  proto::MailGetType v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  bool is_collectible_mail_transfered; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  google::protobuf::RepeatedPtrField<std::string > *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  time_t Now; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rax
  proto::GetRedisMailRsp *v30; // rax
  proto::GetRedisMailRsp *v31; // rax
  google::protobuf::RepeatedPtrField<std::string > *v32; // rax
  google::protobuf::uint32 v33; // eax
  int v34; // eax
  std::string *v35; // rax
  google::protobuf::RepeatedPtrField<std::string > *v37; // rax
  const std::shared_ptr<proto::GetRedisMailRsp> *v38; // rax
  proto::GetRedisMailRsp *v39; // r14
  google::protobuf::uint32 v40; // eax
  MailService *v41; // r14
  unsigned int v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  unsigned int v48; // eax
  unsigned int v50; // eax
  uint32_t v51; // eax
  google::protobuf::RepeatedPtrField<std::string > *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  MailService *v60; // r14
  int32_t result; // eax
  int v63; // [rsp+24h] [rbp-41Ch] BYREF
  int v64; // [rsp+28h] [rbp-418h] BYREF
  int val; // [rsp+2Ch] [rbp-414h] BYREF
  uint32_t rsp_size; // [rsp+30h] [rbp-410h]
  uint32_t i; // [rsp+34h] [rbp-40Ch]
  uint32_t mail_data_size; // [rsp+38h] [rbp-408h]
  uint32_t hide_num_once; // [rsp+3Ch] [rbp-404h]
  uint32_t hide_num; // [rsp+40h] [rbp-400h]
  uint32_t max_batch_mail_count; // [rsp+44h] [rbp-3FCh]
  std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::iterator __for_begin; // [rsp+48h] [rbp-3F8h] BYREF
  std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::iterator __for_end; // [rsp+50h] [rbp-3F0h] BYREF
  const proto::GetRedisMailReq *req; // [rsp+58h] [rbp-3E8h]
  proto::GetRedisMailRsp *rsp_0; // [rsp+60h] [rbp-3E0h]
  std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *__for_range; // [rsp+68h] [rbp-3D8h]
  std::string *mail_str_ptr; // [rsp+70h] [rbp-3D0h]
  std::string *mail_str; // [rsp+78h] [rbp-3C8h]
  std::shared_ptr<proto::GetRedisMailRsp> p_rsp_ptr; // [rsp+80h] [rbp-3C0h] BYREF
  common::milog::MiLogStream v80; // [rsp+90h] [rbp-3B0h] BYREF
  char v81[912]; // [rsp+B0h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 7 uid:133 48 16 11 req_ptr:128 80 16 11 rsp_ptr:128 112 16 17 collect_timer:155 144 16 1"
                        "7 batch_rsp_ptr:207 176 16 17 batch_rsp_ptr:188 208 24 17 batch_rsp_vec:165 272 24 21 all_mail_s"
                        "tr_list:167 336 24 12 cur_list:175 400 392 23 transaction_sstream:170";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetRedisMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -218959360;
  v4[536862732] = 62194;
  v4[536862744] = -218103808;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRedisMailReq>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::GetRedisMailReq const>(
         (const std::shared_ptr<const proto::GetRedisMailReq> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailReq",
      128);
    common::milog::MiLogStream::operator()(&v80, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v5 = -1;
    goto LABEL_63;
  }
  req = std::__shared_ptr_access<proto::GetRedisMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  common::tools::perf::make_shared<proto::GetRedisMailRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::GetRedisMailRsp::set_retcode(rsp_0, -1);
  proto::GetRedisMailRsp::set_retcode(rsp_0, -1);
  v6 = proto::GetRedisMailReq::op_type(req);
  proto::GetRedisMailRsp::set_op_type(rsp_0, v6);
  type = proto::GetRedisMailReq::get_type(req);
  proto::GetRedisMailRsp::set_get_type(rsp_0, type);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v8);
  v9 = proto::GetRedisMailReq::get_type(req);
  if ( v9 == MAIL_GET_BY_ID )
  {
    MailHandler::getRedisMailById(this, *(_DWORD *)(v2 + 32), req, rsp_0);
  }
  else if ( v9 <= MAIL_GET_NONE || (unsigned int)(v9 - 2) > 1 )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailReq",
      149);
    v10 = proto::GetRedisMailReq::get_type(req);
    common::milog::MiLogStream::operator()(&v80, "unknown get type %u", (unsigned int)v10);
    common::milog::MiLogStream::~MiLogStream(&v80);
  }
  else
  {
    MailHandler::getAllRedisMail(this, *(_DWORD *)(v2 + 32), req, rsp_0);
  }
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
  MailHandler::updateMailCollectState(this, *(_DWORD *)(v2 + 32), req, rsp_0);
  common::milog::MiLogStream::create(
    &v80,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/mail_handler.cpp",
    "onGetRedisMailReq",
    157);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v80, (const unsigned int *)(v2 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v11,
          (const char (*)[31])" updateMailCollectState cost: ");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 112));
  v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
  v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])", is_transfered:");
  is_collectible_mail_transfered = proto::GetRedisMailReq::is_collectible_mail_transfered(req);
  common::milog::MiLogStream::operator<<(v14, is_collectible_mail_transfered);
  common::milog::MiLogStream::~MiLogStream(&v80);
  Config::getConfig();
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
  if ( *(_BYTE *)(((unsigned __int64)&v16->mail_message_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->mail_message_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    v16 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->mail_message_max_size);
  }
  mail_data_size = SAFE_MULTIPLY<unsigned int,int>(v16->mail_message_max_size, 1024);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
  if ( proto::GetRedisMailReq::op_type(req) == MAIL_GET_OP_CLIENT_MULTI_BATCH && !proto::GetRedisMailRsp::retcode(rsp_0) )
  {
    Config::getConfig();
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&v18->max_batch_mail_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v18 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->max_batch_mail_count >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&v18->max_batch_mail_count);
    }
    max_batch_mail_count = v18->max_batch_mail_count;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
    std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::vector((std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208));
    google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField((google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272));
    v19 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](rsp_0);
    google::protobuf::RepeatedPtrField<std::string>::Swap(
      (google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272),
      v19);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 400);
    v20 = std::ostream::operator<<(v2 + 416, *(unsigned int *)(v2 + 32));
    v21 = std::operator<<<std::char_traits<char>>(v20, 45LL);
    Now = common::tools::TimeUtils::getNow();
    v23 = std::ostream::operator<<(v21, Now);
    v24 = std::operator<<<std::char_traits<char>>(v23, 45LL);
    *(_DWORD *)(__readfsqword(0) - 10920) = *(_DWORD *)(__readfsqword(0) - 10920) + 1;
    std::ostream::operator<<(v24, *(unsigned int *)(__readfsqword(0) - 10920));
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v80, v2 + 400);
    proto::GetRedisMailRsp::set_transaction(rsp_0, (std::string *)&v80);
    std::string::~string(&v80);
    proto::GetRedisMailRsp::set_page_index(rsp_0, 1u);
    google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField((google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336));
    rsp_size = google::protobuf::MessageLite::ByteSize(rsp_0);
    for ( i = 0; ; ++i )
    {
      v25 = google::protobuf::RepeatedPtrField<std::string>::size((const google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272));
      if ( i >= v25 )
        break;
      mail_str_ptr = google::protobuf::RepeatedPtrField<std::string>::Mutable(
                       (google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272),
                       i);
      if ( mail_str_ptr )
      {
        mail_str = mail_str_ptr;
        if ( !google::protobuf::RepeatedPtrField<std::string>::empty((const google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336)) )
        {
          v26 = google::protobuf::RepeatedPtrField<std::string>::size((const google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336));
          if ( max_batch_mail_count <= v26
            || (v27 = rsp_size, v28 = std::string::size(mail_str), v27 + v28 + 1 >= (unsigned __int64)mail_data_size) )
          {
            common::tools::perf::make_shared<proto::GetRedisMailRsp>();
            v30 = std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
            proto::GetRedisMailRsp::CopyFrom(v30, rsp_0);
            v31 = std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
            v32 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](v31);
            google::protobuf::RepeatedPtrField<std::string>::Swap(
              v32,
              (google::protobuf::RepeatedPtrField<std::string > *)(v2 + 336));
            std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::push_back(
              (std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208),
              (const std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::value_type *)(v2 + 176));
            v33 = proto::GetRedisMailRsp::page_index(rsp_0);
            proto::GetRedisMailRsp::set_page_index(rsp_0, v33 + 1);
            rsp_size = google::protobuf::MessageLite::ByteSize(rsp_0);
            std::shared_ptr<proto::GetRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::GetRedisMailRsp> *const)(v2 + 176));
          }
        }
        v34 = std::string::size(mail_str);
        rsp_size += v34 + 1;
        v35 = google::protobuf::RepeatedPtrField<std::string>::Add((google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336));
        std::string::swap(v35, mail_str);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mail_handler.cpp",
          "onGetRedisMailReq",
          182);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v80,
          (const char (*)[21])"mail_str_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
    }
    if ( google::protobuf::RepeatedPtrField<std::string>::empty((const google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272))
      || !google::protobuf::RepeatedPtrField<std::string>::empty((const google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336)) )
    {
      v37 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](rsp_0);
      google::protobuf::RepeatedPtrField<std::string>::Swap(
        v37,
        (google::protobuf::RepeatedPtrField<std::string > *)(v2 + 336));
      std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::push_back(
        (std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208),
        (const std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::value_type *)(v2 + 80));
    }
    __for_range = (std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *)(v2 + 208);
    __for_begin._M_current = std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::begin((std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<proto::GetRedisMailRsp> *,std::vector<std::shared_ptr<proto::GetRedisMailRsp>>>(
              &__for_begin,
              &__for_end) )
    {
      v38 = __gnu_cxx::__normal_iterator<std::shared_ptr<proto::GetRedisMailRsp> *,std::vector<std::shared_ptr<proto::GetRedisMailRsp>>>::operator*(&__for_begin);
      std::shared_ptr<proto::GetRedisMailRsp>::shared_ptr(
        (std::shared_ptr<proto::GetRedisMailRsp> *const)(v2 + 144),
        v38);
      if ( std::operator==<proto::GetRedisMailRsp>(0LL, (const std::shared_ptr<proto::GetRedisMailRsp> *)(v2 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mail_handler.cpp",
          "onGetRedisMailReq",
          211);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v80,
          (const char (*)[22])"batch_rsp_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
      else
      {
        v39 = std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v40 = std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::size((const std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208));
        proto::GetRedisMailRsp::set_total_page_count(v39, v40);
        v41 = ServiceBox::findService<MailService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v2 + 176),
          p_packet_ptr);
        std::shared_ptr<proto::GetRedisMailRsp>::shared_ptr(
          &p_rsp_ptr,
          (const std::shared_ptr<proto::GetRedisMailRsp> *)(v2 + 144));
        ServiceBase::sendRsp<proto::GetRedisMailRsp>(v41, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 176));
        std::shared_ptr<proto::GetRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176));
      }
      std::shared_ptr<proto::GetRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::GetRedisMailRsp> *const)(v2 + 144));
      __gnu_cxx::__normal_iterator<std::shared_ptr<proto::GetRedisMailRsp> *,std::vector<std::shared_ptr<proto::GetRedisMailRsp>>>::operator++(&__for_begin);
    }
    google::protobuf::RepeatedPtrField<std::string>::~RepeatedPtrField((google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 336));
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 400);
    google::protobuf::RepeatedPtrField<std::string>::~RepeatedPtrField((google::protobuf::RepeatedPtrField<std::string > *const)(v2 + 272));
    std::vector<std::shared_ptr<proto::GetRedisMailRsp>>::~vector((std::vector<std::shared_ptr<proto::GetRedisMailRsp>> *const)(v2 + 208));
LABEL_61:
    v5 = proto::GetRedisMailRsp::retcode(rsp_0);
    goto LABEL_62;
  }
  v42 = google::protobuf::MessageLite::ByteSize(rsp_0);
  if ( mail_data_size <= v42 )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailReq",
      223);
    v43 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v80,
            (const char (*)[47])"[MAIL] GetRedisMailRsp before hide mail, uid: ");
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v2 + 32));
    v45 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v44, (const char (*)[15])" ,proto size: ");
    v64 = google::protobuf::MessageLite::ByteSize(rsp_0);
    v46 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, &v64);
    v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v46, (const char (*)[13])" ,mail num: ");
    val = proto::GetRedisMailRsp::mail_str_list_size(rsp_0);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v47, &val);
    common::milog::MiLogStream::~MiLogStream(&v80);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 176));
    hide_num_once = proto::GetRedisMailRsp::mail_str_list_size(rsp_0) / 10;
    while ( proto::GetRedisMailRsp::mail_str_list_size(rsp_0) > 0 )
    {
      v48 = google::protobuf::MessageLite::ByteSize(rsp_0);
      if ( mail_data_size > v48 )
        break;
      v50 = proto::GetRedisMailRsp::mail_str_list_size(rsp_0);
      if ( hide_num_once < v50 )
        v51 = hide_num_once;
      else
        v51 = proto::GetRedisMailRsp::mail_str_list_size(rsp_0);
      hide_num = v51;
      v52 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](rsp_0);
      google::protobuf::RepeatedPtrField<std::string>::DeleteSubrange(v52, 0, hide_num);
      proto::GetRedisMailRsp::set_is_truncated(rsp_0, 1);
    }
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailReq",
      232);
    v53 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v80,
            (const char (*)[46])"[MAIL] GetRedisMailRsp after hide mail, uid: ");
    v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v2 + 32));
    v55 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v54, (const char (*)[15])" ,proto size: ");
    v63 = google::protobuf::MessageLite::ByteSize(rsp_0);
    v56 = common::milog::MiLogStream::operator<<<int,(int *)0>(v55, &v63);
    v57 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v56, (const char (*)[13])" ,mail num: ");
    v64 = proto::GetRedisMailRsp::mail_str_list_size(rsp_0);
    v58 = common::milog::MiLogStream::operator<<<int,(int *)0>(v57, &v64);
    v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v58, (const char (*)[14])" ,cost time: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 176));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v59, &val);
    common::milog::MiLogStream::~MiLogStream(&v80);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 176));
  }
  v60 = ServiceBox::findService<MailService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v2 + 176),
    p_packet_ptr);
  std::shared_ptr<proto::GetRedisMailRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::GetRedisMailRsp> *)(v2 + 80));
  LOBYTE(v60) = ServiceBase::sendRsp<proto::GetRedisMailRsp>(v60, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 176)) != 0;
  std::shared_ptr<proto::GetRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 176));
  if ( !(_BYTE)v60 )
    goto LABEL_61;
  common::milog::MiLogStream::create(
    &v80,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/mail_handler.cpp",
    "onGetRedisMailReq",
    237);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v80, (const char (*)[23])"[MAIL] send rsp failed");
  common::milog::MiLogStream::~MiLogStream(&v80);
  v5 = -1;
LABEL_62:
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 112));
  std::shared_ptr<proto::GetRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::GetRedisMailRsp> *const)(v2 + 80));
LABEL_63:
  std::shared_ptr<proto::GetRedisMailReq const>::~shared_ptr((std::shared_ptr<const proto::GetRedisMailReq> *const)(v2 + 48));
  result = v5;
  if ( v81 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 246: range 000000000DEBE986-000000000DEBEE48
int32_t __cdecl MailHandler::onUpdateRedisMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  proto::MailUpdateOpType v6; // edx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::MailUpdateOpType v8; // eax
  proto::MailUpdateOpType v9; // eax
  MailService *v10; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+1Ch] [rbp-E4h]
  std::__shared_ptr_access<const proto::UpdateRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-E0h]
  proto::UpdateRedisMailRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::UpdateRedisMailRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:247 64 16 11 rsp_ptr:247";
  *(_QWORD *)(v2 + 16) = MailHandler::onUpdateRedisMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UpdateRedisMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UpdateRedisMailReq const>(
         (const std::shared_ptr<const proto::UpdateRedisMailReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onUpdateRedisMailReq",
      247);
    common::milog::MiLogStream::operator()(&v17, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
    goto LABEL_19;
  }
  req = std::__shared_ptr_access<proto::UpdateRedisMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UpdateRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  common::tools::perf::make_shared<proto::UpdateRedisMailRsp>();
  rsp_0 = std::__shared_ptr_access<proto::UpdateRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UpdateRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto::UpdateRedisMailRsp::set_retcode(rsp_0, -1);
  proto::UpdateRedisMailRsp::set_retcode(rsp_0, -1);
  v6 = proto::UpdateRedisMailReq::op_type(req);
  proto::UpdateRedisMailRsp::set_op_type(rsp_0, v6);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  v8 = proto::UpdateRedisMailReq::op_type(req);
  if ( v8 > MAIL_UPDATE_OP_UNSTAR_MAIL )
    goto LABEL_14;
  if ( v8 >= MAIL_UPDATE_OP_STAR_MAIL )
  {
    MailHandler::changeMailStar(this, uid, req, rsp_0);
  }
  else if ( v8 == MAIL_UPDATE_OP_MARK_READ )
  {
    MailHandler::markMailRead(this, uid, req, rsp_0);
  }
  else
  {
    if ( v8 != MAIL_UPDATE_OP_TAKE_ATTACHMENT )
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onUpdateRedisMailReq",
        272);
      v9 = proto::UpdateRedisMailReq::op_type(req);
      common::milog::MiLogStream::operator()(&v17, "invalid op_type=%u", (unsigned int)v9);
      common::milog::MiLogStream::~MiLogStream(&v17);
      goto LABEL_15;
    }
    MailHandler::takeMailAttachment(this, uid, req, rsp_0);
  }
LABEL_15:
  v10 = ServiceBox::findService<MailService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
  std::shared_ptr<proto::UpdateRedisMailRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::UpdateRedisMailRsp> *)(v2 + 64));
  LOBYTE(v10) = ServiceBase::sendRsp<proto::UpdateRedisMailRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr) != 0;
  std::shared_ptr<proto::UpdateRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  if ( (_BYTE)v10 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onUpdateRedisMailReq",
      281);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v17, (const char (*)[23])"[MAIL] send rsp failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    v5 = proto::UpdateRedisMailRsp::retcode(rsp_0);
  }
  std::shared_ptr<proto::UpdateRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::UpdateRedisMailRsp> *const)(v2 + 64));
LABEL_19:
  std::shared_ptr<proto::UpdateRedisMailReq const>::~shared_ptr((std::shared_ptr<const proto::UpdateRedisMailReq> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 288: range 000000000DEBEE4A-000000000DEBF1E3
int32_t __cdecl MailHandler::onGetRedisMailTransactionStatusReq(
        MailHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  MailService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetRedisMailTransactionStatusReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::GetRedisMailTransactionStatusRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::GetRedisMailTransactionStatusRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:289 64 16 11 rsp_ptr:289";
  *(_QWORD *)(v2 + 16) = MailHandler::onGetRedisMailTransactionStatusReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetRedisMailTransactionStatusReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetRedisMailTransactionStatusReq const>(
         (const std::shared_ptr<const proto::GetRedisMailTransactionStatusReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onGetRedisMailTransactionStatusReq",
      289);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetRedisMailTransactionStatusReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetRedisMailTransactionStatusReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetRedisMailTransactionStatusRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetRedisMailTransactionStatusRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetRedisMailTransactionStatusRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetRedisMailTransactionStatusRsp::set_retcode(rsp_0, -1);
    proto::GetRedisMailTransactionStatusRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    MailHandler::getRedisMailTransactionStatus(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<MailService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetRedisMailTransactionStatusRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetRedisMailTransactionStatusRsp> *)(v2 + 64));
    LOBYTE(v8) = ServiceBase::sendRsp<proto::GetRedisMailTransactionStatusRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::GetRedisMailTransactionStatusRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v8 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onGetRedisMailTransactionStatusReq",
        299);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v15,
        (const char (*)[23])"[MAIL] send rsp failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v5 = proto::GetRedisMailTransactionStatusRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::GetRedisMailTransactionStatusRsp>::~shared_ptr((std::shared_ptr<proto::GetRedisMailTransactionStatusRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetRedisMailTransactionStatusReq const>::~shared_ptr((std::shared_ptr<const proto::GetRedisMailTransactionStatusReq> *const)(v2 + 32));
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

// Line 306: range 000000000DEBF1E4-000000000DEBF7E4
int32_t __cdecl MailHandler::onClearUpRedisMailNotify(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  std::set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::set<std::string> *__for_range; // [rsp+30h] [rbp-140h]
  const std::string *mail_id_str; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-130h] BYREF
  char v19[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 7 uid:308 48 4 18 expire_mail_id:339 64 48 26 expire_mail_id_str_set:311 144 48 22 expire"
                        "_mail_id_set:336";
  *(_QWORD *)(v2 + 16) = MailHandler::onClearUpRedisMailNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/mail_handler.cpp",
    "onClearUpRedisMailNotify",
    307);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v18, (const char (*)[25])"onClearUpRedisMailNotify");
  common::milog::MiLogStream::~MiLogStream(&v18);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v5);
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 64));
  if ( MailHandler::removeExpiredMailId(this, *(_DWORD *)(v2 + 32), (std::set<std::string> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onClearUpRedisMailNotify",
      315);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"removeExpiredMailId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v7 = -1;
  }
  else if ( MailHandler::removeExpiredTicket(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onClearUpRedisMailNotify",
      323);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"removeExpiredTicket failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v7 = -1;
  }
  else if ( MailHandler::removeExpiredTransaction(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onClearUpRedisMailNotify",
      331);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v18,
           (const char (*)[39])"removeExpiredTransaction failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v7 = -1;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
    __for_range = (std::set<std::string> *)(v2 + 64);
    __for_begin._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v2 + 64))._M_node;
    __for_end._M_node = std::set<std::string>::end((const std::set<std::string> *const)(v2 + 64))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      mail_id_str = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 48) = 0;
      if ( !common::tools::StringUtils::strToNum<unsigned int>(mail_id_str, (unsigned int *)(v2 + 48), 0) )
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v2 + 144),
          (const std::set<unsigned int>::value_type *)(v2 + 48));
      std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
    }
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 144))
      && RedisOpMailData::delMailData(*(_DWORD *)(v2 + 32), (const std::set<unsigned int> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onClearUpRedisMailNotify",
        350);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v18,
              (const char (*)[26])"delMailData failed, uid: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v11, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::set<unsigned int> *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    v7 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 64));
  result = v7;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 358: range 000000000DEBF7E6-000000000DEBFC3C
int32_t __cdecl MailHandler::onCleanRedisMailNotify(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:360";
  *(_QWORD *)(v2 + 16) = MailHandler::onCleanRedisMailNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/mail_handler.cpp",
    "onCleanRedisMailNotify",
    359);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v12, (const char (*)[23])"onCleanRedisMailNotify");
  common::milog::MiLogStream::~MiLogStream(&v12);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v5);
  if ( (unsigned int)RedisOpMailData::delAllMailData(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onCleanRedisMailNotify",
      366);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v12,
           (const char (*)[29])"delAllMailData failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else if ( RedisOpMailData::removeAllMailId(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onCleanRedisMailNotify",
      374);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v12,
           (const char (*)[30])"removeAllMailId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else if ( RedisOpMailData::delMailMaxId(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onCleanRedisMailNotify",
      382);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v12,
           (const char (*)[27])"delMailMaxId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else if ( RedisOpMailData::removeAllMailTicket(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onCleanRedisMailNotify",
      390);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v12,
            (const char (*)[34])"removeAllMailTicket failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else if ( RedisOpMailData::removeAllMailTransaction(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onCleanRedisMailNotify",
      398);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v12,
            (const char (*)[39])"removeAllMailTransaction failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v13 == (char *)v2 )
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

// Line 408: range 000000000DEBFC3E-000000000DEBFFD7
int32_t __cdecl MailHandler::onResendRedisMailReq(MailHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::int32 v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  MailService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ResendRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  proto::ResendRedisMailRsp *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::ResendRedisMailRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:409 64 16 11 rsp_ptr:409";
  *(_QWORD *)(v2 + 16) = MailHandler::onResendRedisMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ResendRedisMailReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ResendRedisMailReq const>(
         (const std::shared_ptr<const proto::ResendRedisMailReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "onResendRedisMailReq",
      409);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ResendRedisMailReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ResendRedisMailReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ResendRedisMailRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ResendRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ResendRedisMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ResendRedisMailRsp::set_retcode(rsp_0, -1);
    proto::ResendRedisMailRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    MailHandler::resendRedisMail(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<MailService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::ResendRedisMailRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::ResendRedisMailRsp> *)(v2 + 64));
    LOBYTE(v8) = ServiceBase::sendRsp<proto::ResendRedisMailRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr) != 0;
    std::shared_ptr<proto::ResendRedisMailRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( (_BYTE)v8 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "onResendRedisMailReq",
        418);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v15,
        (const char (*)[23])"[MAIL] send rsp failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v5 = proto::ResendRedisMailRsp::retcode(rsp_0);
    }
    std::shared_ptr<proto::ResendRedisMailRsp>::~shared_ptr((std::shared_ptr<proto::ResendRedisMailRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ResendRedisMailReq const>::~shared_ptr((std::shared_ptr<const proto::ResendRedisMailReq> *const)(v2 + 32));
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

// Line 425: range 000000000DEBFFD8-000000000DEC0881
__int64 __fastcall MailHandler::addRedisMailByGame(
        MailHandler *const this,
        uint32_t uid,
        const proto::AddRedisMailReq *req,
        proto::AddRedisMailRsp *rsp_0,
        uint32_t gameserver_app_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int v10; // r14d
  const std::string *v11; // rax
  const proto::MailBin *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  const std::string *v16; // rax
  const proto::MailBin *v17; // rax
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  const std::string *v22; // rax
  const proto::MailBin *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  proto::MailRedisData *i; // r14
  void (__fastcall **vptr_MessageLite)(proto::MailRedisData *); // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 result; // rax
  google::protobuf::uint32 expire_time; // [rsp+Ch] [rbp-1C4h]
  uint32_t expire_timea; // [rsp+Ch] [rbp-1C4h]
  std::allocator<proto::MailRedisData> __a; // [rsp+3Ah] [rbp-196h] BYREF
  bool is_persistent; // [rsp+3Bh] [rbp-195h]
  int32_t ret; // [rsp+3Ch] [rbp-194h]
  std::vector<proto::MailRedisData> update_mail_vec; // [rsp+40h] [rbp-190h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-170h] BYREF
  std::string val; // [rsp+80h] [rbp-150h] BYREF
  proto::MailRedisData v45; // [rsp+A0h] [rbp-130h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-108h] BYREF
  std::set<unsigned int> del_mail_id_set; // [rsp+D0h] [rbp-100h] BYREF
  char v48[208]; // [rsp+100h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 14 left_space:435 48 4 7 uid:424 64 4 21 gameserver_app_id:424 80 40 8 mail:452";
  *(_QWORD *)(v5 + 16) = MailHandler::addRedisMailByGame;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 48) = uid;
  *(_DWORD *)(v5 + 64) = gameserver_app_id;
  v8 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
  if ( (unsigned __int8)std::string::empty(v8) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByGame",
      428);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v43,
           (const char (*)[23])"transaction is empty: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v10 = 1320;
  }
  else
  {
    v11 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
    proto::AddRedisMailRsp::set_transaction(rsp_0, v11);
    v12 = proto::AddRedisMailReq::mail_bin(req);
    is_persistent = proto::MailBin::collect_state(v12) == 3;
    *(_DWORD *)(v5 + 32) = 0;
    ret = MailHandler::ensureSpaceForNewMail(this, *(_DWORD *)(v5 + 48), is_persistent, 1u, (uint32_t *)(v5 + 32));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "addRedisMailByGame",
        439);
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[36])"ensureSpaceForNewMail failed, uid: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])", transaction: ");
      v16 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v10 = 1318;
    }
    else
    {
      v17 = proto::AddRedisMailReq::mail_bin(req);
      expire_time = proto::MailBin::expire_time(v17);
      v18 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
      ret = RedisOpMailData::insertMailTransaction(*(_DWORD *)(v5 + 48), v18, expire_time);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "addRedisMailByGame",
          447);
        v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[36])"insertMailTransaction failed, uid: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v5 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v20,
                (const char (*)[16])", transaction: ");
        v22 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        if ( ret == -2 )
          v10 = 2006;
        else
          v10 = ret;
      }
      else
      {
        proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v5 + 80));
        v23 = proto::AddRedisMailReq::mail_bin(req);
        ret = MailHandler::addNewRedisMail(
                this,
                *(_DWORD *)(v5 + 48),
                v23,
                MAIL_REASON_BY_GAME,
                (proto::MailRedisData *)(v5 + 80));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "addRedisMailByGame",
            456);
          v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[38])"addNewRedisMail by game failed, uid: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v5 + 48));
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v25,
                  (const char (*)[16])", transaction: ");
          v27 = proto::AddRedisMailReq::transaction[abi:cxx11](req);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v10 = 1;
        }
        else
        {
          expire_timea = *(_DWORD *)(v5 + 64);
          memset(&del_mail_id_set, 0, sizeof(del_mail_id_set));
          std::set<unsigned int>::set(&del_mail_id_set);
          proto::MailRedisData::MailRedisData(&v45, (const proto::MailRedisData *)(v5 + 80));
          std::allocator<proto::MailRedisData>::allocator(&__a);
          std::vector<proto::MailRedisData>::vector(
            &update_mail_vec,
            (std::initializer_list<proto::MailRedisData>)__PAIR128__(1LL, &v45),
            &__a);
          MailHandler::notifyRedisMailChange(
            this,
            *(_DWORD *)(v5 + 48),
            &update_mail_vec,
            &del_mail_id_set,
            expire_timea);
          std::vector<proto::MailRedisData>::~vector(&update_mail_vec);
          std::allocator<proto::MailRedisData>::~allocator(&__a);
          for ( i = (proto::MailRedisData *)&v46; i != &v45; (*vptr_MessageLite)(i) )
          {
            if ( *(_BYTE *)(((unsigned __int64)--i >> 3) + 0x7FFF8000) )
              __asan_report_load8(i);
            vptr_MessageLite = (void (__fastcall **)(proto::MailRedisData *))i->_vptr_MessageLite;
            if ( *(_BYTE *)(((unsigned __int64)i->_vptr_MessageLite >> 3) + 0x7FFF8000) )
              __asan_report_load8(i->_vptr_MessageLite);
          }
          std::set<unsigned int>::~set(&del_mail_id_set);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/mail_handler.cpp",
            "addRedisMailByGame",
            463);
          v30 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[26])"addRedisMailByGame, uid: ");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v5 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v31,
                  (const char (*)[22])" ,gameserver_app_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v10 = 0;
        }
        proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v5 + 80));
      }
    }
  }
  result = v10;
  if ( v48 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 469: range 000000000DEC0882-000000000DEC1B61
__int64 __fastcall MailHandler::addRedisMailByMuip(
        MailHandler *const this,
        uint32_t uid,
        const proto::AddRedisMailReq *req,
        proto::AddRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t v18; // eax
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t v27; // eax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rbx
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rbx
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rbx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  uint32_t v48; // eax
  proto::MailRedisData *i; // r14
  void (__fastcall **vptr_MessageLite)(proto::MailRedisData *); // rax
  __int64 result; // rax
  const HK4EDesignConfig *Config; // [rsp+8h] [rbp-228h]
  MailExcelConfigMgr *p_mail_config_mgr; // [rsp+8h] [rbp-228h]
  std::allocator<proto::MailRedisData> __a; // [rsp+36h] [rbp-1FAh] BYREF
  bool is_persistent; // [rsp+37h] [rbp-1F9h]
  unsigned int val; // [rsp+38h] [rbp-1F8h] BYREF
  data::ItemLimitType item_limit_type; // [rsp+3Ch] [rbp-1F4h]
  int32_t ret; // [rsp+40h] [rbp-1F0h]
  uint32_t cur_time; // [rsp+44h] [rbp-1ECh]
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+48h] [rbp-1E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end; // [rsp+50h] [rbp-1E0h] BYREF
  const std::string *ticket; // [rsp+58h] [rbp-1D8h]
  const proto::MailBin *mail_bin; // [rsp+60h] [rbp-1D0h]
  TxtConfigMgr *txt_config_mgr; // [rsp+68h] [rbp-1C8h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range; // [rsp+70h] [rbp-1C0h]
  const data::MailExcelConfig *mail_config_ptr; // [rsp+78h] [rbp-1B8h]
  const proto::ItemParamBin *item_param_bin; // [rsp+80h] [rbp-1B0h]
  const ItemOutputLimitConfig *limit_config_ptr; // [rsp+88h] [rbp-1A8h]
  std::shared_ptr<Config> v71; // [rsp+90h] [rbp-1A0h] BYREF
  std::vector<proto::MailRedisData> update_mail_vec; // [rsp+A0h] [rbp-190h] BYREF
  common::milog::MiLogStream v73; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v74; // [rsp+E0h] [rbp-150h] BYREF
  proto::MailRedisData v75; // [rsp+100h] [rbp-130h] BYREF
  __int64 v76; // [rsp+128h] [rbp-108h] BYREF
  std::set<unsigned int> del_mail_id_set; // [rsp+130h] [rbp-100h] BYREF
  char v78[208]; // [rsp+160h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 ret:499 48 4 14 left_space:550 64 4 7 uid:468 80 40 8 mail:569";
  *(_QWORD *)(v4 + 16) = MailHandler::addRedisMailByMuip;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  ticket = proto::AddRedisMailReq::ticket[abi:cxx11](req);
  if ( (unsigned __int8)std::string::empty(ticket) )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      473);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v74,
           (const char (*)[41])"addRedisMailByMuip ticket is null, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v74);
    v8 = 1319;
    goto LABEL_63;
  }
  proto::AddRedisMailRsp::set_ticket(rsp_0, ticket);
  if ( !*(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      481);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v73, (const char (*)[15])off_1BB53900);
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v74);
    std::string::~string(&v74);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v8 = 17;
    goto LABEL_63;
  }
  mail_bin = proto::AddRedisMailReq::mail_bin(req);
  if ( (unsigned int)proto::MailBin::item_param_list_size(mail_bin) > 0x14 )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      489);
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v74,
            (const char (*)[35])"mail_bin.item_param_bin_list_size:");
    *(_DWORD *)(v4 + 48) = proto::MailBin::item_param_list_size(mail_bin);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v74);
    v8 = 1303;
    goto LABEL_63;
  }
  item_limit_type = proto::MailBin::item_limit_type(mail_bin);
  ServiceBox::findService<MailService>();
  MailService::getConfig((MailService *const)&v71);
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config_.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v71);
  __for_range = proto::MailBin::item_param_list(mail_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    item_param_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
    *(_DWORD *)(v4 + 32) = TxtConfigMgr::checkMuipMailItem(txt_config_mgr, item_param_bin);
    if ( *(_DWORD *)(v4 + 32) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mail_handler.cpp",
        "addRedisMailByMuip",
        502);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v73,
              (const char (*)[31])"checkMuipMailItem failed, ret:");
      v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v74);
      std::string::~string(&v74);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v8 = *(_DWORD *)(v4 + 32);
      goto LABEL_63;
    }
    *(_DWORD *)(v4 + 32) = TxtConfigMgr::checkItemParamBin(txt_config_mgr, item_param_bin, item_limit_type);
    if ( *(_DWORD *)(v4 + 32) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mail_handler.cpp",
        "addRedisMailByMuip",
        508);
      v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v73,
              (const char (*)[34])"checkProtoEquipParam failed, ret:");
      v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v4 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v74);
      std::string::~string(&v74);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v8 = *(_DWORD *)(v4 + 32);
      goto LABEL_63;
    }
    if ( item_limit_type != ITEM_LIMIT_REBATE || proto::ItemParamBin::item_id(item_param_bin) != 201 )
    {
      Config = TxtConfigMgr::getConfig(txt_config_mgr);
      v18 = proto::ItemParamBin::item_id(item_param_bin);
      limit_config_ptr = HK4EDesignConfig::findItemOutputLimitConfig(Config, v18);
      if ( limit_config_ptr )
      {
        v19 = proto::ItemParamBin::count(item_param_bin);
        if ( *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)limit_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&limit_config_ptr->mail_item_count_limit);
        }
        if ( v19 > limit_config_ptr->mail_item_count_limit )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/mail_handler.cpp",
            "addRedisMailByMuip",
            522);
          v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v73, (const char (*)[5])"req:");
          google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)&v74);
          v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" ItemID:");
          val = proto::ItemParamBin::item_id(item_param_bin);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" count:");
          *(_DWORD *)(v4 + 48) = proto::ItemParamBin::count(item_param_bin);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v4 + 48));
          v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" limit:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v26,
            &limit_config_ptr->mail_item_count_limit);
          std::string::~string(&v74);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v8 = 1317;
          goto LABEL_63;
        }
      }
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
  }
  if ( !proto::MailBin::config_id(mail_bin) )
    goto LABEL_46;
  p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
  v27 = proto::MailBin::config_id(mail_bin);
  mail_config_ptr = data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, v27);
  if ( !mail_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      534);
    v28 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v73,
            (const char (*)[39])"findMailExcelConfig failed, config_id:");
    *(_DWORD *)(v4 + 48) = proto::MailBin::config_id(mail_bin);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
    v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, (const std::string *)&v74);
    std::string::~string(&v74);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v8 = 1310;
    goto LABEL_63;
  }
  if ( *(char *)(((unsigned __int64)&mail_config_ptr->is_collectible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&mail_config_ptr->is_collectible);
  if ( mail_config_ptr->is_collectible && proto::MailBin::collect_state(mail_bin) == 1 )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      539);
    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v73, (const char (*)[16])"mail config_id:");
    *(_DWORD *)(v4 + 48) = proto::MailBin::config_id(mail_bin);
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 48));
    v34 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v33,
            (const char (*)[24])" collectible conflict! ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)&v74);
    std::string::~string(&v74);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v8 = 1310;
    goto LABEL_63;
  }
  if ( *(char *)(((unsigned __int64)&mail_config_ptr->is_collectible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&mail_config_ptr->is_collectible);
  if ( !mail_config_ptr->is_collectible && proto::MailBin::collect_state(mail_bin) != 1 )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addRedisMailByMuip",
      544);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v73, (const char (*)[16])"mail config_id:");
    *(_DWORD *)(v4 + 48) = proto::MailBin::config_id(mail_bin);
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 48));
    v38 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v37,
            (const char (*)[26])" uncollectible conflict! ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v74, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, (const std::string *)&v74);
    std::string::~string(&v74);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v8 = 1310;
  }
  else
  {
LABEL_46:
    *(_DWORD *)(v4 + 48) = 0;
    is_persistent = proto::MailBin::collect_state(mail_bin) == 3;
    ret = MailHandler::ensureSpaceForNewMail(this, *(_DWORD *)(v4 + 64), is_persistent, 1u, (uint32_t *)(v4 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "addRedisMailByMuip",
        555);
      v39 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v74,
              (const char (*)[36])"ensureSpaceForNewMail failed, uid: ");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 64));
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])", ticket: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, ticket);
      common::milog::MiLogStream::~MiLogStream(&v74);
      v8 = 1318;
    }
    else
    {
      cur_time = common::tools::TimeUtils::getNow();
      ret = RedisOpMailData::insertMailTicket(*(_DWORD *)(v4 + 64), ticket, cur_time);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "addRedisMailByMuip",
          564);
        v42 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v74,
                (const char (*)[31])"insertMailTicket failed, uid: ");
        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v42,
                (const unsigned int *)(v4 + 64));
        v44 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v43, (const char (*)[11])", ticket: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, ticket);
        common::milog::MiLogStream::~MiLogStream(&v74);
        if ( ret == -2 )
          v8 = 2006;
        else
          v8 = ret;
      }
      else
      {
        proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v4 + 80));
        ret = MailHandler::addNewRedisMail(
                this,
                *(_DWORD *)(v4 + 64),
                mail_bin,
                MAIL_REASON_BY_MUIP,
                (proto::MailRedisData *)(v4 + 80));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "addRedisMailByMuip",
            573);
          v45 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v74,
                  (const char (*)[38])"addNewRedisMail by muip failed, uid: ");
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v45,
                  (const unsigned int *)(v4 + 64));
          v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])", ticket: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, ticket);
          common::milog::MiLogStream::~MiLogStream(&v74);
          v8 = 1;
        }
        else
        {
          v48 = proto::MailRedisData::id((const proto::MailRedisData *const)(v4 + 80));
          RedisOpMailData::insertMailTicketWithMailId(*(_DWORD *)(v4 + 64), ticket, v48);
          memset(&del_mail_id_set, 0, sizeof(del_mail_id_set));
          std::set<unsigned int>::set(&del_mail_id_set);
          proto::MailRedisData::MailRedisData(&v75, (const proto::MailRedisData *)(v4 + 80));
          std::allocator<proto::MailRedisData>::allocator(&__a);
          std::vector<proto::MailRedisData>::vector(
            &update_mail_vec,
            (std::initializer_list<proto::MailRedisData>)__PAIR128__(1LL, &v75),
            &__a);
          MailHandler::notifyRedisMailChange(this, *(_DWORD *)(v4 + 64), &update_mail_vec, &del_mail_id_set, 0);
          std::vector<proto::MailRedisData>::~vector(&update_mail_vec);
          std::allocator<proto::MailRedisData>::~allocator(&__a);
          for ( i = (proto::MailRedisData *)&v76; i != &v75; (*vptr_MessageLite)(i) )
          {
            if ( *(_BYTE *)(((unsigned __int64)--i >> 3) + 0x7FFF8000) )
              __asan_report_load8(i);
            vptr_MessageLite = (void (__fastcall **)(proto::MailRedisData *))i->_vptr_MessageLite;
            if ( *(_BYTE *)(((unsigned __int64)i->_vptr_MessageLite >> 3) + 0x7FFF8000) )
              __asan_report_load8(i->_vptr_MessageLite);
          }
          std::set<unsigned int>::~set(&del_mail_id_set);
          v8 = 0;
        }
        proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v4 + 80));
      }
    }
  }
LABEL_63:
  result = v8;
  if ( v78 == (char *)v4 )
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

// Line 587: range 000000000DEC1B62-000000000DEC2052
__int64 __fastcall MailHandler::addNewRedisMail(
        MailHandler *const this,
        uint32_t uid,
        const proto::MailBin *mail_bin,
        unsigned int op_reason,
        proto::MailRedisData *mail)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  proto::MailBin *v10; // rax
  proto::MailBin *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  std::string maila; // [rsp+0h] [rbp-E0h]
  proto::MailRedisData *mailb; // [rsp+0h] [rbp-E0h]
  const proto::MailBin *mail_bina; // [rsp+8h] [rbp-D8h]
  proto_log::MailOpReason op_reasona; // [rsp+10h] [rbp-D0h]
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  uint32_t expire_time; // [rsp+28h] [rbp-B8h]
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  std::string v26; // [rsp+30h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&maila._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  maila._M_string_length = (std::string::size_type)mail_bin;
  maila._anon_0._M_allocated_capacity = __PAIR64__(uid, op_reason);
  maila._M_dataplus._M_p = (std::string::pointer)mail;
  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 1 10 holder:588 48 4 15 new_mail_id:590 64 4 7 uid:586";
  *(_QWORD *)(v5 + 16) = MailHandler::addNewRedisMail;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = uid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v26, byte_1BABF140, &__a);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 1u, maila);
  std::string::~string(&v26);
  std::allocator<char>::~allocator(&__a);
  ret = RedisOpMailData::genNewMailId(*(_DWORD *)(v5 + 64), (uint32_t *)(v5 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "addNewRedisMail",
      594);
    v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&v26,
           (const char (*)[27])"genNewMailId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26);
    v9 = -1;
  }
  else
  {
    proto::MailRedisData::set_id(mailb, *(_DWORD *)(v5 + 48));
    proto::MailRedisData::set_is_read(mailb, 0);
    proto::MailRedisData::set_is_attachment_got(mailb, 0);
    v10 = proto::MailRedisData::mutable_mail_bin(mailb);
    proto::MailBin::CopyFrom(v10, mail_bina);
    expire_time = proto::MailBin::expire_time(mail_bina);
    if ( proto::MailBin::collect_state(mail_bina) == 3 )
    {
      expire_time = std::numeric_limits<unsigned int>::max();
      v11 = proto::MailRedisData::mutable_mail_bin(mailb);
      proto::MailBin::set_expire_time(v11, expire_time);
    }
    ret = RedisOpMailData::insertNewMail(*(_DWORD *)(v5 + 64), mailb);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "addNewRedisMail",
        616);
      v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)&v26,
              (const char (*)[28])"insertNewMail failed, uid: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])", new_mail_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26);
      v9 = -1;
    }
    else
    {
      ret = RedisOpMailData::insertMailId(*(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 48), expire_time);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "addNewRedisMail",
          624);
        v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)&v26,
                (const char (*)[27])"insertMailId failed, uid: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v16,
                (const char (*)[16])", new_mail_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v26);
        v9 = -1;
      }
      else
      {
        MailLogHelper::log(*(_DWORD *)(v5 + 64), mailb, MAIL_OP_ADD, op_reasona);
        v9 = 0;
      }
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  result = v9;
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 635: range 000000000DEC2054-000000000DEC21F0
__int64 __fastcall MailHandler::delRedisMailByClient(
        MailHandler *const this,
        uint32_t uid,
        const proto::DelRedisMailReq *req,
        proto::DelRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:634";
  *(_QWORD *)(v4 + 16) = MailHandler::delRedisMailByClient;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( MailHandler::delRedisMail(this, *(_DWORD *)(v4 + 32), MAIL_REASON_BY_CLIENT, req, rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "delRedisMailByClient",
      639);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v11,
           (const char (*)[37])"delRedisMail by client failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v4 )
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

// Line 647: range 000000000DEC21F2-000000000DEC238E
__int64 __fastcall MailHandler::delRedisMailByGame(
        MailHandler *const this,
        uint32_t uid,
        const proto::DelRedisMailReq *req,
        proto::DelRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:646";
  *(_QWORD *)(v4 + 16) = MailHandler::delRedisMailByGame;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( MailHandler::delRedisMail(this, *(_DWORD *)(v4 + 32), MAIL_REASON_BY_GAME, req, rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "delRedisMailByGame",
      651);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"delRedisMail by game failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v4 )
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

// Line 659: range 000000000DEC2390-000000000DEC252C
__int64 __fastcall MailHandler::delRedisMailByMuip(
        MailHandler *const this,
        uint32_t uid,
        const proto::DelRedisMailReq *req,
        proto::DelRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:658";
  *(_QWORD *)(v4 + 16) = MailHandler::delRedisMailByMuip;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( MailHandler::delRedisMail(this, *(_DWORD *)(v4 + 32), MAIL_REASON_BY_MUIP, req, rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "delRedisMailByMuip",
      663);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"delRedisMail by muip failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v4 )
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

// Line 672: range 000000000DEC252E-000000000DEC2A58
__int64 __fastcall MailHandler::delRedisMailByTicketByMuip(
        MailHandler *const this,
        uint32_t uid,
        const proto::DelRedisMailReq *req,
        proto::DelRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  int ret; // [rsp+20h] [rbp-1C0h]
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+38h] [rbp-1A8h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const std::string *ticket; // [rsp+48h] [rbp-198h]
  std::vector<proto::MailRedisData> update_mail_vec; // [rsp+50h] [rbp-190h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-170h] BYREF
  char v22[336]; // [rsp+90h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 7 uid:671 64 24 14 ticket_vec:674 128 48 15 mail_id_set:673 208 48 19 del_mail_id_set:682";
  *(_QWORD *)(v4 + 16) = MailHandler::delRedisMailByTicketByMuip;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = uid;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 128));
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 64));
  __for_range = proto::DelRedisMailReq::ticket_list[abi:cxx11](req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
  {
    ticket = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
    std::vector<std::string>::push_back((std::vector<std::string> *const)(v4 + 64), ticket);
    google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
  }
  MailHandler::getMailIdSetByTicket(
    this,
    *(_DWORD *)(v4 + 48),
    (const std::vector<std::string> *)(v4 + 64),
    (std::set<unsigned int> *)(v4 + 128));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 208));
  ret = MailHandler::batchDelRedisMail(
          this,
          *(_DWORD *)(v4 + 48),
          MAIL_REASON_BY_MUIP,
          (const std::set<unsigned int> *)(v4 + 128),
          (std::set<unsigned int> *)(v4 + 208));
  __for_range_0 = (std::set<unsigned int> *)(v4 + 208);
  __for_begin.it_ = (void *const *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 208))._M_node;
  __for_end.it_ = (void *const *)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::DelRedisMailRsp::add_mail_id_list(rsp_0, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( ret )
  {
    v9 = ret;
  }
  else
  {
    if ( MailHandler::delMailTicket(this, *(_DWORD *)(v4 + 48), (const std::vector<std::string> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "delRedisMailByTicketByMuip",
        700);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v21,
              (const char (*)[28])"delMailTicket failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    proto::DelRedisMailRsp::set_retcode(rsp_0, 0);
    memset(&update_mail_vec, 0, sizeof(update_mail_vec));
    std::vector<proto::MailRedisData>::vector(&update_mail_vec);
    MailHandler::notifyRedisMailChange(
      this,
      *(_DWORD *)(v4 + 48),
      &update_mail_vec,
      (const std::set<unsigned int> *)(v4 + 208),
      0);
    std::vector<proto::MailRedisData>::~vector(&update_mail_vec);
    v9 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 208));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 64));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 128));
  result = v9;
  if ( v22 == (char *)v4 )
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

// Line 711: range 000000000DEC2A5A-000000000DEC2E7C
int32_t __cdecl MailHandler::delRedisMail(
        MailHandler *const this,
        uint32_t uid,
        proto_log::MailOpReason op_reason,
        const proto::DelRedisMailReq *req,
        proto::DelRedisMailRsp *rsp_0)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  int32_t v10; // r14d
  int32_t result; // eax
  int ret; // [rsp+28h] [rbp-168h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-160h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-158h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-150h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-140h]
  std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-138h]
  std::vector<proto::MailRedisData> update_mail_vec; // [rsp+60h] [rbp-130h] BYREF
  char v23[272]; // [rsp+80h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 11 mail_id:713 64 48 15 mail_id_set:712 144 48 19 del_mail_id_set:718";
  *(_QWORD *)(v5 + 16) = MailHandler::delRedisMail;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -219021312;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 64));
  __for_range = proto::DelRedisMailReq::mail_id_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v5 + 48) = *__for_begin;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v5 + 64),
      (const std::set<unsigned int>::value_type *)(v5 + 48));
    ++__for_begin;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 144));
  ret = MailHandler::batchDelRedisMail(
          this,
          uid,
          op_reason,
          (const std::set<unsigned int> *)(v5 + 64),
          (std::set<unsigned int> *)(v5 + 144));
  __for_range_0 = (std::set<unsigned int> *)(v5 + 144);
  __for_begin_0._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v5 + 144))._M_node;
  __for_end_0._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v5 + 144))._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    proto::DelRedisMailRsp::add_mail_id_list(rsp_0, *v9);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
  }
  if ( ret )
  {
    v10 = ret;
  }
  else
  {
    proto::DelRedisMailRsp::set_retcode(rsp_0, 0);
    memset(&update_mail_vec, 0, sizeof(update_mail_vec));
    std::vector<proto::MailRedisData>::vector(&update_mail_vec);
    MailHandler::notifyRedisMailChange(this, uid, &update_mail_vec, (const std::set<unsigned int> *)(v5 + 144), 0);
    std::vector<proto::MailRedisData>::~vector(&update_mail_vec);
    v10 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 144));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 64));
  result = v10;
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 741: range 000000000DEC2E7E-000000000DEC3082
void __cdecl MailHandler::getMailIdSetByTicket(
        MailHandler *const this,
        uint32_t uid,
        const std::vector<std::string> *ticket_vec,
        std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-A0h]
  unsigned int *mail_id; // [rsp+48h] [rbp-98h]
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 15 mail_id_vec:742";
  *(_QWORD *)(v4 + 16) = MailHandler::getMailIdSetByTicket;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 32));
  if ( !RedisOpMailData::getMailIdByTicket(uid, ticket_vec, (std::vector<unsigned int> *)(v4 + 32)) )
  {
    __for_range = (std::vector<unsigned int> *)(v4 + 32);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      mail_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      std::set<unsigned int>::insert(mail_id_set, mail_id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 32));
  if ( v13 == (char *)v4 )
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

// Line 754: range 000000000DEC3084-000000000DEC33A5
__int64 __fastcall MailHandler::delMailTicket(
        MailHandler *const this,
        uint32_t uid,
        const std::vector<std::string> *ticket_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::string *ticket; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 7 uid:753 48 48 14 ticket_set:755";
  *(_QWORD *)(v3 + 16) = MailHandler::delMailTicket;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  std::set<std::string>::set((std::set<std::string> *const)(v3 + 48));
  __for_range = ticket_vec;
  __for_begin._M_current = std::vector<std::string>::begin(ticket_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(ticket_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    ticket = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    std::set<std::string>::insert((std::set<std::string> *const)(v3 + 48), ticket);
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  if ( RedisOpMailData::removeMailTicket(*(_DWORD *)(v3 + 32), (const std::set<std::string> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "delMailTicket",
      764);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"removeMailTicket failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else if ( RedisOpMailData::removeMailTicketWithMailId(*(_DWORD *)(v3 + 32), (const std::set<std::string> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "delMailTicket",
      771);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v15,
           (const char (*)[37])"removeMailTicketMailId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v3 + 48));
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 779: range 000000000DEC33A6-000000000DEC372C
__int64 __fastcall MailHandler::getRedisMailById(
        MailHandler *const this,
        uint32_t uid,
        const proto::GetRedisMailReq *req,
        proto::GetRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  google::protobuf::RepeatedPtrField<std::string > *v9; // rax
  __int64 result; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-148h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-130h] BYREF
  char v17[272]; // [rsp+60h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 mail_id:781 64 4 7 uid:778 80 24 16 mail_str_vec:786 144 48 15 mail_id_set:780";
  *(_QWORD *)(v4 + 16) = MailHandler::getRedisMailById;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = -218959360;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 144));
  __for_range = proto::GetRedisMailReq::mail_id_list(req);
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
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 144),
      (const std::set<unsigned int>::value_type *)(v4 + 48));
    ++__for_begin;
  }
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 80));
  if ( RedisOpMailData::getMailStr(
         *(_DWORD *)(v4 + 64),
         (const std::set<unsigned int> *)(v4 + 144),
         (std::vector<std::string> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "getRedisMailById",
      790);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"getMailStr failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v8 = -1;
  }
  else
  {
    v9 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](rsp_0);
    common::tools::MiscUtils::toRepeated<std::string,std::string>((const std::vector<std::string> *)(v4 + 80), v9);
    proto::GetRedisMailRsp::set_retcode(rsp_0, 0);
    v8 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 80));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 144));
  result = v8;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
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

// Line 801: range 000000000DEC372E-000000000DEC3981
__int64 __fastcall MailHandler::getAllRedisMail(
        MailHandler *const this,
        uint32_t uid,
        const proto::GetRedisMailReq *req,
        proto::GetRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  google::protobuf::RepeatedPtrField<std::string > *v9; // rax
  __int64 result; // rax
  bool is_collected; // [rsp+2Bh] [rbp-D5h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 uid:800 64 24 16 mail_str_vec:803";
  *(_QWORD *)(v4 + 16) = MailHandler::getAllRedisMail;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = uid;
  is_collected = proto::GetRedisMailReq::get_type(req) == MAIL_GET_ALL_COLLECTED;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 64));
  if ( RedisOpMailData::getAllMailStr(*(_DWORD *)(v4 + 48), (std::vector<std::string> *)(v4 + 64), is_collected) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "getAllRedisMail",
      807);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"getAllMailStr failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  else
  {
    v9 = proto::GetRedisMailRsp::mutable_mail_str_list[abi:cxx11](rsp_0);
    common::tools::MiscUtils::toRepeated<std::string,std::string>((const std::vector<std::string> *)(v4 + 64), v9);
    proto::GetRedisMailRsp::set_retcode(rsp_0, 0);
    v8 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 64));
  result = v8;
  if ( v15 == (char *)v4 )
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

// Line 818: range 000000000DEC3982-000000000DEC422B
__int64 __fastcall MailHandler::markMailRead(
        MailHandler *const this,
        __int32 uid,
        const proto::UpdateRedisMailReq *req,
        proto::UpdateRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  const proto::MailBin *v10; // rax
  common::milog::MiLogStream *v11; // rax
  google::protobuf::uint32 v12; // eax
  __int64 result; // rax
  std::string rsp_0a; // [rsp+0h] [rbp-260h]
  proto::UpdateRedisMailRsp *rsp_0b; // [rsp+0h] [rbp-260h]
  const proto::UpdateRedisMailReq *const reqa; // [rsp+8h] [rbp-258h]
  std::allocator<char> __a; // [rsp+23h] [rbp-23Dh] BYREF
  int32_t ret; // [rsp+24h] [rbp-23Ch]
  std::map<std::string,proto::MailRedisData>::iterator __for_begin_0; // [rsp+28h] [rbp-238h] BYREF
  std::map<std::string,proto::MailRedisData>::iterator __for_end_0; // [rsp+30h] [rbp-230h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-228h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-220h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-218h]
  std::map<std::string,proto::MailRedisData> *__for_range_0; // [rsp+50h] [rbp-210h]
  std::map<std::string,proto::MailRedisData> *__for_range_1; // [rsp+58h] [rbp-208h]
  std::map<std::string,proto::MailRedisData> *__for_range_2; // [rsp+60h] [rbp-200h]
  std::pair<const std::string,proto::MailRedisData> *v27; // [rsp+68h] [rbp-1F8h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *__0; // [rsp+70h] [rbp-1F0h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail_1; // [rsp+78h] [rbp-1E8h]
  const std::pair<const std::string,proto::MailRedisData> *v30; // [rsp+80h] [rbp-1E0h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailRedisData> >::type *_; // [rsp+88h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *mail_0; // [rsp+90h] [rbp-1D0h]
  std::pair<const std::string,proto::MailRedisData> *__in; // [rsp+98h] [rbp-1C8h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *mail_key; // [rsp+A0h] [rbp-1C0h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail; // [rsp+A8h] [rbp-1B8h]
  std::string v36; // [rsp+B0h] [rbp-1B0h] BYREF
  char v37[400]; // [rsp+D0h] [rbp-190h] BYREF

  *(&rsp_0a._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(rsp_0a._anon_0._M_allocated_capacity) = uid;
  rsp_0a._M_string_length = (std::string::size_type)req;
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 1 10 holder:819 48 4 11 mail_id:821 64 4 7 uid:817 80 16 12 tran_ptr:826 112 48 15 mail_id_"
                        "set:820 192 48 22 mail_key_value_map:827 272 48 15 persist_set:841";
  *(_QWORD *)(v4 + 16) = MailHandler::markMailRead;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v36, byte_1BABF140, &__a);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 1u, rsp_0a);
  std::string::~string(&v36);
  std::allocator<char>::~allocator(&__a);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 112));
  __for_range = proto::UpdateRedisMailReq::mail_id_list(reqa);
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
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 112),
      (const std::set<unsigned int>::value_type *)(v4 + 48));
    ++__for_begin;
  }
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  std::map<std::string,proto::MailRedisData>::map((std::map<std::string,proto::MailRedisData> *const)(v4 + 192));
  ret = RedisOpMailData::getMailDataWithTran(
          *(_DWORD *)(v4 + 64),
          (const std::set<unsigned int> *)(v4 + 112),
          (std::map<std::string,proto::MailRedisData> *)(v4 + 192),
          (common::midb::GetAndSetTranPtr *)(v4 + 80));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "markMailRead",
      831);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&v36,
           (const char (*)[34])"getMailDataWithTran failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v36);
    v8 = -1;
  }
  else if ( std::map<std::string,proto::MailRedisData>::empty((const std::map<std::string,proto::MailRedisData> *const)(v4 + 192)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "markMailRead",
      837);
    v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           (common::milog::MiLogStream *const)&v36,
           (const char (*)[63])"getMailDataWithTran failed, mail_key_value_map is empty, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v36);
    v8 = -1;
  }
  else
  {
    std::set<std::string>::set((std::set<std::string> *const)(v4 + 272));
    __for_range_0 = (std::map<std::string,proto::MailRedisData> *)(v4 + 192);
    __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 192))._M_node;
    __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
      mail_key = std::get<0ul,std::string const,proto::MailRedisData>(__in);
      mail = std::get<1ul,std::string const,proto::MailRedisData>(__in);
      proto::MailRedisData::set_is_read(mail, 1);
      v10 = proto::MailRedisData::mail_bin(mail);
      if ( proto::MailBin::collect_state(v10) == 3 )
        std::set<std::string>::insert((std::set<std::string> *const)(v4 + 272), mail_key);
      std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
    }
    ret = RedisOpMailData::modifyMailDataWithTran(
            *(_DWORD *)(v4 + 64),
            (const std::map<std::string,proto::MailRedisData> *)(v4 + 192),
            (const std::set<std::string> *)(v4 + 272),
            (common::midb::GetAndSetTranPtr *)(v4 + 80));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "markMailRead",
        854);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v36,
              (const char (*)[37])"modifyMailDataWithTran failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v36);
      v8 = -1;
    }
    else
    {
      __for_range_1 = (std::map<std::string,proto::MailRedisData> *)(v4 + 192);
      __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 192))._M_node;
      __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v30 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
        _ = std::get<0ul,std::string const,proto::MailRedisData>(v30);
        mail_0 = (std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *)std::get<1ul,std::string const,proto::MailRedisData>(v30);
        v12 = proto::MailRedisData::id(mail_0);
        proto::UpdateRedisMailRsp::add_mail_id_list(rsp_0b, v12);
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
      }
      proto::UpdateRedisMailRsp::set_retcode(rsp_0b, 0);
      __for_range_2 = (std::map<std::string,proto::MailRedisData> *)(v4 + 192);
      __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 192))._M_node;
      __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_2)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v27 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
        __0 = std::get<0ul,std::string const,proto::MailRedisData>(v27);
        mail_1 = std::get<1ul,std::string const,proto::MailRedisData>(v27);
        MailLogHelper::log(*(_DWORD *)(v4 + 64), mail_1, MAIL_OP_READ, MAIL_REASON_BY_CLIENT);
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
      }
      v8 = 0;
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v4 + 272));
  }
  std::map<std::string,proto::MailRedisData>::~map((std::map<std::string,proto::MailRedisData> *const)(v4 + 192));
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v4 + 80));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v8;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 876: range 000000000DEC422C-000000000DEC4C44
__int64 __fastcall MailHandler::changeMailStar(
        MailHandler *const this,
        __int32 uid,
        const proto::UpdateRedisMailReq *req,
        proto::UpdateRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  proto::MailBin *v11; // r14
  _BOOL4 v12; // eax
  const proto::MailBin *v13; // rax
  common::milog::MiLogStream *v14; // rax
  google::protobuf::uint32 v15; // eax
  proto_log::MailOpType v16; // edx
  std::remove_reference<proto::MailRedisData&>::type *v17; // rax
  __int64 result; // rax
  std::string rsp_0a; // [rsp+0h] [rbp-2E0h]
  proto::UpdateRedisMailRsp *rsp_0b; // [rsp+0h] [rbp-2E0h]
  const proto::UpdateRedisMailReq *reqa; // [rsp+8h] [rbp-2D8h]
  MailHandler *thisa; // [rsp+18h] [rbp-2C8h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-2B5h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-2B4h]
  std::map<std::string,proto::MailRedisData>::iterator __for_begin; // [rsp+30h] [rbp-2B0h] BYREF
  std::map<std::string,proto::MailRedisData>::iterator __for_end; // [rsp+38h] [rbp-2A8h] BYREF
  std::map<std::string,proto::MailRedisData> *__for_range; // [rsp+40h] [rbp-2A0h]
  std::map<std::string,proto::MailRedisData> *__for_range_0; // [rsp+48h] [rbp-298h]
  std::map<std::string,proto::MailRedisData> *__for_range_1; // [rsp+50h] [rbp-290h]
  std::map<std::string,proto::MailRedisData> *__for_range_2; // [rsp+58h] [rbp-288h]
  std::pair<const std::string,proto::MailRedisData> *v31; // [rsp+60h] [rbp-280h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *__1; // [rsp+68h] [rbp-278h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail_2; // [rsp+70h] [rbp-270h]
  std::pair<const std::string,proto::MailRedisData> *v34; // [rsp+78h] [rbp-268h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *__0; // [rsp+80h] [rbp-260h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail_1; // [rsp+88h] [rbp-258h]
  const std::pair<const std::string,proto::MailRedisData> *v37; // [rsp+90h] [rbp-250h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailRedisData> >::type *_; // [rsp+98h] [rbp-248h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *mail_0; // [rsp+A0h] [rbp-240h]
  std::pair<const std::string,proto::MailRedisData> *__in; // [rsp+A8h] [rbp-238h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *mail_key; // [rsp+B0h] [rbp-230h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail; // [rsp+B8h] [rbp-228h]
  std::string v43; // [rsp+C0h] [rbp-220h] BYREF
  std::set<unsigned int> del_mail_id_set; // [rsp+E0h] [rbp-200h] BYREF
  char v45[464]; // [rsp+110h] [rbp-1D0h] BYREF

  *(&rsp_0a._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(rsp_0a._anon_0._M_allocated_capacity) = uid;
  rsp_0a._M_string_length = (std::string::size_type)req;
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 10 holder:877 64 4 7 uid:875 80 16 12 tran_ptr:881 112 24 19 update_mail_vec:927 176 48 1"
                        "5 mail_id_set:878 256 48 22 mail_key_value_map:882 336 48 15 persist_set:896";
  *(_QWORD *)(v4 + 16) = MailHandler::changeMailStar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862727] = -218959118;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v43, byte_1BABF140, &__a);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 1u, rsp_0a);
  std::string::~string(&v43);
  std::allocator<char>::~allocator(&__a);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 176));
  v7 = proto::UpdateRedisMailReq::mail_id_list(reqa);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    (std::set<unsigned int> *)(v4 + 176),
    v7);
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  std::map<std::string,proto::MailRedisData>::map((std::map<std::string,proto::MailRedisData> *const)(v4 + 256));
  ret = RedisOpMailData::getMailDataWithTran(
          *(_DWORD *)(v4 + 64),
          (const std::set<unsigned int> *)(v4 + 176),
          (std::map<std::string,proto::MailRedisData> *)(v4 + 256),
          (common::midb::GetAndSetTranPtr *)(v4 + 80));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "changeMailStar",
      886);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&v43,
           (const char (*)[34])"getMailDataWithTran failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
    v9 = -1;
  }
  else if ( std::map<std::string,proto::MailRedisData>::empty((const std::map<std::string,proto::MailRedisData> *const)(v4 + 256)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "changeMailStar",
      892);
    v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            (common::milog::MiLogStream *const)&v43,
            (const char (*)[63])"getMailDataWithTran failed, mail_key_value_map is empty, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
    v9 = -1;
  }
  else
  {
    std::set<std::string>::set((std::set<std::string> *const)(v4 + 336));
    __for_range = (std::map<std::string,proto::MailRedisData> *)(v4 + 256);
    __for_begin._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 256))._M_node;
    __for_end._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin);
      mail_key = std::get<0ul,std::string const,proto::MailRedisData>(__in);
      mail = std::get<1ul,std::string const,proto::MailRedisData>(__in);
      v11 = proto::MailRedisData::mutable_mail_bin(mail);
      v12 = proto::UpdateRedisMailReq::op_type(reqa) == MAIL_UPDATE_OP_STAR_MAIL;
      proto::MailBin::set_importance(v11, v12);
      v13 = proto::MailRedisData::mail_bin(mail);
      if ( proto::MailBin::collect_state(v13) == 3 )
        std::set<std::string>::insert((std::set<std::string> *const)(v4 + 336), mail_key);
      std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin);
    }
    ret = RedisOpMailData::modifyMailDataWithTran(
            *(_DWORD *)(v4 + 64),
            (const std::map<std::string,proto::MailRedisData> *)(v4 + 256),
            (const std::set<std::string> *)(v4 + 336),
            (common::midb::GetAndSetTranPtr *)(v4 + 80));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "changeMailStar",
        909);
      v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v43,
              (const char (*)[37])"modifyMailDataWithTran failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
      v9 = -1;
    }
    else
    {
      __for_range_0 = (std::map<std::string,proto::MailRedisData> *)(v4 + 256);
      __for_begin._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 256))._M_node;
      __for_end._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v37 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin);
        _ = std::get<0ul,std::string const,proto::MailRedisData>(v37);
        mail_0 = (std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *)std::get<1ul,std::string const,proto::MailRedisData>(v37);
        v15 = proto::MailRedisData::id(mail_0);
        proto::UpdateRedisMailRsp::add_mail_id_list(rsp_0b, v15);
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin);
      }
      proto::UpdateRedisMailRsp::set_retcode(rsp_0b, 0);
      __for_range_1 = (std::map<std::string,proto::MailRedisData> *)(v4 + 256);
      __for_begin._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 256))._M_node;
      __for_end._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v34 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin);
        __0 = std::get<0ul,std::string const,proto::MailRedisData>(v34);
        mail_1 = std::get<1ul,std::string const,proto::MailRedisData>(v34);
        if ( proto::UpdateRedisMailReq::op_type(reqa) == MAIL_UPDATE_OP_STAR_MAIL )
          v16 = MAIL_OP_STAR;
        else
          v16 = MAIL_OP_UNSTAR;
        MailLogHelper::log(*(_DWORD *)(v4 + 64), mail_1, v16, MAIL_REASON_BY_CLIENT);
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin);
      }
      std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v4 + 112));
      __for_range_2 = (std::map<std::string,proto::MailRedisData> *)(v4 + 256);
      __for_begin._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 256))._M_node;
      __for_end._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_2)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v31 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin);
        __1 = std::get<0ul,std::string const,proto::MailRedisData>(v31);
        mail_2 = std::get<1ul,std::string const,proto::MailRedisData>(v31);
        v17 = std::move<proto::MailRedisData &>(mail_2);
        std::vector<proto::MailRedisData>::push_back((std::vector<proto::MailRedisData> *const)(v4 + 112), v17);
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin);
      }
      memset(&del_mail_id_set, 0, sizeof(del_mail_id_set));
      std::set<unsigned int>::set(&del_mail_id_set);
      MailHandler::notifyRedisMailChange(
        thisa,
        *(_DWORD *)(v4 + 64),
        (const std::vector<proto::MailRedisData> *)(v4 + 112),
        &del_mail_id_set,
        0);
      std::set<unsigned int>::~set(&del_mail_id_set);
      v9 = 0;
      std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v4 + 112));
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v4 + 336));
  }
  std::map<std::string,proto::MailRedisData>::~map((std::map<std::string,proto::MailRedisData> *const)(v4 + 256));
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v4 + 80));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 176));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v9;
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
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

// Line 938: range 000000000DEC4C46-000000000DEC5DA9
__int64 __fastcall MailHandler::takeMailAttachment(
        MailHandler *const this,
        __int32 uid,
        const proto::UpdateRedisMailReq *req,
        proto::UpdateRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const proto::MailBin *v12; // rax
  const proto::MailBin *v13; // rax
  proto::MailBin *v14; // rax
  proto::MailBin *v15; // r14
  unsigned int v16; // eax
  const proto::MailBin *v17; // rax
  unsigned int v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  google::protobuf::uint32 v27; // eax
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  std::string rsp_0a; // [rsp+0h] [rbp-3E0h]
  proto::UpdateRedisMailRsp *rsp_0b; // [rsp+0h] [rbp-3E0h]
  const proto::UpdateRedisMailReq *const reqa; // [rsp+8h] [rbp-3D8h]
  MailHandler *thisa; // [rsp+18h] [rbp-3C8h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-3B5h] BYREF
  uint32_t left_collected_space; // [rsp+2Ch] [rbp-3B4h]
  int32_t ret; // [rsp+30h] [rbp-3B0h]
  uint32_t max_collected_space; // [rsp+34h] [rbp-3ACh]
  std::map<std::string,proto::MailRedisData>::iterator __for_begin_0; // [rsp+38h] [rbp-3A8h] BYREF
  std::map<std::string,proto::MailRedisData>::iterator __for_end_0; // [rsp+40h] [rbp-3A0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-398h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-390h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-388h]
  std::map<std::string,proto::MailRedisData> *__for_range_0; // [rsp+60h] [rbp-380h]
  std::map<std::string,proto::MailRedisData> *__for_range_1; // [rsp+68h] [rbp-378h]
  std::map<std::string,proto::MailRedisData> *__for_range_2; // [rsp+70h] [rbp-370h]
  std::map<std::string,proto::MailRedisData> *__for_range_3; // [rsp+78h] [rbp-368h]
  std::pair<const std::string,proto::MailRedisData> *v50; // [rsp+80h] [rbp-360h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *__1; // [rsp+88h] [rbp-358h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail_2; // [rsp+90h] [rbp-350h]
  std::pair<const std::string,proto::MailRedisData> *v53; // [rsp+98h] [rbp-348h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *__0; // [rsp+A0h] [rbp-340h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail_1; // [rsp+A8h] [rbp-338h]
  const std::pair<const std::string,proto::MailRedisData> *v56; // [rsp+B0h] [rbp-330h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailRedisData> >::type *_; // [rsp+B8h] [rbp-328h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *mail_0; // [rsp+C0h] [rbp-320h]
  std::pair<const std::string,proto::MailRedisData> *__in; // [rsp+C8h] [rbp-318h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *mail_key; // [rsp+D0h] [rbp-310h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail; // [rsp+D8h] [rbp-308h]
  std::shared_ptr<Config> v62; // [rsp+E0h] [rbp-300h] BYREF
  std::string __x; // [rsp+F0h] [rbp-2F0h] BYREF
  char v64[720]; // [rsp+110h] [rbp-2D0h] BYREF

  *(&rsp_0a._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(rsp_0a._anon_0._M_allocated_capacity) = uid;
  rsp_0a._M_string_length = (std::string::size_type)req;
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(672LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 32 1 10 holder:939 48 4 27 collected_mail_id_count:961 64 4 11 mail_id:941 80 4 7 uid:937 96 "
                        "16 12 tran_ptr:946 128 24 20 update_mail_vec:1051 192 48 15 mail_id_set:940 272 48 22 mail_key_v"
                        "alue_map:947 352 48 15 persist_set:975 432 48 23 persist_mail_id_set:976 512 48 32 del_collect_f"
                        "ail_mail_id_set:977 592 48 20 del_mail_id_set:1022";
  *(_QWORD *)(v4 + 16) = MailHandler::takeMailAttachment;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862730] = -218959118;
  v6[536862732] = -219021312;
  v6[536862733] = 62194;
  v6[536862735] = -218959118;
  v6[536862737] = -219021312;
  v6[536862738] = 62194;
  v6[536862740] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, byte_1BABF140, &__a);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 1u, rsp_0a);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 192));
  __for_range = proto::UpdateRedisMailReq::mail_id_list(reqa);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v4 + 64) = *__for_begin;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 192),
      (const std::set<unsigned int>::value_type *)(v4 + 64));
    ++__for_begin;
  }
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  std::map<std::string,proto::MailRedisData>::map((std::map<std::string,proto::MailRedisData> *const)(v4 + 272));
  ret = RedisOpMailData::getMailDataWithTran(
          *(_DWORD *)(v4 + 80),
          (const std::set<unsigned int> *)(v4 + 192),
          (std::map<std::string,proto::MailRedisData> *)(v4 + 272),
          (common::midb::GetAndSetTranPtr *)(v4 + 96));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "takeMailAttachment",
      951);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&__x,
           (const char (*)[34])"getMailDataWithTran failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    v8 = -1;
  }
  else if ( std::map<std::string,proto::MailRedisData>::empty((const std::map<std::string,proto::MailRedisData> *const)(v4 + 272)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "takeMailAttachment",
      957);
    v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           (common::milog::MiLogStream *const)&__x,
           (const char (*)[63])"getMailDataWithTran failed, mail_key_value_map is empty, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
    ret = RedisOpMailData::getValidMailIdCount(*(_DWORD *)(v4 + 80), (uint32_t *)(v4 + 48), 1);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__x,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "takeMailAttachment",
        965);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)&__x,
              (const char (*)[44])"getValidMailIdCount collected failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
      v8 = -1;
    }
    else
    {
      Config::getConfig();
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
      max_collected_space = ConstValueExcelConfigMgr::getCollectedMailMaxNum(&v11->design_config_.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v62);
      left_collected_space = 0;
      if ( max_collected_space > *(_DWORD *)(v4 + 48) )
        left_collected_space = max_collected_space - *(_DWORD *)(v4 + 48);
      std::set<std::string>::set((std::set<std::string> *const)(v4 + 352));
      std::set<std::string>::set((std::set<std::string> *const)(v4 + 432));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 512));
      __for_range_0 = (std::map<std::string,proto::MailRedisData> *)(v4 + 272);
      __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 272))._M_node;
      __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
        mail_key = std::get<0ul,std::string const,proto::MailRedisData>(__in);
        mail = std::get<1ul,std::string const,proto::MailRedisData>(__in);
        proto::MailRedisData::set_is_attachment_got(mail, 1);
        v12 = proto::MailRedisData::mail_bin(mail);
        if ( !proto::MailBin::importance(v12) )
          proto::MailRedisData::set_is_read(mail, 1);
        v13 = proto::MailRedisData::mail_bin(mail);
        if ( proto::MailBin::collect_state(v13) == 2 )
        {
          v14 = proto::MailRedisData::mutable_mail_bin(mail);
          proto::MailBin::set_collect_state(v14, 3u);
          v15 = proto::MailRedisData::mutable_mail_bin(mail);
          v16 = std::numeric_limits<unsigned int>::max();
          proto::MailBin::set_expire_time(v15, v16);
          proto::MailRedisData::set_is_read(mail, 0);
        }
        v17 = proto::MailRedisData::mail_bin(mail);
        if ( proto::MailBin::collect_state(v17) == 3 )
        {
          if ( left_collected_space )
          {
            std::set<std::string>::insert((std::set<std::string> *const)(v4 + 352), mail_key);
            v18 = proto::MailRedisData::id(mail);
            common::tools::StringUtils::numToStr<unsigned int>(&__x, v18);
            std::set<std::string>::insert((std::set<std::string> *const)(v4 + 432), &__x);
            std::string::~string(&__x);
            --left_collected_space;
          }
          else
          {
            *(_DWORD *)(v4 + 64) = proto::MailRedisData::id(mail);
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v4 + 512),
              (std::set<unsigned int>::value_type *)(v4 + 64));
          }
        }
        std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
      }
      ret = RedisOpMailData::modifyMailDataWithTran(
              *(_DWORD *)(v4 + 80),
              (const std::map<std::string,proto::MailRedisData> *)(v4 + 272),
              (const std::set<std::string> *)(v4 + 352),
              (common::midb::GetAndSetTranPtr *)(v4 + 96));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__x,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "takeMailAttachment",
          1010);
        v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&__x,
                (const char (*)[37])"modifyMailDataWithTran failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
        v8 = -1;
      }
      else
      {
        ret = RedisOpMailData::clearMailIdExpireTime(*(_DWORD *)(v4 + 80), (const std::set<std::string> *)(v4 + 432));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__x,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "takeMailAttachment",
            1018);
          v20 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)&__x,
                  (const char (*)[36])"clearMailIdExpireTime failed, uid: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v4 + 80));
          v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v21,
                  (const char (*)[24])", persist_mail_id_set: ");
          common::milog::MiLogStream::operator<<<std::string>(v22, (const std::set<std::string> *)(v4 + 432));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
          v8 = -1;
        }
        else
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 592));
          ret = MailHandler::batchDelRedisMail(
                  thisa,
                  *(_DWORD *)(v4 + 80),
                  MAIL_REASON_COLLECTED_FULL,
                  (const std::set<unsigned int> *)(v4 + 512),
                  (std::set<unsigned int> *)(v4 + 592));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&__x,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/mail_handler.cpp",
              "takeMailAttachment",
              1026);
            v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)&__x,
                    (const char (*)[32])"batchDelRedisMail failed, uid: ");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v4 + 80));
            v25 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v24,
                    (const char (*)[33])", del_collect_fail_mail_id_set: ");
            common::milog::MiLogStream::operator<<<unsigned int>(v25, (const std::set<unsigned int> *)(v4 + 512));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
            v8 = -1;
          }
          else
          {
            if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 592)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&__x,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/mail_handler.cpp",
                "takeMailAttachment",
                1031);
              v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)&__x,
                      (const char (*)[32])" del_collect_fail_mail_id_set: ");
              common::milog::MiLogStream::operator<<<unsigned int>(v26, (const std::set<unsigned int> *)(v4 + 592));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
            }
            __for_range_1 = (std::map<std::string,proto::MailRedisData> *)(v4 + 272);
            __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 272))._M_node;
            __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_1)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v56 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
              _ = std::get<0ul,std::string const,proto::MailRedisData>(v56);
              mail_0 = (std::tuple_element<1,const std::pair<const std::string,proto::MailRedisData> >::type *)std::get<1ul,std::string const,proto::MailRedisData>(v56);
              v27 = proto::MailRedisData::id(mail_0);
              proto::UpdateRedisMailRsp::add_mail_id_list(rsp_0b, v27);
              std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
            }
            proto::UpdateRedisMailRsp::set_retcode(rsp_0b, 0);
            __for_range_2 = (std::map<std::string,proto::MailRedisData> *)(v4 + 272);
            __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 272))._M_node;
            __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_2)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v53 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
              __0 = std::get<0ul,std::string const,proto::MailRedisData>(v53);
              mail_1 = std::get<1ul,std::string const,proto::MailRedisData>(v53);
              *(_DWORD *)(v4 + 64) = proto::MailRedisData::id(mail_1);
              if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                      (std::set<unsigned int> *)(v4 + 592),
                      (const unsigned int *)(v4 + 64)) )
                MailLogHelper::log(*(_DWORD *)(v4 + 80), mail_1, MAIL_OP_TAKE_ATTACHMENT, MAIL_REASON_BY_CLIENT);
              std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
            }
            std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v4 + 128));
            __for_range_3 = (std::map<std::string,proto::MailRedisData> *)(v4 + 272);
            __for_begin_0._M_node = std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 272))._M_node;
            __for_end_0._M_node = std::map<std::string,proto::MailRedisData>::end(__for_range_3)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v50 = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*(&__for_begin_0);
              __1 = std::get<0ul,std::string const,proto::MailRedisData>(v50);
              mail_2 = std::get<1ul,std::string const,proto::MailRedisData>(v50);
              *(_DWORD *)(v4 + 64) = proto::MailRedisData::id(mail_2);
              if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                      (std::set<unsigned int> *)(v4 + 592),
                      (const unsigned int *)(v4 + 64)) )
                std::vector<proto::MailRedisData>::push_back(
                  (std::vector<proto::MailRedisData> *const)(v4 + 128),
                  mail_2);
              std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++(&__for_begin_0);
            }
            MailHandler::notifyRedisMailChange(
              thisa,
              *(_DWORD *)(v4 + 80),
              (const std::vector<proto::MailRedisData> *)(v4 + 128),
              (const std::set<unsigned int> *)(v4 + 592),
              0);
            v28 = std::set<std::string>::size((const std::set<std::string> *const)(v4 + 352));
            *(_DWORD *)(v4 + 48) = SAFE_ADD<unsigned int,unsigned long>(*(_DWORD *)(v4 + 48), v28);
            if ( (double)*(int *)(v4 + 48) > (double)(int)max_collected_space * 0.8 )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&__x,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/mail_handler.cpp",
                "takeMailAttachment",
                1065);
              v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)&__x,
                      (const char (*)[30])off_1BB54C00);
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      (const unsigned int *)(v4 + 80));
              v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" count:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
            }
            v8 = 0;
            std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v4 + 128));
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 592));
        }
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 512));
      std::set<std::string>::~set((std::set<std::string> *const)(v4 + 432));
      std::set<std::string>::~set((std::set<std::string> *const)(v4 + 352));
    }
  }
  std::map<std::string,proto::MailRedisData>::~map((std::map<std::string,proto::MailRedisData> *const)(v4 + 272));
  std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v4 + 96));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 192));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v8;
  if ( v64 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 1072: range 000000000DEC5DAA-000000000DEC60ED
__int64 __fastcall MailHandler::getRedisMailTransactionStatus(
        MailHandler *const this,
        uint32_t uid,
        const proto::GetRedisMailTransactionStatusReq *req,
        proto::GetRedisMailTransactionStatusRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  __int64 result; // rax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  google::protobuf::Map<std::string,bool> *transaction_status_map; // [rsp+38h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+40h] [rbp-130h]
  const std::string *transaction; // [rsp+48h] [rbp-128h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-120h] BYREF
  google::protobuf::MapPair<std::string,bool> value; // [rsp+70h] [rbp-100h] BYREF
  char v19[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 20 has_transaction:1084 64 4 8 uid:1071 80 48 24 transaction_str_map:1073";
  *(_QWORD *)(v4 + 16) = MailHandler::getRedisMailTransactionStatus;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v4 + 80));
  if ( RedisOpMailData::getMailTransactionMap(*(_DWORD *)(v4 + 64), (std::map<std::string,std::string> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "getRedisMailTransactionStatus",
      1077);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v17,
           (const char (*)[36])"getMailTransactionMap failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    transaction_status_map = proto::GetRedisMailTransactionStatusRsp::mutable_transaction_status_map[abi:cxx11](rsp_0);
    __for_range = proto::GetRedisMailTransactionStatusReq::transaction_list[abi:cxx11](req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      transaction = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      *(_BYTE *)(v4 + 48) = common::tools::MiscUtils::isContains<std::map<std::string,std::string>,std::string>(
                              (std::map<std::string,std::string> *)(v4 + 80),
                              transaction);
      google::protobuf::MapPair<std::string,bool>::MapPair(&value, transaction, (const bool *)(v4 + 48));
      google::protobuf::Map<std::string,bool>::insert(
        (std::pair<google::protobuf::Map<std::string,bool>::iterator,bool> *)&v17,
        transaction_status_map,
        &value);
      google::protobuf::MapPair<std::string,bool>::~MapPair(&value);
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    proto::GetRedisMailTransactionStatusRsp::set_retcode(rsp_0, 0);
    v8 = 0;
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v4 + 80));
  result = v8;
  if ( v19 == (char *)v4 )
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

// Line 1093: range 000000000DEC60EE-000000000DEC6576
void __cdecl MailHandler::notifyRedisMailChange(
        MailHandler *const this,
        uint32_t uid,
        const std::vector<proto::MailRedisData> *update_mail_vec,
        const std::set<unsigned int> *del_mail_id_set,
        uint32_t gameserver_app_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  google::protobuf::RepeatedPtrField<proto::MailRedisData> *updated; // rdx
  unsigned int *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  common::minet::Packet *v11; // rax
  MailService *v12; // r14
  unsigned __int64 v13; // rdx
  common::minet::Packet *v14; // rax
  common::minet::Packet *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-118h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-110h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+80h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 15 packet_ptr:1106 64 64 11 notify:1094";
  *(_QWORD *)(v5 + 16) = MailHandler::notifyRedisMailChange;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862724] = -202116109;
  proto::RedisMailChangeNotify::RedisMailChangeNotify((proto::RedisMailChangeNotify *const)(v5 + 64));
  if ( !std::vector<proto::MailRedisData>::empty(update_mail_vec) )
  {
    updated = proto::RedisMailChangeNotify::mutable_update_mail_list((proto::RedisMailChangeNotify *const)(v5 + 64));
    common::tools::MiscUtils::toRepeated<proto::MailRedisData,proto::MailRedisData>(update_mail_vec, updated);
  }
  __for_range = del_mail_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(del_mail_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(del_mail_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    proto::RedisMailChangeNotify::add_del_mail_id_list((proto::RedisMailChangeNotify *const)(v5 + 64), *v10);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v5 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "notifyRedisMailChange",
      1109);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v27, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    common::minet::Packet::setProto<proto::RedisMailChangeNotify>(v11, (const proto::RedisMailChangeNotify *)(v5 + 64));
    v12 = ServiceBox::findService<MailService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v5 + 32));
    ServiceBase::setPacketSource(v12, (common::minet::PacketPtr)__PAIR128__(v13, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    common::minet::Packet::setUserId(v14, uid);
    v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    common::minet::Packet::setTarget(v15, 3u, gameserver_app_id);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v16);
    v18 = (unsigned __int64)(v17->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v17->_vptr_NetworkMgrBase + 8);
    v19 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v18;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v5 + 32));
    v19(v17, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 32));
  proto::RedisMailChangeNotify::~RedisMailChangeNotify((proto::RedisMailChangeNotify *const)(v5 + 64));
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1121: range 000000000DEC6578-000000000DEC66F6
__int64 __fastcall MailHandler::removeExpiredMailId(
        MailHandler *const this,
        uint32_t uid,
        std::set<std::string> *expire_mail_id_str_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1120";
  *(_QWORD *)(v3 + 16) = MailHandler::removeExpiredMailId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( (unsigned int)RedisOpMailData::removeExpiredMailId(*(_DWORD *)(v3 + 32), expire_mail_id_str_set) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "removeExpiredMailId",
      1125);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v9,
           (const char (*)[34])"removeExpiredMailId failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v3 )
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

// Line 1133: range 000000000DEC66F8-000000000DEC6BC1
__int64 __fastcall MailHandler::removeExpiredTicket(MailHandler *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t cur_time; // [rsp+1Ch] [rbp-164h]
  std::map<std::string,std::string>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::map<std::string,std::string>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::map<std::string,std::string> *__for_range; // [rsp+30h] [rbp-150h]
  const std::pair<const std::string,std::string > *v14; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *ticket; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *timestamp_str; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-130h] BYREF
  char v18[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 timestamp:1146 48 4 8 uid:1132 64 48 15 ticket_map:1134 144 48 23 expired_ticket_set:1143";
  *(_QWORD *)(v2 + 16) = MailHandler::removeExpiredTicket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v2 + 64));
  if ( RedisOpMailData::getMailTicketMap(*(_DWORD *)(v2 + 48), (std::map<std::string,std::string> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "removeExpiredTicket",
      1138);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v17,
           (const char (*)[31])"getMailTicketMap failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    cur_time = common::tools::TimeUtils::getNow();
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 144));
    __for_range = (std::map<std::string,std::string> *)(v2 + 64);
    __for_begin._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v2 + 64))._M_node;
    __for_end._M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v2 + 64))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
      ticket = std::get<0ul,std::string const,std::string>(v14);
      timestamp_str = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v14);
      *(_DWORD *)(v2 + 32) = 0;
      common::tools::StringUtils::strToNum<unsigned int>(timestamp_str, (unsigned int *)(v2 + 32), 1);
      if ( cur_time > *(_DWORD *)(v2 + 32) + 2592000 )
        std::set<std::string>::insert((std::set<std::string> *const)(v2 + 144), ticket);
      std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
    }
    if ( RedisOpMailData::removeMailTicket(*(_DWORD *)(v2 + 48), (const std::set<std::string> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "removeExpiredTicket",
        1157);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v17,
             (const char (*)[31])"removeMailTicket failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = -1;
    }
    else
    {
      if ( RedisOpMailData::removeMailTicketWithMailId(*(_DWORD *)(v2 + 48), (const std::set<std::string> *)(v2 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "removeExpiredTicket",
          1165);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v17,
               (const char (*)[37])"removeMailTicketMailId failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      v6 = 0;
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 144));
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v2 + 64));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1172: range 000000000DEC6BC2-000000000DEC6FE3
__int64 __fastcall MailHandler::removeExpiredTransaction(MailHandler *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t cur_time; // [rsp+1Ch] [rbp-164h]
  std::map<std::string,std::string>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::map<std::string,std::string>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::map<std::string,std::string> *__for_range; // [rsp+30h] [rbp-150h]
  const std::pair<const std::string,std::string > *v13; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *transaction; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *expire_time_str; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-130h] BYREF
  char v17[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 16 expire_time:1185 48 4 8 uid:1171 64 48 24 transaction_str_map:1173 144 48 28 expired_t"
                        "ransaction_set:1182";
  *(_QWORD *)(v2 + 16) = MailHandler::removeExpiredTransaction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v2 + 64));
  if ( RedisOpMailData::getMailTransactionMap(*(_DWORD *)(v2 + 48), (std::map<std::string,std::string> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "removeExpiredTransaction",
      1177);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"getMailTransactionMap failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = -1;
  }
  else
  {
    cur_time = common::tools::TimeUtils::getNow();
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 144));
    __for_range = (std::map<std::string,std::string> *)(v2 + 64);
    __for_begin._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v2 + 64))._M_node;
    __for_end._M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v2 + 64))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
      transaction = std::get<0ul,std::string const,std::string>(v13);
      expire_time_str = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v13);
      *(_DWORD *)(v2 + 32) = 0;
      common::tools::StringUtils::strToNum<unsigned int>(expire_time_str, (unsigned int *)(v2 + 32), 1);
      if ( cur_time > *(_DWORD *)(v2 + 32) )
        std::set<std::string>::insert((std::set<std::string> *const)(v2 + 144), transaction);
      std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
    }
    if ( RedisOpMailData::removeMailTransaction(*(_DWORD *)(v2 + 48), (const std::set<std::string> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "removeExpiredTransaction",
        1197);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v16,
             (const char (*)[36])"removeMailTransaction failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 144));
  }
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v2 + 64));
  result = v6;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1206: range 000000000DEC6FE4-000000000DEC835F
__int64 __fastcall MailHandler::ensureSpaceForNewMail(
        MailHandler *const this,
        uint32_t uid,
        bool is_persistent,
        __int32 need_space,
        uint32_t *left_space)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  char v10; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t CollectedMailMaxNum; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r15
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::vector<std::string>::size_type v24; // rax
  int v25; // eax
  uint32_t v26; // ecx
  std::vector<std::string>::size_type v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::vector<std::string>::size_type v35; // r15
  std::vector<std::string>::size_type v36; // r15
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::difference_type v37; // r15
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::difference_type v38; // r15
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // r15d
  const proto::MailBin *v42; // rax
  int v43; // r15d
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  unsigned __int64 v47; // rcx
  __int32 v48; // edi
  __int64 result; // rax
  std::string v50; // [rsp+0h] [rbp-2B0h]
  std::string *__last; // [rsp+8h] [rbp-2A8h]
  std::allocator<char> __a; // [rsp+3Bh] [rbp-275h] BYREF
  std::set<unsigned int>::value_type __x; // [rsp+3Ch] [rbp-274h] BYREF
  uint32_t from_index; // [rsp+40h] [rbp-270h]
  uint32_t to_index; // [rsp+44h] [rbp-26Ch]
  int32_t ret; // [rsp+48h] [rbp-268h]
  uint32_t max_count; // [rsp+4Ch] [rbp-264h]
  std::vector<proto::MailRedisData>::iterator __for_begin; // [rsp+50h] [rbp-260h] BYREF
  std::vector<proto::MailRedisData>::iterator __for_end; // [rsp+58h] [rbp-258h] BYREF
  std::vector<proto::MailRedisData> *__for_range; // [rsp+60h] [rbp-250h]
  const proto::MailRedisData *mail; // [rsp+68h] [rbp-248h]
  std::vector<proto::MailRedisData> *__for_range_0; // [rsp+70h] [rbp-240h]
  const proto::MailRedisData *mail_0; // [rsp+78h] [rbp-238h]
  std::shared_ptr<Config> v66; // [rsp+80h] [rbp-230h] BYREF
  std::shared_ptr<Config> v67; // [rsp+90h] [rbp-220h] BYREF
  common::milog::MiLogStream v68; // [rsp+A0h] [rbp-210h] BYREF
  char v69[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  *((_DWORD *)&v50._anon_0._M_allocated_capacity + 3) = need_space;
  v50._anon_0._M_allocated_capacity = (std::string::size_type)left_space;
  v6 = (unsigned __int64)v69;
  v50._M_dataplus._M_p = v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(448LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "9 48 1 11 holder:1243 64 4 24 valid_mail_id_count:1213 80 4 22 need_remove_count:1277 96 4 8 uid"
                        ":1205 112 24 26 valid_mail_id_str_vec:1245 176 24 17 del_mail_vec:1276 240 24 20 mail_id_str_vec"
                        ":1290 304 24 13 mail_vec:1291 368 48 20 del_mail_id_set:1275";
  *(_QWORD *)(v6 + 16) = MailHandler::ensureSpaceForNewMail;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862724] = -218959360;
  v8[536862725] = 62194;
  v8[536862726] = -218959360;
  v8[536862727] = 62194;
  v8[536862728] = -218959360;
  v8[536862729] = 62194;
  v8[536862730] = -218959360;
  v8[536862731] = 62194;
  v8[536862733] = -202116109;
  *(_DWORD *)(v6 + 96) = uid;
  if ( *((_DWORD *)&v50._anon_0._M_allocated_capacity + 3) )
  {
    if ( *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
      && (char)((v50._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_store4(v50._anon_0._M_allocated_capacity);
    }
    *(_DWORD *)v50._anon_0._M_allocated_capacity = 0;
    *(_DWORD *)(v6 + 64) = 0;
    ret = RedisOpMailData::getValidMailIdCount(*(_DWORD *)(v6 + 96), (uint32_t *)(v6 + 64), is_persistent);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "ensureSpaceForNewMail",
        1217);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v68,
             (const char (*)[34])"getValidMailIdCount failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 96));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v5 = -1;
    }
    else
    {
      v10 = 0;
      LOBYTE(v50._M_string_length) = 0;
      Config::getConfig();
      if ( is_persistent )
      {
        v10 = 1;
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66);
        CollectedMailMaxNum = ConstValueExcelConfigMgr::getCollectedMailMaxNum(&v11->design_config_.txt_config_mgr.const_value_config_mgr);
      }
      else
      {
        LOBYTE(v50._M_string_length) = 1;
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
        CollectedMailMaxNum = ConstValueExcelConfigMgr::getNormalMailMaxNum(&v13->design_config_.txt_config_mgr.const_value_config_mgr);
      }
      max_count = CollectedMailMaxNum;
      if ( LOBYTE(v50._M_string_length) )
        std::shared_ptr<Config>::~shared_ptr(&v67);
      if ( v10 )
        std::shared_ptr<Config>::~shared_ptr(&v66);
      if ( is_persistent && (double)*(int *)(v6 + 64) > (double)(int)max_count * 0.8 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mail_handler.cpp",
          "ensureSpaceForNewMail",
          1227);
        v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v68, (const char (*)[30])off_1BB54C00);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v6 + 96));
        v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream(&v68);
      }
      if ( max_count > *(_DWORD *)(v6 + 64) )
      {
        v17 = max_count - *(_DWORD *)(v6 + 64);
        if ( *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
          && (char)((v50._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_store4(v50._anon_0._M_allocated_capacity);
        }
        *(_DWORD *)v50._anon_0._M_allocated_capacity = v17;
      }
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mail_handler.cpp",
        "ensureSpaceForNewMail",
        1237);
      v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v68,
              (const char (*)[22])"valid_mail_id_count: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" persistent:");
      common::milog::MiLogStream::operator<<(v20, is_persistent);
      common::milog::MiLogStream::~MiLogStream(&v68);
      if ( max_count < *(_DWORD *)(v6 + 64) + *((_DWORD *)&v50._anon_0._M_allocated_capacity + 3) )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v68, byte_1BABF140, &__a);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 1u, v50);
        std::string::~string(&v68);
        std::allocator<char>::~allocator(&__a);
        std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 112));
        ret = RedisOpMailData::getAllValidMailIdStr(
                *(_DWORD *)(v6 + 96),
                (std::vector<std::string> *)(v6 + 112),
                0,
                is_persistent);
        if ( ret )
        {
          v5 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/mail_handler.cpp",
            "ensureSpaceForNewMail",
            1252);
          v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v68,
                  (const char (*)[29])"valid_mail_id_str_vec.size: ");
          __for_end._M_current = (proto::MailRedisData *)std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
          v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v21,
                  (const unsigned __int64 *)&__for_end);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v22,
                  (const char (*)[16])" is_persistent:");
          common::milog::MiLogStream::operator<<(v23, is_persistent);
          common::milog::MiLogStream::~MiLogStream(&v68);
          v24 = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
          if ( v24 < max_count )
          {
            v25 = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
            v26 = max_count - v25;
            if ( *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
              && (char)((v50._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(v50._anon_0._M_allocated_capacity);
            }
            *(_DWORD *)v50._anon_0._M_allocated_capacity = v26;
          }
          v27 = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
          if ( v27 + *((unsigned int *)&v50._anon_0._M_allocated_capacity + 3) > max_count )
          {
            if ( is_persistent )
            {
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/mail_handler.cpp",
                "ensureSpaceForNewMail",
                1267);
              v31 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v68,
                      (const char (*)[28])" collected mail full! @uid ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v6 + 96));
              common::milog::MiLogStream::~MiLogStream(&v68);
              v5 = -1;
            }
            else
            {
              from_index = 0;
              to_index = 0;
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v6 + 368));
              std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v6 + 176));
              v32 = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112))
                  + *((_DWORD *)&v50._anon_0._M_allocated_capacity + 3);
              Config::getConfig();
              v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
              *(_DWORD *)(v6 + 80) = v32
                                   - ConstValueExcelConfigMgr::getNormalMailMaxNum(&v33->design_config_.txt_config_mgr.const_value_config_mgr);
              std::shared_ptr<Config>::~shared_ptr(&v67);
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/mail_handler.cpp",
                "ensureSpaceForNewMail",
                1278);
              v34 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v68,
                      (const char (*)[25])"mail need remove count: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v6 + 80));
              common::milog::MiLogStream::~MiLogStream(&v68);
              do
              {
                v35 = to_index;
                if ( v35 >= std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112)) )
                  break;
                v36 = to_index + 100;
                if ( v36 >= std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112)) )
                  to_index = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
                else
                  to_index += 100;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
                v37 = to_index;
                __for_end._M_current = (proto::MailRedisData *)std::vector<std::string>::begin((std::vector<std::string> *const)(v6 + 112))._M_current;
                __last = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator+(
                           (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)&__for_end,
                           v37)._M_current;
                v38 = from_index;
                __for_begin._M_current = (proto::MailRedisData *)std::vector<std::string>::begin((std::vector<std::string> *const)(v6 + 112))._M_current;
                v39._M_current = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator+(
                                   (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)&__for_begin,
                                   v38)._M_current;
                std::vector<std::string>::vector<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>,void>(
                  (std::vector<std::string> *const)(v6 + 240),
                  v39,
                  (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)__last,
                  (const std::vector<std::string>::allocator_type *)&__a);
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
                std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v6 + 304));
                ret = RedisOpMailData::getMailData(
                        *(_DWORD *)(v6 + 96),
                        (const std::vector<std::string> *)(v6 + 240),
                        (std::vector<proto::MailRedisData> *)(v6 + 304));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/mail_handler.cpp",
                    "ensureSpaceForNewMail",
                    1295);
                  v40 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v68,
                          (const char (*)[26])"getMailData failed, uid: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v6 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v68);
                  v5 = -1;
                  v41 = 0;
                }
                else
                {
                  __for_range = (std::vector<proto::MailRedisData> *)(v6 + 304);
                  __for_begin._M_current = std::vector<proto::MailRedisData>::begin((std::vector<proto::MailRedisData> *const)(v6 + 304))._M_current;
                  __for_end._M_current = std::vector<proto::MailRedisData>::end(__for_range)._M_current;
                  while ( __gnu_cxx::operator!=<proto::MailRedisData *,std::vector<proto::MailRedisData>>(
                            &__for_begin,
                            &__for_end) )
                  {
                    mail = __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator*(&__for_begin);
                    v42 = proto::MailRedisData::mail_bin(mail);
                    if ( proto::MailBin::item_param_list_size(v42) )
                    {
                      if ( proto::MailRedisData::is_attachment_got(mail) )
                      {
                        __x = proto::MailRedisData::id(mail);
                        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v6 + 368), &__x);
                        std::vector<proto::MailRedisData>::push_back(
                          (std::vector<proto::MailRedisData> *const)(v6 + 176),
                          mail);
                        if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v6 + 368)) >= *(unsigned int *)(v6 + 80) )
                          break;
                      }
                    }
                    else
                    {
                      __x = proto::MailRedisData::id(mail);
                      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v6 + 368), &__x);
                      std::vector<proto::MailRedisData>::push_back(
                        (std::vector<proto::MailRedisData> *const)(v6 + 176),
                        mail);
                      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v6 + 368)) >= *(unsigned int *)(v6 + 80) )
                        break;
                    }
                    __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator++(&__for_begin);
                  }
                  if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v6 + 368)) < *(unsigned int *)(v6 + 80) )
                  {
                    from_index += 100;
                    v41 = 2;
                  }
                  else
                  {
                    v41 = 1;
                  }
                }
                std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v6 + 304));
                if ( v41 )
                {
                  if ( v41 == 2 )
                    v43 = 2;
                  else
                    v43 = 1;
                }
                else
                {
                  v43 = 0;
                }
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 240));
                if ( !v43 )
                  goto LABEL_75;
              }
              while ( v43 == 2 );
              if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v6 + 368)) >= *(unsigned int *)(v6 + 80) )
              {
                ret = RedisOpMailData::delMailData(*(_DWORD *)(v6 + 96), (const std::set<unsigned int> *)(v6 + 368));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/mail_handler.cpp",
                    "ensureSpaceForNewMail",
                    1340);
                  v45 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v68,
                          (const char (*)[26])"delMailData falied, uid: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    (const unsigned int *)(v6 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v68);
                  v5 = -1;
                }
                else
                {
                  ret = RedisOpMailData::removeMailId(*(_DWORD *)(v6 + 96), (const std::set<unsigned int> *)(v6 + 368));
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v68,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/handler/mail_handler.cpp",
                      "ensureSpaceForNewMail",
                      1347);
                    v46 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            &v68,
                            (const char (*)[27])"removeMailId falied, uid: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v46,
                      (const unsigned int *)(v6 + 96));
                    common::milog::MiLogStream::~MiLogStream(&v68);
                    v5 = -1;
                  }
                  else
                  {
                    v47 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v6 + 368));
                    if ( *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
                      && (char)((v50._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      __asan_report_load4(v50._anon_0._M_allocated_capacity);
                    }
                    v48 = SAFE_ADD<unsigned int,unsigned long>(*(_DWORD *)v50._anon_0._M_allocated_capacity, v47);
                    if ( *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
                      && (char)((v50._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v50._anon_0._M_allocated_capacity >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      v48 = *(_DWORD *)v50._anon_0._M_local_buf;
                      __asan_report_store4(v50._anon_0._M_allocated_capacity);
                    }
                    *(_DWORD *)v50._anon_0._M_allocated_capacity = v48;
                    __for_range_0 = (std::vector<proto::MailRedisData> *)(v6 + 176);
                    __for_begin._M_current = std::vector<proto::MailRedisData>::begin((std::vector<proto::MailRedisData> *const)(v6 + 176))._M_current;
                    __for_end._M_current = std::vector<proto::MailRedisData>::end(__for_range_0)._M_current;
                    while ( __gnu_cxx::operator!=<proto::MailRedisData *,std::vector<proto::MailRedisData>>(
                              &__for_begin,
                              &__for_end) )
                    {
                      mail_0 = __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator*(&__for_begin);
                      MailLogHelper::log(*(_DWORD *)(v6 + 96), mail_0, MAIL_OP_DEL, MAIL_REASON_FULL);
                      __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator++(&__for_begin);
                    }
                    *(_QWORD *)(v6 + 304) = 0LL;
                    *(_QWORD *)(v6 + 312) = 0LL;
                    *(_QWORD *)(v6 + 320) = 0LL;
                    std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v6 + 304));
                    MailHandler::notifyRedisMailChange(
                      this,
                      *(_DWORD *)(v6 + 96),
                      (const std::vector<proto::MailRedisData> *)(v6 + 304),
                      (const std::set<unsigned int> *)(v6 + 368),
                      0);
                    std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v6 + 304));
                    v5 = 0;
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/mail_handler.cpp",
                  "ensureSpaceForNewMail",
                  1333);
                v44 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        &v68,
                        (const char (*)[42])off_1BB554A0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  (const unsigned int *)(v6 + 96));
                common::milog::MiLogStream::~MiLogStream(&v68);
                v5 = -1;
              }
LABEL_75:
              std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v6 + 176));
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v6 + 368));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/mail_handler.cpp",
              "ensureSpaceForNewMail",
              1261);
            v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v68,
                    (const char (*)[15])"space enough: ");
            __for_end._M_current = (proto::MailRedisData *)std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 112));
            v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v28,
                    (const unsigned __int64 *)&__for_end);
            v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v6 + 96));
            common::milog::MiLogStream::~MiLogStream(&v68);
            v5 = 0;
          }
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 112));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
      }
      else
      {
        v5 = 0;
      }
    }
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v50._M_dataplus._M_p == (std::string::pointer)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 1365: range 000000000DEC8360-000000000DEC8D6D
__int64 __fastcall MailHandler::resendRedisMail(
        MailHandler *const this,
        uint32_t uid,
        const proto::ResendRedisMailReq *req,
        proto::ResendRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool *v7; // rax
  _BYTE *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int v17; // r14d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  bool *v30; // rax
  _BYTE *v31; // rdx
  std::remove_reference<proto::MailRedisData&>::type *v32; // rax
  __int64 result; // rax
  bool is_collected; // [rsp+23h] [rbp-1EDh]
  google::protobuf::Map<std::string,bool> *resend_status_map; // [rsp+28h] [rbp-1E8h]
  const google::protobuf::Map<std::string,proto::MailBin> *__for_range; // [rsp+30h] [rbp-1E0h]
  const google::protobuf::Map<std::string,proto::MailBin> *__for_range_0; // [rsp+38h] [rbp-1D8h]
  google::protobuf::Map<std::string,proto::MailBin>::const_reference p_transaction_0; // [rsp+40h] [rbp-1D0h]
  google::protobuf::Map<std::string,proto::MailBin>::const_reference p_transaction; // [rsp+48h] [rbp-1C8h]
  google::protobuf::Map<std::string,proto::MailBin>::const_iterator __for_begin; // [rsp+50h] [rbp-1C0h] BYREF
  google::protobuf::Map<std::string,proto::MailBin>::const_iterator __for_end; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v44; // [rsp+90h] [rbp-180h] BYREF
  std::set<unsigned int> del_mail_id_set; // [rsp+B0h] [rbp-160h] BYREF
  char v46[304]; // [rsp+E0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 22 normal_mail_count:1367 48 4 25 collected_mail_count:1368 64 4 15 left_space:1384 80 4 "
                        "25 left_collected_space:1392 96 4 8 uid:1364 112 24 17 new_mail_vec:1400 176 40 9 mail:1423";
  *(_QWORD *)(v4 + 16) = MailHandler::resendRedisMail;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 96) = uid;
  resend_status_map = proto::ResendRedisMailRsp::mutable_resend_status_map[abi:cxx11](rsp_0);
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  __for_range = proto::ResendRedisMailReq::mail_bin_map[abi:cxx11](req);
  google::protobuf::Map<std::string,proto::MailBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<std::string,proto::MailBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_transaction = google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator*(&__for_begin);
    v7 = google::protobuf::Map<std::string,bool>::operator[](resend_status_map, &p_transaction->first);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v7);
    }
    *v8 = 0;
    if ( proto::MailBin::collect_state(&p_transaction->second) == 3 )
      ++*(_DWORD *)(v4 + 48);
    else
      ++*(_DWORD *)(v4 + 32);
    google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v44,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/mail_handler.cpp",
    "resendRedisMail",
    1381);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v44, (const char (*)[16])" normal count: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])", collected count: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v44);
  *(_DWORD *)(v4 + 64) = 0;
  if ( (unsigned int)MailHandler::ensureSpaceForNewMail(
                       this,
                       *(_DWORD *)(v4 + 96),
                       0,
                       *(_DWORD *)(v4 + 32),
                       (uint32_t *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mail_handler.cpp",
      "resendRedisMail",
      1388);
    v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v44,
            (const char (*)[43])"ensureSpaceForNewMail normal failed, uid: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 96));
    v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])", need_space: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", left_space:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v17 = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 80) = 0;
    if ( (unsigned int)MailHandler::ensureSpaceForNewMail(
                         this,
                         *(_DWORD *)(v4 + 96),
                         1,
                         *(_DWORD *)(v4 + 48),
                         (uint32_t *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "resendRedisMail",
        1396);
      v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v44,
              (const char (*)[46])"ensureSpaceForNewMail collected failed, uid: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 96));
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])", need_space: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])", left_space:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v4 + 112));
    __for_range_0 = proto::ResendRedisMailReq::mail_bin_map[abi:cxx11](req);
    google::protobuf::Map<std::string,proto::MailBin>::begin(&__for_begin, __for_range_0);
    google::protobuf::Map<std::string,proto::MailBin>::end(&__for_end, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_transaction_0 = google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator*(&__for_begin);
      is_collected = 0;
      if ( proto::MailBin::collect_state(&p_transaction_0->second) != 3 || (is_collected = 1, *(_DWORD *)(v4 + 80)) )
      {
        v23 = proto::MailBin::expire_time(&p_transaction_0->second);
        if ( (unsigned int)RedisOpMailData::insertMailTransaction(*(_DWORD *)(v4 + 96), &p_transaction_0->first, v23) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "resendRedisMail",
            1418);
          v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v44,
                  (const char (*)[36])"insertMailTransaction failed, uid: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v4 + 96));
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v25,
                  (const char (*)[16])", transaction: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &p_transaction_0->first);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v4 + 176));
          if ( (unsigned int)MailHandler::addNewRedisMail(
                               this,
                               *(_DWORD *)(v4 + 96),
                               &p_transaction_0->second,
                               1u,
                               (proto::MailRedisData *)(v4 + 176)) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/mail_handler.cpp",
              "resendRedisMail",
              1427);
            v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v44,
                    (const char (*)[30])"addNewRedisMail failed, uid: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v4 + 96));
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v28,
                    (const char (*)[16])", transaction: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &p_transaction_0->first);
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
          else
          {
            v30 = google::protobuf::Map<std::string,bool>::operator[](resend_status_map, &p_transaction_0->first);
            v31 = v30;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v30 & 7) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(v30);
            }
            *v31 = 1;
            v32 = std::move<proto::MailRedisData &>((proto::MailRedisData *)(v4 + 176));
            std::vector<proto::MailRedisData>::emplace_back<proto::MailRedisData>(
              (std::vector<proto::MailRedisData> *const)(v4 + 112),
              v32,
              v32);
            if ( is_collected )
              --*(_DWORD *)(v4 + 80);
          }
          proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v4 + 176));
        }
      }
      google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator++(&__for_begin);
    }
    proto::ResendRedisMailRsp::set_retcode(rsp_0, 0);
    memset(&del_mail_id_set, 0, sizeof(del_mail_id_set));
    std::set<unsigned int>::set(&del_mail_id_set);
    MailHandler::notifyRedisMailChange(
      this,
      *(_DWORD *)(v4 + 96),
      (const std::vector<proto::MailRedisData> *)(v4 + 112),
      &del_mail_id_set,
      0);
    std::set<unsigned int>::~set(&del_mail_id_set);
    v17 = 0;
    std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v4 + 112));
  }
  result = v17;
  if ( v46 == (char *)v4 )
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

// Line 1447: range 000000000DEC8D6E-000000000DEC944C
__int64 __fastcall MailHandler::batchDelRedisMail(
        MailHandler *const this,
        uint32_t uid,
        unsigned int op_reason,
        const std::set<unsigned int> *mail_id_set,
        std::set<unsigned int> *del_mail_id_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  std::string del_mail_id_seta; // [rsp+0h] [rbp-150h]
  std::set<unsigned int> *del_mail_id_setb; // [rsp+0h] [rbp-150h]
  const std::set<unsigned int> *mail_id_seta; // [rsp+8h] [rbp-148h]
  proto_log::MailOpReason op_reasona; // [rsp+10h] [rbp-140h]
  std::allocator<char> __a; // [rsp+27h] [rbp-129h] BYREF
  std::set<unsigned int>::value_type __x; // [rsp+28h] [rbp-128h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-124h]
  std::vector<proto::MailRedisData>::iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::vector<proto::MailRedisData>::iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  std::vector<proto::MailRedisData> *__for_range; // [rsp+40h] [rbp-110h]
  std::vector<proto::MailRedisData> *__for_range_0; // [rsp+48h] [rbp-108h]
  const proto::MailRedisData *mail_0; // [rsp+50h] [rbp-100h]
  const proto::MailRedisData *mail; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+80h] [rbp-D0h] BYREF

  *(&del_mail_id_seta._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  del_mail_id_seta._anon_0._M_allocated_capacity = __PAIR64__(uid, op_reason);
  del_mail_id_seta._M_string_length = (std::string::size_type)mail_id_set;
  del_mail_id_seta._M_dataplus._M_p = (std::string::pointer)del_mail_id_set;
  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 1 11 holder:1454 48 4 8 uid:1445 64 16 13 tran_ptr:1455 96 24 13 mail_vec:1456";
  *(_QWORD *)(v5 + 16) = MailHandler::batchDelRedisMail;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -219021312;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 48) = uid;
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)del_mail_id_seta._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/mail_handler.cpp",
      "batchDelRedisMail",
      1450);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v28,
           (const char (*)[28])"mail id set is empty, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, byte_1BABF140, &__a);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 1u, del_mail_id_seta);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    std::vector<proto::MailRedisData>::vector((std::vector<proto::MailRedisData> *const)(v5 + 96));
    ret = RedisOpMailData::getMailDataWithTran(
            *(_DWORD *)(v5 + 48),
            mail_id_seta,
            (std::vector<proto::MailRedisData> *)(v5 + 96),
            (common::midb::GetAndSetTranPtr *)(v5 + 64));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "batchDelRedisMail",
        1460);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v28,
              (const char (*)[34])"getMailDataWithTran failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = -1;
    }
    else if ( std::vector<proto::MailRedisData>::empty((const std::vector<proto::MailRedisData> *const)(v5 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mail_handler.cpp",
        "batchDelRedisMail",
        1465);
      v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v28,
              (const char (*)[53])"getMailDataWithTran failed, mail_vec is empty, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = -1;
    }
    else
    {
      __for_range = (std::vector<proto::MailRedisData> *)(v5 + 96);
      __for_begin._M_current = std::vector<proto::MailRedisData>::begin((std::vector<proto::MailRedisData> *const)(v5 + 96))._M_current;
      __for_end._M_current = std::vector<proto::MailRedisData>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<proto::MailRedisData *,std::vector<proto::MailRedisData>>(&__for_begin, &__for_end) )
      {
        mail = __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator*(&__for_begin);
        __x = proto::MailRedisData::id(mail);
        std::set<unsigned int>::insert(del_mail_id_setb, &__x);
        __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator++(&__for_begin);
      }
      ret = RedisOpMailData::delMailDataWithTran(
              *(_DWORD *)(v5 + 48),
              del_mail_id_setb,
              (common::midb::GetAndSetTranPtr *)(v5 + 64));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "batchDelRedisMail",
          1477);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v28,
                (const char (*)[34])"delMailDataWithTran failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
        v9 = -1;
      }
      else
      {
        ret = RedisOpMailData::removeMailId(*(_DWORD *)(v5 + 48), del_mail_id_setb);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "batchDelRedisMail",
            1485);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v28,
                  (const char (*)[27])"removeMailId failed, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v28);
          v9 = -1;
        }
        else
        {
          __for_range_0 = (std::vector<proto::MailRedisData> *)(v5 + 96);
          __for_begin._M_current = std::vector<proto::MailRedisData>::begin((std::vector<proto::MailRedisData> *const)(v5 + 96))._M_current;
          __for_end._M_current = std::vector<proto::MailRedisData>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<proto::MailRedisData *,std::vector<proto::MailRedisData>>(
                    &__for_begin,
                    &__for_end) )
          {
            mail_0 = __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator*(&__for_begin);
            MailLogHelper::log(*(_DWORD *)(v5 + 48), mail_0, MAIL_OP_DEL, op_reasona);
            __gnu_cxx::__normal_iterator<proto::MailRedisData *,std::vector<proto::MailRedisData>>::operator++(&__for_begin);
          }
          v9 = 0;
        }
      }
    }
    std::vector<proto::MailRedisData>::~vector((std::vector<proto::MailRedisData> *const)(v5 + 96));
    std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v5 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  result = v9;
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1500: range 000000000DEC944E-000000000DECA62F
void __fastcall MailHandler::updateMailCollectState(
        MailHandler *const this,
        uint32_t uid,
        const proto::GetRedisMailReq *req,
        proto::GetRedisMailRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  proto::MailBin *v20; // rax
  proto::MailBin *v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::set<unsigned int>::value_type __x; // [rsp+24h] [rbp-43Ch] BYREF
  uint32_t left_collected_space; // [rsp+28h] [rbp-438h]
  int32_t ret; // [rsp+2Ch] [rbp-434h]
  uint32_t max_collected_space; // [rsp+30h] [rbp-430h]
  uint32_t collect_state; // [rsp+34h] [rbp-42Ch]
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+38h] [rbp-428h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+40h] [rbp-420h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin_0; // [rsp+48h] [rbp-418h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end_0; // [rsp+50h] [rbp-410h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+58h] [rbp-408h]
  std::map<std::string,proto::MailRedisData> *__for_range_1; // [rsp+60h] [rbp-400h]
  std::pair<const std::string,proto::MailRedisData> *__in; // [rsp+68h] [rbp-3F8h]
  std::tuple_element<0,std::pair<const std::string,proto::MailRedisData> >::type *mail_key; // [rsp+70h] [rbp-3F0h]
  std::tuple_element<1,std::pair<const std::string,proto::MailRedisData> >::type *mail; // [rsp+78h] [rbp-3E8h]
  const std::string *mail_str; // [rsp+80h] [rbp-3E0h]
  proto::MailBin *mail_bin; // [rsp+88h] [rbp-3D8h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range_0; // [rsp+90h] [rbp-3D0h]
  const proto::ItemParamBin *item_param; // [rsp+98h] [rbp-3C8h]
  std::shared_ptr<Config> v52; // [rsp+A0h] [rbp-3C0h] BYREF
  common::milog::MiLogStream v53; // [rsp+B0h] [rbp-3B0h] BYREF
  char v54[912]; // [rsp+D0h] [rbp-390h] BYREF

  v4 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 32 4 18 collect_state:1538 48 4 28 collected_mail_id_count:1567 64 4 8 uid:1499 80 16 13 tran"
                        "_ptr:1552 112 40 9 mail:1516 192 48 27 mail_collect_state_map:1511 272 48 16 mail_id_set:1512 35"
                        "2 48 23 mail_key_value_map:1553 432 48 16 persist_set:1581 512 48 24 persist_mail_id_set:1582 59"
                        "2 48 33 del_collect_fail_mail_id_set:1583 672 48 20 del_mail_id_set:1620 752 72 16 check_param:1524";
  *(_QWORD *)(v4 + 16) = MailHandler::updateMailCollectState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862730] = -218959118;
  v6[536862732] = -219021312;
  v6[536862733] = 62194;
  v6[536862735] = -218959118;
  v6[536862737] = -219021312;
  v6[536862738] = 62194;
  v6[536862740] = -218959118;
  v6[536862742] = -219021312;
  v6[536862743] = 62194;
  v6[536862745] = -218103808;
  v6[536862746] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !proto::GetRedisMailReq::is_collectible_mail_transfered(req)
    && proto::GetRedisMailReq::op_type(req) == MAIL_GET_OP_UNTREATED )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 192));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 272));
    __for_range = proto::GetRedisMailRsp::mail_str_list[abi:cxx11](rsp_0);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      mail_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v4 + 112));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 112, mail_str) != 1 )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mail_handler.cpp",
          "updateMailCollectState",
          1519);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v53,
          (const char (*)[28])"Mail ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream(&v53);
      }
      else
      {
        mail_bin = proto::MailRedisData::mutable_mail_bin((proto::MailRedisData *const)(v4 + 112));
        MailCheckCollectStateParam::MailCheckCollectStateParam((MailCheckCollectStateParam *const)(v4 + 752));
        *(_DWORD *)(v4 + 752) = proto::MailRedisData::id((const proto::MailRedisData *const)(v4 + 112));
        *(_DWORD *)(v4 + 756) = proto::MailBin::config_id(mail_bin);
        *(_DWORD *)(v4 + 760) = proto::MailBin::send_time(mail_bin);
        *(_DWORD *)(v4 + 764) = proto::MailBin::expire_time(mail_bin);
        *(_DWORD *)(v4 + 768) = proto::MailBin::collect_state(mail_bin);
        *(_BYTE *)(v4 + 772) = proto::MailRedisData::is_attachment_got((const proto::MailRedisData *const)(v4 + 112));
        __for_range_0 = proto::MailBin::item_param_list(mail_bin);
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range_0).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin_0);
          if ( proto::ItemParamBin::count(item_param) )
          {
            __x = proto::ItemParamBin::item_id(item_param);
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 776), &__x);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin_0);
        }
        Config::getConfig();
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
        *(_DWORD *)(v4 + 32) = TxtConfigMgr::calcMailCollectState(
                                 &v7->design_config_.txt_config_mgr,
                                 (const MailCheckCollectStateParam *)(v4 + 752),
                                 *(_DWORD *)(v4 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v52);
        *(_DWORD *)(v4 + 48) = proto::MailBin::collect_state(mail_bin);
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/mail_handler.cpp",
          "updateMailCollectState",
          1540);
        v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v53,
               (const char (*)[17])" [COLLECT_MAIL] ");
        __x = proto::MailRedisData::id((const proto::MailRedisData *const)(v4 + 112));
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
        v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v9,
                (const char (*)[28])" change collect_state from:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])off_1BB55D00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v53);
        proto::MailBin::set_collect_state(mail_bin, *(_DWORD *)(v4 + 32));
        __x = proto::MailRedisData::id((const proto::MailRedisData *const)(v4 + 112));
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 272), &__x);
        v13 = *(_DWORD *)(v4 + 32);
        __x = proto::MailRedisData::id((const proto::MailRedisData *const)(v4 + 112));
        v14 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 192),
                &__x);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v14);
        }
        *v15 = v13;
        MailCheckCollectStateParam::~MailCheckCollectStateParam((MailCheckCollectStateParam *const)(v4 + 752));
      }
      proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v4 + 112));
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 272)) )
    {
      proto::GetRedisMailRsp::set_is_collectible_mail_transfered(rsp_0, 1);
    }
    else
    {
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 88) = 0LL;
      std::map<std::string,proto::MailRedisData>::map((std::map<std::string,proto::MailRedisData> *const)(v4 + 352));
      ret = RedisOpMailData::getMailDataWithTran(
              *(_DWORD *)(v4 + 64),
              (const std::set<unsigned int> *)(v4 + 272),
              (std::map<std::string,proto::MailRedisData> *)(v4 + 352),
              (common::midb::GetAndSetTranPtr *)(v4 + 80));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "updateMailCollectState",
          1557);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v53,
                (const char (*)[34])"getMailDataWithTran failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v53);
      }
      else if ( std::map<std::string,proto::MailRedisData>::empty((const std::map<std::string,proto::MailRedisData> *const)(v4 + 352)) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mail_handler.cpp",
          "updateMailCollectState",
          1563);
        v17 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v53,
                (const char (*)[63])"getMailDataWithTran failed, mail_key_value_map is empty, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v53);
      }
      else
      {
        *(_DWORD *)(v4 + 48) = 0;
        ret = RedisOpMailData::getValidMailIdCount(*(_DWORD *)(v4 + 64), (uint32_t *)(v4 + 48), 1);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mail_handler.cpp",
            "updateMailCollectState",
            1571);
          v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v53,
                  (const char (*)[44])"getValidMailIdCount collected failed, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v53);
        }
        else
        {
          Config::getConfig();
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
          max_collected_space = ConstValueExcelConfigMgr::getCollectedMailMaxNum(&v19->design_config_.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v52);
          left_collected_space = 0;
          if ( max_collected_space > *(_DWORD *)(v4 + 48) )
            left_collected_space = max_collected_space - *(_DWORD *)(v4 + 48);
          std::set<std::string>::set((std::set<std::string> *const)(v4 + 432));
          std::set<std::string>::set((std::set<std::string> *const)(v4 + 512));
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 592));
          __for_range_1 = (std::map<std::string,proto::MailRedisData> *)(v4 + 352);
          __for_begin_0.it_ = (void *const *)std::map<std::string,proto::MailRedisData>::begin((std::map<std::string,proto::MailRedisData> *const)(v4 + 352))._M_node;
          __for_end_0.it_ = (void *const *)std::map<std::string,proto::MailRedisData>::end(__for_range_1)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<const std::string,proto::MailRedisData> >::_Self *)&__for_begin_0,
                    (const std::_Rb_tree_iterator<std::pair<const std::string,proto::MailRedisData> >::_Self *)&__for_end_0) )
          {
            __in = std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,proto::MailRedisData> > *const)&__for_begin_0);
            mail_key = std::get<0ul,std::string const,proto::MailRedisData>(__in);
            mail = std::get<1ul,std::string const,proto::MailRedisData>(__in);
            __x = proto::MailRedisData::id(mail);
            collect_state = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                              (const std::map<unsigned int,unsigned int> *)(v4 + 192),
                              &__x,
                              0);
            v20 = proto::MailRedisData::mutable_mail_bin(mail);
            proto::MailBin::set_collect_state(v20, collect_state);
            if ( collect_state == 3 )
            {
              if ( left_collected_space )
              {
                v21 = proto::MailRedisData::mutable_mail_bin(mail);
                v22 = std::numeric_limits<unsigned int>::max();
                proto::MailBin::set_expire_time(v21, v22);
                proto::MailRedisData::set_is_read(mail, 0);
                std::set<std::string>::insert((std::set<std::string> *const)(v4 + 432), mail_key);
                v23 = proto::MailRedisData::id(mail);
                common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v53, v23);
                std::set<std::string>::insert(
                  (std::set<std::string> *const)(v4 + 512),
                  (std::set<std::string>::value_type *)&v53);
                std::string::~string(&v53);
                --left_collected_space;
              }
              else
              {
                __x = proto::MailRedisData::id(mail);
                std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 592), &__x);
              }
            }
            std::_Rb_tree_iterator<std::pair<std::string const,proto::MailRedisData>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,proto::MailRedisData> > *const)&__for_begin_0);
          }
          ret = RedisOpMailData::modifyMailDataWithTran(
                  *(_DWORD *)(v4 + 64),
                  (const std::map<std::string,proto::MailRedisData> *)(v4 + 352),
                  (const std::set<std::string> *)(v4 + 432),
                  (common::midb::GetAndSetTranPtr *)(v4 + 80));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/mail_handler.cpp",
              "updateMailCollectState",
              1608);
            v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v53,
                    (const char (*)[37])"modifyMailDataWithTran failed, uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v53);
          }
          else
          {
            ret = RedisOpMailData::clearMailIdExpireTime(
                    *(_DWORD *)(v4 + 64),
                    (const std::set<std::string> *)(v4 + 512));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/mail_handler.cpp",
                "updateMailCollectState",
                1616);
              v25 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v53,
                      (const char (*)[36])"clearMailIdExpireTime failed, uid: ");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v4 + 64));
              v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v26,
                      (const char (*)[24])", persist_mail_id_set: ");
              common::milog::MiLogStream::operator<<<std::string>(v27, (const std::set<std::string> *)(v4 + 512));
              common::milog::MiLogStream::~MiLogStream(&v53);
            }
            else
            {
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 672));
              ret = MailHandler::batchDelRedisMail(
                      this,
                      *(_DWORD *)(v4 + 64),
                      5u,
                      (const std::set<unsigned int> *)(v4 + 592),
                      (std::set<unsigned int> *)(v4 + 672));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v53,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/mail_handler.cpp",
                  "updateMailCollectState",
                  1624);
                v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v53,
                        (const char (*)[32])"batchDelRedisMail failed, uid: ");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v28,
                        (const unsigned int *)(v4 + 64));
                v30 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v29,
                        (const char (*)[33])", del_collect_fail_mail_id_set: ");
                common::milog::MiLogStream::operator<<<unsigned int>(v30, (const std::set<unsigned int> *)(v4 + 592));
                common::milog::MiLogStream::~MiLogStream(&v53);
              }
              else
              {
                if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 672)) )
                {
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/mail_handler.cpp",
                    "updateMailCollectState",
                    1629);
                  v31 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          &v53,
                          (const char (*)[32])" del_collect_fail_mail_id_set: ");
                  common::milog::MiLogStream::operator<<<unsigned int>(v31, (const std::set<unsigned int> *)(v4 + 672));
                  common::milog::MiLogStream::~MiLogStream(&v53);
                }
                proto::GetRedisMailRsp::set_is_collectible_mail_transfered(rsp_0, 1);
              }
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 672));
            }
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 592));
          std::set<std::string>::~set((std::set<std::string> *const)(v4 + 512));
          std::set<std::string>::~set((std::set<std::string> *const)(v4 + 432));
        }
      }
      std::map<std::string,proto::MailRedisData>::~map((std::map<std::string,proto::MailRedisData> *const)(v4 + 352));
      std::shared_ptr<common::midb::GetAndSetTran>::~shared_ptr((std::shared_ptr<common::midb::GetAndSetTran> *const)(v4 + 80));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 272));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 192));
  }
  if ( v54 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = -168430091;
  }
};
